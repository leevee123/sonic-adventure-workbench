// DolRecomp output
#include "../generated.h"

void func_80BB6260(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80BB6260[1655] = {
        &&label_80BB6260,
        &&label_80BB6264,
        &&label_80BB6268,
        &&label_80BB626C,
        &&label_80BB6270,
        &&label_80BB6274,
        &&label_80BB6278,
        &&label_80BB627C,
        &&label_80BB6280,
        &&label_80BB6284,
        &&label_80BB6288,
        &&label_80BB628C,
        &&label_80BB6290,
        &&label_80BB6294,
        &&label_80BB6298,
        &&label_80BB629C,
        &&label_80BB62A0,
        &&label_80BB62A4,
        &&label_80BB62A8,
        &&label_80BB62AC,
        &&label_80BB62B0,
        &&label_80BB62B4,
        &&label_80BB62B8,
        &&label_80BB62BC,
        &&label_80BB62C0,
        &&label_80BB62C4,
        &&label_80BB62C8,
        &&label_80BB62CC,
        &&label_80BB62D0,
        &&label_80BB62D4,
        &&label_80BB62D8,
        &&label_80BB62DC,
        &&label_80BB62E0,
        &&label_80BB62E4,
        &&label_80BB62E8,
        &&label_80BB62EC,
        &&label_80BB62F0,
        &&label_80BB62F4,
        &&label_80BB62F8,
        &&label_80BB62FC,
        &&label_80BB6300,
        &&label_80BB6304,
        &&label_80BB6308,
        &&label_80BB630C,
        &&label_80BB6310,
        &&label_80BB6314,
        &&label_80BB6318,
        &&label_80BB631C,
        &&label_80BB6320,
        &&label_80BB6324,
        &&label_80BB6328,
        &&label_80BB632C,
        &&label_80BB6330,
        &&label_80BB6334,
        &&label_80BB6338,
        &&label_80BB633C,
        &&label_80BB6340,
        &&label_80BB6344,
        &&label_80BB6348,
        &&label_80BB634C,
        &&label_80BB6350,
        &&label_80BB6354,
        &&label_80BB6358,
        &&label_80BB635C,
        &&label_80BB6360,
        &&label_80BB6364,
        &&label_80BB6368,
        &&label_80BB636C,
        &&label_80BB6370,
        &&label_80BB6374,
        &&label_80BB6378,
        &&label_80BB637C,
        &&label_80BB6380,
        &&label_80BB6384,
        &&label_80BB6388,
        &&label_80BB638C,
        &&label_80BB6390,
        &&label_80BB6394,
        &&label_80BB6398,
        &&label_80BB639C,
        &&label_80BB63A0,
        &&label_80BB63A4,
        &&label_80BB63A8,
        &&label_80BB63AC,
        &&label_80BB63B0,
        &&label_80BB63B4,
        &&label_80BB63B8,
        &&label_80BB63BC,
        &&label_80BB63C0,
        &&label_80BB63C4,
        &&label_80BB63C8,
        &&label_80BB63CC,
        &&label_80BB63D0,
        &&label_80BB63D4,
        &&label_80BB63D8,
        &&label_80BB63DC,
        &&label_80BB63E0,
        &&label_80BB63E4,
        &&label_80BB63E8,
        &&label_80BB63EC,
        &&label_80BB63F0,
        &&label_80BB63F4,
        &&label_80BB63F8,
        &&label_80BB63FC,
        &&label_80BB6400,
        &&label_80BB6404,
        &&label_80BB6408,
        &&label_80BB640C,
        &&label_80BB6410,
        &&label_80BB6414,
        &&label_80BB6418,
        &&label_80BB641C,
        &&label_80BB6420,
        &&label_80BB6424,
        &&label_80BB6428,
        &&label_80BB642C,
        &&label_80BB6430,
        &&label_80BB6434,
        &&label_80BB6438,
        &&label_80BB643C,
        &&label_80BB6440,
        &&label_80BB6444,
        &&label_80BB6448,
        &&label_80BB644C,
        &&label_80BB6450,
        &&label_80BB6454,
        &&label_80BB6458,
        &&label_80BB645C,
        &&label_80BB6460,
        &&label_80BB6464,
        &&label_80BB6468,
        &&label_80BB646C,
        &&label_80BB6470,
        &&label_80BB6474,
        &&label_80BB6478,
        &&label_80BB647C,
        &&label_80BB6480,
        &&label_80BB6484,
        &&label_80BB6488,
        &&label_80BB648C,
        &&label_80BB6490,
        &&label_80BB6494,
        &&label_80BB6498,
        &&label_80BB649C,
        &&label_80BB64A0,
        &&label_80BB64A4,
        &&label_80BB64A8,
        &&label_80BB64AC,
        &&label_80BB64B0,
        &&label_80BB64B4,
        &&label_80BB64B8,
        &&label_80BB64BC,
        &&label_80BB64C0,
        &&label_80BB64C4,
        &&label_80BB64C8,
        &&label_80BB64CC,
        &&label_80BB64D0,
        &&label_80BB64D4,
        &&label_80BB64D8,
        &&label_80BB64DC,
        &&label_80BB64E0,
        &&label_80BB64E4,
        &&label_80BB64E8,
        &&label_80BB64EC,
        &&label_80BB64F0,
        &&label_80BB64F4,
        &&label_80BB64F8,
        &&label_80BB64FC,
        &&label_80BB6500,
        &&label_80BB6504,
        &&label_80BB6508,
        &&label_80BB650C,
        &&label_80BB6510,
        &&label_80BB6514,
        &&label_80BB6518,
        &&label_80BB651C,
        &&label_80BB6520,
        &&label_80BB6524,
        &&label_80BB6528,
        &&label_80BB652C,
        &&label_80BB6530,
        &&label_80BB6534,
        &&label_80BB6538,
        &&label_80BB653C,
        &&label_80BB6540,
        &&label_80BB6544,
        &&label_80BB6548,
        &&label_80BB654C,
        &&label_80BB6550,
        &&label_80BB6554,
        &&label_80BB6558,
        &&label_80BB655C,
        &&label_80BB6560,
        &&label_80BB6564,
        &&label_80BB6568,
        &&label_80BB656C,
        &&label_80BB6570,
        &&label_80BB6574,
        &&label_80BB6578,
        &&label_80BB657C,
        &&label_80BB6580,
        &&label_80BB6584,
        &&label_80BB6588,
        &&label_80BB658C,
        &&label_80BB6590,
        &&label_80BB6594,
        &&label_80BB6598,
        &&label_80BB659C,
        &&label_80BB65A0,
        &&label_80BB65A4,
        &&label_80BB65A8,
        &&label_80BB65AC,
        &&label_80BB65B0,
        &&label_80BB65B4,
        &&label_80BB65B8,
        &&label_80BB65BC,
        &&label_80BB65C0,
        &&label_80BB65C4,
        &&label_80BB65C8,
        &&label_80BB65CC,
        &&label_80BB65D0,
        &&label_80BB65D4,
        &&label_80BB65D8,
        &&label_80BB65DC,
        &&label_80BB65E0,
        &&label_80BB65E4,
        &&label_80BB65E8,
        &&label_80BB65EC,
        &&label_80BB65F0,
        &&label_80BB65F4,
        &&label_80BB65F8,
        &&label_80BB65FC,
        &&label_80BB6600,
        &&label_80BB6604,
        &&label_80BB6608,
        &&label_80BB660C,
        &&label_80BB6610,
        &&label_80BB6614,
        &&label_80BB6618,
        &&label_80BB661C,
        &&label_80BB6620,
        &&label_80BB6624,
        &&label_80BB6628,
        &&label_80BB662C,
        &&label_80BB6630,
        &&label_80BB6634,
        &&label_80BB6638,
        &&label_80BB663C,
        &&label_80BB6640,
        &&label_80BB6644,
        &&label_80BB6648,
        &&label_80BB664C,
        &&label_80BB6650,
        &&label_80BB6654,
        &&label_80BB6658,
        &&label_80BB665C,
        &&label_80BB6660,
        &&label_80BB6664,
        &&label_80BB6668,
        &&label_80BB666C,
        &&label_80BB6670,
        &&label_80BB6674,
        &&label_80BB6678,
        &&label_80BB667C,
        &&label_80BB6680,
        &&label_80BB6684,
        &&label_80BB6688,
        &&label_80BB668C,
        &&label_80BB6690,
        &&label_80BB6694,
        &&label_80BB6698,
        &&label_80BB669C,
        &&label_80BB66A0,
        &&label_80BB66A4,
        &&label_80BB66A8,
        &&label_80BB66AC,
        &&label_80BB66B0,
        &&label_80BB66B4,
        &&label_80BB66B8,
        &&label_80BB66BC,
        &&label_80BB66C0,
        &&label_80BB66C4,
        &&label_80BB66C8,
        &&label_80BB66CC,
        &&label_80BB66D0,
        &&label_80BB66D4,
        &&label_80BB66D8,
        &&label_80BB66DC,
        &&label_80BB66E0,
        &&label_80BB66E4,
        &&label_80BB66E8,
        &&label_80BB66EC,
        &&label_80BB66F0,
        &&label_80BB66F4,
        &&label_80BB66F8,
        &&label_80BB66FC,
        &&label_80BB6700,
        &&label_80BB6704,
        &&label_80BB6708,
        &&label_80BB670C,
        &&label_80BB6710,
        &&label_80BB6714,
        &&label_80BB6718,
        &&label_80BB671C,
        &&label_80BB6720,
        &&label_80BB6724,
        &&label_80BB6728,
        &&label_80BB672C,
        &&label_80BB6730,
        &&label_80BB6734,
        &&label_80BB6738,
        &&label_80BB673C,
        &&label_80BB6740,
        &&label_80BB6744,
        &&label_80BB6748,
        &&label_80BB674C,
        &&label_80BB6750,
        &&label_80BB6754,
        &&label_80BB6758,
        &&label_80BB675C,
        &&label_80BB6760,
        &&label_80BB6764,
        &&label_80BB6768,
        &&label_80BB676C,
        &&label_80BB6770,
        &&label_80BB6774,
        &&label_80BB6778,
        &&label_80BB677C,
        &&label_80BB6780,
        &&label_80BB6784,
        &&label_80BB6788,
        &&label_80BB678C,
        &&label_80BB6790,
        &&label_80BB6794,
        &&label_80BB6798,
        &&label_80BB679C,
        &&label_80BB67A0,
        &&label_80BB67A4,
        &&label_80BB67A8,
        &&label_80BB67AC,
        &&label_80BB67B0,
        &&label_80BB67B4,
        &&label_80BB67B8,
        &&label_80BB67BC,
        &&label_80BB67C0,
        &&label_80BB67C4,
        &&label_80BB67C8,
        &&label_80BB67CC,
        &&label_80BB67D0,
        &&label_80BB67D4,
        &&label_80BB67D8,
        &&label_80BB67DC,
        &&label_80BB67E0,
        &&label_80BB67E4,
        &&label_80BB67E8,
        &&label_80BB67EC,
        &&label_80BB67F0,
        &&label_80BB67F4,
        &&label_80BB67F8,
        &&label_80BB67FC,
        &&label_80BB6800,
        &&label_80BB6804,
        &&label_80BB6808,
        &&label_80BB680C,
        &&label_80BB6810,
        &&label_80BB6814,
        &&label_80BB6818,
        &&label_80BB681C,
        &&label_80BB6820,
        &&label_80BB6824,
        &&label_80BB6828,
        &&label_80BB682C,
        &&label_80BB6830,
        &&label_80BB6834,
        &&label_80BB6838,
        &&label_80BB683C,
        &&label_80BB6840,
        &&label_80BB6844,
        &&label_80BB6848,
        &&label_80BB684C,
        &&label_80BB6850,
        &&label_80BB6854,
        &&label_80BB6858,
        &&label_80BB685C,
        &&label_80BB6860,
        &&label_80BB6864,
        &&label_80BB6868,
        &&label_80BB686C,
        &&label_80BB6870,
        &&label_80BB6874,
        &&label_80BB6878,
        &&label_80BB687C,
        &&label_80BB6880,
        &&label_80BB6884,
        &&label_80BB6888,
        &&label_80BB688C,
        &&label_80BB6890,
        &&label_80BB6894,
        &&label_80BB6898,
        &&label_80BB689C,
        &&label_80BB68A0,
        &&label_80BB68A4,
        &&label_80BB68A8,
        &&label_80BB68AC,
        &&label_80BB68B0,
        &&label_80BB68B4,
        &&label_80BB68B8,
        &&label_80BB68BC,
        &&label_80BB68C0,
        &&label_80BB68C4,
        &&label_80BB68C8,
        &&label_80BB68CC,
        &&label_80BB68D0,
        &&label_80BB68D4,
        &&label_80BB68D8,
        &&label_80BB68DC,
        &&label_80BB68E0,
        &&label_80BB68E4,
        &&label_80BB68E8,
        &&label_80BB68EC,
        &&label_80BB68F0,
        &&label_80BB68F4,
        &&label_80BB68F8,
        &&label_80BB68FC,
        &&label_80BB6900,
        &&label_80BB6904,
        &&label_80BB6908,
        &&label_80BB690C,
        &&label_80BB6910,
        &&label_80BB6914,
        &&label_80BB6918,
        &&label_80BB691C,
        &&label_80BB6920,
        &&label_80BB6924,
        &&label_80BB6928,
        &&label_80BB692C,
        &&label_80BB6930,
        &&label_80BB6934,
        &&label_80BB6938,
        &&label_80BB693C,
        &&label_80BB6940,
        &&label_80BB6944,
        &&label_80BB6948,
        &&label_80BB694C,
        &&label_80BB6950,
        &&label_80BB6954,
        &&label_80BB6958,
        &&label_80BB695C,
        &&label_80BB6960,
        &&label_80BB6964,
        &&label_80BB6968,
        &&label_80BB696C,
        &&label_80BB6970,
        &&label_80BB6974,
        &&label_80BB6978,
        &&label_80BB697C,
        &&label_80BB6980,
        &&label_80BB6984,
        &&label_80BB6988,
        &&label_80BB698C,
        &&label_80BB6990,
        &&label_80BB6994,
        &&label_80BB6998,
        &&label_80BB699C,
        &&label_80BB69A0,
        &&label_80BB69A4,
        &&label_80BB69A8,
        &&label_80BB69AC,
        &&label_80BB69B0,
        &&label_80BB69B4,
        &&label_80BB69B8,
        &&label_80BB69BC,
        &&label_80BB69C0,
        &&label_80BB69C4,
        &&label_80BB69C8,
        &&label_80BB69CC,
        &&label_80BB69D0,
        &&label_80BB69D4,
        &&label_80BB69D8,
        &&label_80BB69DC,
        &&label_80BB69E0,
        &&label_80BB69E4,
        &&label_80BB69E8,
        &&label_80BB69EC,
        &&label_80BB69F0,
        &&label_80BB69F4,
        &&label_80BB69F8,
        &&label_80BB69FC,
        &&label_80BB6A00,
        &&label_80BB6A04,
        &&label_80BB6A08,
        &&label_80BB6A0C,
        &&label_80BB6A10,
        &&label_80BB6A14,
        &&label_80BB6A18,
        &&label_80BB6A1C,
        &&label_80BB6A20,
        &&label_80BB6A24,
        &&label_80BB6A28,
        &&label_80BB6A2C,
        &&label_80BB6A30,
        &&label_80BB6A34,
        &&label_80BB6A38,
        &&label_80BB6A3C,
        &&label_80BB6A40,
        &&label_80BB6A44,
        &&label_80BB6A48,
        &&label_80BB6A4C,
        &&label_80BB6A50,
        &&label_80BB6A54,
        &&label_80BB6A58,
        &&label_80BB6A5C,
        &&label_80BB6A60,
        &&label_80BB6A64,
        &&label_80BB6A68,
        &&label_80BB6A6C,
        &&label_80BB6A70,
        &&label_80BB6A74,
        &&label_80BB6A78,
        &&label_80BB6A7C,
        &&label_80BB6A80,
        &&label_80BB6A84,
        &&label_80BB6A88,
        &&label_80BB6A8C,
        &&label_80BB6A90,
        &&label_80BB6A94,
        &&label_80BB6A98,
        &&label_80BB6A9C,
        &&label_80BB6AA0,
        &&label_80BB6AA4,
        &&label_80BB6AA8,
        &&label_80BB6AAC,
        &&label_80BB6AB0,
        &&label_80BB6AB4,
        &&label_80BB6AB8,
        &&label_80BB6ABC,
        &&label_80BB6AC0,
        &&label_80BB6AC4,
        &&label_80BB6AC8,
        &&label_80BB6ACC,
        &&label_80BB6AD0,
        &&label_80BB6AD4,
        &&label_80BB6AD8,
        &&label_80BB6ADC,
        &&label_80BB6AE0,
        &&label_80BB6AE4,
        &&label_80BB6AE8,
        &&label_80BB6AEC,
        &&label_80BB6AF0,
        &&label_80BB6AF4,
        &&label_80BB6AF8,
        &&label_80BB6AFC,
        &&label_80BB6B00,
        &&label_80BB6B04,
        &&label_80BB6B08,
        &&label_80BB6B0C,
        &&label_80BB6B10,
        &&label_80BB6B14,
        &&label_80BB6B18,
        &&label_80BB6B1C,
        &&label_80BB6B20,
        &&label_80BB6B24,
        &&label_80BB6B28,
        &&label_80BB6B2C,
        &&label_80BB6B30,
        &&label_80BB6B34,
        &&label_80BB6B38,
        &&label_80BB6B3C,
        &&label_80BB6B40,
        &&label_80BB6B44,
        &&label_80BB6B48,
        &&label_80BB6B4C,
        &&label_80BB6B50,
        &&label_80BB6B54,
        &&label_80BB6B58,
        &&label_80BB6B5C,
        &&label_80BB6B60,
        &&label_80BB6B64,
        &&label_80BB6B68,
        &&label_80BB6B6C,
        &&label_80BB6B70,
        &&label_80BB6B74,
        &&label_80BB6B78,
        &&label_80BB6B7C,
        &&label_80BB6B80,
        &&label_80BB6B84,
        &&label_80BB6B88,
        &&label_80BB6B8C,
        &&label_80BB6B90,
        &&label_80BB6B94,
        &&label_80BB6B98,
        &&label_80BB6B9C,
        &&label_80BB6BA0,
        &&label_80BB6BA4,
        &&label_80BB6BA8,
        &&label_80BB6BAC,
        &&label_80BB6BB0,
        &&label_80BB6BB4,
        &&label_80BB6BB8,
        &&label_80BB6BBC,
        &&label_80BB6BC0,
        &&label_80BB6BC4,
        &&label_80BB6BC8,
        &&label_80BB6BCC,
        &&label_80BB6BD0,
        &&label_80BB6BD4,
        &&label_80BB6BD8,
        &&label_80BB6BDC,
        &&label_80BB6BE0,
        &&label_80BB6BE4,
        &&label_80BB6BE8,
        &&label_80BB6BEC,
        &&label_80BB6BF0,
        &&label_80BB6BF4,
        &&label_80BB6BF8,
        &&label_80BB6BFC,
        &&label_80BB6C00,
        &&label_80BB6C04,
        &&label_80BB6C08,
        &&label_80BB6C0C,
        &&label_80BB6C10,
        &&label_80BB6C14,
        &&label_80BB6C18,
        &&label_80BB6C1C,
        &&label_80BB6C20,
        &&label_80BB6C24,
        &&label_80BB6C28,
        &&label_80BB6C2C,
        &&label_80BB6C30,
        &&label_80BB6C34,
        &&label_80BB6C38,
        &&label_80BB6C3C,
        &&label_80BB6C40,
        &&label_80BB6C44,
        &&label_80BB6C48,
        &&label_80BB6C4C,
        &&label_80BB6C50,
        &&label_80BB6C54,
        &&label_80BB6C58,
        &&label_80BB6C5C,
        &&label_80BB6C60,
        &&label_80BB6C64,
        &&label_80BB6C68,
        &&label_80BB6C6C,
        &&label_80BB6C70,
        &&label_80BB6C74,
        &&label_80BB6C78,
        &&label_80BB6C7C,
        &&label_80BB6C80,
        &&label_80BB6C84,
        &&label_80BB6C88,
        &&label_80BB6C8C,
        &&label_80BB6C90,
        &&label_80BB6C94,
        &&label_80BB6C98,
        &&label_80BB6C9C,
        &&label_80BB6CA0,
        &&label_80BB6CA4,
        &&label_80BB6CA8,
        &&label_80BB6CAC,
        &&label_80BB6CB0,
        &&label_80BB6CB4,
        &&label_80BB6CB8,
        &&label_80BB6CBC,
        &&label_80BB6CC0,
        &&label_80BB6CC4,
        &&label_80BB6CC8,
        &&label_80BB6CCC,
        &&label_80BB6CD0,
        &&label_80BB6CD4,
        &&label_80BB6CD8,
        &&label_80BB6CDC,
        &&label_80BB6CE0,
        &&label_80BB6CE4,
        &&label_80BB6CE8,
        &&label_80BB6CEC,
        &&label_80BB6CF0,
        &&label_80BB6CF4,
        &&label_80BB6CF8,
        &&label_80BB6CFC,
        &&label_80BB6D00,
        &&label_80BB6D04,
        &&label_80BB6D08,
        &&label_80BB6D0C,
        &&label_80BB6D10,
        &&label_80BB6D14,
        &&label_80BB6D18,
        &&label_80BB6D1C,
        &&label_80BB6D20,
        &&label_80BB6D24,
        &&label_80BB6D28,
        &&label_80BB6D2C,
        &&label_80BB6D30,
        &&label_80BB6D34,
        &&label_80BB6D38,
        &&label_80BB6D3C,
        &&label_80BB6D40,
        &&label_80BB6D44,
        &&label_80BB6D48,
        &&label_80BB6D4C,
        &&label_80BB6D50,
        &&label_80BB6D54,
        &&label_80BB6D58,
        &&label_80BB6D5C,
        &&label_80BB6D60,
        &&label_80BB6D64,
        &&label_80BB6D68,
        &&label_80BB6D6C,
        &&label_80BB6D70,
        &&label_80BB6D74,
        &&label_80BB6D78,
        &&label_80BB6D7C,
        &&label_80BB6D80,
        &&label_80BB6D84,
        &&label_80BB6D88,
        &&label_80BB6D8C,
        &&label_80BB6D90,
        &&label_80BB6D94,
        &&label_80BB6D98,
        &&label_80BB6D9C,
        &&label_80BB6DA0,
        &&label_80BB6DA4,
        &&label_80BB6DA8,
        &&label_80BB6DAC,
        &&label_80BB6DB0,
        &&label_80BB6DB4,
        &&label_80BB6DB8,
        &&label_80BB6DBC,
        &&label_80BB6DC0,
        &&label_80BB6DC4,
        &&label_80BB6DC8,
        &&label_80BB6DCC,
        &&label_80BB6DD0,
        &&label_80BB6DD4,
        &&label_80BB6DD8,
        &&label_80BB6DDC,
        &&label_80BB6DE0,
        &&label_80BB6DE4,
        &&label_80BB6DE8,
        &&label_80BB6DEC,
        &&label_80BB6DF0,
        &&label_80BB6DF4,
        &&label_80BB6DF8,
        &&label_80BB6DFC,
        &&label_80BB6E00,
        &&label_80BB6E04,
        &&label_80BB6E08,
        &&label_80BB6E0C,
        &&label_80BB6E10,
        &&label_80BB6E14,
        &&label_80BB6E18,
        &&label_80BB6E1C,
        &&label_80BB6E20,
        &&label_80BB6E24,
        &&label_80BB6E28,
        &&label_80BB6E2C,
        &&label_80BB6E30,
        &&label_80BB6E34,
        &&label_80BB6E38,
        &&label_80BB6E3C,
        &&label_80BB6E40,
        &&label_80BB6E44,
        &&label_80BB6E48,
        &&label_80BB6E4C,
        &&label_80BB6E50,
        &&label_80BB6E54,
        &&label_80BB6E58,
        &&label_80BB6E5C,
        &&label_80BB6E60,
        &&label_80BB6E64,
        &&label_80BB6E68,
        &&label_80BB6E6C,
        &&label_80BB6E70,
        &&label_80BB6E74,
        &&label_80BB6E78,
        &&label_80BB6E7C,
        &&label_80BB6E80,
        &&label_80BB6E84,
        &&label_80BB6E88,
        &&label_80BB6E8C,
        &&label_80BB6E90,
        &&label_80BB6E94,
        &&label_80BB6E98,
        &&label_80BB6E9C,
        &&label_80BB6EA0,
        &&label_80BB6EA4,
        &&label_80BB6EA8,
        &&label_80BB6EAC,
        &&label_80BB6EB0,
        &&label_80BB6EB4,
        &&label_80BB6EB8,
        &&label_80BB6EBC,
        &&label_80BB6EC0,
        &&label_80BB6EC4,
        &&label_80BB6EC8,
        &&label_80BB6ECC,
        &&label_80BB6ED0,
        &&label_80BB6ED4,
        &&label_80BB6ED8,
        &&label_80BB6EDC,
        &&label_80BB6EE0,
        &&label_80BB6EE4,
        &&label_80BB6EE8,
        &&label_80BB6EEC,
        &&label_80BB6EF0,
        &&label_80BB6EF4,
        &&label_80BB6EF8,
        &&label_80BB6EFC,
        &&label_80BB6F00,
        &&label_80BB6F04,
        &&label_80BB6F08,
        &&label_80BB6F0C,
        &&label_80BB6F10,
        &&label_80BB6F14,
        &&label_80BB6F18,
        &&label_80BB6F1C,
        &&label_80BB6F20,
        &&label_80BB6F24,
        &&label_80BB6F28,
        &&label_80BB6F2C,
        &&label_80BB6F30,
        &&label_80BB6F34,
        &&label_80BB6F38,
        &&label_80BB6F3C,
        &&label_80BB6F40,
        &&label_80BB6F44,
        &&label_80BB6F48,
        &&label_80BB6F4C,
        &&label_80BB6F50,
        &&label_80BB6F54,
        &&label_80BB6F58,
        &&label_80BB6F5C,
        &&label_80BB6F60,
        &&label_80BB6F64,
        &&label_80BB6F68,
        &&label_80BB6F6C,
        &&label_80BB6F70,
        &&label_80BB6F74,
        &&label_80BB6F78,
        &&label_80BB6F7C,
        &&label_80BB6F80,
        &&label_80BB6F84,
        &&label_80BB6F88,
        &&label_80BB6F8C,
        &&label_80BB6F90,
        &&label_80BB6F94,
        &&label_80BB6F98,
        &&label_80BB6F9C,
        &&label_80BB6FA0,
        &&label_80BB6FA4,
        &&label_80BB6FA8,
        &&label_80BB6FAC,
        &&label_80BB6FB0,
        &&label_80BB6FB4,
        &&label_80BB6FB8,
        &&label_80BB6FBC,
        &&label_80BB6FC0,
        &&label_80BB6FC4,
        &&label_80BB6FC8,
        &&label_80BB6FCC,
        &&label_80BB6FD0,
        &&label_80BB6FD4,
        &&label_80BB6FD8,
        &&label_80BB6FDC,
        &&label_80BB6FE0,
        &&label_80BB6FE4,
        &&label_80BB6FE8,
        &&label_80BB6FEC,
        &&label_80BB6FF0,
        &&label_80BB6FF4,
        &&label_80BB6FF8,
        &&label_80BB6FFC,
        &&label_80BB7000,
        &&label_80BB7004,
        &&label_80BB7008,
        &&label_80BB700C,
        &&label_80BB7010,
        &&label_80BB7014,
        &&label_80BB7018,
        &&label_80BB701C,
        &&label_80BB7020,
        &&label_80BB7024,
        &&label_80BB7028,
        &&label_80BB702C,
        &&label_80BB7030,
        &&label_80BB7034,
        &&label_80BB7038,
        &&label_80BB703C,
        &&label_80BB7040,
        &&label_80BB7044,
        &&label_80BB7048,
        &&label_80BB704C,
        &&label_80BB7050,
        &&label_80BB7054,
        &&label_80BB7058,
        &&label_80BB705C,
        &&label_80BB7060,
        &&label_80BB7064,
        &&label_80BB7068,
        &&label_80BB706C,
        &&label_80BB7070,
        &&label_80BB7074,
        &&label_80BB7078,
        &&label_80BB707C,
        &&label_80BB7080,
        &&label_80BB7084,
        &&label_80BB7088,
        &&label_80BB708C,
        &&label_80BB7090,
        &&label_80BB7094,
        &&label_80BB7098,
        &&label_80BB709C,
        &&label_80BB70A0,
        &&label_80BB70A4,
        &&label_80BB70A8,
        &&label_80BB70AC,
        &&label_80BB70B0,
        &&label_80BB70B4,
        &&label_80BB70B8,
        &&label_80BB70BC,
        &&label_80BB70C0,
        &&label_80BB70C4,
        &&label_80BB70C8,
        &&label_80BB70CC,
        &&label_80BB70D0,
        &&label_80BB70D4,
        &&label_80BB70D8,
        &&label_80BB70DC,
        &&label_80BB70E0,
        &&label_80BB70E4,
        &&label_80BB70E8,
        &&label_80BB70EC,
        &&label_80BB70F0,
        &&label_80BB70F4,
        &&label_80BB70F8,
        &&label_80BB70FC,
        &&label_80BB7100,
        &&label_80BB7104,
        &&label_80BB7108,
        &&label_80BB710C,
        &&label_80BB7110,
        &&label_80BB7114,
        &&label_80BB7118,
        &&label_80BB711C,
        &&label_80BB7120,
        &&label_80BB7124,
        &&label_80BB7128,
        &&label_80BB712C,
        &&label_80BB7130,
        &&label_80BB7134,
        &&label_80BB7138,
        &&label_80BB713C,
        &&label_80BB7140,
        &&label_80BB7144,
        &&label_80BB7148,
        &&label_80BB714C,
        &&label_80BB7150,
        &&label_80BB7154,
        &&label_80BB7158,
        &&label_80BB715C,
        &&label_80BB7160,
        &&label_80BB7164,
        &&label_80BB7168,
        &&label_80BB716C,
        &&label_80BB7170,
        &&label_80BB7174,
        &&label_80BB7178,
        &&label_80BB717C,
        &&label_80BB7180,
        &&label_80BB7184,
        &&label_80BB7188,
        &&label_80BB718C,
        &&label_80BB7190,
        &&label_80BB7194,
        &&label_80BB7198,
        &&label_80BB719C,
        &&label_80BB71A0,
        &&label_80BB71A4,
        &&label_80BB71A8,
        &&label_80BB71AC,
        &&label_80BB71B0,
        &&label_80BB71B4,
        &&label_80BB71B8,
        &&label_80BB71BC,
        &&label_80BB71C0,
        &&label_80BB71C4,
        &&label_80BB71C8,
        &&label_80BB71CC,
        &&label_80BB71D0,
        &&label_80BB71D4,
        &&label_80BB71D8,
        &&label_80BB71DC,
        &&label_80BB71E0,
        &&label_80BB71E4,
        &&label_80BB71E8,
        &&label_80BB71EC,
        &&label_80BB71F0,
        &&label_80BB71F4,
        &&label_80BB71F8,
        &&label_80BB71FC,
        &&label_80BB7200,
        &&label_80BB7204,
        &&label_80BB7208,
        &&label_80BB720C,
        &&label_80BB7210,
        &&label_80BB7214,
        &&label_80BB7218,
        &&label_80BB721C,
        &&label_80BB7220,
        &&label_80BB7224,
        &&label_80BB7228,
        &&label_80BB722C,
        &&label_80BB7230,
        &&label_80BB7234,
        &&label_80BB7238,
        &&label_80BB723C,
        &&label_80BB7240,
        &&label_80BB7244,
        &&label_80BB7248,
        &&label_80BB724C,
        &&label_80BB7250,
        &&label_80BB7254,
        &&label_80BB7258,
        &&label_80BB725C,
        &&label_80BB7260,
        &&label_80BB7264,
        &&label_80BB7268,
        &&label_80BB726C,
        &&label_80BB7270,
        &&label_80BB7274,
        &&label_80BB7278,
        &&label_80BB727C,
        &&label_80BB7280,
        &&label_80BB7284,
        &&label_80BB7288,
        &&label_80BB728C,
        &&label_80BB7290,
        &&label_80BB7294,
        &&label_80BB7298,
        &&label_80BB729C,
        &&label_80BB72A0,
        &&label_80BB72A4,
        &&label_80BB72A8,
        &&label_80BB72AC,
        &&label_80BB72B0,
        &&label_80BB72B4,
        &&label_80BB72B8,
        &&label_80BB72BC,
        &&label_80BB72C0,
        &&label_80BB72C4,
        &&label_80BB72C8,
        &&label_80BB72CC,
        &&label_80BB72D0,
        &&label_80BB72D4,
        &&label_80BB72D8,
        &&label_80BB72DC,
        &&label_80BB72E0,
        &&label_80BB72E4,
        &&label_80BB72E8,
        &&label_80BB72EC,
        &&label_80BB72F0,
        &&label_80BB72F4,
        &&label_80BB72F8,
        &&label_80BB72FC,
        &&label_80BB7300,
        &&label_80BB7304,
        &&label_80BB7308,
        &&label_80BB730C,
        &&label_80BB7310,
        &&label_80BB7314,
        &&label_80BB7318,
        &&label_80BB731C,
        &&label_80BB7320,
        &&label_80BB7324,
        &&label_80BB7328,
        &&label_80BB732C,
        &&label_80BB7330,
        &&label_80BB7334,
        &&label_80BB7338,
        &&label_80BB733C,
        &&label_80BB7340,
        &&label_80BB7344,
        &&label_80BB7348,
        &&label_80BB734C,
        &&label_80BB7350,
        &&label_80BB7354,
        &&label_80BB7358,
        &&label_80BB735C,
        &&label_80BB7360,
        &&label_80BB7364,
        &&label_80BB7368,
        &&label_80BB736C,
        &&label_80BB7370,
        &&label_80BB7374,
        &&label_80BB7378,
        &&label_80BB737C,
        &&label_80BB7380,
        &&label_80BB7384,
        &&label_80BB7388,
        &&label_80BB738C,
        &&label_80BB7390,
        &&label_80BB7394,
        &&label_80BB7398,
        &&label_80BB739C,
        &&label_80BB73A0,
        &&label_80BB73A4,
        &&label_80BB73A8,
        &&label_80BB73AC,
        &&label_80BB73B0,
        &&label_80BB73B4,
        &&label_80BB73B8,
        &&label_80BB73BC,
        &&label_80BB73C0,
        &&label_80BB73C4,
        &&label_80BB73C8,
        &&label_80BB73CC,
        &&label_80BB73D0,
        &&label_80BB73D4,
        &&label_80BB73D8,
        &&label_80BB73DC,
        &&label_80BB73E0,
        &&label_80BB73E4,
        &&label_80BB73E8,
        &&label_80BB73EC,
        &&label_80BB73F0,
        &&label_80BB73F4,
        &&label_80BB73F8,
        &&label_80BB73FC,
        &&label_80BB7400,
        &&label_80BB7404,
        &&label_80BB7408,
        &&label_80BB740C,
        &&label_80BB7410,
        &&label_80BB7414,
        &&label_80BB7418,
        &&label_80BB741C,
        &&label_80BB7420,
        &&label_80BB7424,
        &&label_80BB7428,
        &&label_80BB742C,
        &&label_80BB7430,
        &&label_80BB7434,
        &&label_80BB7438,
        &&label_80BB743C,
        &&label_80BB7440,
        &&label_80BB7444,
        &&label_80BB7448,
        &&label_80BB744C,
        &&label_80BB7450,
        &&label_80BB7454,
        &&label_80BB7458,
        &&label_80BB745C,
        &&label_80BB7460,
        &&label_80BB7464,
        &&label_80BB7468,
        &&label_80BB746C,
        &&label_80BB7470,
        &&label_80BB7474,
        &&label_80BB7478,
        &&label_80BB747C,
        &&label_80BB7480,
        &&label_80BB7484,
        &&label_80BB7488,
        &&label_80BB748C,
        &&label_80BB7490,
        &&label_80BB7494,
        &&label_80BB7498,
        &&label_80BB749C,
        &&label_80BB74A0,
        &&label_80BB74A4,
        &&label_80BB74A8,
        &&label_80BB74AC,
        &&label_80BB74B0,
        &&label_80BB74B4,
        &&label_80BB74B8,
        &&label_80BB74BC,
        &&label_80BB74C0,
        &&label_80BB74C4,
        &&label_80BB74C8,
        &&label_80BB74CC,
        &&label_80BB74D0,
        &&label_80BB74D4,
        &&label_80BB74D8,
        &&label_80BB74DC,
        &&label_80BB74E0,
        &&label_80BB74E4,
        &&label_80BB74E8,
        &&label_80BB74EC,
        &&label_80BB74F0,
        &&label_80BB74F4,
        &&label_80BB74F8,
        &&label_80BB74FC,
        &&label_80BB7500,
        &&label_80BB7504,
        &&label_80BB7508,
        &&label_80BB750C,
        &&label_80BB7510,
        &&label_80BB7514,
        &&label_80BB7518,
        &&label_80BB751C,
        &&label_80BB7520,
        &&label_80BB7524,
        &&label_80BB7528,
        &&label_80BB752C,
        &&label_80BB7530,
        &&label_80BB7534,
        &&label_80BB7538,
        &&label_80BB753C,
        &&label_80BB7540,
        &&label_80BB7544,
        &&label_80BB7548,
        &&label_80BB754C,
        &&label_80BB7550,
        &&label_80BB7554,
        &&label_80BB7558,
        &&label_80BB755C,
        &&label_80BB7560,
        &&label_80BB7564,
        &&label_80BB7568,
        &&label_80BB756C,
        &&label_80BB7570,
        &&label_80BB7574,
        &&label_80BB7578,
        &&label_80BB757C,
        &&label_80BB7580,
        &&label_80BB7584,
        &&label_80BB7588,
        &&label_80BB758C,
        &&label_80BB7590,
        &&label_80BB7594,
        &&label_80BB7598,
        &&label_80BB759C,
        &&label_80BB75A0,
        &&label_80BB75A4,
        &&label_80BB75A8,
        &&label_80BB75AC,
        &&label_80BB75B0,
        &&label_80BB75B4,
        &&label_80BB75B8,
        &&label_80BB75BC,
        &&label_80BB75C0,
        &&label_80BB75C4,
        &&label_80BB75C8,
        &&label_80BB75CC,
        &&label_80BB75D0,
        &&label_80BB75D4,
        &&label_80BB75D8,
        &&label_80BB75DC,
        &&label_80BB75E0,
        &&label_80BB75E4,
        &&label_80BB75E8,
        &&label_80BB75EC,
        &&label_80BB75F0,
        &&label_80BB75F4,
        &&label_80BB75F8,
        &&label_80BB75FC,
        &&label_80BB7600,
        &&label_80BB7604,
        &&label_80BB7608,
        &&label_80BB760C,
        &&label_80BB7610,
        &&label_80BB7614,
        &&label_80BB7618,
        &&label_80BB761C,
        &&label_80BB7620,
        &&label_80BB7624,
        &&label_80BB7628,
        &&label_80BB762C,
        &&label_80BB7630,
        &&label_80BB7634,
        &&label_80BB7638,
        &&label_80BB763C,
        &&label_80BB7640,
        &&label_80BB7644,
        &&label_80BB7648,
        &&label_80BB764C,
        &&label_80BB7650,
        &&label_80BB7654,
        &&label_80BB7658,
        &&label_80BB765C,
        &&label_80BB7660,
        &&label_80BB7664,
        &&label_80BB7668,
        &&label_80BB766C,
        &&label_80BB7670,
        &&label_80BB7674,
        &&label_80BB7678,
        &&label_80BB767C,
        &&label_80BB7680,
        &&label_80BB7684,
        &&label_80BB7688,
        &&label_80BB768C,
        &&label_80BB7690,
        &&label_80BB7694,
        &&label_80BB7698,
        &&label_80BB769C,
        &&label_80BB76A0,
        &&label_80BB76A4,
        &&label_80BB76A8,
        &&label_80BB76AC,
        &&label_80BB76B0,
        &&label_80BB76B4,
        &&label_80BB76B8,
        &&label_80BB76BC,
        &&label_80BB76C0,
        &&label_80BB76C4,
        &&label_80BB76C8,
        &&label_80BB76CC,
        &&label_80BB76D0,
        &&label_80BB76D4,
        &&label_80BB76D8,
        &&label_80BB76DC,
        &&label_80BB76E0,
        &&label_80BB76E4,
        &&label_80BB76E8,
        &&label_80BB76EC,
        &&label_80BB76F0,
        &&label_80BB76F4,
        &&label_80BB76F8,
        &&label_80BB76FC,
        &&label_80BB7700,
        &&label_80BB7704,
        &&label_80BB7708,
        &&label_80BB770C,
        &&label_80BB7710,
        &&label_80BB7714,
        &&label_80BB7718,
        &&label_80BB771C,
        &&label_80BB7720,
        &&label_80BB7724,
        &&label_80BB7728,
        &&label_80BB772C,
        &&label_80BB7730,
        &&label_80BB7734,
        &&label_80BB7738,
        &&label_80BB773C,
        &&label_80BB7740,
        &&label_80BB7744,
        &&label_80BB7748,
        &&label_80BB774C,
        &&label_80BB7750,
        &&label_80BB7754,
        &&label_80BB7758,
        &&label_80BB775C,
        &&label_80BB7760,
        &&label_80BB7764,
        &&label_80BB7768,
        &&label_80BB776C,
        &&label_80BB7770,
        &&label_80BB7774,
        &&label_80BB7778,
        &&label_80BB777C,
        &&label_80BB7780,
        &&label_80BB7784,
        &&label_80BB7788,
        &&label_80BB778C,
        &&label_80BB7790,
        &&label_80BB7794,
        &&label_80BB7798,
        &&label_80BB779C,
        &&label_80BB77A0,
        &&label_80BB77A4,
        &&label_80BB77A8,
        &&label_80BB77AC,
        &&label_80BB77B0,
        &&label_80BB77B4,
        &&label_80BB77B8,
        &&label_80BB77BC,
        &&label_80BB77C0,
        &&label_80BB77C4,
        &&label_80BB77C8,
        &&label_80BB77CC,
        &&label_80BB77D0,
        &&label_80BB77D4,
        &&label_80BB77D8,
        &&label_80BB77DC,
        &&label_80BB77E0,
        &&label_80BB77E4,
        &&label_80BB77E8,
        &&label_80BB77EC,
        &&label_80BB77F0,
        &&label_80BB77F4,
        &&label_80BB77F8,
        &&label_80BB77FC,
        &&label_80BB7800,
        &&label_80BB7804,
        &&label_80BB7808,
        &&label_80BB780C,
        &&label_80BB7810,
        &&label_80BB7814,
        &&label_80BB7818,
        &&label_80BB781C,
        &&label_80BB7820,
        &&label_80BB7824,
        &&label_80BB7828,
        &&label_80BB782C,
        &&label_80BB7830,
        &&label_80BB7834,
        &&label_80BB7838,
        &&label_80BB783C,
        &&label_80BB7840,
        &&label_80BB7844,
        &&label_80BB7848,
        &&label_80BB784C,
        &&label_80BB7850,
        &&label_80BB7854,
        &&label_80BB7858,
        &&label_80BB785C,
        &&label_80BB7860,
        &&label_80BB7864,
        &&label_80BB7868,
        &&label_80BB786C,
        &&label_80BB7870,
        &&label_80BB7874,
        &&label_80BB7878,
        &&label_80BB787C,
        &&label_80BB7880,
        &&label_80BB7884,
        &&label_80BB7888,
        &&label_80BB788C,
        &&label_80BB7890,
        &&label_80BB7894,
        &&label_80BB7898,
        &&label_80BB789C,
        &&label_80BB78A0,
        &&label_80BB78A4,
        &&label_80BB78A8,
        &&label_80BB78AC,
        &&label_80BB78B0,
        &&label_80BB78B4,
        &&label_80BB78B8,
        &&label_80BB78BC,
        &&label_80BB78C0,
        &&label_80BB78C4,
        &&label_80BB78C8,
        &&label_80BB78CC,
        &&label_80BB78D0,
        &&label_80BB78D4,
        &&label_80BB78D8,
        &&label_80BB78DC,
        &&label_80BB78E0,
        &&label_80BB78E4,
        &&label_80BB78E8,
        &&label_80BB78EC,
        &&label_80BB78F0,
        &&label_80BB78F4,
        &&label_80BB78F8,
        &&label_80BB78FC,
        &&label_80BB7900,
        &&label_80BB7904,
        &&label_80BB7908,
        &&label_80BB790C,
        &&label_80BB7910,
        &&label_80BB7914,
        &&label_80BB7918,
        &&label_80BB791C,
        &&label_80BB7920,
        &&label_80BB7924,
        &&label_80BB7928,
        &&label_80BB792C,
        &&label_80BB7930,
        &&label_80BB7934,
        &&label_80BB7938,
        &&label_80BB793C,
        &&label_80BB7940,
        &&label_80BB7944,
        &&label_80BB7948,
        &&label_80BB794C,
        &&label_80BB7950,
        &&label_80BB7954,
        &&label_80BB7958,
        &&label_80BB795C,
        &&label_80BB7960,
        &&label_80BB7964,
        &&label_80BB7968,
        &&label_80BB796C,
        &&label_80BB7970,
        &&label_80BB7974,
        &&label_80BB7978,
        &&label_80BB797C,
        &&label_80BB7980,
        &&label_80BB7984,
        &&label_80BB7988,
        &&label_80BB798C,
        &&label_80BB7990,
        &&label_80BB7994,
        &&label_80BB7998,
        &&label_80BB799C,
        &&label_80BB79A0,
        &&label_80BB79A4,
        &&label_80BB79A8,
        &&label_80BB79AC,
        &&label_80BB79B0,
        &&label_80BB79B4,
        &&label_80BB79B8,
        &&label_80BB79BC,
        &&label_80BB79C0,
        &&label_80BB79C4,
        &&label_80BB79C8,
        &&label_80BB79CC,
        &&label_80BB79D0,
        &&label_80BB79D4,
        &&label_80BB79D8,
        &&label_80BB79DC,
        &&label_80BB79E0,
        &&label_80BB79E4,
        &&label_80BB79E8,
        &&label_80BB79EC,
        &&label_80BB79F0,
        &&label_80BB79F4,
        &&label_80BB79F8,
        &&label_80BB79FC,
        &&label_80BB7A00,
        &&label_80BB7A04,
        &&label_80BB7A08,
        &&label_80BB7A0C,
        &&label_80BB7A10,
        &&label_80BB7A14,
        &&label_80BB7A18,
        &&label_80BB7A1C,
        &&label_80BB7A20,
        &&label_80BB7A24,
        &&label_80BB7A28,
        &&label_80BB7A2C,
        &&label_80BB7A30,
        &&label_80BB7A34,
        &&label_80BB7A38,
        &&label_80BB7A3C,
        &&label_80BB7A40,
        &&label_80BB7A44,
        &&label_80BB7A48,
        &&label_80BB7A4C,
        &&label_80BB7A50,
        &&label_80BB7A54,
        &&label_80BB7A58,
        &&label_80BB7A5C,
        &&label_80BB7A60,
        &&label_80BB7A64,
        &&label_80BB7A68,
        &&label_80BB7A6C,
        &&label_80BB7A70,
        &&label_80BB7A74,
        &&label_80BB7A78,
        &&label_80BB7A7C,
        &&label_80BB7A80,
        &&label_80BB7A84,
        &&label_80BB7A88,
        &&label_80BB7A8C,
        &&label_80BB7A90,
        &&label_80BB7A94,
        &&label_80BB7A98,
        &&label_80BB7A9C,
        &&label_80BB7AA0,
        &&label_80BB7AA4,
        &&label_80BB7AA8,
        &&label_80BB7AAC,
        &&label_80BB7AB0,
        &&label_80BB7AB4,
        &&label_80BB7AB8,
        &&label_80BB7ABC,
        &&label_80BB7AC0,
        &&label_80BB7AC4,
        &&label_80BB7AC8,
        &&label_80BB7ACC,
        &&label_80BB7AD0,
        &&label_80BB7AD4,
        &&label_80BB7AD8,
        &&label_80BB7ADC,
        &&label_80BB7AE0,
        &&label_80BB7AE4,
        &&label_80BB7AE8,
        &&label_80BB7AEC,
        &&label_80BB7AF0,
        &&label_80BB7AF4,
        &&label_80BB7AF8,
        &&label_80BB7AFC,
        &&label_80BB7B00,
        &&label_80BB7B04,
        &&label_80BB7B08,
        &&label_80BB7B0C,
        &&label_80BB7B10,
        &&label_80BB7B14,
        &&label_80BB7B18,
        &&label_80BB7B1C,
        &&label_80BB7B20,
        &&label_80BB7B24,
        &&label_80BB7B28,
        &&label_80BB7B2C,
        &&label_80BB7B30,
        &&label_80BB7B34,
        &&label_80BB7B38,
        &&label_80BB7B3C,
        &&label_80BB7B40,
        &&label_80BB7B44,
        &&label_80BB7B48,
        &&label_80BB7B4C,
        &&label_80BB7B50,
        &&label_80BB7B54,
        &&label_80BB7B58,
        &&label_80BB7B5C,
        &&label_80BB7B60,
        &&label_80BB7B64,
        &&label_80BB7B68,
        &&label_80BB7B6C,
        &&label_80BB7B70,
        &&label_80BB7B74,
        &&label_80BB7B78,
        &&label_80BB7B7C,
        &&label_80BB7B80,
        &&label_80BB7B84,
        &&label_80BB7B88,
        &&label_80BB7B8C,
        &&label_80BB7B90,
        &&label_80BB7B94,
        &&label_80BB7B98,
        &&label_80BB7B9C,
        &&label_80BB7BA0,
        &&label_80BB7BA4,
        &&label_80BB7BA8,
        &&label_80BB7BAC,
        &&label_80BB7BB0,
        &&label_80BB7BB4,
        &&label_80BB7BB8,
        &&label_80BB7BBC,
        &&label_80BB7BC0,
        &&label_80BB7BC4,
        &&label_80BB7BC8,
        &&label_80BB7BCC,
        &&label_80BB7BD0,
        &&label_80BB7BD4,
        &&label_80BB7BD8,
        &&label_80BB7BDC,
        &&label_80BB7BE0,
        &&label_80BB7BE4,
        &&label_80BB7BE8,
        &&label_80BB7BEC,
        &&label_80BB7BF0,
        &&label_80BB7BF4,
        &&label_80BB7BF8,
        &&label_80BB7BFC,
        &&label_80BB7C00,
        &&label_80BB7C04,
        &&label_80BB7C08,
        &&label_80BB7C0C,
        &&label_80BB7C10,
        &&label_80BB7C14,
        &&label_80BB7C18,
        &&label_80BB7C1C,
        &&label_80BB7C20,
        &&label_80BB7C24,
        &&label_80BB7C28,
        &&label_80BB7C2C,
        &&label_80BB7C30,
        &&label_80BB7C34,
        &&label_80BB7C38
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80BB6260u && pc <= 0x80BB7C38u && ((pc - 0x80BB6260u) & 3u) == 0u)
            goto *pc_table_80BB6260[(pc - 0x80BB6260u) >> 2];
    }
    return;
label_80BB6260:
    ctx->pc = 0x80BB6260u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6260u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BB6260: stwu     r1, -16(r1)
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
label_80BB6264:
    ctx->pc = 0x80BB6264u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6264u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BB6264: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BB6268:
    ctx->pc = 0x80BB6268u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6268u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BB6268: stw     r0, 20(r1)
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
label_80BB626C:
    ctx->pc = 0x80BB626Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB626Cu)) return;
    // 80BB626C: cmpwi   r3, 2
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

label_80BB6270:
    ctx->pc = 0x80BB6270u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6270u)) return;
    // 80BB6270: bc    12, 2, 0x80BB71FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80BB71FC;
        }
    }

label_80BB6274:
    ctx->pc = 0x80BB6274u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6274u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BB6274: bc    4, 0, 0x80BB6288
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80BB6288;
        }
    }

label_80BB6278:
    ctx->pc = 0x80BB6278u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6278u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BB6278: cmpwi   r3, 0
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

label_80BB627C:
    ctx->pc = 0x80BB627Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB627Cu)) return;
    // 80BB627C: bc    12, 2, 0x80BB72B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80BB72B0;
        }
    }

label_80BB6280:
    ctx->pc = 0x80BB6280u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6280u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BB6280: bc    4, 0, 0x80BB6290
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80BB6290;
        }
    }

label_80BB6284:
    ctx->pc = 0x80BB6284u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6284u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BB6284: b       0x80BB72B0
    {
            goto label_80BB72B0;
    }

label_80BB6288:
    ctx->pc = 0x80BB6288u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6288u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BB6288: cmpwi   r3, 4
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

label_80BB628C:
    ctx->pc = 0x80BB628Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB628Cu)) return;
    // 80BB628C: b       0x80BB72B0
    {
            goto label_80BB72B0;
    }

label_80BB6290:
    ctx->pc = 0x80BB6290u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6290u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80BB6290: lis     r3, -27518
    ctx->gpr[3] = ((u32)(s32)(-27518) << 16);

label_80BB6294:
    ctx->pc = 0x80BB6294u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6294u)) return;
    // 80BB6294: addi    r3, r3, 1684
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1684);

label_80BB6298:
    ctx->pc = 0x80BB6298u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6298u)) return;
    // 80BB6298: bl      0x8050AF58
    {
            ctx->lr = 0x80BB629Cu;
            ctx->pc = 0x8050AF58u;
            return;
    }

label_80BB629C:
    ctx->pc = 0x80BB629Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB629Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BB629C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80BB62A0:
    ctx->pc = 0x80BB62A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB62A0u)) return;
    // 80BB62A0: bl      0x80BB78AC
    {
            ctx->lr = 0x80BB62A4u;
            goto label_80BB78AC;
    }

label_80BB62A4:
    ctx->pc = 0x80BB62A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB62A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BB62A4: bl      0x8045DE7C
    {
            ctx->lr = 0x80BB62A8u;
            ctx->pc = 0x8045DE7Cu;
            return;
    }

label_80BB62A8:
    ctx->pc = 0x80BB62A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB62A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BB62A8: bl      0x80460A60
    {
            ctx->lr = 0x80BB62ACu;
            ctx->pc = 0x80460A60u;
            return;
    }

label_80BB62AC:
    ctx->pc = 0x80BB62ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB62ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BB62AC: bl      0x80460A24
    {
            ctx->lr = 0x80BB62B0u;
            ctx->pc = 0x80460A24u;
            return;
    }

label_80BB62B0:
    ctx->pc = 0x80BB62B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB62B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BB62B0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BB62B4:
    ctx->pc = 0x80BB62B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB62B4u)) return;
    // 80BB62B4: bl      0x8045EC10
    {
            ctx->lr = 0x80BB62B8u;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80BB62B8:
    ctx->pc = 0x80BB62B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB62B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80BB62B8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80BB62BC:
    ctx->pc = 0x80BB62BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB62BCu)) return;
    // 80BB62BC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80BB62C0:
    ctx->pc = 0x80BB62C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB62C0u)) return;
    // 80BB62C0: lis     r5, -27518
    ctx->gpr[5] = ((u32)(s32)(-27518) << 16);

label_80BB62C4:
    ctx->pc = 0x80BB62C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB62C4u)) return;
    // 80BB62C4: addi    r5, r5, 988
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(988);

label_80BB62C8:
    ctx->pc = 0x80BB62C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB62C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BB62C8: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BB62C8u)) return;
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
label_80BB62CC:
    ctx->pc = 0x80BB62CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB62CCu)) return;
    // 80BB62CC: lis     r5, -27518
    ctx->gpr[5] = ((u32)(s32)(-27518) << 16);

label_80BB62D0:
    ctx->pc = 0x80BB62D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB62D0u)) return;
    // 80BB62D0: addi    r5, r5, 992
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(992);

label_80BB62D4:
    ctx->pc = 0x80BB62D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB62D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BB62D4: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BB62D4u)) return;
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
label_80BB62D8:
    ctx->pc = 0x80BB62D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB62D8u)) return;
    // 80BB62D8: lis     r5, -27518
    ctx->gpr[5] = ((u32)(s32)(-27518) << 16);

label_80BB62DC:
    ctx->pc = 0x80BB62DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB62DCu)) return;
    // 80BB62DC: addi    r5, r5, 996
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(996);

label_80BB62E0:
    ctx->pc = 0x80BB62E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB62E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BB62E0: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BB62E0u)) return;
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
label_80BB62E4:
    ctx->pc = 0x80BB62E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB62E4u)) return;
    // 80BB62E4: bl      0x8045C750
    {
            ctx->lr = 0x80BB62E8u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80BB62E8:
    ctx->pc = 0x80BB62E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB62E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80BB62E8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80BB62EC:
    ctx->pc = 0x80BB62ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB62ECu)) return;
    // 80BB62EC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80BB62F0:
    ctx->pc = 0x80BB62F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB62F0u)) return;
    // 80BB62F0: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80BB62F4:
    ctx->pc = 0x80BB62F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB62F4u)) return;
    // 80BB62F4: addi    r5, r6, -1586
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-1586);

label_80BB62F8:
    ctx->pc = 0x80BB62F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB62F8u)) return;
    // 80BB62F8: addi    r6, r6, -23875
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-23875);

label_80BB62FC:
    ctx->pc = 0x80BB62FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB62FCu)) return;
    // 80BB62FC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80BB6300:
    ctx->pc = 0x80BB6300u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6300u)) return;
    // 80BB6300: bl      0x8045C7B4
    {
            ctx->lr = 0x80BB6304u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80BB6304:
    ctx->pc = 0x80BB6304u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6304u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80BB6304: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80BB6308:
    ctx->pc = 0x80BB6308u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6308u)) return;
    // 80BB6308: li      r4, 300
    ctx->gpr[4] = (u32)(s32)(300);

label_80BB630C:
    ctx->pc = 0x80BB630Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB630Cu)) return;
    // 80BB630C: lis     r5, -27518
    ctx->gpr[5] = ((u32)(s32)(-27518) << 16);

label_80BB6310:
    ctx->pc = 0x80BB6310u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6310u)) return;
    // 80BB6310: addi    r5, r5, 1000
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1000);

label_80BB6314:
    ctx->pc = 0x80BB6314u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6314u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BB6314: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BB6314u)) return;
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
label_80BB6318:
    ctx->pc = 0x80BB6318u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6318u)) return;
    // 80BB6318: lis     r5, -27518
    ctx->gpr[5] = ((u32)(s32)(-27518) << 16);

label_80BB631C:
    ctx->pc = 0x80BB631Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB631Cu)) return;
    // 80BB631C: addi    r5, r5, 1004
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1004);

label_80BB6320:
    ctx->pc = 0x80BB6320u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6320u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BB6320: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BB6320u)) return;
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
label_80BB6324:
    ctx->pc = 0x80BB6324u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6324u)) return;
    // 80BB6324: lis     r5, -27518
    ctx->gpr[5] = ((u32)(s32)(-27518) << 16);

label_80BB6328:
    ctx->pc = 0x80BB6328u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6328u)) return;
    // 80BB6328: addi    r5, r5, 1008
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1008);

label_80BB632C:
    ctx->pc = 0x80BB632Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB632Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BB632C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BB632Cu)) return;
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
label_80BB6330:
    ctx->pc = 0x80BB6330u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6330u)) return;
    // 80BB6330: bl      0x8045C750
    {
            ctx->lr = 0x80BB6334u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80BB6334:
    ctx->pc = 0x80BB6334u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6334u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80BB6334: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80BB6338:
    ctx->pc = 0x80BB6338u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6338u)) return;
    // 80BB6338: li      r4, 300
    ctx->gpr[4] = (u32)(s32)(300);

label_80BB633C:
    ctx->pc = 0x80BB633Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB633Cu)) return;
    // 80BB633C: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80BB6340:
    ctx->pc = 0x80BB6340u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6340u)) return;
    // 80BB6340: addi    r5, r6, -1586
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-1586);

label_80BB6344:
    ctx->pc = 0x80BB6344u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6344u)) return;
    // 80BB6344: addi    r6, r6, -23875
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-23875);

label_80BB6348:
    ctx->pc = 0x80BB6348u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6348u)) return;
    // 80BB6348: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80BB634C:
    ctx->pc = 0x80BB634Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB634Cu)) return;
    // 80BB634C: bl      0x8045C7B4
    {
            ctx->lr = 0x80BB6350u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80BB6350:
    ctx->pc = 0x80BB6350u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6350u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80BB6350: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BB6354:
    ctx->pc = 0x80BB6354u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6354u)) return;
    // 80BB6354: li      r4, 1337
    ctx->gpr[4] = (u32)(s32)(1337);

label_80BB6358:
    ctx->pc = 0x80BB6358u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6358u)) return;
    // 80BB6358: li      r5, 1800
    ctx->gpr[5] = (u32)(s32)(1800);

label_80BB635C:
    ctx->pc = 0x80BB635Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB635Cu)) return;
    // 80BB635C: bl      0x80BB79B4
    {
            ctx->lr = 0x80BB6360u;
            goto label_80BB79B4;
    }

label_80BB6360:
    ctx->pc = 0x80BB6360u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6360u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BB6360: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BB6364:
    ctx->pc = 0x80BB6364u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6364u)) return;
    // 80BB6364: bl      0x8045F220
    {
            ctx->lr = 0x80BB6368u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80BB6368:
    ctx->pc = 0x80BB6368u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6368u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80BB6368: lis     r4, -27518
    ctx->gpr[4] = ((u32)(s32)(-27518) << 16);

label_80BB636C:
    ctx->pc = 0x80BB636Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB636Cu)) return;
    // 80BB636C: addi    r4, r4, 1012
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1012);

label_80BB6370:
    ctx->pc = 0x80BB6370u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6370u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BB6370: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BB6370u)) return;
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
label_80BB6374:
    ctx->pc = 0x80BB6374u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6374u)) return;
    // 80BB6374: lis     r4, -27518
    ctx->gpr[4] = ((u32)(s32)(-27518) << 16);

label_80BB6378:
    ctx->pc = 0x80BB6378u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6378u)) return;
    // 80BB6378: addi    r4, r4, 1016
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1016);

label_80BB637C:
    ctx->pc = 0x80BB637Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB637Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BB637C: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BB637Cu)) return;
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
label_80BB6380:
    ctx->pc = 0x80BB6380u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6380u)) return;
    // 80BB6380: lis     r4, -27518
    ctx->gpr[4] = ((u32)(s32)(-27518) << 16);

label_80BB6384:
    ctx->pc = 0x80BB6384u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6384u)) return;
    // 80BB6384: addi    r4, r4, 1020
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1020);

label_80BB6388:
    ctx->pc = 0x80BB6388u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6388u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BB6388: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BB6388u)) return;
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
label_80BB638C:
    ctx->pc = 0x80BB638Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB638Cu)) return;
    // 80BB638C: bl      0x8045EF2C
    {
            ctx->lr = 0x80BB6390u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80BB6390:
    ctx->pc = 0x80BB6390u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6390u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BB6390: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BB6394:
    ctx->pc = 0x80BB6394u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6394u)) return;
    // 80BB6394: bl      0x8045F220
    {
            ctx->lr = 0x80BB6398u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80BB6398:
    ctx->pc = 0x80BB6398u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6398u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80BB6398: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80BB639C:
    ctx->pc = 0x80BB639Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB639Cu)) return;
    // 80BB639C: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80BB63A0:
    ctx->pc = 0x80BB63A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB63A0u)) return;
    // 80BB63A0: addi    r5, r5, -28358
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-28358);

label_80BB63A4:
    ctx->pc = 0x80BB63A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB63A4u)) return;
    // 80BB63A4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80BB63A8:
    ctx->pc = 0x80BB63A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB63A8u)) return;
    // 80BB63A8: bl      0x8045EEA8
    {
            ctx->lr = 0x80BB63ACu;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80BB63AC:
    ctx->pc = 0x80BB63ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB63ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BB63AC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80BB63B0:
    ctx->pc = 0x80BB63B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB63B0u)) return;
    // 80BB63B0: bl      0x8045F7C8
    {
            ctx->lr = 0x80BB63B4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80BB63B4:
    ctx->pc = 0x80BB63B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB63B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BB63B4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BB63B8:
    ctx->pc = 0x80BB63B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB63B8u)) return;
    // 80BB63B8: bl      0x8045F220
    {
            ctx->lr = 0x80BB63BCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80BB63BC:
    ctx->pc = 0x80BB63BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB63BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BB63BC: bl      0x8045EB8C
    {
            ctx->lr = 0x80BB63C0u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80BB63C0:
    ctx->pc = 0x80BB63C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB63C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BB63C0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BB63C4:
    ctx->pc = 0x80BB63C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB63C4u)) return;
    // 80BB63C4: bl      0x8045F220
    {
            ctx->lr = 0x80BB63C8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80BB63C8:
    ctx->pc = 0x80BB63C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB63C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80BB63C8: lis     r4, -27518
    ctx->gpr[4] = ((u32)(s32)(-27518) << 16);

label_80BB63CC:
    ctx->pc = 0x80BB63CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB63CCu)) return;
    // 80BB63CC: addi    r4, r4, 10564
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10564);

label_80BB63D0:
    ctx->pc = 0x80BB63D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB63D0u)) return;
    // 80BB63D0: lis     r5, -28615
    ctx->gpr[5] = ((u32)(s32)(-28615) << 16);

label_80BB63D4:
    ctx->pc = 0x80BB63D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB63D4u)) return;
    // 80BB63D4: addi    r5, r5, -7300
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-7300);

label_80BB63D8:
    ctx->pc = 0x80BB63D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB63D8u)) return;
    // 80BB63D8: lis     r6, -27518
    ctx->gpr[6] = ((u32)(s32)(-27518) << 16);

label_80BB63DC:
    ctx->pc = 0x80BB63DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB63DCu)) return;
    // 80BB63DC: addi    r6, r6, 1024
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(1024);

label_80BB63E0:
    ctx->pc = 0x80BB63E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB63E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BB63E0: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80BB63E0u)) return;
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
label_80BB63E4:
    ctx->pc = 0x80BB63E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB63E4u)) return;
    // 80BB63E4: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80BB63E8:
    ctx->pc = 0x80BB63E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB63E8u)) return;
    // 80BB63E8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80BB63EC:
    ctx->pc = 0x80BB63ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB63ECu)) return;
    // 80BB63EC: bl      0x8045EBE4
    {
            ctx->lr = 0x80BB63F0u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80BB63F0:
    ctx->pc = 0x80BB63F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 15u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB63F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 15u : 1u;
    // 80BB63F0: lis     r3, -27517
    ctx->gpr[3] = ((u32)(s32)(-27517) << 16);

label_80BB63F4:
    ctx->pc = 0x80BB63F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB63F4u)) return;
    // 80BB63F4: addi    r3, r3, -28028
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28028);

label_80BB63F8:
    ctx->pc = 0x80BB63F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB63F8u)) return;
    // 80BB63F8: lis     r4, -27518
    ctx->gpr[4] = ((u32)(s32)(-27518) << 16);

label_80BB63FC:
    ctx->pc = 0x80BB63FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB63FCu)) return;
    // 80BB63FC: addi    r4, r4, 1028
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1028);

label_80BB6400:
    ctx->pc = 0x80BB6400u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6400u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BB6400: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BB6400u)) return;
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
label_80BB6404:
    ctx->pc = 0x80BB6404u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6404u)) return;
    // 80BB6404: lis     r4, -27518
    ctx->gpr[4] = ((u32)(s32)(-27518) << 16);

label_80BB6408:
    ctx->pc = 0x80BB6408u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6408u)) return;
    // 80BB6408: addi    r4, r4, 1032
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1032);

label_80BB640C:
    ctx->pc = 0x80BB640Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB640Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BB640C: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BB640Cu)) return;
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
label_80BB6410:
    ctx->pc = 0x80BB6410u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6410u)) return;
    // 80BB6410: lis     r4, -27518
    ctx->gpr[4] = ((u32)(s32)(-27518) << 16);

label_80BB6414:
    ctx->pc = 0x80BB6414u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6414u)) return;
    // 80BB6414: addi    r4, r4, 1036
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1036);

label_80BB6418:
    ctx->pc = 0x80BB6418u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6418u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BB6418: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BB6418u)) return;
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
label_80BB641C:
    ctx->pc = 0x80BB641Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB641Cu)) return;
    // 80BB641C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80BB6420:
    ctx->pc = 0x80BB6420u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6420u)) return;
    // 80BB6420: li      r5, 1295
    ctx->gpr[5] = (u32)(s32)(1295);

label_80BB6424:
    ctx->pc = 0x80BB6424u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6424u)) return;
    // 80BB6424: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80BB6428:
    ctx->pc = 0x80BB6428u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6428u)) return;
    // 80BB6428: bl      0x8045F170
    {
            ctx->lr = 0x80BB642Cu;
            ctx->pc = 0x8045F170u;
            return;
    }

label_80BB642C:
    ctx->pc = 0x80BB642Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 15u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB642Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 15u : 1u;
    // 80BB642C: lis     r3, -27517
    ctx->gpr[3] = ((u32)(s32)(-27517) << 16);

label_80BB6430:
    ctx->pc = 0x80BB6430u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6430u)) return;
    // 80BB6430: addi    r3, r3, -28016
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28016);

label_80BB6434:
    ctx->pc = 0x80BB6434u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6434u)) return;
    // 80BB6434: lis     r4, -27518
    ctx->gpr[4] = ((u32)(s32)(-27518) << 16);

label_80BB6438:
    ctx->pc = 0x80BB6438u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6438u)) return;
    // 80BB6438: addi    r4, r4, 1040
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1040);

label_80BB643C:
    ctx->pc = 0x80BB643Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB643Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BB643C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BB643Cu)) return;
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
label_80BB6440:
    ctx->pc = 0x80BB6440u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6440u)) return;
    // 80BB6440: lis     r4, -27518
    ctx->gpr[4] = ((u32)(s32)(-27518) << 16);

label_80BB6444:
    ctx->pc = 0x80BB6444u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6444u)) return;
    // 80BB6444: addi    r4, r4, 1044
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1044);

label_80BB6448:
    ctx->pc = 0x80BB6448u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6448u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BB6448: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BB6448u)) return;
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
label_80BB644C:
    ctx->pc = 0x80BB644Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB644Cu)) return;
    // 80BB644C: lis     r4, -27518
    ctx->gpr[4] = ((u32)(s32)(-27518) << 16);

label_80BB6450:
    ctx->pc = 0x80BB6450u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6450u)) return;
    // 80BB6450: addi    r4, r4, 1048
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1048);

label_80BB6454:
    ctx->pc = 0x80BB6454u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6454u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BB6454: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BB6454u)) return;
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
label_80BB6458:
    ctx->pc = 0x80BB6458u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6458u)) return;
    // 80BB6458: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80BB645C:
    ctx->pc = 0x80BB645Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB645Cu)) return;
    // 80BB645C: li      r5, 1295
    ctx->gpr[5] = (u32)(s32)(1295);

label_80BB6460:
    ctx->pc = 0x80BB6460u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6460u)) return;
    // 80BB6460: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80BB6464:
    ctx->pc = 0x80BB6464u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6464u)) return;
    // 80BB6464: bl      0x8045F170
    {
            ctx->lr = 0x80BB6468u;
            ctx->pc = 0x8045F170u;
            return;
    }

label_80BB6468:
    ctx->pc = 0x80BB6468u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 15u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6468u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 15u : 1u;
    // 80BB6468: lis     r3, -27517
    ctx->gpr[3] = ((u32)(s32)(-27517) << 16);

label_80BB646C:
    ctx->pc = 0x80BB646Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB646Cu)) return;
    // 80BB646C: addi    r3, r3, -28032
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28032);

label_80BB6470:
    ctx->pc = 0x80BB6470u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6470u)) return;
    // 80BB6470: lis     r4, -27518
    ctx->gpr[4] = ((u32)(s32)(-27518) << 16);

label_80BB6474:
    ctx->pc = 0x80BB6474u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6474u)) return;
    // 80BB6474: addi    r4, r4, 1052
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1052);

label_80BB6478:
    ctx->pc = 0x80BB6478u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6478u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BB6478: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BB6478u)) return;
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
label_80BB647C:
    ctx->pc = 0x80BB647Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB647Cu)) return;
    // 80BB647C: lis     r4, -27518
    ctx->gpr[4] = ((u32)(s32)(-27518) << 16);

label_80BB6480:
    ctx->pc = 0x80BB6480u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6480u)) return;
    // 80BB6480: addi    r4, r4, 1056
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1056);

label_80BB6484:
    ctx->pc = 0x80BB6484u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6484u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BB6484: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BB6484u)) return;
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
label_80BB6488:
    ctx->pc = 0x80BB6488u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6488u)) return;
    // 80BB6488: lis     r4, -27518
    ctx->gpr[4] = ((u32)(s32)(-27518) << 16);

label_80BB648C:
    ctx->pc = 0x80BB648Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB648Cu)) return;
    // 80BB648C: addi    r4, r4, 1060
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1060);

label_80BB6490:
    ctx->pc = 0x80BB6490u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6490u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BB6490: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BB6490u)) return;
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
label_80BB6494:
    ctx->pc = 0x80BB6494u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6494u)) return;
    // 80BB6494: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80BB6498:
    ctx->pc = 0x80BB6498u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6498u)) return;
    // 80BB6498: li      r5, 1295
    ctx->gpr[5] = (u32)(s32)(1295);

label_80BB649C:
    ctx->pc = 0x80BB649Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB649Cu)) return;
    // 80BB649C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80BB64A0:
    ctx->pc = 0x80BB64A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB64A0u)) return;
    // 80BB64A0: bl      0x8045F170
    {
            ctx->lr = 0x80BB64A4u;
            ctx->pc = 0x8045F170u;
            return;
    }

label_80BB64A4:
    ctx->pc = 0x80BB64A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 15u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB64A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 15u : 1u;
    // 80BB64A4: lis     r3, -27517
    ctx->gpr[3] = ((u32)(s32)(-27517) << 16);

label_80BB64A8:
    ctx->pc = 0x80BB64A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB64A8u)) return;
    // 80BB64A8: addi    r3, r3, -28024
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28024);

label_80BB64AC:
    ctx->pc = 0x80BB64ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB64ACu)) return;
    // 80BB64AC: lis     r4, -27518
    ctx->gpr[4] = ((u32)(s32)(-27518) << 16);

label_80BB64B0:
    ctx->pc = 0x80BB64B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB64B0u)) return;
    // 80BB64B0: addi    r4, r4, 1064
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1064);

label_80BB64B4:
    ctx->pc = 0x80BB64B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB64B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BB64B4: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BB64B4u)) return;
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
label_80BB64B8:
    ctx->pc = 0x80BB64B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB64B8u)) return;
    // 80BB64B8: lis     r4, -27518
    ctx->gpr[4] = ((u32)(s32)(-27518) << 16);

label_80BB64BC:
    ctx->pc = 0x80BB64BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB64BCu)) return;
    // 80BB64BC: addi    r4, r4, 1044
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1044);

label_80BB64C0:
    ctx->pc = 0x80BB64C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB64C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BB64C0: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BB64C0u)) return;
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
label_80BB64C4:
    ctx->pc = 0x80BB64C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB64C4u)) return;
    // 80BB64C4: lis     r4, -27518
    ctx->gpr[4] = ((u32)(s32)(-27518) << 16);

label_80BB64C8:
    ctx->pc = 0x80BB64C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB64C8u)) return;
    // 80BB64C8: addi    r4, r4, 1068
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1068);

label_80BB64CC:
    ctx->pc = 0x80BB64CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB64CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BB64CC: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BB64CCu)) return;
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
label_80BB64D0:
    ctx->pc = 0x80BB64D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB64D0u)) return;
    // 80BB64D0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80BB64D4:
    ctx->pc = 0x80BB64D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB64D4u)) return;
    // 80BB64D4: li      r5, 1295
    ctx->gpr[5] = (u32)(s32)(1295);

label_80BB64D8:
    ctx->pc = 0x80BB64D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB64D8u)) return;
    // 80BB64D8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80BB64DC:
    ctx->pc = 0x80BB64DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB64DCu)) return;
    // 80BB64DC: bl      0x8045F170
    {
            ctx->lr = 0x80BB64E0u;
            ctx->pc = 0x8045F170u;
            return;
    }

label_80BB64E0:
    ctx->pc = 0x80BB64E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 15u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB64E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 15u : 1u;
    // 80BB64E0: lis     r3, -27517
    ctx->gpr[3] = ((u32)(s32)(-27517) << 16);

label_80BB64E4:
    ctx->pc = 0x80BB64E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB64E4u)) return;
    // 80BB64E4: addi    r3, r3, -28020
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28020);

label_80BB64E8:
    ctx->pc = 0x80BB64E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB64E8u)) return;
    // 80BB64E8: lis     r4, -27518
    ctx->gpr[4] = ((u32)(s32)(-27518) << 16);

label_80BB64EC:
    ctx->pc = 0x80BB64ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB64ECu)) return;
    // 80BB64EC: addi    r4, r4, 1072
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1072);

label_80BB64F0:
    ctx->pc = 0x80BB64F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB64F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BB64F0: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BB64F0u)) return;
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
label_80BB64F4:
    ctx->pc = 0x80BB64F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB64F4u)) return;
    // 80BB64F4: lis     r4, -27518
    ctx->gpr[4] = ((u32)(s32)(-27518) << 16);

label_80BB64F8:
    ctx->pc = 0x80BB64F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB64F8u)) return;
    // 80BB64F8: addi    r4, r4, 1032
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1032);

label_80BB64FC:
    ctx->pc = 0x80BB64FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB64FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BB64FC: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BB64FCu)) return;
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
label_80BB6500:
    ctx->pc = 0x80BB6500u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6500u)) return;
    // 80BB6500: lis     r4, -27518
    ctx->gpr[4] = ((u32)(s32)(-27518) << 16);

label_80BB6504:
    ctx->pc = 0x80BB6504u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6504u)) return;
    // 80BB6504: addi    r4, r4, 1076
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1076);

label_80BB6508:
    ctx->pc = 0x80BB6508u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6508u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BB6508: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BB6508u)) return;
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
label_80BB650C:
    ctx->pc = 0x80BB650Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB650Cu)) return;
    // 80BB650C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80BB6510:
    ctx->pc = 0x80BB6510u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6510u)) return;
    // 80BB6510: li      r5, 1295
    ctx->gpr[5] = (u32)(s32)(1295);

label_80BB6514:
    ctx->pc = 0x80BB6514u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6514u)) return;
    // 80BB6514: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80BB6518:
    ctx->pc = 0x80BB6518u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6518u)) return;
    // 80BB6518: bl      0x8045F170
    {
            ctx->lr = 0x80BB651Cu;
            ctx->pc = 0x8045F170u;
            return;
    }

label_80BB651C:
    ctx->pc = 0x80BB651Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 15u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB651Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 15u : 1u;
    // 80BB651C: lis     r3, -27517
    ctx->gpr[3] = ((u32)(s32)(-27517) << 16);

label_80BB6520:
    ctx->pc = 0x80BB6520u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6520u)) return;
    // 80BB6520: addi    r3, r3, -28008
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28008);

label_80BB6524:
    ctx->pc = 0x80BB6524u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6524u)) return;
    // 80BB6524: lis     r4, -27518
    ctx->gpr[4] = ((u32)(s32)(-27518) << 16);

label_80BB6528:
    ctx->pc = 0x80BB6528u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6528u)) return;
    // 80BB6528: addi    r4, r4, 1080
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1080);

label_80BB652C:
    ctx->pc = 0x80BB652Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB652Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BB652C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BB652Cu)) return;
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
label_80BB6530:
    ctx->pc = 0x80BB6530u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6530u)) return;
    // 80BB6530: lis     r4, -27518
    ctx->gpr[4] = ((u32)(s32)(-27518) << 16);

label_80BB6534:
    ctx->pc = 0x80BB6534u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6534u)) return;
    // 80BB6534: addi    r4, r4, 1032
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1032);

label_80BB6538:
    ctx->pc = 0x80BB6538u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6538u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BB6538: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BB6538u)) return;
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
label_80BB653C:
    ctx->pc = 0x80BB653Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB653Cu)) return;
    // 80BB653C: lis     r4, -27518
    ctx->gpr[4] = ((u32)(s32)(-27518) << 16);

label_80BB6540:
    ctx->pc = 0x80BB6540u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6540u)) return;
    // 80BB6540: addi    r4, r4, 1084
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1084);

label_80BB6544:
    ctx->pc = 0x80BB6544u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6544u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BB6544: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BB6544u)) return;
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
label_80BB6548:
    ctx->pc = 0x80BB6548u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6548u)) return;
    // 80BB6548: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80BB654C:
    ctx->pc = 0x80BB654Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB654Cu)) return;
    // 80BB654C: li      r5, 1295
    ctx->gpr[5] = (u32)(s32)(1295);

label_80BB6550:
    ctx->pc = 0x80BB6550u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6550u)) return;
    // 80BB6550: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80BB6554:
    ctx->pc = 0x80BB6554u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6554u)) return;
    // 80BB6554: bl      0x8045F170
    {
            ctx->lr = 0x80BB6558u;
            ctx->pc = 0x8045F170u;
            return;
    }

label_80BB6558:
    ctx->pc = 0x80BB6558u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 15u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6558u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 15u : 1u;
    // 80BB6558: lis     r3, -27517
    ctx->gpr[3] = ((u32)(s32)(-27517) << 16);

label_80BB655C:
    ctx->pc = 0x80BB655Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB655Cu)) return;
    // 80BB655C: addi    r3, r3, -27996
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-27996);

label_80BB6560:
    ctx->pc = 0x80BB6560u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6560u)) return;
    // 80BB6560: lis     r4, -27518
    ctx->gpr[4] = ((u32)(s32)(-27518) << 16);

label_80BB6564:
    ctx->pc = 0x80BB6564u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6564u)) return;
    // 80BB6564: addi    r4, r4, 1088
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1088);

label_80BB6568:
    ctx->pc = 0x80BB6568u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6568u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BB6568: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BB6568u)) return;
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
label_80BB656C:
    ctx->pc = 0x80BB656Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB656Cu)) return;
    // 80BB656C: lis     r4, -27518
    ctx->gpr[4] = ((u32)(s32)(-27518) << 16);

label_80BB6570:
    ctx->pc = 0x80BB6570u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6570u)) return;
    // 80BB6570: addi    r4, r4, 1044
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1044);

label_80BB6574:
    ctx->pc = 0x80BB6574u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6574u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BB6574: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BB6574u)) return;
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
label_80BB6578:
    ctx->pc = 0x80BB6578u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6578u)) return;
    // 80BB6578: lis     r4, -27518
    ctx->gpr[4] = ((u32)(s32)(-27518) << 16);

label_80BB657C:
    ctx->pc = 0x80BB657Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB657Cu)) return;
    // 80BB657C: addi    r4, r4, 1092
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1092);

label_80BB6580:
    ctx->pc = 0x80BB6580u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6580u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BB6580: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BB6580u)) return;
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
label_80BB6584:
    ctx->pc = 0x80BB6584u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6584u)) return;
    // 80BB6584: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80BB6588:
    ctx->pc = 0x80BB6588u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6588u)) return;
    // 80BB6588: li      r5, 1295
    ctx->gpr[5] = (u32)(s32)(1295);

label_80BB658C:
    ctx->pc = 0x80BB658Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB658Cu)) return;
    // 80BB658C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80BB6590:
    ctx->pc = 0x80BB6590u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6590u)) return;
    // 80BB6590: bl      0x8045F170
    {
            ctx->lr = 0x80BB6594u;
            ctx->pc = 0x8045F170u;
            return;
    }

label_80BB6594:
    ctx->pc = 0x80BB6594u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 15u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6594u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 15u : 1u;
    // 80BB6594: lis     r3, -27517
    ctx->gpr[3] = ((u32)(s32)(-27517) << 16);

label_80BB6598:
    ctx->pc = 0x80BB6598u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6598u)) return;
    // 80BB6598: addi    r3, r3, -28012
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28012);

label_80BB659C:
    ctx->pc = 0x80BB659Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB659Cu)) return;
    // 80BB659C: lis     r4, -27518
    ctx->gpr[4] = ((u32)(s32)(-27518) << 16);

label_80BB65A0:
    ctx->pc = 0x80BB65A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB65A0u)) return;
    // 80BB65A0: addi    r4, r4, 1096
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1096);

label_80BB65A4:
    ctx->pc = 0x80BB65A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB65A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BB65A4: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BB65A4u)) return;
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
label_80BB65A8:
    ctx->pc = 0x80BB65A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB65A8u)) return;
    // 80BB65A8: lis     r4, -27518
    ctx->gpr[4] = ((u32)(s32)(-27518) << 16);

label_80BB65AC:
    ctx->pc = 0x80BB65ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB65ACu)) return;
    // 80BB65AC: addi    r4, r4, 1056
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1056);

label_80BB65B0:
    ctx->pc = 0x80BB65B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB65B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BB65B0: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BB65B0u)) return;
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
label_80BB65B4:
    ctx->pc = 0x80BB65B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB65B4u)) return;
    // 80BB65B4: lis     r4, -27518
    ctx->gpr[4] = ((u32)(s32)(-27518) << 16);

label_80BB65B8:
    ctx->pc = 0x80BB65B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB65B8u)) return;
    // 80BB65B8: addi    r4, r4, 1100
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1100);

label_80BB65BC:
    ctx->pc = 0x80BB65BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB65BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BB65BC: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BB65BCu)) return;
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
label_80BB65C0:
    ctx->pc = 0x80BB65C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB65C0u)) return;
    // 80BB65C0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80BB65C4:
    ctx->pc = 0x80BB65C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB65C4u)) return;
    // 80BB65C4: li      r5, 1295
    ctx->gpr[5] = (u32)(s32)(1295);

label_80BB65C8:
    ctx->pc = 0x80BB65C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB65C8u)) return;
    // 80BB65C8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80BB65CC:
    ctx->pc = 0x80BB65CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB65CCu)) return;
    // 80BB65CC: bl      0x8045F170
    {
            ctx->lr = 0x80BB65D0u;
            ctx->pc = 0x8045F170u;
            return;
    }

label_80BB65D0:
    ctx->pc = 0x80BB65D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 15u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB65D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 15u : 1u;
    // 80BB65D0: lis     r3, -27517
    ctx->gpr[3] = ((u32)(s32)(-27517) << 16);

label_80BB65D4:
    ctx->pc = 0x80BB65D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB65D4u)) return;
    // 80BB65D4: addi    r3, r3, -28004
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28004);

label_80BB65D8:
    ctx->pc = 0x80BB65D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB65D8u)) return;
    // 80BB65D8: lis     r4, -27518
    ctx->gpr[4] = ((u32)(s32)(-27518) << 16);

label_80BB65DC:
    ctx->pc = 0x80BB65DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB65DCu)) return;
    // 80BB65DC: addi    r4, r4, 1104
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1104);

label_80BB65E0:
    ctx->pc = 0x80BB65E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB65E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BB65E0: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BB65E0u)) return;
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
label_80BB65E4:
    ctx->pc = 0x80BB65E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB65E4u)) return;
    // 80BB65E4: lis     r4, -27518
    ctx->gpr[4] = ((u32)(s32)(-27518) << 16);

label_80BB65E8:
    ctx->pc = 0x80BB65E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB65E8u)) return;
    // 80BB65E8: addi    r4, r4, 1044
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1044);

label_80BB65EC:
    ctx->pc = 0x80BB65ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB65ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BB65EC: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BB65ECu)) return;
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
label_80BB65F0:
    ctx->pc = 0x80BB65F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB65F0u)) return;
    // 80BB65F0: lis     r4, -27518
    ctx->gpr[4] = ((u32)(s32)(-27518) << 16);

label_80BB65F4:
    ctx->pc = 0x80BB65F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB65F4u)) return;
    // 80BB65F4: addi    r4, r4, 1108
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1108);

label_80BB65F8:
    ctx->pc = 0x80BB65F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB65F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BB65F8: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BB65F8u)) return;
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
label_80BB65FC:
    ctx->pc = 0x80BB65FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB65FCu)) return;
    // 80BB65FC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80BB6600:
    ctx->pc = 0x80BB6600u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6600u)) return;
    // 80BB6600: li      r5, 1295
    ctx->gpr[5] = (u32)(s32)(1295);

label_80BB6604:
    ctx->pc = 0x80BB6604u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6604u)) return;
    // 80BB6604: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80BB6608:
    ctx->pc = 0x80BB6608u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6608u)) return;
    // 80BB6608: bl      0x8045F170
    {
            ctx->lr = 0x80BB660Cu;
            ctx->pc = 0x8045F170u;
            return;
    }

label_80BB660C:
    ctx->pc = 0x80BB660Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 15u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB660Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 15u : 1u;
    // 80BB660C: lis     r3, -27517
    ctx->gpr[3] = ((u32)(s32)(-27517) << 16);

label_80BB6610:
    ctx->pc = 0x80BB6610u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6610u)) return;
    // 80BB6610: addi    r3, r3, -28000
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28000);

label_80BB6614:
    ctx->pc = 0x80BB6614u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6614u)) return;
    // 80BB6614: lis     r4, -27518
    ctx->gpr[4] = ((u32)(s32)(-27518) << 16);

label_80BB6618:
    ctx->pc = 0x80BB6618u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6618u)) return;
    // 80BB6618: addi    r4, r4, 1112
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1112);

label_80BB661C:
    ctx->pc = 0x80BB661Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB661Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BB661C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BB661Cu)) return;
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
label_80BB6620:
    ctx->pc = 0x80BB6620u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6620u)) return;
    // 80BB6620: lis     r4, -27518
    ctx->gpr[4] = ((u32)(s32)(-27518) << 16);

label_80BB6624:
    ctx->pc = 0x80BB6624u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6624u)) return;
    // 80BB6624: addi    r4, r4, 1032
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1032);

label_80BB6628:
    ctx->pc = 0x80BB6628u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6628u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BB6628: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BB6628u)) return;
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
label_80BB662C:
    ctx->pc = 0x80BB662Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB662Cu)) return;
    // 80BB662C: lis     r4, -27518
    ctx->gpr[4] = ((u32)(s32)(-27518) << 16);

label_80BB6630:
    ctx->pc = 0x80BB6630u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6630u)) return;
    // 80BB6630: addi    r4, r4, 1116
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1116);

label_80BB6634:
    ctx->pc = 0x80BB6634u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6634u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BB6634: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BB6634u)) return;
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
label_80BB6638:
    ctx->pc = 0x80BB6638u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6638u)) return;
    // 80BB6638: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80BB663C:
    ctx->pc = 0x80BB663Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB663Cu)) return;
    // 80BB663C: li      r5, 1295
    ctx->gpr[5] = (u32)(s32)(1295);

label_80BB6640:
    ctx->pc = 0x80BB6640u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6640u)) return;
    // 80BB6640: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80BB6644:
    ctx->pc = 0x80BB6644u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6644u)) return;
    // 80BB6644: bl      0x8045F170
    {
            ctx->lr = 0x80BB6648u;
            ctx->pc = 0x8045F170u;
            return;
    }

label_80BB6648:
    ctx->pc = 0x80BB6648u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6648u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BB6648: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80BB664C:
    ctx->pc = 0x80BB664Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB664Cu)) return;
    // 80BB664C: bl      0x8045F7C8
    {
            ctx->lr = 0x80BB6650u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80BB6650:
    ctx->pc = 0x80BB6650u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6650u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80BB6650: lis     r3, -27517
    ctx->gpr[3] = ((u32)(s32)(-27517) << 16);

label_80BB6654:
    ctx->pc = 0x80BB6654u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6654u)) return;
    // 80BB6654: addi    r3, r3, -28028
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28028);

label_80BB6658:
    ctx->pc = 0x80BB6658u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6658u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BB6658: lwz     r3, 0(r3)
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
label_80BB665C:
    ctx->pc = 0x80BB665Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB665Cu)) return;
    // 80BB665C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80BB6660:
    ctx->pc = 0x80BB6660u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6660u)) return;
    // 80BB6660: bl      0x8045EE90
    {
            ctx->lr = 0x80BB6664u;
            ctx->pc = 0x8045EE90u;
            return;
    }

label_80BB6664:
    ctx->pc = 0x80BB6664u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6664u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80BB6664: lis     r3, -27517
    ctx->gpr[3] = ((u32)(s32)(-27517) << 16);

label_80BB6668:
    ctx->pc = 0x80BB6668u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6668u)) return;
    // 80BB6668: addi    r3, r3, -28028
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28028);

label_80BB666C:
    ctx->pc = 0x80BB666Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB666Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BB666C: lwz     r3, 0(r3)
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
label_80BB6670:
    ctx->pc = 0x80BB6670u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6670u)) return;
    // 80BB6670: bl      0x8045EB8C
    {
            ctx->lr = 0x80BB6674u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80BB6674:
    ctx->pc = 0x80BB6674u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 15u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6674u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 15u : 1u;
    // 80BB6674: lis     r3, -27517
    ctx->gpr[3] = ((u32)(s32)(-27517) << 16);

label_80BB6678:
    ctx->pc = 0x80BB6678u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6678u)) return;
    // 80BB6678: addi    r3, r3, -28028
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28028);

label_80BB667C:
    ctx->pc = 0x80BB667Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB667Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80BB667C: lwz     r3, 0(r3)
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
label_80BB6680:
    ctx->pc = 0x80BB6680u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6680u)) return;
    // 80BB6680: lis     r4, -28516
    ctx->gpr[4] = ((u32)(s32)(-28516) << 16);

label_80BB6684:
    ctx->pc = 0x80BB6684u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6684u)) return;
    // 80BB6684: addi    r4, r4, -23436
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-23436);

label_80BB6688:
    ctx->pc = 0x80BB6688u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6688u)) return;
    // 80BB6688: lis     r5, -28509
    ctx->gpr[5] = ((u32)(s32)(-28509) << 16);

label_80BB668C:
    ctx->pc = 0x80BB668Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB668Cu)) return;
    // 80BB668C: addi    r5, r5, -24828
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24828);

label_80BB6690:
    ctx->pc = 0x80BB6690u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6690u)) return;
    // 80BB6690: lis     r6, -28509
    ctx->gpr[6] = ((u32)(s32)(-28509) << 16);

label_80BB6694:
    ctx->pc = 0x80BB6694u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6694u)) return;
    // 80BB6694: addi    r6, r6, -10464
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-10464);

label_80BB6698:
    ctx->pc = 0x80BB6698u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6698u)) return;
    // 80BB6698: lis     r7, -27518
    ctx->gpr[7] = ((u32)(s32)(-27518) << 16);

label_80BB669C:
    ctx->pc = 0x80BB669Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB669Cu)) return;
    // 80BB669C: addi    r7, r7, 1120
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1120);

label_80BB66A0:
    ctx->pc = 0x80BB66A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB66A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BB66A0: lfs     f1, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x80BB66A0u)) return;
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
label_80BB66A4:
    ctx->pc = 0x80BB66A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB66A4u)) return;
    // 80BB66A4: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_80BB66A8:
    ctx->pc = 0x80BB66A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB66A8u)) return;
    // 80BB66A8: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80BB66AC:
    ctx->pc = 0x80BB66ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB66ACu)) return;
    // 80BB66AC: bl      0x8045EBB8
    {
            ctx->lr = 0x80BB66B0u;
            ctx->pc = 0x8045EBB8u;
            return;
    }

label_80BB66B0:
    ctx->pc = 0x80BB66B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB66B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80BB66B0: lis     r3, -27517
    ctx->gpr[3] = ((u32)(s32)(-27517) << 16);

label_80BB66B4:
    ctx->pc = 0x80BB66B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB66B4u)) return;
    // 80BB66B4: addi    r3, r3, -28016
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28016);

label_80BB66B8:
    ctx->pc = 0x80BB66B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB66B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BB66B8: lwz     r3, 0(r3)
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
label_80BB66BC:
    ctx->pc = 0x80BB66BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB66BCu)) return;
    // 80BB66BC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80BB66C0:
    ctx->pc = 0x80BB66C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB66C0u)) return;
    // 80BB66C0: bl      0x8045EE90
    {
            ctx->lr = 0x80BB66C4u;
            ctx->pc = 0x8045EE90u;
            return;
    }

label_80BB66C4:
    ctx->pc = 0x80BB66C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB66C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80BB66C4: lis     r3, -27517
    ctx->gpr[3] = ((u32)(s32)(-27517) << 16);

label_80BB66C8:
    ctx->pc = 0x80BB66C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB66C8u)) return;
    // 80BB66C8: addi    r3, r3, -28016
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28016);

label_80BB66CC:
    ctx->pc = 0x80BB66CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB66CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BB66CC: lwz     r3, 0(r3)
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
label_80BB66D0:
    ctx->pc = 0x80BB66D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB66D0u)) return;
    // 80BB66D0: bl      0x8045EB8C
    {
            ctx->lr = 0x80BB66D4u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80BB66D4:
    ctx->pc = 0x80BB66D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 15u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB66D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 15u : 1u;
    // 80BB66D4: lis     r3, -27517
    ctx->gpr[3] = ((u32)(s32)(-27517) << 16);

label_80BB66D8:
    ctx->pc = 0x80BB66D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB66D8u)) return;
    // 80BB66D8: addi    r3, r3, -28016
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28016);

label_80BB66DC:
    ctx->pc = 0x80BB66DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB66DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80BB66DC: lwz     r3, 0(r3)
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
label_80BB66E0:
    ctx->pc = 0x80BB66E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB66E0u)) return;
    // 80BB66E0: lis     r4, -28513
    ctx->gpr[4] = ((u32)(s32)(-28513) << 16);

label_80BB66E4:
    ctx->pc = 0x80BB66E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB66E4u)) return;
    // 80BB66E4: addi    r4, r4, -4624
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-4624);

label_80BB66E8:
    ctx->pc = 0x80BB66E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB66E8u)) return;
    // 80BB66E8: lis     r5, -28511
    ctx->gpr[5] = ((u32)(s32)(-28511) << 16);

label_80BB66EC:
    ctx->pc = 0x80BB66ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB66ECu)) return;
    // 80BB66EC: addi    r5, r5, -12280
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12280);

label_80BB66F0:
    ctx->pc = 0x80BB66F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB66F0u)) return;
    // 80BB66F0: lis     r6, -28509
    ctx->gpr[6] = ((u32)(s32)(-28509) << 16);

label_80BB66F4:
    ctx->pc = 0x80BB66F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB66F4u)) return;
    // 80BB66F4: addi    r6, r6, -10464
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-10464);

label_80BB66F8:
    ctx->pc = 0x80BB66F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB66F8u)) return;
    // 80BB66F8: lis     r7, -27518
    ctx->gpr[7] = ((u32)(s32)(-27518) << 16);

label_80BB66FC:
    ctx->pc = 0x80BB66FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB66FCu)) return;
    // 80BB66FC: addi    r7, r7, 1120
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1120);

label_80BB6700:
    ctx->pc = 0x80BB6700u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6700u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BB6700: lfs     f1, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x80BB6700u)) return;
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
label_80BB6704:
    ctx->pc = 0x80BB6704u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6704u)) return;
    // 80BB6704: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_80BB6708:
    ctx->pc = 0x80BB6708u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6708u)) return;
    // 80BB6708: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80BB670C:
    ctx->pc = 0x80BB670Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB670Cu)) return;
    // 80BB670C: bl      0x8045EBB8
    {
            ctx->lr = 0x80BB6710u;
            ctx->pc = 0x8045EBB8u;
            return;
    }

label_80BB6710:
    ctx->pc = 0x80BB6710u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6710u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80BB6710: lis     r3, -27517
    ctx->gpr[3] = ((u32)(s32)(-27517) << 16);

label_80BB6714:
    ctx->pc = 0x80BB6714u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6714u)) return;
    // 80BB6714: addi    r3, r3, -28032
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28032);

label_80BB6718:
    ctx->pc = 0x80BB6718u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6718u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BB6718: lwz     r3, 0(r3)
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
label_80BB671C:
    ctx->pc = 0x80BB671Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB671Cu)) return;
    // 80BB671C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80BB6720:
    ctx->pc = 0x80BB6720u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6720u)) return;
    // 80BB6720: bl      0x8045EE90
    {
            ctx->lr = 0x80BB6724u;
            ctx->pc = 0x8045EE90u;
            return;
    }

label_80BB6724:
    ctx->pc = 0x80BB6724u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6724u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80BB6724: lis     r3, -27517
    ctx->gpr[3] = ((u32)(s32)(-27517) << 16);

label_80BB6728:
    ctx->pc = 0x80BB6728u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6728u)) return;
    // 80BB6728: addi    r3, r3, -28032
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28032);

label_80BB672C:
    ctx->pc = 0x80BB672Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB672Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BB672C: lwz     r3, 0(r3)
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
label_80BB6730:
    ctx->pc = 0x80BB6730u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6730u)) return;
    // 80BB6730: bl      0x8045EB8C
    {
            ctx->lr = 0x80BB6734u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80BB6734:
    ctx->pc = 0x80BB6734u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 15u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6734u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 15u : 1u;
    // 80BB6734: lis     r3, -27517
    ctx->gpr[3] = ((u32)(s32)(-27517) << 16);

label_80BB6738:
    ctx->pc = 0x80BB6738u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6738u)) return;
    // 80BB6738: addi    r3, r3, -28032
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28032);

label_80BB673C:
    ctx->pc = 0x80BB673Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB673Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80BB673C: lwz     r3, 0(r3)
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
label_80BB6740:
    ctx->pc = 0x80BB6740u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6740u)) return;
    // 80BB6740: lis     r4, -28515
    ctx->gpr[4] = ((u32)(s32)(-28515) << 16);

label_80BB6744:
    ctx->pc = 0x80BB6744u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6744u)) return;
    // 80BB6744: addi    r4, r4, -31468
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-31468);

label_80BB6748:
    ctx->pc = 0x80BB6748u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6748u)) return;
    // 80BB6748: lis     r5, -28510
    ctx->gpr[5] = ((u32)(s32)(-28510) << 16);

label_80BB674C:
    ctx->pc = 0x80BB674Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB674Cu)) return;
    // 80BB674C: addi    r5, r5, 26688
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(26688);

label_80BB6750:
    ctx->pc = 0x80BB6750u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6750u)) return;
    // 80BB6750: lis     r6, -28509
    ctx->gpr[6] = ((u32)(s32)(-28509) << 16);

label_80BB6754:
    ctx->pc = 0x80BB6754u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6754u)) return;
    // 80BB6754: addi    r6, r6, -10464
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-10464);

label_80BB6758:
    ctx->pc = 0x80BB6758u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6758u)) return;
    // 80BB6758: lis     r7, -27518
    ctx->gpr[7] = ((u32)(s32)(-27518) << 16);

label_80BB675C:
    ctx->pc = 0x80BB675Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB675Cu)) return;
    // 80BB675C: addi    r7, r7, 1120
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1120);

label_80BB6760:
    ctx->pc = 0x80BB6760u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6760u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BB6760: lfs     f1, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x80BB6760u)) return;
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
label_80BB6764:
    ctx->pc = 0x80BB6764u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6764u)) return;
    // 80BB6764: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_80BB6768:
    ctx->pc = 0x80BB6768u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6768u)) return;
    // 80BB6768: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80BB676C:
    ctx->pc = 0x80BB676Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB676Cu)) return;
    // 80BB676C: bl      0x8045EBB8
    {
            ctx->lr = 0x80BB6770u;
            ctx->pc = 0x8045EBB8u;
            return;
    }

label_80BB6770:
    ctx->pc = 0x80BB6770u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6770u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80BB6770: lis     r3, -27517
    ctx->gpr[3] = ((u32)(s32)(-27517) << 16);

label_80BB6774:
    ctx->pc = 0x80BB6774u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6774u)) return;
    // 80BB6774: addi    r3, r3, -28024
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28024);

label_80BB6778:
    ctx->pc = 0x80BB6778u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6778u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BB6778: lwz     r3, 0(r3)
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
label_80BB677C:
    ctx->pc = 0x80BB677Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB677Cu)) return;
    // 80BB677C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80BB6780:
    ctx->pc = 0x80BB6780u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6780u)) return;
    // 80BB6780: bl      0x8045EE90
    {
            ctx->lr = 0x80BB6784u;
            ctx->pc = 0x8045EE90u;
            return;
    }

label_80BB6784:
    ctx->pc = 0x80BB6784u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6784u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80BB6784: lis     r3, -27517
    ctx->gpr[3] = ((u32)(s32)(-27517) << 16);

label_80BB6788:
    ctx->pc = 0x80BB6788u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6788u)) return;
    // 80BB6788: addi    r3, r3, -28024
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28024);

label_80BB678C:
    ctx->pc = 0x80BB678Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB678Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BB678C: lwz     r3, 0(r3)
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
label_80BB6790:
    ctx->pc = 0x80BB6790u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6790u)) return;
    // 80BB6790: bl      0x8045EB8C
    {
            ctx->lr = 0x80BB6794u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80BB6794:
    ctx->pc = 0x80BB6794u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 15u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6794u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 15u : 1u;
    // 80BB6794: lis     r3, -27517
    ctx->gpr[3] = ((u32)(s32)(-27517) << 16);

label_80BB6798:
    ctx->pc = 0x80BB6798u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6798u)) return;
    // 80BB6798: addi    r3, r3, -28024
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28024);

label_80BB679C:
    ctx->pc = 0x80BB679Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB679Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80BB679C: lwz     r3, 0(r3)
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
label_80BB67A0:
    ctx->pc = 0x80BB67A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB67A0u)) return;
    // 80BB67A0: lis     r4, -28513
    ctx->gpr[4] = ((u32)(s32)(-28513) << 16);

label_80BB67A4:
    ctx->pc = 0x80BB67A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB67A4u)) return;
    // 80BB67A4: addi    r4, r4, -23820
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-23820);

label_80BB67A8:
    ctx->pc = 0x80BB67A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB67A8u)) return;
    // 80BB67A8: lis     r5, -28511
    ctx->gpr[5] = ((u32)(s32)(-28511) << 16);

label_80BB67AC:
    ctx->pc = 0x80BB67ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB67ACu)) return;
    // 80BB67AC: addi    r5, r5, 19020
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(19020);

label_80BB67B0:
    ctx->pc = 0x80BB67B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB67B0u)) return;
    // 80BB67B0: lis     r6, -28509
    ctx->gpr[6] = ((u32)(s32)(-28509) << 16);

label_80BB67B4:
    ctx->pc = 0x80BB67B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB67B4u)) return;
    // 80BB67B4: addi    r6, r6, -10464
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-10464);

label_80BB67B8:
    ctx->pc = 0x80BB67B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB67B8u)) return;
    // 80BB67B8: lis     r7, -27518
    ctx->gpr[7] = ((u32)(s32)(-27518) << 16);

label_80BB67BC:
    ctx->pc = 0x80BB67BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB67BCu)) return;
    // 80BB67BC: addi    r7, r7, 1120
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1120);

label_80BB67C0:
    ctx->pc = 0x80BB67C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB67C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BB67C0: lfs     f1, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x80BB67C0u)) return;
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
label_80BB67C4:
    ctx->pc = 0x80BB67C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB67C4u)) return;
    // 80BB67C4: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_80BB67C8:
    ctx->pc = 0x80BB67C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB67C8u)) return;
    // 80BB67C8: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80BB67CC:
    ctx->pc = 0x80BB67CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB67CCu)) return;
    // 80BB67CC: bl      0x8045EBB8
    {
            ctx->lr = 0x80BB67D0u;
            ctx->pc = 0x8045EBB8u;
            return;
    }

label_80BB67D0:
    ctx->pc = 0x80BB67D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB67D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80BB67D0: lis     r3, -27517
    ctx->gpr[3] = ((u32)(s32)(-27517) << 16);

label_80BB67D4:
    ctx->pc = 0x80BB67D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB67D4u)) return;
    // 80BB67D4: addi    r3, r3, -28020
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28020);

label_80BB67D8:
    ctx->pc = 0x80BB67D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB67D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BB67D8: lwz     r3, 0(r3)
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
label_80BB67DC:
    ctx->pc = 0x80BB67DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB67DCu)) return;
    // 80BB67DC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80BB67E0:
    ctx->pc = 0x80BB67E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB67E0u)) return;
    // 80BB67E0: bl      0x8045EE90
    {
            ctx->lr = 0x80BB67E4u;
            ctx->pc = 0x8045EE90u;
            return;
    }

label_80BB67E4:
    ctx->pc = 0x80BB67E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB67E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80BB67E4: lis     r3, -27517
    ctx->gpr[3] = ((u32)(s32)(-27517) << 16);

label_80BB67E8:
    ctx->pc = 0x80BB67E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB67E8u)) return;
    // 80BB67E8: addi    r3, r3, -28020
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28020);

label_80BB67EC:
    ctx->pc = 0x80BB67ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB67ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BB67EC: lwz     r3, 0(r3)
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
label_80BB67F0:
    ctx->pc = 0x80BB67F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB67F0u)) return;
    // 80BB67F0: bl      0x8045EB8C
    {
            ctx->lr = 0x80BB67F4u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80BB67F4:
    ctx->pc = 0x80BB67F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 15u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB67F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 15u : 1u;
    // 80BB67F4: lis     r3, -27517
    ctx->gpr[3] = ((u32)(s32)(-27517) << 16);

label_80BB67F8:
    ctx->pc = 0x80BB67F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB67F8u)) return;
    // 80BB67F8: addi    r3, r3, -28020
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28020);

label_80BB67FC:
    ctx->pc = 0x80BB67FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB67FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80BB67FC: lwz     r3, 0(r3)
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
label_80BB6800:
    ctx->pc = 0x80BB6800u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6800u)) return;
    // 80BB6800: lis     r4, -28515
    ctx->gpr[4] = ((u32)(s32)(-28515) << 16);

label_80BB6804:
    ctx->pc = 0x80BB6804u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6804u)) return;
    // 80BB6804: addi    r4, r4, 17136
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(17136);

label_80BB6808:
    ctx->pc = 0x80BB6808u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6808u)) return;
    // 80BB6808: lis     r5, -28510
    ctx->gpr[5] = ((u32)(s32)(-28510) << 16);

label_80BB680C:
    ctx->pc = 0x80BB680Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB680Cu)) return;
    // 80BB680C: addi    r5, r5, -27636
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-27636);

label_80BB6810:
    ctx->pc = 0x80BB6810u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6810u)) return;
    // 80BB6810: lis     r6, -28509
    ctx->gpr[6] = ((u32)(s32)(-28509) << 16);

label_80BB6814:
    ctx->pc = 0x80BB6814u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6814u)) return;
    // 80BB6814: addi    r6, r6, -10464
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-10464);

label_80BB6818:
    ctx->pc = 0x80BB6818u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6818u)) return;
    // 80BB6818: lis     r7, -27518
    ctx->gpr[7] = ((u32)(s32)(-27518) << 16);

label_80BB681C:
    ctx->pc = 0x80BB681Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB681Cu)) return;
    // 80BB681C: addi    r7, r7, 1120
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1120);

label_80BB6820:
    ctx->pc = 0x80BB6820u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6820u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BB6820: lfs     f1, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x80BB6820u)) return;
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
label_80BB6824:
    ctx->pc = 0x80BB6824u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6824u)) return;
    // 80BB6824: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_80BB6828:
    ctx->pc = 0x80BB6828u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6828u)) return;
    // 80BB6828: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80BB682C:
    ctx->pc = 0x80BB682Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB682Cu)) return;
    // 80BB682C: bl      0x8045EBB8
    {
            ctx->lr = 0x80BB6830u;
            ctx->pc = 0x8045EBB8u;
            return;
    }

label_80BB6830:
    ctx->pc = 0x80BB6830u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6830u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80BB6830: lis     r3, -27517
    ctx->gpr[3] = ((u32)(s32)(-27517) << 16);

label_80BB6834:
    ctx->pc = 0x80BB6834u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6834u)) return;
    // 80BB6834: addi    r3, r3, -28008
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28008);

label_80BB6838:
    ctx->pc = 0x80BB6838u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6838u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BB6838: lwz     r3, 0(r3)
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
label_80BB683C:
    ctx->pc = 0x80BB683Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB683Cu)) return;
    // 80BB683C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80BB6840:
    ctx->pc = 0x80BB6840u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6840u)) return;
    // 80BB6840: bl      0x8045EE90
    {
            ctx->lr = 0x80BB6844u;
            ctx->pc = 0x8045EE90u;
            return;
    }

label_80BB6844:
    ctx->pc = 0x80BB6844u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6844u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80BB6844: lis     r3, -27517
    ctx->gpr[3] = ((u32)(s32)(-27517) << 16);

label_80BB6848:
    ctx->pc = 0x80BB6848u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6848u)) return;
    // 80BB6848: addi    r3, r3, -28008
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28008);

label_80BB684C:
    ctx->pc = 0x80BB684Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB684Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BB684C: lwz     r3, 0(r3)
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
label_80BB6850:
    ctx->pc = 0x80BB6850u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6850u)) return;
    // 80BB6850: bl      0x8045EB8C
    {
            ctx->lr = 0x80BB6854u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80BB6854:
    ctx->pc = 0x80BB6854u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 15u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6854u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 15u : 1u;
    // 80BB6854: lis     r3, -27517
    ctx->gpr[3] = ((u32)(s32)(-27517) << 16);

label_80BB6858:
    ctx->pc = 0x80BB6858u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6858u)) return;
    // 80BB6858: addi    r3, r3, -28008
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28008);

label_80BB685C:
    ctx->pc = 0x80BB685Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB685Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80BB685C: lwz     r3, 0(r3)
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
label_80BB6860:
    ctx->pc = 0x80BB6860u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6860u)) return;
    // 80BB6860: lis     r4, -28516
    ctx->gpr[4] = ((u32)(s32)(-28516) << 16);

label_80BB6864:
    ctx->pc = 0x80BB6864u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6864u)) return;
    // 80BB6864: addi    r4, r4, -3808
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-3808);

label_80BB6868:
    ctx->pc = 0x80BB6868u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6868u)) return;
    // 80BB6868: lis     r5, -28509
    ctx->gpr[5] = ((u32)(s32)(-28509) << 16);

label_80BB686C:
    ctx->pc = 0x80BB686Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB686Cu)) return;
    // 80BB686C: addi    r5, r5, -24828
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24828);

label_80BB6870:
    ctx->pc = 0x80BB6870u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6870u)) return;
    // 80BB6870: lis     r6, -28509
    ctx->gpr[6] = ((u32)(s32)(-28509) << 16);

label_80BB6874:
    ctx->pc = 0x80BB6874u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6874u)) return;
    // 80BB6874: addi    r6, r6, -10464
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-10464);

label_80BB6878:
    ctx->pc = 0x80BB6878u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6878u)) return;
    // 80BB6878: lis     r7, -27518
    ctx->gpr[7] = ((u32)(s32)(-27518) << 16);

label_80BB687C:
    ctx->pc = 0x80BB687Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB687Cu)) return;
    // 80BB687C: addi    r7, r7, 1120
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1120);

label_80BB6880:
    ctx->pc = 0x80BB6880u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6880u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BB6880: lfs     f1, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x80BB6880u)) return;
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
label_80BB6884:
    ctx->pc = 0x80BB6884u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6884u)) return;
    // 80BB6884: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_80BB6888:
    ctx->pc = 0x80BB6888u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6888u)) return;
    // 80BB6888: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80BB688C:
    ctx->pc = 0x80BB688Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB688Cu)) return;
    // 80BB688C: bl      0x8045EBB8
    {
            ctx->lr = 0x80BB6890u;
            ctx->pc = 0x8045EBB8u;
            return;
    }

label_80BB6890:
    ctx->pc = 0x80BB6890u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6890u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80BB6890: lis     r3, -27517
    ctx->gpr[3] = ((u32)(s32)(-27517) << 16);

label_80BB6894:
    ctx->pc = 0x80BB6894u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6894u)) return;
    // 80BB6894: addi    r3, r3, -27996
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-27996);

label_80BB6898:
    ctx->pc = 0x80BB6898u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6898u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BB6898: lwz     r3, 0(r3)
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
label_80BB689C:
    ctx->pc = 0x80BB689Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB689Cu)) return;
    // 80BB689C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80BB68A0:
    ctx->pc = 0x80BB68A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB68A0u)) return;
    // 80BB68A0: bl      0x8045EE90
    {
            ctx->lr = 0x80BB68A4u;
            ctx->pc = 0x8045EE90u;
            return;
    }

label_80BB68A4:
    ctx->pc = 0x80BB68A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB68A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80BB68A4: lis     r3, -27517
    ctx->gpr[3] = ((u32)(s32)(-27517) << 16);

label_80BB68A8:
    ctx->pc = 0x80BB68A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB68A8u)) return;
    // 80BB68A8: addi    r3, r3, -27996
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-27996);

label_80BB68AC:
    ctx->pc = 0x80BB68ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB68ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BB68AC: lwz     r3, 0(r3)
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
label_80BB68B0:
    ctx->pc = 0x80BB68B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB68B0u)) return;
    // 80BB68B0: bl      0x8045EB8C
    {
            ctx->lr = 0x80BB68B4u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80BB68B4:
    ctx->pc = 0x80BB68B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 15u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB68B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 15u : 1u;
    // 80BB68B4: lis     r3, -27517
    ctx->gpr[3] = ((u32)(s32)(-27517) << 16);

label_80BB68B8:
    ctx->pc = 0x80BB68B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB68B8u)) return;
    // 80BB68B8: addi    r3, r3, -27996
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-27996);

label_80BB68BC:
    ctx->pc = 0x80BB68BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB68BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80BB68BC: lwz     r3, 0(r3)
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
label_80BB68C0:
    ctx->pc = 0x80BB68C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB68C0u)) return;
    // 80BB68C0: lis     r4, -28513
    ctx->gpr[4] = ((u32)(s32)(-28513) << 16);

label_80BB68C4:
    ctx->pc = 0x80BB68C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB68C4u)) return;
    // 80BB68C4: addi    r4, r4, 16420
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(16420);

label_80BB68C8:
    ctx->pc = 0x80BB68C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB68C8u)) return;
    // 80BB68C8: lis     r5, -28511
    ctx->gpr[5] = ((u32)(s32)(-28511) << 16);

label_80BB68CC:
    ctx->pc = 0x80BB68CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB68CCu)) return;
    // 80BB68CC: addi    r5, r5, -12280
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12280);

label_80BB68D0:
    ctx->pc = 0x80BB68D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB68D0u)) return;
    // 80BB68D0: lis     r6, -28509
    ctx->gpr[6] = ((u32)(s32)(-28509) << 16);

label_80BB68D4:
    ctx->pc = 0x80BB68D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB68D4u)) return;
    // 80BB68D4: addi    r6, r6, -10464
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-10464);

label_80BB68D8:
    ctx->pc = 0x80BB68D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB68D8u)) return;
    // 80BB68D8: lis     r7, -27518
    ctx->gpr[7] = ((u32)(s32)(-27518) << 16);

label_80BB68DC:
    ctx->pc = 0x80BB68DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB68DCu)) return;
    // 80BB68DC: addi    r7, r7, 1120
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1120);

label_80BB68E0:
    ctx->pc = 0x80BB68E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB68E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BB68E0: lfs     f1, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x80BB68E0u)) return;
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
label_80BB68E4:
    ctx->pc = 0x80BB68E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB68E4u)) return;
    // 80BB68E4: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_80BB68E8:
    ctx->pc = 0x80BB68E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB68E8u)) return;
    // 80BB68E8: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80BB68EC:
    ctx->pc = 0x80BB68ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB68ECu)) return;
    // 80BB68EC: bl      0x8045EBB8
    {
            ctx->lr = 0x80BB68F0u;
            ctx->pc = 0x8045EBB8u;
            return;
    }

label_80BB68F0:
    ctx->pc = 0x80BB68F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB68F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80BB68F0: lis     r3, -27517
    ctx->gpr[3] = ((u32)(s32)(-27517) << 16);

label_80BB68F4:
    ctx->pc = 0x80BB68F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB68F4u)) return;
    // 80BB68F4: addi    r3, r3, -28012
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28012);

label_80BB68F8:
    ctx->pc = 0x80BB68F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB68F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BB68F8: lwz     r3, 0(r3)
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
label_80BB68FC:
    ctx->pc = 0x80BB68FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB68FCu)) return;
    // 80BB68FC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80BB6900:
    ctx->pc = 0x80BB6900u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6900u)) return;
    // 80BB6900: bl      0x8045EE90
    {
            ctx->lr = 0x80BB6904u;
            ctx->pc = 0x8045EE90u;
            return;
    }

label_80BB6904:
    ctx->pc = 0x80BB6904u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6904u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80BB6904: lis     r3, -27517
    ctx->gpr[3] = ((u32)(s32)(-27517) << 16);

label_80BB6908:
    ctx->pc = 0x80BB6908u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6908u)) return;
    // 80BB6908: addi    r3, r3, -28012
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28012);

label_80BB690C:
    ctx->pc = 0x80BB690Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB690Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BB690C: lwz     r3, 0(r3)
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
label_80BB6910:
    ctx->pc = 0x80BB6910u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6910u)) return;
    // 80BB6910: bl      0x8045EB8C
    {
            ctx->lr = 0x80BB6914u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80BB6914:
    ctx->pc = 0x80BB6914u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 15u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6914u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 15u : 1u;
    // 80BB6914: lis     r3, -27517
    ctx->gpr[3] = ((u32)(s32)(-27517) << 16);

label_80BB6918:
    ctx->pc = 0x80BB6918u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6918u)) return;
    // 80BB6918: addi    r3, r3, -28012
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28012);

label_80BB691C:
    ctx->pc = 0x80BB691Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB691Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80BB691C: lwz     r3, 0(r3)
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
label_80BB6920:
    ctx->pc = 0x80BB6920u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6920u)) return;
    // 80BB6920: lis     r4, -28515
    ctx->gpr[4] = ((u32)(s32)(-28515) << 16);

label_80BB6924:
    ctx->pc = 0x80BB6924u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6924u)) return;
    // 80BB6924: addi    r4, r4, -16008
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-16008);

label_80BB6928:
    ctx->pc = 0x80BB6928u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6928u)) return;
    // 80BB6928: lis     r5, -28510
    ctx->gpr[5] = ((u32)(s32)(-28510) << 16);

label_80BB692C:
    ctx->pc = 0x80BB692Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB692Cu)) return;
    // 80BB692C: addi    r5, r5, 26688
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(26688);

label_80BB6930:
    ctx->pc = 0x80BB6930u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6930u)) return;
    // 80BB6930: lis     r6, -28509
    ctx->gpr[6] = ((u32)(s32)(-28509) << 16);

label_80BB6934:
    ctx->pc = 0x80BB6934u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6934u)) return;
    // 80BB6934: addi    r6, r6, -10464
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-10464);

label_80BB6938:
    ctx->pc = 0x80BB6938u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6938u)) return;
    // 80BB6938: lis     r7, -27518
    ctx->gpr[7] = ((u32)(s32)(-27518) << 16);

label_80BB693C:
    ctx->pc = 0x80BB693Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB693Cu)) return;
    // 80BB693C: addi    r7, r7, 1120
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1120);

label_80BB6940:
    ctx->pc = 0x80BB6940u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6940u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BB6940: lfs     f1, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x80BB6940u)) return;
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
label_80BB6944:
    ctx->pc = 0x80BB6944u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6944u)) return;
    // 80BB6944: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_80BB6948:
    ctx->pc = 0x80BB6948u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6948u)) return;
    // 80BB6948: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80BB694C:
    ctx->pc = 0x80BB694Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB694Cu)) return;
    // 80BB694C: bl      0x8045EBB8
    {
            ctx->lr = 0x80BB6950u;
            ctx->pc = 0x8045EBB8u;
            return;
    }

label_80BB6950:
    ctx->pc = 0x80BB6950u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6950u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80BB6950: lis     r3, -27517
    ctx->gpr[3] = ((u32)(s32)(-27517) << 16);

label_80BB6954:
    ctx->pc = 0x80BB6954u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6954u)) return;
    // 80BB6954: addi    r3, r3, -28004
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28004);

label_80BB6958:
    ctx->pc = 0x80BB6958u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6958u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BB6958: lwz     r3, 0(r3)
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
label_80BB695C:
    ctx->pc = 0x80BB695Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB695Cu)) return;
    // 80BB695C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80BB6960:
    ctx->pc = 0x80BB6960u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6960u)) return;
    // 80BB6960: bl      0x8045EE90
    {
            ctx->lr = 0x80BB6964u;
            ctx->pc = 0x8045EE90u;
            return;
    }

label_80BB6964:
    ctx->pc = 0x80BB6964u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6964u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80BB6964: lis     r3, -27517
    ctx->gpr[3] = ((u32)(s32)(-27517) << 16);

label_80BB6968:
    ctx->pc = 0x80BB6968u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6968u)) return;
    // 80BB6968: addi    r3, r3, -28004
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28004);

label_80BB696C:
    ctx->pc = 0x80BB696Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB696Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BB696C: lwz     r3, 0(r3)
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
label_80BB6970:
    ctx->pc = 0x80BB6970u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6970u)) return;
    // 80BB6970: bl      0x8045EB8C
    {
            ctx->lr = 0x80BB6974u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80BB6974:
    ctx->pc = 0x80BB6974u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 15u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6974u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 15u : 1u;
    // 80BB6974: lis     r3, -27517
    ctx->gpr[3] = ((u32)(s32)(-27517) << 16);

label_80BB6978:
    ctx->pc = 0x80BB6978u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6978u)) return;
    // 80BB6978: addi    r3, r3, -28004
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28004);

label_80BB697C:
    ctx->pc = 0x80BB697Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB697Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80BB697C: lwz     r3, 0(r3)
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
label_80BB6980:
    ctx->pc = 0x80BB6980u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6980u)) return;
    // 80BB6980: lis     r4, -28514
    ctx->gpr[4] = ((u32)(s32)(-28514) << 16);

label_80BB6984:
    ctx->pc = 0x80BB6984u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6984u)) return;
    // 80BB6984: addi    r4, r4, 16484
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(16484);

label_80BB6988:
    ctx->pc = 0x80BB6988u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6988u)) return;
    // 80BB6988: lis     r5, -28511
    ctx->gpr[5] = ((u32)(s32)(-28511) << 16);

label_80BB698C:
    ctx->pc = 0x80BB698Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB698Cu)) return;
    // 80BB698C: addi    r5, r5, 19020
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(19020);

label_80BB6990:
    ctx->pc = 0x80BB6990u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6990u)) return;
    // 80BB6990: lis     r6, -28509
    ctx->gpr[6] = ((u32)(s32)(-28509) << 16);

label_80BB6994:
    ctx->pc = 0x80BB6994u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6994u)) return;
    // 80BB6994: addi    r6, r6, -10464
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-10464);

label_80BB6998:
    ctx->pc = 0x80BB6998u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6998u)) return;
    // 80BB6998: lis     r7, -27518
    ctx->gpr[7] = ((u32)(s32)(-27518) << 16);

label_80BB699C:
    ctx->pc = 0x80BB699Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB699Cu)) return;
    // 80BB699C: addi    r7, r7, 1120
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1120);

label_80BB69A0:
    ctx->pc = 0x80BB69A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB69A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BB69A0: lfs     f1, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x80BB69A0u)) return;
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
label_80BB69A4:
    ctx->pc = 0x80BB69A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB69A4u)) return;
    // 80BB69A4: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_80BB69A8:
    ctx->pc = 0x80BB69A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB69A8u)) return;
    // 80BB69A8: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80BB69AC:
    ctx->pc = 0x80BB69ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB69ACu)) return;
    // 80BB69AC: bl      0x8045EBB8
    {
            ctx->lr = 0x80BB69B0u;
            ctx->pc = 0x8045EBB8u;
            return;
    }

label_80BB69B0:
    ctx->pc = 0x80BB69B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB69B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80BB69B0: lis     r3, -27517
    ctx->gpr[3] = ((u32)(s32)(-27517) << 16);

label_80BB69B4:
    ctx->pc = 0x80BB69B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB69B4u)) return;
    // 80BB69B4: addi    r3, r3, -28000
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28000);

label_80BB69B8:
    ctx->pc = 0x80BB69B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB69B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BB69B8: lwz     r3, 0(r3)
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
label_80BB69BC:
    ctx->pc = 0x80BB69BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB69BCu)) return;
    // 80BB69BC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80BB69C0:
    ctx->pc = 0x80BB69C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB69C0u)) return;
    // 80BB69C0: bl      0x8045EE90
    {
            ctx->lr = 0x80BB69C4u;
            ctx->pc = 0x8045EE90u;
            return;
    }

label_80BB69C4:
    ctx->pc = 0x80BB69C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB69C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80BB69C4: lis     r3, -27517
    ctx->gpr[3] = ((u32)(s32)(-27517) << 16);

label_80BB69C8:
    ctx->pc = 0x80BB69C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB69C8u)) return;
    // 80BB69C8: addi    r3, r3, -28000
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28000);

label_80BB69CC:
    ctx->pc = 0x80BB69CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB69CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BB69CC: lwz     r3, 0(r3)
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
label_80BB69D0:
    ctx->pc = 0x80BB69D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB69D0u)) return;
    // 80BB69D0: bl      0x8045EB8C
    {
            ctx->lr = 0x80BB69D4u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80BB69D4:
    ctx->pc = 0x80BB69D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 15u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB69D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 15u : 1u;
    // 80BB69D4: lis     r3, -27517
    ctx->gpr[3] = ((u32)(s32)(-27517) << 16);

label_80BB69D8:
    ctx->pc = 0x80BB69D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB69D8u)) return;
    // 80BB69D8: addi    r3, r3, -28000
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28000);

label_80BB69DC:
    ctx->pc = 0x80BB69DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB69DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80BB69DC: lwz     r3, 0(r3)
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
label_80BB69E0:
    ctx->pc = 0x80BB69E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB69E0u)) return;
    // 80BB69E0: lis     r4, -28514
    ctx->gpr[4] = ((u32)(s32)(-28514) << 16);

label_80BB69E4:
    ctx->pc = 0x80BB69E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB69E4u)) return;
    // 80BB69E4: addi    r4, r4, -18400
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-18400);

label_80BB69E8:
    ctx->pc = 0x80BB69E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB69E8u)) return;
    // 80BB69E8: lis     r5, -28510
    ctx->gpr[5] = ((u32)(s32)(-28510) << 16);

label_80BB69EC:
    ctx->pc = 0x80BB69ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB69ECu)) return;
    // 80BB69EC: addi    r5, r5, -27636
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-27636);

label_80BB69F0:
    ctx->pc = 0x80BB69F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB69F0u)) return;
    // 80BB69F0: lis     r6, -28509
    ctx->gpr[6] = ((u32)(s32)(-28509) << 16);

label_80BB69F4:
    ctx->pc = 0x80BB69F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB69F4u)) return;
    // 80BB69F4: addi    r6, r6, -10464
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-10464);

label_80BB69F8:
    ctx->pc = 0x80BB69F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB69F8u)) return;
    // 80BB69F8: lis     r7, -27518
    ctx->gpr[7] = ((u32)(s32)(-27518) << 16);

label_80BB69FC:
    ctx->pc = 0x80BB69FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB69FCu)) return;
    // 80BB69FC: addi    r7, r7, 1120
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1120);

label_80BB6A00:
    ctx->pc = 0x80BB6A00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6A00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BB6A00: lfs     f1, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x80BB6A00u)) return;
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
label_80BB6A04:
    ctx->pc = 0x80BB6A04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6A04u)) return;
    // 80BB6A04: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_80BB6A08:
    ctx->pc = 0x80BB6A08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6A08u)) return;
    // 80BB6A08: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80BB6A0C:
    ctx->pc = 0x80BB6A0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6A0Cu)) return;
    // 80BB6A0C: bl      0x8045EBB8
    {
            ctx->lr = 0x80BB6A10u;
            ctx->pc = 0x8045EBB8u;
            return;
    }

label_80BB6A10:
    ctx->pc = 0x80BB6A10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6A10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BB6A10: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BB6A14:
    ctx->pc = 0x80BB6A14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6A14u)) return;
    // 80BB6A14: bl      0x8045F220
    {
            ctx->lr = 0x80BB6A18u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80BB6A18:
    ctx->pc = 0x80BB6A18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6A18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BB6A18: bl      0x8045C034
    {
            ctx->lr = 0x80BB6A1Cu;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80BB6A1C:
    ctx->pc = 0x80BB6A1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6A1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BB6A1C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BB6A20:
    ctx->pc = 0x80BB6A20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6A20u)) return;
    // 80BB6A20: bl      0x8045F220
    {
            ctx->lr = 0x80BB6A24u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80BB6A24:
    ctx->pc = 0x80BB6A24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6A24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80BB6A24: lis     r4, -27518
    ctx->gpr[4] = ((u32)(s32)(-27518) << 16);

label_80BB6A28:
    ctx->pc = 0x80BB6A28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6A28u)) return;
    // 80BB6A28: addi    r4, r4, 1696
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1696);

label_80BB6A2C:
    ctx->pc = 0x80BB6A2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6A2Cu)) return;
    // 80BB6A2C: bl      0x8045C060
    {
            ctx->lr = 0x80BB6A30u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80BB6A30:
    ctx->pc = 0x80BB6A30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6A30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BB6A30: li      r3, 40
    ctx->gpr[3] = (u32)(s32)(40);

label_80BB6A34:
    ctx->pc = 0x80BB6A34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6A34u)) return;
    // 80BB6A34: bl      0x8045F7C8
    {
            ctx->lr = 0x80BB6A38u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80BB6A38:
    ctx->pc = 0x80BB6A38u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6A38u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BB6A38: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BB6A3C:
    ctx->pc = 0x80BB6A3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6A3Cu)) return;
    // 80BB6A3C: bl      0x8045F220
    {
            ctx->lr = 0x80BB6A40u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80BB6A40:
    ctx->pc = 0x80BB6A40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6A40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BB6A40: bl      0x8045C034
    {
            ctx->lr = 0x80BB6A44u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80BB6A44:
    ctx->pc = 0x80BB6A44u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6A44u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80BB6A44: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80BB6A48:
    ctx->pc = 0x80BB6A48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6A48u)) return;
    // 80BB6A48: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80BB6A4C:
    ctx->pc = 0x80BB6A4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6A4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BB6A4C: lwz     r0, 0(r3)
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
label_80BB6A50:
    ctx->pc = 0x80BB6A50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6A50u)) return;
    // 80BB6A50: cmpwi   r0, 0
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

label_80BB6A54:
    ctx->pc = 0x80BB6A54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6A54u)) return;
    // 80BB6A54: bc    4, 2, 0x80BB6A6C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80BB6A6C;
        }
    }

label_80BB6A58:
    ctx->pc = 0x80BB6A58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6A58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BB6A58: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BB6A5C:
    ctx->pc = 0x80BB6A5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6A5Cu)) return;
    // 80BB6A5C: bl      0x8045F220
    {
            ctx->lr = 0x80BB6A60u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80BB6A60:
    ctx->pc = 0x80BB6A60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6A60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80BB6A60: lis     r4, -27518
    ctx->gpr[4] = ((u32)(s32)(-27518) << 16);

label_80BB6A64:
    ctx->pc = 0x80BB6A64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6A64u)) return;
    // 80BB6A64: addi    r4, r4, 1700
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1700);

label_80BB6A68:
    ctx->pc = 0x80BB6A68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6A68u)) return;
    // 80BB6A68: bl      0x8045C060
    {
            ctx->lr = 0x80BB6A6Cu;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80BB6A6C:
    ctx->pc = 0x80BB6A6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6A6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80BB6A6C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BB6A70:
    ctx->pc = 0x80BB6A70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6A70u)) return;
    // 80BB6A70: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80BB6A74:
    ctx->pc = 0x80BB6A74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6A74u)) return;
    // 80BB6A74: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80BB6A78:
    ctx->pc = 0x80BB6A78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6A78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BB6A78: lwz     r0, 0(r4)
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
label_80BB6A7C:
    ctx->pc = 0x80BB6A7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6A7Cu)) return;
    // 80BB6A7C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80BB6A80:
    ctx->pc = 0x80BB6A80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6A80u)) return;
    // 80BB6A80: lis     r4, -27518
    ctx->gpr[4] = ((u32)(s32)(-27518) << 16);

label_80BB6A84:
    ctx->pc = 0x80BB6A84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6A84u)) return;
    // 80BB6A84: addi    r4, r4, 1656
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1656);

label_80BB6A88:
    ctx->pc = 0x80BB6A88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6A88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BB6A88: lwzx    r4, r4, r0
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
label_80BB6A8C:
    ctx->pc = 0x80BB6A8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6A8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BB6A8C: lwz     r4, 0(r4)
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
label_80BB6A90:
    ctx->pc = 0x80BB6A90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6A90u)) return;
    // 80BB6A90: bl      0x8045F608
    {
            ctx->lr = 0x80BB6A94u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80BB6A94:
    ctx->pc = 0x80BB6A94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6A94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80BB6A94: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80BB6A98:
    ctx->pc = 0x80BB6A98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6A98u)) return;
    // 80BB6A98: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80BB6A9C:
    ctx->pc = 0x80BB6A9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6A9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BB6A9C: lwz     r0, 0(r3)
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
label_80BB6AA0:
    ctx->pc = 0x80BB6AA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6AA0u)) return;
    // 80BB6AA0: cmpwi   r0, 1
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

label_80BB6AA4:
    ctx->pc = 0x80BB6AA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6AA4u)) return;
    // 80BB6AA4: bc    4, 2, 0x80BB6ABC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80BB6ABC;
        }
    }

label_80BB6AA8:
    ctx->pc = 0x80BB6AA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6AA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BB6AA8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BB6AAC:
    ctx->pc = 0x80BB6AACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6AACu)) return;
    // 80BB6AAC: bl      0x8045F220
    {
            ctx->lr = 0x80BB6AB0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80BB6AB0:
    ctx->pc = 0x80BB6AB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6AB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80BB6AB0: lis     r4, -27518
    ctx->gpr[4] = ((u32)(s32)(-27518) << 16);

label_80BB6AB4:
    ctx->pc = 0x80BB6AB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6AB4u)) return;
    // 80BB6AB4: addi    r4, r4, 1704
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1704);

label_80BB6AB8:
    ctx->pc = 0x80BB6AB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6AB8u)) return;
    // 80BB6AB8: bl      0x8045C060
    {
            ctx->lr = 0x80BB6ABCu;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80BB6ABC:
    ctx->pc = 0x80BB6ABCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6ABCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BB6ABC: li      r3, 819
    ctx->gpr[3] = (u32)(s32)(819);

label_80BB6AC0:
    ctx->pc = 0x80BB6AC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6AC0u)) return;
    // 80BB6AC0: bl      0x8045BFA0
    {
            ctx->lr = 0x80BB6AC4u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80BB6AC4:
    ctx->pc = 0x80BB6AC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6AC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BB6AC4: li      r3, 100
    ctx->gpr[3] = (u32)(s32)(100);

label_80BB6AC8:
    ctx->pc = 0x80BB6AC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6AC8u)) return;
    // 80BB6AC8: bl      0x8045F7C8
    {
            ctx->lr = 0x80BB6ACCu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80BB6ACC:
    ctx->pc = 0x80BB6ACCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6ACCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BB6ACC: bl      0x8045F32C
    {
            ctx->lr = 0x80BB6AD0u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80BB6AD0:
    ctx->pc = 0x80BB6AD0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6AD0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80BB6AD0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80BB6AD4:
    ctx->pc = 0x80BB6AD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6AD4u)) return;
    // 80BB6AD4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80BB6AD8:
    ctx->pc = 0x80BB6AD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6AD8u)) return;
    // 80BB6AD8: lis     r5, -27518
    ctx->gpr[5] = ((u32)(s32)(-27518) << 16);

label_80BB6ADC:
    ctx->pc = 0x80BB6ADCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6ADCu)) return;
    // 80BB6ADC: addi    r5, r5, 1124
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1124);

label_80BB6AE0:
    ctx->pc = 0x80BB6AE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6AE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BB6AE0: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BB6AE0u)) return;
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
label_80BB6AE4:
    ctx->pc = 0x80BB6AE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6AE4u)) return;
    // 80BB6AE4: lis     r5, -27518
    ctx->gpr[5] = ((u32)(s32)(-27518) << 16);

label_80BB6AE8:
    ctx->pc = 0x80BB6AE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6AE8u)) return;
    // 80BB6AE8: addi    r5, r5, 1128
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1128);

label_80BB6AEC:
    ctx->pc = 0x80BB6AECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6AECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BB6AEC: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BB6AECu)) return;
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
label_80BB6AF0:
    ctx->pc = 0x80BB6AF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6AF0u)) return;
    // 80BB6AF0: lis     r5, -27518
    ctx->gpr[5] = ((u32)(s32)(-27518) << 16);

label_80BB6AF4:
    ctx->pc = 0x80BB6AF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6AF4u)) return;
    // 80BB6AF4: addi    r5, r5, 1132
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1132);

label_80BB6AF8:
    ctx->pc = 0x80BB6AF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6AF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BB6AF8: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BB6AF8u)) return;
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
label_80BB6AFC:
    ctx->pc = 0x80BB6AFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6AFCu)) return;
    // 80BB6AFC: bl      0x8045C750
    {
            ctx->lr = 0x80BB6B00u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80BB6B00:
    ctx->pc = 0x80BB6B00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6B00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80BB6B00: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80BB6B04:
    ctx->pc = 0x80BB6B04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6B04u)) return;
    // 80BB6B04: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80BB6B08:
    ctx->pc = 0x80BB6B08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6B08u)) return;
    // 80BB6B08: li      r5, 3072
    ctx->gpr[5] = (u32)(s32)(3072);

label_80BB6B0C:
    ctx->pc = 0x80BB6B0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6B0Cu)) return;
    // 80BB6B0C: li      r6, 15244
    ctx->gpr[6] = (u32)(s32)(15244);

label_80BB6B10:
    ctx->pc = 0x80BB6B10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6B10u)) return;
    // 80BB6B10: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80BB6B14:
    ctx->pc = 0x80BB6B14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6B14u)) return;
    // 80BB6B14: bl      0x8045C7B4
    {
            ctx->lr = 0x80BB6B18u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80BB6B18:
    ctx->pc = 0x80BB6B18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6B18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80BB6B18: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80BB6B1C:
    ctx->pc = 0x80BB6B1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6B1Cu)) return;
    // 80BB6B1C: li      r4, 150
    ctx->gpr[4] = (u32)(s32)(150);

label_80BB6B20:
    ctx->pc = 0x80BB6B20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6B20u)) return;
    // 80BB6B20: lis     r5, -27518
    ctx->gpr[5] = ((u32)(s32)(-27518) << 16);

label_80BB6B24:
    ctx->pc = 0x80BB6B24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6B24u)) return;
    // 80BB6B24: addi    r5, r5, 1136
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1136);

label_80BB6B28:
    ctx->pc = 0x80BB6B28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6B28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BB6B28: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BB6B28u)) return;
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
label_80BB6B2C:
    ctx->pc = 0x80BB6B2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6B2Cu)) return;
    // 80BB6B2C: lis     r5, -27518
    ctx->gpr[5] = ((u32)(s32)(-27518) << 16);

label_80BB6B30:
    ctx->pc = 0x80BB6B30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6B30u)) return;
    // 80BB6B30: addi    r5, r5, 1128
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1128);

label_80BB6B34:
    ctx->pc = 0x80BB6B34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6B34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BB6B34: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BB6B34u)) return;
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
label_80BB6B38:
    ctx->pc = 0x80BB6B38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6B38u)) return;
    // 80BB6B38: lis     r5, -27518
    ctx->gpr[5] = ((u32)(s32)(-27518) << 16);

label_80BB6B3C:
    ctx->pc = 0x80BB6B3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6B3Cu)) return;
    // 80BB6B3C: addi    r5, r5, 1140
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1140);

label_80BB6B40:
    ctx->pc = 0x80BB6B40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6B40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BB6B40: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BB6B40u)) return;
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
label_80BB6B44:
    ctx->pc = 0x80BB6B44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6B44u)) return;
    // 80BB6B44: bl      0x8045C750
    {
            ctx->lr = 0x80BB6B48u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80BB6B48:
    ctx->pc = 0x80BB6B48u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6B48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80BB6B48: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80BB6B4C:
    ctx->pc = 0x80BB6B4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6B4Cu)) return;
    // 80BB6B4C: li      r4, 150
    ctx->gpr[4] = (u32)(s32)(150);

label_80BB6B50:
    ctx->pc = 0x80BB6B50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6B50u)) return;
    // 80BB6B50: li      r5, 3072
    ctx->gpr[5] = (u32)(s32)(3072);

label_80BB6B54:
    ctx->pc = 0x80BB6B54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6B54u)) return;
    // 80BB6B54: li      r6, 15244
    ctx->gpr[6] = (u32)(s32)(15244);

label_80BB6B58:
    ctx->pc = 0x80BB6B58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6B58u)) return;
    // 80BB6B58: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80BB6B5C:
    ctx->pc = 0x80BB6B5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6B5Cu)) return;
    // 80BB6B5C: bl      0x8045C7B4
    {
            ctx->lr = 0x80BB6B60u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80BB6B60:
    ctx->pc = 0x80BB6B60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6B60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BB6B60: li      r3, 825
    ctx->gpr[3] = (u32)(s32)(825);

label_80BB6B64:
    ctx->pc = 0x80BB6B64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6B64u)) return;
    // 80BB6B64: bl      0x8045BFA0
    {
            ctx->lr = 0x80BB6B68u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80BB6B68:
    ctx->pc = 0x80BB6B68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6B68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BB6B68: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80BB6B6C:
    ctx->pc = 0x80BB6B6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6B6Cu)) return;
    // 80BB6B6C: bl      0x8045F7C8
    {
            ctx->lr = 0x80BB6B70u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80BB6B70:
    ctx->pc = 0x80BB6B70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6B70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BB6B70: li      r3, 821
    ctx->gpr[3] = (u32)(s32)(821);

label_80BB6B74:
    ctx->pc = 0x80BB6B74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6B74u)) return;
    // 80BB6B74: bl      0x8045BFA0
    {
            ctx->lr = 0x80BB6B78u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80BB6B78:
    ctx->pc = 0x80BB6B78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6B78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BB6B78: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80BB6B7C:
    ctx->pc = 0x80BB6B7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6B7Cu)) return;
    // 80BB6B7C: bl      0x8045F7C8
    {
            ctx->lr = 0x80BB6B80u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80BB6B80:
    ctx->pc = 0x80BB6B80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6B80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BB6B80: li      r3, 824
    ctx->gpr[3] = (u32)(s32)(824);

label_80BB6B84:
    ctx->pc = 0x80BB6B84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6B84u)) return;
    // 80BB6B84: bl      0x8045BFA0
    {
            ctx->lr = 0x80BB6B88u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80BB6B88:
    ctx->pc = 0x80BB6B88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6B88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BB6B88: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80BB6B8C:
    ctx->pc = 0x80BB6B8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6B8Cu)) return;
    // 80BB6B8C: bl      0x8045F7C8
    {
            ctx->lr = 0x80BB6B90u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80BB6B90:
    ctx->pc = 0x80BB6B90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6B90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80BB6B90: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80BB6B94:
    ctx->pc = 0x80BB6B94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6B94u)) return;
    // 80BB6B94: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80BB6B98:
    ctx->pc = 0x80BB6B98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6B98u)) return;
    // 80BB6B98: lis     r5, -27518
    ctx->gpr[5] = ((u32)(s32)(-27518) << 16);

label_80BB6B9C:
    ctx->pc = 0x80BB6B9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6B9Cu)) return;
    // 80BB6B9C: addi    r5, r5, 1144
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1144);

label_80BB6BA0:
    ctx->pc = 0x80BB6BA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6BA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BB6BA0: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BB6BA0u)) return;
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
label_80BB6BA4:
    ctx->pc = 0x80BB6BA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6BA4u)) return;
    // 80BB6BA4: lis     r5, -27518
    ctx->gpr[5] = ((u32)(s32)(-27518) << 16);

label_80BB6BA8:
    ctx->pc = 0x80BB6BA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6BA8u)) return;
    // 80BB6BA8: addi    r5, r5, 1148
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1148);

label_80BB6BAC:
    ctx->pc = 0x80BB6BACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6BACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BB6BAC: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BB6BACu)) return;
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
label_80BB6BB0:
    ctx->pc = 0x80BB6BB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6BB0u)) return;
    // 80BB6BB0: lis     r5, -27518
    ctx->gpr[5] = ((u32)(s32)(-27518) << 16);

label_80BB6BB4:
    ctx->pc = 0x80BB6BB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6BB4u)) return;
    // 80BB6BB4: addi    r5, r5, 1152
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1152);

label_80BB6BB8:
    ctx->pc = 0x80BB6BB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6BB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BB6BB8: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BB6BB8u)) return;
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
label_80BB6BBC:
    ctx->pc = 0x80BB6BBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6BBCu)) return;
    // 80BB6BBC: bl      0x8045C750
    {
            ctx->lr = 0x80BB6BC0u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80BB6BC0:
    ctx->pc = 0x80BB6BC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6BC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80BB6BC0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80BB6BC4:
    ctx->pc = 0x80BB6BC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6BC4u)) return;
    // 80BB6BC4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80BB6BC8:
    ctx->pc = 0x80BB6BC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6BC8u)) return;
    // 80BB6BC8: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80BB6BCC:
    ctx->pc = 0x80BB6BCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6BCCu)) return;
    // 80BB6BCC: addi    r5, r6, -5244
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-5244);

label_80BB6BD0:
    ctx->pc = 0x80BB6BD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6BD0u)) return;
    // 80BB6BD0: addi    r6, r6, -26766
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-26766);

label_80BB6BD4:
    ctx->pc = 0x80BB6BD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6BD4u)) return;
    // 80BB6BD4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80BB6BD8:
    ctx->pc = 0x80BB6BD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6BD8u)) return;
    // 80BB6BD8: bl      0x8045C7B4
    {
            ctx->lr = 0x80BB6BDCu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80BB6BDC:
    ctx->pc = 0x80BB6BDCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6BDCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80BB6BDC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80BB6BE0:
    ctx->pc = 0x80BB6BE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6BE0u)) return;
    // 80BB6BE0: li      r4, 200
    ctx->gpr[4] = (u32)(s32)(200);

label_80BB6BE4:
    ctx->pc = 0x80BB6BE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6BE4u)) return;
    // 80BB6BE4: lis     r5, -27518
    ctx->gpr[5] = ((u32)(s32)(-27518) << 16);

label_80BB6BE8:
    ctx->pc = 0x80BB6BE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6BE8u)) return;
    // 80BB6BE8: addi    r5, r5, 1156
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1156);

label_80BB6BEC:
    ctx->pc = 0x80BB6BECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6BECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BB6BEC: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BB6BECu)) return;
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
label_80BB6BF0:
    ctx->pc = 0x80BB6BF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6BF0u)) return;
    // 80BB6BF0: lis     r5, -27518
    ctx->gpr[5] = ((u32)(s32)(-27518) << 16);

label_80BB6BF4:
    ctx->pc = 0x80BB6BF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6BF4u)) return;
    // 80BB6BF4: addi    r5, r5, 1160
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1160);

label_80BB6BF8:
    ctx->pc = 0x80BB6BF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6BF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BB6BF8: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BB6BF8u)) return;
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
label_80BB6BFC:
    ctx->pc = 0x80BB6BFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6BFCu)) return;
    // 80BB6BFC: lis     r5, -27518
    ctx->gpr[5] = ((u32)(s32)(-27518) << 16);

label_80BB6C00:
    ctx->pc = 0x80BB6C00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6C00u)) return;
    // 80BB6C00: addi    r5, r5, 1164
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1164);

label_80BB6C04:
    ctx->pc = 0x80BB6C04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6C04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BB6C04: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BB6C04u)) return;
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
label_80BB6C08:
    ctx->pc = 0x80BB6C08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6C08u)) return;
    // 80BB6C08: bl      0x8045C750
    {
            ctx->lr = 0x80BB6C0Cu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80BB6C0C:
    ctx->pc = 0x80BB6C0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6C0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80BB6C0C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80BB6C10:
    ctx->pc = 0x80BB6C10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6C10u)) return;
    // 80BB6C10: li      r4, 200
    ctx->gpr[4] = (u32)(s32)(200);

label_80BB6C14:
    ctx->pc = 0x80BB6C14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6C14u)) return;
    // 80BB6C14: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80BB6C18:
    ctx->pc = 0x80BB6C18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6C18u)) return;
    // 80BB6C18: addi    r5, r6, -5244
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-5244);

label_80BB6C1C:
    ctx->pc = 0x80BB6C1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6C1Cu)) return;
    // 80BB6C1C: addi    r6, r6, -26766
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-26766);

label_80BB6C20:
    ctx->pc = 0x80BB6C20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6C20u)) return;
    // 80BB6C20: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80BB6C24:
    ctx->pc = 0x80BB6C24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6C24u)) return;
    // 80BB6C24: bl      0x8045C7B4
    {
            ctx->lr = 0x80BB6C28u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80BB6C28:
    ctx->pc = 0x80BB6C28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6C28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80BB6C28: lis     r3, -27517
    ctx->gpr[3] = ((u32)(s32)(-27517) << 16);

label_80BB6C2C:
    ctx->pc = 0x80BB6C2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6C2Cu)) return;
    // 80BB6C2C: addi    r3, r3, -28028
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28028);

label_80BB6C30:
    ctx->pc = 0x80BB6C30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6C30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BB6C30: lwz     r3, 0(r3)
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
label_80BB6C34:
    ctx->pc = 0x80BB6C34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6C34u)) return;
    // 80BB6C34: lis     r4, -27518
    ctx->gpr[4] = ((u32)(s32)(-27518) << 16);

label_80BB6C38:
    ctx->pc = 0x80BB6C38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6C38u)) return;
    // 80BB6C38: addi    r4, r4, 1168
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1168);

label_80BB6C3C:
    ctx->pc = 0x80BB6C3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6C3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BB6C3C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BB6C3Cu)) return;
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
label_80BB6C40:
    ctx->pc = 0x80BB6C40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6C40u)) return;
    // 80BB6C40: lis     r4, -27518
    ctx->gpr[4] = ((u32)(s32)(-27518) << 16);

label_80BB6C44:
    ctx->pc = 0x80BB6C44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6C44u)) return;
    // 80BB6C44: addi    r4, r4, 1172
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1172);

label_80BB6C48:
    ctx->pc = 0x80BB6C48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6C48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BB6C48: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BB6C48u)) return;
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
label_80BB6C4C:
    ctx->pc = 0x80BB6C4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6C4Cu)) return;
    // 80BB6C4C: lis     r4, -27518
    ctx->gpr[4] = ((u32)(s32)(-27518) << 16);

label_80BB6C50:
    ctx->pc = 0x80BB6C50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6C50u)) return;
    // 80BB6C50: addi    r4, r4, 1176
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1176);

label_80BB6C54:
    ctx->pc = 0x80BB6C54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6C54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BB6C54: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BB6C54u)) return;
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
label_80BB6C58:
    ctx->pc = 0x80BB6C58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6C58u)) return;
    // 80BB6C58: bl      0x8045EF2C
    {
            ctx->lr = 0x80BB6C5Cu;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80BB6C5C:
    ctx->pc = 0x80BB6C5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6C5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80BB6C5C: lis     r3, -27517
    ctx->gpr[3] = ((u32)(s32)(-27517) << 16);

label_80BB6C60:
    ctx->pc = 0x80BB6C60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6C60u)) return;
    // 80BB6C60: addi    r3, r3, -28028
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28028);

label_80BB6C64:
    ctx->pc = 0x80BB6C64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6C64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BB6C64: lwz     r3, 0(r3)
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
label_80BB6C68:
    ctx->pc = 0x80BB6C68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6C68u)) return;
    // 80BB6C68: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80BB6C6C:
    ctx->pc = 0x80BB6C6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6C6Cu)) return;
    // 80BB6C6C: li      r5, 31161
    ctx->gpr[5] = (u32)(s32)(31161);

label_80BB6C70:
    ctx->pc = 0x80BB6C70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6C70u)) return;
    // 80BB6C70: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80BB6C74:
    ctx->pc = 0x80BB6C74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6C74u)) return;
    // 80BB6C74: bl      0x8045EEA8
    {
            ctx->lr = 0x80BB6C78u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80BB6C78:
    ctx->pc = 0x80BB6C78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6C78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80BB6C78: lis     r3, -27517
    ctx->gpr[3] = ((u32)(s32)(-27517) << 16);

label_80BB6C7C:
    ctx->pc = 0x80BB6C7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6C7Cu)) return;
    // 80BB6C7C: addi    r3, r3, -28032
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28032);

label_80BB6C80:
    ctx->pc = 0x80BB6C80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6C80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BB6C80: lwz     r3, 0(r3)
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
label_80BB6C84:
    ctx->pc = 0x80BB6C84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6C84u)) return;
    // 80BB6C84: lis     r4, -27518
    ctx->gpr[4] = ((u32)(s32)(-27518) << 16);

label_80BB6C88:
    ctx->pc = 0x80BB6C88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6C88u)) return;
    // 80BB6C88: addi    r4, r4, 1180
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1180);

label_80BB6C8C:
    ctx->pc = 0x80BB6C8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6C8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BB6C8C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BB6C8Cu)) return;
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
label_80BB6C90:
    ctx->pc = 0x80BB6C90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6C90u)) return;
    // 80BB6C90: lis     r4, -27518
    ctx->gpr[4] = ((u32)(s32)(-27518) << 16);

label_80BB6C94:
    ctx->pc = 0x80BB6C94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6C94u)) return;
    // 80BB6C94: addi    r4, r4, 1184
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1184);

label_80BB6C98:
    ctx->pc = 0x80BB6C98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6C98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BB6C98: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BB6C98u)) return;
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
label_80BB6C9C:
    ctx->pc = 0x80BB6C9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6C9Cu)) return;
    // 80BB6C9C: lis     r4, -27518
    ctx->gpr[4] = ((u32)(s32)(-27518) << 16);

label_80BB6CA0:
    ctx->pc = 0x80BB6CA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6CA0u)) return;
    // 80BB6CA0: addi    r4, r4, 1188
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1188);

label_80BB6CA4:
    ctx->pc = 0x80BB6CA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6CA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BB6CA4: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BB6CA4u)) return;
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
label_80BB6CA8:
    ctx->pc = 0x80BB6CA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6CA8u)) return;
    // 80BB6CA8: bl      0x8045EF2C
    {
            ctx->lr = 0x80BB6CACu;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80BB6CAC:
    ctx->pc = 0x80BB6CACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6CACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80BB6CAC: lis     r3, -27517
    ctx->gpr[3] = ((u32)(s32)(-27517) << 16);

label_80BB6CB0:
    ctx->pc = 0x80BB6CB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6CB0u)) return;
    // 80BB6CB0: addi    r3, r3, -28032
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28032);

label_80BB6CB4:
    ctx->pc = 0x80BB6CB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6CB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BB6CB4: lwz     r3, 0(r3)
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
label_80BB6CB8:
    ctx->pc = 0x80BB6CB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6CB8u)) return;
    // 80BB6CB8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80BB6CBC:
    ctx->pc = 0x80BB6CBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6CBCu)) return;
    // 80BB6CBC: li      r5, 31161
    ctx->gpr[5] = (u32)(s32)(31161);

label_80BB6CC0:
    ctx->pc = 0x80BB6CC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6CC0u)) return;
    // 80BB6CC0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80BB6CC4:
    ctx->pc = 0x80BB6CC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6CC4u)) return;
    // 80BB6CC4: bl      0x8045EEA8
    {
            ctx->lr = 0x80BB6CC8u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80BB6CC8:
    ctx->pc = 0x80BB6CC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6CC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80BB6CC8: lis     r3, -27517
    ctx->gpr[3] = ((u32)(s32)(-27517) << 16);

label_80BB6CCC:
    ctx->pc = 0x80BB6CCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6CCCu)) return;
    // 80BB6CCC: addi    r3, r3, -28016
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28016);

label_80BB6CD0:
    ctx->pc = 0x80BB6CD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6CD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BB6CD0: lwz     r3, 0(r3)
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
label_80BB6CD4:
    ctx->pc = 0x80BB6CD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6CD4u)) return;
    // 80BB6CD4: lis     r4, -27518
    ctx->gpr[4] = ((u32)(s32)(-27518) << 16);

label_80BB6CD8:
    ctx->pc = 0x80BB6CD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6CD8u)) return;
    // 80BB6CD8: addi    r4, r4, 1192
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1192);

label_80BB6CDC:
    ctx->pc = 0x80BB6CDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6CDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BB6CDC: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BB6CDCu)) return;
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
label_80BB6CE0:
    ctx->pc = 0x80BB6CE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6CE0u)) return;
    // 80BB6CE0: lis     r4, -27518
    ctx->gpr[4] = ((u32)(s32)(-27518) << 16);

label_80BB6CE4:
    ctx->pc = 0x80BB6CE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6CE4u)) return;
    // 80BB6CE4: addi    r4, r4, 1196
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1196);

label_80BB6CE8:
    ctx->pc = 0x80BB6CE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6CE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BB6CE8: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BB6CE8u)) return;
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
label_80BB6CEC:
    ctx->pc = 0x80BB6CECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6CECu)) return;
    // 80BB6CEC: lis     r4, -27518
    ctx->gpr[4] = ((u32)(s32)(-27518) << 16);

label_80BB6CF0:
    ctx->pc = 0x80BB6CF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6CF0u)) return;
    // 80BB6CF0: addi    r4, r4, 1200
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1200);

label_80BB6CF4:
    ctx->pc = 0x80BB6CF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6CF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BB6CF4: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BB6CF4u)) return;
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
label_80BB6CF8:
    ctx->pc = 0x80BB6CF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6CF8u)) return;
    // 80BB6CF8: bl      0x8045EF2C
    {
            ctx->lr = 0x80BB6CFCu;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80BB6CFC:
    ctx->pc = 0x80BB6CFCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6CFCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80BB6CFC: lis     r3, -27517
    ctx->gpr[3] = ((u32)(s32)(-27517) << 16);

label_80BB6D00:
    ctx->pc = 0x80BB6D00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6D00u)) return;
    // 80BB6D00: addi    r3, r3, -28016
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28016);

label_80BB6D04:
    ctx->pc = 0x80BB6D04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6D04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BB6D04: lwz     r3, 0(r3)
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
label_80BB6D08:
    ctx->pc = 0x80BB6D08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6D08u)) return;
    // 80BB6D08: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80BB6D0C:
    ctx->pc = 0x80BB6D0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6D0Cu)) return;
    // 80BB6D0C: li      r5, 31161
    ctx->gpr[5] = (u32)(s32)(31161);

label_80BB6D10:
    ctx->pc = 0x80BB6D10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6D10u)) return;
    // 80BB6D10: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80BB6D14:
    ctx->pc = 0x80BB6D14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6D14u)) return;
    // 80BB6D14: bl      0x8045EEA8
    {
            ctx->lr = 0x80BB6D18u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80BB6D18:
    ctx->pc = 0x80BB6D18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6D18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80BB6D18: lis     r3, -27517
    ctx->gpr[3] = ((u32)(s32)(-27517) << 16);

label_80BB6D1C:
    ctx->pc = 0x80BB6D1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6D1Cu)) return;
    // 80BB6D1C: addi    r3, r3, -28024
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28024);

label_80BB6D20:
    ctx->pc = 0x80BB6D20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6D20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BB6D20: lwz     r3, 0(r3)
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
label_80BB6D24:
    ctx->pc = 0x80BB6D24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6D24u)) return;
    // 80BB6D24: lis     r4, -27518
    ctx->gpr[4] = ((u32)(s32)(-27518) << 16);

label_80BB6D28:
    ctx->pc = 0x80BB6D28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6D28u)) return;
    // 80BB6D28: addi    r4, r4, 1204
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1204);

label_80BB6D2C:
    ctx->pc = 0x80BB6D2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6D2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BB6D2C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BB6D2Cu)) return;
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
label_80BB6D30:
    ctx->pc = 0x80BB6D30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6D30u)) return;
    // 80BB6D30: lis     r4, -27518
    ctx->gpr[4] = ((u32)(s32)(-27518) << 16);

label_80BB6D34:
    ctx->pc = 0x80BB6D34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6D34u)) return;
    // 80BB6D34: addi    r4, r4, 1208
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1208);

label_80BB6D38:
    ctx->pc = 0x80BB6D38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6D38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BB6D38: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BB6D38u)) return;
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
label_80BB6D3C:
    ctx->pc = 0x80BB6D3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6D3Cu)) return;
    // 80BB6D3C: lis     r4, -27518
    ctx->gpr[4] = ((u32)(s32)(-27518) << 16);

label_80BB6D40:
    ctx->pc = 0x80BB6D40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6D40u)) return;
    // 80BB6D40: addi    r4, r4, 1212
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1212);

label_80BB6D44:
    ctx->pc = 0x80BB6D44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6D44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BB6D44: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BB6D44u)) return;
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
label_80BB6D48:
    ctx->pc = 0x80BB6D48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6D48u)) return;
    // 80BB6D48: bl      0x8045EF2C
    {
            ctx->lr = 0x80BB6D4Cu;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80BB6D4C:
    ctx->pc = 0x80BB6D4Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6D4Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80BB6D4C: lis     r3, -27517
    ctx->gpr[3] = ((u32)(s32)(-27517) << 16);

label_80BB6D50:
    ctx->pc = 0x80BB6D50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6D50u)) return;
    // 80BB6D50: addi    r3, r3, -28024
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28024);

label_80BB6D54:
    ctx->pc = 0x80BB6D54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6D54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BB6D54: lwz     r3, 0(r3)
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
label_80BB6D58:
    ctx->pc = 0x80BB6D58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6D58u)) return;
    // 80BB6D58: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80BB6D5C:
    ctx->pc = 0x80BB6D5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6D5Cu)) return;
    // 80BB6D5C: li      r5, 31161
    ctx->gpr[5] = (u32)(s32)(31161);

label_80BB6D60:
    ctx->pc = 0x80BB6D60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6D60u)) return;
    // 80BB6D60: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80BB6D64:
    ctx->pc = 0x80BB6D64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6D64u)) return;
    // 80BB6D64: bl      0x8045EEA8
    {
            ctx->lr = 0x80BB6D68u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80BB6D68:
    ctx->pc = 0x80BB6D68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6D68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80BB6D68: lis     r3, -27517
    ctx->gpr[3] = ((u32)(s32)(-27517) << 16);

label_80BB6D6C:
    ctx->pc = 0x80BB6D6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6D6Cu)) return;
    // 80BB6D6C: addi    r3, r3, -28020
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28020);

label_80BB6D70:
    ctx->pc = 0x80BB6D70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6D70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BB6D70: lwz     r3, 0(r3)
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
label_80BB6D74:
    ctx->pc = 0x80BB6D74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6D74u)) return;
    // 80BB6D74: lis     r4, -27518
    ctx->gpr[4] = ((u32)(s32)(-27518) << 16);

label_80BB6D78:
    ctx->pc = 0x80BB6D78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6D78u)) return;
    // 80BB6D78: addi    r4, r4, 1216
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1216);

label_80BB6D7C:
    ctx->pc = 0x80BB6D7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6D7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BB6D7C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BB6D7Cu)) return;
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
label_80BB6D80:
    ctx->pc = 0x80BB6D80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6D80u)) return;
    // 80BB6D80: lis     r4, -27518
    ctx->gpr[4] = ((u32)(s32)(-27518) << 16);

label_80BB6D84:
    ctx->pc = 0x80BB6D84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6D84u)) return;
    // 80BB6D84: addi    r4, r4, 1172
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1172);

label_80BB6D88:
    ctx->pc = 0x80BB6D88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6D88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BB6D88: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BB6D88u)) return;
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
label_80BB6D8C:
    ctx->pc = 0x80BB6D8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6D8Cu)) return;
    // 80BB6D8C: lis     r4, -27518
    ctx->gpr[4] = ((u32)(s32)(-27518) << 16);

label_80BB6D90:
    ctx->pc = 0x80BB6D90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6D90u)) return;
    // 80BB6D90: addi    r4, r4, 1220
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1220);

label_80BB6D94:
    ctx->pc = 0x80BB6D94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6D94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BB6D94: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BB6D94u)) return;
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
label_80BB6D98:
    ctx->pc = 0x80BB6D98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6D98u)) return;
    // 80BB6D98: bl      0x8045EF2C
    {
            ctx->lr = 0x80BB6D9Cu;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80BB6D9C:
    ctx->pc = 0x80BB6D9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6D9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80BB6D9C: lis     r3, -27517
    ctx->gpr[3] = ((u32)(s32)(-27517) << 16);

label_80BB6DA0:
    ctx->pc = 0x80BB6DA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6DA0u)) return;
    // 80BB6DA0: addi    r3, r3, -28020
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28020);

label_80BB6DA4:
    ctx->pc = 0x80BB6DA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6DA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BB6DA4: lwz     r3, 0(r3)
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
label_80BB6DA8:
    ctx->pc = 0x80BB6DA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6DA8u)) return;
    // 80BB6DA8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80BB6DAC:
    ctx->pc = 0x80BB6DACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6DACu)) return;
    // 80BB6DAC: li      r5, 31161
    ctx->gpr[5] = (u32)(s32)(31161);

label_80BB6DB0:
    ctx->pc = 0x80BB6DB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6DB0u)) return;
    // 80BB6DB0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80BB6DB4:
    ctx->pc = 0x80BB6DB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6DB4u)) return;
    // 80BB6DB4: bl      0x8045EEA8
    {
            ctx->lr = 0x80BB6DB8u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80BB6DB8:
    ctx->pc = 0x80BB6DB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6DB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80BB6DB8: lis     r3, -27517
    ctx->gpr[3] = ((u32)(s32)(-27517) << 16);

label_80BB6DBC:
    ctx->pc = 0x80BB6DBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6DBCu)) return;
    // 80BB6DBC: addi    r3, r3, -28008
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28008);

label_80BB6DC0:
    ctx->pc = 0x80BB6DC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6DC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BB6DC0: lwz     r3, 0(r3)
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
label_80BB6DC4:
    ctx->pc = 0x80BB6DC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6DC4u)) return;
    // 80BB6DC4: lis     r4, -27518
    ctx->gpr[4] = ((u32)(s32)(-27518) << 16);

label_80BB6DC8:
    ctx->pc = 0x80BB6DC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6DC8u)) return;
    // 80BB6DC8: addi    r4, r4, 1224
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1224);

label_80BB6DCC:
    ctx->pc = 0x80BB6DCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6DCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BB6DCC: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BB6DCCu)) return;
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
label_80BB6DD0:
    ctx->pc = 0x80BB6DD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6DD0u)) return;
    // 80BB6DD0: lis     r4, -27518
    ctx->gpr[4] = ((u32)(s32)(-27518) << 16);

label_80BB6DD4:
    ctx->pc = 0x80BB6DD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6DD4u)) return;
    // 80BB6DD4: addi    r4, r4, 1172
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1172);

label_80BB6DD8:
    ctx->pc = 0x80BB6DD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6DD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BB6DD8: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BB6DD8u)) return;
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
label_80BB6DDC:
    ctx->pc = 0x80BB6DDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6DDCu)) return;
    // 80BB6DDC: lis     r4, -27518
    ctx->gpr[4] = ((u32)(s32)(-27518) << 16);

label_80BB6DE0:
    ctx->pc = 0x80BB6DE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6DE0u)) return;
    // 80BB6DE0: addi    r4, r4, 1228
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1228);

label_80BB6DE4:
    ctx->pc = 0x80BB6DE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6DE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BB6DE4: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BB6DE4u)) return;
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
label_80BB6DE8:
    ctx->pc = 0x80BB6DE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6DE8u)) return;
    // 80BB6DE8: bl      0x8045EF2C
    {
            ctx->lr = 0x80BB6DECu;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80BB6DEC:
    ctx->pc = 0x80BB6DECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6DECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80BB6DEC: lis     r3, -27517
    ctx->gpr[3] = ((u32)(s32)(-27517) << 16);

label_80BB6DF0:
    ctx->pc = 0x80BB6DF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6DF0u)) return;
    // 80BB6DF0: addi    r3, r3, -28008
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28008);

label_80BB6DF4:
    ctx->pc = 0x80BB6DF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6DF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BB6DF4: lwz     r3, 0(r3)
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
label_80BB6DF8:
    ctx->pc = 0x80BB6DF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6DF8u)) return;
    // 80BB6DF8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80BB6DFC:
    ctx->pc = 0x80BB6DFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6DFCu)) return;
    // 80BB6DFC: li      r5, 31161
    ctx->gpr[5] = (u32)(s32)(31161);

label_80BB6E00:
    ctx->pc = 0x80BB6E00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6E00u)) return;
    // 80BB6E00: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80BB6E04:
    ctx->pc = 0x80BB6E04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6E04u)) return;
    // 80BB6E04: bl      0x8045EEA8
    {
            ctx->lr = 0x80BB6E08u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80BB6E08:
    ctx->pc = 0x80BB6E08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6E08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80BB6E08: lis     r3, -27517
    ctx->gpr[3] = ((u32)(s32)(-27517) << 16);

label_80BB6E0C:
    ctx->pc = 0x80BB6E0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6E0Cu)) return;
    // 80BB6E0C: addi    r3, r3, -28012
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28012);

label_80BB6E10:
    ctx->pc = 0x80BB6E10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6E10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BB6E10: lwz     r3, 0(r3)
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
label_80BB6E14:
    ctx->pc = 0x80BB6E14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6E14u)) return;
    // 80BB6E14: lis     r4, -27518
    ctx->gpr[4] = ((u32)(s32)(-27518) << 16);

label_80BB6E18:
    ctx->pc = 0x80BB6E18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6E18u)) return;
    // 80BB6E18: addi    r4, r4, 1232
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1232);

label_80BB6E1C:
    ctx->pc = 0x80BB6E1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6E1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BB6E1C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BB6E1Cu)) return;
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
label_80BB6E20:
    ctx->pc = 0x80BB6E20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6E20u)) return;
    // 80BB6E20: lis     r4, -27518
    ctx->gpr[4] = ((u32)(s32)(-27518) << 16);

label_80BB6E24:
    ctx->pc = 0x80BB6E24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6E24u)) return;
    // 80BB6E24: addi    r4, r4, 1184
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1184);

label_80BB6E28:
    ctx->pc = 0x80BB6E28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6E28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BB6E28: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BB6E28u)) return;
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
label_80BB6E2C:
    ctx->pc = 0x80BB6E2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6E2Cu)) return;
    // 80BB6E2C: lis     r4, -27518
    ctx->gpr[4] = ((u32)(s32)(-27518) << 16);

label_80BB6E30:
    ctx->pc = 0x80BB6E30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6E30u)) return;
    // 80BB6E30: addi    r4, r4, 1236
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1236);

label_80BB6E34:
    ctx->pc = 0x80BB6E34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6E34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BB6E34: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BB6E34u)) return;
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
label_80BB6E38:
    ctx->pc = 0x80BB6E38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6E38u)) return;
    // 80BB6E38: bl      0x8045EF2C
    {
            ctx->lr = 0x80BB6E3Cu;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80BB6E3C:
    ctx->pc = 0x80BB6E3Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6E3Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80BB6E3C: lis     r3, -27517
    ctx->gpr[3] = ((u32)(s32)(-27517) << 16);

label_80BB6E40:
    ctx->pc = 0x80BB6E40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6E40u)) return;
    // 80BB6E40: addi    r3, r3, -28012
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28012);

label_80BB6E44:
    ctx->pc = 0x80BB6E44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6E44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BB6E44: lwz     r3, 0(r3)
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
label_80BB6E48:
    ctx->pc = 0x80BB6E48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6E48u)) return;
    // 80BB6E48: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80BB6E4C:
    ctx->pc = 0x80BB6E4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6E4Cu)) return;
    // 80BB6E4C: li      r5, 31161
    ctx->gpr[5] = (u32)(s32)(31161);

label_80BB6E50:
    ctx->pc = 0x80BB6E50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6E50u)) return;
    // 80BB6E50: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80BB6E54:
    ctx->pc = 0x80BB6E54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6E54u)) return;
    // 80BB6E54: bl      0x8045EEA8
    {
            ctx->lr = 0x80BB6E58u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80BB6E58:
    ctx->pc = 0x80BB6E58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6E58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80BB6E58: lis     r3, -27517
    ctx->gpr[3] = ((u32)(s32)(-27517) << 16);

label_80BB6E5C:
    ctx->pc = 0x80BB6E5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6E5Cu)) return;
    // 80BB6E5C: addi    r3, r3, -27996
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-27996);

label_80BB6E60:
    ctx->pc = 0x80BB6E60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6E60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BB6E60: lwz     r3, 0(r3)
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
label_80BB6E64:
    ctx->pc = 0x80BB6E64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6E64u)) return;
    // 80BB6E64: lis     r4, -27518
    ctx->gpr[4] = ((u32)(s32)(-27518) << 16);

label_80BB6E68:
    ctx->pc = 0x80BB6E68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6E68u)) return;
    // 80BB6E68: addi    r4, r4, 1240
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1240);

label_80BB6E6C:
    ctx->pc = 0x80BB6E6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6E6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BB6E6C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BB6E6Cu)) return;
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
label_80BB6E70:
    ctx->pc = 0x80BB6E70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6E70u)) return;
    // 80BB6E70: lis     r4, -27518
    ctx->gpr[4] = ((u32)(s32)(-27518) << 16);

label_80BB6E74:
    ctx->pc = 0x80BB6E74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6E74u)) return;
    // 80BB6E74: addi    r4, r4, 1196
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1196);

label_80BB6E78:
    ctx->pc = 0x80BB6E78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6E78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BB6E78: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BB6E78u)) return;
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
label_80BB6E7C:
    ctx->pc = 0x80BB6E7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6E7Cu)) return;
    // 80BB6E7C: lis     r4, -27518
    ctx->gpr[4] = ((u32)(s32)(-27518) << 16);

label_80BB6E80:
    ctx->pc = 0x80BB6E80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6E80u)) return;
    // 80BB6E80: addi    r4, r4, 1244
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1244);

label_80BB6E84:
    ctx->pc = 0x80BB6E84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6E84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BB6E84: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BB6E84u)) return;
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
label_80BB6E88:
    ctx->pc = 0x80BB6E88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6E88u)) return;
    // 80BB6E88: bl      0x8045EF2C
    {
            ctx->lr = 0x80BB6E8Cu;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80BB6E8C:
    ctx->pc = 0x80BB6E8Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6E8Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80BB6E8C: lis     r3, -27517
    ctx->gpr[3] = ((u32)(s32)(-27517) << 16);

label_80BB6E90:
    ctx->pc = 0x80BB6E90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6E90u)) return;
    // 80BB6E90: addi    r3, r3, -27996
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-27996);

label_80BB6E94:
    ctx->pc = 0x80BB6E94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6E94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BB6E94: lwz     r3, 0(r3)
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
label_80BB6E98:
    ctx->pc = 0x80BB6E98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6E98u)) return;
    // 80BB6E98: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80BB6E9C:
    ctx->pc = 0x80BB6E9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6E9Cu)) return;
    // 80BB6E9C: li      r5, 31161
    ctx->gpr[5] = (u32)(s32)(31161);

label_80BB6EA0:
    ctx->pc = 0x80BB6EA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6EA0u)) return;
    // 80BB6EA0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80BB6EA4:
    ctx->pc = 0x80BB6EA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6EA4u)) return;
    // 80BB6EA4: bl      0x8045EEA8
    {
            ctx->lr = 0x80BB6EA8u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80BB6EA8:
    ctx->pc = 0x80BB6EA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6EA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80BB6EA8: lis     r3, -27517
    ctx->gpr[3] = ((u32)(s32)(-27517) << 16);

label_80BB6EAC:
    ctx->pc = 0x80BB6EACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6EACu)) return;
    // 80BB6EAC: addi    r3, r3, -28004
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28004);

label_80BB6EB0:
    ctx->pc = 0x80BB6EB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6EB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BB6EB0: lwz     r3, 0(r3)
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
label_80BB6EB4:
    ctx->pc = 0x80BB6EB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6EB4u)) return;
    // 80BB6EB4: lis     r4, -27518
    ctx->gpr[4] = ((u32)(s32)(-27518) << 16);

label_80BB6EB8:
    ctx->pc = 0x80BB6EB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6EB8u)) return;
    // 80BB6EB8: addi    r4, r4, 1248
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1248);

label_80BB6EBC:
    ctx->pc = 0x80BB6EBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6EBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BB6EBC: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BB6EBCu)) return;
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
label_80BB6EC0:
    ctx->pc = 0x80BB6EC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6EC0u)) return;
    // 80BB6EC0: lis     r4, -27518
    ctx->gpr[4] = ((u32)(s32)(-27518) << 16);

label_80BB6EC4:
    ctx->pc = 0x80BB6EC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6EC4u)) return;
    // 80BB6EC4: addi    r4, r4, 1208
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1208);

label_80BB6EC8:
    ctx->pc = 0x80BB6EC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6EC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BB6EC8: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BB6EC8u)) return;
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
label_80BB6ECC:
    ctx->pc = 0x80BB6ECCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6ECCu)) return;
    // 80BB6ECC: lis     r4, -27518
    ctx->gpr[4] = ((u32)(s32)(-27518) << 16);

label_80BB6ED0:
    ctx->pc = 0x80BB6ED0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6ED0u)) return;
    // 80BB6ED0: addi    r4, r4, 1252
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1252);

label_80BB6ED4:
    ctx->pc = 0x80BB6ED4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6ED4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BB6ED4: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BB6ED4u)) return;
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
label_80BB6ED8:
    ctx->pc = 0x80BB6ED8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6ED8u)) return;
    // 80BB6ED8: bl      0x8045EF2C
    {
            ctx->lr = 0x80BB6EDCu;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80BB6EDC:
    ctx->pc = 0x80BB6EDCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6EDCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80BB6EDC: lis     r3, -27517
    ctx->gpr[3] = ((u32)(s32)(-27517) << 16);

label_80BB6EE0:
    ctx->pc = 0x80BB6EE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6EE0u)) return;
    // 80BB6EE0: addi    r3, r3, -28004
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28004);

label_80BB6EE4:
    ctx->pc = 0x80BB6EE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6EE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BB6EE4: lwz     r3, 0(r3)
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
label_80BB6EE8:
    ctx->pc = 0x80BB6EE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6EE8u)) return;
    // 80BB6EE8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80BB6EEC:
    ctx->pc = 0x80BB6EECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6EECu)) return;
    // 80BB6EEC: li      r5, 31161
    ctx->gpr[5] = (u32)(s32)(31161);

label_80BB6EF0:
    ctx->pc = 0x80BB6EF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6EF0u)) return;
    // 80BB6EF0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80BB6EF4:
    ctx->pc = 0x80BB6EF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6EF4u)) return;
    // 80BB6EF4: bl      0x8045EEA8
    {
            ctx->lr = 0x80BB6EF8u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80BB6EF8:
    ctx->pc = 0x80BB6EF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6EF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80BB6EF8: lis     r3, -27517
    ctx->gpr[3] = ((u32)(s32)(-27517) << 16);

label_80BB6EFC:
    ctx->pc = 0x80BB6EFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6EFCu)) return;
    // 80BB6EFC: addi    r3, r3, -28000
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28000);

label_80BB6F00:
    ctx->pc = 0x80BB6F00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6F00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BB6F00: lwz     r3, 0(r3)
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
label_80BB6F04:
    ctx->pc = 0x80BB6F04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6F04u)) return;
    // 80BB6F04: lis     r4, -27518
    ctx->gpr[4] = ((u32)(s32)(-27518) << 16);

label_80BB6F08:
    ctx->pc = 0x80BB6F08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6F08u)) return;
    // 80BB6F08: addi    r4, r4, 1256
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1256);

label_80BB6F0C:
    ctx->pc = 0x80BB6F0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6F0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BB6F0C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BB6F0Cu)) return;
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
label_80BB6F10:
    ctx->pc = 0x80BB6F10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6F10u)) return;
    // 80BB6F10: lis     r4, -27518
    ctx->gpr[4] = ((u32)(s32)(-27518) << 16);

label_80BB6F14:
    ctx->pc = 0x80BB6F14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6F14u)) return;
    // 80BB6F14: addi    r4, r4, 1172
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1172);

label_80BB6F18:
    ctx->pc = 0x80BB6F18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6F18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BB6F18: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BB6F18u)) return;
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
label_80BB6F1C:
    ctx->pc = 0x80BB6F1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6F1Cu)) return;
    // 80BB6F1C: lis     r4, -27518
    ctx->gpr[4] = ((u32)(s32)(-27518) << 16);

label_80BB6F20:
    ctx->pc = 0x80BB6F20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6F20u)) return;
    // 80BB6F20: addi    r4, r4, 1260
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1260);

label_80BB6F24:
    ctx->pc = 0x80BB6F24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6F24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BB6F24: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BB6F24u)) return;
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
label_80BB6F28:
    ctx->pc = 0x80BB6F28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6F28u)) return;
    // 80BB6F28: bl      0x8045EF2C
    {
            ctx->lr = 0x80BB6F2Cu;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80BB6F2C:
    ctx->pc = 0x80BB6F2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6F2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80BB6F2C: lis     r3, -27517
    ctx->gpr[3] = ((u32)(s32)(-27517) << 16);

label_80BB6F30:
    ctx->pc = 0x80BB6F30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6F30u)) return;
    // 80BB6F30: addi    r3, r3, -28000
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28000);

label_80BB6F34:
    ctx->pc = 0x80BB6F34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6F34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BB6F34: lwz     r3, 0(r3)
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
label_80BB6F38:
    ctx->pc = 0x80BB6F38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6F38u)) return;
    // 80BB6F38: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80BB6F3C:
    ctx->pc = 0x80BB6F3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6F3Cu)) return;
    // 80BB6F3C: li      r5, 31161
    ctx->gpr[5] = (u32)(s32)(31161);

label_80BB6F40:
    ctx->pc = 0x80BB6F40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6F40u)) return;
    // 80BB6F40: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80BB6F44:
    ctx->pc = 0x80BB6F44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6F44u)) return;
    // 80BB6F44: bl      0x8045EEA8
    {
            ctx->lr = 0x80BB6F48u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80BB6F48:
    ctx->pc = 0x80BB6F48u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6F48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BB6F48: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80BB6F4C:
    ctx->pc = 0x80BB6F4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6F4Cu)) return;
    // 80BB6F4C: bl      0x8045F7C8
    {
            ctx->lr = 0x80BB6F50u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80BB6F50:
    ctx->pc = 0x80BB6F50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6F50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BB6F50: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BB6F54:
    ctx->pc = 0x80BB6F54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6F54u)) return;
    // 80BB6F54: bl      0x8045F220
    {
            ctx->lr = 0x80BB6F58u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80BB6F58:
    ctx->pc = 0x80BB6F58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6F58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80BB6F58: lis     r4, -27518
    ctx->gpr[4] = ((u32)(s32)(-27518) << 16);

label_80BB6F5C:
    ctx->pc = 0x80BB6F5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6F5Cu)) return;
    // 80BB6F5C: addi    r4, r4, 18376
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(18376);

label_80BB6F60:
    ctx->pc = 0x80BB6F60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6F60u)) return;
    // 80BB6F60: lis     r5, -28615
    ctx->gpr[5] = ((u32)(s32)(-28615) << 16);

label_80BB6F64:
    ctx->pc = 0x80BB6F64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6F64u)) return;
    // 80BB6F64: addi    r5, r5, -7300
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-7300);

label_80BB6F68:
    ctx->pc = 0x80BB6F68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6F68u)) return;
    // 80BB6F68: lis     r6, -27518
    ctx->gpr[6] = ((u32)(s32)(-27518) << 16);

label_80BB6F6C:
    ctx->pc = 0x80BB6F6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6F6Cu)) return;
    // 80BB6F6C: addi    r6, r6, 1120
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(1120);

label_80BB6F70:
    ctx->pc = 0x80BB6F70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6F70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BB6F70: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80BB6F70u)) return;
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
label_80BB6F74:
    ctx->pc = 0x80BB6F74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6F74u)) return;
    // 80BB6F74: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80BB6F78:
    ctx->pc = 0x80BB6F78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6F78u)) return;
    // 80BB6F78: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80BB6F7C:
    ctx->pc = 0x80BB6F7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6F7Cu)) return;
    // 80BB6F7C: bl      0x8045EBE4
    {
            ctx->lr = 0x80BB6F80u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80BB6F80:
    ctx->pc = 0x80BB6F80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6F80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BB6F80: li      r3, 15
    ctx->gpr[3] = (u32)(s32)(15);

label_80BB6F84:
    ctx->pc = 0x80BB6F84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6F84u)) return;
    // 80BB6F84: bl      0x8045F7C8
    {
            ctx->lr = 0x80BB6F88u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80BB6F88:
    ctx->pc = 0x80BB6F88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6F88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BB6F88: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BB6F8C:
    ctx->pc = 0x80BB6F8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6F8Cu)) return;
    // 80BB6F8C: bl      0x8045F220
    {
            ctx->lr = 0x80BB6F90u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80BB6F90:
    ctx->pc = 0x80BB6F90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6F90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80BB6F90: lis     r4, -27518
    ctx->gpr[4] = ((u32)(s32)(-27518) << 16);

label_80BB6F94:
    ctx->pc = 0x80BB6F94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6F94u)) return;
    // 80BB6F94: addi    r4, r4, 20476
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(20476);

label_80BB6F98:
    ctx->pc = 0x80BB6F98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6F98u)) return;
    // 80BB6F98: lis     r5, -28615
    ctx->gpr[5] = ((u32)(s32)(-28615) << 16);

label_80BB6F9C:
    ctx->pc = 0x80BB6F9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6F9Cu)) return;
    // 80BB6F9C: addi    r5, r5, -7300
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-7300);

label_80BB6FA0:
    ctx->pc = 0x80BB6FA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6FA0u)) return;
    // 80BB6FA0: lis     r6, -27518
    ctx->gpr[6] = ((u32)(s32)(-27518) << 16);

label_80BB6FA4:
    ctx->pc = 0x80BB6FA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6FA4u)) return;
    // 80BB6FA4: addi    r6, r6, 1024
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(1024);

label_80BB6FA8:
    ctx->pc = 0x80BB6FA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6FA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BB6FA8: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80BB6FA8u)) return;
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
label_80BB6FAC:
    ctx->pc = 0x80BB6FACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6FACu)) return;
    // 80BB6FAC: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80BB6FB0:
    ctx->pc = 0x80BB6FB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6FB0u)) return;
    // 80BB6FB0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80BB6FB4:
    ctx->pc = 0x80BB6FB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6FB4u)) return;
    // 80BB6FB4: bl      0x8045EBE4
    {
            ctx->lr = 0x80BB6FB8u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80BB6FB8:
    ctx->pc = 0x80BB6FB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6FB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BB6FB8: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_80BB6FBC:
    ctx->pc = 0x80BB6FBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6FBCu)) return;
    // 80BB6FBC: bl      0x8045F7C8
    {
            ctx->lr = 0x80BB6FC0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80BB6FC0:
    ctx->pc = 0x80BB6FC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6FC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BB6FC0: li      r3, 820
    ctx->gpr[3] = (u32)(s32)(820);

label_80BB6FC4:
    ctx->pc = 0x80BB6FC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6FC4u)) return;
    // 80BB6FC4: bl      0x8045BFA0
    {
            ctx->lr = 0x80BB6FC8u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80BB6FC8:
    ctx->pc = 0x80BB6FC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6FC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BB6FC8: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_80BB6FCC:
    ctx->pc = 0x80BB6FCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6FCCu)) return;
    // 80BB6FCC: bl      0x8045F7C8
    {
            ctx->lr = 0x80BB6FD0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80BB6FD0:
    ctx->pc = 0x80BB6FD0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6FD0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BB6FD0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BB6FD4:
    ctx->pc = 0x80BB6FD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6FD4u)) return;
    // 80BB6FD4: bl      0x8045F220
    {
            ctx->lr = 0x80BB6FD8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80BB6FD8:
    ctx->pc = 0x80BB6FD8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6FD8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BB6FD8: bl      0x8045C034
    {
            ctx->lr = 0x80BB6FDCu;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80BB6FDC:
    ctx->pc = 0x80BB6FDCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6FDCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80BB6FDC: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80BB6FE0:
    ctx->pc = 0x80BB6FE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6FE0u)) return;
    // 80BB6FE0: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80BB6FE4:
    ctx->pc = 0x80BB6FE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6FE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BB6FE4: lwz     r0, 0(r3)
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
label_80BB6FE8:
    ctx->pc = 0x80BB6FE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6FE8u)) return;
    // 80BB6FE8: cmpwi   r0, 0
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

label_80BB6FEC:
    ctx->pc = 0x80BB6FECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6FECu)) return;
    // 80BB6FEC: bc    4, 2, 0x80BB7004
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80BB7004;
        }
    }

label_80BB6FF0:
    ctx->pc = 0x80BB6FF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6FF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BB6FF0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BB6FF4:
    ctx->pc = 0x80BB6FF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6FF4u)) return;
    // 80BB6FF4: bl      0x8045F220
    {
            ctx->lr = 0x80BB6FF8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80BB6FF8:
    ctx->pc = 0x80BB6FF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB6FF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80BB6FF8: lis     r4, -27518
    ctx->gpr[4] = ((u32)(s32)(-27518) << 16);

label_80BB6FFC:
    ctx->pc = 0x80BB6FFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB6FFCu)) return;
    // 80BB6FFC: addi    r4, r4, 1708
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1708);

label_80BB7000:
    ctx->pc = 0x80BB7000u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7000u)) return;
    // 80BB7000: bl      0x8045C060
    {
            ctx->lr = 0x80BB7004u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80BB7004:
    ctx->pc = 0x80BB7004u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7004u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80BB7004: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80BB7008:
    ctx->pc = 0x80BB7008u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7008u)) return;
    // 80BB7008: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80BB700C:
    ctx->pc = 0x80BB700Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB700Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BB700C: lwz     r0, 0(r3)
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
label_80BB7010:
    ctx->pc = 0x80BB7010u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7010u)) return;
    // 80BB7010: cmpwi   r0, 1
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

label_80BB7014:
    ctx->pc = 0x80BB7014u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7014u)) return;
    // 80BB7014: bc    4, 2, 0x80BB702C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80BB702C;
        }
    }

label_80BB7018:
    ctx->pc = 0x80BB7018u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7018u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BB7018: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BB701C:
    ctx->pc = 0x80BB701Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB701Cu)) return;
    // 80BB701C: bl      0x8045F220
    {
            ctx->lr = 0x80BB7020u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80BB7020:
    ctx->pc = 0x80BB7020u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7020u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80BB7020: lis     r4, -27518
    ctx->gpr[4] = ((u32)(s32)(-27518) << 16);

label_80BB7024:
    ctx->pc = 0x80BB7024u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7024u)) return;
    // 80BB7024: addi    r4, r4, 1712
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1712);

label_80BB7028:
    ctx->pc = 0x80BB7028u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7028u)) return;
    // 80BB7028: bl      0x8045C060
    {
            ctx->lr = 0x80BB702Cu;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80BB702C:
    ctx->pc = 0x80BB702Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB702Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80BB702C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BB7030:
    ctx->pc = 0x80BB7030u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7030u)) return;
    // 80BB7030: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80BB7034:
    ctx->pc = 0x80BB7034u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7034u)) return;
    // 80BB7034: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80BB7038:
    ctx->pc = 0x80BB7038u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7038u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BB7038: lwz     r0, 0(r4)
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
label_80BB703C:
    ctx->pc = 0x80BB703Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB703Cu)) return;
    // 80BB703C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80BB7040:
    ctx->pc = 0x80BB7040u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7040u)) return;
    // 80BB7040: lis     r4, -27518
    ctx->gpr[4] = ((u32)(s32)(-27518) << 16);

label_80BB7044:
    ctx->pc = 0x80BB7044u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7044u)) return;
    // 80BB7044: addi    r4, r4, 1656
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1656);

label_80BB7048:
    ctx->pc = 0x80BB7048u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7048u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BB7048: lwzx    r4, r4, r0
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
label_80BB704C:
    ctx->pc = 0x80BB704Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB704Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BB704C: lwz     r4, 4(r4)
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
label_80BB7050:
    ctx->pc = 0x80BB7050u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7050u)) return;
    // 80BB7050: bl      0x8045F608
    {
            ctx->lr = 0x80BB7054u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80BB7054:
    ctx->pc = 0x80BB7054u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7054u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BB7054: li      r3, 93
    ctx->gpr[3] = (u32)(s32)(93);

label_80BB7058:
    ctx->pc = 0x80BB7058u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7058u)) return;
    // 80BB7058: bl      0x80406090
    {
            ctx->lr = 0x80BB705Cu;
            ctx->pc = 0x80406090u;
            return;
    }

label_80BB705C:
    ctx->pc = 0x80BB705Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB705Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BB705C: li      r3, 822
    ctx->gpr[3] = (u32)(s32)(822);

label_80BB7060:
    ctx->pc = 0x80BB7060u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7060u)) return;
    // 80BB7060: bl      0x8045BFA0
    {
            ctx->lr = 0x80BB7064u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80BB7064:
    ctx->pc = 0x80BB7064u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7064u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BB7064: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80BB7068:
    ctx->pc = 0x80BB7068u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7068u)) return;
    // 80BB7068: bl      0x8045F7C8
    {
            ctx->lr = 0x80BB706Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80BB706C:
    ctx->pc = 0x80BB706Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB706Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BB706C: bl      0x8045F32C
    {
            ctx->lr = 0x80BB7070u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80BB7070:
    ctx->pc = 0x80BB7070u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7070u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BB7070: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BB7074:
    ctx->pc = 0x80BB7074u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7074u)) return;
    // 80BB7074: bl      0x8045F220
    {
            ctx->lr = 0x80BB7078u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80BB7078:
    ctx->pc = 0x80BB7078u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7078u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80BB7078: lis     r4, -27518
    ctx->gpr[4] = ((u32)(s32)(-27518) << 16);

label_80BB707C:
    ctx->pc = 0x80BB707Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB707Cu)) return;
    // 80BB707C: addi    r4, r4, 1716
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1716);

label_80BB7080:
    ctx->pc = 0x80BB7080u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7080u)) return;
    // 80BB7080: bl      0x8045C060
    {
            ctx->lr = 0x80BB7084u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80BB7084:
    ctx->pc = 0x80BB7084u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7084u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BB7084: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BB7088:
    ctx->pc = 0x80BB7088u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7088u)) return;
    // 80BB7088: bl      0x8045F220
    {
            ctx->lr = 0x80BB708Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80BB708C:
    ctx->pc = 0x80BB708Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB708Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BB708C: bl      0x8045EB8C
    {
            ctx->lr = 0x80BB7090u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80BB7090:
    ctx->pc = 0x80BB7090u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7090u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BB7090: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BB7094:
    ctx->pc = 0x80BB7094u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7094u)) return;
    // 80BB7094: bl      0x8045F220
    {
            ctx->lr = 0x80BB7098u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80BB7098:
    ctx->pc = 0x80BB7098u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7098u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80BB7098: lis     r4, -27517
    ctx->gpr[4] = ((u32)(s32)(-27517) << 16);

label_80BB709C:
    ctx->pc = 0x80BB709Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB709Cu)) return;
    // 80BB709C: addi    r4, r4, -28048
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-28048);

label_80BB70A0:
    ctx->pc = 0x80BB70A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB70A0u)) return;
    // 80BB70A0: lis     r5, -28615
    ctx->gpr[5] = ((u32)(s32)(-28615) << 16);

label_80BB70A4:
    ctx->pc = 0x80BB70A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB70A4u)) return;
    // 80BB70A4: addi    r5, r5, -7300
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-7300);

label_80BB70A8:
    ctx->pc = 0x80BB70A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB70A8u)) return;
    // 80BB70A8: lis     r6, -27518
    ctx->gpr[6] = ((u32)(s32)(-27518) << 16);

label_80BB70AC:
    ctx->pc = 0x80BB70ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB70ACu)) return;
    // 80BB70AC: addi    r6, r6, 1264
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(1264);

label_80BB70B0:
    ctx->pc = 0x80BB70B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB70B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BB70B0: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80BB70B0u)) return;
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
label_80BB70B4:
    ctx->pc = 0x80BB70B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB70B4u)) return;
    // 80BB70B4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80BB70B8:
    ctx->pc = 0x80BB70B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB70B8u)) return;
    // 80BB70B8: li      r7, 16
    ctx->gpr[7] = (u32)(s32)(16);

label_80BB70BC:
    ctx->pc = 0x80BB70BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB70BCu)) return;
    // 80BB70BC: bl      0x8045EBE4
    {
            ctx->lr = 0x80BB70C0u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80BB70C0:
    ctx->pc = 0x80BB70C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB70C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BB70C0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80BB70C4:
    ctx->pc = 0x80BB70C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB70C4u)) return;
    // 80BB70C4: bl      0x8045F7C8
    {
            ctx->lr = 0x80BB70C8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80BB70C8:
    ctx->pc = 0x80BB70C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB70C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BB70C8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BB70CC:
    ctx->pc = 0x80BB70CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB70CCu)) return;
    // 80BB70CC: bl      0x8045F220
    {
            ctx->lr = 0x80BB70D0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80BB70D0:
    ctx->pc = 0x80BB70D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB70D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BB70D0: bl      0x8045EB40
    {
            ctx->lr = 0x80BB70D4u;
            ctx->pc = 0x8045EB40u;
            return;
    }

label_80BB70D4:
    ctx->pc = 0x80BB70D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB70D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80BB70D4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80BB70D8:
    ctx->pc = 0x80BB70D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB70D8u)) return;
    // 80BB70D8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80BB70DC:
    ctx->pc = 0x80BB70DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB70DCu)) return;
    // 80BB70DC: lis     r5, -27518
    ctx->gpr[5] = ((u32)(s32)(-27518) << 16);

label_80BB70E0:
    ctx->pc = 0x80BB70E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB70E0u)) return;
    // 80BB70E0: addi    r5, r5, 1268
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1268);

label_80BB70E4:
    ctx->pc = 0x80BB70E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB70E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BB70E4: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BB70E4u)) return;
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
label_80BB70E8:
    ctx->pc = 0x80BB70E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB70E8u)) return;
    // 80BB70E8: lis     r5, -27518
    ctx->gpr[5] = ((u32)(s32)(-27518) << 16);

label_80BB70EC:
    ctx->pc = 0x80BB70ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB70ECu)) return;
    // 80BB70EC: addi    r5, r5, 1272
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1272);

label_80BB70F0:
    ctx->pc = 0x80BB70F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB70F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BB70F0: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BB70F0u)) return;
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
label_80BB70F4:
    ctx->pc = 0x80BB70F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB70F4u)) return;
    // 80BB70F4: lis     r5, -27518
    ctx->gpr[5] = ((u32)(s32)(-27518) << 16);

label_80BB70F8:
    ctx->pc = 0x80BB70F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB70F8u)) return;
    // 80BB70F8: addi    r5, r5, 1276
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1276);

label_80BB70FC:
    ctx->pc = 0x80BB70FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB70FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BB70FC: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BB70FCu)) return;
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
label_80BB7100:
    ctx->pc = 0x80BB7100u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7100u)) return;
    // 80BB7100: bl      0x8045C750
    {
            ctx->lr = 0x80BB7104u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80BB7104:
    ctx->pc = 0x80BB7104u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7104u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80BB7104: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80BB7108:
    ctx->pc = 0x80BB7108u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7108u)) return;
    // 80BB7108: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80BB710C:
    ctx->pc = 0x80BB710Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB710Cu)) return;
    // 80BB710C: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80BB7110:
    ctx->pc = 0x80BB7110u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7110u)) return;
    // 80BB7110: addi    r5, r5, -7730
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-7730);

label_80BB7114:
    ctx->pc = 0x80BB7114u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7114u)) return;
    // 80BB7114: li      r6, 3517
    ctx->gpr[6] = (u32)(s32)(3517);

label_80BB7118:
    ctx->pc = 0x80BB7118u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7118u)) return;
    // 80BB7118: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80BB711C:
    ctx->pc = 0x80BB711Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB711Cu)) return;
    // 80BB711C: bl      0x8045C7B4
    {
            ctx->lr = 0x80BB7120u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80BB7120:
    ctx->pc = 0x80BB7120u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7120u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BB7120: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BB7124:
    ctx->pc = 0x80BB7124u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7124u)) return;
    // 80BB7124: bl      0x8045F220
    {
            ctx->lr = 0x80BB7128u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80BB7128:
    ctx->pc = 0x80BB7128u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7128u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BB7128: bl      0x8045EB8C
    {
            ctx->lr = 0x80BB712Cu;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80BB712C:
    ctx->pc = 0x80BB712Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB712Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80BB712C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BB7130:
    ctx->pc = 0x80BB7130u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7130u)) return;
    // 80BB7130: lis     r4, -27518
    ctx->gpr[4] = ((u32)(s32)(-27518) << 16);

label_80BB7134:
    ctx->pc = 0x80BB7134u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7134u)) return;
    // 80BB7134: addi    r4, r4, 980
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(980);

label_80BB7138:
    ctx->pc = 0x80BB7138u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7138u)) return;
    // 80BB7138: bl      0x8045E7E0
    {
            ctx->lr = 0x80BB713Cu;
            ctx->pc = 0x8045E7E0u;
            return;
    }

label_80BB713C:
    ctx->pc = 0x80BB713Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB713Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BB713C: li      r3, 130
    ctx->gpr[3] = (u32)(s32)(130);

label_80BB7140:
    ctx->pc = 0x80BB7140u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7140u)) return;
    // 80BB7140: bl      0x8045F7C8
    {
            ctx->lr = 0x80BB7144u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80BB7144:
    ctx->pc = 0x80BB7144u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7144u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80BB7144: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BB7148:
    ctx->pc = 0x80BB7148u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7148u)) return;
    // 80BB7148: li      r4, 120
    ctx->gpr[4] = (u32)(s32)(120);

label_80BB714C:
    ctx->pc = 0x80BB714Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB714Cu)) return;
    // 80BB714C: li      r5, 60
    ctx->gpr[5] = (u32)(s32)(60);

label_80BB7150:
    ctx->pc = 0x80BB7150u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7150u)) return;
    // 80BB7150: bl      0x80BB7A90
    {
            ctx->lr = 0x80BB7154u;
            goto label_80BB7A90;
    }

label_80BB7154:
    ctx->pc = 0x80BB7154u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7154u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80BB7154: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80BB7158:
    ctx->pc = 0x80BB7158u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7158u)) return;
    // 80BB7158: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80BB715C:
    ctx->pc = 0x80BB715Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB715Cu)) return;
    // 80BB715C: lis     r5, -27518
    ctx->gpr[5] = ((u32)(s32)(-27518) << 16);

label_80BB7160:
    ctx->pc = 0x80BB7160u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7160u)) return;
    // 80BB7160: addi    r5, r5, 1280
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1280);

label_80BB7164:
    ctx->pc = 0x80BB7164u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7164u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BB7164: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BB7164u)) return;
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
label_80BB7168:
    ctx->pc = 0x80BB7168u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7168u)) return;
    // 80BB7168: lis     r5, -27518
    ctx->gpr[5] = ((u32)(s32)(-27518) << 16);

label_80BB716C:
    ctx->pc = 0x80BB716Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB716Cu)) return;
    // 80BB716C: addi    r5, r5, 1284
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1284);

label_80BB7170:
    ctx->pc = 0x80BB7170u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7170u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BB7170: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BB7170u)) return;
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
label_80BB7174:
    ctx->pc = 0x80BB7174u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7174u)) return;
    // 80BB7174: lis     r5, -27518
    ctx->gpr[5] = ((u32)(s32)(-27518) << 16);

label_80BB7178:
    ctx->pc = 0x80BB7178u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7178u)) return;
    // 80BB7178: addi    r5, r5, 1288
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1288);

label_80BB717C:
    ctx->pc = 0x80BB717Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB717Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BB717C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BB717Cu)) return;
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
label_80BB7180:
    ctx->pc = 0x80BB7180u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7180u)) return;
    // 80BB7180: bl      0x8045C750
    {
            ctx->lr = 0x80BB7184u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80BB7184:
    ctx->pc = 0x80BB7184u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7184u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80BB7184: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80BB7188:
    ctx->pc = 0x80BB7188u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7188u)) return;
    // 80BB7188: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80BB718C:
    ctx->pc = 0x80BB718Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB718Cu)) return;
    // 80BB718C: li      r5, 4996
    ctx->gpr[5] = (u32)(s32)(4996);

label_80BB7190:
    ctx->pc = 0x80BB7190u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7190u)) return;
    // 80BB7190: li      r6, 4466
    ctx->gpr[6] = (u32)(s32)(4466);

label_80BB7194:
    ctx->pc = 0x80BB7194u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7194u)) return;
    // 80BB7194: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80BB7198:
    ctx->pc = 0x80BB7198u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7198u)) return;
    // 80BB7198: bl      0x8045C7B4
    {
            ctx->lr = 0x80BB719Cu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80BB719C:
    ctx->pc = 0x80BB719Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB719Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BB719C: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80BB71A0:
    ctx->pc = 0x80BB71A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB71A0u)) return;
    // 80BB71A0: bl      0x8045F7C8
    {
            ctx->lr = 0x80BB71A4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80BB71A4:
    ctx->pc = 0x80BB71A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB71A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80BB71A4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BB71A8:
    ctx->pc = 0x80BB71A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB71A8u)) return;
    // 80BB71A8: li      r4, -120
    ctx->gpr[4] = (u32)(s32)(-120);

label_80BB71AC:
    ctx->pc = 0x80BB71ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB71ACu)) return;
    // 80BB71AC: li      r5, 90
    ctx->gpr[5] = (u32)(s32)(90);

label_80BB71B0:
    ctx->pc = 0x80BB71B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB71B0u)) return;
    // 80BB71B0: bl      0x80BB7A90
    {
            ctx->lr = 0x80BB71B4u;
            goto label_80BB7A90;
    }

label_80BB71B4:
    ctx->pc = 0x80BB71B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB71B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80BB71B4: lis     r3, -27518
    ctx->gpr[3] = ((u32)(s32)(-27518) << 16);

label_80BB71B8:
    ctx->pc = 0x80BB71B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB71B8u)) return;
    // 80BB71B8: addi    r3, r3, 1292
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1292);

label_80BB71BC:
    ctx->pc = 0x80BB71BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB71BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80BB71BC: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BB71BCu)) return;
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
label_80BB71C0:
    ctx->pc = 0x80BB71C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB71C0u)) return;
    // 80BB71C0: lis     r3, -27518
    ctx->gpr[3] = ((u32)(s32)(-27518) << 16);

label_80BB71C4:
    ctx->pc = 0x80BB71C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB71C4u)) return;
    // 80BB71C4: addi    r3, r3, 1296
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1296);

label_80BB71C8:
    ctx->pc = 0x80BB71C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB71C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BB71C8: lfs     f2, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BB71C8u)) return;
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
label_80BB71CC:
    ctx->pc = 0x80BB71CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB71CCu)) return;
    // 80BB71CC: lis     r3, -27518
    ctx->gpr[3] = ((u32)(s32)(-27518) << 16);

label_80BB71D0:
    ctx->pc = 0x80BB71D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB71D0u)) return;
    // 80BB71D0: addi    r3, r3, 1300
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1300);

label_80BB71D4:
    ctx->pc = 0x80BB71D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB71D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BB71D4: lfs     f3, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BB71D4u)) return;
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
label_80BB71D8:
    ctx->pc = 0x80BB71D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB71D8u)) return;
    // 80BB71D8: fmr    f4, f3
    if (!ppc_fp_available_inline(ctx, 0x80BB71D8u)) return;
    ctx->fpr[4] = ctx->fpr[3];

label_80BB71DC:
    ctx->pc = 0x80BB71DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB71DCu)) return;
    // 80BB71DC: fmr    f5, f3
    if (!ppc_fp_available_inline(ctx, 0x80BB71DCu)) return;
    ctx->fpr[5] = ctx->fpr[3];

label_80BB71E0:
    ctx->pc = 0x80BB71E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB71E0u)) return;
    // 80BB71E0: bl      0x80BB74E8
    {
            ctx->lr = 0x80BB71E4u;
            goto label_80BB74E8;
    }

label_80BB71E4:
    ctx->pc = 0x80BB71E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB71E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80BB71E4: lis     r4, -27517
    ctx->gpr[4] = ((u32)(s32)(-27517) << 16);

label_80BB71E8:
    ctx->pc = 0x80BB71E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB71E8u)) return;
    // 80BB71E8: addi    r4, r4, -27992
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-27992);

label_80BB71EC:
    ctx->pc = 0x80BB71ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB71ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BB71EC: stw     r3, 0(r4)
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
label_80BB71F0:
    ctx->pc = 0x80BB71F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB71F0u)) return;
    // 80BB71F0: li      r3, 90
    ctx->gpr[3] = (u32)(s32)(90);

label_80BB71F4:
    ctx->pc = 0x80BB71F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB71F4u)) return;
    // 80BB71F4: bl      0x8045F7C8
    {
            ctx->lr = 0x80BB71F8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80BB71F8:
    ctx->pc = 0x80BB71F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB71F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BB71F8: b       0x80BB72B0
    {
            goto label_80BB72B0;
    }

label_80BB71FC:
    ctx->pc = 0x80BB71FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB71FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BB71FC: bl      0x80BB7908
    {
            ctx->lr = 0x80BB7200u;
            goto label_80BB7908;
    }

label_80BB7200:
    ctx->pc = 0x80BB7200u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7200u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BB7200: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BB7204:
    ctx->pc = 0x80BB7204u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7204u)) return;
    // 80BB7204: bl      0x8045EC10
    {
            ctx->lr = 0x80BB7208u;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80BB7208:
    ctx->pc = 0x80BB7208u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7208u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80BB7208: lis     r3, -27517
    ctx->gpr[3] = ((u32)(s32)(-27517) << 16);

label_80BB720C:
    ctx->pc = 0x80BB720Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB720Cu)) return;
    // 80BB720C: addi    r3, r3, -28028
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28028);

label_80BB7210:
    ctx->pc = 0x80BB7210u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7210u)) return;
    // 80BB7210: bl      0x8045F070
    {
            ctx->lr = 0x80BB7214u;
            ctx->pc = 0x8045F070u;
            return;
    }

label_80BB7214:
    ctx->pc = 0x80BB7214u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7214u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80BB7214: lis     r3, -27517
    ctx->gpr[3] = ((u32)(s32)(-27517) << 16);

label_80BB7218:
    ctx->pc = 0x80BB7218u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7218u)) return;
    // 80BB7218: addi    r3, r3, -28024
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28024);

label_80BB721C:
    ctx->pc = 0x80BB721Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB721Cu)) return;
    // 80BB721C: bl      0x8045F070
    {
            ctx->lr = 0x80BB7220u;
            ctx->pc = 0x8045F070u;
            return;
    }

label_80BB7220:
    ctx->pc = 0x80BB7220u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7220u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80BB7220: lis     r3, -27517
    ctx->gpr[3] = ((u32)(s32)(-27517) << 16);

label_80BB7224:
    ctx->pc = 0x80BB7224u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7224u)) return;
    // 80BB7224: addi    r3, r3, -28020
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28020);

label_80BB7228:
    ctx->pc = 0x80BB7228u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7228u)) return;
    // 80BB7228: bl      0x8045F070
    {
            ctx->lr = 0x80BB722Cu;
            ctx->pc = 0x8045F070u;
            return;
    }

label_80BB722C:
    ctx->pc = 0x80BB722Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB722Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80BB722C: lis     r3, -27517
    ctx->gpr[3] = ((u32)(s32)(-27517) << 16);

label_80BB7230:
    ctx->pc = 0x80BB7230u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7230u)) return;
    // 80BB7230: addi    r3, r3, -28016
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28016);

label_80BB7234:
    ctx->pc = 0x80BB7234u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7234u)) return;
    // 80BB7234: bl      0x8045F070
    {
            ctx->lr = 0x80BB7238u;
            ctx->pc = 0x8045F070u;
            return;
    }

label_80BB7238:
    ctx->pc = 0x80BB7238u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7238u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80BB7238: lis     r3, -27517
    ctx->gpr[3] = ((u32)(s32)(-27517) << 16);

label_80BB723C:
    ctx->pc = 0x80BB723Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB723Cu)) return;
    // 80BB723C: addi    r3, r3, -28032
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28032);

label_80BB7240:
    ctx->pc = 0x80BB7240u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7240u)) return;
    // 80BB7240: bl      0x8045F070
    {
            ctx->lr = 0x80BB7244u;
            ctx->pc = 0x8045F070u;
            return;
    }

label_80BB7244:
    ctx->pc = 0x80BB7244u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7244u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80BB7244: lis     r3, -27517
    ctx->gpr[3] = ((u32)(s32)(-27517) << 16);

label_80BB7248:
    ctx->pc = 0x80BB7248u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7248u)) return;
    // 80BB7248: addi    r3, r3, -28008
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28008);

label_80BB724C:
    ctx->pc = 0x80BB724Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB724Cu)) return;
    // 80BB724C: bl      0x8045F070
    {
            ctx->lr = 0x80BB7250u;
            ctx->pc = 0x8045F070u;
            return;
    }

label_80BB7250:
    ctx->pc = 0x80BB7250u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7250u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80BB7250: lis     r3, -27517
    ctx->gpr[3] = ((u32)(s32)(-27517) << 16);

label_80BB7254:
    ctx->pc = 0x80BB7254u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7254u)) return;
    // 80BB7254: addi    r3, r3, -28004
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28004);

label_80BB7258:
    ctx->pc = 0x80BB7258u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7258u)) return;
    // 80BB7258: bl      0x8045F070
    {
            ctx->lr = 0x80BB725Cu;
            ctx->pc = 0x8045F070u;
            return;
    }

label_80BB725C:
    ctx->pc = 0x80BB725Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB725Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80BB725C: lis     r3, -27517
    ctx->gpr[3] = ((u32)(s32)(-27517) << 16);

label_80BB7260:
    ctx->pc = 0x80BB7260u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7260u)) return;
    // 80BB7260: addi    r3, r3, -28000
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28000);

label_80BB7264:
    ctx->pc = 0x80BB7264u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7264u)) return;
    // 80BB7264: bl      0x8045F070
    {
            ctx->lr = 0x80BB7268u;
            ctx->pc = 0x8045F070u;
            return;
    }

label_80BB7268:
    ctx->pc = 0x80BB7268u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7268u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80BB7268: lis     r3, -27517
    ctx->gpr[3] = ((u32)(s32)(-27517) << 16);

label_80BB726C:
    ctx->pc = 0x80BB726Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB726Cu)) return;
    // 80BB726C: addi    r3, r3, -27996
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-27996);

label_80BB7270:
    ctx->pc = 0x80BB7270u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7270u)) return;
    // 80BB7270: bl      0x8045F070
    {
            ctx->lr = 0x80BB7274u;
            ctx->pc = 0x8045F070u;
            return;
    }

label_80BB7274:
    ctx->pc = 0x80BB7274u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7274u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80BB7274: lis     r3, -27517
    ctx->gpr[3] = ((u32)(s32)(-27517) << 16);

label_80BB7278:
    ctx->pc = 0x80BB7278u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7278u)) return;
    // 80BB7278: addi    r3, r3, -28012
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28012);

label_80BB727C:
    ctx->pc = 0x80BB727Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB727Cu)) return;
    // 80BB727C: bl      0x8045F070
    {
            ctx->lr = 0x80BB7280u;
            ctx->pc = 0x8045F070u;
            return;
    }

label_80BB7280:
    ctx->pc = 0x80BB7280u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7280u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80BB7280: lis     r3, -27517
    ctx->gpr[3] = ((u32)(s32)(-27517) << 16);

label_80BB7284:
    ctx->pc = 0x80BB7284u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7284u)) return;
    // 80BB7284: addi    r3, r3, -27992
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-27992);

label_80BB7288:
    ctx->pc = 0x80BB7288u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7288u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BB7288: lwz     r3, 0(r3)
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
label_80BB728C:
    ctx->pc = 0x80BB728Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB728Cu)) return;
    // 80BB728C: cmplwi  r3, 0x0000
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

label_80BB7290:
    ctx->pc = 0x80BB7290u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7290u)) return;
    // 80BB7290: bc    12, 2, 0x80BB72A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80BB72A8;
        }
    }

label_80BB7294:
    ctx->pc = 0x80BB7294u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7294u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BB7294: bl      0x8050F9E0
    {
            ctx->lr = 0x80BB7298u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80BB7298:
    ctx->pc = 0x80BB7298u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7298u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80BB7298: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80BB729C:
    ctx->pc = 0x80BB729Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB729Cu)) return;
    // 80BB729C: lis     r3, -27517
    ctx->gpr[3] = ((u32)(s32)(-27517) << 16);

label_80BB72A0:
    ctx->pc = 0x80BB72A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB72A0u)) return;
    // 80BB72A0: addi    r3, r3, -27992
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-27992);

label_80BB72A4:
    ctx->pc = 0x80BB72A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB72A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80BB72A4: stw     r0, 0(r3)
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
label_80BB72A8:
    ctx->pc = 0x80BB72A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB72A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BB72A8: bl      0x8045DE34
    {
            ctx->lr = 0x80BB72ACu;
            ctx->pc = 0x8045DE34u;
            return;
    }

label_80BB72AC:
    ctx->pc = 0x80BB72ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB72ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BB72AC: bl      0x80460A80
    {
            ctx->lr = 0x80BB72B0u;
            ctx->pc = 0x80460A80u;
            return;
    }

label_80BB72B0:
    ctx->pc = 0x80BB72B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB72B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BB72B0: lwz     r0, 20(r1)
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
label_80BB72B4:
    ctx->pc = 0x80BB72B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BB72B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BB72B4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BB72B8:
    ctx->pc = 0x80BB72B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB72B8u)) return;
    // 80BB72B8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80BB72BC:
    ctx->pc = 0x80BB72BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB72BCu)) return;
    // 80BB72BC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BB6260;
        }
    }

label_80BB72C0:
    ctx->pc = 0x80BB72C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB72C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BB72C0: stwu     r1, -64(r1)
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
label_80BB72C4:
    ctx->pc = 0x80BB72C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB72C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BB72C4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BB72C8:
    ctx->pc = 0x80BB72C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB72C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BB72C8: stw     r0, 68(r1)
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
label_80BB72CC:
    ctx->pc = 0x80BB72CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB72CCu)) return;
    // 80BB72CC: addi    r11, r1, 64
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(64);

label_80BB72D0:
    ctx->pc = 0x80BB72D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB72D0u)) return;
    // 80BB72D0: bl      0x80006DD4
    {
            ctx->lr = 0x80BB72D4u;
            ctx->pc = 0x80006DD4u;
            return;
    }

label_80BB72D4:
    ctx->pc = 0x80BB72D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 29u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB72D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 29u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80BB72D4: lwz     r27, 32(r3)
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
label_80BB72D8:
    ctx->pc = 0x80BB72D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB72D8u)) return;
    // 80BB72D8: lis     r3, -27518
    ctx->gpr[3] = ((u32)(s32)(-27518) << 16);

label_80BB72DC:
    ctx->pc = 0x80BB72DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB72DCu)) return;
    // 80BB72DC: addi    r3, r3, 1304
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1304);

label_80BB72E0:
    ctx->pc = 0x80BB72E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB72E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80BB72E0: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BB72E0u)) return;
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
label_80BB72E4:
    ctx->pc = 0x80BB72E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB72E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80BB72E4: lfs     f0, 44(r27)
    if (!ppc_fp_available_inline(ctx, 0x80BB72E4u)) return;
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
label_80BB72E8:
    ctx->pc = 0x80BB72E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB72E8u)) return;
    // 80BB72E8: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80BB72E8u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80BB72EC:
    ctx->pc = 0x80BB72ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB72ECu)) return;
    // 80BB72EC: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80BB72ECu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80BB72F0:
    ctx->pc = 0x80BB72F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB72F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80BB72F0: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BB72F0u)) return;
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
label_80BB72F4:
    ctx->pc = 0x80BB72F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB72F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80BB72F4: lwz     r31, 12(r1)
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
label_80BB72F8:
    ctx->pc = 0x80BB72F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB72F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80BB72F8: lfs     f0, 32(r27)
    if (!ppc_fp_available_inline(ctx, 0x80BB72F8u)) return;
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
label_80BB72FC:
    ctx->pc = 0x80BB72FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB72FCu)) return;
    // 80BB72FC: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80BB72FCu)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80BB7300:
    ctx->pc = 0x80BB7300u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7300u)) return;
    // 80BB7300: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80BB7300u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80BB7304:
    ctx->pc = 0x80BB7304u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7304u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80BB7304: stfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BB7304u)) return;
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
label_80BB7308:
    ctx->pc = 0x80BB7308u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7308u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80BB7308: lwz     r30, 20(r1)
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
label_80BB730C:
    ctx->pc = 0x80BB730Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB730Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80BB730C: lfs     f0, 36(r27)
    if (!ppc_fp_available_inline(ctx, 0x80BB730Cu)) return;
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
label_80BB7310:
    ctx->pc = 0x80BB7310u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7310u)) return;
    // 80BB7310: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80BB7310u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80BB7314:
    ctx->pc = 0x80BB7314u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7314u)) return;
    // 80BB7314: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80BB7314u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80BB7318:
    ctx->pc = 0x80BB7318u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7318u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80BB7318: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BB7318u)) return;
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
label_80BB731C:
    ctx->pc = 0x80BB731Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB731Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BB731C: lwz     r29, 28(r1)
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
label_80BB7320:
    ctx->pc = 0x80BB7320u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7320u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80BB7320: lfs     f0, 40(r27)
    if (!ppc_fp_available_inline(ctx, 0x80BB7320u)) return;
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
label_80BB7324:
    ctx->pc = 0x80BB7324u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7324u)) return;
    // 80BB7324: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80BB7324u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80BB7328:
    ctx->pc = 0x80BB7328u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7328u)) return;
    // 80BB7328: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80BB7328u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80BB732C:
    ctx->pc = 0x80BB732Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB732Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BB732C: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BB732Cu)) return;
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
label_80BB7330:
    ctx->pc = 0x80BB7330u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7330u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BB7330: lwz     r28, 36(r1)
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
label_80BB7334:
    ctx->pc = 0x80BB7334u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7334u)) return;
    // 80BB7334: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80BB7338:
    ctx->pc = 0x80BB7338u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7338u)) return;
    // 80BB7338: addi    r3, r3, 4120
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4120);

label_80BB733C:
    ctx->pc = 0x80BB733Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB733Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BB733C: lwz     r0, 0(r3)
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
label_80BB7340:
    ctx->pc = 0x80BB7340u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7340u)) return;
    // 80BB7340: cmpwi   r0, 0
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

label_80BB7344:
    ctx->pc = 0x80BB7344u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7344u)) return;
    // 80BB7344: bc    4, 2, 0x80BB73FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80BB73FC;
        }
    }

label_80BB7348:
    ctx->pc = 0x80BB7348u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7348u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80BB7348: rlwinm r0, r31, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_80BB734C:
    ctx->pc = 0x80BB734Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB734Cu)) return;
    // 80BB734C: cmplwi  r0, 0x0000
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

label_80BB7350:
    ctx->pc = 0x80BB7350u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7350u)) return;
    // 80BB7350: bc    12, 2, 0x80BB73FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80BB73FC;
        }
    }

label_80BB7354:
    ctx->pc = 0x80BB7354u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7354u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80BB7354: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BB7358:
    ctx->pc = 0x80BB7358u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7358u)) return;
    // 80BB7358: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_80BB735C:
    ctx->pc = 0x80BB735Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB735Cu)) return;
    // 80BB735C: bl      0x8060F4F8
    {
            ctx->lr = 0x80BB7360u;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80BB7360:
    ctx->pc = 0x80BB7360u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7360u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80BB7360: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80BB7364:
    ctx->pc = 0x80BB7364u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7364u)) return;
    // 80BB7364: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80BB7368:
    ctx->pc = 0x80BB7368u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7368u)) return;
    // 80BB7368: bl      0x8060F4F8
    {
            ctx->lr = 0x80BB736Cu;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80BB736C:
    ctx->pc = 0x80BB736Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB736Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BB736C: lfs     f5, 52(r27)
    if (!ppc_fp_available_inline(ctx, 0x80BB736Cu)) return;
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
label_80BB7370:
    ctx->pc = 0x80BB7370u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7370u)) return;
    // 80BB7370: lis     r3, -27518
    ctx->gpr[3] = ((u32)(s32)(-27518) << 16);

label_80BB7374:
    ctx->pc = 0x80BB7374u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7374u)) return;
    // 80BB7374: addi    r3, r3, 1312
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1312);

label_80BB7378:
    ctx->pc = 0x80BB7378u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7378u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BB7378: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BB7378u)) return;
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
label_80BB737C:
    ctx->pc = 0x80BB737Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB737Cu)) return;
    // 80BB737C: fcmpo   cr0, f5, f0
    if (!ppc_fp_available_inline(ctx, 0x80BB737Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[5], ctx->fpr[0], true);

label_80BB7380:
    ctx->pc = 0x80BB7380u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7380u)) return;
    // 80BB7380: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80BB7384:
    ctx->pc = 0x80BB7384u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7384u)) return;
    // 80BB7384: bc    4, 2, 0x80BB7398
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80BB7398;
        }
    }

label_80BB7388:
    ctx->pc = 0x80BB7388u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7388u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80BB7388: lis     r3, -27518
    ctx->gpr[3] = ((u32)(s32)(-27518) << 16);

label_80BB738C:
    ctx->pc = 0x80BB738Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB738Cu)) return;
    // 80BB738C: addi    r3, r3, 1308
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1308);

label_80BB7390:
    ctx->pc = 0x80BB7390u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7390u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BB7390: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BB7390u)) return;
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
label_80BB7394:
    ctx->pc = 0x80BB7394u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7394u)) return;
    // 80BB7394: fadds   f5, f5, f0
    if (!ppc_fp_available_inline(ctx, 0x80BB7394u)) return;
    ppc_fadds(ctx, 5, 5, 0);

label_80BB7398:
    ctx->pc = 0x80BB7398u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7398u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80BB7398: rlwinm r0, r31, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_80BB739C:
    ctx->pc = 0x80BB739Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB739Cu)) return;
    // 80BB739C: cmplwi  r0, 0x00FF
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

label_80BB73A0:
    ctx->pc = 0x80BB73A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB73A0u)) return;
    // 80BB73A0: bc    4, 1, 0x80BB73A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80BB73A8;
        }
    }

label_80BB73A4:
    ctx->pc = 0x80BB73A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB73A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BB73A4: li      r31, 255
    ctx->gpr[31] = (u32)(s32)(255);

label_80BB73A8:
    ctx->pc = 0x80BB73A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 21u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB73A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 21u : 1u;
    // 80BB73A8: lis     r3, -27518
    ctx->gpr[3] = ((u32)(s32)(-27518) << 16);

label_80BB73AC:
    ctx->pc = 0x80BB73ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB73ACu)) return;
    // 80BB73AC: addi    r3, r3, 1316
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1316);

label_80BB73B0:
    ctx->pc = 0x80BB73B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB73B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80BB73B0: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BB73B0u)) return;
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
label_80BB73B4:
    ctx->pc = 0x80BB73B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB73B4u)) return;
    // 80BB73B4: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80BB73B4u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_80BB73B8:
    ctx->pc = 0x80BB73B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB73B8u)) return;
    // 80BB73B8: lis     r3, -27518
    ctx->gpr[3] = ((u32)(s32)(-27518) << 16);

label_80BB73BC:
    ctx->pc = 0x80BB73BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB73BCu)) return;
    // 80BB73BC: addi    r3, r3, 1320
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1320);

label_80BB73C0:
    ctx->pc = 0x80BB73C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB73C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80BB73C0: lfs     f3, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BB73C0u)) return;
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
label_80BB73C4:
    ctx->pc = 0x80BB73C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB73C4u)) return;
    // 80BB73C4: lis     r3, -27518
    ctx->gpr[3] = ((u32)(s32)(-27518) << 16);

label_80BB73C8:
    ctx->pc = 0x80BB73C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB73C8u)) return;
    // 80BB73C8: addi    r3, r3, 1324
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1324);

label_80BB73CC:
    ctx->pc = 0x80BB73CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB73CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80BB73CC: lfs     f4, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BB73CCu)) return;
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
label_80BB73D0:
    ctx->pc = 0x80BB73D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB73D0u)) return;
    // 80BB73D0: rlwinm r5, r28, 0, 24, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[28], 0u) & 0x000000FFu;
    }

label_80BB73D4:
    ctx->pc = 0x80BB73D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB73D4u)) return;
    // 80BB73D4: rlwinm r0, r29, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[29], 0u) & 0x000000FFu;
    }

label_80BB73D8:
    ctx->pc = 0x80BB73D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB73D8u)) return;
    // 80BB73D8: rlwinm r4, r0, 8, 0, 23
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 8u) & 0xFFFFFF00u;
    }

label_80BB73DC:
    ctx->pc = 0x80BB73DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB73DCu)) return;
    // 80BB73DC: rlwinm r0, r31, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_80BB73E0:
    ctx->pc = 0x80BB73E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB73E0u)) return;
    // 80BB73E0: rlwinm r3, r0, 24, 0, 7
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 24u) & 0xFF000000u;
    }

label_80BB73E4:
    ctx->pc = 0x80BB73E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB73E4u)) return;
    // 80BB73E4: rlwinm r0, r30, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0x000000FFu;
    }

label_80BB73E8:
    ctx->pc = 0x80BB73E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB73E8u)) return;
    // 80BB73E8: rlwinm r0, r0, 16, 0, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 16u) & 0xFFFF0000u;
    }

label_80BB73EC:
    ctx->pc = 0x80BB73ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB73ECu)) return;
    // 80BB73EC: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80BB73F0:
    ctx->pc = 0x80BB73F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB73F0u)) return;
    // 80BB73F0: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_80BB73F4:
    ctx->pc = 0x80BB73F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB73F4u)) return;
    // 80BB73F4: or   r3, r5, r0
    {
        ctx->gpr[3] = ctx->gpr[5] | ctx->gpr[0];
    }

label_80BB73F8:
    ctx->pc = 0x80BB73F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB73F8u)) return;
    // 80BB73F8: bl      0x80BB7414
    {
            ctx->lr = 0x80BB73FCu;
            goto label_80BB7414;
    }

label_80BB73FC:
    ctx->pc = 0x80BB73FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB73FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BB73FC: addi    r11, r1, 64
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(64);

label_80BB7400:
    ctx->pc = 0x80BB7400u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7400u)) return;
    // 80BB7400: bl      0x80006E20
    {
            ctx->lr = 0x80BB7404u;
            ctx->pc = 0x80006E20u;
            return;
    }

label_80BB7404:
    ctx->pc = 0x80BB7404u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7404u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BB7404: lwz     r0, 68(r1)
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
label_80BB7408:
    ctx->pc = 0x80BB7408u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BB7408u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BB7408: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BB740C:
    ctx->pc = 0x80BB740Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB740Cu)) return;
    // 80BB740C: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_80BB7410:
    ctx->pc = 0x80BB7410u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7410u)) return;
    // 80BB7410: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BB6260;
        }
    }

label_80BB7414:
    ctx->pc = 0x80BB7414u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7414u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BB7414: stwu     r1, -16(r1)
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
label_80BB7418:
    ctx->pc = 0x80BB7418u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7418u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BB7418: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BB741C:
    ctx->pc = 0x80BB741Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB741Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BB741C: stw     r0, 20(r1)
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
label_80BB7420:
    ctx->pc = 0x80BB7420u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7420u)) return;
    // 80BB7420: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80BB7424:
    ctx->pc = 0x80BB7424u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7424u)) return;
    // 80BB7424: bl      0x80607948
    {
            ctx->lr = 0x80BB7428u;
            ctx->pc = 0x80607948u;
            return;
    }

label_80BB7428:
    ctx->pc = 0x80BB7428u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7428u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BB7428: lwz     r0, 20(r1)
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
label_80BB742C:
    ctx->pc = 0x80BB742Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BB742Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BB742C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BB7430:
    ctx->pc = 0x80BB7430u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7430u)) return;
    // 80BB7430: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80BB7434:
    ctx->pc = 0x80BB7434u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7434u)) return;
    // 80BB7434: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BB6260;
        }
    }

label_80BB7438:
    ctx->pc = 0x80BB7438u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7438u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80BB7438: stwu     r1, -16(r1)
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
label_80BB743C:
    ctx->pc = 0x80BB743Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB743Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BB743C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BB7440:
    ctx->pc = 0x80BB7440u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7440u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80BB7440: stw     r0, 20(r1)
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
label_80BB7444:
    ctx->pc = 0x80BB7444u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7444u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80BB7444: lwz     r5, 32(r3)
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
label_80BB7448:
    ctx->pc = 0x80BB7448u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7448u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BB7448: lfs     f1, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BB7448u)) return;
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
label_80BB744C:
    ctx->pc = 0x80BB744Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB744Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BB744C: lfs     f0, 48(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BB744Cu)) return;
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
label_80BB7450:
    ctx->pc = 0x80BB7450u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7450u)) return;
    // 80BB7450: fadds   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80BB7450u)) return;
    ppc_fadds(ctx, 1, 1, 0);

label_80BB7454:
    ctx->pc = 0x80BB7454u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7454u)) return;
    // 80BB7454: lis     r4, -27518
    ctx->gpr[4] = ((u32)(s32)(-27518) << 16);

label_80BB7458:
    ctx->pc = 0x80BB7458u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7458u)) return;
    // 80BB7458: addi    r4, r4, 1328
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1328);

label_80BB745C:
    ctx->pc = 0x80BB745Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB745Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BB745C: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BB745Cu)) return;
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
label_80BB7460:
    ctx->pc = 0x80BB7460u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7460u)) return;
    // 80BB7460: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80BB7460u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80BB7464:
    ctx->pc = 0x80BB7464u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7464u)) return;
    // 80BB7464: bc    4, 1, 0x80BB7470
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80BB7470;
        }
    }

label_80BB7468:
    ctx->pc = 0x80BB7468u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7468u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BB7468: fmr    f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80BB7468u)) return;
    ctx->fpr[1] = ctx->fpr[0];

label_80BB746C:
    ctx->pc = 0x80BB746Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB746Cu)) return;
    // 80BB746C: b       0x80BB7488
    {
            goto label_80BB7488;
    }

label_80BB7470:
    ctx->pc = 0x80BB7470u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7470u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80BB7470: lis     r4, -27518
    ctx->gpr[4] = ((u32)(s32)(-27518) << 16);

label_80BB7474:
    ctx->pc = 0x80BB7474u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7474u)) return;
    // 80BB7474: addi    r4, r4, 1316
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1316);

label_80BB7478:
    ctx->pc = 0x80BB7478u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7478u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BB7478: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BB7478u)) return;
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
label_80BB747C:
    ctx->pc = 0x80BB747Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB747Cu)) return;
    // 80BB747C: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80BB747Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80BB7480:
    ctx->pc = 0x80BB7480u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7480u)) return;
    // 80BB7480: bc    4, 0, 0x80BB7488
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80BB7488;
        }
    }

label_80BB7484:
    ctx->pc = 0x80BB7484u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7484u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BB7484: fmr    f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80BB7484u)) return;
    ctx->fpr[1] = ctx->fpr[0];

label_80BB7488:
    ctx->pc = 0x80BB7488u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7488u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BB7488: stfs     f1, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BB7488u)) return;
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
label_80BB748C:
    ctx->pc = 0x80BB748Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB748Cu)) return;
    // 80BB748C: bl      0x80BB72C0
    {
            ctx->lr = 0x80BB7490u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80BB72C0u;
                return;
            }
            goto label_80BB72C0;
    }

label_80BB7490:
    ctx->pc = 0x80BB7490u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7490u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BB7490: lwz     r0, 20(r1)
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
label_80BB7494:
    ctx->pc = 0x80BB7494u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BB7494u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BB7494: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BB7498:
    ctx->pc = 0x80BB7498u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7498u)) return;
    // 80BB7498: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80BB749C:
    ctx->pc = 0x80BB749Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB749Cu)) return;
    // 80BB749C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BB6260;
        }
    }

label_80BB74A0:
    ctx->pc = 0x80BB74A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB74A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BB74A0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BB6260;
        }
    }

label_80BB74A4:
    ctx->pc = 0x80BB74A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB74A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80BB74A4: stwu     r1, -16(r1)
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
label_80BB74A8:
    ctx->pc = 0x80BB74A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB74A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80BB74A8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BB74AC:
    ctx->pc = 0x80BB74ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB74ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BB74AC: stw     r0, 20(r1)
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
label_80BB74B0:
    ctx->pc = 0x80BB74B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB74B0u)) return;
    // 80BB74B0: lis     r4, -32581
    ctx->gpr[4] = ((u32)(s32)(-32581) << 16);

label_80BB74B4:
    ctx->pc = 0x80BB74B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB74B4u)) return;
    // 80BB74B4: addi    r0, r4, 29752
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(29752);

label_80BB74B8:
    ctx->pc = 0x80BB74B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB74B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BB74B8: stw     r0, 16(r3)
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
label_80BB74BC:
    ctx->pc = 0x80BB74BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB74BCu)) return;
    // 80BB74BC: lis     r4, -32581
    ctx->gpr[4] = ((u32)(s32)(-32581) << 16);

label_80BB74C0:
    ctx->pc = 0x80BB74C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB74C0u)) return;
    // 80BB74C0: addi    r0, r4, 29376
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(29376);

label_80BB74C4:
    ctx->pc = 0x80BB74C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB74C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BB74C4: stw     r0, 20(r3)
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
label_80BB74C8:
    ctx->pc = 0x80BB74C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB74C8u)) return;
    // 80BB74C8: lis     r4, -32581
    ctx->gpr[4] = ((u32)(s32)(-32581) << 16);

label_80BB74CC:
    ctx->pc = 0x80BB74CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB74CCu)) return;
    // 80BB74CC: addi    r0, r4, 29856
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(29856);

label_80BB74D0:
    ctx->pc = 0x80BB74D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB74D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BB74D0: stw     r0, 24(r3)
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
label_80BB74D4:
    ctx->pc = 0x80BB74D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB74D4u)) return;
    // 80BB74D4: bl      0x80BB7438
    {
            ctx->lr = 0x80BB74D8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80BB7438u;
                return;
            }
            goto label_80BB7438;
    }

label_80BB74D8:
    ctx->pc = 0x80BB74D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB74D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BB74D8: lwz     r0, 20(r1)
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
label_80BB74DC:
    ctx->pc = 0x80BB74DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BB74DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BB74DC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BB74E0:
    ctx->pc = 0x80BB74E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB74E0u)) return;
    // 80BB74E0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80BB74E4:
    ctx->pc = 0x80BB74E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB74E4u)) return;
    // 80BB74E4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BB6260;
        }
    }

label_80BB74E8:
    ctx->pc = 0x80BB74E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 23u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB74E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 23u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80BB74E8: stwu     r1, -96(r1)
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
label_80BB74EC:
    ctx->pc = 0x80BB74ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB74ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80BB74EC: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BB74F0:
    ctx->pc = 0x80BB74F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB74F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80BB74F0: stw     r0, 100(r1)
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
label_80BB74F4:
    ctx->pc = 0x80BB74F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB74F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80BB74F4: stfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BB74F4u)) return;
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
label_80BB74F8:
    ctx->pc = 0x80BB74F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB74F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80BB74F8: psq_st   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BB74F8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80BB74F8u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BB74FC:
    ctx->pc = 0x80BB74FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB74FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80BB74FC: stfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BB74FCu)) return;
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
label_80BB7500:
    ctx->pc = 0x80BB7500u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7500u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80BB7500: psq_st   f30, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BB7500u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x80BB7500u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BB7504:
    ctx->pc = 0x80BB7504u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7504u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80BB7504: stfd     f29, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BB7504u)) return;
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
label_80BB7508:
    ctx->pc = 0x80BB7508u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7508u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80BB7508: psq_st   f29, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BB7508u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x80BB7508u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BB750C:
    ctx->pc = 0x80BB750Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB750Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80BB750C: stfd     f28, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BB750Cu)) return;
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
label_80BB7510:
    ctx->pc = 0x80BB7510u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7510u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80BB7510: psq_st   f28, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BB7510u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x80BB7510u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BB7514:
    ctx->pc = 0x80BB7514u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7514u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80BB7514: stfd     f27, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BB7514u)) return;
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
label_80BB7518:
    ctx->pc = 0x80BB7518u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7518u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BB7518: psq_st   f27, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BB7518u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_store_inline(ctx, 27u, ea, false, 0u, false, 0x80BB7518u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BB751C:
    ctx->pc = 0x80BB751Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB751Cu)) return;
    // 80BB751C: fmr    f27, f1
    if (!ppc_fp_available_inline(ctx, 0x80BB751Cu)) return;
    ctx->fpr[27] = ctx->fpr[1];

label_80BB7520:
    ctx->pc = 0x80BB7520u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7520u)) return;
    // 80BB7520: fmr    f28, f2
    if (!ppc_fp_available_inline(ctx, 0x80BB7520u)) return;
    ctx->fpr[28] = ctx->fpr[2];

label_80BB7524:
    ctx->pc = 0x80BB7524u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7524u)) return;
    // 80BB7524: fmr    f29, f3
    if (!ppc_fp_available_inline(ctx, 0x80BB7524u)) return;
    ctx->fpr[29] = ctx->fpr[3];

label_80BB7528:
    ctx->pc = 0x80BB7528u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7528u)) return;
    // 80BB7528: fmr    f30, f4
    if (!ppc_fp_available_inline(ctx, 0x80BB7528u)) return;
    ctx->fpr[30] = ctx->fpr[4];

label_80BB752C:
    ctx->pc = 0x80BB752Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB752Cu)) return;
    // 80BB752C: fmr    f31, f5
    if (!ppc_fp_available_inline(ctx, 0x80BB752Cu)) return;
    ctx->fpr[31] = ctx->fpr[5];

label_80BB7530:
    ctx->pc = 0x80BB7530u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7530u)) return;
    // 80BB7530: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80BB7534:
    ctx->pc = 0x80BB7534u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7534u)) return;
    // 80BB7534: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80BB7538:
    ctx->pc = 0x80BB7538u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7538u)) return;
    // 80BB7538: lis     r5, -32581
    ctx->gpr[5] = ((u32)(s32)(-32581) << 16);

label_80BB753C:
    ctx->pc = 0x80BB753Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB753Cu)) return;
    // 80BB753C: addi    r5, r5, 29860
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(29860);

label_80BB7540:
    ctx->pc = 0x80BB7540u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7540u)) return;
    // 80BB7540: bl      0x8050FD60
    {
            ctx->lr = 0x80BB7544u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80BB7544:
    ctx->pc = 0x80BB7544u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 25u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7544u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 25u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80BB7544: lwz     r5, 32(r3)
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
label_80BB7548:
    ctx->pc = 0x80BB7548u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7548u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80BB7548: stfs     f27, 48(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BB7548u)) return;
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
label_80BB754C:
    ctx->pc = 0x80BB754Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB754Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80BB754C: stfs     f28, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BB754Cu)) return;
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
label_80BB7550:
    ctx->pc = 0x80BB7550u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7550u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80BB7550: stfs     f29, 32(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BB7550u)) return;
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
label_80BB7554:
    ctx->pc = 0x80BB7554u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7554u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80BB7554: stfs     f30, 36(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BB7554u)) return;
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
label_80BB7558:
    ctx->pc = 0x80BB7558u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7558u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80BB7558: stfs     f31, 40(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BB7558u)) return;
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
label_80BB755C:
    ctx->pc = 0x80BB755Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB755Cu)) return;
    // 80BB755C: lis     r4, -27518
    ctx->gpr[4] = ((u32)(s32)(-27518) << 16);

label_80BB7560:
    ctx->pc = 0x80BB7560u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7560u)) return;
    // 80BB7560: addi    r4, r4, 1312
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1312);

label_80BB7564:
    ctx->pc = 0x80BB7564u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7564u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80BB7564: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BB7564u)) return;
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
label_80BB7568:
    ctx->pc = 0x80BB7568u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7568u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80BB7568: stfs     f0, 52(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BB7568u)) return;
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
label_80BB756C:
    ctx->pc = 0x80BB756Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB756Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80BB756C: psq_l   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BB756Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80BB756Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BB7570:
    ctx->pc = 0x80BB7570u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7570u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80BB7570: lfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BB7570u)) return;
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
label_80BB7574:
    ctx->pc = 0x80BB7574u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7574u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80BB7574: psq_l   f30, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BB7574u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x80BB7574u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BB7578:
    ctx->pc = 0x80BB7578u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7578u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80BB7578: lfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BB7578u)) return;
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
label_80BB757C:
    ctx->pc = 0x80BB757Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB757Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BB757C: psq_l   f29, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BB757Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x80BB757Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BB7580:
    ctx->pc = 0x80BB7580u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7580u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80BB7580: lfd     f29, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BB7580u)) return;
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
label_80BB7584:
    ctx->pc = 0x80BB7584u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7584u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80BB7584: psq_l   f28, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BB7584u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x80BB7584u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BB7588:
    ctx->pc = 0x80BB7588u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7588u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BB7588: lfd     f28, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BB7588u)) return;
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
label_80BB758C:
    ctx->pc = 0x80BB758Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB758Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BB758C: psq_l   f27, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BB758Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_load_inline(ctx, 27u, ea, false, 0u, false, 0x80BB758Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BB7590:
    ctx->pc = 0x80BB7590u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7590u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BB7590: lfd     f27, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BB7590u)) return;
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
label_80BB7594:
    ctx->pc = 0x80BB7594u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7594u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BB7594: lwz     r0, 100(r1)
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
label_80BB7598:
    ctx->pc = 0x80BB7598u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BB7598u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BB7598: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BB759C:
    ctx->pc = 0x80BB759Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB759Cu)) return;
    // 80BB759C: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_80BB75A0:
    ctx->pc = 0x80BB75A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB75A0u)) return;
    // 80BB75A0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BB6260;
        }
    }

label_80BB75A4:
    ctx->pc = 0x80BB75A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB75A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BB75A4: lwz     r3, 32(r3)
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
label_80BB75A8:
    ctx->pc = 0x80BB75A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB75A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BB75A8: stfs     f1, 48(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BB75A8u)) return;
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
label_80BB75AC:
    ctx->pc = 0x80BB75ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB75ACu)) return;
    // 80BB75AC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BB6260;
        }
    }

label_80BB75B0:
    ctx->pc = 0x80BB75B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB75B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BB75B0: lwz     r3, 32(r3)
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
label_80BB75B4:
    ctx->pc = 0x80BB75B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB75B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BB75B4: stfs     f1, 44(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BB75B4u)) return;
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
label_80BB75B8:
    ctx->pc = 0x80BB75B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB75B8u)) return;
    // 80BB75B8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BB6260;
        }
    }

label_80BB75BC:
    ctx->pc = 0x80BB75BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB75BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BB75BC: lwz     r3, 32(r3)
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
label_80BB75C0:
    ctx->pc = 0x80BB75C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB75C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BB75C0: stfs     f1, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BB75C0u)) return;
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
label_80BB75C4:
    ctx->pc = 0x80BB75C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB75C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BB75C4: stfs     f2, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BB75C4u)) return;
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
label_80BB75C8:
    ctx->pc = 0x80BB75C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB75C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BB75C8: stfs     f3, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BB75C8u)) return;
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
label_80BB75CC:
    ctx->pc = 0x80BB75CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB75CCu)) return;
    // 80BB75CC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BB6260;
        }
    }

label_80BB75D0:
    ctx->pc = 0x80BB75D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB75D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BB75D0: lwz     r3, 32(r3)
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
label_80BB75D4:
    ctx->pc = 0x80BB75D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB75D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BB75D4: stfs     f1, 52(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BB75D4u)) return;
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
label_80BB75D8:
    ctx->pc = 0x80BB75D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB75D8u)) return;
    // 80BB75D8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BB6260;
        }
    }

label_80BB75DC:
    ctx->pc = 0x80BB75DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB75DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BB75DC: stwu     r1, -16(r1)
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
label_80BB75E0:
    ctx->pc = 0x80BB75E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB75E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BB75E0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BB75E4:
    ctx->pc = 0x80BB75E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB75E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BB75E4: stw     r0, 20(r1)
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
label_80BB75E8:
    ctx->pc = 0x80BB75E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB75E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BB75E8: lwz     r3, 32(r3)
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
label_80BB75EC:
    ctx->pc = 0x80BB75ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB75ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BB75EC: lwz     r3, 16(r3)
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
label_80BB75F0:
    ctx->pc = 0x80BB75F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB75F0u)) return;
    // 80BB75F0: bl      0x80509CF0
    {
            ctx->lr = 0x80BB75F4u;
            ctx->pc = 0x80509CF0u;
            return;
    }

label_80BB75F4:
    ctx->pc = 0x80BB75F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB75F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BB75F4: lwz     r0, 20(r1)
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
label_80BB75F8:
    ctx->pc = 0x80BB75F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BB75F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BB75F8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BB75FC:
    ctx->pc = 0x80BB75FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB75FCu)) return;
    // 80BB75FC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80BB7600:
    ctx->pc = 0x80BB7600u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7600u)) return;
    // 80BB7600: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BB6260;
        }
    }

label_80BB7604:
    ctx->pc = 0x80BB7604u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7604u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BB7604: stwu     r1, -32(r1)
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
label_80BB7608:
    ctx->pc = 0x80BB7608u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7608u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80BB7608: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BB760C:
    ctx->pc = 0x80BB760Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB760Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80BB760C: stw     r0, 36(r1)
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
label_80BB7610:
    ctx->pc = 0x80BB7610u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7610u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BB7610: stw     r31, 28(r1)
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
label_80BB7614:
    ctx->pc = 0x80BB7614u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7614u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BB7614: stw     r30, 24(r1)
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
label_80BB7618:
    ctx->pc = 0x80BB7618u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7618u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BB7618: stw     r29, 20(r1)
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
label_80BB761C:
    ctx->pc = 0x80BB761Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB761Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BB761C: lwz     r31, 32(r3)
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
label_80BB7620:
    ctx->pc = 0x80BB7620u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7620u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BB7620: lwz     r30, 16(r31)
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
label_80BB7624:
    ctx->pc = 0x80BB7624u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7624u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BB7624: lwz     r5, 28(r31)
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
label_80BB7628:
    ctx->pc = 0x80BB7628u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7628u)) return;
    // 80BB7628: cmpwi   r5, 0
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

label_80BB762C:
    ctx->pc = 0x80BB762Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB762Cu)) return;
    // 80BB762C: bc    4, 1, 0x80BB7664
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80BB7664;
        }
    }

label_80BB7630:
    ctx->pc = 0x80BB7630u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7630u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80BB7630: lwz     r4, 24(r31)
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
label_80BB7634:
    ctx->pc = 0x80BB7634u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7634u)) return;
    // 80BB7634: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80BB7638:
    ctx->pc = 0x80BB7638u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7638u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80BB7638: lwz     r0, 20(r31)
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
label_80BB763C:
    ctx->pc = 0x80BB763Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80BB763Cu)) return;
    // 80BB763C: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80BB7640:
    ctx->pc = 0x80BB7640u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7640u)) return;
    // 80BB7640: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80BB7644:
    ctx->pc = 0x80BB7644u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80BB7644u)) return;
    // 80BB7644: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80BB7648:
    ctx->pc = 0x80BB7648u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7648u)) return;
    // 80BB7648: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80BB764C:
    ctx->pc = 0x80BB764Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB764Cu)) return;
    // 80BB764C: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80BB7650:
    ctx->pc = 0x80BB7650u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7650u)) return;
    // 80BB7650: bl      0x80509C74
    {
            ctx->lr = 0x80BB7654u;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80BB7654:
    ctx->pc = 0x80BB7654u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7654u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BB7654: stw     r29, 20(r31)
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
label_80BB7658:
    ctx->pc = 0x80BB7658u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7658u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BB7658: lwz     r3, 28(r31)
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
label_80BB765C:
    ctx->pc = 0x80BB765Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB765Cu)) return;
    // 80BB765C: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80BB7660:
    ctx->pc = 0x80BB7660u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7660u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80BB7660: stw     r0, 28(r31)
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
label_80BB7664:
    ctx->pc = 0x80BB7664u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7664u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BB7664: lwz     r5, 40(r31)
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
label_80BB7668:
    ctx->pc = 0x80BB7668u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7668u)) return;
    // 80BB7668: cmpwi   r5, 0
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

label_80BB766C:
    ctx->pc = 0x80BB766Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB766Cu)) return;
    // 80BB766C: bc    4, 1, 0x80BB76A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80BB76A4;
        }
    }

label_80BB7670:
    ctx->pc = 0x80BB7670u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7670u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80BB7670: lwz     r4, 36(r31)
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
label_80BB7674:
    ctx->pc = 0x80BB7674u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7674u)) return;
    // 80BB7674: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80BB7678:
    ctx->pc = 0x80BB7678u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7678u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80BB7678: lwz     r0, 32(r31)
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
label_80BB767C:
    ctx->pc = 0x80BB767Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80BB767Cu)) return;
    // 80BB767C: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80BB7680:
    ctx->pc = 0x80BB7680u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7680u)) return;
    // 80BB7680: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80BB7684:
    ctx->pc = 0x80BB7684u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80BB7684u)) return;
    // 80BB7684: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80BB7688:
    ctx->pc = 0x80BB7688u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7688u)) return;
    // 80BB7688: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80BB768C:
    ctx->pc = 0x80BB768Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB768Cu)) return;
    // 80BB768C: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80BB7690:
    ctx->pc = 0x80BB7690u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7690u)) return;
    // 80BB7690: bl      0x80509BF8
    {
            ctx->lr = 0x80BB7694u;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80BB7694:
    ctx->pc = 0x80BB7694u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7694u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BB7694: stw     r29, 32(r31)
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
label_80BB7698:
    ctx->pc = 0x80BB7698u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7698u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BB7698: lwz     r3, 40(r31)
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
label_80BB769C:
    ctx->pc = 0x80BB769Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB769Cu)) return;
    // 80BB769C: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80BB76A0:
    ctx->pc = 0x80BB76A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB76A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80BB76A0: stw     r0, 40(r31)
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
label_80BB76A4:
    ctx->pc = 0x80BB76A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB76A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BB76A4: lwz     r5, 52(r31)
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
label_80BB76A8:
    ctx->pc = 0x80BB76A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB76A8u)) return;
    // 80BB76A8: cmpwi   r5, 0
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

label_80BB76AC:
    ctx->pc = 0x80BB76ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB76ACu)) return;
    // 80BB76AC: bc    4, 1, 0x80BB76E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80BB76E4;
        }
    }

label_80BB76B0:
    ctx->pc = 0x80BB76B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB76B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80BB76B0: lwz     r4, 48(r31)
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
label_80BB76B4:
    ctx->pc = 0x80BB76B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB76B4u)) return;
    // 80BB76B4: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80BB76B8:
    ctx->pc = 0x80BB76B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB76B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80BB76B8: lwz     r0, 44(r31)
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
label_80BB76BC:
    ctx->pc = 0x80BB76BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80BB76BCu)) return;
    // 80BB76BC: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80BB76C0:
    ctx->pc = 0x80BB76C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB76C0u)) return;
    // 80BB76C0: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80BB76C4:
    ctx->pc = 0x80BB76C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80BB76C4u)) return;
    // 80BB76C4: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80BB76C8:
    ctx->pc = 0x80BB76C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB76C8u)) return;
    // 80BB76C8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80BB76CC:
    ctx->pc = 0x80BB76CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB76CCu)) return;
    // 80BB76CC: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80BB76D0:
    ctx->pc = 0x80BB76D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB76D0u)) return;
    // 80BB76D0: bl      0x80509B94
    {
            ctx->lr = 0x80BB76D4u;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80BB76D4:
    ctx->pc = 0x80BB76D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB76D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BB76D4: stw     r29, 44(r31)
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
label_80BB76D8:
    ctx->pc = 0x80BB76D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB76D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BB76D8: lwz     r3, 52(r31)
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
label_80BB76DC:
    ctx->pc = 0x80BB76DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB76DCu)) return;
    // 80BB76DC: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80BB76E0:
    ctx->pc = 0x80BB76E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB76E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80BB76E0: stw     r0, 52(r31)
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
label_80BB76E4:
    ctx->pc = 0x80BB76E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB76E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BB76E4: lwz     r31, 28(r1)
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
label_80BB76E8:
    ctx->pc = 0x80BB76E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB76E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BB76E8: lwz     r30, 24(r1)
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
label_80BB76EC:
    ctx->pc = 0x80BB76ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB76ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BB76EC: lwz     r29, 20(r1)
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
label_80BB76F0:
    ctx->pc = 0x80BB76F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB76F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BB76F0: lwz     r0, 36(r1)
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
label_80BB76F4:
    ctx->pc = 0x80BB76F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BB76F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BB76F4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BB76F8:
    ctx->pc = 0x80BB76F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB76F8u)) return;
    // 80BB76F8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80BB76FC:
    ctx->pc = 0x80BB76FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB76FCu)) return;
    // 80BB76FC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BB6260;
        }
    }

label_80BB7700:
    ctx->pc = 0x80BB7700u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7700u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80BB7700: stwu     r1, -32(r1)
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
label_80BB7704:
    ctx->pc = 0x80BB7704u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7704u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BB7704: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BB7708:
    ctx->pc = 0x80BB7708u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7708u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80BB7708: stw     r0, 36(r1)
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
label_80BB770C:
    ctx->pc = 0x80BB770Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB770Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80BB770C: stw     r31, 28(r1)
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
label_80BB7710:
    ctx->pc = 0x80BB7710u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7710u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BB7710: stw     r30, 24(r1)
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
label_80BB7714:
    ctx->pc = 0x80BB7714u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7714u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BB7714: stw     r29, 20(r1)
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
label_80BB7718:
    ctx->pc = 0x80BB7718u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7718u)) return;
    // 80BB7718: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80BB771C:
    ctx->pc = 0x80BB771Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB771Cu)) return;
    // 80BB771C: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80BB7720:
    ctx->pc = 0x80BB7720u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7720u)) return;
    // 80BB7720: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80BB7724:
    ctx->pc = 0x80BB7724u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7724u)) return;
    // 80BB7724: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80BB7728:
    ctx->pc = 0x80BB7728u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7728u)) return;
    // 80BB7728: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80BB772C:
    ctx->pc = 0x80BB772Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB772Cu)) return;
    // 80BB772C: bl      0x8050FD60
    {
            ctx->lr = 0x80BB7730u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80BB7730:
    ctx->pc = 0x80BB7730u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7730u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80BB7730: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80BB7734:
    ctx->pc = 0x80BB7734u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7734u)) return;
    // 80BB7734: cmplwi  r31, 0x0000
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

label_80BB7738:
    ctx->pc = 0x80BB7738u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7738u)) return;
    // 80BB7738: bc    12, 2, 0x80BB779C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80BB779C;
        }
    }

label_80BB773C:
    ctx->pc = 0x80BB773Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB773Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80BB773C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80BB7740:
    ctx->pc = 0x80BB7740u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7740u)) return;
    // 80BB7740: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80BB7744:
    ctx->pc = 0x80BB7744u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7744u)) return;
    // 80BB7744: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80BB7748:
    ctx->pc = 0x80BB7748u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7748u)) return;
    // 80BB7748: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80BB774C:
    ctx->pc = 0x80BB774Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB774Cu)) return;
    // 80BB774C: or   r7, r30, r30
    {
        ctx->gpr[7] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80BB7750:
    ctx->pc = 0x80BB7750u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7750u)) return;
    // 80BB7750: bl      0x8050A0D4
    {
            ctx->lr = 0x80BB7754u;
            ctx->pc = 0x8050A0D4u;
            return;
    }

label_80BB7754:
    ctx->pc = 0x80BB7754u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 18u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7754u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 18u : 1u;
    // 80BB7754: lis     r3, -32581
    ctx->gpr[3] = ((u32)(s32)(-32581) << 16);

label_80BB7758:
    ctx->pc = 0x80BB7758u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7758u)) return;
    // 80BB7758: addi    r0, r3, 30212
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(30212);

label_80BB775C:
    ctx->pc = 0x80BB775Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB775Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80BB775C: stw     r0, 16(r31)
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
label_80BB7760:
    ctx->pc = 0x80BB7760u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7760u)) return;
    // 80BB7760: lis     r3, -32581
    ctx->gpr[3] = ((u32)(s32)(-32581) << 16);

label_80BB7764:
    ctx->pc = 0x80BB7764u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7764u)) return;
    // 80BB7764: addi    r0, r3, 30172
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(30172);

label_80BB7768:
    ctx->pc = 0x80BB7768u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7768u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80BB7768: stw     r0, 24(r31)
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
label_80BB776C:
    ctx->pc = 0x80BB776Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB776Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80BB776C: lwz     r3, 32(r31)
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
label_80BB7770:
    ctx->pc = 0x80BB7770u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7770u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BB7770: stw     r31, 16(r3)
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
label_80BB7774:
    ctx->pc = 0x80BB7774u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7774u)) return;
    // 80BB7774: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80BB7778:
    ctx->pc = 0x80BB7778u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7778u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80BB7778: stw     r0, 20(r3)
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
label_80BB777C:
    ctx->pc = 0x80BB777Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB777Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BB777C: stw     r0, 24(r3)
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
label_80BB7780:
    ctx->pc = 0x80BB7780u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7780u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BB7780: stw     r0, 28(r3)
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
label_80BB7784:
    ctx->pc = 0x80BB7784u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7784u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BB7784: stw     r0, 32(r3)
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
label_80BB7788:
    ctx->pc = 0x80BB7788u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7788u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BB7788: stw     r0, 36(r3)
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
label_80BB778C:
    ctx->pc = 0x80BB778Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB778Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BB778C: stw     r0, 40(r3)
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
label_80BB7790:
    ctx->pc = 0x80BB7790u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7790u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BB7790: stw     r0, 44(r3)
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
label_80BB7794:
    ctx->pc = 0x80BB7794u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7794u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BB7794: stw     r0, 48(r3)
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
label_80BB7798:
    ctx->pc = 0x80BB7798u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7798u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80BB7798: stw     r0, 52(r3)
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
label_80BB779C:
    ctx->pc = 0x80BB779Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB779Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80BB779C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80BB77A0:
    ctx->pc = 0x80BB77A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB77A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BB77A0: lwz     r31, 28(r1)
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
label_80BB77A4:
    ctx->pc = 0x80BB77A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB77A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BB77A4: lwz     r30, 24(r1)
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
label_80BB77A8:
    ctx->pc = 0x80BB77A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB77A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BB77A8: lwz     r29, 20(r1)
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
label_80BB77AC:
    ctx->pc = 0x80BB77ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB77ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BB77AC: lwz     r0, 36(r1)
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
label_80BB77B0:
    ctx->pc = 0x80BB77B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BB77B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BB77B0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BB77B4:
    ctx->pc = 0x80BB77B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB77B4u)) return;
    // 80BB77B4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80BB77B8:
    ctx->pc = 0x80BB77B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB77B8u)) return;
    // 80BB77B8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BB6260;
        }
    }

label_80BB77BC:
    ctx->pc = 0x80BB77BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB77BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BB77BC: stwu     r1, -16(r1)
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
label_80BB77C0:
    ctx->pc = 0x80BB77C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB77C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80BB77C0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BB77C4:
    ctx->pc = 0x80BB77C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB77C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80BB77C4: stw     r0, 20(r1)
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
label_80BB77C8:
    ctx->pc = 0x80BB77C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB77C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BB77C8: stw     r31, 12(r1)
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
label_80BB77CC:
    ctx->pc = 0x80BB77CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB77CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BB77CC: stw     r30, 8(r1)
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
label_80BB77D0:
    ctx->pc = 0x80BB77D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB77D0u)) return;
    // 80BB77D0: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80BB77D4:
    ctx->pc = 0x80BB77D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB77D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BB77D4: lwz     r31, 32(r3)
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
label_80BB77D8:
    ctx->pc = 0x80BB77D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB77D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BB77D8: stw     r30, 24(r31)
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
label_80BB77DC:
    ctx->pc = 0x80BB77DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB77DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BB77DC: stw     r5, 28(r31)
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
label_80BB77E0:
    ctx->pc = 0x80BB77E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB77E0u)) return;
    // 80BB77E0: cmpwi   r5, 0
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

label_80BB77E4:
    ctx->pc = 0x80BB77E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB77E4u)) return;
    // 80BB77E4: bc    12, 1, 0x80BB77F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80BB77F4;
        }
    }

label_80BB77E8:
    ctx->pc = 0x80BB77E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB77E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BB77E8: lwz     r3, 16(r31)
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
label_80BB77EC:
    ctx->pc = 0x80BB77ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB77ECu)) return;
    // 80BB77EC: bl      0x80509C74
    {
            ctx->lr = 0x80BB77F0u;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80BB77F0:
    ctx->pc = 0x80BB77F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB77F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80BB77F0: stw     r30, 20(r31)
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
label_80BB77F4:
    ctx->pc = 0x80BB77F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB77F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BB77F4: lwz     r31, 12(r1)
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
label_80BB77F8:
    ctx->pc = 0x80BB77F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB77F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BB77F8: lwz     r30, 8(r1)
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
label_80BB77FC:
    ctx->pc = 0x80BB77FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB77FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BB77FC: lwz     r0, 20(r1)
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
label_80BB7800:
    ctx->pc = 0x80BB7800u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BB7800u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BB7800: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BB7804:
    ctx->pc = 0x80BB7804u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7804u)) return;
    // 80BB7804: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80BB7808:
    ctx->pc = 0x80BB7808u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7808u)) return;
    // 80BB7808: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BB6260;
        }
    }

label_80BB780C:
    ctx->pc = 0x80BB780Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB780Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BB780C: stwu     r1, -16(r1)
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
label_80BB7810:
    ctx->pc = 0x80BB7810u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7810u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80BB7810: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BB7814:
    ctx->pc = 0x80BB7814u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7814u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80BB7814: stw     r0, 20(r1)
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
label_80BB7818:
    ctx->pc = 0x80BB7818u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7818u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BB7818: stw     r31, 12(r1)
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
label_80BB781C:
    ctx->pc = 0x80BB781Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB781Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BB781C: stw     r30, 8(r1)
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
label_80BB7820:
    ctx->pc = 0x80BB7820u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7820u)) return;
    // 80BB7820: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80BB7824:
    ctx->pc = 0x80BB7824u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7824u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BB7824: lwz     r31, 32(r3)
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
label_80BB7828:
    ctx->pc = 0x80BB7828u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7828u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BB7828: stw     r30, 36(r31)
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
label_80BB782C:
    ctx->pc = 0x80BB782Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB782Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BB782C: stw     r5, 40(r31)
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
label_80BB7830:
    ctx->pc = 0x80BB7830u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7830u)) return;
    // 80BB7830: cmpwi   r5, 0
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

label_80BB7834:
    ctx->pc = 0x80BB7834u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7834u)) return;
    // 80BB7834: bc    12, 1, 0x80BB7844
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80BB7844;
        }
    }

label_80BB7838:
    ctx->pc = 0x80BB7838u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7838u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BB7838: lwz     r3, 16(r31)
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
label_80BB783C:
    ctx->pc = 0x80BB783Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB783Cu)) return;
    // 80BB783C: bl      0x80509BF8
    {
            ctx->lr = 0x80BB7840u;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80BB7840:
    ctx->pc = 0x80BB7840u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7840u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80BB7840: stw     r30, 32(r31)
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
label_80BB7844:
    ctx->pc = 0x80BB7844u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7844u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BB7844: lwz     r31, 12(r1)
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
label_80BB7848:
    ctx->pc = 0x80BB7848u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7848u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BB7848: lwz     r30, 8(r1)
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
label_80BB784C:
    ctx->pc = 0x80BB784Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB784Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BB784C: lwz     r0, 20(r1)
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
label_80BB7850:
    ctx->pc = 0x80BB7850u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BB7850u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BB7850: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BB7854:
    ctx->pc = 0x80BB7854u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7854u)) return;
    // 80BB7854: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80BB7858:
    ctx->pc = 0x80BB7858u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7858u)) return;
    // 80BB7858: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BB6260;
        }
    }

label_80BB785C:
    ctx->pc = 0x80BB785Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB785Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BB785C: stwu     r1, -16(r1)
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
label_80BB7860:
    ctx->pc = 0x80BB7860u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7860u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80BB7860: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BB7864:
    ctx->pc = 0x80BB7864u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7864u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80BB7864: stw     r0, 20(r1)
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
label_80BB7868:
    ctx->pc = 0x80BB7868u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7868u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BB7868: stw     r31, 12(r1)
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
label_80BB786C:
    ctx->pc = 0x80BB786Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB786Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BB786C: stw     r30, 8(r1)
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
label_80BB7870:
    ctx->pc = 0x80BB7870u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7870u)) return;
    // 80BB7870: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80BB7874:
    ctx->pc = 0x80BB7874u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7874u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BB7874: lwz     r31, 32(r3)
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
label_80BB7878:
    ctx->pc = 0x80BB7878u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7878u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BB7878: stw     r30, 48(r31)
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
label_80BB787C:
    ctx->pc = 0x80BB787Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB787Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BB787C: stw     r5, 52(r31)
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
label_80BB7880:
    ctx->pc = 0x80BB7880u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7880u)) return;
    // 80BB7880: cmpwi   r5, 0
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

label_80BB7884:
    ctx->pc = 0x80BB7884u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7884u)) return;
    // 80BB7884: bc    12, 1, 0x80BB7894
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80BB7894;
        }
    }

label_80BB7888:
    ctx->pc = 0x80BB7888u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7888u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BB7888: lwz     r3, 16(r31)
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
label_80BB788C:
    ctx->pc = 0x80BB788Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB788Cu)) return;
    // 80BB788C: bl      0x80509B94
    {
            ctx->lr = 0x80BB7890u;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80BB7890:
    ctx->pc = 0x80BB7890u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7890u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80BB7890: stw     r30, 44(r31)
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
label_80BB7894:
    ctx->pc = 0x80BB7894u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7894u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BB7894: lwz     r31, 12(r1)
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
label_80BB7898:
    ctx->pc = 0x80BB7898u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7898u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BB7898: lwz     r30, 8(r1)
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
label_80BB789C:
    ctx->pc = 0x80BB789Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB789Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BB789C: lwz     r0, 20(r1)
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
label_80BB78A0:
    ctx->pc = 0x80BB78A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BB78A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BB78A0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BB78A4:
    ctx->pc = 0x80BB78A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB78A4u)) return;
    // 80BB78A4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80BB78A8:
    ctx->pc = 0x80BB78A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB78A8u)) return;
    // 80BB78A8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BB6260;
        }
    }

label_80BB78AC:
    ctx->pc = 0x80BB78ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB78ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80BB78AC: stwu     r1, -16(r1)
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
label_80BB78B0:
    ctx->pc = 0x80BB78B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB78B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80BB78B0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BB78B4:
    ctx->pc = 0x80BB78B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB78B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BB78B4: stw     r0, 20(r1)
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
label_80BB78B8:
    ctx->pc = 0x80BB78B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB78B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BB78B8: stw     r31, 12(r1)
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
label_80BB78BC:
    ctx->pc = 0x80BB78BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB78BCu)) return;
    // 80BB78BC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80BB78C0:
    ctx->pc = 0x80BB78C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB78C0u)) return;
    // 80BB78C0: lis     r4, -27517
    ctx->gpr[4] = ((u32)(s32)(-27517) << 16);

label_80BB78C4:
    ctx->pc = 0x80BB78C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB78C4u)) return;
    // 80BB78C4: addi    r4, r4, -27980
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-27980);

label_80BB78C8:
    ctx->pc = 0x80BB78C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB78C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BB78C8: lwz     r0, 0(r4)
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
label_80BB78CC:
    ctx->pc = 0x80BB78CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB78CCu)) return;
    // 80BB78CC: cmplwi  r0, 0x0000
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

label_80BB78D0:
    ctx->pc = 0x80BB78D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB78D0u)) return;
    // 80BB78D0: bc    4, 2, 0x80BB78F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80BB78F4;
        }
    }

label_80BB78D4:
    ctx->pc = 0x80BB78D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB78D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BB78D4: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80BB78D8:
    ctx->pc = 0x80BB78D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB78D8u)) return;
    // 80BB78D8: bl      0x8050EEC0
    {
            ctx->lr = 0x80BB78DCu;
            ctx->pc = 0x8050EEC0u;
            return;
    }

label_80BB78DC:
    ctx->pc = 0x80BB78DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB78DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80BB78DC: lis     r4, -27517
    ctx->gpr[4] = ((u32)(s32)(-27517) << 16);

label_80BB78E0:
    ctx->pc = 0x80BB78E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB78E0u)) return;
    // 80BB78E0: addi    r4, r4, -27980
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-27980);

label_80BB78E4:
    ctx->pc = 0x80BB78E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB78E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BB78E4: stw     r3, 0(r4)
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
label_80BB78E8:
    ctx->pc = 0x80BB78E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB78E8u)) return;
    // 80BB78E8: lis     r3, -27517
    ctx->gpr[3] = ((u32)(s32)(-27517) << 16);

label_80BB78EC:
    ctx->pc = 0x80BB78ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB78ECu)) return;
    // 80BB78EC: addi    r3, r3, -27984
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-27984);

label_80BB78F0:
    ctx->pc = 0x80BB78F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB78F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80BB78F0: stw     r31, 0(r3)
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
label_80BB78F4:
    ctx->pc = 0x80BB78F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB78F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BB78F4: lwz     r31, 12(r1)
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
label_80BB78F8:
    ctx->pc = 0x80BB78F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB78F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BB78F8: lwz     r0, 20(r1)
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
label_80BB78FC:
    ctx->pc = 0x80BB78FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BB78FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BB78FC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BB7900:
    ctx->pc = 0x80BB7900u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7900u)) return;
    // 80BB7900: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80BB7904:
    ctx->pc = 0x80BB7904u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7904u)) return;
    // 80BB7904: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BB6260;
        }
    }

label_80BB7908:
    ctx->pc = 0x80BB7908u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7908u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80BB7908: stwu     r1, -32(r1)
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
label_80BB790C:
    ctx->pc = 0x80BB790Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB790Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BB790C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BB7910:
    ctx->pc = 0x80BB7910u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7910u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80BB7910: stw     r0, 36(r1)
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
label_80BB7914:
    ctx->pc = 0x80BB7914u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7914u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80BB7914: stw     r31, 28(r1)
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
label_80BB7918:
    ctx->pc = 0x80BB7918u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7918u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BB7918: stw     r30, 24(r1)
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
label_80BB791C:
    ctx->pc = 0x80BB791Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB791Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BB791C: stw     r29, 20(r1)
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
label_80BB7920:
    ctx->pc = 0x80BB7920u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7920u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BB7920: stw     r28, 16(r1)
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
label_80BB7924:
    ctx->pc = 0x80BB7924u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7924u)) return;
    // 80BB7924: lis     r3, -27517
    ctx->gpr[3] = ((u32)(s32)(-27517) << 16);

label_80BB7928:
    ctx->pc = 0x80BB7928u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7928u)) return;
    // 80BB7928: addi    r30, r3, -27980
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(-27980);

label_80BB792C:
    ctx->pc = 0x80BB792Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB792Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BB792C: lwz     r0, 0(r30)
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
label_80BB7930:
    ctx->pc = 0x80BB7930u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7930u)) return;
    // 80BB7930: cmplwi  r0, 0x0000
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

label_80BB7934:
    ctx->pc = 0x80BB7934u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7934u)) return;
    // 80BB7934: bc    12, 2, 0x80BB7994
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80BB7994;
        }
    }

label_80BB7938:
    ctx->pc = 0x80BB7938u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7938u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80BB7938: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_80BB793C:
    ctx->pc = 0x80BB793Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB793Cu)) return;
    // 80BB793C: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_80BB7940:
    ctx->pc = 0x80BB7940u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7940u)) return;
    // 80BB7940: lis     r3, -27517
    ctx->gpr[3] = ((u32)(s32)(-27517) << 16);

label_80BB7944:
    ctx->pc = 0x80BB7944u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7944u)) return;
    // 80BB7944: addi    r31, r3, -27984
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(-27984);

label_80BB7948:
    ctx->pc = 0x80BB7948u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7948u)) return;
    // 80BB7948: b       0x80BB7968
    {
            goto label_80BB7968;
    }

label_80BB794C:
    ctx->pc = 0x80BB794Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB794Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BB794C: lwz     r3, 0(r30)
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
label_80BB7950:
    ctx->pc = 0x80BB7950u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7950u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BB7950: lwzx    r3, r3, r29
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
label_80BB7954:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7954u)) return;
    // 80BB7954: cmplwi  r3, 0x0000
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

label_80BB7958:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7958u)) return;
    // 80BB7958: bc    12, 2, 0x80BB7960
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80BB7960;
        }
    }

label_80BB795C:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB795Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BB795C: bl      0x8050F9E0
    {
            ctx->lr = 0x80BB7960u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80BB7960:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7960u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BB7960: addi    r29, r29, 4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4);

label_80BB7964:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7964u)) return;
    // 80BB7964: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_80BB7968:
    ctx->pc = 0x80BB7968u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7968u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BB7968: lwz     r0, 0(r31)
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
label_80BB796C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB796Cu)) return;
    // 80BB796C: cmpw    r28, r0
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

label_80BB7970:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7970u)) return;
    // 80BB7970: bc    12, 0, 0x80BB794C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80BB794Cu;
                return;
            }
            goto label_80BB794C;
        }
    }

label_80BB7974:
    ctx->pc = 0x80BB7974u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7974u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80BB7974: lis     r3, -27517
    ctx->gpr[3] = ((u32)(s32)(-27517) << 16);

label_80BB7978:
    ctx->pc = 0x80BB7978u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7978u)) return;
    // 80BB7978: addi    r3, r3, -27980
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-27980);

label_80BB797C:
    ctx->pc = 0x80BB797Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB797Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BB797C: lwz     r3, 0(r3)
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
label_80BB7980:
    ctx->pc = 0x80BB7980u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7980u)) return;
    // 80BB7980: bl      0x8050ED40
    {
            ctx->lr = 0x80BB7984u;
            ctx->pc = 0x8050ED40u;
            return;
    }

label_80BB7984:
    ctx->pc = 0x80BB7984u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7984u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80BB7984: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80BB7988:
    ctx->pc = 0x80BB7988u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7988u)) return;
    // 80BB7988: lis     r3, -27517
    ctx->gpr[3] = ((u32)(s32)(-27517) << 16);

label_80BB798C:
    ctx->pc = 0x80BB798Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB798Cu)) return;
    // 80BB798C: addi    r3, r3, -27980
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-27980);

label_80BB7990:
    ctx->pc = 0x80BB7990u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7990u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80BB7990: stw     r0, 0(r3)
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
label_80BB7994:
    ctx->pc = 0x80BB7994u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7994u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80BB7994: lwz     r31, 28(r1)
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
label_80BB7998:
    ctx->pc = 0x80BB7998u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7998u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BB7998: lwz     r30, 24(r1)
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
label_80BB799C:
    ctx->pc = 0x80BB799Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB799Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BB799C: lwz     r29, 20(r1)
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
label_80BB79A0:
    ctx->pc = 0x80BB79A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB79A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BB79A0: lwz     r28, 16(r1)
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
label_80BB79A4:
    ctx->pc = 0x80BB79A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB79A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BB79A4: lwz     r0, 36(r1)
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
label_80BB79A8:
    ctx->pc = 0x80BB79A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BB79A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BB79A8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BB79AC:
    ctx->pc = 0x80BB79ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB79ACu)) return;
    // 80BB79AC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80BB79B0:
    ctx->pc = 0x80BB79B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB79B0u)) return;
    // 80BB79B0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BB6260;
        }
    }

label_80BB79B4:
    ctx->pc = 0x80BB79B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB79B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80BB79B4: stwu     r1, -16(r1)
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
label_80BB79B8:
    ctx->pc = 0x80BB79B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB79B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BB79B8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BB79BC:
    ctx->pc = 0x80BB79BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB79BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BB79BC: stw     r0, 20(r1)
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
label_80BB79C0:
    ctx->pc = 0x80BB79C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB79C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BB79C0: stw     r31, 12(r1)
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
label_80BB79C4:
    ctx->pc = 0x80BB79C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB79C4u)) return;
    // 80BB79C4: lis     r6, -27517
    ctx->gpr[6] = ((u32)(s32)(-27517) << 16);

label_80BB79C8:
    ctx->pc = 0x80BB79C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB79C8u)) return;
    // 80BB79C8: addi    r6, r6, -27984
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-27984);

label_80BB79CC:
    ctx->pc = 0x80BB79CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB79CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BB79CC: lwz     r0, 0(r6)
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
label_80BB79D0:
    ctx->pc = 0x80BB79D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB79D0u)) return;
    // 80BB79D0: cmpw    r3, r0
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

label_80BB79D4:
    ctx->pc = 0x80BB79D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB79D4u)) return;
    // 80BB79D4: bc    4, 0, 0x80BB7A10
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80BB7A10;
        }
    }

label_80BB79D8:
    ctx->pc = 0x80BB79D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB79D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80BB79D8: lis     r6, -27517
    ctx->gpr[6] = ((u32)(s32)(-27517) << 16);

label_80BB79DC:
    ctx->pc = 0x80BB79DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB79DCu)) return;
    // 80BB79DC: addi    r6, r6, -27980
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-27980);

label_80BB79E0:
    ctx->pc = 0x80BB79E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB79E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BB79E0: lwz     r6, 0(r6)
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
label_80BB79E4:
    ctx->pc = 0x80BB79E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB79E4u)) return;
    // 80BB79E4: rlwinm r31, r3, 2, 0, 29
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80BB79E8:
    ctx->pc = 0x80BB79E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB79E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BB79E8: lwzx    r0, r6, r31
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
label_80BB79EC:
    ctx->pc = 0x80BB79ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB79ECu)) return;
    // 80BB79EC: cmplwi  r0, 0x0000
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

label_80BB79F0:
    ctx->pc = 0x80BB79F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB79F0u)) return;
    // 80BB79F0: bc    4, 2, 0x80BB7A10
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80BB7A10;
        }
    }

label_80BB79F4:
    ctx->pc = 0x80BB79F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB79F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80BB79F4: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80BB79F8:
    ctx->pc = 0x80BB79F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB79F8u)) return;
    // 80BB79F8: or   r4, r5, r5
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80BB79FC:
    ctx->pc = 0x80BB79FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB79FCu)) return;
    // 80BB79FC: bl      0x80BB7700
    {
            ctx->lr = 0x80BB7A00u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80BB7700u;
                return;
            }
            goto label_80BB7700;
    }

label_80BB7A00:
    ctx->pc = 0x80BB7A00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7A00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80BB7A00: lis     r4, -27517
    ctx->gpr[4] = ((u32)(s32)(-27517) << 16);

label_80BB7A04:
    ctx->pc = 0x80BB7A04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7A04u)) return;
    // 80BB7A04: addi    r4, r4, -27980
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-27980);

label_80BB7A08:
    ctx->pc = 0x80BB7A08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7A08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BB7A08: lwz     r4, 0(r4)
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
label_80BB7A0C:
    ctx->pc = 0x80BB7A0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7A0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80BB7A0C: stwx    r3, r4, r31
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
label_80BB7A10:
    ctx->pc = 0x80BB7A10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7A10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BB7A10: lwz     r31, 12(r1)
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
label_80BB7A14:
    ctx->pc = 0x80BB7A14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7A14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BB7A14: lwz     r0, 20(r1)
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
label_80BB7A18:
    ctx->pc = 0x80BB7A18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BB7A18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BB7A18: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BB7A1C:
    ctx->pc = 0x80BB7A1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7A1Cu)) return;
    // 80BB7A1C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80BB7A20:
    ctx->pc = 0x80BB7A20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7A20u)) return;
    // 80BB7A20: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BB6260;
        }
    }

label_80BB7A24:
    ctx->pc = 0x80BB7A24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7A24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80BB7A24: stwu     r1, -16(r1)
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
label_80BB7A28:
    ctx->pc = 0x80BB7A28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7A28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BB7A28: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BB7A2C:
    ctx->pc = 0x80BB7A2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7A2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BB7A2C: stw     r0, 20(r1)
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
label_80BB7A30:
    ctx->pc = 0x80BB7A30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7A30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BB7A30: stw     r31, 12(r1)
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
label_80BB7A34:
    ctx->pc = 0x80BB7A34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7A34u)) return;
    // 80BB7A34: lis     r4, -27517
    ctx->gpr[4] = ((u32)(s32)(-27517) << 16);

label_80BB7A38:
    ctx->pc = 0x80BB7A38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7A38u)) return;
    // 80BB7A38: addi    r4, r4, -27984
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-27984);

label_80BB7A3C:
    ctx->pc = 0x80BB7A3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7A3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BB7A3C: lwz     r0, 0(r4)
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
label_80BB7A40:
    ctx->pc = 0x80BB7A40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7A40u)) return;
    // 80BB7A40: cmpw    r3, r0
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

label_80BB7A44:
    ctx->pc = 0x80BB7A44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7A44u)) return;
    // 80BB7A44: bc    4, 0, 0x80BB7A7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80BB7A7C;
        }
    }

label_80BB7A48:
    ctx->pc = 0x80BB7A48u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7A48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80BB7A48: lis     r4, -27517
    ctx->gpr[4] = ((u32)(s32)(-27517) << 16);

label_80BB7A4C:
    ctx->pc = 0x80BB7A4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7A4Cu)) return;
    // 80BB7A4C: addi    r4, r4, -27980
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-27980);

label_80BB7A50:
    ctx->pc = 0x80BB7A50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7A50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BB7A50: lwz     r4, 0(r4)
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
label_80BB7A54:
    ctx->pc = 0x80BB7A54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7A54u)) return;
    // 80BB7A54: rlwinm r31, r3, 2, 0, 29
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80BB7A58:
    ctx->pc = 0x80BB7A58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7A58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BB7A58: lwzx    r3, r4, r31
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
label_80BB7A5C:
    ctx->pc = 0x80BB7A5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7A5Cu)) return;
    // 80BB7A5C: cmplwi  r3, 0x0000
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

label_80BB7A60:
    ctx->pc = 0x80BB7A60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7A60u)) return;
    // 80BB7A60: bc    12, 2, 0x80BB7A7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80BB7A7C;
        }
    }

label_80BB7A64:
    ctx->pc = 0x80BB7A64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7A64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BB7A64: bl      0x8050F9E0
    {
            ctx->lr = 0x80BB7A68u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80BB7A68:
    ctx->pc = 0x80BB7A68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7A68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80BB7A68: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80BB7A6C:
    ctx->pc = 0x80BB7A6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7A6Cu)) return;
    // 80BB7A6C: lis     r3, -27517
    ctx->gpr[3] = ((u32)(s32)(-27517) << 16);

label_80BB7A70:
    ctx->pc = 0x80BB7A70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7A70u)) return;
    // 80BB7A70: addi    r3, r3, -27980
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-27980);

label_80BB7A74:
    ctx->pc = 0x80BB7A74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7A74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BB7A74: lwz     r3, 0(r3)
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
label_80BB7A78:
    ctx->pc = 0x80BB7A78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7A78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80BB7A78: stwx    r0, r3, r31
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
label_80BB7A7C:
    ctx->pc = 0x80BB7A7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7A7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BB7A7C: lwz     r31, 12(r1)
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
label_80BB7A80:
    ctx->pc = 0x80BB7A80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7A80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BB7A80: lwz     r0, 20(r1)
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
label_80BB7A84:
    ctx->pc = 0x80BB7A84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BB7A84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BB7A84: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BB7A88:
    ctx->pc = 0x80BB7A88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7A88u)) return;
    // 80BB7A88: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80BB7A8C:
    ctx->pc = 0x80BB7A8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7A8Cu)) return;
    // 80BB7A8C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BB6260;
        }
    }

label_80BB7A90:
    ctx->pc = 0x80BB7A90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7A90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BB7A90: stwu     r1, -16(r1)
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
label_80BB7A94:
    ctx->pc = 0x80BB7A94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7A94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BB7A94: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BB7A98:
    ctx->pc = 0x80BB7A98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7A98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BB7A98: stw     r0, 20(r1)
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
label_80BB7A9C:
    ctx->pc = 0x80BB7A9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7A9Cu)) return;
    // 80BB7A9C: lis     r6, -27517
    ctx->gpr[6] = ((u32)(s32)(-27517) << 16);

label_80BB7AA0:
    ctx->pc = 0x80BB7AA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7AA0u)) return;
    // 80BB7AA0: addi    r6, r6, -27984
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-27984);

label_80BB7AA4:
    ctx->pc = 0x80BB7AA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7AA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BB7AA4: lwz     r0, 0(r6)
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
label_80BB7AA8:
    ctx->pc = 0x80BB7AA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7AA8u)) return;
    // 80BB7AA8: cmpw    r3, r0
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

label_80BB7AAC:
    ctx->pc = 0x80BB7AACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7AACu)) return;
    // 80BB7AAC: bc    4, 0, 0x80BB7AD0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80BB7AD0;
        }
    }

label_80BB7AB0:
    ctx->pc = 0x80BB7AB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7AB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80BB7AB0: lis     r6, -27517
    ctx->gpr[6] = ((u32)(s32)(-27517) << 16);

label_80BB7AB4:
    ctx->pc = 0x80BB7AB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7AB4u)) return;
    // 80BB7AB4: addi    r6, r6, -27980
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-27980);

label_80BB7AB8:
    ctx->pc = 0x80BB7AB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7AB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BB7AB8: lwz     r6, 0(r6)
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
label_80BB7ABC:
    ctx->pc = 0x80BB7ABCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7ABCu)) return;
    // 80BB7ABC: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80BB7AC0:
    ctx->pc = 0x80BB7AC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7AC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BB7AC0: lwzx    r3, r6, r0
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
label_80BB7AC4:
    ctx->pc = 0x80BB7AC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7AC4u)) return;
    // 80BB7AC4: cmplwi  r3, 0x0000
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

label_80BB7AC8:
    ctx->pc = 0x80BB7AC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7AC8u)) return;
    // 80BB7AC8: bc    12, 2, 0x80BB7AD0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80BB7AD0;
        }
    }

label_80BB7ACC:
    ctx->pc = 0x80BB7ACCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7ACCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BB7ACC: bl      0x80BB77BC
    {
            ctx->lr = 0x80BB7AD0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80BB77BCu;
                return;
            }
            goto label_80BB77BC;
    }

label_80BB7AD0:
    ctx->pc = 0x80BB7AD0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7AD0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BB7AD0: lwz     r0, 20(r1)
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
label_80BB7AD4:
    ctx->pc = 0x80BB7AD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BB7AD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BB7AD4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BB7AD8:
    ctx->pc = 0x80BB7AD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7AD8u)) return;
    // 80BB7AD8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80BB7ADC:
    ctx->pc = 0x80BB7ADCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7ADCu)) return;
    // 80BB7ADC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BB6260;
        }
    }

label_80BB7AE0:
    ctx->pc = 0x80BB7AE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7AE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BB7AE0: stwu     r1, -16(r1)
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
label_80BB7AE4:
    ctx->pc = 0x80BB7AE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7AE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BB7AE4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BB7AE8:
    ctx->pc = 0x80BB7AE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7AE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BB7AE8: stw     r0, 20(r1)
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
label_80BB7AEC:
    ctx->pc = 0x80BB7AECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7AECu)) return;
    // 80BB7AEC: lis     r6, -27517
    ctx->gpr[6] = ((u32)(s32)(-27517) << 16);

label_80BB7AF0:
    ctx->pc = 0x80BB7AF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7AF0u)) return;
    // 80BB7AF0: addi    r6, r6, -27984
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-27984);

label_80BB7AF4:
    ctx->pc = 0x80BB7AF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7AF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BB7AF4: lwz     r0, 0(r6)
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
label_80BB7AF8:
    ctx->pc = 0x80BB7AF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7AF8u)) return;
    // 80BB7AF8: cmpw    r3, r0
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

label_80BB7AFC:
    ctx->pc = 0x80BB7AFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7AFCu)) return;
    // 80BB7AFC: bc    4, 0, 0x80BB7B20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80BB7B20;
        }
    }

label_80BB7B00:
    ctx->pc = 0x80BB7B00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7B00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80BB7B00: lis     r6, -27517
    ctx->gpr[6] = ((u32)(s32)(-27517) << 16);

label_80BB7B04:
    ctx->pc = 0x80BB7B04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7B04u)) return;
    // 80BB7B04: addi    r6, r6, -27980
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-27980);

label_80BB7B08:
    ctx->pc = 0x80BB7B08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7B08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BB7B08: lwz     r6, 0(r6)
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
label_80BB7B0C:
    ctx->pc = 0x80BB7B0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7B0Cu)) return;
    // 80BB7B0C: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80BB7B10:
    ctx->pc = 0x80BB7B10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7B10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BB7B10: lwzx    r3, r6, r0
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
label_80BB7B14:
    ctx->pc = 0x80BB7B14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7B14u)) return;
    // 80BB7B14: cmplwi  r3, 0x0000
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

label_80BB7B18:
    ctx->pc = 0x80BB7B18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7B18u)) return;
    // 80BB7B18: bc    12, 2, 0x80BB7B20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80BB7B20;
        }
    }

label_80BB7B1C:
    ctx->pc = 0x80BB7B1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7B1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BB7B1C: bl      0x80BB780C
    {
            ctx->lr = 0x80BB7B20u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80BB780Cu;
                return;
            }
            goto label_80BB780C;
    }

label_80BB7B20:
    ctx->pc = 0x80BB7B20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7B20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BB7B20: lwz     r0, 20(r1)
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
label_80BB7B24:
    ctx->pc = 0x80BB7B24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BB7B24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BB7B24: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BB7B28:
    ctx->pc = 0x80BB7B28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7B28u)) return;
    // 80BB7B28: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80BB7B2C:
    ctx->pc = 0x80BB7B2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7B2Cu)) return;
    // 80BB7B2C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BB6260;
        }
    }

label_80BB7B30:
    ctx->pc = 0x80BB7B30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7B30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BB7B30: stwu     r1, -16(r1)
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
label_80BB7B34:
    ctx->pc = 0x80BB7B34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7B34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BB7B34: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BB7B38:
    ctx->pc = 0x80BB7B38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7B38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BB7B38: stw     r0, 20(r1)
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
label_80BB7B3C:
    ctx->pc = 0x80BB7B3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7B3Cu)) return;
    // 80BB7B3C: lis     r6, -27517
    ctx->gpr[6] = ((u32)(s32)(-27517) << 16);

label_80BB7B40:
    ctx->pc = 0x80BB7B40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7B40u)) return;
    // 80BB7B40: addi    r6, r6, -27984
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-27984);

label_80BB7B44:
    ctx->pc = 0x80BB7B44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7B44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BB7B44: lwz     r0, 0(r6)
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
label_80BB7B48:
    ctx->pc = 0x80BB7B48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7B48u)) return;
    // 80BB7B48: cmpw    r3, r0
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

label_80BB7B4C:
    ctx->pc = 0x80BB7B4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7B4Cu)) return;
    // 80BB7B4C: bc    4, 0, 0x80BB7B70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80BB7B70;
        }
    }

label_80BB7B50:
    ctx->pc = 0x80BB7B50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7B50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80BB7B50: lis     r6, -27517
    ctx->gpr[6] = ((u32)(s32)(-27517) << 16);

label_80BB7B54:
    ctx->pc = 0x80BB7B54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7B54u)) return;
    // 80BB7B54: addi    r6, r6, -27980
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-27980);

label_80BB7B58:
    ctx->pc = 0x80BB7B58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7B58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BB7B58: lwz     r6, 0(r6)
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
label_80BB7B5C:
    ctx->pc = 0x80BB7B5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7B5Cu)) return;
    // 80BB7B5C: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80BB7B60:
    ctx->pc = 0x80BB7B60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7B60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BB7B60: lwzx    r3, r6, r0
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
label_80BB7B64:
    ctx->pc = 0x80BB7B64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7B64u)) return;
    // 80BB7B64: cmplwi  r3, 0x0000
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

label_80BB7B68:
    ctx->pc = 0x80BB7B68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7B68u)) return;
    // 80BB7B68: bc    12, 2, 0x80BB7B70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80BB7B70;
        }
    }

label_80BB7B6C:
    ctx->pc = 0x80BB7B6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7B6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BB7B6C: bl      0x80BB785C
    {
            ctx->lr = 0x80BB7B70u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80BB785Cu;
                return;
            }
            goto label_80BB785C;
    }

label_80BB7B70:
    ctx->pc = 0x80BB7B70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7B70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BB7B70: lwz     r0, 20(r1)
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
label_80BB7B74:
    ctx->pc = 0x80BB7B74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BB7B74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BB7B74: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BB7B78:
    ctx->pc = 0x80BB7B78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7B78u)) return;
    // 80BB7B78: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80BB7B7C:
    ctx->pc = 0x80BB7B7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7B7Cu)) return;
    // 80BB7B7C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BB6260;
        }
    }

label_80BB7B80:
    ctx->pc = 0x80BB7B80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7B80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80BB7B80: stwu     r1, -32(r1)
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
label_80BB7B84:
    ctx->pc = 0x80BB7B84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7B84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80BB7B84: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BB7B88:
    ctx->pc = 0x80BB7B88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7B88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BB7B88: stw     r0, 36(r1)
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
label_80BB7B8C:
    ctx->pc = 0x80BB7B8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7B8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80BB7B8C: stw     r31, 28(r1)
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
label_80BB7B90:
    ctx->pc = 0x80BB7B90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7B90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80BB7B90: stw     r30, 24(r1)
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
label_80BB7B94:
    ctx->pc = 0x80BB7B94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7B94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BB7B94: stw     r29, 20(r1)
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
label_80BB7B98:
    ctx->pc = 0x80BB7B98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7B98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BB7B98: stw     r28, 16(r1)
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
label_80BB7B9C:
    ctx->pc = 0x80BB7B9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7B9Cu)) return;
    // 80BB7B9C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80BB7BA0:
    ctx->pc = 0x80BB7BA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7BA0u)) return;
    // 80BB7BA0: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80BB7BA4:
    ctx->pc = 0x80BB7BA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7BA4u)) return;
    // 80BB7BA4: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80BB7BA8:
    ctx->pc = 0x80BB7BA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7BA8u)) return;
    // 80BB7BA8: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_80BB7BAC:
    ctx->pc = 0x80BB7BACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7BACu)) return;
    // 80BB7BAC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BB7BB0:
    ctx->pc = 0x80BB7BB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7BB0u)) return;
    // 80BB7BB0: bl      0x80401DB0
    {
            ctx->lr = 0x80BB7BB4u;
            ctx->pc = 0x80401DB0u;
            return;
    }

label_80BB7BB4:
    ctx->pc = 0x80BB7BB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7BB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80BB7BB4: lis     r4, -27517
    ctx->gpr[4] = ((u32)(s32)(-27517) << 16);

label_80BB7BB8:
    ctx->pc = 0x80BB7BB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7BB8u)) return;
    // 80BB7BB8: addi    r4, r4, -27976
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-27976);

label_80BB7BBC:
    ctx->pc = 0x80BB7BBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7BBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BB7BBC: lwz     r0, 0(r4)
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
label_80BB7BC0:
    ctx->pc = 0x80BB7BC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7BC0u)) return;
    // 80BB7BC0: add   r4, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80BB7BC4:
    ctx->pc = 0x80BB7BC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7BC4u)) return;
    // 80BB7BC4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80BB7BC8:
    ctx->pc = 0x80BB7BC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7BC8u)) return;
    // 80BB7BC8: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80BB7BCC:
    ctx->pc = 0x80BB7BCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7BCCu)) return;
    // 80BB7BCC: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80BB7BD0:
    ctx->pc = 0x80BB7BD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7BD0u)) return;
    // 80BB7BD0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80BB7BD4:
    ctx->pc = 0x80BB7BD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7BD4u)) return;
    // 80BB7BD4: li      r7, 120
    ctx->gpr[7] = (u32)(s32)(120);

label_80BB7BD8:
    ctx->pc = 0x80BB7BD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7BD8u)) return;
    // 80BB7BD8: bl      0x8050A0D4
    {
            ctx->lr = 0x80BB7BDCu;
            ctx->pc = 0x8050A0D4u;
            return;
    }

label_80BB7BDC:
    ctx->pc = 0x80BB7BDCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7BDCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80BB7BDC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80BB7BE0:
    ctx->pc = 0x80BB7BE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7BE0u)) return;
    // 80BB7BE0: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80BB7BE4:
    ctx->pc = 0x80BB7BE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7BE4u)) return;
    // 80BB7BE4: bl      0x80509C74
    {
            ctx->lr = 0x80BB7BE8u;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80BB7BE8:
    ctx->pc = 0x80BB7BE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7BE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80BB7BE8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80BB7BEC:
    ctx->pc = 0x80BB7BECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7BECu)) return;
    // 80BB7BEC: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80BB7BF0:
    ctx->pc = 0x80BB7BF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7BF0u)) return;
    // 80BB7BF0: bl      0x80509BF8
    {
            ctx->lr = 0x80BB7BF4u;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80BB7BF4:
    ctx->pc = 0x80BB7BF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7BF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80BB7BF4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80BB7BF8:
    ctx->pc = 0x80BB7BF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7BF8u)) return;
    // 80BB7BF8: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80BB7BFC:
    ctx->pc = 0x80BB7BFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7BFCu)) return;
    // 80BB7BFC: bl      0x80509B94
    {
            ctx->lr = 0x80BB7C00u;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80BB7C00:
    ctx->pc = 0x80BB7C00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BB7C00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80BB7C00: lis     r3, -27517
    ctx->gpr[3] = ((u32)(s32)(-27517) << 16);

label_80BB7C04:
    ctx->pc = 0x80BB7C04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7C04u)) return;
    // 80BB7C04: addi    r4, r3, -27976
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-27976);

label_80BB7C08:
    ctx->pc = 0x80BB7C08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7C08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80BB7C08: lwz     r3, 0(r4)
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
label_80BB7C0C:
    ctx->pc = 0x80BB7C0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7C0Cu)) return;
    // 80BB7C0C: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_80BB7C10:
    ctx->pc = 0x80BB7C10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7C10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80BB7C10: stw     r0, 0(r4)
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
label_80BB7C14:
    ctx->pc = 0x80BB7C14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7C14u)) return;
    // 80BB7C14: rlwinm r0, r0, 0, 27, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000001Fu;
    }

label_80BB7C18:
    ctx->pc = 0x80BB7C18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7C18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80BB7C18: stw     r0, 0(r4)
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
label_80BB7C1C:
    ctx->pc = 0x80BB7C1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7C1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80BB7C1C: lwz     r31, 28(r1)
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
label_80BB7C20:
    ctx->pc = 0x80BB7C20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7C20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BB7C20: lwz     r30, 24(r1)
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
label_80BB7C24:
    ctx->pc = 0x80BB7C24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7C24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BB7C24: lwz     r29, 20(r1)
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
label_80BB7C28:
    ctx->pc = 0x80BB7C28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7C28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BB7C28: lwz     r28, 16(r1)
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
label_80BB7C2C:
    ctx->pc = 0x80BB7C2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7C2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BB7C2C: lwz     r0, 36(r1)
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
label_80BB7C30:
    ctx->pc = 0x80BB7C30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BB7C30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BB7C30: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BB7C34:
    ctx->pc = 0x80BB7C34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7C34u)) return;
    // 80BB7C34: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80BB7C38:
    ctx->pc = 0x80BB7C38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BB7C38u)) return;
    // 80BB7C38: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BB6260;
        }
    }

    ctx->pc = 0x80BB7C3Cu;
    return;
return_dispatch_80BB6260:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80BB629Cu: goto label_80BB629C;
    case 0x80BB62A4u: goto label_80BB62A4;
    case 0x80BB62A8u: goto label_80BB62A8;
    case 0x80BB62ACu: goto label_80BB62AC;
    case 0x80BB62B0u: goto label_80BB62B0;
    case 0x80BB62B8u: goto label_80BB62B8;
    case 0x80BB62E8u: goto label_80BB62E8;
    case 0x80BB6304u: goto label_80BB6304;
    case 0x80BB6334u: goto label_80BB6334;
    case 0x80BB6350u: goto label_80BB6350;
    case 0x80BB6360u: goto label_80BB6360;
    case 0x80BB6368u: goto label_80BB6368;
    case 0x80BB6390u: goto label_80BB6390;
    case 0x80BB6398u: goto label_80BB6398;
    case 0x80BB63ACu: goto label_80BB63AC;
    case 0x80BB63B4u: goto label_80BB63B4;
    case 0x80BB63BCu: goto label_80BB63BC;
    case 0x80BB63C0u: goto label_80BB63C0;
    case 0x80BB63C8u: goto label_80BB63C8;
    case 0x80BB63F0u: goto label_80BB63F0;
    case 0x80BB642Cu: goto label_80BB642C;
    case 0x80BB6468u: goto label_80BB6468;
    case 0x80BB64A4u: goto label_80BB64A4;
    case 0x80BB64E0u: goto label_80BB64E0;
    case 0x80BB651Cu: goto label_80BB651C;
    case 0x80BB6558u: goto label_80BB6558;
    case 0x80BB6594u: goto label_80BB6594;
    case 0x80BB65D0u: goto label_80BB65D0;
    case 0x80BB660Cu: goto label_80BB660C;
    case 0x80BB6648u: goto label_80BB6648;
    case 0x80BB6650u: goto label_80BB6650;
    case 0x80BB6664u: goto label_80BB6664;
    case 0x80BB6674u: goto label_80BB6674;
    case 0x80BB66B0u: goto label_80BB66B0;
    case 0x80BB66C4u: goto label_80BB66C4;
    case 0x80BB66D4u: goto label_80BB66D4;
    case 0x80BB6710u: goto label_80BB6710;
    case 0x80BB6724u: goto label_80BB6724;
    case 0x80BB6734u: goto label_80BB6734;
    case 0x80BB6770u: goto label_80BB6770;
    case 0x80BB6784u: goto label_80BB6784;
    case 0x80BB6794u: goto label_80BB6794;
    case 0x80BB67D0u: goto label_80BB67D0;
    case 0x80BB67E4u: goto label_80BB67E4;
    case 0x80BB67F4u: goto label_80BB67F4;
    case 0x80BB6830u: goto label_80BB6830;
    case 0x80BB6844u: goto label_80BB6844;
    case 0x80BB6854u: goto label_80BB6854;
    case 0x80BB6890u: goto label_80BB6890;
    case 0x80BB68A4u: goto label_80BB68A4;
    case 0x80BB68B4u: goto label_80BB68B4;
    case 0x80BB68F0u: goto label_80BB68F0;
    case 0x80BB6904u: goto label_80BB6904;
    case 0x80BB6914u: goto label_80BB6914;
    case 0x80BB6950u: goto label_80BB6950;
    case 0x80BB6964u: goto label_80BB6964;
    case 0x80BB6974u: goto label_80BB6974;
    case 0x80BB69B0u: goto label_80BB69B0;
    case 0x80BB69C4u: goto label_80BB69C4;
    case 0x80BB69D4u: goto label_80BB69D4;
    case 0x80BB6A10u: goto label_80BB6A10;
    case 0x80BB6A18u: goto label_80BB6A18;
    case 0x80BB6A1Cu: goto label_80BB6A1C;
    case 0x80BB6A24u: goto label_80BB6A24;
    case 0x80BB6A30u: goto label_80BB6A30;
    case 0x80BB6A38u: goto label_80BB6A38;
    case 0x80BB6A40u: goto label_80BB6A40;
    case 0x80BB6A44u: goto label_80BB6A44;
    case 0x80BB6A60u: goto label_80BB6A60;
    case 0x80BB6A6Cu: goto label_80BB6A6C;
    case 0x80BB6A94u: goto label_80BB6A94;
    case 0x80BB6AB0u: goto label_80BB6AB0;
    case 0x80BB6ABCu: goto label_80BB6ABC;
    case 0x80BB6AC4u: goto label_80BB6AC4;
    case 0x80BB6ACCu: goto label_80BB6ACC;
    case 0x80BB6AD0u: goto label_80BB6AD0;
    case 0x80BB6B00u: goto label_80BB6B00;
    case 0x80BB6B18u: goto label_80BB6B18;
    case 0x80BB6B48u: goto label_80BB6B48;
    case 0x80BB6B60u: goto label_80BB6B60;
    case 0x80BB6B68u: goto label_80BB6B68;
    case 0x80BB6B70u: goto label_80BB6B70;
    case 0x80BB6B78u: goto label_80BB6B78;
    case 0x80BB6B80u: goto label_80BB6B80;
    case 0x80BB6B88u: goto label_80BB6B88;
    case 0x80BB6B90u: goto label_80BB6B90;
    case 0x80BB6BC0u: goto label_80BB6BC0;
    case 0x80BB6BDCu: goto label_80BB6BDC;
    case 0x80BB6C0Cu: goto label_80BB6C0C;
    case 0x80BB6C28u: goto label_80BB6C28;
    case 0x80BB6C5Cu: goto label_80BB6C5C;
    case 0x80BB6C78u: goto label_80BB6C78;
    case 0x80BB6CACu: goto label_80BB6CAC;
    case 0x80BB6CC8u: goto label_80BB6CC8;
    case 0x80BB6CFCu: goto label_80BB6CFC;
    case 0x80BB6D18u: goto label_80BB6D18;
    case 0x80BB6D4Cu: goto label_80BB6D4C;
    case 0x80BB6D68u: goto label_80BB6D68;
    case 0x80BB6D9Cu: goto label_80BB6D9C;
    case 0x80BB6DB8u: goto label_80BB6DB8;
    case 0x80BB6DECu: goto label_80BB6DEC;
    case 0x80BB6E08u: goto label_80BB6E08;
    case 0x80BB6E3Cu: goto label_80BB6E3C;
    case 0x80BB6E58u: goto label_80BB6E58;
    case 0x80BB6E8Cu: goto label_80BB6E8C;
    case 0x80BB6EA8u: goto label_80BB6EA8;
    case 0x80BB6EDCu: goto label_80BB6EDC;
    case 0x80BB6EF8u: goto label_80BB6EF8;
    case 0x80BB6F2Cu: goto label_80BB6F2C;
    case 0x80BB6F48u: goto label_80BB6F48;
    case 0x80BB6F50u: goto label_80BB6F50;
    case 0x80BB6F58u: goto label_80BB6F58;
    case 0x80BB6F80u: goto label_80BB6F80;
    case 0x80BB6F88u: goto label_80BB6F88;
    case 0x80BB6F90u: goto label_80BB6F90;
    case 0x80BB6FB8u: goto label_80BB6FB8;
    case 0x80BB6FC0u: goto label_80BB6FC0;
    case 0x80BB6FC8u: goto label_80BB6FC8;
    case 0x80BB6FD0u: goto label_80BB6FD0;
    case 0x80BB6FD8u: goto label_80BB6FD8;
    case 0x80BB6FDCu: goto label_80BB6FDC;
    case 0x80BB6FF8u: goto label_80BB6FF8;
    case 0x80BB7004u: goto label_80BB7004;
    case 0x80BB7020u: goto label_80BB7020;
    case 0x80BB702Cu: goto label_80BB702C;
    case 0x80BB7054u: goto label_80BB7054;
    case 0x80BB705Cu: goto label_80BB705C;
    case 0x80BB7064u: goto label_80BB7064;
    case 0x80BB706Cu: goto label_80BB706C;
    case 0x80BB7070u: goto label_80BB7070;
    case 0x80BB7078u: goto label_80BB7078;
    case 0x80BB7084u: goto label_80BB7084;
    case 0x80BB708Cu: goto label_80BB708C;
    case 0x80BB7090u: goto label_80BB7090;
    case 0x80BB7098u: goto label_80BB7098;
    case 0x80BB70C0u: goto label_80BB70C0;
    case 0x80BB70C8u: goto label_80BB70C8;
    case 0x80BB70D0u: goto label_80BB70D0;
    case 0x80BB70D4u: goto label_80BB70D4;
    case 0x80BB7104u: goto label_80BB7104;
    case 0x80BB7120u: goto label_80BB7120;
    case 0x80BB7128u: goto label_80BB7128;
    case 0x80BB712Cu: goto label_80BB712C;
    case 0x80BB713Cu: goto label_80BB713C;
    case 0x80BB7144u: goto label_80BB7144;
    case 0x80BB7154u: goto label_80BB7154;
    case 0x80BB7184u: goto label_80BB7184;
    case 0x80BB719Cu: goto label_80BB719C;
    case 0x80BB71A4u: goto label_80BB71A4;
    case 0x80BB71B4u: goto label_80BB71B4;
    case 0x80BB71E4u: goto label_80BB71E4;
    case 0x80BB71F8u: goto label_80BB71F8;
    case 0x80BB7200u: goto label_80BB7200;
    case 0x80BB7208u: goto label_80BB7208;
    case 0x80BB7214u: goto label_80BB7214;
    case 0x80BB7220u: goto label_80BB7220;
    case 0x80BB722Cu: goto label_80BB722C;
    case 0x80BB7238u: goto label_80BB7238;
    case 0x80BB7244u: goto label_80BB7244;
    case 0x80BB7250u: goto label_80BB7250;
    case 0x80BB725Cu: goto label_80BB725C;
    case 0x80BB7268u: goto label_80BB7268;
    case 0x80BB7274u: goto label_80BB7274;
    case 0x80BB7280u: goto label_80BB7280;
    case 0x80BB7298u: goto label_80BB7298;
    case 0x80BB72ACu: goto label_80BB72AC;
    case 0x80BB72B0u: goto label_80BB72B0;
    case 0x80BB72D4u: goto label_80BB72D4;
    case 0x80BB7360u: goto label_80BB7360;
    case 0x80BB736Cu: goto label_80BB736C;
    case 0x80BB73FCu: goto label_80BB73FC;
    case 0x80BB7404u: goto label_80BB7404;
    case 0x80BB7428u: goto label_80BB7428;
    case 0x80BB7490u: goto label_80BB7490;
    case 0x80BB74D8u: goto label_80BB74D8;
    case 0x80BB7544u: goto label_80BB7544;
    case 0x80BB75F4u: goto label_80BB75F4;
    case 0x80BB7654u: goto label_80BB7654;
    case 0x80BB7694u: goto label_80BB7694;
    case 0x80BB76D4u: goto label_80BB76D4;
    case 0x80BB7730u: goto label_80BB7730;
    case 0x80BB7754u: goto label_80BB7754;
    case 0x80BB77F0u: goto label_80BB77F0;
    case 0x80BB7840u: goto label_80BB7840;
    case 0x80BB7890u: goto label_80BB7890;
    case 0x80BB78DCu: goto label_80BB78DC;
    case 0x80BB7960u: goto label_80BB7960;
    case 0x80BB7984u: goto label_80BB7984;
    case 0x80BB7A00u: goto label_80BB7A00;
    case 0x80BB7A68u: goto label_80BB7A68;
    case 0x80BB7AD0u: goto label_80BB7AD0;
    case 0x80BB7B20u: goto label_80BB7B20;
    case 0x80BB7B70u: goto label_80BB7B70;
    case 0x80BB7BB4u: goto label_80BB7BB4;
    case 0x80BB7BDCu: goto label_80BB7BDC;
    case 0x80BB7BE8u: goto label_80BB7BE8;
    case 0x80BB7BF4u: goto label_80BB7BF4;
    case 0x80BB7C00u: goto label_80BB7C00;
    default: return;
    }
}

