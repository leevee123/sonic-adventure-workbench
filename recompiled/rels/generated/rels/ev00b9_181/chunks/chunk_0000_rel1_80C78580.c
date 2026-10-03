// DolRecomp output
#include "../generated.h"

void func_80C78580(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80C78580[1532] = {
        &&label_80C78580,
        &&label_80C78584,
        &&label_80C78588,
        &&label_80C7858C,
        &&label_80C78590,
        &&label_80C78594,
        &&label_80C78598,
        &&label_80C7859C,
        &&label_80C785A0,
        &&label_80C785A4,
        &&label_80C785A8,
        &&label_80C785AC,
        &&label_80C785B0,
        &&label_80C785B4,
        &&label_80C785B8,
        &&label_80C785BC,
        &&label_80C785C0,
        &&label_80C785C4,
        &&label_80C785C8,
        &&label_80C785CC,
        &&label_80C785D0,
        &&label_80C785D4,
        &&label_80C785D8,
        &&label_80C785DC,
        &&label_80C785E0,
        &&label_80C785E4,
        &&label_80C785E8,
        &&label_80C785EC,
        &&label_80C785F0,
        &&label_80C785F4,
        &&label_80C785F8,
        &&label_80C785FC,
        &&label_80C78600,
        &&label_80C78604,
        &&label_80C78608,
        &&label_80C7860C,
        &&label_80C78610,
        &&label_80C78614,
        &&label_80C78618,
        &&label_80C7861C,
        &&label_80C78620,
        &&label_80C78624,
        &&label_80C78628,
        &&label_80C7862C,
        &&label_80C78630,
        &&label_80C78634,
        &&label_80C78638,
        &&label_80C7863C,
        &&label_80C78640,
        &&label_80C78644,
        &&label_80C78648,
        &&label_80C7864C,
        &&label_80C78650,
        &&label_80C78654,
        &&label_80C78658,
        &&label_80C7865C,
        &&label_80C78660,
        &&label_80C78664,
        &&label_80C78668,
        &&label_80C7866C,
        &&label_80C78670,
        &&label_80C78674,
        &&label_80C78678,
        &&label_80C7867C,
        &&label_80C78680,
        &&label_80C78684,
        &&label_80C78688,
        &&label_80C7868C,
        &&label_80C78690,
        &&label_80C78694,
        &&label_80C78698,
        &&label_80C7869C,
        &&label_80C786A0,
        &&label_80C786A4,
        &&label_80C786A8,
        &&label_80C786AC,
        &&label_80C786B0,
        &&label_80C786B4,
        &&label_80C786B8,
        &&label_80C786BC,
        &&label_80C786C0,
        &&label_80C786C4,
        &&label_80C786C8,
        &&label_80C786CC,
        &&label_80C786D0,
        &&label_80C786D4,
        &&label_80C786D8,
        &&label_80C786DC,
        &&label_80C786E0,
        &&label_80C786E4,
        &&label_80C786E8,
        &&label_80C786EC,
        &&label_80C786F0,
        &&label_80C786F4,
        &&label_80C786F8,
        &&label_80C786FC,
        &&label_80C78700,
        &&label_80C78704,
        &&label_80C78708,
        &&label_80C7870C,
        &&label_80C78710,
        &&label_80C78714,
        &&label_80C78718,
        &&label_80C7871C,
        &&label_80C78720,
        &&label_80C78724,
        &&label_80C78728,
        &&label_80C7872C,
        &&label_80C78730,
        &&label_80C78734,
        &&label_80C78738,
        &&label_80C7873C,
        &&label_80C78740,
        &&label_80C78744,
        &&label_80C78748,
        &&label_80C7874C,
        &&label_80C78750,
        &&label_80C78754,
        &&label_80C78758,
        &&label_80C7875C,
        &&label_80C78760,
        &&label_80C78764,
        &&label_80C78768,
        &&label_80C7876C,
        &&label_80C78770,
        &&label_80C78774,
        &&label_80C78778,
        &&label_80C7877C,
        &&label_80C78780,
        &&label_80C78784,
        &&label_80C78788,
        &&label_80C7878C,
        &&label_80C78790,
        &&label_80C78794,
        &&label_80C78798,
        &&label_80C7879C,
        &&label_80C787A0,
        &&label_80C787A4,
        &&label_80C787A8,
        &&label_80C787AC,
        &&label_80C787B0,
        &&label_80C787B4,
        &&label_80C787B8,
        &&label_80C787BC,
        &&label_80C787C0,
        &&label_80C787C4,
        &&label_80C787C8,
        &&label_80C787CC,
        &&label_80C787D0,
        &&label_80C787D4,
        &&label_80C787D8,
        &&label_80C787DC,
        &&label_80C787E0,
        &&label_80C787E4,
        &&label_80C787E8,
        &&label_80C787EC,
        &&label_80C787F0,
        &&label_80C787F4,
        &&label_80C787F8,
        &&label_80C787FC,
        &&label_80C78800,
        &&label_80C78804,
        &&label_80C78808,
        &&label_80C7880C,
        &&label_80C78810,
        &&label_80C78814,
        &&label_80C78818,
        &&label_80C7881C,
        &&label_80C78820,
        &&label_80C78824,
        &&label_80C78828,
        &&label_80C7882C,
        &&label_80C78830,
        &&label_80C78834,
        &&label_80C78838,
        &&label_80C7883C,
        &&label_80C78840,
        &&label_80C78844,
        &&label_80C78848,
        &&label_80C7884C,
        &&label_80C78850,
        &&label_80C78854,
        &&label_80C78858,
        &&label_80C7885C,
        &&label_80C78860,
        &&label_80C78864,
        &&label_80C78868,
        &&label_80C7886C,
        &&label_80C78870,
        &&label_80C78874,
        &&label_80C78878,
        &&label_80C7887C,
        &&label_80C78880,
        &&label_80C78884,
        &&label_80C78888,
        &&label_80C7888C,
        &&label_80C78890,
        &&label_80C78894,
        &&label_80C78898,
        &&label_80C7889C,
        &&label_80C788A0,
        &&label_80C788A4,
        &&label_80C788A8,
        &&label_80C788AC,
        &&label_80C788B0,
        &&label_80C788B4,
        &&label_80C788B8,
        &&label_80C788BC,
        &&label_80C788C0,
        &&label_80C788C4,
        &&label_80C788C8,
        &&label_80C788CC,
        &&label_80C788D0,
        &&label_80C788D4,
        &&label_80C788D8,
        &&label_80C788DC,
        &&label_80C788E0,
        &&label_80C788E4,
        &&label_80C788E8,
        &&label_80C788EC,
        &&label_80C788F0,
        &&label_80C788F4,
        &&label_80C788F8,
        &&label_80C788FC,
        &&label_80C78900,
        &&label_80C78904,
        &&label_80C78908,
        &&label_80C7890C,
        &&label_80C78910,
        &&label_80C78914,
        &&label_80C78918,
        &&label_80C7891C,
        &&label_80C78920,
        &&label_80C78924,
        &&label_80C78928,
        &&label_80C7892C,
        &&label_80C78930,
        &&label_80C78934,
        &&label_80C78938,
        &&label_80C7893C,
        &&label_80C78940,
        &&label_80C78944,
        &&label_80C78948,
        &&label_80C7894C,
        &&label_80C78950,
        &&label_80C78954,
        &&label_80C78958,
        &&label_80C7895C,
        &&label_80C78960,
        &&label_80C78964,
        &&label_80C78968,
        &&label_80C7896C,
        &&label_80C78970,
        &&label_80C78974,
        &&label_80C78978,
        &&label_80C7897C,
        &&label_80C78980,
        &&label_80C78984,
        &&label_80C78988,
        &&label_80C7898C,
        &&label_80C78990,
        &&label_80C78994,
        &&label_80C78998,
        &&label_80C7899C,
        &&label_80C789A0,
        &&label_80C789A4,
        &&label_80C789A8,
        &&label_80C789AC,
        &&label_80C789B0,
        &&label_80C789B4,
        &&label_80C789B8,
        &&label_80C789BC,
        &&label_80C789C0,
        &&label_80C789C4,
        &&label_80C789C8,
        &&label_80C789CC,
        &&label_80C789D0,
        &&label_80C789D4,
        &&label_80C789D8,
        &&label_80C789DC,
        &&label_80C789E0,
        &&label_80C789E4,
        &&label_80C789E8,
        &&label_80C789EC,
        &&label_80C789F0,
        &&label_80C789F4,
        &&label_80C789F8,
        &&label_80C789FC,
        &&label_80C78A00,
        &&label_80C78A04,
        &&label_80C78A08,
        &&label_80C78A0C,
        &&label_80C78A10,
        &&label_80C78A14,
        &&label_80C78A18,
        &&label_80C78A1C,
        &&label_80C78A20,
        &&label_80C78A24,
        &&label_80C78A28,
        &&label_80C78A2C,
        &&label_80C78A30,
        &&label_80C78A34,
        &&label_80C78A38,
        &&label_80C78A3C,
        &&label_80C78A40,
        &&label_80C78A44,
        &&label_80C78A48,
        &&label_80C78A4C,
        &&label_80C78A50,
        &&label_80C78A54,
        &&label_80C78A58,
        &&label_80C78A5C,
        &&label_80C78A60,
        &&label_80C78A64,
        &&label_80C78A68,
        &&label_80C78A6C,
        &&label_80C78A70,
        &&label_80C78A74,
        &&label_80C78A78,
        &&label_80C78A7C,
        &&label_80C78A80,
        &&label_80C78A84,
        &&label_80C78A88,
        &&label_80C78A8C,
        &&label_80C78A90,
        &&label_80C78A94,
        &&label_80C78A98,
        &&label_80C78A9C,
        &&label_80C78AA0,
        &&label_80C78AA4,
        &&label_80C78AA8,
        &&label_80C78AAC,
        &&label_80C78AB0,
        &&label_80C78AB4,
        &&label_80C78AB8,
        &&label_80C78ABC,
        &&label_80C78AC0,
        &&label_80C78AC4,
        &&label_80C78AC8,
        &&label_80C78ACC,
        &&label_80C78AD0,
        &&label_80C78AD4,
        &&label_80C78AD8,
        &&label_80C78ADC,
        &&label_80C78AE0,
        &&label_80C78AE4,
        &&label_80C78AE8,
        &&label_80C78AEC,
        &&label_80C78AF0,
        &&label_80C78AF4,
        &&label_80C78AF8,
        &&label_80C78AFC,
        &&label_80C78B00,
        &&label_80C78B04,
        &&label_80C78B08,
        &&label_80C78B0C,
        &&label_80C78B10,
        &&label_80C78B14,
        &&label_80C78B18,
        &&label_80C78B1C,
        &&label_80C78B20,
        &&label_80C78B24,
        &&label_80C78B28,
        &&label_80C78B2C,
        &&label_80C78B30,
        &&label_80C78B34,
        &&label_80C78B38,
        &&label_80C78B3C,
        &&label_80C78B40,
        &&label_80C78B44,
        &&label_80C78B48,
        &&label_80C78B4C,
        &&label_80C78B50,
        &&label_80C78B54,
        &&label_80C78B58,
        &&label_80C78B5C,
        &&label_80C78B60,
        &&label_80C78B64,
        &&label_80C78B68,
        &&label_80C78B6C,
        &&label_80C78B70,
        &&label_80C78B74,
        &&label_80C78B78,
        &&label_80C78B7C,
        &&label_80C78B80,
        &&label_80C78B84,
        &&label_80C78B88,
        &&label_80C78B8C,
        &&label_80C78B90,
        &&label_80C78B94,
        &&label_80C78B98,
        &&label_80C78B9C,
        &&label_80C78BA0,
        &&label_80C78BA4,
        &&label_80C78BA8,
        &&label_80C78BAC,
        &&label_80C78BB0,
        &&label_80C78BB4,
        &&label_80C78BB8,
        &&label_80C78BBC,
        &&label_80C78BC0,
        &&label_80C78BC4,
        &&label_80C78BC8,
        &&label_80C78BCC,
        &&label_80C78BD0,
        &&label_80C78BD4,
        &&label_80C78BD8,
        &&label_80C78BDC,
        &&label_80C78BE0,
        &&label_80C78BE4,
        &&label_80C78BE8,
        &&label_80C78BEC,
        &&label_80C78BF0,
        &&label_80C78BF4,
        &&label_80C78BF8,
        &&label_80C78BFC,
        &&label_80C78C00,
        &&label_80C78C04,
        &&label_80C78C08,
        &&label_80C78C0C,
        &&label_80C78C10,
        &&label_80C78C14,
        &&label_80C78C18,
        &&label_80C78C1C,
        &&label_80C78C20,
        &&label_80C78C24,
        &&label_80C78C28,
        &&label_80C78C2C,
        &&label_80C78C30,
        &&label_80C78C34,
        &&label_80C78C38,
        &&label_80C78C3C,
        &&label_80C78C40,
        &&label_80C78C44,
        &&label_80C78C48,
        &&label_80C78C4C,
        &&label_80C78C50,
        &&label_80C78C54,
        &&label_80C78C58,
        &&label_80C78C5C,
        &&label_80C78C60,
        &&label_80C78C64,
        &&label_80C78C68,
        &&label_80C78C6C,
        &&label_80C78C70,
        &&label_80C78C74,
        &&label_80C78C78,
        &&label_80C78C7C,
        &&label_80C78C80,
        &&label_80C78C84,
        &&label_80C78C88,
        &&label_80C78C8C,
        &&label_80C78C90,
        &&label_80C78C94,
        &&label_80C78C98,
        &&label_80C78C9C,
        &&label_80C78CA0,
        &&label_80C78CA4,
        &&label_80C78CA8,
        &&label_80C78CAC,
        &&label_80C78CB0,
        &&label_80C78CB4,
        &&label_80C78CB8,
        &&label_80C78CBC,
        &&label_80C78CC0,
        &&label_80C78CC4,
        &&label_80C78CC8,
        &&label_80C78CCC,
        &&label_80C78CD0,
        &&label_80C78CD4,
        &&label_80C78CD8,
        &&label_80C78CDC,
        &&label_80C78CE0,
        &&label_80C78CE4,
        &&label_80C78CE8,
        &&label_80C78CEC,
        &&label_80C78CF0,
        &&label_80C78CF4,
        &&label_80C78CF8,
        &&label_80C78CFC,
        &&label_80C78D00,
        &&label_80C78D04,
        &&label_80C78D08,
        &&label_80C78D0C,
        &&label_80C78D10,
        &&label_80C78D14,
        &&label_80C78D18,
        &&label_80C78D1C,
        &&label_80C78D20,
        &&label_80C78D24,
        &&label_80C78D28,
        &&label_80C78D2C,
        &&label_80C78D30,
        &&label_80C78D34,
        &&label_80C78D38,
        &&label_80C78D3C,
        &&label_80C78D40,
        &&label_80C78D44,
        &&label_80C78D48,
        &&label_80C78D4C,
        &&label_80C78D50,
        &&label_80C78D54,
        &&label_80C78D58,
        &&label_80C78D5C,
        &&label_80C78D60,
        &&label_80C78D64,
        &&label_80C78D68,
        &&label_80C78D6C,
        &&label_80C78D70,
        &&label_80C78D74,
        &&label_80C78D78,
        &&label_80C78D7C,
        &&label_80C78D80,
        &&label_80C78D84,
        &&label_80C78D88,
        &&label_80C78D8C,
        &&label_80C78D90,
        &&label_80C78D94,
        &&label_80C78D98,
        &&label_80C78D9C,
        &&label_80C78DA0,
        &&label_80C78DA4,
        &&label_80C78DA8,
        &&label_80C78DAC,
        &&label_80C78DB0,
        &&label_80C78DB4,
        &&label_80C78DB8,
        &&label_80C78DBC,
        &&label_80C78DC0,
        &&label_80C78DC4,
        &&label_80C78DC8,
        &&label_80C78DCC,
        &&label_80C78DD0,
        &&label_80C78DD4,
        &&label_80C78DD8,
        &&label_80C78DDC,
        &&label_80C78DE0,
        &&label_80C78DE4,
        &&label_80C78DE8,
        &&label_80C78DEC,
        &&label_80C78DF0,
        &&label_80C78DF4,
        &&label_80C78DF8,
        &&label_80C78DFC,
        &&label_80C78E00,
        &&label_80C78E04,
        &&label_80C78E08,
        &&label_80C78E0C,
        &&label_80C78E10,
        &&label_80C78E14,
        &&label_80C78E18,
        &&label_80C78E1C,
        &&label_80C78E20,
        &&label_80C78E24,
        &&label_80C78E28,
        &&label_80C78E2C,
        &&label_80C78E30,
        &&label_80C78E34,
        &&label_80C78E38,
        &&label_80C78E3C,
        &&label_80C78E40,
        &&label_80C78E44,
        &&label_80C78E48,
        &&label_80C78E4C,
        &&label_80C78E50,
        &&label_80C78E54,
        &&label_80C78E58,
        &&label_80C78E5C,
        &&label_80C78E60,
        &&label_80C78E64,
        &&label_80C78E68,
        &&label_80C78E6C,
        &&label_80C78E70,
        &&label_80C78E74,
        &&label_80C78E78,
        &&label_80C78E7C,
        &&label_80C78E80,
        &&label_80C78E84,
        &&label_80C78E88,
        &&label_80C78E8C,
        &&label_80C78E90,
        &&label_80C78E94,
        &&label_80C78E98,
        &&label_80C78E9C,
        &&label_80C78EA0,
        &&label_80C78EA4,
        &&label_80C78EA8,
        &&label_80C78EAC,
        &&label_80C78EB0,
        &&label_80C78EB4,
        &&label_80C78EB8,
        &&label_80C78EBC,
        &&label_80C78EC0,
        &&label_80C78EC4,
        &&label_80C78EC8,
        &&label_80C78ECC,
        &&label_80C78ED0,
        &&label_80C78ED4,
        &&label_80C78ED8,
        &&label_80C78EDC,
        &&label_80C78EE0,
        &&label_80C78EE4,
        &&label_80C78EE8,
        &&label_80C78EEC,
        &&label_80C78EF0,
        &&label_80C78EF4,
        &&label_80C78EF8,
        &&label_80C78EFC,
        &&label_80C78F00,
        &&label_80C78F04,
        &&label_80C78F08,
        &&label_80C78F0C,
        &&label_80C78F10,
        &&label_80C78F14,
        &&label_80C78F18,
        &&label_80C78F1C,
        &&label_80C78F20,
        &&label_80C78F24,
        &&label_80C78F28,
        &&label_80C78F2C,
        &&label_80C78F30,
        &&label_80C78F34,
        &&label_80C78F38,
        &&label_80C78F3C,
        &&label_80C78F40,
        &&label_80C78F44,
        &&label_80C78F48,
        &&label_80C78F4C,
        &&label_80C78F50,
        &&label_80C78F54,
        &&label_80C78F58,
        &&label_80C78F5C,
        &&label_80C78F60,
        &&label_80C78F64,
        &&label_80C78F68,
        &&label_80C78F6C,
        &&label_80C78F70,
        &&label_80C78F74,
        &&label_80C78F78,
        &&label_80C78F7C,
        &&label_80C78F80,
        &&label_80C78F84,
        &&label_80C78F88,
        &&label_80C78F8C,
        &&label_80C78F90,
        &&label_80C78F94,
        &&label_80C78F98,
        &&label_80C78F9C,
        &&label_80C78FA0,
        &&label_80C78FA4,
        &&label_80C78FA8,
        &&label_80C78FAC,
        &&label_80C78FB0,
        &&label_80C78FB4,
        &&label_80C78FB8,
        &&label_80C78FBC,
        &&label_80C78FC0,
        &&label_80C78FC4,
        &&label_80C78FC8,
        &&label_80C78FCC,
        &&label_80C78FD0,
        &&label_80C78FD4,
        &&label_80C78FD8,
        &&label_80C78FDC,
        &&label_80C78FE0,
        &&label_80C78FE4,
        &&label_80C78FE8,
        &&label_80C78FEC,
        &&label_80C78FF0,
        &&label_80C78FF4,
        &&label_80C78FF8,
        &&label_80C78FFC,
        &&label_80C79000,
        &&label_80C79004,
        &&label_80C79008,
        &&label_80C7900C,
        &&label_80C79010,
        &&label_80C79014,
        &&label_80C79018,
        &&label_80C7901C,
        &&label_80C79020,
        &&label_80C79024,
        &&label_80C79028,
        &&label_80C7902C,
        &&label_80C79030,
        &&label_80C79034,
        &&label_80C79038,
        &&label_80C7903C,
        &&label_80C79040,
        &&label_80C79044,
        &&label_80C79048,
        &&label_80C7904C,
        &&label_80C79050,
        &&label_80C79054,
        &&label_80C79058,
        &&label_80C7905C,
        &&label_80C79060,
        &&label_80C79064,
        &&label_80C79068,
        &&label_80C7906C,
        &&label_80C79070,
        &&label_80C79074,
        &&label_80C79078,
        &&label_80C7907C,
        &&label_80C79080,
        &&label_80C79084,
        &&label_80C79088,
        &&label_80C7908C,
        &&label_80C79090,
        &&label_80C79094,
        &&label_80C79098,
        &&label_80C7909C,
        &&label_80C790A0,
        &&label_80C790A4,
        &&label_80C790A8,
        &&label_80C790AC,
        &&label_80C790B0,
        &&label_80C790B4,
        &&label_80C790B8,
        &&label_80C790BC,
        &&label_80C790C0,
        &&label_80C790C4,
        &&label_80C790C8,
        &&label_80C790CC,
        &&label_80C790D0,
        &&label_80C790D4,
        &&label_80C790D8,
        &&label_80C790DC,
        &&label_80C790E0,
        &&label_80C790E4,
        &&label_80C790E8,
        &&label_80C790EC,
        &&label_80C790F0,
        &&label_80C790F4,
        &&label_80C790F8,
        &&label_80C790FC,
        &&label_80C79100,
        &&label_80C79104,
        &&label_80C79108,
        &&label_80C7910C,
        &&label_80C79110,
        &&label_80C79114,
        &&label_80C79118,
        &&label_80C7911C,
        &&label_80C79120,
        &&label_80C79124,
        &&label_80C79128,
        &&label_80C7912C,
        &&label_80C79130,
        &&label_80C79134,
        &&label_80C79138,
        &&label_80C7913C,
        &&label_80C79140,
        &&label_80C79144,
        &&label_80C79148,
        &&label_80C7914C,
        &&label_80C79150,
        &&label_80C79154,
        &&label_80C79158,
        &&label_80C7915C,
        &&label_80C79160,
        &&label_80C79164,
        &&label_80C79168,
        &&label_80C7916C,
        &&label_80C79170,
        &&label_80C79174,
        &&label_80C79178,
        &&label_80C7917C,
        &&label_80C79180,
        &&label_80C79184,
        &&label_80C79188,
        &&label_80C7918C,
        &&label_80C79190,
        &&label_80C79194,
        &&label_80C79198,
        &&label_80C7919C,
        &&label_80C791A0,
        &&label_80C791A4,
        &&label_80C791A8,
        &&label_80C791AC,
        &&label_80C791B0,
        &&label_80C791B4,
        &&label_80C791B8,
        &&label_80C791BC,
        &&label_80C791C0,
        &&label_80C791C4,
        &&label_80C791C8,
        &&label_80C791CC,
        &&label_80C791D0,
        &&label_80C791D4,
        &&label_80C791D8,
        &&label_80C791DC,
        &&label_80C791E0,
        &&label_80C791E4,
        &&label_80C791E8,
        &&label_80C791EC,
        &&label_80C791F0,
        &&label_80C791F4,
        &&label_80C791F8,
        &&label_80C791FC,
        &&label_80C79200,
        &&label_80C79204,
        &&label_80C79208,
        &&label_80C7920C,
        &&label_80C79210,
        &&label_80C79214,
        &&label_80C79218,
        &&label_80C7921C,
        &&label_80C79220,
        &&label_80C79224,
        &&label_80C79228,
        &&label_80C7922C,
        &&label_80C79230,
        &&label_80C79234,
        &&label_80C79238,
        &&label_80C7923C,
        &&label_80C79240,
        &&label_80C79244,
        &&label_80C79248,
        &&label_80C7924C,
        &&label_80C79250,
        &&label_80C79254,
        &&label_80C79258,
        &&label_80C7925C,
        &&label_80C79260,
        &&label_80C79264,
        &&label_80C79268,
        &&label_80C7926C,
        &&label_80C79270,
        &&label_80C79274,
        &&label_80C79278,
        &&label_80C7927C,
        &&label_80C79280,
        &&label_80C79284,
        &&label_80C79288,
        &&label_80C7928C,
        &&label_80C79290,
        &&label_80C79294,
        &&label_80C79298,
        &&label_80C7929C,
        &&label_80C792A0,
        &&label_80C792A4,
        &&label_80C792A8,
        &&label_80C792AC,
        &&label_80C792B0,
        &&label_80C792B4,
        &&label_80C792B8,
        &&label_80C792BC,
        &&label_80C792C0,
        &&label_80C792C4,
        &&label_80C792C8,
        &&label_80C792CC,
        &&label_80C792D0,
        &&label_80C792D4,
        &&label_80C792D8,
        &&label_80C792DC,
        &&label_80C792E0,
        &&label_80C792E4,
        &&label_80C792E8,
        &&label_80C792EC,
        &&label_80C792F0,
        &&label_80C792F4,
        &&label_80C792F8,
        &&label_80C792FC,
        &&label_80C79300,
        &&label_80C79304,
        &&label_80C79308,
        &&label_80C7930C,
        &&label_80C79310,
        &&label_80C79314,
        &&label_80C79318,
        &&label_80C7931C,
        &&label_80C79320,
        &&label_80C79324,
        &&label_80C79328,
        &&label_80C7932C,
        &&label_80C79330,
        &&label_80C79334,
        &&label_80C79338,
        &&label_80C7933C,
        &&label_80C79340,
        &&label_80C79344,
        &&label_80C79348,
        &&label_80C7934C,
        &&label_80C79350,
        &&label_80C79354,
        &&label_80C79358,
        &&label_80C7935C,
        &&label_80C79360,
        &&label_80C79364,
        &&label_80C79368,
        &&label_80C7936C,
        &&label_80C79370,
        &&label_80C79374,
        &&label_80C79378,
        &&label_80C7937C,
        &&label_80C79380,
        &&label_80C79384,
        &&label_80C79388,
        &&label_80C7938C,
        &&label_80C79390,
        &&label_80C79394,
        &&label_80C79398,
        &&label_80C7939C,
        &&label_80C793A0,
        &&label_80C793A4,
        &&label_80C793A8,
        &&label_80C793AC,
        &&label_80C793B0,
        &&label_80C793B4,
        &&label_80C793B8,
        &&label_80C793BC,
        &&label_80C793C0,
        &&label_80C793C4,
        &&label_80C793C8,
        &&label_80C793CC,
        &&label_80C793D0,
        &&label_80C793D4,
        &&label_80C793D8,
        &&label_80C793DC,
        &&label_80C793E0,
        &&label_80C793E4,
        &&label_80C793E8,
        &&label_80C793EC,
        &&label_80C793F0,
        &&label_80C793F4,
        &&label_80C793F8,
        &&label_80C793FC,
        &&label_80C79400,
        &&label_80C79404,
        &&label_80C79408,
        &&label_80C7940C,
        &&label_80C79410,
        &&label_80C79414,
        &&label_80C79418,
        &&label_80C7941C,
        &&label_80C79420,
        &&label_80C79424,
        &&label_80C79428,
        &&label_80C7942C,
        &&label_80C79430,
        &&label_80C79434,
        &&label_80C79438,
        &&label_80C7943C,
        &&label_80C79440,
        &&label_80C79444,
        &&label_80C79448,
        &&label_80C7944C,
        &&label_80C79450,
        &&label_80C79454,
        &&label_80C79458,
        &&label_80C7945C,
        &&label_80C79460,
        &&label_80C79464,
        &&label_80C79468,
        &&label_80C7946C,
        &&label_80C79470,
        &&label_80C79474,
        &&label_80C79478,
        &&label_80C7947C,
        &&label_80C79480,
        &&label_80C79484,
        &&label_80C79488,
        &&label_80C7948C,
        &&label_80C79490,
        &&label_80C79494,
        &&label_80C79498,
        &&label_80C7949C,
        &&label_80C794A0,
        &&label_80C794A4,
        &&label_80C794A8,
        &&label_80C794AC,
        &&label_80C794B0,
        &&label_80C794B4,
        &&label_80C794B8,
        &&label_80C794BC,
        &&label_80C794C0,
        &&label_80C794C4,
        &&label_80C794C8,
        &&label_80C794CC,
        &&label_80C794D0,
        &&label_80C794D4,
        &&label_80C794D8,
        &&label_80C794DC,
        &&label_80C794E0,
        &&label_80C794E4,
        &&label_80C794E8,
        &&label_80C794EC,
        &&label_80C794F0,
        &&label_80C794F4,
        &&label_80C794F8,
        &&label_80C794FC,
        &&label_80C79500,
        &&label_80C79504,
        &&label_80C79508,
        &&label_80C7950C,
        &&label_80C79510,
        &&label_80C79514,
        &&label_80C79518,
        &&label_80C7951C,
        &&label_80C79520,
        &&label_80C79524,
        &&label_80C79528,
        &&label_80C7952C,
        &&label_80C79530,
        &&label_80C79534,
        &&label_80C79538,
        &&label_80C7953C,
        &&label_80C79540,
        &&label_80C79544,
        &&label_80C79548,
        &&label_80C7954C,
        &&label_80C79550,
        &&label_80C79554,
        &&label_80C79558,
        &&label_80C7955C,
        &&label_80C79560,
        &&label_80C79564,
        &&label_80C79568,
        &&label_80C7956C,
        &&label_80C79570,
        &&label_80C79574,
        &&label_80C79578,
        &&label_80C7957C,
        &&label_80C79580,
        &&label_80C79584,
        &&label_80C79588,
        &&label_80C7958C,
        &&label_80C79590,
        &&label_80C79594,
        &&label_80C79598,
        &&label_80C7959C,
        &&label_80C795A0,
        &&label_80C795A4,
        &&label_80C795A8,
        &&label_80C795AC,
        &&label_80C795B0,
        &&label_80C795B4,
        &&label_80C795B8,
        &&label_80C795BC,
        &&label_80C795C0,
        &&label_80C795C4,
        &&label_80C795C8,
        &&label_80C795CC,
        &&label_80C795D0,
        &&label_80C795D4,
        &&label_80C795D8,
        &&label_80C795DC,
        &&label_80C795E0,
        &&label_80C795E4,
        &&label_80C795E8,
        &&label_80C795EC,
        &&label_80C795F0,
        &&label_80C795F4,
        &&label_80C795F8,
        &&label_80C795FC,
        &&label_80C79600,
        &&label_80C79604,
        &&label_80C79608,
        &&label_80C7960C,
        &&label_80C79610,
        &&label_80C79614,
        &&label_80C79618,
        &&label_80C7961C,
        &&label_80C79620,
        &&label_80C79624,
        &&label_80C79628,
        &&label_80C7962C,
        &&label_80C79630,
        &&label_80C79634,
        &&label_80C79638,
        &&label_80C7963C,
        &&label_80C79640,
        &&label_80C79644,
        &&label_80C79648,
        &&label_80C7964C,
        &&label_80C79650,
        &&label_80C79654,
        &&label_80C79658,
        &&label_80C7965C,
        &&label_80C79660,
        &&label_80C79664,
        &&label_80C79668,
        &&label_80C7966C,
        &&label_80C79670,
        &&label_80C79674,
        &&label_80C79678,
        &&label_80C7967C,
        &&label_80C79680,
        &&label_80C79684,
        &&label_80C79688,
        &&label_80C7968C,
        &&label_80C79690,
        &&label_80C79694,
        &&label_80C79698,
        &&label_80C7969C,
        &&label_80C796A0,
        &&label_80C796A4,
        &&label_80C796A8,
        &&label_80C796AC,
        &&label_80C796B0,
        &&label_80C796B4,
        &&label_80C796B8,
        &&label_80C796BC,
        &&label_80C796C0,
        &&label_80C796C4,
        &&label_80C796C8,
        &&label_80C796CC,
        &&label_80C796D0,
        &&label_80C796D4,
        &&label_80C796D8,
        &&label_80C796DC,
        &&label_80C796E0,
        &&label_80C796E4,
        &&label_80C796E8,
        &&label_80C796EC,
        &&label_80C796F0,
        &&label_80C796F4,
        &&label_80C796F8,
        &&label_80C796FC,
        &&label_80C79700,
        &&label_80C79704,
        &&label_80C79708,
        &&label_80C7970C,
        &&label_80C79710,
        &&label_80C79714,
        &&label_80C79718,
        &&label_80C7971C,
        &&label_80C79720,
        &&label_80C79724,
        &&label_80C79728,
        &&label_80C7972C,
        &&label_80C79730,
        &&label_80C79734,
        &&label_80C79738,
        &&label_80C7973C,
        &&label_80C79740,
        &&label_80C79744,
        &&label_80C79748,
        &&label_80C7974C,
        &&label_80C79750,
        &&label_80C79754,
        &&label_80C79758,
        &&label_80C7975C,
        &&label_80C79760,
        &&label_80C79764,
        &&label_80C79768,
        &&label_80C7976C,
        &&label_80C79770,
        &&label_80C79774,
        &&label_80C79778,
        &&label_80C7977C,
        &&label_80C79780,
        &&label_80C79784,
        &&label_80C79788,
        &&label_80C7978C,
        &&label_80C79790,
        &&label_80C79794,
        &&label_80C79798,
        &&label_80C7979C,
        &&label_80C797A0,
        &&label_80C797A4,
        &&label_80C797A8,
        &&label_80C797AC,
        &&label_80C797B0,
        &&label_80C797B4,
        &&label_80C797B8,
        &&label_80C797BC,
        &&label_80C797C0,
        &&label_80C797C4,
        &&label_80C797C8,
        &&label_80C797CC,
        &&label_80C797D0,
        &&label_80C797D4,
        &&label_80C797D8,
        &&label_80C797DC,
        &&label_80C797E0,
        &&label_80C797E4,
        &&label_80C797E8,
        &&label_80C797EC,
        &&label_80C797F0,
        &&label_80C797F4,
        &&label_80C797F8,
        &&label_80C797FC,
        &&label_80C79800,
        &&label_80C79804,
        &&label_80C79808,
        &&label_80C7980C,
        &&label_80C79810,
        &&label_80C79814,
        &&label_80C79818,
        &&label_80C7981C,
        &&label_80C79820,
        &&label_80C79824,
        &&label_80C79828,
        &&label_80C7982C,
        &&label_80C79830,
        &&label_80C79834,
        &&label_80C79838,
        &&label_80C7983C,
        &&label_80C79840,
        &&label_80C79844,
        &&label_80C79848,
        &&label_80C7984C,
        &&label_80C79850,
        &&label_80C79854,
        &&label_80C79858,
        &&label_80C7985C,
        &&label_80C79860,
        &&label_80C79864,
        &&label_80C79868,
        &&label_80C7986C,
        &&label_80C79870,
        &&label_80C79874,
        &&label_80C79878,
        &&label_80C7987C,
        &&label_80C79880,
        &&label_80C79884,
        &&label_80C79888,
        &&label_80C7988C,
        &&label_80C79890,
        &&label_80C79894,
        &&label_80C79898,
        &&label_80C7989C,
        &&label_80C798A0,
        &&label_80C798A4,
        &&label_80C798A8,
        &&label_80C798AC,
        &&label_80C798B0,
        &&label_80C798B4,
        &&label_80C798B8,
        &&label_80C798BC,
        &&label_80C798C0,
        &&label_80C798C4,
        &&label_80C798C8,
        &&label_80C798CC,
        &&label_80C798D0,
        &&label_80C798D4,
        &&label_80C798D8,
        &&label_80C798DC,
        &&label_80C798E0,
        &&label_80C798E4,
        &&label_80C798E8,
        &&label_80C798EC,
        &&label_80C798F0,
        &&label_80C798F4,
        &&label_80C798F8,
        &&label_80C798FC,
        &&label_80C79900,
        &&label_80C79904,
        &&label_80C79908,
        &&label_80C7990C,
        &&label_80C79910,
        &&label_80C79914,
        &&label_80C79918,
        &&label_80C7991C,
        &&label_80C79920,
        &&label_80C79924,
        &&label_80C79928,
        &&label_80C7992C,
        &&label_80C79930,
        &&label_80C79934,
        &&label_80C79938,
        &&label_80C7993C,
        &&label_80C79940,
        &&label_80C79944,
        &&label_80C79948,
        &&label_80C7994C,
        &&label_80C79950,
        &&label_80C79954,
        &&label_80C79958,
        &&label_80C7995C,
        &&label_80C79960,
        &&label_80C79964,
        &&label_80C79968,
        &&label_80C7996C,
        &&label_80C79970,
        &&label_80C79974,
        &&label_80C79978,
        &&label_80C7997C,
        &&label_80C79980,
        &&label_80C79984,
        &&label_80C79988,
        &&label_80C7998C,
        &&label_80C79990,
        &&label_80C79994,
        &&label_80C79998,
        &&label_80C7999C,
        &&label_80C799A0,
        &&label_80C799A4,
        &&label_80C799A8,
        &&label_80C799AC,
        &&label_80C799B0,
        &&label_80C799B4,
        &&label_80C799B8,
        &&label_80C799BC,
        &&label_80C799C0,
        &&label_80C799C4,
        &&label_80C799C8,
        &&label_80C799CC,
        &&label_80C799D0,
        &&label_80C799D4,
        &&label_80C799D8,
        &&label_80C799DC,
        &&label_80C799E0,
        &&label_80C799E4,
        &&label_80C799E8,
        &&label_80C799EC,
        &&label_80C799F0,
        &&label_80C799F4,
        &&label_80C799F8,
        &&label_80C799FC,
        &&label_80C79A00,
        &&label_80C79A04,
        &&label_80C79A08,
        &&label_80C79A0C,
        &&label_80C79A10,
        &&label_80C79A14,
        &&label_80C79A18,
        &&label_80C79A1C,
        &&label_80C79A20,
        &&label_80C79A24,
        &&label_80C79A28,
        &&label_80C79A2C,
        &&label_80C79A30,
        &&label_80C79A34,
        &&label_80C79A38,
        &&label_80C79A3C,
        &&label_80C79A40,
        &&label_80C79A44,
        &&label_80C79A48,
        &&label_80C79A4C,
        &&label_80C79A50,
        &&label_80C79A54,
        &&label_80C79A58,
        &&label_80C79A5C,
        &&label_80C79A60,
        &&label_80C79A64,
        &&label_80C79A68,
        &&label_80C79A6C,
        &&label_80C79A70,
        &&label_80C79A74,
        &&label_80C79A78,
        &&label_80C79A7C,
        &&label_80C79A80,
        &&label_80C79A84,
        &&label_80C79A88,
        &&label_80C79A8C,
        &&label_80C79A90,
        &&label_80C79A94,
        &&label_80C79A98,
        &&label_80C79A9C,
        &&label_80C79AA0,
        &&label_80C79AA4,
        &&label_80C79AA8,
        &&label_80C79AAC,
        &&label_80C79AB0,
        &&label_80C79AB4,
        &&label_80C79AB8,
        &&label_80C79ABC,
        &&label_80C79AC0,
        &&label_80C79AC4,
        &&label_80C79AC8,
        &&label_80C79ACC,
        &&label_80C79AD0,
        &&label_80C79AD4,
        &&label_80C79AD8,
        &&label_80C79ADC,
        &&label_80C79AE0,
        &&label_80C79AE4,
        &&label_80C79AE8,
        &&label_80C79AEC,
        &&label_80C79AF0,
        &&label_80C79AF4,
        &&label_80C79AF8,
        &&label_80C79AFC,
        &&label_80C79B00,
        &&label_80C79B04,
        &&label_80C79B08,
        &&label_80C79B0C,
        &&label_80C79B10,
        &&label_80C79B14,
        &&label_80C79B18,
        &&label_80C79B1C,
        &&label_80C79B20,
        &&label_80C79B24,
        &&label_80C79B28,
        &&label_80C79B2C,
        &&label_80C79B30,
        &&label_80C79B34,
        &&label_80C79B38,
        &&label_80C79B3C,
        &&label_80C79B40,
        &&label_80C79B44,
        &&label_80C79B48,
        &&label_80C79B4C,
        &&label_80C79B50,
        &&label_80C79B54,
        &&label_80C79B58,
        &&label_80C79B5C,
        &&label_80C79B60,
        &&label_80C79B64,
        &&label_80C79B68,
        &&label_80C79B6C,
        &&label_80C79B70,
        &&label_80C79B74,
        &&label_80C79B78,
        &&label_80C79B7C,
        &&label_80C79B80,
        &&label_80C79B84,
        &&label_80C79B88,
        &&label_80C79B8C,
        &&label_80C79B90,
        &&label_80C79B94,
        &&label_80C79B98,
        &&label_80C79B9C,
        &&label_80C79BA0,
        &&label_80C79BA4,
        &&label_80C79BA8,
        &&label_80C79BAC,
        &&label_80C79BB0,
        &&label_80C79BB4,
        &&label_80C79BB8,
        &&label_80C79BBC,
        &&label_80C79BC0,
        &&label_80C79BC4,
        &&label_80C79BC8,
        &&label_80C79BCC,
        &&label_80C79BD0,
        &&label_80C79BD4,
        &&label_80C79BD8,
        &&label_80C79BDC,
        &&label_80C79BE0,
        &&label_80C79BE4,
        &&label_80C79BE8,
        &&label_80C79BEC,
        &&label_80C79BF0,
        &&label_80C79BF4,
        &&label_80C79BF8,
        &&label_80C79BFC,
        &&label_80C79C00,
        &&label_80C79C04,
        &&label_80C79C08,
        &&label_80C79C0C,
        &&label_80C79C10,
        &&label_80C79C14,
        &&label_80C79C18,
        &&label_80C79C1C,
        &&label_80C79C20,
        &&label_80C79C24,
        &&label_80C79C28,
        &&label_80C79C2C,
        &&label_80C79C30,
        &&label_80C79C34,
        &&label_80C79C38,
        &&label_80C79C3C,
        &&label_80C79C40,
        &&label_80C79C44,
        &&label_80C79C48,
        &&label_80C79C4C,
        &&label_80C79C50,
        &&label_80C79C54,
        &&label_80C79C58,
        &&label_80C79C5C,
        &&label_80C79C60,
        &&label_80C79C64,
        &&label_80C79C68,
        &&label_80C79C6C,
        &&label_80C79C70,
        &&label_80C79C74,
        &&label_80C79C78,
        &&label_80C79C7C,
        &&label_80C79C80,
        &&label_80C79C84,
        &&label_80C79C88,
        &&label_80C79C8C,
        &&label_80C79C90,
        &&label_80C79C94,
        &&label_80C79C98,
        &&label_80C79C9C,
        &&label_80C79CA0,
        &&label_80C79CA4,
        &&label_80C79CA8,
        &&label_80C79CAC,
        &&label_80C79CB0,
        &&label_80C79CB4,
        &&label_80C79CB8,
        &&label_80C79CBC,
        &&label_80C79CC0,
        &&label_80C79CC4,
        &&label_80C79CC8,
        &&label_80C79CCC,
        &&label_80C79CD0,
        &&label_80C79CD4,
        &&label_80C79CD8,
        &&label_80C79CDC,
        &&label_80C79CE0,
        &&label_80C79CE4,
        &&label_80C79CE8,
        &&label_80C79CEC,
        &&label_80C79CF0,
        &&label_80C79CF4,
        &&label_80C79CF8,
        &&label_80C79CFC,
        &&label_80C79D00,
        &&label_80C79D04,
        &&label_80C79D08,
        &&label_80C79D0C,
        &&label_80C79D10,
        &&label_80C79D14,
        &&label_80C79D18,
        &&label_80C79D1C,
        &&label_80C79D20,
        &&label_80C79D24,
        &&label_80C79D28,
        &&label_80C79D2C,
        &&label_80C79D30,
        &&label_80C79D34,
        &&label_80C79D38,
        &&label_80C79D3C,
        &&label_80C79D40,
        &&label_80C79D44,
        &&label_80C79D48,
        &&label_80C79D4C,
        &&label_80C79D50,
        &&label_80C79D54,
        &&label_80C79D58,
        &&label_80C79D5C,
        &&label_80C79D60,
        &&label_80C79D64,
        &&label_80C79D68,
        &&label_80C79D6C
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80C78580u && pc <= 0x80C79D6Cu && ((pc - 0x80C78580u) & 3u) == 0u)
            goto *pc_table_80C78580[(pc - 0x80C78580u) >> 2];
    }
    return;
label_80C78580:
    ctx->pc = 0x80C78580u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78580u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C78580: stwu     r1, -16(r1)
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
label_80C78584:
    ctx->pc = 0x80C78584u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78584u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C78584: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C78588:
    ctx->pc = 0x80C78588u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78588u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C78588: stw     r0, 20(r1)
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
label_80C7858C:
    ctx->pc = 0x80C7858Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7858Cu)) return;
    // 80C7858C: cmpwi   r3, 2
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

label_80C78590:
    ctx->pc = 0x80C78590u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78590u)) return;
    // 80C78590: bc    12, 2, 0x80C78FEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C78FEC;
        }
    }

label_80C78594:
    ctx->pc = 0x80C78594u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78594u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C78594: bc    4, 0, 0x80C785A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C785A8;
        }
    }

label_80C78598:
    ctx->pc = 0x80C78598u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78598u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C78598: cmpwi   r3, 0
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

label_80C7859C:
    ctx->pc = 0x80C7859Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7859Cu)) return;
    // 80C7859C: bc    12, 2, 0x80C7902C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C7902C;
        }
    }

label_80C785A0:
    ctx->pc = 0x80C785A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C785A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C785A0: bc    4, 0, 0x80C785B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C785B0;
        }
    }

label_80C785A4:
    ctx->pc = 0x80C785A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C785A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C785A4: b       0x80C7902C
    {
            goto label_80C7902C;
    }

label_80C785A8:
    ctx->pc = 0x80C785A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C785A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C785A8: cmpwi   r3, 4
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

label_80C785AC:
    ctx->pc = 0x80C785ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C785ACu)) return;
    // 80C785AC: b       0x80C7902C
    {
            goto label_80C7902C;
    }

label_80C785B0:
    ctx->pc = 0x80C785B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C785B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C785B0: bl      0x80460A24
    {
            ctx->lr = 0x80C785B4u;
            ctx->pc = 0x80460A24u;
            return;
    }

label_80C785B4:
    ctx->pc = 0x80C785B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C785B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C785B4: lis     r3, -27416
    ctx->gpr[3] = ((u32)(s32)(-27416) << 16);

label_80C785B8:
    ctx->pc = 0x80C785B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C785B8u)) return;
    // 80C785B8: addi    r3, r3, -24976
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24976);

label_80C785BC:
    ctx->pc = 0x80C785BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C785BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C785BC: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C785BCu)) return;
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
label_80C785C0:
    ctx->pc = 0x80C785C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C785C0u)) return;
    // 80C785C0: lis     r3, -27416
    ctx->gpr[3] = ((u32)(s32)(-27416) << 16);

label_80C785C4:
    ctx->pc = 0x80C785C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C785C4u)) return;
    // 80C785C4: addi    r3, r3, -24972
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24972);

label_80C785C8:
    ctx->pc = 0x80C785C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C785C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C785C8: lfs     f2, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C785C8u)) return;
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
label_80C785CC:
    ctx->pc = 0x80C785CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C785CCu)) return;
    // 80C785CC: fmr    f3, f2
    if (!ppc_fp_available_inline(ctx, 0x80C785CCu)) return;
    ctx->fpr[3] = ctx->fpr[2];

label_80C785D0:
    ctx->pc = 0x80C785D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C785D0u)) return;
    // 80C785D0: fmr    f4, f2
    if (!ppc_fp_available_inline(ctx, 0x80C785D0u)) return;
    ctx->fpr[4] = ctx->fpr[2];

label_80C785D4:
    ctx->pc = 0x80C785D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C785D4u)) return;
    // 80C785D4: fmr    f5, f2
    if (!ppc_fp_available_inline(ctx, 0x80C785D4u)) return;
    ctx->fpr[5] = ctx->fpr[2];

label_80C785D8:
    ctx->pc = 0x80C785D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C785D8u)) return;
    // 80C785D8: bl      0x80C798A0
    {
            ctx->lr = 0x80C785DCu;
            goto label_80C798A0;
    }

label_80C785DC:
    ctx->pc = 0x80C785DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C785DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C785DC: lis     r4, -27416
    ctx->gpr[4] = ((u32)(s32)(-27416) << 16);

label_80C785E0:
    ctx->pc = 0x80C785E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C785E0u)) return;
    // 80C785E0: addi    r4, r4, -23968
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-23968);

label_80C785E4:
    ctx->pc = 0x80C785E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C785E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C785E4: stw     r3, 0(r4)
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
label_80C785E8:
    ctx->pc = 0x80C785E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C785E8u)) return;
    // 80C785E8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C785EC:
    ctx->pc = 0x80C785ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C785ECu)) return;
    // 80C785EC: bl      0x8045F7C8
    {
            ctx->lr = 0x80C785F0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C785F0:
    ctx->pc = 0x80C785F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C785F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C785F0: bl      0x80460A60
    {
            ctx->lr = 0x80C785F4u;
            ctx->pc = 0x80460A60u;
            return;
    }

label_80C785F4:
    ctx->pc = 0x80C785F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C785F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C785F4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C785F8:
    ctx->pc = 0x80C785F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C785F8u)) return;
    // 80C785F8: bl      0x8045F220
    {
            ctx->lr = 0x80C785FCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C785FC:
    ctx->pc = 0x80C785FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C785FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C785FC: lis     r4, -27416
    ctx->gpr[4] = ((u32)(s32)(-27416) << 16);

label_80C78600:
    ctx->pc = 0x80C78600u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78600u)) return;
    // 80C78600: addi    r4, r4, -24968
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24968);

label_80C78604:
    ctx->pc = 0x80C78604u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78604u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C78604: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C78604u)) return;
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
label_80C78608:
    ctx->pc = 0x80C78608u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78608u)) return;
    // 80C78608: lis     r4, -27416
    ctx->gpr[4] = ((u32)(s32)(-27416) << 16);

label_80C7860C:
    ctx->pc = 0x80C7860Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7860Cu)) return;
    // 80C7860C: addi    r4, r4, -24964
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24964);

label_80C78610:
    ctx->pc = 0x80C78610u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78610u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C78610: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C78610u)) return;
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
label_80C78614:
    ctx->pc = 0x80C78614u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78614u)) return;
    // 80C78614: lis     r4, -27416
    ctx->gpr[4] = ((u32)(s32)(-27416) << 16);

label_80C78618:
    ctx->pc = 0x80C78618u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78618u)) return;
    // 80C78618: addi    r4, r4, -24960
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24960);

label_80C7861C:
    ctx->pc = 0x80C7861Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7861Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C7861C: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C7861Cu)) return;
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
label_80C78620:
    ctx->pc = 0x80C78620u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78620u)) return;
    // 80C78620: bl      0x8045EF2C
    {
            ctx->lr = 0x80C78624u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80C78624:
    ctx->pc = 0x80C78624u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78624u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C78624: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C78628:
    ctx->pc = 0x80C78628u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78628u)) return;
    // 80C78628: bl      0x8045F7C8
    {
            ctx->lr = 0x80C7862Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C7862C:
    ctx->pc = 0x80C7862Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C7862Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C7862C: bl      0x8045DE7C
    {
            ctx->lr = 0x80C78630u;
            ctx->pc = 0x8045DE7Cu;
            return;
    }

label_80C78630:
    ctx->pc = 0x80C78630u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78630u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C78630: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C78634:
    ctx->pc = 0x80C78634u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78634u)) return;
    // 80C78634: bl      0x8045F220
    {
            ctx->lr = 0x80C78638u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C78638:
    ctx->pc = 0x80C78638u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78638u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C78638: lis     r4, -27416
    ctx->gpr[4] = ((u32)(s32)(-27416) << 16);

label_80C7863C:
    ctx->pc = 0x80C7863Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7863Cu)) return;
    // 80C7863C: addi    r4, r4, -24956
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24956);

label_80C78640:
    ctx->pc = 0x80C78640u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78640u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C78640: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C78640u)) return;
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
label_80C78644:
    ctx->pc = 0x80C78644u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78644u)) return;
    // 80C78644: lis     r4, -27416
    ctx->gpr[4] = ((u32)(s32)(-27416) << 16);

label_80C78648:
    ctx->pc = 0x80C78648u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78648u)) return;
    // 80C78648: addi    r4, r4, -24952
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24952);

label_80C7864C:
    ctx->pc = 0x80C7864Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7864Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C7864C: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C7864Cu)) return;
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
label_80C78650:
    ctx->pc = 0x80C78650u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78650u)) return;
    // 80C78650: lis     r4, -27416
    ctx->gpr[4] = ((u32)(s32)(-27416) << 16);

label_80C78654:
    ctx->pc = 0x80C78654u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78654u)) return;
    // 80C78654: addi    r4, r4, -24948
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24948);

label_80C78658:
    ctx->pc = 0x80C78658u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78658u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C78658: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C78658u)) return;
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
label_80C7865C:
    ctx->pc = 0x80C7865Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7865Cu)) return;
    // 80C7865C: bl      0x8045EF2C
    {
            ctx->lr = 0x80C78660u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80C78660:
    ctx->pc = 0x80C78660u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78660u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C78660: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C78664:
    ctx->pc = 0x80C78664u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78664u)) return;
    // 80C78664: bl      0x8045F220
    {
            ctx->lr = 0x80C78668u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C78668:
    ctx->pc = 0x80C78668u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78668u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C78668: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C7866C:
    ctx->pc = 0x80C7866Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7866Cu)) return;
    // 80C7866C: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80C78670:
    ctx->pc = 0x80C78670u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78670u)) return;
    // 80C78670: addi    r5, r5, -32768
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-32768);

label_80C78674:
    ctx->pc = 0x80C78674u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78674u)) return;
    // 80C78674: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C78678:
    ctx->pc = 0x80C78678u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78678u)) return;
    // 80C78678: bl      0x8045EEA8
    {
            ctx->lr = 0x80C7867Cu;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80C7867C:
    ctx->pc = 0x80C7867Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C7867Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C7867C: lis     r3, -27416
    ctx->gpr[3] = ((u32)(s32)(-27416) << 16);

label_80C78680:
    ctx->pc = 0x80C78680u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78680u)) return;
    // 80C78680: addi    r3, r3, -23988
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-23988);

label_80C78684:
    ctx->pc = 0x80C78684u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78684u)) return;
    // 80C78684: bl      0x8050AF58
    {
            ctx->lr = 0x80C78688u;
            ctx->pc = 0x8050AF58u;
            return;
    }

label_80C78688:
    ctx->pc = 0x80C78688u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78688u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C78688: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80C7868C:
    ctx->pc = 0x80C7868Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7868Cu)) return;
    // 80C7868C: bl      0x80C7930C
    {
            ctx->lr = 0x80C78690u;
            goto label_80C7930C;
    }

label_80C78690:
    ctx->pc = 0x80C78690u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78690u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C78690: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C78694:
    ctx->pc = 0x80C78694u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78694u)) return;
    // 80C78694: li      r4, 760
    ctx->gpr[4] = (u32)(s32)(760);

label_80C78698:
    ctx->pc = 0x80C78698u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78698u)) return;
    // 80C78698: li      r5, 90
    ctx->gpr[5] = (u32)(s32)(90);

label_80C7869C:
    ctx->pc = 0x80C7869Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7869Cu)) return;
    // 80C7869C: bl      0x80C79414
    {
            ctx->lr = 0x80C786A0u;
            goto label_80C79414;
    }

label_80C786A0:
    ctx->pc = 0x80C786A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C786A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C786A0: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80C786A4:
    ctx->pc = 0x80C786A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C786A4u)) return;
    // 80C786A4: bl      0x8045F7C8
    {
            ctx->lr = 0x80C786A8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C786A8:
    ctx->pc = 0x80C786A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C786A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C786A8: lis     r3, -27416
    ctx->gpr[3] = ((u32)(s32)(-27416) << 16);

label_80C786AC:
    ctx->pc = 0x80C786ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C786ACu)) return;
    // 80C786AC: addi    r3, r3, -23968
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-23968);

label_80C786B0:
    ctx->pc = 0x80C786B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C786B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C786B0: lwz     r3, 0(r3)
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
label_80C786B4:
    ctx->pc = 0x80C786B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C786B4u)) return;
    // 80C786B4: cmplwi  r3, 0x0000
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

label_80C786B8:
    ctx->pc = 0x80C786B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C786B8u)) return;
    // 80C786B8: bc    12, 2, 0x80C786CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C786CC;
        }
    }

label_80C786BC:
    ctx->pc = 0x80C786BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C786BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C786BC: lis     r4, -27416
    ctx->gpr[4] = ((u32)(s32)(-27416) << 16);

label_80C786C0:
    ctx->pc = 0x80C786C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C786C0u)) return;
    // 80C786C0: addi    r4, r4, -24944
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24944);

label_80C786C4:
    ctx->pc = 0x80C786C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C786C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C786C4: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C786C4u)) return;
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
label_80C786C8:
    ctx->pc = 0x80C786C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C786C8u)) return;
    // 80C786C8: bl      0x80C7995C
    {
            ctx->lr = 0x80C786CCu;
            goto label_80C7995C;
    }

label_80C786CC:
    ctx->pc = 0x80C786CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C786CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C786CC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C786D0:
    ctx->pc = 0x80C786D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C786D0u)) return;
    // 80C786D0: bl      0x8045F220
    {
            ctx->lr = 0x80C786D4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C786D4:
    ctx->pc = 0x80C786D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C786D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C786D4: lis     r4, -27416
    ctx->gpr[4] = ((u32)(s32)(-27416) << 16);

label_80C786D8:
    ctx->pc = 0x80C786D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C786D8u)) return;
    // 80C786D8: addi    r4, r4, -24956
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24956);

label_80C786DC:
    ctx->pc = 0x80C786DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C786DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C786DC: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C786DCu)) return;
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
label_80C786E0:
    ctx->pc = 0x80C786E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C786E0u)) return;
    // 80C786E0: lis     r4, -27416
    ctx->gpr[4] = ((u32)(s32)(-27416) << 16);

label_80C786E4:
    ctx->pc = 0x80C786E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C786E4u)) return;
    // 80C786E4: addi    r4, r4, -24952
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24952);

label_80C786E8:
    ctx->pc = 0x80C786E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C786E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C786E8: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C786E8u)) return;
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
label_80C786EC:
    ctx->pc = 0x80C786ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C786ECu)) return;
    // 80C786EC: lis     r4, -27416
    ctx->gpr[4] = ((u32)(s32)(-27416) << 16);

label_80C786F0:
    ctx->pc = 0x80C786F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C786F0u)) return;
    // 80C786F0: addi    r4, r4, -24948
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24948);

label_80C786F4:
    ctx->pc = 0x80C786F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C786F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C786F4: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C786F4u)) return;
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
label_80C786F8:
    ctx->pc = 0x80C786F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C786F8u)) return;
    // 80C786F8: bl      0x8045EF2C
    {
            ctx->lr = 0x80C786FCu;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80C786FC:
    ctx->pc = 0x80C786FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C786FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C786FC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C78700:
    ctx->pc = 0x80C78700u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78700u)) return;
    // 80C78700: bl      0x8045F220
    {
            ctx->lr = 0x80C78704u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C78704:
    ctx->pc = 0x80C78704u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78704u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C78704: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C78708:
    ctx->pc = 0x80C78708u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78708u)) return;
    // 80C78708: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80C7870C:
    ctx->pc = 0x80C7870Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7870Cu)) return;
    // 80C7870C: addi    r5, r5, -32768
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-32768);

label_80C78710:
    ctx->pc = 0x80C78710u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78710u)) return;
    // 80C78710: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C78714:
    ctx->pc = 0x80C78714u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78714u)) return;
    // 80C78714: bl      0x8045EEA8
    {
            ctx->lr = 0x80C78718u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80C78718:
    ctx->pc = 0x80C78718u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78718u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C78718: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C7871C:
    ctx->pc = 0x80C7871Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7871Cu)) return;
    // 80C7871C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C78720:
    ctx->pc = 0x80C78720u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78720u)) return;
    // 80C78720: lis     r5, -27416
    ctx->gpr[5] = ((u32)(s32)(-27416) << 16);

label_80C78724:
    ctx->pc = 0x80C78724u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78724u)) return;
    // 80C78724: addi    r5, r5, -24940
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24940);

label_80C78728:
    ctx->pc = 0x80C78728u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78728u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C78728: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C78728u)) return;
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
label_80C7872C:
    ctx->pc = 0x80C7872Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7872Cu)) return;
    // 80C7872C: lis     r5, -27416
    ctx->gpr[5] = ((u32)(s32)(-27416) << 16);

label_80C78730:
    ctx->pc = 0x80C78730u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78730u)) return;
    // 80C78730: addi    r5, r5, -24936
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24936);

label_80C78734:
    ctx->pc = 0x80C78734u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78734u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C78734: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C78734u)) return;
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
label_80C78738:
    ctx->pc = 0x80C78738u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78738u)) return;
    // 80C78738: lis     r5, -27416
    ctx->gpr[5] = ((u32)(s32)(-27416) << 16);

label_80C7873C:
    ctx->pc = 0x80C7873Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7873Cu)) return;
    // 80C7873C: addi    r5, r5, -24932
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24932);

label_80C78740:
    ctx->pc = 0x80C78740u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78740u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C78740: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C78740u)) return;
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
label_80C78744:
    ctx->pc = 0x80C78744u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78744u)) return;
    // 80C78744: bl      0x8045C750
    {
            ctx->lr = 0x80C78748u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C78748:
    ctx->pc = 0x80C78748u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78748u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80C78748: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C7874C:
    ctx->pc = 0x80C7874Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7874Cu)) return;
    // 80C7874C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C78750:
    ctx->pc = 0x80C78750u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78750u)) return;
    // 80C78750: li      r5, 3840
    ctx->gpr[5] = (u32)(s32)(3840);

label_80C78754:
    ctx->pc = 0x80C78754u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78754u)) return;
    // 80C78754: li      r6, 25344
    ctx->gpr[6] = (u32)(s32)(25344);

label_80C78758:
    ctx->pc = 0x80C78758u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78758u)) return;
    // 80C78758: li      r7, 768
    ctx->gpr[7] = (u32)(s32)(768);

label_80C7875C:
    ctx->pc = 0x80C7875Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7875Cu)) return;
    // 80C7875C: bl      0x8045C7B4
    {
            ctx->lr = 0x80C78760u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C78760:
    ctx->pc = 0x80C78760u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78760u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C78760: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C78764:
    ctx->pc = 0x80C78764u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78764u)) return;
    // 80C78764: li      r4, 140
    ctx->gpr[4] = (u32)(s32)(140);

label_80C78768:
    ctx->pc = 0x80C78768u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78768u)) return;
    // 80C78768: lis     r5, -27416
    ctx->gpr[5] = ((u32)(s32)(-27416) << 16);

label_80C7876C:
    ctx->pc = 0x80C7876Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7876Cu)) return;
    // 80C7876C: addi    r5, r5, -24928
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24928);

label_80C78770:
    ctx->pc = 0x80C78770u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78770u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C78770: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C78770u)) return;
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
label_80C78774:
    ctx->pc = 0x80C78774u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78774u)) return;
    // 80C78774: lis     r5, -27416
    ctx->gpr[5] = ((u32)(s32)(-27416) << 16);

label_80C78778:
    ctx->pc = 0x80C78778u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78778u)) return;
    // 80C78778: addi    r5, r5, -24924
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24924);

label_80C7877C:
    ctx->pc = 0x80C7877Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7877Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C7877C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C7877Cu)) return;
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
label_80C78780:
    ctx->pc = 0x80C78780u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78780u)) return;
    // 80C78780: lis     r5, -27416
    ctx->gpr[5] = ((u32)(s32)(-27416) << 16);

label_80C78784:
    ctx->pc = 0x80C78784u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78784u)) return;
    // 80C78784: addi    r5, r5, -24920
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24920);

label_80C78788:
    ctx->pc = 0x80C78788u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78788u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C78788: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C78788u)) return;
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
label_80C7878C:
    ctx->pc = 0x80C7878Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7878Cu)) return;
    // 80C7878C: bl      0x8045C750
    {
            ctx->lr = 0x80C78790u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C78790:
    ctx->pc = 0x80C78790u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78790u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C78790: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C78794:
    ctx->pc = 0x80C78794u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78794u)) return;
    // 80C78794: li      r4, 140
    ctx->gpr[4] = (u32)(s32)(140);

label_80C78798:
    ctx->pc = 0x80C78798u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78798u)) return;
    // 80C78798: li      r5, 3840
    ctx->gpr[5] = (u32)(s32)(3840);

label_80C7879C:
    ctx->pc = 0x80C7879Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7879Cu)) return;
    // 80C7879C: li      r6, 32256
    ctx->gpr[6] = (u32)(s32)(32256);

label_80C787A0:
    ctx->pc = 0x80C787A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C787A0u)) return;
    // 80C787A0: lis     r7, 1
    ctx->gpr[7] = ((u32)(s32)(1) << 16);

label_80C787A4:
    ctx->pc = 0x80C787A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C787A4u)) return;
    // 80C787A4: addi    r7, r7, -768
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-768);

label_80C787A8:
    ctx->pc = 0x80C787A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C787A8u)) return;
    // 80C787A8: bl      0x8045C7B4
    {
            ctx->lr = 0x80C787ACu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C787AC:
    ctx->pc = 0x80C787ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C787ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C787AC: li      r3, 140
    ctx->gpr[3] = (u32)(s32)(140);

label_80C787B0:
    ctx->pc = 0x80C787B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C787B0u)) return;
    // 80C787B0: bl      0x8045F7C8
    {
            ctx->lr = 0x80C787B4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C787B4:
    ctx->pc = 0x80C787B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C787B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C787B4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C787B8:
    ctx->pc = 0x80C787B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C787B8u)) return;
    // 80C787B8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C787BC:
    ctx->pc = 0x80C787BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C787BCu)) return;
    // 80C787BC: lis     r5, -27416
    ctx->gpr[5] = ((u32)(s32)(-27416) << 16);

label_80C787C0:
    ctx->pc = 0x80C787C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C787C0u)) return;
    // 80C787C0: addi    r5, r5, -24916
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24916);

label_80C787C4:
    ctx->pc = 0x80C787C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C787C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C787C4: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C787C4u)) return;
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
label_80C787C8:
    ctx->pc = 0x80C787C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C787C8u)) return;
    // 80C787C8: lis     r5, -27416
    ctx->gpr[5] = ((u32)(s32)(-27416) << 16);

label_80C787CC:
    ctx->pc = 0x80C787CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C787CCu)) return;
    // 80C787CC: addi    r5, r5, -24912
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24912);

label_80C787D0:
    ctx->pc = 0x80C787D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C787D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C787D0: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C787D0u)) return;
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
label_80C787D4:
    ctx->pc = 0x80C787D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C787D4u)) return;
    // 80C787D4: lis     r5, -27416
    ctx->gpr[5] = ((u32)(s32)(-27416) << 16);

label_80C787D8:
    ctx->pc = 0x80C787D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C787D8u)) return;
    // 80C787D8: addi    r5, r5, -24908
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24908);

label_80C787DC:
    ctx->pc = 0x80C787DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C787DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C787DC: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C787DCu)) return;
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
label_80C787E0:
    ctx->pc = 0x80C787E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C787E0u)) return;
    // 80C787E0: bl      0x8045C750
    {
            ctx->lr = 0x80C787E4u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C787E4:
    ctx->pc = 0x80C787E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C787E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C787E4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C787E8:
    ctx->pc = 0x80C787E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C787E8u)) return;
    // 80C787E8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C787EC:
    ctx->pc = 0x80C787ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C787ECu)) return;
    // 80C787EC: li      r5, 4864
    ctx->gpr[5] = (u32)(s32)(4864);

label_80C787F0:
    ctx->pc = 0x80C787F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C787F0u)) return;
    // 80C787F0: lis     r7, 1
    ctx->gpr[7] = ((u32)(s32)(1) << 16);

label_80C787F4:
    ctx->pc = 0x80C787F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C787F4u)) return;
    // 80C787F4: addi    r6, r7, -25982
    ctx->gpr[6] = ctx->gpr[7] + (u32)(s32)(-25982);

label_80C787F8:
    ctx->pc = 0x80C787F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C787F8u)) return;
    // 80C787F8: addi    r7, r7, -256
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-256);

label_80C787FC:
    ctx->pc = 0x80C787FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C787FCu)) return;
    // 80C787FC: bl      0x8045C7B4
    {
            ctx->lr = 0x80C78800u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C78800:
    ctx->pc = 0x80C78800u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78800u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C78800: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C78804:
    ctx->pc = 0x80C78804u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78804u)) return;
    // 80C78804: li      r4, 130
    ctx->gpr[4] = (u32)(s32)(130);

label_80C78808:
    ctx->pc = 0x80C78808u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78808u)) return;
    // 80C78808: lis     r5, -27416
    ctx->gpr[5] = ((u32)(s32)(-27416) << 16);

label_80C7880C:
    ctx->pc = 0x80C7880Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7880Cu)) return;
    // 80C7880C: addi    r5, r5, -24904
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24904);

label_80C78810:
    ctx->pc = 0x80C78810u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78810u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C78810: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C78810u)) return;
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
label_80C78814:
    ctx->pc = 0x80C78814u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78814u)) return;
    // 80C78814: lis     r5, -27416
    ctx->gpr[5] = ((u32)(s32)(-27416) << 16);

label_80C78818:
    ctx->pc = 0x80C78818u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78818u)) return;
    // 80C78818: addi    r5, r5, -24900
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24900);

label_80C7881C:
    ctx->pc = 0x80C7881Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7881Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C7881C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C7881Cu)) return;
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
label_80C78820:
    ctx->pc = 0x80C78820u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78820u)) return;
    // 80C78820: lis     r5, -27416
    ctx->gpr[5] = ((u32)(s32)(-27416) << 16);

label_80C78824:
    ctx->pc = 0x80C78824u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78824u)) return;
    // 80C78824: addi    r5, r5, -24908
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24908);

label_80C78828:
    ctx->pc = 0x80C78828u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78828u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C78828: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C78828u)) return;
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
label_80C7882C:
    ctx->pc = 0x80C7882Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7882Cu)) return;
    // 80C7882C: bl      0x8045C750
    {
            ctx->lr = 0x80C78830u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C78830:
    ctx->pc = 0x80C78830u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78830u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C78830: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C78834:
    ctx->pc = 0x80C78834u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78834u)) return;
    // 80C78834: li      r4, 130
    ctx->gpr[4] = (u32)(s32)(130);

label_80C78838:
    ctx->pc = 0x80C78838u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78838u)) return;
    // 80C78838: li      r5, 2304
    ctx->gpr[5] = (u32)(s32)(2304);

label_80C7883C:
    ctx->pc = 0x80C7883Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7883Cu)) return;
    // 80C7883C: lis     r7, 1
    ctx->gpr[7] = ((u32)(s32)(1) << 16);

label_80C78840:
    ctx->pc = 0x80C78840u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78840u)) return;
    // 80C78840: addi    r6, r7, -25214
    ctx->gpr[6] = ctx->gpr[7] + (u32)(s32)(-25214);

label_80C78844:
    ctx->pc = 0x80C78844u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78844u)) return;
    // 80C78844: addi    r7, r7, -256
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-256);

label_80C78848:
    ctx->pc = 0x80C78848u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78848u)) return;
    // 80C78848: bl      0x8045C7B4
    {
            ctx->lr = 0x80C7884Cu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C7884C:
    ctx->pc = 0x80C7884Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C7884Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C7884C: li      r3, 130
    ctx->gpr[3] = (u32)(s32)(130);

label_80C78850:
    ctx->pc = 0x80C78850u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78850u)) return;
    // 80C78850: bl      0x8045F7C8
    {
            ctx->lr = 0x80C78854u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C78854:
    ctx->pc = 0x80C78854u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78854u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C78854: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C78858:
    ctx->pc = 0x80C78858u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78858u)) return;
    // 80C78858: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C7885C:
    ctx->pc = 0x80C7885Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7885Cu)) return;
    // 80C7885C: lis     r5, -27416
    ctx->gpr[5] = ((u32)(s32)(-27416) << 16);

label_80C78860:
    ctx->pc = 0x80C78860u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78860u)) return;
    // 80C78860: addi    r5, r5, -24896
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24896);

label_80C78864:
    ctx->pc = 0x80C78864u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78864u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C78864: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C78864u)) return;
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
label_80C78868:
    ctx->pc = 0x80C78868u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78868u)) return;
    // 80C78868: lis     r5, -27416
    ctx->gpr[5] = ((u32)(s32)(-27416) << 16);

label_80C7886C:
    ctx->pc = 0x80C7886Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7886Cu)) return;
    // 80C7886C: addi    r5, r5, -24892
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24892);

label_80C78870:
    ctx->pc = 0x80C78870u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78870u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C78870: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C78870u)) return;
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
label_80C78874:
    ctx->pc = 0x80C78874u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78874u)) return;
    // 80C78874: lis     r5, -27416
    ctx->gpr[5] = ((u32)(s32)(-27416) << 16);

label_80C78878:
    ctx->pc = 0x80C78878u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78878u)) return;
    // 80C78878: addi    r5, r5, -24888
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24888);

label_80C7887C:
    ctx->pc = 0x80C7887Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7887Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C7887C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C7887Cu)) return;
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
label_80C78880:
    ctx->pc = 0x80C78880u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78880u)) return;
    // 80C78880: bl      0x8045C750
    {
            ctx->lr = 0x80C78884u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C78884:
    ctx->pc = 0x80C78884u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78884u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C78884: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C78888:
    ctx->pc = 0x80C78888u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78888u)) return;
    // 80C78888: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C7888C:
    ctx->pc = 0x80C7888Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7888Cu)) return;
    // 80C7888C: li      r5, 256
    ctx->gpr[5] = (u32)(s32)(256);

label_80C78890:
    ctx->pc = 0x80C78890u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78890u)) return;
    // 80C78890: lis     r7, 1
    ctx->gpr[7] = ((u32)(s32)(1) << 16);

label_80C78894:
    ctx->pc = 0x80C78894u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78894u)) return;
    // 80C78894: addi    r6, r7, -15486
    ctx->gpr[6] = ctx->gpr[7] + (u32)(s32)(-15486);

label_80C78898:
    ctx->pc = 0x80C78898u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78898u)) return;
    // 80C78898: addi    r7, r7, -256
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-256);

label_80C7889C:
    ctx->pc = 0x80C7889Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7889Cu)) return;
    // 80C7889C: bl      0x8045C7B4
    {
            ctx->lr = 0x80C788A0u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C788A0:
    ctx->pc = 0x80C788A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C788A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C788A0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C788A4:
    ctx->pc = 0x80C788A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C788A4u)) return;
    // 80C788A4: li      r4, 35
    ctx->gpr[4] = (u32)(s32)(35);

label_80C788A8:
    ctx->pc = 0x80C788A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C788A8u)) return;
    // 80C788A8: lis     r5, -27416
    ctx->gpr[5] = ((u32)(s32)(-27416) << 16);

label_80C788AC:
    ctx->pc = 0x80C788ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C788ACu)) return;
    // 80C788AC: addi    r5, r5, -24884
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24884);

label_80C788B0:
    ctx->pc = 0x80C788B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C788B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C788B0: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C788B0u)) return;
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
label_80C788B4:
    ctx->pc = 0x80C788B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C788B4u)) return;
    // 80C788B4: lis     r5, -27416
    ctx->gpr[5] = ((u32)(s32)(-27416) << 16);

label_80C788B8:
    ctx->pc = 0x80C788B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C788B8u)) return;
    // 80C788B8: addi    r5, r5, -24880
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24880);

label_80C788BC:
    ctx->pc = 0x80C788BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C788BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C788BC: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C788BCu)) return;
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
label_80C788C0:
    ctx->pc = 0x80C788C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C788C0u)) return;
    // 80C788C0: lis     r5, -27416
    ctx->gpr[5] = ((u32)(s32)(-27416) << 16);

label_80C788C4:
    ctx->pc = 0x80C788C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C788C4u)) return;
    // 80C788C4: addi    r5, r5, -24876
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24876);

label_80C788C8:
    ctx->pc = 0x80C788C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C788C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C788C8: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C788C8u)) return;
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
label_80C788CC:
    ctx->pc = 0x80C788CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C788CCu)) return;
    // 80C788CC: bl      0x8045C750
    {
            ctx->lr = 0x80C788D0u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C788D0:
    ctx->pc = 0x80C788D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C788D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C788D0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C788D4:
    ctx->pc = 0x80C788D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C788D4u)) return;
    // 80C788D4: li      r4, 35
    ctx->gpr[4] = (u32)(s32)(35);

label_80C788D8:
    ctx->pc = 0x80C788D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C788D8u)) return;
    // 80C788D8: li      r5, 256
    ctx->gpr[5] = (u32)(s32)(256);

label_80C788DC:
    ctx->pc = 0x80C788DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C788DCu)) return;
    // 80C788DC: lis     r7, 1
    ctx->gpr[7] = ((u32)(s32)(1) << 16);

label_80C788E0:
    ctx->pc = 0x80C788E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C788E0u)) return;
    // 80C788E0: addi    r6, r7, -12926
    ctx->gpr[6] = ctx->gpr[7] + (u32)(s32)(-12926);

label_80C788E4:
    ctx->pc = 0x80C788E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C788E4u)) return;
    // 80C788E4: addi    r7, r7, -256
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-256);

label_80C788E8:
    ctx->pc = 0x80C788E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C788E8u)) return;
    // 80C788E8: bl      0x8045C7B4
    {
            ctx->lr = 0x80C788ECu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C788EC:
    ctx->pc = 0x80C788ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C788ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C788EC: li      r3, 35
    ctx->gpr[3] = (u32)(s32)(35);

label_80C788F0:
    ctx->pc = 0x80C788F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C788F0u)) return;
    // 80C788F0: bl      0x8045F7C8
    {
            ctx->lr = 0x80C788F4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C788F4:
    ctx->pc = 0x80C788F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C788F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C788F4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C788F8:
    ctx->pc = 0x80C788F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C788F8u)) return;
    // 80C788F8: li      r4, 130
    ctx->gpr[4] = (u32)(s32)(130);

label_80C788FC:
    ctx->pc = 0x80C788FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C788FCu)) return;
    // 80C788FC: lis     r5, -27416
    ctx->gpr[5] = ((u32)(s32)(-27416) << 16);

label_80C78900:
    ctx->pc = 0x80C78900u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78900u)) return;
    // 80C78900: addi    r5, r5, -24872
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24872);

label_80C78904:
    ctx->pc = 0x80C78904u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78904u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C78904: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C78904u)) return;
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
label_80C78908:
    ctx->pc = 0x80C78908u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78908u)) return;
    // 80C78908: lis     r5, -27416
    ctx->gpr[5] = ((u32)(s32)(-27416) << 16);

label_80C7890C:
    ctx->pc = 0x80C7890Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7890Cu)) return;
    // 80C7890C: addi    r5, r5, -24868
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24868);

label_80C78910:
    ctx->pc = 0x80C78910u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78910u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C78910: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C78910u)) return;
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
label_80C78914:
    ctx->pc = 0x80C78914u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78914u)) return;
    // 80C78914: lis     r5, -27416
    ctx->gpr[5] = ((u32)(s32)(-27416) << 16);

label_80C78918:
    ctx->pc = 0x80C78918u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78918u)) return;
    // 80C78918: addi    r5, r5, -24864
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24864);

label_80C7891C:
    ctx->pc = 0x80C7891Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7891Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C7891C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C7891Cu)) return;
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
label_80C78920:
    ctx->pc = 0x80C78920u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78920u)) return;
    // 80C78920: bl      0x8045C750
    {
            ctx->lr = 0x80C78924u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C78924:
    ctx->pc = 0x80C78924u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78924u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C78924: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C78928:
    ctx->pc = 0x80C78928u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78928u)) return;
    // 80C78928: li      r4, 130
    ctx->gpr[4] = (u32)(s32)(130);

label_80C7892C:
    ctx->pc = 0x80C7892Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7892Cu)) return;
    // 80C7892C: li      r5, 256
    ctx->gpr[5] = (u32)(s32)(256);

label_80C78930:
    ctx->pc = 0x80C78930u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78930u)) return;
    // 80C78930: lis     r7, 1
    ctx->gpr[7] = ((u32)(s32)(1) << 16);

label_80C78934:
    ctx->pc = 0x80C78934u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78934u)) return;
    // 80C78934: addi    r6, r7, -2942
    ctx->gpr[6] = ctx->gpr[7] + (u32)(s32)(-2942);

label_80C78938:
    ctx->pc = 0x80C78938u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78938u)) return;
    // 80C78938: addi    r7, r7, -256
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-256);

label_80C7893C:
    ctx->pc = 0x80C7893Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7893Cu)) return;
    // 80C7893C: bl      0x8045C7B4
    {
            ctx->lr = 0x80C78940u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C78940:
    ctx->pc = 0x80C78940u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78940u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C78940: li      r3, 1209
    ctx->gpr[3] = (u32)(s32)(1209);

label_80C78944:
    ctx->pc = 0x80C78944u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78944u)) return;
    // 80C78944: bl      0x8045BFA0
    {
            ctx->lr = 0x80C78948u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80C78948:
    ctx->pc = 0x80C78948u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78948u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80C78948: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80C7894C:
    ctx->pc = 0x80C7894Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7894Cu)) return;
    // 80C7894C: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80C78950:
    ctx->pc = 0x80C78950u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78950u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C78950: lwz     r0, 0(r3)
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
label_80C78954:
    ctx->pc = 0x80C78954u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78954u)) return;
    // 80C78954: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80C78958:
    ctx->pc = 0x80C78958u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78958u)) return;
    // 80C78958: lis     r3, -27416
    ctx->gpr[3] = ((u32)(s32)(-27416) << 16);

label_80C7895C:
    ctx->pc = 0x80C7895Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7895Cu)) return;
    // 80C7895C: addi    r3, r3, -24016
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24016);

label_80C78960:
    ctx->pc = 0x80C78960u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78960u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C78960: lwzx    r3, r3, r0
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
label_80C78964:
    ctx->pc = 0x80C78964u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78964u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C78964: lwz     r3, 0(r3)
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
label_80C78968:
    ctx->pc = 0x80C78968u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78968u)) return;
    // 80C78968: bl      0x8045F6FC
    {
            ctx->lr = 0x80C7896Cu;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80C7896C:
    ctx->pc = 0x80C7896Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C7896Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C7896C: li      r3, 120
    ctx->gpr[3] = (u32)(s32)(120);

label_80C78970:
    ctx->pc = 0x80C78970u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78970u)) return;
    // 80C78970: bl      0x8045F7C8
    {
            ctx->lr = 0x80C78974u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C78974:
    ctx->pc = 0x80C78974u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78974u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C78974: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C78978:
    ctx->pc = 0x80C78978u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78978u)) return;
    // 80C78978: li      r4, 120
    ctx->gpr[4] = (u32)(s32)(120);

label_80C7897C:
    ctx->pc = 0x80C7897Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7897Cu)) return;
    // 80C7897C: lis     r5, -27416
    ctx->gpr[5] = ((u32)(s32)(-27416) << 16);

label_80C78980:
    ctx->pc = 0x80C78980u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78980u)) return;
    // 80C78980: addi    r5, r5, -24860
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24860);

label_80C78984:
    ctx->pc = 0x80C78984u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78984u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C78984: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C78984u)) return;
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
label_80C78988:
    ctx->pc = 0x80C78988u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78988u)) return;
    // 80C78988: lis     r5, -27416
    ctx->gpr[5] = ((u32)(s32)(-27416) << 16);

label_80C7898C:
    ctx->pc = 0x80C7898Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7898Cu)) return;
    // 80C7898C: addi    r5, r5, -24856
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24856);

label_80C78990:
    ctx->pc = 0x80C78990u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78990u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C78990: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C78990u)) return;
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
label_80C78994:
    ctx->pc = 0x80C78994u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78994u)) return;
    // 80C78994: lis     r5, -27416
    ctx->gpr[5] = ((u32)(s32)(-27416) << 16);

label_80C78998:
    ctx->pc = 0x80C78998u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78998u)) return;
    // 80C78998: addi    r5, r5, -24852
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24852);

label_80C7899C:
    ctx->pc = 0x80C7899Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7899Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C7899C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C7899Cu)) return;
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
label_80C789A0:
    ctx->pc = 0x80C789A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C789A0u)) return;
    // 80C789A0: bl      0x8045C750
    {
            ctx->lr = 0x80C789A4u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C789A4:
    ctx->pc = 0x80C789A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C789A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C789A4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C789A8:
    ctx->pc = 0x80C789A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C789A8u)) return;
    // 80C789A8: li      r4, 120
    ctx->gpr[4] = (u32)(s32)(120);

label_80C789AC:
    ctx->pc = 0x80C789ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C789ACu)) return;
    // 80C789AC: li      r5, 256
    ctx->gpr[5] = (u32)(s32)(256);

label_80C789B0:
    ctx->pc = 0x80C789B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C789B0u)) return;
    // 80C789B0: lis     r7, 1
    ctx->gpr[7] = ((u32)(s32)(1) << 16);

label_80C789B4:
    ctx->pc = 0x80C789B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C789B4u)) return;
    // 80C789B4: addi    r6, r7, -1406
    ctx->gpr[6] = ctx->gpr[7] + (u32)(s32)(-1406);

label_80C789B8:
    ctx->pc = 0x80C789B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C789B8u)) return;
    // 80C789B8: addi    r7, r7, -256
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-256);

label_80C789BC:
    ctx->pc = 0x80C789BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C789BCu)) return;
    // 80C789BC: bl      0x8045C7B4
    {
            ctx->lr = 0x80C789C0u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C789C0:
    ctx->pc = 0x80C789C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C789C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C789C0: li      r3, 150
    ctx->gpr[3] = (u32)(s32)(150);

label_80C789C4:
    ctx->pc = 0x80C789C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C789C4u)) return;
    // 80C789C4: bl      0x8045F7C8
    {
            ctx->lr = 0x80C789C8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C789C8:
    ctx->pc = 0x80C789C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C789C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C789C8: bl      0x8045F32C
    {
            ctx->lr = 0x80C789CCu;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80C789CC:
    ctx->pc = 0x80C789CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C789CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C789CC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C789D0:
    ctx->pc = 0x80C789D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C789D0u)) return;
    // 80C789D0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C789D4:
    ctx->pc = 0x80C789D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C789D4u)) return;
    // 80C789D4: lis     r5, -27416
    ctx->gpr[5] = ((u32)(s32)(-27416) << 16);

label_80C789D8:
    ctx->pc = 0x80C789D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C789D8u)) return;
    // 80C789D8: addi    r5, r5, -24848
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24848);

label_80C789DC:
    ctx->pc = 0x80C789DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C789DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C789DC: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C789DCu)) return;
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
label_80C789E0:
    ctx->pc = 0x80C789E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C789E0u)) return;
    // 80C789E0: lis     r5, -27416
    ctx->gpr[5] = ((u32)(s32)(-27416) << 16);

label_80C789E4:
    ctx->pc = 0x80C789E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C789E4u)) return;
    // 80C789E4: addi    r5, r5, -24844
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24844);

label_80C789E8:
    ctx->pc = 0x80C789E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C789E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C789E8: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C789E8u)) return;
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
label_80C789EC:
    ctx->pc = 0x80C789ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C789ECu)) return;
    // 80C789EC: lis     r5, -27416
    ctx->gpr[5] = ((u32)(s32)(-27416) << 16);

label_80C789F0:
    ctx->pc = 0x80C789F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C789F0u)) return;
    // 80C789F0: addi    r5, r5, -24840
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24840);

label_80C789F4:
    ctx->pc = 0x80C789F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C789F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C789F4: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C789F4u)) return;
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
label_80C789F8:
    ctx->pc = 0x80C789F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C789F8u)) return;
    // 80C789F8: bl      0x8045C750
    {
            ctx->lr = 0x80C789FCu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C789FC:
    ctx->pc = 0x80C789FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C789FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C789FC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C78A00:
    ctx->pc = 0x80C78A00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78A00u)) return;
    // 80C78A00: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C78A04:
    ctx->pc = 0x80C78A04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78A04u)) return;
    // 80C78A04: lis     r7, 1
    ctx->gpr[7] = ((u32)(s32)(1) << 16);

label_80C78A08:
    ctx->pc = 0x80C78A08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78A08u)) return;
    // 80C78A08: addi    r5, r7, -1792
    ctx->gpr[5] = ctx->gpr[7] + (u32)(s32)(-1792);

label_80C78A0C:
    ctx->pc = 0x80C78A0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78A0Cu)) return;
    // 80C78A0C: li      r6, 27264
    ctx->gpr[6] = (u32)(s32)(27264);

label_80C78A10:
    ctx->pc = 0x80C78A10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78A10u)) return;
    // 80C78A10: addi    r7, r7, -256
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-256);

label_80C78A14:
    ctx->pc = 0x80C78A14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78A14u)) return;
    // 80C78A14: bl      0x8045C7B4
    {
            ctx->lr = 0x80C78A18u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C78A18:
    ctx->pc = 0x80C78A18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78A18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C78A18: li      r3, 20
    ctx->gpr[3] = (u32)(s32)(20);

label_80C78A1C:
    ctx->pc = 0x80C78A1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78A1Cu)) return;
    // 80C78A1C: bl      0x8045F7C8
    {
            ctx->lr = 0x80C78A20u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C78A20:
    ctx->pc = 0x80C78A20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78A20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C78A20: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C78A24:
    ctx->pc = 0x80C78A24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78A24u)) return;
    // 80C78A24: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80C78A28:
    ctx->pc = 0x80C78A28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78A28u)) return;
    // 80C78A28: lis     r5, -27416
    ctx->gpr[5] = ((u32)(s32)(-27416) << 16);

label_80C78A2C:
    ctx->pc = 0x80C78A2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78A2Cu)) return;
    // 80C78A2C: addi    r5, r5, -24836
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24836);

label_80C78A30:
    ctx->pc = 0x80C78A30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78A30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C78A30: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C78A30u)) return;
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
label_80C78A34:
    ctx->pc = 0x80C78A34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78A34u)) return;
    // 80C78A34: lis     r5, -27416
    ctx->gpr[5] = ((u32)(s32)(-27416) << 16);

label_80C78A38:
    ctx->pc = 0x80C78A38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78A38u)) return;
    // 80C78A38: addi    r5, r5, -24832
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24832);

label_80C78A3C:
    ctx->pc = 0x80C78A3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78A3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C78A3C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C78A3Cu)) return;
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
label_80C78A40:
    ctx->pc = 0x80C78A40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78A40u)) return;
    // 80C78A40: lis     r5, -27416
    ctx->gpr[5] = ((u32)(s32)(-27416) << 16);

label_80C78A44:
    ctx->pc = 0x80C78A44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78A44u)) return;
    // 80C78A44: addi    r5, r5, -24828
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24828);

label_80C78A48:
    ctx->pc = 0x80C78A48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78A48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C78A48: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C78A48u)) return;
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
label_80C78A4C:
    ctx->pc = 0x80C78A4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78A4Cu)) return;
    // 80C78A4C: bl      0x8045C750
    {
            ctx->lr = 0x80C78A50u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C78A50:
    ctx->pc = 0x80C78A50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78A50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C78A50: li      r3, 1210
    ctx->gpr[3] = (u32)(s32)(1210);

label_80C78A54:
    ctx->pc = 0x80C78A54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78A54u)) return;
    // 80C78A54: bl      0x8045BFA0
    {
            ctx->lr = 0x80C78A58u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80C78A58:
    ctx->pc = 0x80C78A58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78A58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80C78A58: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80C78A5C:
    ctx->pc = 0x80C78A5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78A5Cu)) return;
    // 80C78A5C: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80C78A60:
    ctx->pc = 0x80C78A60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78A60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C78A60: lwz     r0, 0(r3)
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
label_80C78A64:
    ctx->pc = 0x80C78A64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78A64u)) return;
    // 80C78A64: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80C78A68:
    ctx->pc = 0x80C78A68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78A68u)) return;
    // 80C78A68: lis     r3, -27416
    ctx->gpr[3] = ((u32)(s32)(-27416) << 16);

label_80C78A6C:
    ctx->pc = 0x80C78A6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78A6Cu)) return;
    // 80C78A6C: addi    r3, r3, -24016
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24016);

label_80C78A70:
    ctx->pc = 0x80C78A70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78A70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C78A70: lwzx    r3, r3, r0
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
label_80C78A74:
    ctx->pc = 0x80C78A74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78A74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C78A74: lwz     r3, 4(r3)
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
label_80C78A78:
    ctx->pc = 0x80C78A78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78A78u)) return;
    // 80C78A78: bl      0x8045F6FC
    {
            ctx->lr = 0x80C78A7Cu;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80C78A7C:
    ctx->pc = 0x80C78A7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78A7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C78A7C: li      r3, 13
    ctx->gpr[3] = (u32)(s32)(13);

label_80C78A80:
    ctx->pc = 0x80C78A80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78A80u)) return;
    // 80C78A80: li      r4, 90
    ctx->gpr[4] = (u32)(s32)(90);

label_80C78A84:
    ctx->pc = 0x80C78A84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78A84u)) return;
    // 80C78A84: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80C78A88:
    ctx->pc = 0x80C78A88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78A88u)) return;
    // 80C78A88: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C78A8C:
    ctx->pc = 0x80C78A8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78A8Cu)) return;
    // 80C78A8C: bl      0x80C795E0
    {
            ctx->lr = 0x80C78A90u;
            goto label_80C795E0;
    }

label_80C78A90:
    ctx->pc = 0x80C78A90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78A90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C78A90: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_80C78A94:
    ctx->pc = 0x80C78A94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78A94u)) return;
    // 80C78A94: bl      0x8045F7C8
    {
            ctx->lr = 0x80C78A98u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C78A98:
    ctx->pc = 0x80C78A98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78A98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C78A98: li      r3, 21
    ctx->gpr[3] = (u32)(s32)(21);

label_80C78A9C:
    ctx->pc = 0x80C78A9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78A9Cu)) return;
    // 80C78A9C: li      r4, 120
    ctx->gpr[4] = (u32)(s32)(120);

label_80C78AA0:
    ctx->pc = 0x80C78AA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78AA0u)) return;
    // 80C78AA0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80C78AA4:
    ctx->pc = 0x80C78AA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78AA4u)) return;
    // 80C78AA4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C78AA8:
    ctx->pc = 0x80C78AA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78AA8u)) return;
    // 80C78AA8: bl      0x80C795E0
    {
            ctx->lr = 0x80C78AACu;
            goto label_80C795E0;
    }

label_80C78AAC:
    ctx->pc = 0x80C78AACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78AACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C78AAC: li      r3, 20
    ctx->gpr[3] = (u32)(s32)(20);

label_80C78AB0:
    ctx->pc = 0x80C78AB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78AB0u)) return;
    // 80C78AB0: bl      0x8045F7C8
    {
            ctx->lr = 0x80C78AB4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C78AB4:
    ctx->pc = 0x80C78AB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78AB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C78AB4: bl      0x8045F32C
    {
            ctx->lr = 0x80C78AB8u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80C78AB8:
    ctx->pc = 0x80C78AB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78AB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C78AB8: lis     r3, -27416
    ctx->gpr[3] = ((u32)(s32)(-27416) << 16);

label_80C78ABC:
    ctx->pc = 0x80C78ABCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78ABCu)) return;
    // 80C78ABC: addi    r3, r3, -23968
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-23968);

label_80C78AC0:
    ctx->pc = 0x80C78AC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78AC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C78AC0: lwz     r3, 0(r3)
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
label_80C78AC4:
    ctx->pc = 0x80C78AC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78AC4u)) return;
    // 80C78AC4: cmplwi  r3, 0x0000
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

label_80C78AC8:
    ctx->pc = 0x80C78AC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78AC8u)) return;
    // 80C78AC8: bc    12, 2, 0x80C78ADC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C78ADC;
        }
    }

label_80C78ACC:
    ctx->pc = 0x80C78ACCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78ACCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C78ACC: lis     r4, -27416
    ctx->gpr[4] = ((u32)(s32)(-27416) << 16);

label_80C78AD0:
    ctx->pc = 0x80C78AD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78AD0u)) return;
    // 80C78AD0: addi    r4, r4, -24824
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24824);

label_80C78AD4:
    ctx->pc = 0x80C78AD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78AD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C78AD4: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C78AD4u)) return;
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
label_80C78AD8:
    ctx->pc = 0x80C78AD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78AD8u)) return;
    // 80C78AD8: bl      0x80C7995C
    {
            ctx->lr = 0x80C78ADCu;
            goto label_80C7995C;
    }

label_80C78ADC:
    ctx->pc = 0x80C78ADCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78ADCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C78ADC: lis     r3, -27416
    ctx->gpr[3] = ((u32)(s32)(-27416) << 16);

label_80C78AE0:
    ctx->pc = 0x80C78AE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78AE0u)) return;
    // 80C78AE0: addi    r3, r3, -23968
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-23968);

label_80C78AE4:
    ctx->pc = 0x80C78AE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78AE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C78AE4: lwz     r3, 0(r3)
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
label_80C78AE8:
    ctx->pc = 0x80C78AE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78AE8u)) return;
    // 80C78AE8: cmplwi  r3, 0x0000
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

label_80C78AEC:
    ctx->pc = 0x80C78AECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78AECu)) return;
    // 80C78AEC: bc    12, 2, 0x80C78B00
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C78B00;
        }
    }

label_80C78AF0:
    ctx->pc = 0x80C78AF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78AF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C78AF0: lis     r4, -27416
    ctx->gpr[4] = ((u32)(s32)(-27416) << 16);

label_80C78AF4:
    ctx->pc = 0x80C78AF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78AF4u)) return;
    // 80C78AF4: addi    r4, r4, -24820
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24820);

label_80C78AF8:
    ctx->pc = 0x80C78AF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78AF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C78AF8: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C78AF8u)) return;
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
label_80C78AFC:
    ctx->pc = 0x80C78AFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78AFCu)) return;
    // 80C78AFC: bl      0x80C79968
    {
            ctx->lr = 0x80C78B00u;
            goto label_80C79968;
    }

label_80C78B00:
    ctx->pc = 0x80C78B00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78B00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C78B00: lis     r3, -27416
    ctx->gpr[3] = ((u32)(s32)(-27416) << 16);

label_80C78B04:
    ctx->pc = 0x80C78B04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78B04u)) return;
    // 80C78B04: addi    r3, r3, -23968
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-23968);

label_80C78B08:
    ctx->pc = 0x80C78B08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78B08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C78B08: lwz     r3, 0(r3)
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
label_80C78B0C:
    ctx->pc = 0x80C78B0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78B0Cu)) return;
    // 80C78B0C: cmplwi  r3, 0x0000
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

label_80C78B10:
    ctx->pc = 0x80C78B10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78B10u)) return;
    // 80C78B10: bc    12, 2, 0x80C78B3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C78B3C;
        }
    }

label_80C78B14:
    ctx->pc = 0x80C78B14u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78B14u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C78B14: lis     r4, -27416
    ctx->gpr[4] = ((u32)(s32)(-27416) << 16);

label_80C78B18:
    ctx->pc = 0x80C78B18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78B18u)) return;
    // 80C78B18: addi    r4, r4, -24816
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24816);

label_80C78B1C:
    ctx->pc = 0x80C78B1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78B1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C78B1C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C78B1Cu)) return;
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
label_80C78B20:
    ctx->pc = 0x80C78B20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78B20u)) return;
    // 80C78B20: lis     r4, -27416
    ctx->gpr[4] = ((u32)(s32)(-27416) << 16);

label_80C78B24:
    ctx->pc = 0x80C78B24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78B24u)) return;
    // 80C78B24: addi    r4, r4, -24812
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24812);

label_80C78B28:
    ctx->pc = 0x80C78B28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78B28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C78B28: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C78B28u)) return;
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
label_80C78B2C:
    ctx->pc = 0x80C78B2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78B2Cu)) return;
    // 80C78B2C: lis     r4, -27416
    ctx->gpr[4] = ((u32)(s32)(-27416) << 16);

label_80C78B30:
    ctx->pc = 0x80C78B30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78B30u)) return;
    // 80C78B30: addi    r4, r4, -24808
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24808);

label_80C78B34:
    ctx->pc = 0x80C78B34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78B34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C78B34: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C78B34u)) return;
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
label_80C78B38:
    ctx->pc = 0x80C78B38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78B38u)) return;
    // 80C78B38: bl      0x80C79974
    {
            ctx->lr = 0x80C78B3Cu;
            goto label_80C79974;
    }

label_80C78B3C:
    ctx->pc = 0x80C78B3Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78B3Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C78B3C: li      r3, 14
    ctx->gpr[3] = (u32)(s32)(14);

label_80C78B40:
    ctx->pc = 0x80C78B40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78B40u)) return;
    // 80C78B40: li      r4, 128
    ctx->gpr[4] = (u32)(s32)(128);

label_80C78B44:
    ctx->pc = 0x80C78B44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78B44u)) return;
    // 80C78B44: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80C78B48:
    ctx->pc = 0x80C78B48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78B48u)) return;
    // 80C78B48: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C78B4C:
    ctx->pc = 0x80C78B4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78B4Cu)) return;
    // 80C78B4C: bl      0x80C795E0
    {
            ctx->lr = 0x80C78B50u;
            goto label_80C795E0;
    }

label_80C78B50:
    ctx->pc = 0x80C78B50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78B50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80C78B50: li      r3, 192
    ctx->gpr[3] = (u32)(s32)(192);

label_80C78B54:
    ctx->pc = 0x80C78B54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78B54u)) return;
    // 80C78B54: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C78B58:
    ctx->pc = 0x80C78B58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78B58u)) return;
    // 80C78B58: li      r5, 80
    ctx->gpr[5] = (u32)(s32)(80);

label_80C78B5C:
    ctx->pc = 0x80C78B5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78B5Cu)) return;
    // 80C78B5C: li      r6, 85
    ctx->gpr[6] = (u32)(s32)(85);

label_80C78B60:
    ctx->pc = 0x80C78B60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78B60u)) return;
    // 80C78B60: li      r7, 5
    ctx->gpr[7] = (u32)(s32)(5);

label_80C78B64:
    ctx->pc = 0x80C78B64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78B64u)) return;
    // 80C78B64: bl      0x80C799B8
    {
            ctx->lr = 0x80C78B68u;
            goto label_80C799B8;
    }

label_80C78B68:
    ctx->pc = 0x80C78B68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78B68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C78B68: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C78B6C:
    ctx->pc = 0x80C78B6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78B6Cu)) return;
    // 80C78B6C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C78B70:
    ctx->pc = 0x80C78B70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78B70u)) return;
    // 80C78B70: lis     r5, -27416
    ctx->gpr[5] = ((u32)(s32)(-27416) << 16);

label_80C78B74:
    ctx->pc = 0x80C78B74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78B74u)) return;
    // 80C78B74: addi    r5, r5, -24804
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24804);

label_80C78B78:
    ctx->pc = 0x80C78B78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78B78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C78B78: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C78B78u)) return;
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
label_80C78B7C:
    ctx->pc = 0x80C78B7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78B7Cu)) return;
    // 80C78B7C: lis     r5, -27416
    ctx->gpr[5] = ((u32)(s32)(-27416) << 16);

label_80C78B80:
    ctx->pc = 0x80C78B80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78B80u)) return;
    // 80C78B80: addi    r5, r5, -24800
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24800);

label_80C78B84:
    ctx->pc = 0x80C78B84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78B84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C78B84: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C78B84u)) return;
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
label_80C78B88:
    ctx->pc = 0x80C78B88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78B88u)) return;
    // 80C78B88: lis     r5, -27416
    ctx->gpr[5] = ((u32)(s32)(-27416) << 16);

label_80C78B8C:
    ctx->pc = 0x80C78B8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78B8Cu)) return;
    // 80C78B8C: addi    r5, r5, -24796
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24796);

label_80C78B90:
    ctx->pc = 0x80C78B90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78B90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C78B90: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C78B90u)) return;
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
label_80C78B94:
    ctx->pc = 0x80C78B94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78B94u)) return;
    // 80C78B94: bl      0x8045C750
    {
            ctx->lr = 0x80C78B98u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C78B98:
    ctx->pc = 0x80C78B98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78B98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C78B98: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C78B9C:
    ctx->pc = 0x80C78B9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78B9Cu)) return;
    // 80C78B9C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C78BA0:
    ctx->pc = 0x80C78BA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78BA0u)) return;
    // 80C78BA0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80C78BA4:
    ctx->pc = 0x80C78BA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78BA4u)) return;
    // 80C78BA4: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80C78BA8:
    ctx->pc = 0x80C78BA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78BA8u)) return;
    // 80C78BA8: addi    r6, r6, -6528
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-6528);

label_80C78BAC:
    ctx->pc = 0x80C78BACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78BACu)) return;
    // 80C78BAC: li      r7, 1792
    ctx->gpr[7] = (u32)(s32)(1792);

label_80C78BB0:
    ctx->pc = 0x80C78BB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78BB0u)) return;
    // 80C78BB0: bl      0x8045C7B4
    {
            ctx->lr = 0x80C78BB4u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C78BB4:
    ctx->pc = 0x80C78BB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78BB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C78BB4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C78BB8:
    ctx->pc = 0x80C78BB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78BB8u)) return;
    // 80C78BB8: li      r4, 9
    ctx->gpr[4] = (u32)(s32)(9);

label_80C78BBC:
    ctx->pc = 0x80C78BBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78BBCu)) return;
    // 80C78BBC: lis     r5, -27416
    ctx->gpr[5] = ((u32)(s32)(-27416) << 16);

label_80C78BC0:
    ctx->pc = 0x80C78BC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78BC0u)) return;
    // 80C78BC0: addi    r5, r5, -24792
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24792);

label_80C78BC4:
    ctx->pc = 0x80C78BC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78BC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C78BC4: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C78BC4u)) return;
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
label_80C78BC8:
    ctx->pc = 0x80C78BC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78BC8u)) return;
    // 80C78BC8: lis     r5, -27416
    ctx->gpr[5] = ((u32)(s32)(-27416) << 16);

label_80C78BCC:
    ctx->pc = 0x80C78BCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78BCCu)) return;
    // 80C78BCC: addi    r5, r5, -24788
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24788);

label_80C78BD0:
    ctx->pc = 0x80C78BD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78BD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C78BD0: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C78BD0u)) return;
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
label_80C78BD4:
    ctx->pc = 0x80C78BD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78BD4u)) return;
    // 80C78BD4: lis     r5, -27416
    ctx->gpr[5] = ((u32)(s32)(-27416) << 16);

label_80C78BD8:
    ctx->pc = 0x80C78BD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78BD8u)) return;
    // 80C78BD8: addi    r5, r5, -24784
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24784);

label_80C78BDC:
    ctx->pc = 0x80C78BDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78BDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C78BDC: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C78BDCu)) return;
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
label_80C78BE0:
    ctx->pc = 0x80C78BE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78BE0u)) return;
    // 80C78BE0: bl      0x8045C750
    {
            ctx->lr = 0x80C78BE4u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C78BE4:
    ctx->pc = 0x80C78BE4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78BE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C78BE4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C78BE8:
    ctx->pc = 0x80C78BE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78BE8u)) return;
    // 80C78BE8: li      r4, 9
    ctx->gpr[4] = (u32)(s32)(9);

label_80C78BEC:
    ctx->pc = 0x80C78BECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78BECu)) return;
    // 80C78BEC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80C78BF0:
    ctx->pc = 0x80C78BF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78BF0u)) return;
    // 80C78BF0: lis     r7, 1
    ctx->gpr[7] = ((u32)(s32)(1) << 16);

label_80C78BF4:
    ctx->pc = 0x80C78BF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78BF4u)) return;
    // 80C78BF4: addi    r6, r7, -6528
    ctx->gpr[6] = ctx->gpr[7] + (u32)(s32)(-6528);

label_80C78BF8:
    ctx->pc = 0x80C78BF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78BF8u)) return;
    // 80C78BF8: addi    r7, r7, -256
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-256);

label_80C78BFC:
    ctx->pc = 0x80C78BFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78BFCu)) return;
    // 80C78BFC: bl      0x8045C7B4
    {
            ctx->lr = 0x80C78C00u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C78C00:
    ctx->pc = 0x80C78C00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78C00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C78C00: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80C78C04:
    ctx->pc = 0x80C78C04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78C04u)) return;
    // 80C78C04: bl      0x8045F7C8
    {
            ctx->lr = 0x80C78C08u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C78C08:
    ctx->pc = 0x80C78C08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78C08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C78C08: li      r3, 14
    ctx->gpr[3] = (u32)(s32)(14);

label_80C78C0C:
    ctx->pc = 0x80C78C0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78C0Cu)) return;
    // 80C78C0C: li      r4, 128
    ctx->gpr[4] = (u32)(s32)(128);

label_80C78C10:
    ctx->pc = 0x80C78C10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78C10u)) return;
    // 80C78C10: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80C78C14:
    ctx->pc = 0x80C78C14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78C14u)) return;
    // 80C78C14: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C78C18:
    ctx->pc = 0x80C78C18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78C18u)) return;
    // 80C78C18: bl      0x80C795E0
    {
            ctx->lr = 0x80C78C1Cu;
            goto label_80C795E0;
    }

label_80C78C1C:
    ctx->pc = 0x80C78C1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78C1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C78C1C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C78C20:
    ctx->pc = 0x80C78C20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78C20u)) return;
    // 80C78C20: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C78C24:
    ctx->pc = 0x80C78C24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78C24u)) return;
    // 80C78C24: lis     r5, -27416
    ctx->gpr[5] = ((u32)(s32)(-27416) << 16);

label_80C78C28:
    ctx->pc = 0x80C78C28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78C28u)) return;
    // 80C78C28: addi    r5, r5, -24780
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24780);

label_80C78C2C:
    ctx->pc = 0x80C78C2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78C2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C78C2C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C78C2Cu)) return;
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
label_80C78C30:
    ctx->pc = 0x80C78C30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78C30u)) return;
    // 80C78C30: lis     r5, -27416
    ctx->gpr[5] = ((u32)(s32)(-27416) << 16);

label_80C78C34:
    ctx->pc = 0x80C78C34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78C34u)) return;
    // 80C78C34: addi    r5, r5, -24776
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24776);

label_80C78C38:
    ctx->pc = 0x80C78C38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78C38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C78C38: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C78C38u)) return;
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
label_80C78C3C:
    ctx->pc = 0x80C78C3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78C3Cu)) return;
    // 80C78C3C: lis     r5, -27416
    ctx->gpr[5] = ((u32)(s32)(-27416) << 16);

label_80C78C40:
    ctx->pc = 0x80C78C40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78C40u)) return;
    // 80C78C40: addi    r5, r5, -24772
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24772);

label_80C78C44:
    ctx->pc = 0x80C78C44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78C44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C78C44: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C78C44u)) return;
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
label_80C78C48:
    ctx->pc = 0x80C78C48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78C48u)) return;
    // 80C78C48: bl      0x8045C750
    {
            ctx->lr = 0x80C78C4Cu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C78C4C:
    ctx->pc = 0x80C78C4Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78C4Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80C78C4C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C78C50:
    ctx->pc = 0x80C78C50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78C50u)) return;
    // 80C78C50: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C78C54:
    ctx->pc = 0x80C78C54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78C54u)) return;
    // 80C78C54: li      r5, 3584
    ctx->gpr[5] = (u32)(s32)(3584);

label_80C78C58:
    ctx->pc = 0x80C78C58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78C58u)) return;
    // 80C78C58: li      r6, 8320
    ctx->gpr[6] = (u32)(s32)(8320);

label_80C78C5C:
    ctx->pc = 0x80C78C5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78C5Cu)) return;
    // 80C78C5C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C78C60:
    ctx->pc = 0x80C78C60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78C60u)) return;
    // 80C78C60: bl      0x8045C7B4
    {
            ctx->lr = 0x80C78C64u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C78C64:
    ctx->pc = 0x80C78C64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78C64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C78C64: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C78C68:
    ctx->pc = 0x80C78C68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78C68u)) return;
    // 80C78C68: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_80C78C6C:
    ctx->pc = 0x80C78C6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78C6Cu)) return;
    // 80C78C6C: lis     r5, -27416
    ctx->gpr[5] = ((u32)(s32)(-27416) << 16);

label_80C78C70:
    ctx->pc = 0x80C78C70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78C70u)) return;
    // 80C78C70: addi    r5, r5, -24768
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24768);

label_80C78C74:
    ctx->pc = 0x80C78C74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78C74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C78C74: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C78C74u)) return;
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
label_80C78C78:
    ctx->pc = 0x80C78C78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78C78u)) return;
    // 80C78C78: lis     r5, -27416
    ctx->gpr[5] = ((u32)(s32)(-27416) << 16);

label_80C78C7C:
    ctx->pc = 0x80C78C7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78C7Cu)) return;
    // 80C78C7C: addi    r5, r5, -24764
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24764);

label_80C78C80:
    ctx->pc = 0x80C78C80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78C80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C78C80: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C78C80u)) return;
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
label_80C78C84:
    ctx->pc = 0x80C78C84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78C84u)) return;
    // 80C78C84: lis     r5, -27416
    ctx->gpr[5] = ((u32)(s32)(-27416) << 16);

label_80C78C88:
    ctx->pc = 0x80C78C88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78C88u)) return;
    // 80C78C88: addi    r5, r5, -24760
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24760);

label_80C78C8C:
    ctx->pc = 0x80C78C8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78C8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C78C8C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C78C8Cu)) return;
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
label_80C78C90:
    ctx->pc = 0x80C78C90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78C90u)) return;
    // 80C78C90: bl      0x8045C750
    {
            ctx->lr = 0x80C78C94u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C78C94:
    ctx->pc = 0x80C78C94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78C94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C78C94: li      r3, 34
    ctx->gpr[3] = (u32)(s32)(34);

label_80C78C98:
    ctx->pc = 0x80C78C98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78C98u)) return;
    // 80C78C98: bl      0x8045F7C8
    {
            ctx->lr = 0x80C78C9Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C78C9C:
    ctx->pc = 0x80C78C9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78C9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C78C9C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C78CA0:
    ctx->pc = 0x80C78CA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78CA0u)) return;
    // 80C78CA0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C78CA4:
    ctx->pc = 0x80C78CA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78CA4u)) return;
    // 80C78CA4: lis     r5, -27416
    ctx->gpr[5] = ((u32)(s32)(-27416) << 16);

label_80C78CA8:
    ctx->pc = 0x80C78CA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78CA8u)) return;
    // 80C78CA8: addi    r5, r5, -24956
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24956);

label_80C78CAC:
    ctx->pc = 0x80C78CACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78CACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C78CAC: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C78CACu)) return;
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
label_80C78CB0:
    ctx->pc = 0x80C78CB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78CB0u)) return;
    // 80C78CB0: lis     r5, -27416
    ctx->gpr[5] = ((u32)(s32)(-27416) << 16);

label_80C78CB4:
    ctx->pc = 0x80C78CB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78CB4u)) return;
    // 80C78CB4: addi    r5, r5, -24756
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24756);

label_80C78CB8:
    ctx->pc = 0x80C78CB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78CB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C78CB8: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C78CB8u)) return;
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
label_80C78CBC:
    ctx->pc = 0x80C78CBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78CBCu)) return;
    // 80C78CBC: lis     r5, -27416
    ctx->gpr[5] = ((u32)(s32)(-27416) << 16);

label_80C78CC0:
    ctx->pc = 0x80C78CC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78CC0u)) return;
    // 80C78CC0: addi    r5, r5, -24752
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24752);

label_80C78CC4:
    ctx->pc = 0x80C78CC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78CC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C78CC4: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C78CC4u)) return;
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
label_80C78CC8:
    ctx->pc = 0x80C78CC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78CC8u)) return;
    // 80C78CC8: bl      0x8045C750
    {
            ctx->lr = 0x80C78CCCu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C78CCC:
    ctx->pc = 0x80C78CCCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78CCCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80C78CCC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C78CD0:
    ctx->pc = 0x80C78CD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78CD0u)) return;
    // 80C78CD0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C78CD4:
    ctx->pc = 0x80C78CD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78CD4u)) return;
    // 80C78CD4: li      r5, 1280
    ctx->gpr[5] = (u32)(s32)(1280);

label_80C78CD8:
    ctx->pc = 0x80C78CD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78CD8u)) return;
    // 80C78CD8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C78CDC:
    ctx->pc = 0x80C78CDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78CDCu)) return;
    // 80C78CDC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C78CE0:
    ctx->pc = 0x80C78CE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78CE0u)) return;
    // 80C78CE0: bl      0x8045C7B4
    {
            ctx->lr = 0x80C78CE4u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C78CE4:
    ctx->pc = 0x80C78CE4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78CE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C78CE4: li      r3, 14
    ctx->gpr[3] = (u32)(s32)(14);

label_80C78CE8:
    ctx->pc = 0x80C78CE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78CE8u)) return;
    // 80C78CE8: li      r4, 128
    ctx->gpr[4] = (u32)(s32)(128);

label_80C78CEC:
    ctx->pc = 0x80C78CECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78CECu)) return;
    // 80C78CEC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80C78CF0:
    ctx->pc = 0x80C78CF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78CF0u)) return;
    // 80C78CF0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C78CF4:
    ctx->pc = 0x80C78CF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78CF4u)) return;
    // 80C78CF4: bl      0x80C795E0
    {
            ctx->lr = 0x80C78CF8u;
            goto label_80C795E0;
    }

label_80C78CF8:
    ctx->pc = 0x80C78CF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78CF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C78CF8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C78CFC:
    ctx->pc = 0x80C78CFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78CFCu)) return;
    // 80C78CFC: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_80C78D00:
    ctx->pc = 0x80C78D00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78D00u)) return;
    // 80C78D00: li      r5, 12197
    ctx->gpr[5] = (u32)(s32)(12197);

label_80C78D04:
    ctx->pc = 0x80C78D04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78D04u)) return;
    // 80C78D04: bl      0x8045C0F8
    {
            ctx->lr = 0x80C78D08u;
            ctx->pc = 0x8045C0F8u;
            return;
    }

label_80C78D08:
    ctx->pc = 0x80C78D08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78D08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C78D08: li      r3, 7
    ctx->gpr[3] = (u32)(s32)(7);

label_80C78D0C:
    ctx->pc = 0x80C78D0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78D0Cu)) return;
    // 80C78D0C: bl      0x8045F7C8
    {
            ctx->lr = 0x80C78D10u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C78D10:
    ctx->pc = 0x80C78D10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78D10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C78D10: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C78D14:
    ctx->pc = 0x80C78D14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78D14u)) return;
    // 80C78D14: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80C78D18:
    ctx->pc = 0x80C78D18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78D18u)) return;
    // 80C78D18: li      r5, 12561
    ctx->gpr[5] = (u32)(s32)(12561);

label_80C78D1C:
    ctx->pc = 0x80C78D1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78D1Cu)) return;
    // 80C78D1C: bl      0x8045C0F8
    {
            ctx->lr = 0x80C78D20u;
            ctx->pc = 0x8045C0F8u;
            return;
    }

label_80C78D20:
    ctx->pc = 0x80C78D20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78D20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C78D20: li      r3, 7
    ctx->gpr[3] = (u32)(s32)(7);

label_80C78D24:
    ctx->pc = 0x80C78D24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78D24u)) return;
    // 80C78D24: bl      0x8045F7C8
    {
            ctx->lr = 0x80C78D28u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C78D28:
    ctx->pc = 0x80C78D28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78D28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C78D28: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C78D2C:
    ctx->pc = 0x80C78D2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78D2Cu)) return;
    // 80C78D2C: li      r4, 13
    ctx->gpr[4] = (u32)(s32)(13);

label_80C78D30:
    ctx->pc = 0x80C78D30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78D30u)) return;
    // 80C78D30: li      r5, 11105
    ctx->gpr[5] = (u32)(s32)(11105);

label_80C78D34:
    ctx->pc = 0x80C78D34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78D34u)) return;
    // 80C78D34: bl      0x8045C0F8
    {
            ctx->lr = 0x80C78D38u;
            ctx->pc = 0x8045C0F8u;
            return;
    }

label_80C78D38:
    ctx->pc = 0x80C78D38u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78D38u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C78D38: li      r3, 15
    ctx->gpr[3] = (u32)(s32)(15);

label_80C78D3C:
    ctx->pc = 0x80C78D3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78D3Cu)) return;
    // 80C78D3C: bl      0x8045F7C8
    {
            ctx->lr = 0x80C78D40u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C78D40:
    ctx->pc = 0x80C78D40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78D40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C78D40: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C78D44:
    ctx->pc = 0x80C78D44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78D44u)) return;
    // 80C78D44: li      r4, 60
    ctx->gpr[4] = (u32)(s32)(60);

label_80C78D48:
    ctx->pc = 0x80C78D48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78D48u)) return;
    // 80C78D48: li      r5, 7282
    ctx->gpr[5] = (u32)(s32)(7282);

label_80C78D4C:
    ctx->pc = 0x80C78D4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78D4Cu)) return;
    // 80C78D4C: bl      0x8045C0F8
    {
            ctx->lr = 0x80C78D50u;
            ctx->pc = 0x8045C0F8u;
            return;
    }

label_80C78D50:
    ctx->pc = 0x80C78D50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78D50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C78D50: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80C78D54:
    ctx->pc = 0x80C78D54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78D54u)) return;
    // 80C78D54: bl      0x8045F7C8
    {
            ctx->lr = 0x80C78D58u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C78D58:
    ctx->pc = 0x80C78D58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78D58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C78D58: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C78D5C:
    ctx->pc = 0x80C78D5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78D5Cu)) return;
    // 80C78D5C: li      r4, 30
    ctx->gpr[4] = (u32)(s32)(30);

label_80C78D60:
    ctx->pc = 0x80C78D60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78D60u)) return;
    // 80C78D60: li      r5, 6918
    ctx->gpr[5] = (u32)(s32)(6918);

label_80C78D64:
    ctx->pc = 0x80C78D64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78D64u)) return;
    // 80C78D64: bl      0x8045C0F8
    {
            ctx->lr = 0x80C78D68u;
            ctx->pc = 0x8045C0F8u;
            return;
    }

label_80C78D68:
    ctx->pc = 0x80C78D68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78D68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C78D68: li      r3, 40
    ctx->gpr[3] = (u32)(s32)(40);

label_80C78D6C:
    ctx->pc = 0x80C78D6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78D6Cu)) return;
    // 80C78D6C: bl      0x8045F7C8
    {
            ctx->lr = 0x80C78D70u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C78D70:
    ctx->pc = 0x80C78D70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78D70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C78D70: li      r3, 22
    ctx->gpr[3] = (u32)(s32)(22);

label_80C78D74:
    ctx->pc = 0x80C78D74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78D74u)) return;
    // 80C78D74: li      r4, 128
    ctx->gpr[4] = (u32)(s32)(128);

label_80C78D78:
    ctx->pc = 0x80C78D78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78D78u)) return;
    // 80C78D78: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80C78D7C:
    ctx->pc = 0x80C78D7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78D7Cu)) return;
    // 80C78D7C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C78D80:
    ctx->pc = 0x80C78D80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78D80u)) return;
    // 80C78D80: bl      0x80C795E0
    {
            ctx->lr = 0x80C78D84u;
            goto label_80C795E0;
    }

label_80C78D84:
    ctx->pc = 0x80C78D84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78D84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C78D84: lis     r3, -27416
    ctx->gpr[3] = ((u32)(s32)(-27416) << 16);

label_80C78D88:
    ctx->pc = 0x80C78D88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78D88u)) return;
    // 80C78D88: addi    r3, r3, -23968
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-23968);

label_80C78D8C:
    ctx->pc = 0x80C78D8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78D8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C78D8C: lwz     r3, 0(r3)
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
label_80C78D90:
    ctx->pc = 0x80C78D90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78D90u)) return;
    // 80C78D90: cmplwi  r3, 0x0000
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

label_80C78D94:
    ctx->pc = 0x80C78D94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78D94u)) return;
    // 80C78D94: bc    12, 2, 0x80C78DA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C78DA8;
        }
    }

label_80C78D98:
    ctx->pc = 0x80C78D98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78D98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C78D98: lis     r4, -27416
    ctx->gpr[4] = ((u32)(s32)(-27416) << 16);

label_80C78D9C:
    ctx->pc = 0x80C78D9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78D9Cu)) return;
    // 80C78D9C: addi    r4, r4, -24748
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24748);

label_80C78DA0:
    ctx->pc = 0x80C78DA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78DA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C78DA0: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C78DA0u)) return;
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
label_80C78DA4:
    ctx->pc = 0x80C78DA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78DA4u)) return;
    // 80C78DA4: bl      0x80C7995C
    {
            ctx->lr = 0x80C78DA8u;
            goto label_80C7995C;
    }

label_80C78DA8:
    ctx->pc = 0x80C78DA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78DA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C78DA8: bl      0x80C79A54
    {
            ctx->lr = 0x80C78DACu;
            goto label_80C79A54;
    }

label_80C78DAC:
    ctx->pc = 0x80C78DACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78DACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C78DAC: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80C78DB0:
    ctx->pc = 0x80C78DB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78DB0u)) return;
    // 80C78DB0: bl      0x8045F7C8
    {
            ctx->lr = 0x80C78DB4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C78DB4:
    ctx->pc = 0x80C78DB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78DB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C78DB4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C78DB8:
    ctx->pc = 0x80C78DB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78DB8u)) return;
    // 80C78DB8: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80C78DBC:
    ctx->pc = 0x80C78DBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78DBCu)) return;
    // 80C78DBC: li      r5, 12743
    ctx->gpr[5] = (u32)(s32)(12743);

label_80C78DC0:
    ctx->pc = 0x80C78DC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78DC0u)) return;
    // 80C78DC0: bl      0x8045C0F8
    {
            ctx->lr = 0x80C78DC4u;
            ctx->pc = 0x8045C0F8u;
            return;
    }

label_80C78DC4:
    ctx->pc = 0x80C78DC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78DC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C78DC4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C78DC8:
    ctx->pc = 0x80C78DC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78DC8u)) return;
    // 80C78DC8: bl      0x8045F7C8
    {
            ctx->lr = 0x80C78DCCu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C78DCC:
    ctx->pc = 0x80C78DCCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78DCCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C78DCC: lis     r3, -27416
    ctx->gpr[3] = ((u32)(s32)(-27416) << 16);

label_80C78DD0:
    ctx->pc = 0x80C78DD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78DD0u)) return;
    // 80C78DD0: addi    r3, r3, -23968
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-23968);

label_80C78DD4:
    ctx->pc = 0x80C78DD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78DD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C78DD4: lwz     r3, 0(r3)
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
label_80C78DD8:
    ctx->pc = 0x80C78DD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78DD8u)) return;
    // 80C78DD8: cmplwi  r3, 0x0000
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

label_80C78DDC:
    ctx->pc = 0x80C78DDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78DDCu)) return;
    // 80C78DDC: bc    12, 2, 0x80C78DF4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C78DF4;
        }
    }

label_80C78DE0:
    ctx->pc = 0x80C78DE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78DE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C78DE0: bl      0x8050F9E0
    {
            ctx->lr = 0x80C78DE4u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80C78DE4:
    ctx->pc = 0x80C78DE4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78DE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C78DE4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80C78DE8:
    ctx->pc = 0x80C78DE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78DE8u)) return;
    // 80C78DE8: lis     r3, -27416
    ctx->gpr[3] = ((u32)(s32)(-27416) << 16);

label_80C78DEC:
    ctx->pc = 0x80C78DECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78DECu)) return;
    // 80C78DEC: addi    r3, r3, -23968
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-23968);

label_80C78DF0:
    ctx->pc = 0x80C78DF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78DF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C78DF0: stw     r0, 0(r3)
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
label_80C78DF4:
    ctx->pc = 0x80C78DF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78DF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C78DF4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C78DF8:
    ctx->pc = 0x80C78DF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78DF8u)) return;
    // 80C78DF8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C78DFC:
    ctx->pc = 0x80C78DFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78DFCu)) return;
    // 80C78DFC: lis     r5, -27416
    ctx->gpr[5] = ((u32)(s32)(-27416) << 16);

label_80C78E00:
    ctx->pc = 0x80C78E00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78E00u)) return;
    // 80C78E00: addi    r5, r5, -24768
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24768);

label_80C78E04:
    ctx->pc = 0x80C78E04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78E04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C78E04: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C78E04u)) return;
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
label_80C78E08:
    ctx->pc = 0x80C78E08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78E08u)) return;
    // 80C78E08: lis     r5, -27416
    ctx->gpr[5] = ((u32)(s32)(-27416) << 16);

label_80C78E0C:
    ctx->pc = 0x80C78E0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78E0Cu)) return;
    // 80C78E0C: addi    r5, r5, -24764
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24764);

label_80C78E10:
    ctx->pc = 0x80C78E10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78E10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C78E10: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C78E10u)) return;
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
label_80C78E14:
    ctx->pc = 0x80C78E14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78E14u)) return;
    // 80C78E14: lis     r5, -27416
    ctx->gpr[5] = ((u32)(s32)(-27416) << 16);

label_80C78E18:
    ctx->pc = 0x80C78E18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78E18u)) return;
    // 80C78E18: addi    r5, r5, -24760
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24760);

label_80C78E1C:
    ctx->pc = 0x80C78E1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78E1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C78E1C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C78E1Cu)) return;
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
label_80C78E20:
    ctx->pc = 0x80C78E20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78E20u)) return;
    // 80C78E20: bl      0x8045C750
    {
            ctx->lr = 0x80C78E24u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C78E24:
    ctx->pc = 0x80C78E24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78E24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80C78E24: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C78E28:
    ctx->pc = 0x80C78E28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78E28u)) return;
    // 80C78E28: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C78E2C:
    ctx->pc = 0x80C78E2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78E2Cu)) return;
    // 80C78E2C: li      r5, 3584
    ctx->gpr[5] = (u32)(s32)(3584);

label_80C78E30:
    ctx->pc = 0x80C78E30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78E30u)) return;
    // 80C78E30: li      r6, 8320
    ctx->gpr[6] = (u32)(s32)(8320);

label_80C78E34:
    ctx->pc = 0x80C78E34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78E34u)) return;
    // 80C78E34: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C78E38:
    ctx->pc = 0x80C78E38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78E38u)) return;
    // 80C78E38: bl      0x8045C7B4
    {
            ctx->lr = 0x80C78E3Cu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C78E3C:
    ctx->pc = 0x80C78E3Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78E3Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C78E3C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C78E40:
    ctx->pc = 0x80C78E40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78E40u)) return;
    // 80C78E40: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C78E44:
    ctx->pc = 0x80C78E44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78E44u)) return;
    // 80C78E44: lis     r5, -27416
    ctx->gpr[5] = ((u32)(s32)(-27416) << 16);

label_80C78E48:
    ctx->pc = 0x80C78E48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78E48u)) return;
    // 80C78E48: addi    r5, r5, -24916
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24916);

label_80C78E4C:
    ctx->pc = 0x80C78E4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78E4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C78E4C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C78E4Cu)) return;
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
label_80C78E50:
    ctx->pc = 0x80C78E50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78E50u)) return;
    // 80C78E50: lis     r5, -27416
    ctx->gpr[5] = ((u32)(s32)(-27416) << 16);

label_80C78E54:
    ctx->pc = 0x80C78E54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78E54u)) return;
    // 80C78E54: addi    r5, r5, -24912
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24912);

label_80C78E58:
    ctx->pc = 0x80C78E58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78E58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C78E58: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C78E58u)) return;
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
label_80C78E5C:
    ctx->pc = 0x80C78E5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78E5Cu)) return;
    // 80C78E5C: lis     r5, -27416
    ctx->gpr[5] = ((u32)(s32)(-27416) << 16);

label_80C78E60:
    ctx->pc = 0x80C78E60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78E60u)) return;
    // 80C78E60: addi    r5, r5, -24908
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24908);

label_80C78E64:
    ctx->pc = 0x80C78E64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78E64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C78E64: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C78E64u)) return;
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
label_80C78E68:
    ctx->pc = 0x80C78E68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78E68u)) return;
    // 80C78E68: bl      0x8045C750
    {
            ctx->lr = 0x80C78E6Cu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C78E6C:
    ctx->pc = 0x80C78E6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78E6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C78E6C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C78E70:
    ctx->pc = 0x80C78E70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78E70u)) return;
    // 80C78E70: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C78E74:
    ctx->pc = 0x80C78E74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78E74u)) return;
    // 80C78E74: li      r5, 4864
    ctx->gpr[5] = (u32)(s32)(4864);

label_80C78E78:
    ctx->pc = 0x80C78E78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78E78u)) return;
    // 80C78E78: lis     r7, 1
    ctx->gpr[7] = ((u32)(s32)(1) << 16);

label_80C78E7C:
    ctx->pc = 0x80C78E7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78E7Cu)) return;
    // 80C78E7C: addi    r6, r7, -25982
    ctx->gpr[6] = ctx->gpr[7] + (u32)(s32)(-25982);

label_80C78E80:
    ctx->pc = 0x80C78E80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78E80u)) return;
    // 80C78E80: addi    r7, r7, -256
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-256);

label_80C78E84:
    ctx->pc = 0x80C78E84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78E84u)) return;
    // 80C78E84: bl      0x8045C7B4
    {
            ctx->lr = 0x80C78E88u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C78E88:
    ctx->pc = 0x80C78E88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78E88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C78E88: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C78E8C:
    ctx->pc = 0x80C78E8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78E8Cu)) return;
    // 80C78E8C: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_80C78E90:
    ctx->pc = 0x80C78E90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78E90u)) return;
    // 80C78E90: lis     r5, -27416
    ctx->gpr[5] = ((u32)(s32)(-27416) << 16);

label_80C78E94:
    ctx->pc = 0x80C78E94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78E94u)) return;
    // 80C78E94: addi    r5, r5, -24904
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24904);

label_80C78E98:
    ctx->pc = 0x80C78E98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78E98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C78E98: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C78E98u)) return;
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
label_80C78E9C:
    ctx->pc = 0x80C78E9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78E9Cu)) return;
    // 80C78E9C: lis     r5, -27416
    ctx->gpr[5] = ((u32)(s32)(-27416) << 16);

label_80C78EA0:
    ctx->pc = 0x80C78EA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78EA0u)) return;
    // 80C78EA0: addi    r5, r5, -24900
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24900);

label_80C78EA4:
    ctx->pc = 0x80C78EA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78EA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C78EA4: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C78EA4u)) return;
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
label_80C78EA8:
    ctx->pc = 0x80C78EA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78EA8u)) return;
    // 80C78EA8: lis     r5, -27416
    ctx->gpr[5] = ((u32)(s32)(-27416) << 16);

label_80C78EAC:
    ctx->pc = 0x80C78EACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78EACu)) return;
    // 80C78EAC: addi    r5, r5, -24908
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24908);

label_80C78EB0:
    ctx->pc = 0x80C78EB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78EB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C78EB0: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C78EB0u)) return;
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
label_80C78EB4:
    ctx->pc = 0x80C78EB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78EB4u)) return;
    // 80C78EB4: bl      0x8045C750
    {
            ctx->lr = 0x80C78EB8u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C78EB8:
    ctx->pc = 0x80C78EB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78EB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C78EB8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C78EBC:
    ctx->pc = 0x80C78EBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78EBCu)) return;
    // 80C78EBC: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_80C78EC0:
    ctx->pc = 0x80C78EC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78EC0u)) return;
    // 80C78EC0: li      r5, 2304
    ctx->gpr[5] = (u32)(s32)(2304);

label_80C78EC4:
    ctx->pc = 0x80C78EC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78EC4u)) return;
    // 80C78EC4: lis     r7, 1
    ctx->gpr[7] = ((u32)(s32)(1) << 16);

label_80C78EC8:
    ctx->pc = 0x80C78EC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78EC8u)) return;
    // 80C78EC8: addi    r6, r7, -25214
    ctx->gpr[6] = ctx->gpr[7] + (u32)(s32)(-25214);

label_80C78ECC:
    ctx->pc = 0x80C78ECCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78ECCu)) return;
    // 80C78ECC: addi    r7, r7, -256
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-256);

label_80C78ED0:
    ctx->pc = 0x80C78ED0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78ED0u)) return;
    // 80C78ED0: bl      0x8045C7B4
    {
            ctx->lr = 0x80C78ED4u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C78ED4:
    ctx->pc = 0x80C78ED4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78ED4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C78ED4: li      r3, 15
    ctx->gpr[3] = (u32)(s32)(15);

label_80C78ED8:
    ctx->pc = 0x80C78ED8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78ED8u)) return;
    // 80C78ED8: bl      0x8045F7C8
    {
            ctx->lr = 0x80C78EDCu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C78EDC:
    ctx->pc = 0x80C78EDCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78EDCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C78EDC: li      r3, 1211
    ctx->gpr[3] = (u32)(s32)(1211);

label_80C78EE0:
    ctx->pc = 0x80C78EE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78EE0u)) return;
    // 80C78EE0: bl      0x8045BFA0
    {
            ctx->lr = 0x80C78EE4u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80C78EE4:
    ctx->pc = 0x80C78EE4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78EE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80C78EE4: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80C78EE8:
    ctx->pc = 0x80C78EE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78EE8u)) return;
    // 80C78EE8: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80C78EEC:
    ctx->pc = 0x80C78EECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78EECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C78EEC: lwz     r0, 0(r3)
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
label_80C78EF0:
    ctx->pc = 0x80C78EF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78EF0u)) return;
    // 80C78EF0: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80C78EF4:
    ctx->pc = 0x80C78EF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78EF4u)) return;
    // 80C78EF4: lis     r3, -27416
    ctx->gpr[3] = ((u32)(s32)(-27416) << 16);

label_80C78EF8:
    ctx->pc = 0x80C78EF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78EF8u)) return;
    // 80C78EF8: addi    r3, r3, -24016
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24016);

label_80C78EFC:
    ctx->pc = 0x80C78EFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78EFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C78EFC: lwzx    r3, r3, r0
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
label_80C78F00:
    ctx->pc = 0x80C78F00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78F00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C78F00: lwz     r3, 8(r3)
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
label_80C78F04:
    ctx->pc = 0x80C78F04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78F04u)) return;
    // 80C78F04: bl      0x8045F6FC
    {
            ctx->lr = 0x80C78F08u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80C78F08:
    ctx->pc = 0x80C78F08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78F08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C78F08: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C78F0C:
    ctx->pc = 0x80C78F0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78F0Cu)) return;
    // 80C78F0C: bl      0x8045F7C8
    {
            ctx->lr = 0x80C78F10u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C78F10:
    ctx->pc = 0x80C78F10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78F10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C78F10: bl      0x8045BFF4
    {
            ctx->lr = 0x80C78F14u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80C78F14:
    ctx->pc = 0x80C78F14u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78F14u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C78F14: li      r3, 20
    ctx->gpr[3] = (u32)(s32)(20);

label_80C78F18:
    ctx->pc = 0x80C78F18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78F18u)) return;
    // 80C78F18: bl      0x8045F7C8
    {
            ctx->lr = 0x80C78F1Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C78F1C:
    ctx->pc = 0x80C78F1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78F1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C78F1C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C78F20:
    ctx->pc = 0x80C78F20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78F20u)) return;
    // 80C78F20: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C78F24:
    ctx->pc = 0x80C78F24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78F24u)) return;
    // 80C78F24: lis     r5, -27416
    ctx->gpr[5] = ((u32)(s32)(-27416) << 16);

label_80C78F28:
    ctx->pc = 0x80C78F28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78F28u)) return;
    // 80C78F28: addi    r5, r5, -24744
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24744);

label_80C78F2C:
    ctx->pc = 0x80C78F2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78F2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C78F2C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C78F2Cu)) return;
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
label_80C78F30:
    ctx->pc = 0x80C78F30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78F30u)) return;
    // 80C78F30: lis     r5, -27416
    ctx->gpr[5] = ((u32)(s32)(-27416) << 16);

label_80C78F34:
    ctx->pc = 0x80C78F34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78F34u)) return;
    // 80C78F34: addi    r5, r5, -24740
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24740);

label_80C78F38:
    ctx->pc = 0x80C78F38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78F38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C78F38: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C78F38u)) return;
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
label_80C78F3C:
    ctx->pc = 0x80C78F3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78F3Cu)) return;
    // 80C78F3C: lis     r5, -27416
    ctx->gpr[5] = ((u32)(s32)(-27416) << 16);

label_80C78F40:
    ctx->pc = 0x80C78F40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78F40u)) return;
    // 80C78F40: addi    r5, r5, -24736
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24736);

label_80C78F44:
    ctx->pc = 0x80C78F44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78F44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C78F44: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C78F44u)) return;
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
label_80C78F48:
    ctx->pc = 0x80C78F48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78F48u)) return;
    // 80C78F48: bl      0x8045C750
    {
            ctx->lr = 0x80C78F4Cu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C78F4C:
    ctx->pc = 0x80C78F4Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78F4Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80C78F4C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C78F50:
    ctx->pc = 0x80C78F50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78F50u)) return;
    // 80C78F50: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C78F54:
    ctx->pc = 0x80C78F54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78F54u)) return;
    // 80C78F54: li      r5, 2816
    ctx->gpr[5] = (u32)(s32)(2816);

label_80C78F58:
    ctx->pc = 0x80C78F58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78F58u)) return;
    // 80C78F58: li      r6, 24816
    ctx->gpr[6] = (u32)(s32)(24816);

label_80C78F5C:
    ctx->pc = 0x80C78F5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78F5Cu)) return;
    // 80C78F5C: li      r7, 1280
    ctx->gpr[7] = (u32)(s32)(1280);

label_80C78F60:
    ctx->pc = 0x80C78F60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78F60u)) return;
    // 80C78F60: bl      0x8045C7B4
    {
            ctx->lr = 0x80C78F64u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C78F64:
    ctx->pc = 0x80C78F64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78F64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C78F64: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C78F68:
    ctx->pc = 0x80C78F68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78F68u)) return;
    // 80C78F68: li      r4, 160
    ctx->gpr[4] = (u32)(s32)(160);

label_80C78F6C:
    ctx->pc = 0x80C78F6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78F6Cu)) return;
    // 80C78F6C: lis     r5, -27416
    ctx->gpr[5] = ((u32)(s32)(-27416) << 16);

label_80C78F70:
    ctx->pc = 0x80C78F70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78F70u)) return;
    // 80C78F70: addi    r5, r5, -24732
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24732);

label_80C78F74:
    ctx->pc = 0x80C78F74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78F74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C78F74: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C78F74u)) return;
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
label_80C78F78:
    ctx->pc = 0x80C78F78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78F78u)) return;
    // 80C78F78: lis     r5, -27416
    ctx->gpr[5] = ((u32)(s32)(-27416) << 16);

label_80C78F7C:
    ctx->pc = 0x80C78F7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78F7Cu)) return;
    // 80C78F7C: addi    r5, r5, -24728
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24728);

label_80C78F80:
    ctx->pc = 0x80C78F80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78F80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C78F80: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C78F80u)) return;
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
label_80C78F84:
    ctx->pc = 0x80C78F84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78F84u)) return;
    // 80C78F84: lis     r5, -27416
    ctx->gpr[5] = ((u32)(s32)(-27416) << 16);

label_80C78F88:
    ctx->pc = 0x80C78F88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78F88u)) return;
    // 80C78F88: addi    r5, r5, -24724
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24724);

label_80C78F8C:
    ctx->pc = 0x80C78F8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78F8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C78F8C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C78F8Cu)) return;
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
label_80C78F90:
    ctx->pc = 0x80C78F90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78F90u)) return;
    // 80C78F90: bl      0x8045C750
    {
            ctx->lr = 0x80C78F94u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C78F94:
    ctx->pc = 0x80C78F94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78F94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80C78F94: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C78F98:
    ctx->pc = 0x80C78F98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78F98u)) return;
    // 80C78F98: li      r4, 160
    ctx->gpr[4] = (u32)(s32)(160);

label_80C78F9C:
    ctx->pc = 0x80C78F9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78F9Cu)) return;
    // 80C78F9C: li      r5, 2816
    ctx->gpr[5] = (u32)(s32)(2816);

label_80C78FA0:
    ctx->pc = 0x80C78FA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78FA0u)) return;
    // 80C78FA0: li      r6, 24563
    ctx->gpr[6] = (u32)(s32)(24563);

label_80C78FA4:
    ctx->pc = 0x80C78FA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78FA4u)) return;
    // 80C78FA4: li      r7, 1280
    ctx->gpr[7] = (u32)(s32)(1280);

label_80C78FA8:
    ctx->pc = 0x80C78FA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78FA8u)) return;
    // 80C78FA8: bl      0x8045C7B4
    {
            ctx->lr = 0x80C78FACu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C78FAC:
    ctx->pc = 0x80C78FACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78FACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C78FAC: li      r3, 18
    ctx->gpr[3] = (u32)(s32)(18);

label_80C78FB0:
    ctx->pc = 0x80C78FB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78FB0u)) return;
    // 80C78FB0: bl      0x8045F7C8
    {
            ctx->lr = 0x80C78FB4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C78FB4:
    ctx->pc = 0x80C78FB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78FB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C78FB4: li      r3, 1212
    ctx->gpr[3] = (u32)(s32)(1212);

label_80C78FB8:
    ctx->pc = 0x80C78FB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78FB8u)) return;
    // 80C78FB8: bl      0x8045BFA0
    {
            ctx->lr = 0x80C78FBCu;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80C78FBC:
    ctx->pc = 0x80C78FBCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78FBCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80C78FBC: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80C78FC0:
    ctx->pc = 0x80C78FC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78FC0u)) return;
    // 80C78FC0: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80C78FC4:
    ctx->pc = 0x80C78FC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78FC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C78FC4: lwz     r0, 0(r3)
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
label_80C78FC8:
    ctx->pc = 0x80C78FC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78FC8u)) return;
    // 80C78FC8: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80C78FCC:
    ctx->pc = 0x80C78FCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78FCCu)) return;
    // 80C78FCC: lis     r3, -27416
    ctx->gpr[3] = ((u32)(s32)(-27416) << 16);

label_80C78FD0:
    ctx->pc = 0x80C78FD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78FD0u)) return;
    // 80C78FD0: addi    r3, r3, -24016
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24016);

label_80C78FD4:
    ctx->pc = 0x80C78FD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78FD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C78FD4: lwzx    r3, r3, r0
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
label_80C78FD8:
    ctx->pc = 0x80C78FD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78FD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C78FD8: lwz     r3, 12(r3)
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
label_80C78FDC:
    ctx->pc = 0x80C78FDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78FDCu)) return;
    // 80C78FDC: bl      0x8045F6FC
    {
            ctx->lr = 0x80C78FE0u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80C78FE0:
    ctx->pc = 0x80C78FE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78FE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C78FE0: li      r3, 170
    ctx->gpr[3] = (u32)(s32)(170);

label_80C78FE4:
    ctx->pc = 0x80C78FE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78FE4u)) return;
    // 80C78FE4: bl      0x8045F7C8
    {
            ctx->lr = 0x80C78FE8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C78FE8:
    ctx->pc = 0x80C78FE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78FE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C78FE8: b       0x80C7902C
    {
            goto label_80C7902C;
    }

label_80C78FEC:
    ctx->pc = 0x80C78FECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78FECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C78FEC: bl      0x8045DE34
    {
            ctx->lr = 0x80C78FF0u;
            ctx->pc = 0x8045DE34u;
            return;
    }

label_80C78FF0:
    ctx->pc = 0x80C78FF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78FF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C78FF0: bl      0x80460A80
    {
            ctx->lr = 0x80C78FF4u;
            ctx->pc = 0x80460A80u;
            return;
    }

label_80C78FF4:
    ctx->pc = 0x80C78FF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78FF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C78FF4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C78FF8:
    ctx->pc = 0x80C78FF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C78FF8u)) return;
    // 80C78FF8: bl      0x8045EC10
    {
            ctx->lr = 0x80C78FFCu;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80C78FFC:
    ctx->pc = 0x80C78FFCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C78FFCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C78FFC: lis     r3, -27416
    ctx->gpr[3] = ((u32)(s32)(-27416) << 16);

label_80C79000:
    ctx->pc = 0x80C79000u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79000u)) return;
    // 80C79000: addi    r3, r3, -23968
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-23968);

label_80C79004:
    ctx->pc = 0x80C79004u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79004u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C79004: lwz     r3, 0(r3)
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
label_80C79008:
    ctx->pc = 0x80C79008u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79008u)) return;
    // 80C79008: cmplwi  r3, 0x0000
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

label_80C7900C:
    ctx->pc = 0x80C7900Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7900Cu)) return;
    // 80C7900C: bc    12, 2, 0x80C79024
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C79024;
        }
    }

label_80C79010:
    ctx->pc = 0x80C79010u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79010u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C79010: bl      0x8050F9E0
    {
            ctx->lr = 0x80C79014u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80C79014:
    ctx->pc = 0x80C79014u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79014u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C79014: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80C79018:
    ctx->pc = 0x80C79018u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79018u)) return;
    // 80C79018: lis     r3, -27416
    ctx->gpr[3] = ((u32)(s32)(-27416) << 16);

label_80C7901C:
    ctx->pc = 0x80C7901Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7901Cu)) return;
    // 80C7901C: addi    r3, r3, -23968
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-23968);

label_80C79020:
    ctx->pc = 0x80C79020u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79020u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C79020: stw     r0, 0(r3)
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
label_80C79024:
    ctx->pc = 0x80C79024u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79024u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C79024: bl      0x8045BF80
    {
            ctx->lr = 0x80C79028u;
            ctx->pc = 0x8045BF80u;
            return;
    }

label_80C79028:
    ctx->pc = 0x80C79028u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79028u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C79028: bl      0x80C79368
    {
            ctx->lr = 0x80C7902Cu;
            goto label_80C79368;
    }

label_80C7902C:
    ctx->pc = 0x80C7902Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C7902Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C7902C: lwz     r0, 20(r1)
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
label_80C79030:
    ctx->pc = 0x80C79030u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C79030u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C79030: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C79034:
    ctx->pc = 0x80C79034u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79034u)) return;
    // 80C79034: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C79038:
    ctx->pc = 0x80C79038u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79038u)) return;
    // 80C79038: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C78580;
        }
    }

label_80C7903C:
    ctx->pc = 0x80C7903Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C7903Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C7903C: stwu     r1, -16(r1)
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
label_80C79040:
    ctx->pc = 0x80C79040u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79040u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C79040: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C79044:
    ctx->pc = 0x80C79044u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79044u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C79044: stw     r0, 20(r1)
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
label_80C79048:
    ctx->pc = 0x80C79048u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79048u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C79048: lwz     r3, 32(r3)
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
label_80C7904C:
    ctx->pc = 0x80C7904Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7904Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C7904C: lwz     r3, 16(r3)
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
label_80C79050:
    ctx->pc = 0x80C79050u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79050u)) return;
    // 80C79050: bl      0x80509CF0
    {
            ctx->lr = 0x80C79054u;
            ctx->pc = 0x80509CF0u;
            return;
    }

label_80C79054:
    ctx->pc = 0x80C79054u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79054u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C79054: lwz     r0, 20(r1)
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
label_80C79058:
    ctx->pc = 0x80C79058u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C79058u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C79058: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C7905C:
    ctx->pc = 0x80C7905Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7905Cu)) return;
    // 80C7905C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C79060:
    ctx->pc = 0x80C79060u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79060u)) return;
    // 80C79060: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C78580;
        }
    }

label_80C79064:
    ctx->pc = 0x80C79064u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79064u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C79064: stwu     r1, -32(r1)
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
label_80C79068:
    ctx->pc = 0x80C79068u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79068u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C79068: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C7906C:
    ctx->pc = 0x80C7906Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7906Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C7906C: stw     r0, 36(r1)
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
label_80C79070:
    ctx->pc = 0x80C79070u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79070u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C79070: stw     r31, 28(r1)
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
label_80C79074:
    ctx->pc = 0x80C79074u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79074u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C79074: stw     r30, 24(r1)
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
label_80C79078:
    ctx->pc = 0x80C79078u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79078u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C79078: stw     r29, 20(r1)
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
label_80C7907C:
    ctx->pc = 0x80C7907Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7907Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C7907C: lwz     r31, 32(r3)
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
label_80C79080:
    ctx->pc = 0x80C79080u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79080u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C79080: lwz     r30, 16(r31)
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
label_80C79084:
    ctx->pc = 0x80C79084u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79084u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C79084: lwz     r5, 28(r31)
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
label_80C79088:
    ctx->pc = 0x80C79088u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79088u)) return;
    // 80C79088: cmpwi   r5, 0
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

label_80C7908C:
    ctx->pc = 0x80C7908Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7908Cu)) return;
    // 80C7908C: bc    4, 1, 0x80C790C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C790C4;
        }
    }

label_80C79090:
    ctx->pc = 0x80C79090u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79090u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80C79090: lwz     r4, 24(r31)
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
label_80C79094:
    ctx->pc = 0x80C79094u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79094u)) return;
    // 80C79094: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80C79098:
    ctx->pc = 0x80C79098u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79098u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80C79098: lwz     r0, 20(r31)
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
label_80C7909C:
    ctx->pc = 0x80C7909Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80C7909Cu)) return;
    // 80C7909C: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80C790A0:
    ctx->pc = 0x80C790A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C790A0u)) return;
    // 80C790A0: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80C790A4:
    ctx->pc = 0x80C790A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80C790A4u)) return;
    // 80C790A4: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80C790A8:
    ctx->pc = 0x80C790A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C790A8u)) return;
    // 80C790A8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80C790AC:
    ctx->pc = 0x80C790ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C790ACu)) return;
    // 80C790AC: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80C790B0:
    ctx->pc = 0x80C790B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C790B0u)) return;
    // 80C790B0: bl      0x80509C74
    {
            ctx->lr = 0x80C790B4u;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80C790B4:
    ctx->pc = 0x80C790B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C790B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C790B4: stw     r29, 20(r31)
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
label_80C790B8:
    ctx->pc = 0x80C790B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C790B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C790B8: lwz     r3, 28(r31)
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
label_80C790BC:
    ctx->pc = 0x80C790BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C790BCu)) return;
    // 80C790BC: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80C790C0:
    ctx->pc = 0x80C790C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C790C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C790C0: stw     r0, 28(r31)
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
label_80C790C4:
    ctx->pc = 0x80C790C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C790C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C790C4: lwz     r5, 40(r31)
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
label_80C790C8:
    ctx->pc = 0x80C790C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C790C8u)) return;
    // 80C790C8: cmpwi   r5, 0
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

label_80C790CC:
    ctx->pc = 0x80C790CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C790CCu)) return;
    // 80C790CC: bc    4, 1, 0x80C79104
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C79104;
        }
    }

label_80C790D0:
    ctx->pc = 0x80C790D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C790D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80C790D0: lwz     r4, 36(r31)
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
label_80C790D4:
    ctx->pc = 0x80C790D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C790D4u)) return;
    // 80C790D4: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80C790D8:
    ctx->pc = 0x80C790D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C790D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80C790D8: lwz     r0, 32(r31)
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
label_80C790DC:
    ctx->pc = 0x80C790DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80C790DCu)) return;
    // 80C790DC: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80C790E0:
    ctx->pc = 0x80C790E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C790E0u)) return;
    // 80C790E0: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80C790E4:
    ctx->pc = 0x80C790E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80C790E4u)) return;
    // 80C790E4: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80C790E8:
    ctx->pc = 0x80C790E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C790E8u)) return;
    // 80C790E8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80C790EC:
    ctx->pc = 0x80C790ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C790ECu)) return;
    // 80C790EC: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80C790F0:
    ctx->pc = 0x80C790F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C790F0u)) return;
    // 80C790F0: bl      0x80509BF8
    {
            ctx->lr = 0x80C790F4u;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80C790F4:
    ctx->pc = 0x80C790F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C790F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C790F4: stw     r29, 32(r31)
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
label_80C790F8:
    ctx->pc = 0x80C790F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C790F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C790F8: lwz     r3, 40(r31)
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
label_80C790FC:
    ctx->pc = 0x80C790FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C790FCu)) return;
    // 80C790FC: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80C79100:
    ctx->pc = 0x80C79100u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79100u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C79100: stw     r0, 40(r31)
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
label_80C79104:
    ctx->pc = 0x80C79104u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79104u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C79104: lwz     r5, 52(r31)
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
label_80C79108:
    ctx->pc = 0x80C79108u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79108u)) return;
    // 80C79108: cmpwi   r5, 0
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

label_80C7910C:
    ctx->pc = 0x80C7910Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7910Cu)) return;
    // 80C7910C: bc    4, 1, 0x80C79144
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C79144;
        }
    }

label_80C79110:
    ctx->pc = 0x80C79110u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79110u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80C79110: lwz     r4, 48(r31)
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
label_80C79114:
    ctx->pc = 0x80C79114u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79114u)) return;
    // 80C79114: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80C79118:
    ctx->pc = 0x80C79118u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79118u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80C79118: lwz     r0, 44(r31)
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
label_80C7911C:
    ctx->pc = 0x80C7911Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80C7911Cu)) return;
    // 80C7911C: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80C79120:
    ctx->pc = 0x80C79120u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79120u)) return;
    // 80C79120: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80C79124:
    ctx->pc = 0x80C79124u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80C79124u)) return;
    // 80C79124: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80C79128:
    ctx->pc = 0x80C79128u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79128u)) return;
    // 80C79128: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80C7912C:
    ctx->pc = 0x80C7912Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7912Cu)) return;
    // 80C7912C: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80C79130:
    ctx->pc = 0x80C79130u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79130u)) return;
    // 80C79130: bl      0x80509B94
    {
            ctx->lr = 0x80C79134u;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80C79134:
    ctx->pc = 0x80C79134u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79134u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C79134: stw     r29, 44(r31)
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
label_80C79138:
    ctx->pc = 0x80C79138u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79138u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C79138: lwz     r3, 52(r31)
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
label_80C7913C:
    ctx->pc = 0x80C7913Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7913Cu)) return;
    // 80C7913C: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80C79140:
    ctx->pc = 0x80C79140u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79140u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C79140: stw     r0, 52(r31)
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
label_80C79144:
    ctx->pc = 0x80C79144u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79144u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C79144: lwz     r31, 28(r1)
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
label_80C79148:
    ctx->pc = 0x80C79148u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79148u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C79148: lwz     r30, 24(r1)
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
label_80C7914C:
    ctx->pc = 0x80C7914Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7914Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C7914C: lwz     r29, 20(r1)
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
label_80C79150:
    ctx->pc = 0x80C79150u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79150u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C79150: lwz     r0, 36(r1)
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
label_80C79154:
    ctx->pc = 0x80C79154u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C79154u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C79154: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C79158:
    ctx->pc = 0x80C79158u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79158u)) return;
    // 80C79158: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80C7915C:
    ctx->pc = 0x80C7915Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7915Cu)) return;
    // 80C7915C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C78580;
        }
    }

label_80C79160:
    ctx->pc = 0x80C79160u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79160u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C79160: stwu     r1, -32(r1)
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
label_80C79164:
    ctx->pc = 0x80C79164u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79164u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C79164: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C79168:
    ctx->pc = 0x80C79168u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79168u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C79168: stw     r0, 36(r1)
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
label_80C7916C:
    ctx->pc = 0x80C7916Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7916Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C7916C: stw     r31, 28(r1)
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
label_80C79170:
    ctx->pc = 0x80C79170u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79170u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C79170: stw     r30, 24(r1)
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
label_80C79174:
    ctx->pc = 0x80C79174u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79174u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C79174: stw     r29, 20(r1)
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
label_80C79178:
    ctx->pc = 0x80C79178u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79178u)) return;
    // 80C79178: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80C7917C:
    ctx->pc = 0x80C7917Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7917Cu)) return;
    // 80C7917C: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80C79180:
    ctx->pc = 0x80C79180u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79180u)) return;
    // 80C79180: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C79184:
    ctx->pc = 0x80C79184u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79184u)) return;
    // 80C79184: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80C79188:
    ctx->pc = 0x80C79188u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79188u)) return;
    // 80C79188: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80C7918C:
    ctx->pc = 0x80C7918Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7918Cu)) return;
    // 80C7918C: bl      0x8050FD60
    {
            ctx->lr = 0x80C79190u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80C79190:
    ctx->pc = 0x80C79190u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79190u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C79190: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80C79194:
    ctx->pc = 0x80C79194u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79194u)) return;
    // 80C79194: cmplwi  r31, 0x0000
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

label_80C79198:
    ctx->pc = 0x80C79198u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79198u)) return;
    // 80C79198: bc    12, 2, 0x80C791FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C791FC;
        }
    }

label_80C7919C:
    ctx->pc = 0x80C7919Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C7919Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80C7919C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80C791A0:
    ctx->pc = 0x80C791A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C791A0u)) return;
    // 80C791A0: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80C791A4:
    ctx->pc = 0x80C791A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C791A4u)) return;
    // 80C791A4: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80C791A8:
    ctx->pc = 0x80C791A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C791A8u)) return;
    // 80C791A8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C791AC:
    ctx->pc = 0x80C791ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C791ACu)) return;
    // 80C791AC: or   r7, r30, r30
    {
        ctx->gpr[7] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80C791B0:
    ctx->pc = 0x80C791B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C791B0u)) return;
    // 80C791B0: bl      0x8050A0D4
    {
            ctx->lr = 0x80C791B4u;
            ctx->pc = 0x8050A0D4u;
            return;
    }

label_80C791B4:
    ctx->pc = 0x80C791B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 18u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C791B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 18u : 1u;
    // 80C791B4: lis     r3, -32568
    ctx->gpr[3] = ((u32)(s32)(-32568) << 16);

label_80C791B8:
    ctx->pc = 0x80C791B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C791B8u)) return;
    // 80C791B8: addi    r0, r3, -28572
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-28572);

label_80C791BC:
    ctx->pc = 0x80C791BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C791BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80C791BC: stw     r0, 16(r31)
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
label_80C791C0:
    ctx->pc = 0x80C791C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C791C0u)) return;
    // 80C791C0: lis     r3, -32568
    ctx->gpr[3] = ((u32)(s32)(-32568) << 16);

label_80C791C4:
    ctx->pc = 0x80C791C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C791C4u)) return;
    // 80C791C4: addi    r0, r3, -28612
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-28612);

label_80C791C8:
    ctx->pc = 0x80C791C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C791C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C791C8: stw     r0, 24(r31)
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
label_80C791CC:
    ctx->pc = 0x80C791CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C791CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C791CC: lwz     r3, 32(r31)
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
label_80C791D0:
    ctx->pc = 0x80C791D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C791D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C791D0: stw     r31, 16(r3)
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
label_80C791D4:
    ctx->pc = 0x80C791D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C791D4u)) return;
    // 80C791D4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80C791D8:
    ctx->pc = 0x80C791D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C791D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C791D8: stw     r0, 20(r3)
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
label_80C791DC:
    ctx->pc = 0x80C791DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C791DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C791DC: stw     r0, 24(r3)
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
label_80C791E0:
    ctx->pc = 0x80C791E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C791E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C791E0: stw     r0, 28(r3)
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
label_80C791E4:
    ctx->pc = 0x80C791E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C791E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C791E4: stw     r0, 32(r3)
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
label_80C791E8:
    ctx->pc = 0x80C791E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C791E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C791E8: stw     r0, 36(r3)
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
label_80C791EC:
    ctx->pc = 0x80C791ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C791ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C791EC: stw     r0, 40(r3)
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
label_80C791F0:
    ctx->pc = 0x80C791F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C791F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C791F0: stw     r0, 44(r3)
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
label_80C791F4:
    ctx->pc = 0x80C791F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C791F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C791F4: stw     r0, 48(r3)
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
label_80C791F8:
    ctx->pc = 0x80C791F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C791F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C791F8: stw     r0, 52(r3)
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
label_80C791FC:
    ctx->pc = 0x80C791FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C791FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80C791FC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80C79200:
    ctx->pc = 0x80C79200u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79200u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C79200: lwz     r31, 28(r1)
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
label_80C79204:
    ctx->pc = 0x80C79204u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79204u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C79204: lwz     r30, 24(r1)
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
label_80C79208:
    ctx->pc = 0x80C79208u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79208u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C79208: lwz     r29, 20(r1)
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
label_80C7920C:
    ctx->pc = 0x80C7920Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7920Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C7920C: lwz     r0, 36(r1)
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
label_80C79210:
    ctx->pc = 0x80C79210u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C79210u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C79210: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C79214:
    ctx->pc = 0x80C79214u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79214u)) return;
    // 80C79214: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80C79218:
    ctx->pc = 0x80C79218u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79218u)) return;
    // 80C79218: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C78580;
        }
    }

label_80C7921C:
    ctx->pc = 0x80C7921Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C7921Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C7921C: stwu     r1, -16(r1)
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
label_80C79220:
    ctx->pc = 0x80C79220u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79220u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C79220: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C79224:
    ctx->pc = 0x80C79224u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79224u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C79224: stw     r0, 20(r1)
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
label_80C79228:
    ctx->pc = 0x80C79228u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79228u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C79228: stw     r31, 12(r1)
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
label_80C7922C:
    ctx->pc = 0x80C7922Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7922Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C7922C: stw     r30, 8(r1)
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
label_80C79230:
    ctx->pc = 0x80C79230u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79230u)) return;
    // 80C79230: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80C79234:
    ctx->pc = 0x80C79234u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79234u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C79234: lwz     r31, 32(r3)
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
label_80C79238:
    ctx->pc = 0x80C79238u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79238u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C79238: stw     r30, 24(r31)
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
label_80C7923C:
    ctx->pc = 0x80C7923Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7923Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C7923C: stw     r5, 28(r31)
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
label_80C79240:
    ctx->pc = 0x80C79240u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79240u)) return;
    // 80C79240: cmpwi   r5, 0
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

label_80C79244:
    ctx->pc = 0x80C79244u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79244u)) return;
    // 80C79244: bc    12, 1, 0x80C79254
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C79254;
        }
    }

label_80C79248:
    ctx->pc = 0x80C79248u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79248u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C79248: lwz     r3, 16(r31)
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
label_80C7924C:
    ctx->pc = 0x80C7924Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7924Cu)) return;
    // 80C7924C: bl      0x80509C74
    {
            ctx->lr = 0x80C79250u;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80C79250:
    ctx->pc = 0x80C79250u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79250u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C79250: stw     r30, 20(r31)
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
label_80C79254:
    ctx->pc = 0x80C79254u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79254u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C79254: lwz     r31, 12(r1)
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
label_80C79258:
    ctx->pc = 0x80C79258u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79258u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C79258: lwz     r30, 8(r1)
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
label_80C7925C:
    ctx->pc = 0x80C7925Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7925Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C7925C: lwz     r0, 20(r1)
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
label_80C79260:
    ctx->pc = 0x80C79260u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C79260u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C79260: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C79264:
    ctx->pc = 0x80C79264u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79264u)) return;
    // 80C79264: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C79268:
    ctx->pc = 0x80C79268u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79268u)) return;
    // 80C79268: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C78580;
        }
    }

label_80C7926C:
    ctx->pc = 0x80C7926Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C7926Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C7926C: stwu     r1, -16(r1)
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
label_80C79270:
    ctx->pc = 0x80C79270u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79270u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C79270: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C79274:
    ctx->pc = 0x80C79274u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79274u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C79274: stw     r0, 20(r1)
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
label_80C79278:
    ctx->pc = 0x80C79278u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79278u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C79278: stw     r31, 12(r1)
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
label_80C7927C:
    ctx->pc = 0x80C7927Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7927Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C7927C: stw     r30, 8(r1)
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
label_80C79280:
    ctx->pc = 0x80C79280u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79280u)) return;
    // 80C79280: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80C79284:
    ctx->pc = 0x80C79284u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79284u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C79284: lwz     r31, 32(r3)
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
label_80C79288:
    ctx->pc = 0x80C79288u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79288u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C79288: stw     r30, 36(r31)
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
label_80C7928C:
    ctx->pc = 0x80C7928Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7928Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C7928C: stw     r5, 40(r31)
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
label_80C79290:
    ctx->pc = 0x80C79290u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79290u)) return;
    // 80C79290: cmpwi   r5, 0
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

label_80C79294:
    ctx->pc = 0x80C79294u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79294u)) return;
    // 80C79294: bc    12, 1, 0x80C792A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C792A4;
        }
    }

label_80C79298:
    ctx->pc = 0x80C79298u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79298u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C79298: lwz     r3, 16(r31)
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
label_80C7929C:
    ctx->pc = 0x80C7929Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7929Cu)) return;
    // 80C7929C: bl      0x80509BF8
    {
            ctx->lr = 0x80C792A0u;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80C792A0:
    ctx->pc = 0x80C792A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C792A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C792A0: stw     r30, 32(r31)
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
label_80C792A4:
    ctx->pc = 0x80C792A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C792A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C792A4: lwz     r31, 12(r1)
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
label_80C792A8:
    ctx->pc = 0x80C792A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C792A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C792A8: lwz     r30, 8(r1)
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
label_80C792AC:
    ctx->pc = 0x80C792ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C792ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C792AC: lwz     r0, 20(r1)
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
label_80C792B0:
    ctx->pc = 0x80C792B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C792B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C792B0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C792B4:
    ctx->pc = 0x80C792B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C792B4u)) return;
    // 80C792B4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C792B8:
    ctx->pc = 0x80C792B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C792B8u)) return;
    // 80C792B8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C78580;
        }
    }

label_80C792BC:
    ctx->pc = 0x80C792BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C792BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C792BC: stwu     r1, -16(r1)
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
label_80C792C0:
    ctx->pc = 0x80C792C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C792C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C792C0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C792C4:
    ctx->pc = 0x80C792C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C792C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C792C4: stw     r0, 20(r1)
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
label_80C792C8:
    ctx->pc = 0x80C792C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C792C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C792C8: stw     r31, 12(r1)
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
label_80C792CC:
    ctx->pc = 0x80C792CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C792CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C792CC: stw     r30, 8(r1)
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
label_80C792D0:
    ctx->pc = 0x80C792D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C792D0u)) return;
    // 80C792D0: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80C792D4:
    ctx->pc = 0x80C792D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C792D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C792D4: lwz     r31, 32(r3)
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
label_80C792D8:
    ctx->pc = 0x80C792D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C792D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C792D8: stw     r30, 48(r31)
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
label_80C792DC:
    ctx->pc = 0x80C792DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C792DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C792DC: stw     r5, 52(r31)
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
label_80C792E0:
    ctx->pc = 0x80C792E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C792E0u)) return;
    // 80C792E0: cmpwi   r5, 0
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

label_80C792E4:
    ctx->pc = 0x80C792E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C792E4u)) return;
    // 80C792E4: bc    12, 1, 0x80C792F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C792F4;
        }
    }

label_80C792E8:
    ctx->pc = 0x80C792E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C792E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C792E8: lwz     r3, 16(r31)
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
label_80C792EC:
    ctx->pc = 0x80C792ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C792ECu)) return;
    // 80C792EC: bl      0x80509B94
    {
            ctx->lr = 0x80C792F0u;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80C792F0:
    ctx->pc = 0x80C792F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C792F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C792F0: stw     r30, 44(r31)
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
label_80C792F4:
    ctx->pc = 0x80C792F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C792F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C792F4: lwz     r31, 12(r1)
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
label_80C792F8:
    ctx->pc = 0x80C792F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C792F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C792F8: lwz     r30, 8(r1)
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
label_80C792FC:
    ctx->pc = 0x80C792FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C792FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C792FC: lwz     r0, 20(r1)
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
label_80C79300:
    ctx->pc = 0x80C79300u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C79300u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C79300: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C79304:
    ctx->pc = 0x80C79304u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79304u)) return;
    // 80C79304: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C79308:
    ctx->pc = 0x80C79308u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79308u)) return;
    // 80C79308: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C78580;
        }
    }

label_80C7930C:
    ctx->pc = 0x80C7930Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C7930Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C7930C: stwu     r1, -16(r1)
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
label_80C79310:
    ctx->pc = 0x80C79310u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79310u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C79310: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C79314:
    ctx->pc = 0x80C79314u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79314u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C79314: stw     r0, 20(r1)
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
label_80C79318:
    ctx->pc = 0x80C79318u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79318u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C79318: stw     r31, 12(r1)
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
label_80C7931C:
    ctx->pc = 0x80C7931Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7931Cu)) return;
    // 80C7931C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80C79320:
    ctx->pc = 0x80C79320u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79320u)) return;
    // 80C79320: lis     r4, -27416
    ctx->gpr[4] = ((u32)(s32)(-27416) << 16);

label_80C79324:
    ctx->pc = 0x80C79324u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79324u)) return;
    // 80C79324: addi    r4, r4, -23956
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-23956);

label_80C79328:
    ctx->pc = 0x80C79328u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79328u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C79328: lwz     r0, 0(r4)
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
label_80C7932C:
    ctx->pc = 0x80C7932Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7932Cu)) return;
    // 80C7932C: cmplwi  r0, 0x0000
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

label_80C79330:
    ctx->pc = 0x80C79330u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79330u)) return;
    // 80C79330: bc    4, 2, 0x80C79354
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C79354;
        }
    }

label_80C79334:
    ctx->pc = 0x80C79334u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79334u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C79334: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80C79338:
    ctx->pc = 0x80C79338u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79338u)) return;
    // 80C79338: bl      0x8050EEC0
    {
            ctx->lr = 0x80C7933Cu;
            ctx->pc = 0x8050EEC0u;
            return;
    }

label_80C7933C:
    ctx->pc = 0x80C7933Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C7933Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80C7933C: lis     r4, -27416
    ctx->gpr[4] = ((u32)(s32)(-27416) << 16);

label_80C79340:
    ctx->pc = 0x80C79340u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79340u)) return;
    // 80C79340: addi    r4, r4, -23956
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-23956);

label_80C79344:
    ctx->pc = 0x80C79344u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79344u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C79344: stw     r3, 0(r4)
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
label_80C79348:
    ctx->pc = 0x80C79348u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79348u)) return;
    // 80C79348: lis     r3, -27416
    ctx->gpr[3] = ((u32)(s32)(-27416) << 16);

label_80C7934C:
    ctx->pc = 0x80C7934Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7934Cu)) return;
    // 80C7934C: addi    r3, r3, -23960
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-23960);

label_80C79350:
    ctx->pc = 0x80C79350u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79350u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C79350: stw     r31, 0(r3)
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
label_80C79354:
    ctx->pc = 0x80C79354u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79354u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C79354: lwz     r31, 12(r1)
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
label_80C79358:
    ctx->pc = 0x80C79358u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79358u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C79358: lwz     r0, 20(r1)
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
label_80C7935C:
    ctx->pc = 0x80C7935Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C7935Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C7935C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C79360:
    ctx->pc = 0x80C79360u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79360u)) return;
    // 80C79360: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C79364:
    ctx->pc = 0x80C79364u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79364u)) return;
    // 80C79364: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C78580;
        }
    }

label_80C79368:
    ctx->pc = 0x80C79368u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79368u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C79368: stwu     r1, -32(r1)
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
label_80C7936C:
    ctx->pc = 0x80C7936Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7936Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C7936C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C79370:
    ctx->pc = 0x80C79370u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79370u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C79370: stw     r0, 36(r1)
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
label_80C79374:
    ctx->pc = 0x80C79374u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79374u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C79374: stw     r31, 28(r1)
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
label_80C79378:
    ctx->pc = 0x80C79378u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79378u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C79378: stw     r30, 24(r1)
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
label_80C7937C:
    ctx->pc = 0x80C7937Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7937Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C7937C: stw     r29, 20(r1)
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
label_80C79380:
    ctx->pc = 0x80C79380u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79380u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C79380: stw     r28, 16(r1)
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
label_80C79384:
    ctx->pc = 0x80C79384u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79384u)) return;
    // 80C79384: lis     r3, -27416
    ctx->gpr[3] = ((u32)(s32)(-27416) << 16);

label_80C79388:
    ctx->pc = 0x80C79388u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79388u)) return;
    // 80C79388: addi    r30, r3, -23956
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(-23956);

label_80C7938C:
    ctx->pc = 0x80C7938Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7938Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C7938C: lwz     r0, 0(r30)
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
label_80C79390:
    ctx->pc = 0x80C79390u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79390u)) return;
    // 80C79390: cmplwi  r0, 0x0000
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

label_80C79394:
    ctx->pc = 0x80C79394u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79394u)) return;
    // 80C79394: bc    12, 2, 0x80C793F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C793F4;
        }
    }

label_80C79398:
    ctx->pc = 0x80C79398u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79398u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C79398: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_80C7939C:
    ctx->pc = 0x80C7939Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7939Cu)) return;
    // 80C7939C: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_80C793A0:
    ctx->pc = 0x80C793A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C793A0u)) return;
    // 80C793A0: lis     r3, -27416
    ctx->gpr[3] = ((u32)(s32)(-27416) << 16);

label_80C793A4:
    ctx->pc = 0x80C793A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C793A4u)) return;
    // 80C793A4: addi    r31, r3, -23960
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(-23960);

label_80C793A8:
    ctx->pc = 0x80C793A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C793A8u)) return;
    // 80C793A8: b       0x80C793C8
    {
            goto label_80C793C8;
    }

label_80C793AC:
    ctx->pc = 0x80C793ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C793ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C793AC: lwz     r3, 0(r30)
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
label_80C793B0:
    ctx->pc = 0x80C793B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C793B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C793B0: lwzx    r3, r3, r29
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
label_80C793B4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C793B4u)) return;
    // 80C793B4: cmplwi  r3, 0x0000
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

label_80C793B8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C793B8u)) return;
    // 80C793B8: bc    12, 2, 0x80C793C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C793C0;
        }
    }

label_80C793BC:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C793BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C793BC: bl      0x8050F9E0
    {
            ctx->lr = 0x80C793C0u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80C793C0:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C793C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C793C0: addi    r29, r29, 4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4);

label_80C793C4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C793C4u)) return;
    // 80C793C4: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_80C793C8:
    ctx->pc = 0x80C793C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C793C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C793C8: lwz     r0, 0(r31)
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
label_80C793CC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C793CCu)) return;
    // 80C793CC: cmpw    r28, r0
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

label_80C793D0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C793D0u)) return;
    // 80C793D0: bc    12, 0, 0x80C793AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C793ACu;
                return;
            }
            goto label_80C793AC;
        }
    }

label_80C793D4:
    ctx->pc = 0x80C793D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C793D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C793D4: lis     r3, -27416
    ctx->gpr[3] = ((u32)(s32)(-27416) << 16);

label_80C793D8:
    ctx->pc = 0x80C793D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C793D8u)) return;
    // 80C793D8: addi    r3, r3, -23956
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-23956);

label_80C793DC:
    ctx->pc = 0x80C793DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C793DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C793DC: lwz     r3, 0(r3)
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
label_80C793E0:
    ctx->pc = 0x80C793E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C793E0u)) return;
    // 80C793E0: bl      0x8050ED40
    {
            ctx->lr = 0x80C793E4u;
            ctx->pc = 0x8050ED40u;
            return;
    }

label_80C793E4:
    ctx->pc = 0x80C793E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C793E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C793E4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80C793E8:
    ctx->pc = 0x80C793E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C793E8u)) return;
    // 80C793E8: lis     r3, -27416
    ctx->gpr[3] = ((u32)(s32)(-27416) << 16);

label_80C793EC:
    ctx->pc = 0x80C793ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C793ECu)) return;
    // 80C793EC: addi    r3, r3, -23956
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-23956);

label_80C793F0:
    ctx->pc = 0x80C793F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C793F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C793F0: stw     r0, 0(r3)
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
label_80C793F4:
    ctx->pc = 0x80C793F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C793F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C793F4: lwz     r31, 28(r1)
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
label_80C793F8:
    ctx->pc = 0x80C793F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C793F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C793F8: lwz     r30, 24(r1)
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
label_80C793FC:
    ctx->pc = 0x80C793FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C793FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C793FC: lwz     r29, 20(r1)
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
label_80C79400:
    ctx->pc = 0x80C79400u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79400u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C79400: lwz     r28, 16(r1)
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
label_80C79404:
    ctx->pc = 0x80C79404u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79404u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C79404: lwz     r0, 36(r1)
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
label_80C79408:
    ctx->pc = 0x80C79408u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C79408u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C79408: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C7940C:
    ctx->pc = 0x80C7940Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7940Cu)) return;
    // 80C7940C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80C79410:
    ctx->pc = 0x80C79410u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79410u)) return;
    // 80C79410: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C78580;
        }
    }

label_80C79414:
    ctx->pc = 0x80C79414u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79414u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C79414: stwu     r1, -16(r1)
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
label_80C79418:
    ctx->pc = 0x80C79418u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79418u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C79418: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C7941C:
    ctx->pc = 0x80C7941Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7941Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C7941C: stw     r0, 20(r1)
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
label_80C79420:
    ctx->pc = 0x80C79420u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79420u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C79420: stw     r31, 12(r1)
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
label_80C79424:
    ctx->pc = 0x80C79424u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79424u)) return;
    // 80C79424: lis     r6, -27416
    ctx->gpr[6] = ((u32)(s32)(-27416) << 16);

label_80C79428:
    ctx->pc = 0x80C79428u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79428u)) return;
    // 80C79428: addi    r6, r6, -23960
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-23960);

label_80C7942C:
    ctx->pc = 0x80C7942Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7942Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C7942C: lwz     r0, 0(r6)
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
label_80C79430:
    ctx->pc = 0x80C79430u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79430u)) return;
    // 80C79430: cmpw    r3, r0
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

label_80C79434:
    ctx->pc = 0x80C79434u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79434u)) return;
    // 80C79434: bc    4, 0, 0x80C79470
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C79470;
        }
    }

label_80C79438:
    ctx->pc = 0x80C79438u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79438u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C79438: lis     r6, -27416
    ctx->gpr[6] = ((u32)(s32)(-27416) << 16);

label_80C7943C:
    ctx->pc = 0x80C7943Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7943Cu)) return;
    // 80C7943C: addi    r6, r6, -23956
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-23956);

label_80C79440:
    ctx->pc = 0x80C79440u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79440u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C79440: lwz     r6, 0(r6)
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
label_80C79444:
    ctx->pc = 0x80C79444u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79444u)) return;
    // 80C79444: rlwinm r31, r3, 2, 0, 29
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80C79448:
    ctx->pc = 0x80C79448u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79448u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C79448: lwzx    r0, r6, r31
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
label_80C7944C:
    ctx->pc = 0x80C7944Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7944Cu)) return;
    // 80C7944C: cmplwi  r0, 0x0000
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

label_80C79450:
    ctx->pc = 0x80C79450u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79450u)) return;
    // 80C79450: bc    4, 2, 0x80C79470
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C79470;
        }
    }

label_80C79454:
    ctx->pc = 0x80C79454u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79454u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C79454: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80C79458:
    ctx->pc = 0x80C79458u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79458u)) return;
    // 80C79458: or   r4, r5, r5
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80C7945C:
    ctx->pc = 0x80C7945Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7945Cu)) return;
    // 80C7945C: bl      0x80C79160
    {
            ctx->lr = 0x80C79460u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C79160u;
                return;
            }
            goto label_80C79160;
    }

label_80C79460:
    ctx->pc = 0x80C79460u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79460u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C79460: lis     r4, -27416
    ctx->gpr[4] = ((u32)(s32)(-27416) << 16);

label_80C79464:
    ctx->pc = 0x80C79464u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79464u)) return;
    // 80C79464: addi    r4, r4, -23956
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-23956);

label_80C79468:
    ctx->pc = 0x80C79468u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79468u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C79468: lwz     r4, 0(r4)
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
label_80C7946C:
    ctx->pc = 0x80C7946Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7946Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C7946C: stwx    r3, r4, r31
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
label_80C79470:
    ctx->pc = 0x80C79470u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79470u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C79470: lwz     r31, 12(r1)
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
label_80C79474:
    ctx->pc = 0x80C79474u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79474u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C79474: lwz     r0, 20(r1)
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
label_80C79478:
    ctx->pc = 0x80C79478u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C79478u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C79478: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C7947C:
    ctx->pc = 0x80C7947Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7947Cu)) return;
    // 80C7947C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C79480:
    ctx->pc = 0x80C79480u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79480u)) return;
    // 80C79480: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C78580;
        }
    }

label_80C79484:
    ctx->pc = 0x80C79484u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79484u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C79484: stwu     r1, -16(r1)
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
label_80C79488:
    ctx->pc = 0x80C79488u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79488u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C79488: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C7948C:
    ctx->pc = 0x80C7948Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7948Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C7948C: stw     r0, 20(r1)
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
label_80C79490:
    ctx->pc = 0x80C79490u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79490u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C79490: stw     r31, 12(r1)
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
label_80C79494:
    ctx->pc = 0x80C79494u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79494u)) return;
    // 80C79494: lis     r4, -27416
    ctx->gpr[4] = ((u32)(s32)(-27416) << 16);

label_80C79498:
    ctx->pc = 0x80C79498u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79498u)) return;
    // 80C79498: addi    r4, r4, -23960
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-23960);

label_80C7949C:
    ctx->pc = 0x80C7949Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7949Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C7949C: lwz     r0, 0(r4)
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
label_80C794A0:
    ctx->pc = 0x80C794A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C794A0u)) return;
    // 80C794A0: cmpw    r3, r0
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

label_80C794A4:
    ctx->pc = 0x80C794A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C794A4u)) return;
    // 80C794A4: bc    4, 0, 0x80C794DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C794DC;
        }
    }

label_80C794A8:
    ctx->pc = 0x80C794A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C794A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C794A8: lis     r4, -27416
    ctx->gpr[4] = ((u32)(s32)(-27416) << 16);

label_80C794AC:
    ctx->pc = 0x80C794ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C794ACu)) return;
    // 80C794AC: addi    r4, r4, -23956
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-23956);

label_80C794B0:
    ctx->pc = 0x80C794B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C794B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C794B0: lwz     r4, 0(r4)
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
label_80C794B4:
    ctx->pc = 0x80C794B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C794B4u)) return;
    // 80C794B4: rlwinm r31, r3, 2, 0, 29
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80C794B8:
    ctx->pc = 0x80C794B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C794B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C794B8: lwzx    r3, r4, r31
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
label_80C794BC:
    ctx->pc = 0x80C794BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C794BCu)) return;
    // 80C794BC: cmplwi  r3, 0x0000
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

label_80C794C0:
    ctx->pc = 0x80C794C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C794C0u)) return;
    // 80C794C0: bc    12, 2, 0x80C794DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C794DC;
        }
    }

label_80C794C4:
    ctx->pc = 0x80C794C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C794C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C794C4: bl      0x8050F9E0
    {
            ctx->lr = 0x80C794C8u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80C794C8:
    ctx->pc = 0x80C794C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C794C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C794C8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80C794CC:
    ctx->pc = 0x80C794CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C794CCu)) return;
    // 80C794CC: lis     r3, -27416
    ctx->gpr[3] = ((u32)(s32)(-27416) << 16);

label_80C794D0:
    ctx->pc = 0x80C794D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C794D0u)) return;
    // 80C794D0: addi    r3, r3, -23956
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-23956);

label_80C794D4:
    ctx->pc = 0x80C794D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C794D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C794D4: lwz     r3, 0(r3)
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
label_80C794D8:
    ctx->pc = 0x80C794D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C794D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C794D8: stwx    r0, r3, r31
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
label_80C794DC:
    ctx->pc = 0x80C794DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C794DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C794DC: lwz     r31, 12(r1)
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
label_80C794E0:
    ctx->pc = 0x80C794E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C794E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C794E0: lwz     r0, 20(r1)
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
label_80C794E4:
    ctx->pc = 0x80C794E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C794E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C794E4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C794E8:
    ctx->pc = 0x80C794E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C794E8u)) return;
    // 80C794E8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C794EC:
    ctx->pc = 0x80C794ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C794ECu)) return;
    // 80C794EC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C78580;
        }
    }

label_80C794F0:
    ctx->pc = 0x80C794F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C794F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C794F0: stwu     r1, -16(r1)
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
label_80C794F4:
    ctx->pc = 0x80C794F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C794F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C794F4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C794F8:
    ctx->pc = 0x80C794F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C794F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C794F8: stw     r0, 20(r1)
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
label_80C794FC:
    ctx->pc = 0x80C794FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C794FCu)) return;
    // 80C794FC: lis     r6, -27416
    ctx->gpr[6] = ((u32)(s32)(-27416) << 16);

label_80C79500:
    ctx->pc = 0x80C79500u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79500u)) return;
    // 80C79500: addi    r6, r6, -23960
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-23960);

label_80C79504:
    ctx->pc = 0x80C79504u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79504u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C79504: lwz     r0, 0(r6)
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
label_80C79508:
    ctx->pc = 0x80C79508u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79508u)) return;
    // 80C79508: cmpw    r3, r0
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

label_80C7950C:
    ctx->pc = 0x80C7950Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7950Cu)) return;
    // 80C7950C: bc    4, 0, 0x80C79530
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C79530;
        }
    }

label_80C79510:
    ctx->pc = 0x80C79510u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79510u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C79510: lis     r6, -27416
    ctx->gpr[6] = ((u32)(s32)(-27416) << 16);

label_80C79514:
    ctx->pc = 0x80C79514u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79514u)) return;
    // 80C79514: addi    r6, r6, -23956
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-23956);

label_80C79518:
    ctx->pc = 0x80C79518u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79518u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C79518: lwz     r6, 0(r6)
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
label_80C7951C:
    ctx->pc = 0x80C7951Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7951Cu)) return;
    // 80C7951C: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80C79520:
    ctx->pc = 0x80C79520u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79520u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C79520: lwzx    r3, r6, r0
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
label_80C79524:
    ctx->pc = 0x80C79524u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79524u)) return;
    // 80C79524: cmplwi  r3, 0x0000
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

label_80C79528:
    ctx->pc = 0x80C79528u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79528u)) return;
    // 80C79528: bc    12, 2, 0x80C79530
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C79530;
        }
    }

label_80C7952C:
    ctx->pc = 0x80C7952Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C7952Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C7952C: bl      0x80C7921C
    {
            ctx->lr = 0x80C79530u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C7921Cu;
                return;
            }
            goto label_80C7921C;
    }

label_80C79530:
    ctx->pc = 0x80C79530u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79530u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C79530: lwz     r0, 20(r1)
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
label_80C79534:
    ctx->pc = 0x80C79534u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C79534u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C79534: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C79538:
    ctx->pc = 0x80C79538u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79538u)) return;
    // 80C79538: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C7953C:
    ctx->pc = 0x80C7953Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7953Cu)) return;
    // 80C7953C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C78580;
        }
    }

label_80C79540:
    ctx->pc = 0x80C79540u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79540u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C79540: stwu     r1, -16(r1)
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
label_80C79544:
    ctx->pc = 0x80C79544u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79544u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C79544: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C79548:
    ctx->pc = 0x80C79548u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79548u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C79548: stw     r0, 20(r1)
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
label_80C7954C:
    ctx->pc = 0x80C7954Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7954Cu)) return;
    // 80C7954C: lis     r6, -27416
    ctx->gpr[6] = ((u32)(s32)(-27416) << 16);

label_80C79550:
    ctx->pc = 0x80C79550u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79550u)) return;
    // 80C79550: addi    r6, r6, -23960
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-23960);

label_80C79554:
    ctx->pc = 0x80C79554u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79554u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C79554: lwz     r0, 0(r6)
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
label_80C79558:
    ctx->pc = 0x80C79558u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79558u)) return;
    // 80C79558: cmpw    r3, r0
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

label_80C7955C:
    ctx->pc = 0x80C7955Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7955Cu)) return;
    // 80C7955C: bc    4, 0, 0x80C79580
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C79580;
        }
    }

label_80C79560:
    ctx->pc = 0x80C79560u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79560u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C79560: lis     r6, -27416
    ctx->gpr[6] = ((u32)(s32)(-27416) << 16);

label_80C79564:
    ctx->pc = 0x80C79564u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79564u)) return;
    // 80C79564: addi    r6, r6, -23956
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-23956);

label_80C79568:
    ctx->pc = 0x80C79568u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79568u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C79568: lwz     r6, 0(r6)
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
label_80C7956C:
    ctx->pc = 0x80C7956Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7956Cu)) return;
    // 80C7956C: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80C79570:
    ctx->pc = 0x80C79570u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79570u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C79570: lwzx    r3, r6, r0
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
label_80C79574:
    ctx->pc = 0x80C79574u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79574u)) return;
    // 80C79574: cmplwi  r3, 0x0000
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

label_80C79578:
    ctx->pc = 0x80C79578u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79578u)) return;
    // 80C79578: bc    12, 2, 0x80C79580
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C79580;
        }
    }

label_80C7957C:
    ctx->pc = 0x80C7957Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C7957Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C7957C: bl      0x80C7926C
    {
            ctx->lr = 0x80C79580u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C7926Cu;
                return;
            }
            goto label_80C7926C;
    }

label_80C79580:
    ctx->pc = 0x80C79580u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79580u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C79580: lwz     r0, 20(r1)
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
label_80C79584:
    ctx->pc = 0x80C79584u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C79584u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C79584: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C79588:
    ctx->pc = 0x80C79588u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79588u)) return;
    // 80C79588: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C7958C:
    ctx->pc = 0x80C7958Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7958Cu)) return;
    // 80C7958C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C78580;
        }
    }

label_80C79590:
    ctx->pc = 0x80C79590u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79590u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C79590: stwu     r1, -16(r1)
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
label_80C79594:
    ctx->pc = 0x80C79594u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79594u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C79594: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C79598:
    ctx->pc = 0x80C79598u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79598u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C79598: stw     r0, 20(r1)
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
label_80C7959C:
    ctx->pc = 0x80C7959Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7959Cu)) return;
    // 80C7959C: lis     r6, -27416
    ctx->gpr[6] = ((u32)(s32)(-27416) << 16);

label_80C795A0:
    ctx->pc = 0x80C795A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C795A0u)) return;
    // 80C795A0: addi    r6, r6, -23960
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-23960);

label_80C795A4:
    ctx->pc = 0x80C795A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C795A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C795A4: lwz     r0, 0(r6)
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
label_80C795A8:
    ctx->pc = 0x80C795A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C795A8u)) return;
    // 80C795A8: cmpw    r3, r0
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

label_80C795AC:
    ctx->pc = 0x80C795ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C795ACu)) return;
    // 80C795AC: bc    4, 0, 0x80C795D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C795D0;
        }
    }

label_80C795B0:
    ctx->pc = 0x80C795B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C795B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C795B0: lis     r6, -27416
    ctx->gpr[6] = ((u32)(s32)(-27416) << 16);

label_80C795B4:
    ctx->pc = 0x80C795B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C795B4u)) return;
    // 80C795B4: addi    r6, r6, -23956
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-23956);

label_80C795B8:
    ctx->pc = 0x80C795B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C795B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C795B8: lwz     r6, 0(r6)
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
label_80C795BC:
    ctx->pc = 0x80C795BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C795BCu)) return;
    // 80C795BC: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80C795C0:
    ctx->pc = 0x80C795C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C795C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C795C0: lwzx    r3, r6, r0
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
label_80C795C4:
    ctx->pc = 0x80C795C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C795C4u)) return;
    // 80C795C4: cmplwi  r3, 0x0000
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

label_80C795C8:
    ctx->pc = 0x80C795C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C795C8u)) return;
    // 80C795C8: bc    12, 2, 0x80C795D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C795D0;
        }
    }

label_80C795CC:
    ctx->pc = 0x80C795CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C795CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C795CC: bl      0x80C792BC
    {
            ctx->lr = 0x80C795D0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C792BCu;
                return;
            }
            goto label_80C792BC;
    }

label_80C795D0:
    ctx->pc = 0x80C795D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C795D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C795D0: lwz     r0, 20(r1)
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
label_80C795D4:
    ctx->pc = 0x80C795D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C795D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C795D4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C795D8:
    ctx->pc = 0x80C795D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C795D8u)) return;
    // 80C795D8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C795DC:
    ctx->pc = 0x80C795DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C795DCu)) return;
    // 80C795DC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C78580;
        }
    }

label_80C795E0:
    ctx->pc = 0x80C795E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C795E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C795E0: stwu     r1, -32(r1)
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
label_80C795E4:
    ctx->pc = 0x80C795E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C795E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C795E4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C795E8:
    ctx->pc = 0x80C795E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C795E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C795E8: stw     r0, 36(r1)
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
label_80C795EC:
    ctx->pc = 0x80C795ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C795ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C795EC: stw     r31, 28(r1)
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
label_80C795F0:
    ctx->pc = 0x80C795F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C795F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C795F0: stw     r30, 24(r1)
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
label_80C795F4:
    ctx->pc = 0x80C795F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C795F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C795F4: stw     r29, 20(r1)
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
label_80C795F8:
    ctx->pc = 0x80C795F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C795F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C795F8: stw     r28, 16(r1)
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
label_80C795FC:
    ctx->pc = 0x80C795FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C795FCu)) return;
    // 80C795FC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80C79600:
    ctx->pc = 0x80C79600u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79600u)) return;
    // 80C79600: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80C79604:
    ctx->pc = 0x80C79604u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79604u)) return;
    // 80C79604: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80C79608:
    ctx->pc = 0x80C79608u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79608u)) return;
    // 80C79608: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_80C7960C:
    ctx->pc = 0x80C7960Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7960Cu)) return;
    // 80C7960C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C79610:
    ctx->pc = 0x80C79610u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79610u)) return;
    // 80C79610: bl      0x80401DB0
    {
            ctx->lr = 0x80C79614u;
            ctx->pc = 0x80401DB0u;
            return;
    }

label_80C79614:
    ctx->pc = 0x80C79614u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79614u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C79614: lis     r4, -27416
    ctx->gpr[4] = ((u32)(s32)(-27416) << 16);

label_80C79618:
    ctx->pc = 0x80C79618u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79618u)) return;
    // 80C79618: addi    r4, r4, -23952
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-23952);

label_80C7961C:
    ctx->pc = 0x80C7961Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7961Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C7961C: lwz     r0, 0(r4)
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
label_80C79620:
    ctx->pc = 0x80C79620u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79620u)) return;
    // 80C79620: add   r4, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80C79624:
    ctx->pc = 0x80C79624u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79624u)) return;
    // 80C79624: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80C79628:
    ctx->pc = 0x80C79628u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79628u)) return;
    // 80C79628: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80C7962C:
    ctx->pc = 0x80C7962Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7962Cu)) return;
    // 80C7962C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80C79630:
    ctx->pc = 0x80C79630u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79630u)) return;
    // 80C79630: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C79634:
    ctx->pc = 0x80C79634u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79634u)) return;
    // 80C79634: li      r7, 120
    ctx->gpr[7] = (u32)(s32)(120);

label_80C79638:
    ctx->pc = 0x80C79638u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79638u)) return;
    // 80C79638: bl      0x8050A0D4
    {
            ctx->lr = 0x80C7963Cu;
            ctx->pc = 0x8050A0D4u;
            return;
    }

label_80C7963C:
    ctx->pc = 0x80C7963Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C7963Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C7963C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80C79640:
    ctx->pc = 0x80C79640u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79640u)) return;
    // 80C79640: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80C79644:
    ctx->pc = 0x80C79644u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79644u)) return;
    // 80C79644: bl      0x80509C74
    {
            ctx->lr = 0x80C79648u;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80C79648:
    ctx->pc = 0x80C79648u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79648u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C79648: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80C7964C:
    ctx->pc = 0x80C7964Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7964Cu)) return;
    // 80C7964C: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80C79650:
    ctx->pc = 0x80C79650u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79650u)) return;
    // 80C79650: bl      0x80509BF8
    {
            ctx->lr = 0x80C79654u;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80C79654:
    ctx->pc = 0x80C79654u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79654u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C79654: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80C79658:
    ctx->pc = 0x80C79658u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79658u)) return;
    // 80C79658: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80C7965C:
    ctx->pc = 0x80C7965Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7965Cu)) return;
    // 80C7965C: bl      0x80509B94
    {
            ctx->lr = 0x80C79660u;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80C79660:
    ctx->pc = 0x80C79660u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79660u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80C79660: lis     r3, -27416
    ctx->gpr[3] = ((u32)(s32)(-27416) << 16);

label_80C79664:
    ctx->pc = 0x80C79664u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79664u)) return;
    // 80C79664: addi    r4, r3, -23952
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-23952);

label_80C79668:
    ctx->pc = 0x80C79668u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79668u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C79668: lwz     r3, 0(r4)
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
label_80C7966C:
    ctx->pc = 0x80C7966Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7966Cu)) return;
    // 80C7966C: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_80C79670:
    ctx->pc = 0x80C79670u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79670u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C79670: stw     r0, 0(r4)
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
label_80C79674:
    ctx->pc = 0x80C79674u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79674u)) return;
    // 80C79674: rlwinm r0, r0, 0, 27, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000001Fu;
    }

label_80C79678:
    ctx->pc = 0x80C79678u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79678u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C79678: stw     r0, 0(r4)
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
label_80C7967C:
    ctx->pc = 0x80C7967Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7967Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C7967C: lwz     r31, 28(r1)
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
label_80C79680:
    ctx->pc = 0x80C79680u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79680u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C79680: lwz     r30, 24(r1)
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
label_80C79684:
    ctx->pc = 0x80C79684u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79684u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C79684: lwz     r29, 20(r1)
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
label_80C79688:
    ctx->pc = 0x80C79688u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79688u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C79688: lwz     r28, 16(r1)
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
label_80C7968C:
    ctx->pc = 0x80C7968Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7968Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C7968C: lwz     r0, 36(r1)
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
label_80C79690:
    ctx->pc = 0x80C79690u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C79690u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C79690: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C79694:
    ctx->pc = 0x80C79694u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79694u)) return;
    // 80C79694: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80C79698:
    ctx->pc = 0x80C79698u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79698u)) return;
    // 80C79698: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C78580;
        }
    }

label_80C7969C:
    ctx->pc = 0x80C7969Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C7969Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C7969C: stwu     r1, -64(r1)
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
label_80C796A0:
    ctx->pc = 0x80C796A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C796A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C796A0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C796A4:
    ctx->pc = 0x80C796A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C796A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C796A4: stw     r0, 68(r1)
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
label_80C796A8:
    ctx->pc = 0x80C796A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C796A8u)) return;
    // 80C796A8: addi    r11, r1, 64
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(64);

label_80C796AC:
    ctx->pc = 0x80C796ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C796ACu)) return;
    // 80C796AC: bl      0x80006DD4
    {
            ctx->lr = 0x80C796B0u;
            ctx->pc = 0x80006DD4u;
            return;
    }

label_80C796B0:
    ctx->pc = 0x80C796B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 29u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C796B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 29u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80C796B0: lwz     r27, 32(r3)
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
label_80C796B4:
    ctx->pc = 0x80C796B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C796B4u)) return;
    // 80C796B4: lis     r3, -27416
    ctx->gpr[3] = ((u32)(s32)(-27416) << 16);

label_80C796B8:
    ctx->pc = 0x80C796B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C796B8u)) return;
    // 80C796B8: addi    r3, r3, -24720
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24720);

label_80C796BC:
    ctx->pc = 0x80C796BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C796BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80C796BC: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C796BCu)) return;
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
label_80C796C0:
    ctx->pc = 0x80C796C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C796C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80C796C0: lfs     f0, 44(r27)
    if (!ppc_fp_available_inline(ctx, 0x80C796C0u)) return;
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
label_80C796C4:
    ctx->pc = 0x80C796C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C796C4u)) return;
    // 80C796C4: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C796C4u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80C796C8:
    ctx->pc = 0x80C796C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C796C8u)) return;
    // 80C796C8: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80C796C8u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80C796CC:
    ctx->pc = 0x80C796CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C796CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80C796CC: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C796CCu)) return;
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
label_80C796D0:
    ctx->pc = 0x80C796D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C796D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80C796D0: lwz     r31, 12(r1)
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
label_80C796D4:
    ctx->pc = 0x80C796D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C796D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80C796D4: lfs     f0, 32(r27)
    if (!ppc_fp_available_inline(ctx, 0x80C796D4u)) return;
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
label_80C796D8:
    ctx->pc = 0x80C796D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C796D8u)) return;
    // 80C796D8: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C796D8u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80C796DC:
    ctx->pc = 0x80C796DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C796DCu)) return;
    // 80C796DC: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80C796DCu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80C796E0:
    ctx->pc = 0x80C796E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C796E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80C796E0: stfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C796E0u)) return;
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
label_80C796E4:
    ctx->pc = 0x80C796E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C796E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80C796E4: lwz     r30, 20(r1)
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
label_80C796E8:
    ctx->pc = 0x80C796E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C796E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80C796E8: lfs     f0, 36(r27)
    if (!ppc_fp_available_inline(ctx, 0x80C796E8u)) return;
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
label_80C796EC:
    ctx->pc = 0x80C796ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C796ECu)) return;
    // 80C796EC: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C796ECu)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80C796F0:
    ctx->pc = 0x80C796F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C796F0u)) return;
    // 80C796F0: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80C796F0u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80C796F4:
    ctx->pc = 0x80C796F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C796F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C796F4: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C796F4u)) return;
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
label_80C796F8:
    ctx->pc = 0x80C796F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C796F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C796F8: lwz     r29, 28(r1)
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
label_80C796FC:
    ctx->pc = 0x80C796FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C796FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C796FC: lfs     f0, 40(r27)
    if (!ppc_fp_available_inline(ctx, 0x80C796FCu)) return;
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
label_80C79700:
    ctx->pc = 0x80C79700u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79700u)) return;
    // 80C79700: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C79700u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80C79704:
    ctx->pc = 0x80C79704u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79704u)) return;
    // 80C79704: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80C79704u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80C79708:
    ctx->pc = 0x80C79708u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79708u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C79708: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C79708u)) return;
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
label_80C7970C:
    ctx->pc = 0x80C7970Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7970Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C7970C: lwz     r28, 36(r1)
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
label_80C79710:
    ctx->pc = 0x80C79710u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79710u)) return;
    // 80C79710: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80C79714:
    ctx->pc = 0x80C79714u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79714u)) return;
    // 80C79714: addi    r3, r3, 4120
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4120);

label_80C79718:
    ctx->pc = 0x80C79718u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79718u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C79718: lwz     r0, 0(r3)
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
label_80C7971C:
    ctx->pc = 0x80C7971Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7971Cu)) return;
    // 80C7971C: cmpwi   r0, 0
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

label_80C79720:
    ctx->pc = 0x80C79720u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79720u)) return;
    // 80C79720: bc    4, 2, 0x80C797D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C797D8;
        }
    }

label_80C79724:
    ctx->pc = 0x80C79724u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79724u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C79724: rlwinm r0, r31, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_80C79728:
    ctx->pc = 0x80C79728u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79728u)) return;
    // 80C79728: cmplwi  r0, 0x0000
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

label_80C7972C:
    ctx->pc = 0x80C7972Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7972Cu)) return;
    // 80C7972C: bc    12, 2, 0x80C797D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C797D8;
        }
    }

label_80C79730:
    ctx->pc = 0x80C79730u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79730u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C79730: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C79734:
    ctx->pc = 0x80C79734u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79734u)) return;
    // 80C79734: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_80C79738:
    ctx->pc = 0x80C79738u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79738u)) return;
    // 80C79738: bl      0x8060F4F8
    {
            ctx->lr = 0x80C7973Cu;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80C7973C:
    ctx->pc = 0x80C7973Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C7973Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C7973C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C79740:
    ctx->pc = 0x80C79740u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79740u)) return;
    // 80C79740: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80C79744:
    ctx->pc = 0x80C79744u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79744u)) return;
    // 80C79744: bl      0x8060F4F8
    {
            ctx->lr = 0x80C79748u;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80C79748:
    ctx->pc = 0x80C79748u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79748u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C79748: lfs     f5, 52(r27)
    if (!ppc_fp_available_inline(ctx, 0x80C79748u)) return;
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
label_80C7974C:
    ctx->pc = 0x80C7974Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7974Cu)) return;
    // 80C7974C: lis     r3, -27416
    ctx->gpr[3] = ((u32)(s32)(-27416) << 16);

label_80C79750:
    ctx->pc = 0x80C79750u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79750u)) return;
    // 80C79750: addi    r3, r3, -24712
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24712);

label_80C79754:
    ctx->pc = 0x80C79754u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79754u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C79754: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C79754u)) return;
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
label_80C79758:
    ctx->pc = 0x80C79758u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79758u)) return;
    // 80C79758: fcmpo   cr0, f5, f0
    if (!ppc_fp_available_inline(ctx, 0x80C79758u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[5], ctx->fpr[0], true);

label_80C7975C:
    ctx->pc = 0x80C7975Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7975Cu)) return;
    // 80C7975C: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80C79760:
    ctx->pc = 0x80C79760u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79760u)) return;
    // 80C79760: bc    4, 2, 0x80C79774
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C79774;
        }
    }

label_80C79764:
    ctx->pc = 0x80C79764u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79764u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C79764: lis     r3, -27416
    ctx->gpr[3] = ((u32)(s32)(-27416) << 16);

label_80C79768:
    ctx->pc = 0x80C79768u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79768u)) return;
    // 80C79768: addi    r3, r3, -24716
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24716);

label_80C7976C:
    ctx->pc = 0x80C7976Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7976Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C7976C: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C7976Cu)) return;
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
label_80C79770:
    ctx->pc = 0x80C79770u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79770u)) return;
    // 80C79770: fadds   f5, f5, f0
    if (!ppc_fp_available_inline(ctx, 0x80C79770u)) return;
    ppc_fadds(ctx, 5, 5, 0);

label_80C79774:
    ctx->pc = 0x80C79774u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79774u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C79774: rlwinm r0, r31, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_80C79778:
    ctx->pc = 0x80C79778u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79778u)) return;
    // 80C79778: cmplwi  r0, 0x00FF
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

label_80C7977C:
    ctx->pc = 0x80C7977Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7977Cu)) return;
    // 80C7977C: bc    4, 1, 0x80C79784
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C79784;
        }
    }

label_80C79780:
    ctx->pc = 0x80C79780u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79780u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C79780: li      r31, 255
    ctx->gpr[31] = (u32)(s32)(255);

label_80C79784:
    ctx->pc = 0x80C79784u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 21u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79784u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 21u : 1u;
    // 80C79784: lis     r3, -27416
    ctx->gpr[3] = ((u32)(s32)(-27416) << 16);

label_80C79788:
    ctx->pc = 0x80C79788u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79788u)) return;
    // 80C79788: addi    r3, r3, -24708
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24708);

label_80C7978C:
    ctx->pc = 0x80C7978Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7978Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80C7978C: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C7978Cu)) return;
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
label_80C79790:
    ctx->pc = 0x80C79790u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79790u)) return;
    // 80C79790: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80C79790u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_80C79794:
    ctx->pc = 0x80C79794u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79794u)) return;
    // 80C79794: lis     r3, -27416
    ctx->gpr[3] = ((u32)(s32)(-27416) << 16);

label_80C79798:
    ctx->pc = 0x80C79798u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79798u)) return;
    // 80C79798: addi    r3, r3, -24704
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24704);

label_80C7979C:
    ctx->pc = 0x80C7979Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7979Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80C7979C: lfs     f3, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C7979Cu)) return;
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
label_80C797A0:
    ctx->pc = 0x80C797A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C797A0u)) return;
    // 80C797A0: lis     r3, -27416
    ctx->gpr[3] = ((u32)(s32)(-27416) << 16);

label_80C797A4:
    ctx->pc = 0x80C797A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C797A4u)) return;
    // 80C797A4: addi    r3, r3, -24700
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24700);

label_80C797A8:
    ctx->pc = 0x80C797A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C797A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C797A8: lfs     f4, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C797A8u)) return;
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
label_80C797AC:
    ctx->pc = 0x80C797ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C797ACu)) return;
    // 80C797AC: rlwinm r5, r28, 0, 24, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[28], 0u) & 0x000000FFu;
    }

label_80C797B0:
    ctx->pc = 0x80C797B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C797B0u)) return;
    // 80C797B0: rlwinm r0, r29, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[29], 0u) & 0x000000FFu;
    }

label_80C797B4:
    ctx->pc = 0x80C797B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C797B4u)) return;
    // 80C797B4: rlwinm r4, r0, 8, 0, 23
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 8u) & 0xFFFFFF00u;
    }

label_80C797B8:
    ctx->pc = 0x80C797B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C797B8u)) return;
    // 80C797B8: rlwinm r0, r31, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_80C797BC:
    ctx->pc = 0x80C797BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C797BCu)) return;
    // 80C797BC: rlwinm r3, r0, 24, 0, 7
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 24u) & 0xFF000000u;
    }

label_80C797C0:
    ctx->pc = 0x80C797C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C797C0u)) return;
    // 80C797C0: rlwinm r0, r30, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0x000000FFu;
    }

label_80C797C4:
    ctx->pc = 0x80C797C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C797C4u)) return;
    // 80C797C4: rlwinm r0, r0, 16, 0, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 16u) & 0xFFFF0000u;
    }

label_80C797C8:
    ctx->pc = 0x80C797C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C797C8u)) return;
    // 80C797C8: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80C797CC:
    ctx->pc = 0x80C797CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C797CCu)) return;
    // 80C797CC: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_80C797D0:
    ctx->pc = 0x80C797D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C797D0u)) return;
    // 80C797D0: or   r3, r5, r0
    {
        ctx->gpr[3] = ctx->gpr[5] | ctx->gpr[0];
    }

label_80C797D4:
    ctx->pc = 0x80C797D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C797D4u)) return;
    // 80C797D4: bl      0x80C79994
    {
            ctx->lr = 0x80C797D8u;
            goto label_80C79994;
    }

label_80C797D8:
    ctx->pc = 0x80C797D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C797D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C797D8: addi    r11, r1, 64
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(64);

label_80C797DC:
    ctx->pc = 0x80C797DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C797DCu)) return;
    // 80C797DC: bl      0x80006E20
    {
            ctx->lr = 0x80C797E0u;
            ctx->pc = 0x80006E20u;
            return;
    }

label_80C797E0:
    ctx->pc = 0x80C797E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C797E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C797E0: lwz     r0, 68(r1)
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
label_80C797E4:
    ctx->pc = 0x80C797E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C797E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C797E4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C797E8:
    ctx->pc = 0x80C797E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C797E8u)) return;
    // 80C797E8: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_80C797EC:
    ctx->pc = 0x80C797ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C797ECu)) return;
    // 80C797EC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C78580;
        }
    }

label_80C797F0:
    ctx->pc = 0x80C797F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C797F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C797F0: stwu     r1, -16(r1)
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
label_80C797F4:
    ctx->pc = 0x80C797F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C797F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C797F4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C797F8:
    ctx->pc = 0x80C797F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C797F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C797F8: stw     r0, 20(r1)
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
label_80C797FC:
    ctx->pc = 0x80C797FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C797FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C797FC: lwz     r5, 32(r3)
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
label_80C79800:
    ctx->pc = 0x80C79800u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79800u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C79800: lfs     f1, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C79800u)) return;
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
label_80C79804:
    ctx->pc = 0x80C79804u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79804u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C79804: lfs     f0, 48(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C79804u)) return;
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
label_80C79808:
    ctx->pc = 0x80C79808u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79808u)) return;
    // 80C79808: fadds   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C79808u)) return;
    ppc_fadds(ctx, 1, 1, 0);

label_80C7980C:
    ctx->pc = 0x80C7980Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7980Cu)) return;
    // 80C7980C: lis     r4, -27416
    ctx->gpr[4] = ((u32)(s32)(-27416) << 16);

label_80C79810:
    ctx->pc = 0x80C79810u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79810u)) return;
    // 80C79810: addi    r4, r4, -24696
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24696);

label_80C79814:
    ctx->pc = 0x80C79814u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79814u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C79814: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C79814u)) return;
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
label_80C79818:
    ctx->pc = 0x80C79818u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79818u)) return;
    // 80C79818: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C79818u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80C7981C:
    ctx->pc = 0x80C7981Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7981Cu)) return;
    // 80C7981C: bc    4, 1, 0x80C79828
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C79828;
        }
    }

label_80C79820:
    ctx->pc = 0x80C79820u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79820u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C79820: fmr    f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C79820u)) return;
    ctx->fpr[1] = ctx->fpr[0];

label_80C79824:
    ctx->pc = 0x80C79824u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79824u)) return;
    // 80C79824: b       0x80C79840
    {
            goto label_80C79840;
    }

label_80C79828:
    ctx->pc = 0x80C79828u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79828u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C79828: lis     r4, -27416
    ctx->gpr[4] = ((u32)(s32)(-27416) << 16);

label_80C7982C:
    ctx->pc = 0x80C7982Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7982Cu)) return;
    // 80C7982C: addi    r4, r4, -24708
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24708);

label_80C79830:
    ctx->pc = 0x80C79830u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79830u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C79830: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C79830u)) return;
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
label_80C79834:
    ctx->pc = 0x80C79834u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79834u)) return;
    // 80C79834: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C79834u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80C79838:
    ctx->pc = 0x80C79838u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79838u)) return;
    // 80C79838: bc    4, 0, 0x80C79840
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C79840;
        }
    }

label_80C7983C:
    ctx->pc = 0x80C7983Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C7983Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C7983C: fmr    f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C7983Cu)) return;
    ctx->fpr[1] = ctx->fpr[0];

label_80C79840:
    ctx->pc = 0x80C79840u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79840u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C79840: stfs     f1, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C79840u)) return;
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
label_80C79844:
    ctx->pc = 0x80C79844u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79844u)) return;
    // 80C79844: bl      0x80C7969C
    {
            ctx->lr = 0x80C79848u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C7969Cu;
                return;
            }
            goto label_80C7969C;
    }

label_80C79848:
    ctx->pc = 0x80C79848u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79848u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C79848: lwz     r0, 20(r1)
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
label_80C7984C:
    ctx->pc = 0x80C7984Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C7984Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C7984C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C79850:
    ctx->pc = 0x80C79850u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79850u)) return;
    // 80C79850: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C79854:
    ctx->pc = 0x80C79854u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79854u)) return;
    // 80C79854: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C78580;
        }
    }

label_80C79858:
    ctx->pc = 0x80C79858u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79858u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C79858: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C78580;
        }
    }

label_80C7985C:
    ctx->pc = 0x80C7985Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C7985Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C7985C: stwu     r1, -16(r1)
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
label_80C79860:
    ctx->pc = 0x80C79860u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79860u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C79860: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C79864:
    ctx->pc = 0x80C79864u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79864u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C79864: stw     r0, 20(r1)
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
label_80C79868:
    ctx->pc = 0x80C79868u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79868u)) return;
    // 80C79868: lis     r4, -32568
    ctx->gpr[4] = ((u32)(s32)(-32568) << 16);

label_80C7986C:
    ctx->pc = 0x80C7986Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7986Cu)) return;
    // 80C7986C: addi    r0, r4, -26640
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-26640);

label_80C79870:
    ctx->pc = 0x80C79870u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79870u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C79870: stw     r0, 16(r3)
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
label_80C79874:
    ctx->pc = 0x80C79874u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79874u)) return;
    // 80C79874: lis     r4, -32568
    ctx->gpr[4] = ((u32)(s32)(-32568) << 16);

label_80C79878:
    ctx->pc = 0x80C79878u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79878u)) return;
    // 80C79878: addi    r0, r4, -26980
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-26980);

label_80C7987C:
    ctx->pc = 0x80C7987Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7987Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C7987C: stw     r0, 20(r3)
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
label_80C79880:
    ctx->pc = 0x80C79880u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79880u)) return;
    // 80C79880: lis     r4, -32568
    ctx->gpr[4] = ((u32)(s32)(-32568) << 16);

label_80C79884:
    ctx->pc = 0x80C79884u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79884u)) return;
    // 80C79884: addi    r0, r4, -26536
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-26536);

label_80C79888:
    ctx->pc = 0x80C79888u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79888u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C79888: stw     r0, 24(r3)
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
label_80C7988C:
    ctx->pc = 0x80C7988Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7988Cu)) return;
    // 80C7988C: bl      0x80C797F0
    {
            ctx->lr = 0x80C79890u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C797F0u;
                return;
            }
            goto label_80C797F0;
    }

label_80C79890:
    ctx->pc = 0x80C79890u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79890u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C79890: lwz     r0, 20(r1)
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
label_80C79894:
    ctx->pc = 0x80C79894u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C79894u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C79894: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C79898:
    ctx->pc = 0x80C79898u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79898u)) return;
    // 80C79898: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C7989C:
    ctx->pc = 0x80C7989Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7989Cu)) return;
    // 80C7989C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C78580;
        }
    }

label_80C798A0:
    ctx->pc = 0x80C798A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 23u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C798A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 23u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80C798A0: stwu     r1, -96(r1)
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
label_80C798A4:
    ctx->pc = 0x80C798A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C798A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80C798A4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C798A8:
    ctx->pc = 0x80C798A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C798A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80C798A8: stw     r0, 100(r1)
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
label_80C798AC:
    ctx->pc = 0x80C798ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C798ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80C798AC: stfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C798ACu)) return;
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
label_80C798B0:
    ctx->pc = 0x80C798B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C798B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80C798B0: psq_st   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C798B0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80C798B0u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C798B4:
    ctx->pc = 0x80C798B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C798B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80C798B4: stfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C798B4u)) return;
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
label_80C798B8:
    ctx->pc = 0x80C798B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C798B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80C798B8: psq_st   f30, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C798B8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x80C798B8u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C798BC:
    ctx->pc = 0x80C798BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C798BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80C798BC: stfd     f29, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C798BCu)) return;
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
label_80C798C0:
    ctx->pc = 0x80C798C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C798C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80C798C0: psq_st   f29, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C798C0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x80C798C0u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C798C4:
    ctx->pc = 0x80C798C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C798C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C798C4: stfd     f28, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C798C4u)) return;
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
label_80C798C8:
    ctx->pc = 0x80C798C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C798C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C798C8: psq_st   f28, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C798C8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x80C798C8u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C798CC:
    ctx->pc = 0x80C798CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C798CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C798CC: stfd     f27, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C798CCu)) return;
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
label_80C798D0:
    ctx->pc = 0x80C798D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C798D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C798D0: psq_st   f27, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C798D0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_store_inline(ctx, 27u, ea, false, 0u, false, 0x80C798D0u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C798D4:
    ctx->pc = 0x80C798D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C798D4u)) return;
    // 80C798D4: fmr    f27, f1
    if (!ppc_fp_available_inline(ctx, 0x80C798D4u)) return;
    ctx->fpr[27] = ctx->fpr[1];

label_80C798D8:
    ctx->pc = 0x80C798D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C798D8u)) return;
    // 80C798D8: fmr    f28, f2
    if (!ppc_fp_available_inline(ctx, 0x80C798D8u)) return;
    ctx->fpr[28] = ctx->fpr[2];

label_80C798DC:
    ctx->pc = 0x80C798DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C798DCu)) return;
    // 80C798DC: fmr    f29, f3
    if (!ppc_fp_available_inline(ctx, 0x80C798DCu)) return;
    ctx->fpr[29] = ctx->fpr[3];

label_80C798E0:
    ctx->pc = 0x80C798E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C798E0u)) return;
    // 80C798E0: fmr    f30, f4
    if (!ppc_fp_available_inline(ctx, 0x80C798E0u)) return;
    ctx->fpr[30] = ctx->fpr[4];

label_80C798E4:
    ctx->pc = 0x80C798E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C798E4u)) return;
    // 80C798E4: fmr    f31, f5
    if (!ppc_fp_available_inline(ctx, 0x80C798E4u)) return;
    ctx->fpr[31] = ctx->fpr[5];

label_80C798E8:
    ctx->pc = 0x80C798E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C798E8u)) return;
    // 80C798E8: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C798EC:
    ctx->pc = 0x80C798ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C798ECu)) return;
    // 80C798EC: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80C798F0:
    ctx->pc = 0x80C798F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C798F0u)) return;
    // 80C798F0: lis     r5, -32568
    ctx->gpr[5] = ((u32)(s32)(-32568) << 16);

label_80C798F4:
    ctx->pc = 0x80C798F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C798F4u)) return;
    // 80C798F4: addi    r5, r5, -26532
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-26532);

label_80C798F8:
    ctx->pc = 0x80C798F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C798F8u)) return;
    // 80C798F8: bl      0x8050FD60
    {
            ctx->lr = 0x80C798FCu;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80C798FC:
    ctx->pc = 0x80C798FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 25u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C798FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 25u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80C798FC: lwz     r5, 32(r3)
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
label_80C79900:
    ctx->pc = 0x80C79900u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79900u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80C79900: stfs     f27, 48(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C79900u)) return;
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
label_80C79904:
    ctx->pc = 0x80C79904u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79904u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80C79904: stfs     f28, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C79904u)) return;
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
label_80C79908:
    ctx->pc = 0x80C79908u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79908u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80C79908: stfs     f29, 32(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C79908u)) return;
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
label_80C7990C:
    ctx->pc = 0x80C7990Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7990Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80C7990C: stfs     f30, 36(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C7990Cu)) return;
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
label_80C79910:
    ctx->pc = 0x80C79910u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79910u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80C79910: stfs     f31, 40(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C79910u)) return;
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
label_80C79914:
    ctx->pc = 0x80C79914u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79914u)) return;
    // 80C79914: lis     r4, -27416
    ctx->gpr[4] = ((u32)(s32)(-27416) << 16);

label_80C79918:
    ctx->pc = 0x80C79918u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79918u)) return;
    // 80C79918: addi    r4, r4, -24712
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24712);

label_80C7991C:
    ctx->pc = 0x80C7991Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7991Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80C7991C: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C7991Cu)) return;
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
label_80C79920:
    ctx->pc = 0x80C79920u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79920u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80C79920: stfs     f0, 52(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C79920u)) return;
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
label_80C79924:
    ctx->pc = 0x80C79924u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79924u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80C79924: psq_l   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C79924u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80C79924u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C79928:
    ctx->pc = 0x80C79928u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79928u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C79928: lfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C79928u)) return;
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
label_80C7992C:
    ctx->pc = 0x80C7992Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7992Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C7992C: psq_l   f30, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C7992Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x80C7992Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C79930:
    ctx->pc = 0x80C79930u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79930u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C79930: lfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C79930u)) return;
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
label_80C79934:
    ctx->pc = 0x80C79934u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79934u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C79934: psq_l   f29, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C79934u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x80C79934u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C79938:
    ctx->pc = 0x80C79938u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79938u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C79938: lfd     f29, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C79938u)) return;
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
label_80C7993C:
    ctx->pc = 0x80C7993Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7993Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C7993C: psq_l   f28, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C7993Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x80C7993Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C79940:
    ctx->pc = 0x80C79940u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79940u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C79940: lfd     f28, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C79940u)) return;
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
label_80C79944:
    ctx->pc = 0x80C79944u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79944u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C79944: psq_l   f27, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C79944u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_load_inline(ctx, 27u, ea, false, 0u, false, 0x80C79944u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C79948:
    ctx->pc = 0x80C79948u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79948u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C79948: lfd     f27, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C79948u)) return;
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
label_80C7994C:
    ctx->pc = 0x80C7994Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7994Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C7994C: lwz     r0, 100(r1)
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
label_80C79950:
    ctx->pc = 0x80C79950u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C79950u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C79950: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C79954:
    ctx->pc = 0x80C79954u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79954u)) return;
    // 80C79954: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_80C79958:
    ctx->pc = 0x80C79958u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79958u)) return;
    // 80C79958: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C78580;
        }
    }

label_80C7995C:
    ctx->pc = 0x80C7995Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C7995Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C7995C: lwz     r3, 32(r3)
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
label_80C79960:
    ctx->pc = 0x80C79960u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79960u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C79960: stfs     f1, 48(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C79960u)) return;
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
label_80C79964:
    ctx->pc = 0x80C79964u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79964u)) return;
    // 80C79964: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C78580;
        }
    }

label_80C79968:
    ctx->pc = 0x80C79968u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79968u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C79968: lwz     r3, 32(r3)
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
label_80C7996C:
    ctx->pc = 0x80C7996Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7996Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C7996C: stfs     f1, 44(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C7996Cu)) return;
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
label_80C79970:
    ctx->pc = 0x80C79970u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79970u)) return;
    // 80C79970: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C78580;
        }
    }

label_80C79974:
    ctx->pc = 0x80C79974u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79974u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C79974: lwz     r3, 32(r3)
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
label_80C79978:
    ctx->pc = 0x80C79978u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79978u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C79978: stfs     f1, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C79978u)) return;
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
label_80C7997C:
    ctx->pc = 0x80C7997Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7997Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C7997C: stfs     f2, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C7997Cu)) return;
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
label_80C79980:
    ctx->pc = 0x80C79980u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79980u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C79980: stfs     f3, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C79980u)) return;
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
label_80C79984:
    ctx->pc = 0x80C79984u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79984u)) return;
    // 80C79984: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C78580;
        }
    }

label_80C79988:
    ctx->pc = 0x80C79988u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79988u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C79988: lwz     r3, 32(r3)
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
label_80C7998C:
    ctx->pc = 0x80C7998Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7998Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C7998C: stfs     f1, 52(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C7998Cu)) return;
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
label_80C79990:
    ctx->pc = 0x80C79990u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79990u)) return;
    // 80C79990: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C78580;
        }
    }

label_80C79994:
    ctx->pc = 0x80C79994u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79994u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C79994: stwu     r1, -16(r1)
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
label_80C79998:
    ctx->pc = 0x80C79998u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79998u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C79998: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C7999C:
    ctx->pc = 0x80C7999Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C7999Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C7999C: stw     r0, 20(r1)
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
label_80C799A0:
    ctx->pc = 0x80C799A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C799A0u)) return;
    // 80C799A0: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80C799A4:
    ctx->pc = 0x80C799A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C799A4u)) return;
    // 80C799A4: bl      0x80607948
    {
            ctx->lr = 0x80C799A8u;
            ctx->pc = 0x80607948u;
            return;
    }

label_80C799A8:
    ctx->pc = 0x80C799A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C799A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C799A8: lwz     r0, 20(r1)
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
label_80C799AC:
    ctx->pc = 0x80C799ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C799ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C799AC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C799B0:
    ctx->pc = 0x80C799B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C799B0u)) return;
    // 80C799B0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C799B4:
    ctx->pc = 0x80C799B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C799B4u)) return;
    // 80C799B4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C78580;
        }
    }

label_80C799B8:
    ctx->pc = 0x80C799B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C799B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C799B8: stwu     r1, -32(r1)
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
label_80C799BC:
    ctx->pc = 0x80C799BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C799BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C799BC: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C799C0:
    ctx->pc = 0x80C799C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C799C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C799C0: stw     r0, 36(r1)
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
label_80C799C4:
    ctx->pc = 0x80C799C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C799C4u)) return;
    // 80C799C4: addi    r11, r1, 32
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(32);

label_80C799C8:
    ctx->pc = 0x80C799C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C799C8u)) return;
    // 80C799C8: bl      0x80006DD4
    {
            ctx->lr = 0x80C799CCu;
            ctx->pc = 0x80006DD4u;
            return;
    }

label_80C799CC:
    ctx->pc = 0x80C799CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C799CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C799CC: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80C799D0:
    ctx->pc = 0x80C799D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C799D0u)) return;
    // 80C799D0: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80C799D4:
    ctx->pc = 0x80C799D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C799D4u)) return;
    // 80C799D4: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80C799D8:
    ctx->pc = 0x80C799D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C799D8u)) return;
    // 80C799D8: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_80C799DC:
    ctx->pc = 0x80C799DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C799DCu)) return;
    // 80C799DC: or   r31, r7, r7
    {
        ctx->gpr[31] = ctx->gpr[7] | ctx->gpr[7];
    }

label_80C799E0:
    ctx->pc = 0x80C799E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C799E0u)) return;
    // 80C799E0: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C799E4:
    ctx->pc = 0x80C799E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C799E4u)) return;
    // 80C799E4: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80C799E8:
    ctx->pc = 0x80C799E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C799E8u)) return;
    // 80C799E8: lis     r5, -32568
    ctx->gpr[5] = ((u32)(s32)(-32568) << 16);

label_80C799EC:
    ctx->pc = 0x80C799ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C799ECu)) return;
    // 80C799EC: addi    r5, r5, -25960
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-25960);

label_80C799F0:
    ctx->pc = 0x80C799F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C799F0u)) return;
    // 80C799F0: bl      0x8050FD60
    {
            ctx->lr = 0x80C799F4u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80C799F4:
    ctx->pc = 0x80C799F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C799F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C799F4: lis     r4, -27416
    ctx->gpr[4] = ((u32)(s32)(-27416) << 16);

label_80C799F8:
    ctx->pc = 0x80C799F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C799F8u)) return;
    // 80C799F8: addi    r4, r4, -23944
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-23944);

label_80C799FC:
    ctx->pc = 0x80C799FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C799FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C799FC: stw     r3, 0(r4)
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
label_80C79A00:
    ctx->pc = 0x80C79A00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79A00u)) return;
    // 80C79A00: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_80C79A04:
    ctx->pc = 0x80C79A04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79A04u)) return;
    // 80C79A04: bl      0x8050EF60
    {
            ctx->lr = 0x80C79A08u;
            ctx->pc = 0x8050EF60u;
            return;
    }

label_80C79A08:
    ctx->pc = 0x80C79A08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 15u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79A08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 15u : 1u;
    // 80C79A08: lis     r4, -27416
    ctx->gpr[4] = ((u32)(s32)(-27416) << 16);

label_80C79A0C:
    ctx->pc = 0x80C79A0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79A0Cu)) return;
    // 80C79A0C: addi    r4, r4, -23944
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-23944);

label_80C79A10:
    ctx->pc = 0x80C79A10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79A10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C79A10: lwz     r4, 0(r4)
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
label_80C79A14:
    ctx->pc = 0x80C79A14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79A14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C79A14: lwz     r4, 32(r4)
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
label_80C79A18:
    ctx->pc = 0x80C79A18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79A18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C79A18: stw     r3, 16(r4)
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
label_80C79A1C:
    ctx->pc = 0x80C79A1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79A1Cu)) return;
    // 80C79A1C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80C79A20:
    ctx->pc = 0x80C79A20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79A20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C79A20: stb     r0, 0(r4)
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
label_80C79A24:
    ctx->pc = 0x80C79A24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79A24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C79A24: stw     r0, 8(r4)
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
label_80C79A28:
    ctx->pc = 0x80C79A28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79A28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C79A28: stb     r27, 0(r3)
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
label_80C79A2C:
    ctx->pc = 0x80C79A2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79A2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C79A2C: stb     r28, 1(r3)
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
label_80C79A30:
    ctx->pc = 0x80C79A30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79A30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C79A30: stb     r29, 2(r3)
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
label_80C79A34:
    ctx->pc = 0x80C79A34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79A34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C79A34: stb     r30, 3(r3)
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
label_80C79A38:
    ctx->pc = 0x80C79A38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79A38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C79A38: stw     r31, 4(r3)
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
label_80C79A3C:
    ctx->pc = 0x80C79A3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79A3Cu)) return;
    // 80C79A3C: addi    r11, r1, 32
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(32);

label_80C79A40:
    ctx->pc = 0x80C79A40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79A40u)) return;
    // 80C79A40: bl      0x80006E20
    {
            ctx->lr = 0x80C79A44u;
            ctx->pc = 0x80006E20u;
            return;
    }

label_80C79A44:
    ctx->pc = 0x80C79A44u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79A44u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C79A44: lwz     r0, 36(r1)
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
label_80C79A48:
    ctx->pc = 0x80C79A48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C79A48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C79A48: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C79A4C:
    ctx->pc = 0x80C79A4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79A4Cu)) return;
    // 80C79A4C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80C79A50:
    ctx->pc = 0x80C79A50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79A50u)) return;
    // 80C79A50: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C78580;
        }
    }

label_80C79A54:
    ctx->pc = 0x80C79A54u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79A54u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C79A54: stwu     r1, -16(r1)
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
label_80C79A58:
    ctx->pc = 0x80C79A58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79A58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C79A58: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C79A5C:
    ctx->pc = 0x80C79A5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79A5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C79A5C: stw     r0, 20(r1)
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
label_80C79A60:
    ctx->pc = 0x80C79A60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79A60u)) return;
    // 80C79A60: lis     r3, -27416
    ctx->gpr[3] = ((u32)(s32)(-27416) << 16);

label_80C79A64:
    ctx->pc = 0x80C79A64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79A64u)) return;
    // 80C79A64: addi    r3, r3, -23944
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-23944);

label_80C79A68:
    ctx->pc = 0x80C79A68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79A68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C79A68: lwz     r3, 0(r3)
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
label_80C79A6C:
    ctx->pc = 0x80C79A6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79A6Cu)) return;
    // 80C79A6C: cmplwi  r3, 0x0000
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

label_80C79A70:
    ctx->pc = 0x80C79A70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79A70u)) return;
    // 80C79A70: bc    12, 2, 0x80C79A88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C79A88;
        }
    }

label_80C79A74:
    ctx->pc = 0x80C79A74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79A74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C79A74: bl      0x8050F9E0
    {
            ctx->lr = 0x80C79A78u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80C79A78:
    ctx->pc = 0x80C79A78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79A78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C79A78: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80C79A7C:
    ctx->pc = 0x80C79A7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79A7Cu)) return;
    // 80C79A7C: lis     r3, -27416
    ctx->gpr[3] = ((u32)(s32)(-27416) << 16);

label_80C79A80:
    ctx->pc = 0x80C79A80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79A80u)) return;
    // 80C79A80: addi    r3, r3, -23944
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-23944);

label_80C79A84:
    ctx->pc = 0x80C79A84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79A84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C79A84: stw     r0, 0(r3)
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
label_80C79A88:
    ctx->pc = 0x80C79A88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79A88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C79A88: lwz     r0, 20(r1)
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
label_80C79A8C:
    ctx->pc = 0x80C79A8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C79A8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C79A8C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C79A90:
    ctx->pc = 0x80C79A90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79A90u)) return;
    // 80C79A90: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C79A94:
    ctx->pc = 0x80C79A94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79A94u)) return;
    // 80C79A94: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C78580;
        }
    }

label_80C79A98:
    ctx->pc = 0x80C79A98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79A98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C79A98: lis     r4, -32568
    ctx->gpr[4] = ((u32)(s32)(-32568) << 16);

label_80C79A9C:
    ctx->pc = 0x80C79A9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79A9Cu)) return;
    // 80C79A9C: addi    r0, r4, -25920
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-25920);

label_80C79AA0:
    ctx->pc = 0x80C79AA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79AA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C79AA0: stw     r0, 16(r3)
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
label_80C79AA4:
    ctx->pc = 0x80C79AA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79AA4u)) return;
    // 80C79AA4: lis     r4, -32568
    ctx->gpr[4] = ((u32)(s32)(-32568) << 16);

label_80C79AA8:
    ctx->pc = 0x80C79AA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79AA8u)) return;
    // 80C79AA8: addi    r0, r4, -25336
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-25336);

label_80C79AAC:
    ctx->pc = 0x80C79AACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79AACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C79AAC: stw     r0, 20(r3)
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
label_80C79AB0:
    ctx->pc = 0x80C79AB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79AB0u)) return;
    // 80C79AB0: lis     r4, -32568
    ctx->gpr[4] = ((u32)(s32)(-32568) << 16);

label_80C79AB4:
    ctx->pc = 0x80C79AB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79AB4u)) return;
    // 80C79AB4: addi    r0, r4, -25280
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-25280);

label_80C79AB8:
    ctx->pc = 0x80C79AB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79AB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C79AB8: stw     r0, 24(r3)
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
label_80C79ABC:
    ctx->pc = 0x80C79ABCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79ABCu)) return;
    // 80C79ABC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C78580;
        }
    }

label_80C79AC0:
    ctx->pc = 0x80C79AC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79AC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C79AC0: stwu     r1, -16(r1)
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
label_80C79AC4:
    ctx->pc = 0x80C79AC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79AC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C79AC4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C79AC8:
    ctx->pc = 0x80C79AC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79AC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C79AC8: stw     r0, 20(r1)
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
label_80C79ACC:
    ctx->pc = 0x80C79ACCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79ACCu)) return;
    // 80C79ACC: bl      0x80C79D08
    {
            ctx->lr = 0x80C79AD0u;
            goto label_80C79D08;
    }

label_80C79AD0:
    ctx->pc = 0x80C79AD0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79AD0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C79AD0: lwz     r0, 20(r1)
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
label_80C79AD4:
    ctx->pc = 0x80C79AD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C79AD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C79AD4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C79AD8:
    ctx->pc = 0x80C79AD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79AD8u)) return;
    // 80C79AD8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C79ADC:
    ctx->pc = 0x80C79ADCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79ADCu)) return;
    // 80C79ADC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C78580;
        }
    }

label_80C79AE0:
    ctx->pc = 0x80C79AE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 24u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79AE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 24u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80C79AE0: stwu     r1, -128(r1)
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
label_80C79AE4:
    ctx->pc = 0x80C79AE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79AE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80C79AE4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C79AE8:
    ctx->pc = 0x80C79AE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79AE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80C79AE8: stw     r0, 132(r1)
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
label_80C79AEC:
    ctx->pc = 0x80C79AECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79AECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80C79AEC: stfd     f31, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C79AECu)) return;
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
label_80C79AF0:
    ctx->pc = 0x80C79AF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79AF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80C79AF0: psq_st   f31, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C79AF0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80C79AF0u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C79AF4:
    ctx->pc = 0x80C79AF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79AF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80C79AF4: stfd     f30, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C79AF4u)) return;
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
label_80C79AF8:
    ctx->pc = 0x80C79AF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79AF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80C79AF8: psq_st   f30, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C79AF8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x80C79AF8u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C79AFC:
    ctx->pc = 0x80C79AFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79AFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80C79AFC: stfd     f29, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C79AFCu)) return;
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
label_80C79B00:
    ctx->pc = 0x80C79B00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79B00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80C79B00: psq_st   f29, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C79B00u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x80C79B00u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C79B04:
    ctx->pc = 0x80C79B04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79B04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80C79B04: stw     r31, 76(r1)
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
label_80C79B08:
    ctx->pc = 0x80C79B08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79B08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C79B08: stw     r30, 72(r1)
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
label_80C79B0C:
    ctx->pc = 0x80C79B0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79B0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C79B0C: stw     r29, 68(r1)
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
label_80C79B10:
    ctx->pc = 0x80C79B10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79B10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C79B10: stw     r28, 64(r1)
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
label_80C79B14:
    ctx->pc = 0x80C79B14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79B14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C79B14: lwz     r3, 32(r3)
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
label_80C79B18:
    ctx->pc = 0x80C79B18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79B18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C79B18: lwz     r30, 16(r3)
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
label_80C79B1C:
    ctx->pc = 0x80C79B1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79B1Cu)) return;
    // 80C79B1C: addi    r0, r1, 16
    ctx->gpr[0] = ctx->gpr[1] + (u32)(s32)(16);

label_80C79B20:
    ctx->pc = 0x80C79B20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79B20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C79B20: stw     r0, 32(r1)
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
label_80C79B24:
    ctx->pc = 0x80C79B24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79B24u)) return;
    // 80C79B24: addi    r0, r1, 8
    ctx->gpr[0] = ctx->gpr[1] + (u32)(s32)(8);

label_80C79B28:
    ctx->pc = 0x80C79B28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79B28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C79B28: stw     r0, 36(r1)
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
label_80C79B2C:
    ctx->pc = 0x80C79B2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79B2Cu)) return;
    // 80C79B2C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80C79B30:
    ctx->pc = 0x80C79B30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79B30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C79B30: stw     r0, 40(r1)
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
label_80C79B34:
    ctx->pc = 0x80C79B34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79B34u)) return;
    // 80C79B34: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_80C79B38:
    ctx->pc = 0x80C79B38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79B38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C79B38: stw     r0, 44(r1)
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
label_80C79B3C:
    ctx->pc = 0x80C79B3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79B3Cu)) return;
    // 80C79B3C: bl      0x80450D68
    {
            ctx->lr = 0x80C79B40u;
            ctx->pc = 0x80450D68u;
            return;
    }

label_80C79B40:
    ctx->pc = 0x80C79B40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79B40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C79B40: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C79B44:
    ctx->pc = 0x80C79B44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79B44u)) return;
    // 80C79B44: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_80C79B48:
    ctx->pc = 0x80C79B48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79B48u)) return;
    // 80C79B48: bl      0x8060F4F8
    {
            ctx->lr = 0x80C79B4Cu;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80C79B4C:
    ctx->pc = 0x80C79B4Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79B4Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C79B4C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C79B50:
    ctx->pc = 0x80C79B50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79B50u)) return;
    // 80C79B50: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80C79B54:
    ctx->pc = 0x80C79B54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79B54u)) return;
    // 80C79B54: bl      0x8060F4F8
    {
            ctx->lr = 0x80C79B58u;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80C79B58:
    ctx->pc = 0x80C79B58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79B58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80C79B58: lis     r3, -27416
    ctx->gpr[3] = ((u32)(s32)(-27416) << 16);

label_80C79B5C:
    ctx->pc = 0x80C79B5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79B5Cu)) return;
    // 80C79B5C: addi    r3, r3, -23940
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-23940);

label_80C79B60:
    ctx->pc = 0x80C79B60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79B60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C79B60: lwz     r29, 0(r3)
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
label_80C79B64:
    ctx->pc = 0x80C79B64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79B64u)) return;
    // 80C79B64: lis     r3, -27416
    ctx->gpr[3] = ((u32)(s32)(-27416) << 16);

label_80C79B68:
    ctx->pc = 0x80C79B68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79B68u)) return;
    // 80C79B68: addi    r3, r3, -24688
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24688);

label_80C79B6C:
    ctx->pc = 0x80C79B6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79B6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C79B6C: lfs     f29, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C79B6Cu)) return;
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
label_80C79B70:
    ctx->pc = 0x80C79B70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79B70u)) return;
    // 80C79B70: lis     r3, -27416
    ctx->gpr[3] = ((u32)(s32)(-27416) << 16);

label_80C79B74:
    ctx->pc = 0x80C79B74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79B74u)) return;
    // 80C79B74: addi    r3, r3, -24672
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24672);

label_80C79B78:
    ctx->pc = 0x80C79B78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79B78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C79B78: lfd     f30, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C79B78u)) return;
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
label_80C79B7C:
    ctx->pc = 0x80C79B7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79B7Cu)) return;
    // 80C79B7C: lis     r31, 17200
    ctx->gpr[31] = ((u32)(s32)(17200) << 16);

label_80C79B80:
    ctx->pc = 0x80C79B80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79B80u)) return;
    // 80C79B80: lis     r3, -27416
    ctx->gpr[3] = ((u32)(s32)(-27416) << 16);

label_80C79B84:
    ctx->pc = 0x80C79B84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79B84u)) return;
    // 80C79B84: addi    r3, r3, -24684
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24684);

label_80C79B88:
    ctx->pc = 0x80C79B88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79B88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C79B88: lfs     f31, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C79B88u)) return;
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
label_80C79B8C:
    ctx->pc = 0x80C79B8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79B8Cu)) return;
    // 80C79B8C: lis     r3, -27416
    ctx->gpr[3] = ((u32)(s32)(-27416) << 16);

label_80C79B90:
    ctx->pc = 0x80C79B90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79B90u)) return;
    // 80C79B90: addi    r28, r3, -24680
    ctx->gpr[28] = ctx->gpr[3] + (u32)(s32)(-24680);

label_80C79B94:
    ctx->pc = 0x80C79B94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79B94u)) return;
    // 80C79B94: b       0x80C79C5C
    {
            goto label_80C79C5C;
    }

label_80C79B98:
    ctx->pc = 0x80C79B98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 46u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79B98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 46u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 45u : 0u;
    // 80C79B98: lwz     r3, 32(r1)
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
label_80C79B9C:
    ctx->pc = 0x80C79B9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79B9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 44u : 0u;
    // 80C79B9C: stfs     f29, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C79B9Cu)) return;
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
label_80C79BA0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79BA0u)) return;
    // 80C79BA0: xoris   r4, r29, 0x8000
    ctx->gpr[4] = ctx->gpr[29] ^ (0x8000u << 16);

label_80C79BA4:
    ctx->pc = 0x80C79BA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79BA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 42u : 0u;
    // 80C79BA4: stw     r4, 52(r1)
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
label_80C79BA8:
    ctx->pc = 0x80C79BA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79BA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 41u : 0u;
    // 80C79BA8: stw     r31, 48(r1)
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
label_80C79BAC:
    ctx->pc = 0x80C79BACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79BACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 40u : 0u;
    // 80C79BAC: lfd     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C79BACu)) return;
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
label_80C79BB0:
    ctx->pc = 0x80C79BB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79BB0u)) return;
    // 80C79BB0: fsubs   f0, f0, f30
    if (!ppc_fp_available_inline(ctx, 0x80C79BB0u)) return;
    ppc_fsubs(ctx, 0, 0, 30);

label_80C79BB4:
    ctx->pc = 0x80C79BB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79BB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 38u : 0u;
    // 80C79BB4: lwz     r3, 32(r1)
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
label_80C79BB8:
    ctx->pc = 0x80C79BB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79BB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 37u : 0u;
    // 80C79BB8: stfs     f0, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C79BB8u)) return;
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
label_80C79BBC:
    ctx->pc = 0x80C79BBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79BBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 36u : 0u;
    // 80C79BBC: lbz     r0, 0(r30)
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
label_80C79BC0:
    ctx->pc = 0x80C79BC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79BC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 35u : 0u;
    // 80C79BC0: lwz     r3, 36(r1)
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
label_80C79BC4:
    ctx->pc = 0x80C79BC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79BC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 34u : 0u;
    // 80C79BC4: stb     r0, 0(r3)
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
label_80C79BC8:
    ctx->pc = 0x80C79BC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79BC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 33u : 0u;
    // 80C79BC8: lbz     r0, 1(r30)
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
label_80C79BCC:
    ctx->pc = 0x80C79BCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79BCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 32u : 0u;
    // 80C79BCC: lwz     r3, 36(r1)
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
label_80C79BD0:
    ctx->pc = 0x80C79BD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79BD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 31u : 0u;
    // 80C79BD0: stb     r0, 1(r3)
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
label_80C79BD4:
    ctx->pc = 0x80C79BD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79BD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 30u : 0u;
    // 80C79BD4: lbz     r0, 2(r30)
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
label_80C79BD8:
    ctx->pc = 0x80C79BD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79BD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 80C79BD8: lwz     r3, 36(r1)
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
label_80C79BDC:
    ctx->pc = 0x80C79BDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79BDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80C79BDC: stb     r0, 2(r3)
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
label_80C79BE0:
    ctx->pc = 0x80C79BE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79BE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 80C79BE0: lbz     r0, 3(r30)
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
label_80C79BE4:
    ctx->pc = 0x80C79BE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79BE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 80C79BE4: lwz     r3, 36(r1)
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
label_80C79BE8:
    ctx->pc = 0x80C79BE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79BE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80C79BE8: stb     r0, 3(r3)
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
label_80C79BEC:
    ctx->pc = 0x80C79BECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79BECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80C79BEC: lwz     r3, 32(r1)
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
label_80C79BF0:
    ctx->pc = 0x80C79BF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79BF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80C79BF0: stfs     f31, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C79BF0u)) return;
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
label_80C79BF4:
    ctx->pc = 0x80C79BF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79BF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80C79BF4: stw     r4, 60(r1)
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
label_80C79BF8:
    ctx->pc = 0x80C79BF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79BF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80C79BF8: stw     r31, 56(r1)
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
label_80C79BFC:
    ctx->pc = 0x80C79BFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79BFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80C79BFC: lfd     f0, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C79BFCu)) return;
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
label_80C79C00:
    ctx->pc = 0x80C79C00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79C00u)) return;
    // 80C79C00: fsubs   f0, f0, f30
    if (!ppc_fp_available_inline(ctx, 0x80C79C00u)) return;
    ppc_fsubs(ctx, 0, 0, 30);

label_80C79C04:
    ctx->pc = 0x80C79C04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79C04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80C79C04: lwz     r3, 32(r1)
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
label_80C79C08:
    ctx->pc = 0x80C79C08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79C08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80C79C08: stfs     f0, 12(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C79C08u)) return;
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
label_80C79C0C:
    ctx->pc = 0x80C79C0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79C0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80C79C0C: lbz     r0, 0(r30)
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
label_80C79C10:
    ctx->pc = 0x80C79C10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79C10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80C79C10: lwz     r3, 36(r1)
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
label_80C79C14:
    ctx->pc = 0x80C79C14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79C14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80C79C14: stb     r0, 4(r3)
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
label_80C79C18:
    ctx->pc = 0x80C79C18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79C18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C79C18: lbz     r0, 1(r30)
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
label_80C79C1C:
    ctx->pc = 0x80C79C1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79C1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C79C1C: lwz     r3, 36(r1)
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
label_80C79C20:
    ctx->pc = 0x80C79C20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79C20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C79C20: stb     r0, 5(r3)
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
label_80C79C24:
    ctx->pc = 0x80C79C24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79C24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C79C24: lbz     r0, 2(r30)
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
label_80C79C28:
    ctx->pc = 0x80C79C28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79C28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C79C28: lwz     r3, 36(r1)
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
label_80C79C2C:
    ctx->pc = 0x80C79C2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79C2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C79C2C: stb     r0, 6(r3)
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
label_80C79C30:
    ctx->pc = 0x80C79C30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79C30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C79C30: lbz     r0, 3(r30)
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
label_80C79C34:
    ctx->pc = 0x80C79C34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79C34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C79C34: lwz     r3, 36(r1)
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
label_80C79C38:
    ctx->pc = 0x80C79C38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79C38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C79C38: stb     r0, 7(r3)
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
label_80C79C3C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79C3Cu)) return;
    // 80C79C3C: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_80C79C40:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79C40u)) return;
    // 80C79C40: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80C79C44:
    ctx->pc = 0x80C79C44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79C44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C79C44: lfs     f1, 0(r28)
    if (!ppc_fp_available_inline(ctx, 0x80C79C44u)) return;
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
label_80C79C48:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79C48u)) return;
    // 80C79C48: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_80C79C4C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79C4Cu)) return;
    // 80C79C4C: bl      0x800505F8
    {
            ctx->lr = 0x80C79C50u;
            ctx->pc = 0x800505F8u;
            return;
    }

label_80C79C50:
    ctx->pc = 0x80C79C50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79C50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C79C50: lwz     r0, 4(r30)
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
label_80C79C54:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79C54u)) return;
    // 80C79C54: add   r29, r0, r29
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[29];
        u32 res = a + b;
        ctx->gpr[29] = res;
    }

label_80C79C58:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79C58u)) return;
    // 80C79C58: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_80C79C5C:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79C5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C79C5C: cmpwi   r29, 480
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

label_80C79C60:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79C60u)) return;
    // 80C79C60: bc    12, 0, 0x80C79B98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C79B98u;
                return;
            }
            goto label_80C79B98;
        }
    }

label_80C79C64:
    ctx->pc = 0x80C79C64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 15u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79C64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 15u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80C79C64: psq_l   f31, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C79C64u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80C79C64u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C79C68:
    ctx->pc = 0x80C79C68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79C68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C79C68: lfd     f31, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C79C68u)) return;
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
label_80C79C6C:
    ctx->pc = 0x80C79C6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79C6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C79C6C: psq_l   f30, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C79C6Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x80C79C6Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C79C70:
    ctx->pc = 0x80C79C70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79C70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C79C70: lfd     f30, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C79C70u)) return;
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
label_80C79C74:
    ctx->pc = 0x80C79C74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79C74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C79C74: psq_l   f29, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C79C74u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x80C79C74u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C79C78:
    ctx->pc = 0x80C79C78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79C78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C79C78: lfd     f29, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C79C78u)) return;
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
label_80C79C7C:
    ctx->pc = 0x80C79C7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79C7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C79C7C: lwz     r31, 76(r1)
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
label_80C79C80:
    ctx->pc = 0x80C79C80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79C80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C79C80: lwz     r30, 72(r1)
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
label_80C79C84:
    ctx->pc = 0x80C79C84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79C84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C79C84: lwz     r29, 68(r1)
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
label_80C79C88:
    ctx->pc = 0x80C79C88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79C88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C79C88: lwz     r28, 64(r1)
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
label_80C79C8C:
    ctx->pc = 0x80C79C8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79C8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C79C8C: lwz     r0, 132(r1)
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
label_80C79C90:
    ctx->pc = 0x80C79C90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C79C90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C79C90: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C79C94:
    ctx->pc = 0x80C79C94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79C94u)) return;
    // 80C79C94: addi    r1, r1, 128
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(128);

label_80C79C98:
    ctx->pc = 0x80C79C98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79C98u)) return;
    // 80C79C98: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C78580;
        }
    }

label_80C79C9C:
    ctx->pc = 0x80C79C9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 14u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79C9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 14u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C79C9C: stwu     r1, -16(r1)
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
label_80C79CA0:
    ctx->pc = 0x80C79CA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79CA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C79CA0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C79CA4:
    ctx->pc = 0x80C79CA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79CA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C79CA4: stw     r0, 20(r1)
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
label_80C79CA8:
    ctx->pc = 0x80C79CA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79CA8u)) return;
    // 80C79CA8: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80C79CAC:
    ctx->pc = 0x80C79CACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79CACu)) return;
    // 80C79CAC: lis     r3, -27416
    ctx->gpr[3] = ((u32)(s32)(-27416) << 16);

label_80C79CB0:
    ctx->pc = 0x80C79CB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79CB0u)) return;
    // 80C79CB0: addi    r6, r3, -23940
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-23940);

label_80C79CB4:
    ctx->pc = 0x80C79CB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79CB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C79CB4: lwz     r3, 0(r6)
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
label_80C79CB8:
    ctx->pc = 0x80C79CB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79CB8u)) return;
    // 80C79CB8: addi    r5, r3, 1
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(1);

label_80C79CBC:
    ctx->pc = 0x80C79CBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79CBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C79CBC: stw     r5, 0(r6)
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
label_80C79CC0:
    ctx->pc = 0x80C79CC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79CC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C79CC0: lwz     r3, 32(r4)
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
label_80C79CC4:
    ctx->pc = 0x80C79CC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79CC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C79CC4: lwz     r3, 16(r3)
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
label_80C79CC8:
    ctx->pc = 0x80C79CC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79CC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C79CC8: lwz     r0, 4(r3)
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
label_80C79CCC:
    ctx->pc = 0x80C79CCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79CCCu)) return;
    // 80C79CCC: cmpw    r5, r0
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

label_80C79CD0:
    ctx->pc = 0x80C79CD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79CD0u)) return;
    // 80C79CD0: bc    4, 2, 0x80C79CDC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C79CDC;
        }
    }

label_80C79CD4:
    ctx->pc = 0x80C79CD4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79CD4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C79CD4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80C79CD8:
    ctx->pc = 0x80C79CD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79CD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C79CD8: stw     r0, 0(r6)
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
label_80C79CDC:
    ctx->pc = 0x80C79CDCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79CDCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C79CDC: lis     r3, -32568
    ctx->gpr[3] = ((u32)(s32)(-32568) << 16);

label_80C79CE0:
    ctx->pc = 0x80C79CE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79CE0u)) return;
    // 80C79CE0: addi    r3, r3, -25888
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25888);

label_80C79CE4:
    ctx->pc = 0x80C79CE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79CE4u)) return;
    // 80C79CE4: lis     r5, -27416
    ctx->gpr[5] = ((u32)(s32)(-27416) << 16);

label_80C79CE8:
    ctx->pc = 0x80C79CE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79CE8u)) return;
    // 80C79CE8: addi    r5, r5, -24664
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24664);

label_80C79CEC:
    ctx->pc = 0x80C79CECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79CECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C79CEC: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C79CECu)) return;
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
label_80C79CF0:
    ctx->pc = 0x80C79CF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79CF0u)) return;
    // 80C79CF0: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_80C79CF4:
    ctx->pc = 0x80C79CF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79CF4u)) return;
    // 80C79CF4: bl      0x80605D44
    {
            ctx->lr = 0x80C79CF8u;
            ctx->pc = 0x80605D44u;
            return;
    }

label_80C79CF8:
    ctx->pc = 0x80C79CF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79CF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C79CF8: lwz     r0, 20(r1)
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
label_80C79CFC:
    ctx->pc = 0x80C79CFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C79CFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C79CFC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C79D00:
    ctx->pc = 0x80C79D00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79D00u)) return;
    // 80C79D00: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C79D04:
    ctx->pc = 0x80C79D04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79D04u)) return;
    // 80C79D04: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C78580;
        }
    }

label_80C79D08:
    ctx->pc = 0x80C79D08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79D08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C79D08: stwu     r1, -16(r1)
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
label_80C79D0C:
    ctx->pc = 0x80C79D0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79D0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C79D0C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C79D10:
    ctx->pc = 0x80C79D10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79D10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C79D10: stw     r0, 20(r1)
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
label_80C79D14:
    ctx->pc = 0x80C79D14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79D14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C79D14: lwz     r4, 32(r3)
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
label_80C79D18:
    ctx->pc = 0x80C79D18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79D18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C79D18: lbz     r0, 0(r4)
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
label_80C79D1C:
    ctx->pc = 0x80C79D1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79D1Cu)) return;
    // 80C79D1C: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80C79D20:
    ctx->pc = 0x80C79D20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79D20u)) return;
    // 80C79D20: cmpwi   r0, 0
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

label_80C79D24:
    ctx->pc = 0x80C79D24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79D24u)) return;
    // 80C79D24: bc    12, 2, 0x80C79D2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C79D2C;
        }
    }

label_80C79D28:
    ctx->pc = 0x80C79D28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79D28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C79D28: b       0x80C79D30
    {
            goto label_80C79D30;
    }

label_80C79D2C:
    ctx->pc = 0x80C79D2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79D2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C79D2C: bl      0x80C79C9C
    {
            ctx->lr = 0x80C79D30u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C79C9Cu;
                return;
            }
            goto label_80C79C9C;
    }

label_80C79D30:
    ctx->pc = 0x80C79D30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79D30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C79D30: lwz     r0, 20(r1)
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
label_80C79D34:
    ctx->pc = 0x80C79D34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C79D34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C79D34: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C79D38:
    ctx->pc = 0x80C79D38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79D38u)) return;
    // 80C79D38: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C79D3C:
    ctx->pc = 0x80C79D3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79D3Cu)) return;
    // 80C79D3C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C78580;
        }
    }

label_80C79D40:
    ctx->pc = 0x80C79D40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79D40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C79D40: stwu     r1, -16(r1)
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
label_80C79D44:
    ctx->pc = 0x80C79D44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79D44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C79D44: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C79D48:
    ctx->pc = 0x80C79D48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79D48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C79D48: stw     r0, 20(r1)
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
label_80C79D4C:
    ctx->pc = 0x80C79D4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79D4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C79D4C: lwz     r3, 32(r3)
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
label_80C79D50:
    ctx->pc = 0x80C79D50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79D50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C79D50: lwz     r3, 16(r3)
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
label_80C79D54:
    ctx->pc = 0x80C79D54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79D54u)) return;
    // 80C79D54: cmplwi  r3, 0x0000
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

label_80C79D58:
    ctx->pc = 0x80C79D58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79D58u)) return;
    // 80C79D58: bc    12, 2, 0x80C79D60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C79D60;
        }
    }

label_80C79D5C:
    ctx->pc = 0x80C79D5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79D5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C79D5C: bl      0x8050ED40
    {
            ctx->lr = 0x80C79D60u;
            ctx->pc = 0x8050ED40u;
            return;
    }

label_80C79D60:
    ctx->pc = 0x80C79D60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C79D60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C79D60: lwz     r0, 20(r1)
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
label_80C79D64:
    ctx->pc = 0x80C79D64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C79D64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C79D64: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C79D68:
    ctx->pc = 0x80C79D68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79D68u)) return;
    // 80C79D68: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C79D6C:
    ctx->pc = 0x80C79D6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C79D6Cu)) return;
    // 80C79D6C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C78580;
        }
    }

    ctx->pc = 0x80C79D70u;
    return;
return_dispatch_80C78580:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80C785B4u: goto label_80C785B4;
    case 0x80C785DCu: goto label_80C785DC;
    case 0x80C785F0u: goto label_80C785F0;
    case 0x80C785F4u: goto label_80C785F4;
    case 0x80C785FCu: goto label_80C785FC;
    case 0x80C78624u: goto label_80C78624;
    case 0x80C7862Cu: goto label_80C7862C;
    case 0x80C78630u: goto label_80C78630;
    case 0x80C78638u: goto label_80C78638;
    case 0x80C78660u: goto label_80C78660;
    case 0x80C78668u: goto label_80C78668;
    case 0x80C7867Cu: goto label_80C7867C;
    case 0x80C78688u: goto label_80C78688;
    case 0x80C78690u: goto label_80C78690;
    case 0x80C786A0u: goto label_80C786A0;
    case 0x80C786A8u: goto label_80C786A8;
    case 0x80C786CCu: goto label_80C786CC;
    case 0x80C786D4u: goto label_80C786D4;
    case 0x80C786FCu: goto label_80C786FC;
    case 0x80C78704u: goto label_80C78704;
    case 0x80C78718u: goto label_80C78718;
    case 0x80C78748u: goto label_80C78748;
    case 0x80C78760u: goto label_80C78760;
    case 0x80C78790u: goto label_80C78790;
    case 0x80C787ACu: goto label_80C787AC;
    case 0x80C787B4u: goto label_80C787B4;
    case 0x80C787E4u: goto label_80C787E4;
    case 0x80C78800u: goto label_80C78800;
    case 0x80C78830u: goto label_80C78830;
    case 0x80C7884Cu: goto label_80C7884C;
    case 0x80C78854u: goto label_80C78854;
    case 0x80C78884u: goto label_80C78884;
    case 0x80C788A0u: goto label_80C788A0;
    case 0x80C788D0u: goto label_80C788D0;
    case 0x80C788ECu: goto label_80C788EC;
    case 0x80C788F4u: goto label_80C788F4;
    case 0x80C78924u: goto label_80C78924;
    case 0x80C78940u: goto label_80C78940;
    case 0x80C78948u: goto label_80C78948;
    case 0x80C7896Cu: goto label_80C7896C;
    case 0x80C78974u: goto label_80C78974;
    case 0x80C789A4u: goto label_80C789A4;
    case 0x80C789C0u: goto label_80C789C0;
    case 0x80C789C8u: goto label_80C789C8;
    case 0x80C789CCu: goto label_80C789CC;
    case 0x80C789FCu: goto label_80C789FC;
    case 0x80C78A18u: goto label_80C78A18;
    case 0x80C78A20u: goto label_80C78A20;
    case 0x80C78A50u: goto label_80C78A50;
    case 0x80C78A58u: goto label_80C78A58;
    case 0x80C78A7Cu: goto label_80C78A7C;
    case 0x80C78A90u: goto label_80C78A90;
    case 0x80C78A98u: goto label_80C78A98;
    case 0x80C78AACu: goto label_80C78AAC;
    case 0x80C78AB4u: goto label_80C78AB4;
    case 0x80C78AB8u: goto label_80C78AB8;
    case 0x80C78ADCu: goto label_80C78ADC;
    case 0x80C78B00u: goto label_80C78B00;
    case 0x80C78B3Cu: goto label_80C78B3C;
    case 0x80C78B50u: goto label_80C78B50;
    case 0x80C78B68u: goto label_80C78B68;
    case 0x80C78B98u: goto label_80C78B98;
    case 0x80C78BB4u: goto label_80C78BB4;
    case 0x80C78BE4u: goto label_80C78BE4;
    case 0x80C78C00u: goto label_80C78C00;
    case 0x80C78C08u: goto label_80C78C08;
    case 0x80C78C1Cu: goto label_80C78C1C;
    case 0x80C78C4Cu: goto label_80C78C4C;
    case 0x80C78C64u: goto label_80C78C64;
    case 0x80C78C94u: goto label_80C78C94;
    case 0x80C78C9Cu: goto label_80C78C9C;
    case 0x80C78CCCu: goto label_80C78CCC;
    case 0x80C78CE4u: goto label_80C78CE4;
    case 0x80C78CF8u: goto label_80C78CF8;
    case 0x80C78D08u: goto label_80C78D08;
    case 0x80C78D10u: goto label_80C78D10;
    case 0x80C78D20u: goto label_80C78D20;
    case 0x80C78D28u: goto label_80C78D28;
    case 0x80C78D38u: goto label_80C78D38;
    case 0x80C78D40u: goto label_80C78D40;
    case 0x80C78D50u: goto label_80C78D50;
    case 0x80C78D58u: goto label_80C78D58;
    case 0x80C78D68u: goto label_80C78D68;
    case 0x80C78D70u: goto label_80C78D70;
    case 0x80C78D84u: goto label_80C78D84;
    case 0x80C78DA8u: goto label_80C78DA8;
    case 0x80C78DACu: goto label_80C78DAC;
    case 0x80C78DB4u: goto label_80C78DB4;
    case 0x80C78DC4u: goto label_80C78DC4;
    case 0x80C78DCCu: goto label_80C78DCC;
    case 0x80C78DE4u: goto label_80C78DE4;
    case 0x80C78E24u: goto label_80C78E24;
    case 0x80C78E3Cu: goto label_80C78E3C;
    case 0x80C78E6Cu: goto label_80C78E6C;
    case 0x80C78E88u: goto label_80C78E88;
    case 0x80C78EB8u: goto label_80C78EB8;
    case 0x80C78ED4u: goto label_80C78ED4;
    case 0x80C78EDCu: goto label_80C78EDC;
    case 0x80C78EE4u: goto label_80C78EE4;
    case 0x80C78F08u: goto label_80C78F08;
    case 0x80C78F10u: goto label_80C78F10;
    case 0x80C78F14u: goto label_80C78F14;
    case 0x80C78F1Cu: goto label_80C78F1C;
    case 0x80C78F4Cu: goto label_80C78F4C;
    case 0x80C78F64u: goto label_80C78F64;
    case 0x80C78F94u: goto label_80C78F94;
    case 0x80C78FACu: goto label_80C78FAC;
    case 0x80C78FB4u: goto label_80C78FB4;
    case 0x80C78FBCu: goto label_80C78FBC;
    case 0x80C78FE0u: goto label_80C78FE0;
    case 0x80C78FE8u: goto label_80C78FE8;
    case 0x80C78FF0u: goto label_80C78FF0;
    case 0x80C78FF4u: goto label_80C78FF4;
    case 0x80C78FFCu: goto label_80C78FFC;
    case 0x80C79014u: goto label_80C79014;
    case 0x80C79028u: goto label_80C79028;
    case 0x80C7902Cu: goto label_80C7902C;
    case 0x80C79054u: goto label_80C79054;
    case 0x80C790B4u: goto label_80C790B4;
    case 0x80C790F4u: goto label_80C790F4;
    case 0x80C79134u: goto label_80C79134;
    case 0x80C79190u: goto label_80C79190;
    case 0x80C791B4u: goto label_80C791B4;
    case 0x80C79250u: goto label_80C79250;
    case 0x80C792A0u: goto label_80C792A0;
    case 0x80C792F0u: goto label_80C792F0;
    case 0x80C7933Cu: goto label_80C7933C;
    case 0x80C793C0u: goto label_80C793C0;
    case 0x80C793E4u: goto label_80C793E4;
    case 0x80C79460u: goto label_80C79460;
    case 0x80C794C8u: goto label_80C794C8;
    case 0x80C79530u: goto label_80C79530;
    case 0x80C79580u: goto label_80C79580;
    case 0x80C795D0u: goto label_80C795D0;
    case 0x80C79614u: goto label_80C79614;
    case 0x80C7963Cu: goto label_80C7963C;
    case 0x80C79648u: goto label_80C79648;
    case 0x80C79654u: goto label_80C79654;
    case 0x80C79660u: goto label_80C79660;
    case 0x80C796B0u: goto label_80C796B0;
    case 0x80C7973Cu: goto label_80C7973C;
    case 0x80C79748u: goto label_80C79748;
    case 0x80C797D8u: goto label_80C797D8;
    case 0x80C797E0u: goto label_80C797E0;
    case 0x80C79848u: goto label_80C79848;
    case 0x80C79890u: goto label_80C79890;
    case 0x80C798FCu: goto label_80C798FC;
    case 0x80C799A8u: goto label_80C799A8;
    case 0x80C799CCu: goto label_80C799CC;
    case 0x80C799F4u: goto label_80C799F4;
    case 0x80C79A08u: goto label_80C79A08;
    case 0x80C79A44u: goto label_80C79A44;
    case 0x80C79A78u: goto label_80C79A78;
    case 0x80C79AD0u: goto label_80C79AD0;
    case 0x80C79B40u: goto label_80C79B40;
    case 0x80C79B4Cu: goto label_80C79B4C;
    case 0x80C79B58u: goto label_80C79B58;
    case 0x80C79C50u: goto label_80C79C50;
    case 0x80C79CF8u: goto label_80C79CF8;
    case 0x80C79D30u: goto label_80C79D30;
    case 0x80C79D60u: goto label_80C79D60;
    default: return;
    }
}

