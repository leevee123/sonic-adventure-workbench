// DolRecomp output
#include "../generated.h"

void func_80CC95A0(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80CC95A0[2250] = {
        &&label_80CC95A0,
        &&label_80CC95A4,
        &&label_80CC95A8,
        &&label_80CC95AC,
        &&label_80CC95B0,
        &&label_80CC95B4,
        &&label_80CC95B8,
        &&label_80CC95BC,
        &&label_80CC95C0,
        &&label_80CC95C4,
        &&label_80CC95C8,
        &&label_80CC95CC,
        &&label_80CC95D0,
        &&label_80CC95D4,
        &&label_80CC95D8,
        &&label_80CC95DC,
        &&label_80CC95E0,
        &&label_80CC95E4,
        &&label_80CC95E8,
        &&label_80CC95EC,
        &&label_80CC95F0,
        &&label_80CC95F4,
        &&label_80CC95F8,
        &&label_80CC95FC,
        &&label_80CC9600,
        &&label_80CC9604,
        &&label_80CC9608,
        &&label_80CC960C,
        &&label_80CC9610,
        &&label_80CC9614,
        &&label_80CC9618,
        &&label_80CC961C,
        &&label_80CC9620,
        &&label_80CC9624,
        &&label_80CC9628,
        &&label_80CC962C,
        &&label_80CC9630,
        &&label_80CC9634,
        &&label_80CC9638,
        &&label_80CC963C,
        &&label_80CC9640,
        &&label_80CC9644,
        &&label_80CC9648,
        &&label_80CC964C,
        &&label_80CC9650,
        &&label_80CC9654,
        &&label_80CC9658,
        &&label_80CC965C,
        &&label_80CC9660,
        &&label_80CC9664,
        &&label_80CC9668,
        &&label_80CC966C,
        &&label_80CC9670,
        &&label_80CC9674,
        &&label_80CC9678,
        &&label_80CC967C,
        &&label_80CC9680,
        &&label_80CC9684,
        &&label_80CC9688,
        &&label_80CC968C,
        &&label_80CC9690,
        &&label_80CC9694,
        &&label_80CC9698,
        &&label_80CC969C,
        &&label_80CC96A0,
        &&label_80CC96A4,
        &&label_80CC96A8,
        &&label_80CC96AC,
        &&label_80CC96B0,
        &&label_80CC96B4,
        &&label_80CC96B8,
        &&label_80CC96BC,
        &&label_80CC96C0,
        &&label_80CC96C4,
        &&label_80CC96C8,
        &&label_80CC96CC,
        &&label_80CC96D0,
        &&label_80CC96D4,
        &&label_80CC96D8,
        &&label_80CC96DC,
        &&label_80CC96E0,
        &&label_80CC96E4,
        &&label_80CC96E8,
        &&label_80CC96EC,
        &&label_80CC96F0,
        &&label_80CC96F4,
        &&label_80CC96F8,
        &&label_80CC96FC,
        &&label_80CC9700,
        &&label_80CC9704,
        &&label_80CC9708,
        &&label_80CC970C,
        &&label_80CC9710,
        &&label_80CC9714,
        &&label_80CC9718,
        &&label_80CC971C,
        &&label_80CC9720,
        &&label_80CC9724,
        &&label_80CC9728,
        &&label_80CC972C,
        &&label_80CC9730,
        &&label_80CC9734,
        &&label_80CC9738,
        &&label_80CC973C,
        &&label_80CC9740,
        &&label_80CC9744,
        &&label_80CC9748,
        &&label_80CC974C,
        &&label_80CC9750,
        &&label_80CC9754,
        &&label_80CC9758,
        &&label_80CC975C,
        &&label_80CC9760,
        &&label_80CC9764,
        &&label_80CC9768,
        &&label_80CC976C,
        &&label_80CC9770,
        &&label_80CC9774,
        &&label_80CC9778,
        &&label_80CC977C,
        &&label_80CC9780,
        &&label_80CC9784,
        &&label_80CC9788,
        &&label_80CC978C,
        &&label_80CC9790,
        &&label_80CC9794,
        &&label_80CC9798,
        &&label_80CC979C,
        &&label_80CC97A0,
        &&label_80CC97A4,
        &&label_80CC97A8,
        &&label_80CC97AC,
        &&label_80CC97B0,
        &&label_80CC97B4,
        &&label_80CC97B8,
        &&label_80CC97BC,
        &&label_80CC97C0,
        &&label_80CC97C4,
        &&label_80CC97C8,
        &&label_80CC97CC,
        &&label_80CC97D0,
        &&label_80CC97D4,
        &&label_80CC97D8,
        &&label_80CC97DC,
        &&label_80CC97E0,
        &&label_80CC97E4,
        &&label_80CC97E8,
        &&label_80CC97EC,
        &&label_80CC97F0,
        &&label_80CC97F4,
        &&label_80CC97F8,
        &&label_80CC97FC,
        &&label_80CC9800,
        &&label_80CC9804,
        &&label_80CC9808,
        &&label_80CC980C,
        &&label_80CC9810,
        &&label_80CC9814,
        &&label_80CC9818,
        &&label_80CC981C,
        &&label_80CC9820,
        &&label_80CC9824,
        &&label_80CC9828,
        &&label_80CC982C,
        &&label_80CC9830,
        &&label_80CC9834,
        &&label_80CC9838,
        &&label_80CC983C,
        &&label_80CC9840,
        &&label_80CC9844,
        &&label_80CC9848,
        &&label_80CC984C,
        &&label_80CC9850,
        &&label_80CC9854,
        &&label_80CC9858,
        &&label_80CC985C,
        &&label_80CC9860,
        &&label_80CC9864,
        &&label_80CC9868,
        &&label_80CC986C,
        &&label_80CC9870,
        &&label_80CC9874,
        &&label_80CC9878,
        &&label_80CC987C,
        &&label_80CC9880,
        &&label_80CC9884,
        &&label_80CC9888,
        &&label_80CC988C,
        &&label_80CC9890,
        &&label_80CC9894,
        &&label_80CC9898,
        &&label_80CC989C,
        &&label_80CC98A0,
        &&label_80CC98A4,
        &&label_80CC98A8,
        &&label_80CC98AC,
        &&label_80CC98B0,
        &&label_80CC98B4,
        &&label_80CC98B8,
        &&label_80CC98BC,
        &&label_80CC98C0,
        &&label_80CC98C4,
        &&label_80CC98C8,
        &&label_80CC98CC,
        &&label_80CC98D0,
        &&label_80CC98D4,
        &&label_80CC98D8,
        &&label_80CC98DC,
        &&label_80CC98E0,
        &&label_80CC98E4,
        &&label_80CC98E8,
        &&label_80CC98EC,
        &&label_80CC98F0,
        &&label_80CC98F4,
        &&label_80CC98F8,
        &&label_80CC98FC,
        &&label_80CC9900,
        &&label_80CC9904,
        &&label_80CC9908,
        &&label_80CC990C,
        &&label_80CC9910,
        &&label_80CC9914,
        &&label_80CC9918,
        &&label_80CC991C,
        &&label_80CC9920,
        &&label_80CC9924,
        &&label_80CC9928,
        &&label_80CC992C,
        &&label_80CC9930,
        &&label_80CC9934,
        &&label_80CC9938,
        &&label_80CC993C,
        &&label_80CC9940,
        &&label_80CC9944,
        &&label_80CC9948,
        &&label_80CC994C,
        &&label_80CC9950,
        &&label_80CC9954,
        &&label_80CC9958,
        &&label_80CC995C,
        &&label_80CC9960,
        &&label_80CC9964,
        &&label_80CC9968,
        &&label_80CC996C,
        &&label_80CC9970,
        &&label_80CC9974,
        &&label_80CC9978,
        &&label_80CC997C,
        &&label_80CC9980,
        &&label_80CC9984,
        &&label_80CC9988,
        &&label_80CC998C,
        &&label_80CC9990,
        &&label_80CC9994,
        &&label_80CC9998,
        &&label_80CC999C,
        &&label_80CC99A0,
        &&label_80CC99A4,
        &&label_80CC99A8,
        &&label_80CC99AC,
        &&label_80CC99B0,
        &&label_80CC99B4,
        &&label_80CC99B8,
        &&label_80CC99BC,
        &&label_80CC99C0,
        &&label_80CC99C4,
        &&label_80CC99C8,
        &&label_80CC99CC,
        &&label_80CC99D0,
        &&label_80CC99D4,
        &&label_80CC99D8,
        &&label_80CC99DC,
        &&label_80CC99E0,
        &&label_80CC99E4,
        &&label_80CC99E8,
        &&label_80CC99EC,
        &&label_80CC99F0,
        &&label_80CC99F4,
        &&label_80CC99F8,
        &&label_80CC99FC,
        &&label_80CC9A00,
        &&label_80CC9A04,
        &&label_80CC9A08,
        &&label_80CC9A0C,
        &&label_80CC9A10,
        &&label_80CC9A14,
        &&label_80CC9A18,
        &&label_80CC9A1C,
        &&label_80CC9A20,
        &&label_80CC9A24,
        &&label_80CC9A28,
        &&label_80CC9A2C,
        &&label_80CC9A30,
        &&label_80CC9A34,
        &&label_80CC9A38,
        &&label_80CC9A3C,
        &&label_80CC9A40,
        &&label_80CC9A44,
        &&label_80CC9A48,
        &&label_80CC9A4C,
        &&label_80CC9A50,
        &&label_80CC9A54,
        &&label_80CC9A58,
        &&label_80CC9A5C,
        &&label_80CC9A60,
        &&label_80CC9A64,
        &&label_80CC9A68,
        &&label_80CC9A6C,
        &&label_80CC9A70,
        &&label_80CC9A74,
        &&label_80CC9A78,
        &&label_80CC9A7C,
        &&label_80CC9A80,
        &&label_80CC9A84,
        &&label_80CC9A88,
        &&label_80CC9A8C,
        &&label_80CC9A90,
        &&label_80CC9A94,
        &&label_80CC9A98,
        &&label_80CC9A9C,
        &&label_80CC9AA0,
        &&label_80CC9AA4,
        &&label_80CC9AA8,
        &&label_80CC9AAC,
        &&label_80CC9AB0,
        &&label_80CC9AB4,
        &&label_80CC9AB8,
        &&label_80CC9ABC,
        &&label_80CC9AC0,
        &&label_80CC9AC4,
        &&label_80CC9AC8,
        &&label_80CC9ACC,
        &&label_80CC9AD0,
        &&label_80CC9AD4,
        &&label_80CC9AD8,
        &&label_80CC9ADC,
        &&label_80CC9AE0,
        &&label_80CC9AE4,
        &&label_80CC9AE8,
        &&label_80CC9AEC,
        &&label_80CC9AF0,
        &&label_80CC9AF4,
        &&label_80CC9AF8,
        &&label_80CC9AFC,
        &&label_80CC9B00,
        &&label_80CC9B04,
        &&label_80CC9B08,
        &&label_80CC9B0C,
        &&label_80CC9B10,
        &&label_80CC9B14,
        &&label_80CC9B18,
        &&label_80CC9B1C,
        &&label_80CC9B20,
        &&label_80CC9B24,
        &&label_80CC9B28,
        &&label_80CC9B2C,
        &&label_80CC9B30,
        &&label_80CC9B34,
        &&label_80CC9B38,
        &&label_80CC9B3C,
        &&label_80CC9B40,
        &&label_80CC9B44,
        &&label_80CC9B48,
        &&label_80CC9B4C,
        &&label_80CC9B50,
        &&label_80CC9B54,
        &&label_80CC9B58,
        &&label_80CC9B5C,
        &&label_80CC9B60,
        &&label_80CC9B64,
        &&label_80CC9B68,
        &&label_80CC9B6C,
        &&label_80CC9B70,
        &&label_80CC9B74,
        &&label_80CC9B78,
        &&label_80CC9B7C,
        &&label_80CC9B80,
        &&label_80CC9B84,
        &&label_80CC9B88,
        &&label_80CC9B8C,
        &&label_80CC9B90,
        &&label_80CC9B94,
        &&label_80CC9B98,
        &&label_80CC9B9C,
        &&label_80CC9BA0,
        &&label_80CC9BA4,
        &&label_80CC9BA8,
        &&label_80CC9BAC,
        &&label_80CC9BB0,
        &&label_80CC9BB4,
        &&label_80CC9BB8,
        &&label_80CC9BBC,
        &&label_80CC9BC0,
        &&label_80CC9BC4,
        &&label_80CC9BC8,
        &&label_80CC9BCC,
        &&label_80CC9BD0,
        &&label_80CC9BD4,
        &&label_80CC9BD8,
        &&label_80CC9BDC,
        &&label_80CC9BE0,
        &&label_80CC9BE4,
        &&label_80CC9BE8,
        &&label_80CC9BEC,
        &&label_80CC9BF0,
        &&label_80CC9BF4,
        &&label_80CC9BF8,
        &&label_80CC9BFC,
        &&label_80CC9C00,
        &&label_80CC9C04,
        &&label_80CC9C08,
        &&label_80CC9C0C,
        &&label_80CC9C10,
        &&label_80CC9C14,
        &&label_80CC9C18,
        &&label_80CC9C1C,
        &&label_80CC9C20,
        &&label_80CC9C24,
        &&label_80CC9C28,
        &&label_80CC9C2C,
        &&label_80CC9C30,
        &&label_80CC9C34,
        &&label_80CC9C38,
        &&label_80CC9C3C,
        &&label_80CC9C40,
        &&label_80CC9C44,
        &&label_80CC9C48,
        &&label_80CC9C4C,
        &&label_80CC9C50,
        &&label_80CC9C54,
        &&label_80CC9C58,
        &&label_80CC9C5C,
        &&label_80CC9C60,
        &&label_80CC9C64,
        &&label_80CC9C68,
        &&label_80CC9C6C,
        &&label_80CC9C70,
        &&label_80CC9C74,
        &&label_80CC9C78,
        &&label_80CC9C7C,
        &&label_80CC9C80,
        &&label_80CC9C84,
        &&label_80CC9C88,
        &&label_80CC9C8C,
        &&label_80CC9C90,
        &&label_80CC9C94,
        &&label_80CC9C98,
        &&label_80CC9C9C,
        &&label_80CC9CA0,
        &&label_80CC9CA4,
        &&label_80CC9CA8,
        &&label_80CC9CAC,
        &&label_80CC9CB0,
        &&label_80CC9CB4,
        &&label_80CC9CB8,
        &&label_80CC9CBC,
        &&label_80CC9CC0,
        &&label_80CC9CC4,
        &&label_80CC9CC8,
        &&label_80CC9CCC,
        &&label_80CC9CD0,
        &&label_80CC9CD4,
        &&label_80CC9CD8,
        &&label_80CC9CDC,
        &&label_80CC9CE0,
        &&label_80CC9CE4,
        &&label_80CC9CE8,
        &&label_80CC9CEC,
        &&label_80CC9CF0,
        &&label_80CC9CF4,
        &&label_80CC9CF8,
        &&label_80CC9CFC,
        &&label_80CC9D00,
        &&label_80CC9D04,
        &&label_80CC9D08,
        &&label_80CC9D0C,
        &&label_80CC9D10,
        &&label_80CC9D14,
        &&label_80CC9D18,
        &&label_80CC9D1C,
        &&label_80CC9D20,
        &&label_80CC9D24,
        &&label_80CC9D28,
        &&label_80CC9D2C,
        &&label_80CC9D30,
        &&label_80CC9D34,
        &&label_80CC9D38,
        &&label_80CC9D3C,
        &&label_80CC9D40,
        &&label_80CC9D44,
        &&label_80CC9D48,
        &&label_80CC9D4C,
        &&label_80CC9D50,
        &&label_80CC9D54,
        &&label_80CC9D58,
        &&label_80CC9D5C,
        &&label_80CC9D60,
        &&label_80CC9D64,
        &&label_80CC9D68,
        &&label_80CC9D6C,
        &&label_80CC9D70,
        &&label_80CC9D74,
        &&label_80CC9D78,
        &&label_80CC9D7C,
        &&label_80CC9D80,
        &&label_80CC9D84,
        &&label_80CC9D88,
        &&label_80CC9D8C,
        &&label_80CC9D90,
        &&label_80CC9D94,
        &&label_80CC9D98,
        &&label_80CC9D9C,
        &&label_80CC9DA0,
        &&label_80CC9DA4,
        &&label_80CC9DA8,
        &&label_80CC9DAC,
        &&label_80CC9DB0,
        &&label_80CC9DB4,
        &&label_80CC9DB8,
        &&label_80CC9DBC,
        &&label_80CC9DC0,
        &&label_80CC9DC4,
        &&label_80CC9DC8,
        &&label_80CC9DCC,
        &&label_80CC9DD0,
        &&label_80CC9DD4,
        &&label_80CC9DD8,
        &&label_80CC9DDC,
        &&label_80CC9DE0,
        &&label_80CC9DE4,
        &&label_80CC9DE8,
        &&label_80CC9DEC,
        &&label_80CC9DF0,
        &&label_80CC9DF4,
        &&label_80CC9DF8,
        &&label_80CC9DFC,
        &&label_80CC9E00,
        &&label_80CC9E04,
        &&label_80CC9E08,
        &&label_80CC9E0C,
        &&label_80CC9E10,
        &&label_80CC9E14,
        &&label_80CC9E18,
        &&label_80CC9E1C,
        &&label_80CC9E20,
        &&label_80CC9E24,
        &&label_80CC9E28,
        &&label_80CC9E2C,
        &&label_80CC9E30,
        &&label_80CC9E34,
        &&label_80CC9E38,
        &&label_80CC9E3C,
        &&label_80CC9E40,
        &&label_80CC9E44,
        &&label_80CC9E48,
        &&label_80CC9E4C,
        &&label_80CC9E50,
        &&label_80CC9E54,
        &&label_80CC9E58,
        &&label_80CC9E5C,
        &&label_80CC9E60,
        &&label_80CC9E64,
        &&label_80CC9E68,
        &&label_80CC9E6C,
        &&label_80CC9E70,
        &&label_80CC9E74,
        &&label_80CC9E78,
        &&label_80CC9E7C,
        &&label_80CC9E80,
        &&label_80CC9E84,
        &&label_80CC9E88,
        &&label_80CC9E8C,
        &&label_80CC9E90,
        &&label_80CC9E94,
        &&label_80CC9E98,
        &&label_80CC9E9C,
        &&label_80CC9EA0,
        &&label_80CC9EA4,
        &&label_80CC9EA8,
        &&label_80CC9EAC,
        &&label_80CC9EB0,
        &&label_80CC9EB4,
        &&label_80CC9EB8,
        &&label_80CC9EBC,
        &&label_80CC9EC0,
        &&label_80CC9EC4,
        &&label_80CC9EC8,
        &&label_80CC9ECC,
        &&label_80CC9ED0,
        &&label_80CC9ED4,
        &&label_80CC9ED8,
        &&label_80CC9EDC,
        &&label_80CC9EE0,
        &&label_80CC9EE4,
        &&label_80CC9EE8,
        &&label_80CC9EEC,
        &&label_80CC9EF0,
        &&label_80CC9EF4,
        &&label_80CC9EF8,
        &&label_80CC9EFC,
        &&label_80CC9F00,
        &&label_80CC9F04,
        &&label_80CC9F08,
        &&label_80CC9F0C,
        &&label_80CC9F10,
        &&label_80CC9F14,
        &&label_80CC9F18,
        &&label_80CC9F1C,
        &&label_80CC9F20,
        &&label_80CC9F24,
        &&label_80CC9F28,
        &&label_80CC9F2C,
        &&label_80CC9F30,
        &&label_80CC9F34,
        &&label_80CC9F38,
        &&label_80CC9F3C,
        &&label_80CC9F40,
        &&label_80CC9F44,
        &&label_80CC9F48,
        &&label_80CC9F4C,
        &&label_80CC9F50,
        &&label_80CC9F54,
        &&label_80CC9F58,
        &&label_80CC9F5C,
        &&label_80CC9F60,
        &&label_80CC9F64,
        &&label_80CC9F68,
        &&label_80CC9F6C,
        &&label_80CC9F70,
        &&label_80CC9F74,
        &&label_80CC9F78,
        &&label_80CC9F7C,
        &&label_80CC9F80,
        &&label_80CC9F84,
        &&label_80CC9F88,
        &&label_80CC9F8C,
        &&label_80CC9F90,
        &&label_80CC9F94,
        &&label_80CC9F98,
        &&label_80CC9F9C,
        &&label_80CC9FA0,
        &&label_80CC9FA4,
        &&label_80CC9FA8,
        &&label_80CC9FAC,
        &&label_80CC9FB0,
        &&label_80CC9FB4,
        &&label_80CC9FB8,
        &&label_80CC9FBC,
        &&label_80CC9FC0,
        &&label_80CC9FC4,
        &&label_80CC9FC8,
        &&label_80CC9FCC,
        &&label_80CC9FD0,
        &&label_80CC9FD4,
        &&label_80CC9FD8,
        &&label_80CC9FDC,
        &&label_80CC9FE0,
        &&label_80CC9FE4,
        &&label_80CC9FE8,
        &&label_80CC9FEC,
        &&label_80CC9FF0,
        &&label_80CC9FF4,
        &&label_80CC9FF8,
        &&label_80CC9FFC,
        &&label_80CCA000,
        &&label_80CCA004,
        &&label_80CCA008,
        &&label_80CCA00C,
        &&label_80CCA010,
        &&label_80CCA014,
        &&label_80CCA018,
        &&label_80CCA01C,
        &&label_80CCA020,
        &&label_80CCA024,
        &&label_80CCA028,
        &&label_80CCA02C,
        &&label_80CCA030,
        &&label_80CCA034,
        &&label_80CCA038,
        &&label_80CCA03C,
        &&label_80CCA040,
        &&label_80CCA044,
        &&label_80CCA048,
        &&label_80CCA04C,
        &&label_80CCA050,
        &&label_80CCA054,
        &&label_80CCA058,
        &&label_80CCA05C,
        &&label_80CCA060,
        &&label_80CCA064,
        &&label_80CCA068,
        &&label_80CCA06C,
        &&label_80CCA070,
        &&label_80CCA074,
        &&label_80CCA078,
        &&label_80CCA07C,
        &&label_80CCA080,
        &&label_80CCA084,
        &&label_80CCA088,
        &&label_80CCA08C,
        &&label_80CCA090,
        &&label_80CCA094,
        &&label_80CCA098,
        &&label_80CCA09C,
        &&label_80CCA0A0,
        &&label_80CCA0A4,
        &&label_80CCA0A8,
        &&label_80CCA0AC,
        &&label_80CCA0B0,
        &&label_80CCA0B4,
        &&label_80CCA0B8,
        &&label_80CCA0BC,
        &&label_80CCA0C0,
        &&label_80CCA0C4,
        &&label_80CCA0C8,
        &&label_80CCA0CC,
        &&label_80CCA0D0,
        &&label_80CCA0D4,
        &&label_80CCA0D8,
        &&label_80CCA0DC,
        &&label_80CCA0E0,
        &&label_80CCA0E4,
        &&label_80CCA0E8,
        &&label_80CCA0EC,
        &&label_80CCA0F0,
        &&label_80CCA0F4,
        &&label_80CCA0F8,
        &&label_80CCA0FC,
        &&label_80CCA100,
        &&label_80CCA104,
        &&label_80CCA108,
        &&label_80CCA10C,
        &&label_80CCA110,
        &&label_80CCA114,
        &&label_80CCA118,
        &&label_80CCA11C,
        &&label_80CCA120,
        &&label_80CCA124,
        &&label_80CCA128,
        &&label_80CCA12C,
        &&label_80CCA130,
        &&label_80CCA134,
        &&label_80CCA138,
        &&label_80CCA13C,
        &&label_80CCA140,
        &&label_80CCA144,
        &&label_80CCA148,
        &&label_80CCA14C,
        &&label_80CCA150,
        &&label_80CCA154,
        &&label_80CCA158,
        &&label_80CCA15C,
        &&label_80CCA160,
        &&label_80CCA164,
        &&label_80CCA168,
        &&label_80CCA16C,
        &&label_80CCA170,
        &&label_80CCA174,
        &&label_80CCA178,
        &&label_80CCA17C,
        &&label_80CCA180,
        &&label_80CCA184,
        &&label_80CCA188,
        &&label_80CCA18C,
        &&label_80CCA190,
        &&label_80CCA194,
        &&label_80CCA198,
        &&label_80CCA19C,
        &&label_80CCA1A0,
        &&label_80CCA1A4,
        &&label_80CCA1A8,
        &&label_80CCA1AC,
        &&label_80CCA1B0,
        &&label_80CCA1B4,
        &&label_80CCA1B8,
        &&label_80CCA1BC,
        &&label_80CCA1C0,
        &&label_80CCA1C4,
        &&label_80CCA1C8,
        &&label_80CCA1CC,
        &&label_80CCA1D0,
        &&label_80CCA1D4,
        &&label_80CCA1D8,
        &&label_80CCA1DC,
        &&label_80CCA1E0,
        &&label_80CCA1E4,
        &&label_80CCA1E8,
        &&label_80CCA1EC,
        &&label_80CCA1F0,
        &&label_80CCA1F4,
        &&label_80CCA1F8,
        &&label_80CCA1FC,
        &&label_80CCA200,
        &&label_80CCA204,
        &&label_80CCA208,
        &&label_80CCA20C,
        &&label_80CCA210,
        &&label_80CCA214,
        &&label_80CCA218,
        &&label_80CCA21C,
        &&label_80CCA220,
        &&label_80CCA224,
        &&label_80CCA228,
        &&label_80CCA22C,
        &&label_80CCA230,
        &&label_80CCA234,
        &&label_80CCA238,
        &&label_80CCA23C,
        &&label_80CCA240,
        &&label_80CCA244,
        &&label_80CCA248,
        &&label_80CCA24C,
        &&label_80CCA250,
        &&label_80CCA254,
        &&label_80CCA258,
        &&label_80CCA25C,
        &&label_80CCA260,
        &&label_80CCA264,
        &&label_80CCA268,
        &&label_80CCA26C,
        &&label_80CCA270,
        &&label_80CCA274,
        &&label_80CCA278,
        &&label_80CCA27C,
        &&label_80CCA280,
        &&label_80CCA284,
        &&label_80CCA288,
        &&label_80CCA28C,
        &&label_80CCA290,
        &&label_80CCA294,
        &&label_80CCA298,
        &&label_80CCA29C,
        &&label_80CCA2A0,
        &&label_80CCA2A4,
        &&label_80CCA2A8,
        &&label_80CCA2AC,
        &&label_80CCA2B0,
        &&label_80CCA2B4,
        &&label_80CCA2B8,
        &&label_80CCA2BC,
        &&label_80CCA2C0,
        &&label_80CCA2C4,
        &&label_80CCA2C8,
        &&label_80CCA2CC,
        &&label_80CCA2D0,
        &&label_80CCA2D4,
        &&label_80CCA2D8,
        &&label_80CCA2DC,
        &&label_80CCA2E0,
        &&label_80CCA2E4,
        &&label_80CCA2E8,
        &&label_80CCA2EC,
        &&label_80CCA2F0,
        &&label_80CCA2F4,
        &&label_80CCA2F8,
        &&label_80CCA2FC,
        &&label_80CCA300,
        &&label_80CCA304,
        &&label_80CCA308,
        &&label_80CCA30C,
        &&label_80CCA310,
        &&label_80CCA314,
        &&label_80CCA318,
        &&label_80CCA31C,
        &&label_80CCA320,
        &&label_80CCA324,
        &&label_80CCA328,
        &&label_80CCA32C,
        &&label_80CCA330,
        &&label_80CCA334,
        &&label_80CCA338,
        &&label_80CCA33C,
        &&label_80CCA340,
        &&label_80CCA344,
        &&label_80CCA348,
        &&label_80CCA34C,
        &&label_80CCA350,
        &&label_80CCA354,
        &&label_80CCA358,
        &&label_80CCA35C,
        &&label_80CCA360,
        &&label_80CCA364,
        &&label_80CCA368,
        &&label_80CCA36C,
        &&label_80CCA370,
        &&label_80CCA374,
        &&label_80CCA378,
        &&label_80CCA37C,
        &&label_80CCA380,
        &&label_80CCA384,
        &&label_80CCA388,
        &&label_80CCA38C,
        &&label_80CCA390,
        &&label_80CCA394,
        &&label_80CCA398,
        &&label_80CCA39C,
        &&label_80CCA3A0,
        &&label_80CCA3A4,
        &&label_80CCA3A8,
        &&label_80CCA3AC,
        &&label_80CCA3B0,
        &&label_80CCA3B4,
        &&label_80CCA3B8,
        &&label_80CCA3BC,
        &&label_80CCA3C0,
        &&label_80CCA3C4,
        &&label_80CCA3C8,
        &&label_80CCA3CC,
        &&label_80CCA3D0,
        &&label_80CCA3D4,
        &&label_80CCA3D8,
        &&label_80CCA3DC,
        &&label_80CCA3E0,
        &&label_80CCA3E4,
        &&label_80CCA3E8,
        &&label_80CCA3EC,
        &&label_80CCA3F0,
        &&label_80CCA3F4,
        &&label_80CCA3F8,
        &&label_80CCA3FC,
        &&label_80CCA400,
        &&label_80CCA404,
        &&label_80CCA408,
        &&label_80CCA40C,
        &&label_80CCA410,
        &&label_80CCA414,
        &&label_80CCA418,
        &&label_80CCA41C,
        &&label_80CCA420,
        &&label_80CCA424,
        &&label_80CCA428,
        &&label_80CCA42C,
        &&label_80CCA430,
        &&label_80CCA434,
        &&label_80CCA438,
        &&label_80CCA43C,
        &&label_80CCA440,
        &&label_80CCA444,
        &&label_80CCA448,
        &&label_80CCA44C,
        &&label_80CCA450,
        &&label_80CCA454,
        &&label_80CCA458,
        &&label_80CCA45C,
        &&label_80CCA460,
        &&label_80CCA464,
        &&label_80CCA468,
        &&label_80CCA46C,
        &&label_80CCA470,
        &&label_80CCA474,
        &&label_80CCA478,
        &&label_80CCA47C,
        &&label_80CCA480,
        &&label_80CCA484,
        &&label_80CCA488,
        &&label_80CCA48C,
        &&label_80CCA490,
        &&label_80CCA494,
        &&label_80CCA498,
        &&label_80CCA49C,
        &&label_80CCA4A0,
        &&label_80CCA4A4,
        &&label_80CCA4A8,
        &&label_80CCA4AC,
        &&label_80CCA4B0,
        &&label_80CCA4B4,
        &&label_80CCA4B8,
        &&label_80CCA4BC,
        &&label_80CCA4C0,
        &&label_80CCA4C4,
        &&label_80CCA4C8,
        &&label_80CCA4CC,
        &&label_80CCA4D0,
        &&label_80CCA4D4,
        &&label_80CCA4D8,
        &&label_80CCA4DC,
        &&label_80CCA4E0,
        &&label_80CCA4E4,
        &&label_80CCA4E8,
        &&label_80CCA4EC,
        &&label_80CCA4F0,
        &&label_80CCA4F4,
        &&label_80CCA4F8,
        &&label_80CCA4FC,
        &&label_80CCA500,
        &&label_80CCA504,
        &&label_80CCA508,
        &&label_80CCA50C,
        &&label_80CCA510,
        &&label_80CCA514,
        &&label_80CCA518,
        &&label_80CCA51C,
        &&label_80CCA520,
        &&label_80CCA524,
        &&label_80CCA528,
        &&label_80CCA52C,
        &&label_80CCA530,
        &&label_80CCA534,
        &&label_80CCA538,
        &&label_80CCA53C,
        &&label_80CCA540,
        &&label_80CCA544,
        &&label_80CCA548,
        &&label_80CCA54C,
        &&label_80CCA550,
        &&label_80CCA554,
        &&label_80CCA558,
        &&label_80CCA55C,
        &&label_80CCA560,
        &&label_80CCA564,
        &&label_80CCA568,
        &&label_80CCA56C,
        &&label_80CCA570,
        &&label_80CCA574,
        &&label_80CCA578,
        &&label_80CCA57C,
        &&label_80CCA580,
        &&label_80CCA584,
        &&label_80CCA588,
        &&label_80CCA58C,
        &&label_80CCA590,
        &&label_80CCA594,
        &&label_80CCA598,
        &&label_80CCA59C,
        &&label_80CCA5A0,
        &&label_80CCA5A4,
        &&label_80CCA5A8,
        &&label_80CCA5AC,
        &&label_80CCA5B0,
        &&label_80CCA5B4,
        &&label_80CCA5B8,
        &&label_80CCA5BC,
        &&label_80CCA5C0,
        &&label_80CCA5C4,
        &&label_80CCA5C8,
        &&label_80CCA5CC,
        &&label_80CCA5D0,
        &&label_80CCA5D4,
        &&label_80CCA5D8,
        &&label_80CCA5DC,
        &&label_80CCA5E0,
        &&label_80CCA5E4,
        &&label_80CCA5E8,
        &&label_80CCA5EC,
        &&label_80CCA5F0,
        &&label_80CCA5F4,
        &&label_80CCA5F8,
        &&label_80CCA5FC,
        &&label_80CCA600,
        &&label_80CCA604,
        &&label_80CCA608,
        &&label_80CCA60C,
        &&label_80CCA610,
        &&label_80CCA614,
        &&label_80CCA618,
        &&label_80CCA61C,
        &&label_80CCA620,
        &&label_80CCA624,
        &&label_80CCA628,
        &&label_80CCA62C,
        &&label_80CCA630,
        &&label_80CCA634,
        &&label_80CCA638,
        &&label_80CCA63C,
        &&label_80CCA640,
        &&label_80CCA644,
        &&label_80CCA648,
        &&label_80CCA64C,
        &&label_80CCA650,
        &&label_80CCA654,
        &&label_80CCA658,
        &&label_80CCA65C,
        &&label_80CCA660,
        &&label_80CCA664,
        &&label_80CCA668,
        &&label_80CCA66C,
        &&label_80CCA670,
        &&label_80CCA674,
        &&label_80CCA678,
        &&label_80CCA67C,
        &&label_80CCA680,
        &&label_80CCA684,
        &&label_80CCA688,
        &&label_80CCA68C,
        &&label_80CCA690,
        &&label_80CCA694,
        &&label_80CCA698,
        &&label_80CCA69C,
        &&label_80CCA6A0,
        &&label_80CCA6A4,
        &&label_80CCA6A8,
        &&label_80CCA6AC,
        &&label_80CCA6B0,
        &&label_80CCA6B4,
        &&label_80CCA6B8,
        &&label_80CCA6BC,
        &&label_80CCA6C0,
        &&label_80CCA6C4,
        &&label_80CCA6C8,
        &&label_80CCA6CC,
        &&label_80CCA6D0,
        &&label_80CCA6D4,
        &&label_80CCA6D8,
        &&label_80CCA6DC,
        &&label_80CCA6E0,
        &&label_80CCA6E4,
        &&label_80CCA6E8,
        &&label_80CCA6EC,
        &&label_80CCA6F0,
        &&label_80CCA6F4,
        &&label_80CCA6F8,
        &&label_80CCA6FC,
        &&label_80CCA700,
        &&label_80CCA704,
        &&label_80CCA708,
        &&label_80CCA70C,
        &&label_80CCA710,
        &&label_80CCA714,
        &&label_80CCA718,
        &&label_80CCA71C,
        &&label_80CCA720,
        &&label_80CCA724,
        &&label_80CCA728,
        &&label_80CCA72C,
        &&label_80CCA730,
        &&label_80CCA734,
        &&label_80CCA738,
        &&label_80CCA73C,
        &&label_80CCA740,
        &&label_80CCA744,
        &&label_80CCA748,
        &&label_80CCA74C,
        &&label_80CCA750,
        &&label_80CCA754,
        &&label_80CCA758,
        &&label_80CCA75C,
        &&label_80CCA760,
        &&label_80CCA764,
        &&label_80CCA768,
        &&label_80CCA76C,
        &&label_80CCA770,
        &&label_80CCA774,
        &&label_80CCA778,
        &&label_80CCA77C,
        &&label_80CCA780,
        &&label_80CCA784,
        &&label_80CCA788,
        &&label_80CCA78C,
        &&label_80CCA790,
        &&label_80CCA794,
        &&label_80CCA798,
        &&label_80CCA79C,
        &&label_80CCA7A0,
        &&label_80CCA7A4,
        &&label_80CCA7A8,
        &&label_80CCA7AC,
        &&label_80CCA7B0,
        &&label_80CCA7B4,
        &&label_80CCA7B8,
        &&label_80CCA7BC,
        &&label_80CCA7C0,
        &&label_80CCA7C4,
        &&label_80CCA7C8,
        &&label_80CCA7CC,
        &&label_80CCA7D0,
        &&label_80CCA7D4,
        &&label_80CCA7D8,
        &&label_80CCA7DC,
        &&label_80CCA7E0,
        &&label_80CCA7E4,
        &&label_80CCA7E8,
        &&label_80CCA7EC,
        &&label_80CCA7F0,
        &&label_80CCA7F4,
        &&label_80CCA7F8,
        &&label_80CCA7FC,
        &&label_80CCA800,
        &&label_80CCA804,
        &&label_80CCA808,
        &&label_80CCA80C,
        &&label_80CCA810,
        &&label_80CCA814,
        &&label_80CCA818,
        &&label_80CCA81C,
        &&label_80CCA820,
        &&label_80CCA824,
        &&label_80CCA828,
        &&label_80CCA82C,
        &&label_80CCA830,
        &&label_80CCA834,
        &&label_80CCA838,
        &&label_80CCA83C,
        &&label_80CCA840,
        &&label_80CCA844,
        &&label_80CCA848,
        &&label_80CCA84C,
        &&label_80CCA850,
        &&label_80CCA854,
        &&label_80CCA858,
        &&label_80CCA85C,
        &&label_80CCA860,
        &&label_80CCA864,
        &&label_80CCA868,
        &&label_80CCA86C,
        &&label_80CCA870,
        &&label_80CCA874,
        &&label_80CCA878,
        &&label_80CCA87C,
        &&label_80CCA880,
        &&label_80CCA884,
        &&label_80CCA888,
        &&label_80CCA88C,
        &&label_80CCA890,
        &&label_80CCA894,
        &&label_80CCA898,
        &&label_80CCA89C,
        &&label_80CCA8A0,
        &&label_80CCA8A4,
        &&label_80CCA8A8,
        &&label_80CCA8AC,
        &&label_80CCA8B0,
        &&label_80CCA8B4,
        &&label_80CCA8B8,
        &&label_80CCA8BC,
        &&label_80CCA8C0,
        &&label_80CCA8C4,
        &&label_80CCA8C8,
        &&label_80CCA8CC,
        &&label_80CCA8D0,
        &&label_80CCA8D4,
        &&label_80CCA8D8,
        &&label_80CCA8DC,
        &&label_80CCA8E0,
        &&label_80CCA8E4,
        &&label_80CCA8E8,
        &&label_80CCA8EC,
        &&label_80CCA8F0,
        &&label_80CCA8F4,
        &&label_80CCA8F8,
        &&label_80CCA8FC,
        &&label_80CCA900,
        &&label_80CCA904,
        &&label_80CCA908,
        &&label_80CCA90C,
        &&label_80CCA910,
        &&label_80CCA914,
        &&label_80CCA918,
        &&label_80CCA91C,
        &&label_80CCA920,
        &&label_80CCA924,
        &&label_80CCA928,
        &&label_80CCA92C,
        &&label_80CCA930,
        &&label_80CCA934,
        &&label_80CCA938,
        &&label_80CCA93C,
        &&label_80CCA940,
        &&label_80CCA944,
        &&label_80CCA948,
        &&label_80CCA94C,
        &&label_80CCA950,
        &&label_80CCA954,
        &&label_80CCA958,
        &&label_80CCA95C,
        &&label_80CCA960,
        &&label_80CCA964,
        &&label_80CCA968,
        &&label_80CCA96C,
        &&label_80CCA970,
        &&label_80CCA974,
        &&label_80CCA978,
        &&label_80CCA97C,
        &&label_80CCA980,
        &&label_80CCA984,
        &&label_80CCA988,
        &&label_80CCA98C,
        &&label_80CCA990,
        &&label_80CCA994,
        &&label_80CCA998,
        &&label_80CCA99C,
        &&label_80CCA9A0,
        &&label_80CCA9A4,
        &&label_80CCA9A8,
        &&label_80CCA9AC,
        &&label_80CCA9B0,
        &&label_80CCA9B4,
        &&label_80CCA9B8,
        &&label_80CCA9BC,
        &&label_80CCA9C0,
        &&label_80CCA9C4,
        &&label_80CCA9C8,
        &&label_80CCA9CC,
        &&label_80CCA9D0,
        &&label_80CCA9D4,
        &&label_80CCA9D8,
        &&label_80CCA9DC,
        &&label_80CCA9E0,
        &&label_80CCA9E4,
        &&label_80CCA9E8,
        &&label_80CCA9EC,
        &&label_80CCA9F0,
        &&label_80CCA9F4,
        &&label_80CCA9F8,
        &&label_80CCA9FC,
        &&label_80CCAA00,
        &&label_80CCAA04,
        &&label_80CCAA08,
        &&label_80CCAA0C,
        &&label_80CCAA10,
        &&label_80CCAA14,
        &&label_80CCAA18,
        &&label_80CCAA1C,
        &&label_80CCAA20,
        &&label_80CCAA24,
        &&label_80CCAA28,
        &&label_80CCAA2C,
        &&label_80CCAA30,
        &&label_80CCAA34,
        &&label_80CCAA38,
        &&label_80CCAA3C,
        &&label_80CCAA40,
        &&label_80CCAA44,
        &&label_80CCAA48,
        &&label_80CCAA4C,
        &&label_80CCAA50,
        &&label_80CCAA54,
        &&label_80CCAA58,
        &&label_80CCAA5C,
        &&label_80CCAA60,
        &&label_80CCAA64,
        &&label_80CCAA68,
        &&label_80CCAA6C,
        &&label_80CCAA70,
        &&label_80CCAA74,
        &&label_80CCAA78,
        &&label_80CCAA7C,
        &&label_80CCAA80,
        &&label_80CCAA84,
        &&label_80CCAA88,
        &&label_80CCAA8C,
        &&label_80CCAA90,
        &&label_80CCAA94,
        &&label_80CCAA98,
        &&label_80CCAA9C,
        &&label_80CCAAA0,
        &&label_80CCAAA4,
        &&label_80CCAAA8,
        &&label_80CCAAAC,
        &&label_80CCAAB0,
        &&label_80CCAAB4,
        &&label_80CCAAB8,
        &&label_80CCAABC,
        &&label_80CCAAC0,
        &&label_80CCAAC4,
        &&label_80CCAAC8,
        &&label_80CCAACC,
        &&label_80CCAAD0,
        &&label_80CCAAD4,
        &&label_80CCAAD8,
        &&label_80CCAADC,
        &&label_80CCAAE0,
        &&label_80CCAAE4,
        &&label_80CCAAE8,
        &&label_80CCAAEC,
        &&label_80CCAAF0,
        &&label_80CCAAF4,
        &&label_80CCAAF8,
        &&label_80CCAAFC,
        &&label_80CCAB00,
        &&label_80CCAB04,
        &&label_80CCAB08,
        &&label_80CCAB0C,
        &&label_80CCAB10,
        &&label_80CCAB14,
        &&label_80CCAB18,
        &&label_80CCAB1C,
        &&label_80CCAB20,
        &&label_80CCAB24,
        &&label_80CCAB28,
        &&label_80CCAB2C,
        &&label_80CCAB30,
        &&label_80CCAB34,
        &&label_80CCAB38,
        &&label_80CCAB3C,
        &&label_80CCAB40,
        &&label_80CCAB44,
        &&label_80CCAB48,
        &&label_80CCAB4C,
        &&label_80CCAB50,
        &&label_80CCAB54,
        &&label_80CCAB58,
        &&label_80CCAB5C,
        &&label_80CCAB60,
        &&label_80CCAB64,
        &&label_80CCAB68,
        &&label_80CCAB6C,
        &&label_80CCAB70,
        &&label_80CCAB74,
        &&label_80CCAB78,
        &&label_80CCAB7C,
        &&label_80CCAB80,
        &&label_80CCAB84,
        &&label_80CCAB88,
        &&label_80CCAB8C,
        &&label_80CCAB90,
        &&label_80CCAB94,
        &&label_80CCAB98,
        &&label_80CCAB9C,
        &&label_80CCABA0,
        &&label_80CCABA4,
        &&label_80CCABA8,
        &&label_80CCABAC,
        &&label_80CCABB0,
        &&label_80CCABB4,
        &&label_80CCABB8,
        &&label_80CCABBC,
        &&label_80CCABC0,
        &&label_80CCABC4,
        &&label_80CCABC8,
        &&label_80CCABCC,
        &&label_80CCABD0,
        &&label_80CCABD4,
        &&label_80CCABD8,
        &&label_80CCABDC,
        &&label_80CCABE0,
        &&label_80CCABE4,
        &&label_80CCABE8,
        &&label_80CCABEC,
        &&label_80CCABF0,
        &&label_80CCABF4,
        &&label_80CCABF8,
        &&label_80CCABFC,
        &&label_80CCAC00,
        &&label_80CCAC04,
        &&label_80CCAC08,
        &&label_80CCAC0C,
        &&label_80CCAC10,
        &&label_80CCAC14,
        &&label_80CCAC18,
        &&label_80CCAC1C,
        &&label_80CCAC20,
        &&label_80CCAC24,
        &&label_80CCAC28,
        &&label_80CCAC2C,
        &&label_80CCAC30,
        &&label_80CCAC34,
        &&label_80CCAC38,
        &&label_80CCAC3C,
        &&label_80CCAC40,
        &&label_80CCAC44,
        &&label_80CCAC48,
        &&label_80CCAC4C,
        &&label_80CCAC50,
        &&label_80CCAC54,
        &&label_80CCAC58,
        &&label_80CCAC5C,
        &&label_80CCAC60,
        &&label_80CCAC64,
        &&label_80CCAC68,
        &&label_80CCAC6C,
        &&label_80CCAC70,
        &&label_80CCAC74,
        &&label_80CCAC78,
        &&label_80CCAC7C,
        &&label_80CCAC80,
        &&label_80CCAC84,
        &&label_80CCAC88,
        &&label_80CCAC8C,
        &&label_80CCAC90,
        &&label_80CCAC94,
        &&label_80CCAC98,
        &&label_80CCAC9C,
        &&label_80CCACA0,
        &&label_80CCACA4,
        &&label_80CCACA8,
        &&label_80CCACAC,
        &&label_80CCACB0,
        &&label_80CCACB4,
        &&label_80CCACB8,
        &&label_80CCACBC,
        &&label_80CCACC0,
        &&label_80CCACC4,
        &&label_80CCACC8,
        &&label_80CCACCC,
        &&label_80CCACD0,
        &&label_80CCACD4,
        &&label_80CCACD8,
        &&label_80CCACDC,
        &&label_80CCACE0,
        &&label_80CCACE4,
        &&label_80CCACE8,
        &&label_80CCACEC,
        &&label_80CCACF0,
        &&label_80CCACF4,
        &&label_80CCACF8,
        &&label_80CCACFC,
        &&label_80CCAD00,
        &&label_80CCAD04,
        &&label_80CCAD08,
        &&label_80CCAD0C,
        &&label_80CCAD10,
        &&label_80CCAD14,
        &&label_80CCAD18,
        &&label_80CCAD1C,
        &&label_80CCAD20,
        &&label_80CCAD24,
        &&label_80CCAD28,
        &&label_80CCAD2C,
        &&label_80CCAD30,
        &&label_80CCAD34,
        &&label_80CCAD38,
        &&label_80CCAD3C,
        &&label_80CCAD40,
        &&label_80CCAD44,
        &&label_80CCAD48,
        &&label_80CCAD4C,
        &&label_80CCAD50,
        &&label_80CCAD54,
        &&label_80CCAD58,
        &&label_80CCAD5C,
        &&label_80CCAD60,
        &&label_80CCAD64,
        &&label_80CCAD68,
        &&label_80CCAD6C,
        &&label_80CCAD70,
        &&label_80CCAD74,
        &&label_80CCAD78,
        &&label_80CCAD7C,
        &&label_80CCAD80,
        &&label_80CCAD84,
        &&label_80CCAD88,
        &&label_80CCAD8C,
        &&label_80CCAD90,
        &&label_80CCAD94,
        &&label_80CCAD98,
        &&label_80CCAD9C,
        &&label_80CCADA0,
        &&label_80CCADA4,
        &&label_80CCADA8,
        &&label_80CCADAC,
        &&label_80CCADB0,
        &&label_80CCADB4,
        &&label_80CCADB8,
        &&label_80CCADBC,
        &&label_80CCADC0,
        &&label_80CCADC4,
        &&label_80CCADC8,
        &&label_80CCADCC,
        &&label_80CCADD0,
        &&label_80CCADD4,
        &&label_80CCADD8,
        &&label_80CCADDC,
        &&label_80CCADE0,
        &&label_80CCADE4,
        &&label_80CCADE8,
        &&label_80CCADEC,
        &&label_80CCADF0,
        &&label_80CCADF4,
        &&label_80CCADF8,
        &&label_80CCADFC,
        &&label_80CCAE00,
        &&label_80CCAE04,
        &&label_80CCAE08,
        &&label_80CCAE0C,
        &&label_80CCAE10,
        &&label_80CCAE14,
        &&label_80CCAE18,
        &&label_80CCAE1C,
        &&label_80CCAE20,
        &&label_80CCAE24,
        &&label_80CCAE28,
        &&label_80CCAE2C,
        &&label_80CCAE30,
        &&label_80CCAE34,
        &&label_80CCAE38,
        &&label_80CCAE3C,
        &&label_80CCAE40,
        &&label_80CCAE44,
        &&label_80CCAE48,
        &&label_80CCAE4C,
        &&label_80CCAE50,
        &&label_80CCAE54,
        &&label_80CCAE58,
        &&label_80CCAE5C,
        &&label_80CCAE60,
        &&label_80CCAE64,
        &&label_80CCAE68,
        &&label_80CCAE6C,
        &&label_80CCAE70,
        &&label_80CCAE74,
        &&label_80CCAE78,
        &&label_80CCAE7C,
        &&label_80CCAE80,
        &&label_80CCAE84,
        &&label_80CCAE88,
        &&label_80CCAE8C,
        &&label_80CCAE90,
        &&label_80CCAE94,
        &&label_80CCAE98,
        &&label_80CCAE9C,
        &&label_80CCAEA0,
        &&label_80CCAEA4,
        &&label_80CCAEA8,
        &&label_80CCAEAC,
        &&label_80CCAEB0,
        &&label_80CCAEB4,
        &&label_80CCAEB8,
        &&label_80CCAEBC,
        &&label_80CCAEC0,
        &&label_80CCAEC4,
        &&label_80CCAEC8,
        &&label_80CCAECC,
        &&label_80CCAED0,
        &&label_80CCAED4,
        &&label_80CCAED8,
        &&label_80CCAEDC,
        &&label_80CCAEE0,
        &&label_80CCAEE4,
        &&label_80CCAEE8,
        &&label_80CCAEEC,
        &&label_80CCAEF0,
        &&label_80CCAEF4,
        &&label_80CCAEF8,
        &&label_80CCAEFC,
        &&label_80CCAF00,
        &&label_80CCAF04,
        &&label_80CCAF08,
        &&label_80CCAF0C,
        &&label_80CCAF10,
        &&label_80CCAF14,
        &&label_80CCAF18,
        &&label_80CCAF1C,
        &&label_80CCAF20,
        &&label_80CCAF24,
        &&label_80CCAF28,
        &&label_80CCAF2C,
        &&label_80CCAF30,
        &&label_80CCAF34,
        &&label_80CCAF38,
        &&label_80CCAF3C,
        &&label_80CCAF40,
        &&label_80CCAF44,
        &&label_80CCAF48,
        &&label_80CCAF4C,
        &&label_80CCAF50,
        &&label_80CCAF54,
        &&label_80CCAF58,
        &&label_80CCAF5C,
        &&label_80CCAF60,
        &&label_80CCAF64,
        &&label_80CCAF68,
        &&label_80CCAF6C,
        &&label_80CCAF70,
        &&label_80CCAF74,
        &&label_80CCAF78,
        &&label_80CCAF7C,
        &&label_80CCAF80,
        &&label_80CCAF84,
        &&label_80CCAF88,
        &&label_80CCAF8C,
        &&label_80CCAF90,
        &&label_80CCAF94,
        &&label_80CCAF98,
        &&label_80CCAF9C,
        &&label_80CCAFA0,
        &&label_80CCAFA4,
        &&label_80CCAFA8,
        &&label_80CCAFAC,
        &&label_80CCAFB0,
        &&label_80CCAFB4,
        &&label_80CCAFB8,
        &&label_80CCAFBC,
        &&label_80CCAFC0,
        &&label_80CCAFC4,
        &&label_80CCAFC8,
        &&label_80CCAFCC,
        &&label_80CCAFD0,
        &&label_80CCAFD4,
        &&label_80CCAFD8,
        &&label_80CCAFDC,
        &&label_80CCAFE0,
        &&label_80CCAFE4,
        &&label_80CCAFE8,
        &&label_80CCAFEC,
        &&label_80CCAFF0,
        &&label_80CCAFF4,
        &&label_80CCAFF8,
        &&label_80CCAFFC,
        &&label_80CCB000,
        &&label_80CCB004,
        &&label_80CCB008,
        &&label_80CCB00C,
        &&label_80CCB010,
        &&label_80CCB014,
        &&label_80CCB018,
        &&label_80CCB01C,
        &&label_80CCB020,
        &&label_80CCB024,
        &&label_80CCB028,
        &&label_80CCB02C,
        &&label_80CCB030,
        &&label_80CCB034,
        &&label_80CCB038,
        &&label_80CCB03C,
        &&label_80CCB040,
        &&label_80CCB044,
        &&label_80CCB048,
        &&label_80CCB04C,
        &&label_80CCB050,
        &&label_80CCB054,
        &&label_80CCB058,
        &&label_80CCB05C,
        &&label_80CCB060,
        &&label_80CCB064,
        &&label_80CCB068,
        &&label_80CCB06C,
        &&label_80CCB070,
        &&label_80CCB074,
        &&label_80CCB078,
        &&label_80CCB07C,
        &&label_80CCB080,
        &&label_80CCB084,
        &&label_80CCB088,
        &&label_80CCB08C,
        &&label_80CCB090,
        &&label_80CCB094,
        &&label_80CCB098,
        &&label_80CCB09C,
        &&label_80CCB0A0,
        &&label_80CCB0A4,
        &&label_80CCB0A8,
        &&label_80CCB0AC,
        &&label_80CCB0B0,
        &&label_80CCB0B4,
        &&label_80CCB0B8,
        &&label_80CCB0BC,
        &&label_80CCB0C0,
        &&label_80CCB0C4,
        &&label_80CCB0C8,
        &&label_80CCB0CC,
        &&label_80CCB0D0,
        &&label_80CCB0D4,
        &&label_80CCB0D8,
        &&label_80CCB0DC,
        &&label_80CCB0E0,
        &&label_80CCB0E4,
        &&label_80CCB0E8,
        &&label_80CCB0EC,
        &&label_80CCB0F0,
        &&label_80CCB0F4,
        &&label_80CCB0F8,
        &&label_80CCB0FC,
        &&label_80CCB100,
        &&label_80CCB104,
        &&label_80CCB108,
        &&label_80CCB10C,
        &&label_80CCB110,
        &&label_80CCB114,
        &&label_80CCB118,
        &&label_80CCB11C,
        &&label_80CCB120,
        &&label_80CCB124,
        &&label_80CCB128,
        &&label_80CCB12C,
        &&label_80CCB130,
        &&label_80CCB134,
        &&label_80CCB138,
        &&label_80CCB13C,
        &&label_80CCB140,
        &&label_80CCB144,
        &&label_80CCB148,
        &&label_80CCB14C,
        &&label_80CCB150,
        &&label_80CCB154,
        &&label_80CCB158,
        &&label_80CCB15C,
        &&label_80CCB160,
        &&label_80CCB164,
        &&label_80CCB168,
        &&label_80CCB16C,
        &&label_80CCB170,
        &&label_80CCB174,
        &&label_80CCB178,
        &&label_80CCB17C,
        &&label_80CCB180,
        &&label_80CCB184,
        &&label_80CCB188,
        &&label_80CCB18C,
        &&label_80CCB190,
        &&label_80CCB194,
        &&label_80CCB198,
        &&label_80CCB19C,
        &&label_80CCB1A0,
        &&label_80CCB1A4,
        &&label_80CCB1A8,
        &&label_80CCB1AC,
        &&label_80CCB1B0,
        &&label_80CCB1B4,
        &&label_80CCB1B8,
        &&label_80CCB1BC,
        &&label_80CCB1C0,
        &&label_80CCB1C4,
        &&label_80CCB1C8,
        &&label_80CCB1CC,
        &&label_80CCB1D0,
        &&label_80CCB1D4,
        &&label_80CCB1D8,
        &&label_80CCB1DC,
        &&label_80CCB1E0,
        &&label_80CCB1E4,
        &&label_80CCB1E8,
        &&label_80CCB1EC,
        &&label_80CCB1F0,
        &&label_80CCB1F4,
        &&label_80CCB1F8,
        &&label_80CCB1FC,
        &&label_80CCB200,
        &&label_80CCB204,
        &&label_80CCB208,
        &&label_80CCB20C,
        &&label_80CCB210,
        &&label_80CCB214,
        &&label_80CCB218,
        &&label_80CCB21C,
        &&label_80CCB220,
        &&label_80CCB224,
        &&label_80CCB228,
        &&label_80CCB22C,
        &&label_80CCB230,
        &&label_80CCB234,
        &&label_80CCB238,
        &&label_80CCB23C,
        &&label_80CCB240,
        &&label_80CCB244,
        &&label_80CCB248,
        &&label_80CCB24C,
        &&label_80CCB250,
        &&label_80CCB254,
        &&label_80CCB258,
        &&label_80CCB25C,
        &&label_80CCB260,
        &&label_80CCB264,
        &&label_80CCB268,
        &&label_80CCB26C,
        &&label_80CCB270,
        &&label_80CCB274,
        &&label_80CCB278,
        &&label_80CCB27C,
        &&label_80CCB280,
        &&label_80CCB284,
        &&label_80CCB288,
        &&label_80CCB28C,
        &&label_80CCB290,
        &&label_80CCB294,
        &&label_80CCB298,
        &&label_80CCB29C,
        &&label_80CCB2A0,
        &&label_80CCB2A4,
        &&label_80CCB2A8,
        &&label_80CCB2AC,
        &&label_80CCB2B0,
        &&label_80CCB2B4,
        &&label_80CCB2B8,
        &&label_80CCB2BC,
        &&label_80CCB2C0,
        &&label_80CCB2C4,
        &&label_80CCB2C8,
        &&label_80CCB2CC,
        &&label_80CCB2D0,
        &&label_80CCB2D4,
        &&label_80CCB2D8,
        &&label_80CCB2DC,
        &&label_80CCB2E0,
        &&label_80CCB2E4,
        &&label_80CCB2E8,
        &&label_80CCB2EC,
        &&label_80CCB2F0,
        &&label_80CCB2F4,
        &&label_80CCB2F8,
        &&label_80CCB2FC,
        &&label_80CCB300,
        &&label_80CCB304,
        &&label_80CCB308,
        &&label_80CCB30C,
        &&label_80CCB310,
        &&label_80CCB314,
        &&label_80CCB318,
        &&label_80CCB31C,
        &&label_80CCB320,
        &&label_80CCB324,
        &&label_80CCB328,
        &&label_80CCB32C,
        &&label_80CCB330,
        &&label_80CCB334,
        &&label_80CCB338,
        &&label_80CCB33C,
        &&label_80CCB340,
        &&label_80CCB344,
        &&label_80CCB348,
        &&label_80CCB34C,
        &&label_80CCB350,
        &&label_80CCB354,
        &&label_80CCB358,
        &&label_80CCB35C,
        &&label_80CCB360,
        &&label_80CCB364,
        &&label_80CCB368,
        &&label_80CCB36C,
        &&label_80CCB370,
        &&label_80CCB374,
        &&label_80CCB378,
        &&label_80CCB37C,
        &&label_80CCB380,
        &&label_80CCB384,
        &&label_80CCB388,
        &&label_80CCB38C,
        &&label_80CCB390,
        &&label_80CCB394,
        &&label_80CCB398,
        &&label_80CCB39C,
        &&label_80CCB3A0,
        &&label_80CCB3A4,
        &&label_80CCB3A8,
        &&label_80CCB3AC,
        &&label_80CCB3B0,
        &&label_80CCB3B4,
        &&label_80CCB3B8,
        &&label_80CCB3BC,
        &&label_80CCB3C0,
        &&label_80CCB3C4,
        &&label_80CCB3C8,
        &&label_80CCB3CC,
        &&label_80CCB3D0,
        &&label_80CCB3D4,
        &&label_80CCB3D8,
        &&label_80CCB3DC,
        &&label_80CCB3E0,
        &&label_80CCB3E4,
        &&label_80CCB3E8,
        &&label_80CCB3EC,
        &&label_80CCB3F0,
        &&label_80CCB3F4,
        &&label_80CCB3F8,
        &&label_80CCB3FC,
        &&label_80CCB400,
        &&label_80CCB404,
        &&label_80CCB408,
        &&label_80CCB40C,
        &&label_80CCB410,
        &&label_80CCB414,
        &&label_80CCB418,
        &&label_80CCB41C,
        &&label_80CCB420,
        &&label_80CCB424,
        &&label_80CCB428,
        &&label_80CCB42C,
        &&label_80CCB430,
        &&label_80CCB434,
        &&label_80CCB438,
        &&label_80CCB43C,
        &&label_80CCB440,
        &&label_80CCB444,
        &&label_80CCB448,
        &&label_80CCB44C,
        &&label_80CCB450,
        &&label_80CCB454,
        &&label_80CCB458,
        &&label_80CCB45C,
        &&label_80CCB460,
        &&label_80CCB464,
        &&label_80CCB468,
        &&label_80CCB46C,
        &&label_80CCB470,
        &&label_80CCB474,
        &&label_80CCB478,
        &&label_80CCB47C,
        &&label_80CCB480,
        &&label_80CCB484,
        &&label_80CCB488,
        &&label_80CCB48C,
        &&label_80CCB490,
        &&label_80CCB494,
        &&label_80CCB498,
        &&label_80CCB49C,
        &&label_80CCB4A0,
        &&label_80CCB4A4,
        &&label_80CCB4A8,
        &&label_80CCB4AC,
        &&label_80CCB4B0,
        &&label_80CCB4B4,
        &&label_80CCB4B8,
        &&label_80CCB4BC,
        &&label_80CCB4C0,
        &&label_80CCB4C4,
        &&label_80CCB4C8,
        &&label_80CCB4CC,
        &&label_80CCB4D0,
        &&label_80CCB4D4,
        &&label_80CCB4D8,
        &&label_80CCB4DC,
        &&label_80CCB4E0,
        &&label_80CCB4E4,
        &&label_80CCB4E8,
        &&label_80CCB4EC,
        &&label_80CCB4F0,
        &&label_80CCB4F4,
        &&label_80CCB4F8,
        &&label_80CCB4FC,
        &&label_80CCB500,
        &&label_80CCB504,
        &&label_80CCB508,
        &&label_80CCB50C,
        &&label_80CCB510,
        &&label_80CCB514,
        &&label_80CCB518,
        &&label_80CCB51C,
        &&label_80CCB520,
        &&label_80CCB524,
        &&label_80CCB528,
        &&label_80CCB52C,
        &&label_80CCB530,
        &&label_80CCB534,
        &&label_80CCB538,
        &&label_80CCB53C,
        &&label_80CCB540,
        &&label_80CCB544,
        &&label_80CCB548,
        &&label_80CCB54C,
        &&label_80CCB550,
        &&label_80CCB554,
        &&label_80CCB558,
        &&label_80CCB55C,
        &&label_80CCB560,
        &&label_80CCB564,
        &&label_80CCB568,
        &&label_80CCB56C,
        &&label_80CCB570,
        &&label_80CCB574,
        &&label_80CCB578,
        &&label_80CCB57C,
        &&label_80CCB580,
        &&label_80CCB584,
        &&label_80CCB588,
        &&label_80CCB58C,
        &&label_80CCB590,
        &&label_80CCB594,
        &&label_80CCB598,
        &&label_80CCB59C,
        &&label_80CCB5A0,
        &&label_80CCB5A4,
        &&label_80CCB5A8,
        &&label_80CCB5AC,
        &&label_80CCB5B0,
        &&label_80CCB5B4,
        &&label_80CCB5B8,
        &&label_80CCB5BC,
        &&label_80CCB5C0,
        &&label_80CCB5C4,
        &&label_80CCB5C8,
        &&label_80CCB5CC,
        &&label_80CCB5D0,
        &&label_80CCB5D4,
        &&label_80CCB5D8,
        &&label_80CCB5DC,
        &&label_80CCB5E0,
        &&label_80CCB5E4,
        &&label_80CCB5E8,
        &&label_80CCB5EC,
        &&label_80CCB5F0,
        &&label_80CCB5F4,
        &&label_80CCB5F8,
        &&label_80CCB5FC,
        &&label_80CCB600,
        &&label_80CCB604,
        &&label_80CCB608,
        &&label_80CCB60C,
        &&label_80CCB610,
        &&label_80CCB614,
        &&label_80CCB618,
        &&label_80CCB61C,
        &&label_80CCB620,
        &&label_80CCB624,
        &&label_80CCB628,
        &&label_80CCB62C,
        &&label_80CCB630,
        &&label_80CCB634,
        &&label_80CCB638,
        &&label_80CCB63C,
        &&label_80CCB640,
        &&label_80CCB644,
        &&label_80CCB648,
        &&label_80CCB64C,
        &&label_80CCB650,
        &&label_80CCB654,
        &&label_80CCB658,
        &&label_80CCB65C,
        &&label_80CCB660,
        &&label_80CCB664,
        &&label_80CCB668,
        &&label_80CCB66C,
        &&label_80CCB670,
        &&label_80CCB674,
        &&label_80CCB678,
        &&label_80CCB67C,
        &&label_80CCB680,
        &&label_80CCB684,
        &&label_80CCB688,
        &&label_80CCB68C,
        &&label_80CCB690,
        &&label_80CCB694,
        &&label_80CCB698,
        &&label_80CCB69C,
        &&label_80CCB6A0,
        &&label_80CCB6A4,
        &&label_80CCB6A8,
        &&label_80CCB6AC,
        &&label_80CCB6B0,
        &&label_80CCB6B4,
        &&label_80CCB6B8,
        &&label_80CCB6BC,
        &&label_80CCB6C0,
        &&label_80CCB6C4,
        &&label_80CCB6C8,
        &&label_80CCB6CC,
        &&label_80CCB6D0,
        &&label_80CCB6D4,
        &&label_80CCB6D8,
        &&label_80CCB6DC,
        &&label_80CCB6E0,
        &&label_80CCB6E4,
        &&label_80CCB6E8,
        &&label_80CCB6EC,
        &&label_80CCB6F0,
        &&label_80CCB6F4,
        &&label_80CCB6F8,
        &&label_80CCB6FC,
        &&label_80CCB700,
        &&label_80CCB704,
        &&label_80CCB708,
        &&label_80CCB70C,
        &&label_80CCB710,
        &&label_80CCB714,
        &&label_80CCB718,
        &&label_80CCB71C,
        &&label_80CCB720,
        &&label_80CCB724,
        &&label_80CCB728,
        &&label_80CCB72C,
        &&label_80CCB730,
        &&label_80CCB734,
        &&label_80CCB738,
        &&label_80CCB73C,
        &&label_80CCB740,
        &&label_80CCB744,
        &&label_80CCB748,
        &&label_80CCB74C,
        &&label_80CCB750,
        &&label_80CCB754,
        &&label_80CCB758,
        &&label_80CCB75C,
        &&label_80CCB760,
        &&label_80CCB764,
        &&label_80CCB768,
        &&label_80CCB76C,
        &&label_80CCB770,
        &&label_80CCB774,
        &&label_80CCB778,
        &&label_80CCB77C,
        &&label_80CCB780,
        &&label_80CCB784,
        &&label_80CCB788,
        &&label_80CCB78C,
        &&label_80CCB790,
        &&label_80CCB794,
        &&label_80CCB798,
        &&label_80CCB79C,
        &&label_80CCB7A0,
        &&label_80CCB7A4,
        &&label_80CCB7A8,
        &&label_80CCB7AC,
        &&label_80CCB7B0,
        &&label_80CCB7B4,
        &&label_80CCB7B8,
        &&label_80CCB7BC,
        &&label_80CCB7C0,
        &&label_80CCB7C4,
        &&label_80CCB7C8,
        &&label_80CCB7CC,
        &&label_80CCB7D0,
        &&label_80CCB7D4,
        &&label_80CCB7D8,
        &&label_80CCB7DC,
        &&label_80CCB7E0,
        &&label_80CCB7E4,
        &&label_80CCB7E8,
        &&label_80CCB7EC,
        &&label_80CCB7F0,
        &&label_80CCB7F4,
        &&label_80CCB7F8,
        &&label_80CCB7FC,
        &&label_80CCB800,
        &&label_80CCB804,
        &&label_80CCB808,
        &&label_80CCB80C,
        &&label_80CCB810,
        &&label_80CCB814,
        &&label_80CCB818,
        &&label_80CCB81C,
        &&label_80CCB820,
        &&label_80CCB824,
        &&label_80CCB828,
        &&label_80CCB82C,
        &&label_80CCB830,
        &&label_80CCB834,
        &&label_80CCB838,
        &&label_80CCB83C,
        &&label_80CCB840,
        &&label_80CCB844,
        &&label_80CCB848,
        &&label_80CCB84C,
        &&label_80CCB850,
        &&label_80CCB854,
        &&label_80CCB858,
        &&label_80CCB85C,
        &&label_80CCB860,
        &&label_80CCB864,
        &&label_80CCB868,
        &&label_80CCB86C,
        &&label_80CCB870,
        &&label_80CCB874,
        &&label_80CCB878,
        &&label_80CCB87C,
        &&label_80CCB880,
        &&label_80CCB884,
        &&label_80CCB888,
        &&label_80CCB88C,
        &&label_80CCB890,
        &&label_80CCB894,
        &&label_80CCB898,
        &&label_80CCB89C,
        &&label_80CCB8A0,
        &&label_80CCB8A4,
        &&label_80CCB8A8,
        &&label_80CCB8AC,
        &&label_80CCB8B0,
        &&label_80CCB8B4,
        &&label_80CCB8B8,
        &&label_80CCB8BC,
        &&label_80CCB8C0,
        &&label_80CCB8C4
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80CC95A0u && pc <= 0x80CCB8C4u && ((pc - 0x80CC95A0u) & 3u) == 0u)
            goto *pc_table_80CC95A0[(pc - 0x80CC95A0u) >> 2];
    }
    return;
label_80CC95A0:
    ctx->pc = 0x80CC95A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC95A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC95A0: stwu     r1, -16(r1)
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
label_80CC95A4:
    ctx->pc = 0x80CC95A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC95A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CC95A4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CC95A8:
    ctx->pc = 0x80CC95A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC95A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC95A8: stw     r0, 20(r1)
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
label_80CC95AC:
    ctx->pc = 0x80CC95ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC95ACu)) return;
    // 80CC95AC: cmpwi   r3, 2
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

label_80CC95B0:
    ctx->pc = 0x80CC95B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC95B0u)) return;
    // 80CC95B0: bc    12, 2, 0x80CCA830
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CCA830;
        }
    }

label_80CC95B4:
    ctx->pc = 0x80CC95B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC95B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CC95B4: bc    4, 0, 0x80CC95C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CC95C8;
        }
    }

label_80CC95B8:
    ctx->pc = 0x80CC95B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC95B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC95B8: cmpwi   r3, 0
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

label_80CC95BC:
    ctx->pc = 0x80CC95BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC95BCu)) return;
    // 80CC95BC: bc    12, 2, 0x80CCA850
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CCA850;
        }
    }

label_80CC95C0:
    ctx->pc = 0x80CC95C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC95C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CC95C0: bc    4, 0, 0x80CC95D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CC95D0;
        }
    }

label_80CC95C4:
    ctx->pc = 0x80CC95C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC95C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CC95C4: b       0x80CCA850
    {
            goto label_80CCA850;
    }

label_80CC95C8:
    ctx->pc = 0x80CC95C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC95C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC95C8: cmpwi   r3, 4
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

label_80CC95CC:
    ctx->pc = 0x80CC95CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC95CCu)) return;
    // 80CC95CC: b       0x80CCA850
    {
            goto label_80CCA850;
    }

label_80CC95D0:
    ctx->pc = 0x80CC95D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC95D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CC95D0: lis     r3, -27377
    ctx->gpr[3] = ((u32)(s32)(-27377) << 16);

label_80CC95D4:
    ctx->pc = 0x80CC95D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC95D4u)) return;
    // 80CC95D4: addi    r3, r3, 11888
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(11888);

label_80CC95D8:
    ctx->pc = 0x80CC95D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC95D8u)) return;
    // 80CC95D8: bl      0x8050AF58
    {
            ctx->lr = 0x80CC95DCu;
            ctx->pc = 0x8050AF58u;
            return;
    }

label_80CC95DC:
    ctx->pc = 0x80CC95DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC95DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC95DC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CC95E0:
    ctx->pc = 0x80CC95E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC95E0u)) return;
    // 80CC95E0: bl      0x80CCAB30
    {
            ctx->lr = 0x80CC95E4u;
            goto label_80CCAB30;
    }

label_80CC95E4:
    ctx->pc = 0x80CC95E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC95E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CC95E4: bl      0x8045DE7C
    {
            ctx->lr = 0x80CC95E8u;
            ctx->pc = 0x8045DE7Cu;
            return;
    }

label_80CC95E8:
    ctx->pc = 0x80CC95E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC95E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CC95E8: bl      0x80460A60
    {
            ctx->lr = 0x80CC95ECu;
            ctx->pc = 0x80460A60u;
            return;
    }

label_80CC95EC:
    ctx->pc = 0x80CC95ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC95ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CC95EC: bl      0x80460A24
    {
            ctx->lr = 0x80CC95F0u;
            ctx->pc = 0x80460A24u;
            return;
    }

label_80CC95F0:
    ctx->pc = 0x80CC95F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC95F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC95F0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC95F4:
    ctx->pc = 0x80CC95F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC95F4u)) return;
    // 80CC95F4: bl      0x8045EC10
    {
            ctx->lr = 0x80CC95F8u;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80CC95F8:
    ctx->pc = 0x80CC95F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC95F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC95F8: li      r3, 95
    ctx->gpr[3] = (u32)(s32)(95);

label_80CC95FC:
    ctx->pc = 0x80CC95FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC95FCu)) return;
    // 80CC95FC: bl      0x80406090
    {
            ctx->lr = 0x80CC9600u;
            ctx->pc = 0x80406090u;
            return;
    }

label_80CC9600:
    ctx->pc = 0x80CC9600u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9600u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80CC9600: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CC9604:
    ctx->pc = 0x80CC9604u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9604u)) return;
    // 80CC9604: lis     r4, -32625
    ctx->gpr[4] = ((u32)(s32)(-32625) << 16);

label_80CC9608:
    ctx->pc = 0x80CC9608u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9608u)) return;
    // 80CC9608: addi    r4, r4, 18200
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(18200);

label_80CC960C:
    ctx->pc = 0x80CC960Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC960Cu)) return;
    // 80CC960C: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CC9610:
    ctx->pc = 0x80CC9610u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9610u)) return;
    // 80CC9610: addi    r5, r5, 9584
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9584);

label_80CC9614:
    ctx->pc = 0x80CC9614u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9614u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CC9614: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CC9614u)) return;
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
label_80CC9618:
    ctx->pc = 0x80CC9618u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9618u)) return;
    // 80CC9618: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CC961C:
    ctx->pc = 0x80CC961Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC961Cu)) return;
    // 80CC961C: addi    r5, r5, 9588
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9588);

label_80CC9620:
    ctx->pc = 0x80CC9620u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9620u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC9620: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CC9620u)) return;
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
label_80CC9624:
    ctx->pc = 0x80CC9624u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9624u)) return;
    // 80CC9624: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CC9628:
    ctx->pc = 0x80CC9628u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9628u)) return;
    // 80CC9628: addi    r5, r5, 9592
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9592);

label_80CC962C:
    ctx->pc = 0x80CC962Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC962Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC962C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CC962Cu)) return;
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
label_80CC9630:
    ctx->pc = 0x80CC9630u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9630u)) return;
    // 80CC9630: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80CC9634:
    ctx->pc = 0x80CC9634u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9634u)) return;
    // 80CC9634: li      r6, 29118
    ctx->gpr[6] = (u32)(s32)(29118);

label_80CC9638:
    ctx->pc = 0x80CC9638u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9638u)) return;
    // 80CC9638: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CC963C:
    ctx->pc = 0x80CC963Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC963Cu)) return;
    // 80CC963C: bl      0x8045ED84
    {
            ctx->lr = 0x80CC9640u;
            ctx->pc = 0x8045ED84u;
            return;
    }

label_80CC9640:
    ctx->pc = 0x80CC9640u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9640u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC9640: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CC9644:
    ctx->pc = 0x80CC9644u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9644u)) return;
    // 80CC9644: bl      0x8045F7C8
    {
            ctx->lr = 0x80CC9648u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CC9648:
    ctx->pc = 0x80CC9648u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9648u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC9648: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CC964C:
    ctx->pc = 0x80CC964Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC964Cu)) return;
    // 80CC964C: bl      0x8045EC10
    {
            ctx->lr = 0x80CC9650u;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80CC9650:
    ctx->pc = 0x80CC9650u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9650u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC9650: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CC9654:
    ctx->pc = 0x80CC9654u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9654u)) return;
    // 80CC9654: bl      0x8045F220
    {
            ctx->lr = 0x80CC9658u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CC9658:
    ctx->pc = 0x80CC9658u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9658u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CC9658: bl      0x8045EB8C
    {
            ctx->lr = 0x80CC965Cu;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80CC965C:
    ctx->pc = 0x80CC965Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC965Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC965C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CC9660:
    ctx->pc = 0x80CC9660u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9660u)) return;
    // 80CC9660: bl      0x8045F220
    {
            ctx->lr = 0x80CC9664u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CC9664:
    ctx->pc = 0x80CC9664u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9664u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CC9664: lis     r4, -27376
    ctx->gpr[4] = ((u32)(s32)(-27376) << 16);

label_80CC9668:
    ctx->pc = 0x80CC9668u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9668u)) return;
    // 80CC9668: addi    r4, r4, 21152
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(21152);

label_80CC966C:
    ctx->pc = 0x80CC966Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC966Cu)) return;
    // 80CC966C: lis     r5, -27864
    ctx->gpr[5] = ((u32)(s32)(-27864) << 16);

label_80CC9670:
    ctx->pc = 0x80CC9670u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9670u)) return;
    // 80CC9670: addi    r5, r5, -24080
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24080);

label_80CC9674:
    ctx->pc = 0x80CC9674u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9674u)) return;
    // 80CC9674: lis     r6, -27377
    ctx->gpr[6] = ((u32)(s32)(-27377) << 16);

label_80CC9678:
    ctx->pc = 0x80CC9678u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9678u)) return;
    // 80CC9678: addi    r6, r6, 9596
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(9596);

label_80CC967C:
    ctx->pc = 0x80CC967Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC967Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CC967C: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80CC967Cu)) return;
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
label_80CC9680:
    ctx->pc = 0x80CC9680u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9680u)) return;
    // 80CC9680: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80CC9684:
    ctx->pc = 0x80CC9684u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9684u)) return;
    // 80CC9684: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_80CC9688:
    ctx->pc = 0x80CC9688u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9688u)) return;
    // 80CC9688: bl      0x8045EBE4
    {
            ctx->lr = 0x80CC968Cu;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80CC968C:
    ctx->pc = 0x80CC968Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC968Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC968C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC9690:
    ctx->pc = 0x80CC9690u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9690u)) return;
    // 80CC9690: bl      0x8045F220
    {
            ctx->lr = 0x80CC9694u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CC9694:
    ctx->pc = 0x80CC9694u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9694u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CC9694: lis     r4, -27377
    ctx->gpr[4] = ((u32)(s32)(-27377) << 16);

label_80CC9698:
    ctx->pc = 0x80CC9698u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9698u)) return;
    // 80CC9698: addi    r4, r4, 9600
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9600);

label_80CC969C:
    ctx->pc = 0x80CC969Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC969Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC969C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CC969Cu)) return;
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
label_80CC96A0:
    ctx->pc = 0x80CC96A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC96A0u)) return;
    // 80CC96A0: lis     r4, -27377
    ctx->gpr[4] = ((u32)(s32)(-27377) << 16);

label_80CC96A4:
    ctx->pc = 0x80CC96A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC96A4u)) return;
    // 80CC96A4: addi    r4, r4, 9604
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9604);

label_80CC96A8:
    ctx->pc = 0x80CC96A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC96A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC96A8: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CC96A8u)) return;
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
label_80CC96AC:
    ctx->pc = 0x80CC96ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC96ACu)) return;
    // 80CC96AC: lis     r4, -27377
    ctx->gpr[4] = ((u32)(s32)(-27377) << 16);

label_80CC96B0:
    ctx->pc = 0x80CC96B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC96B0u)) return;
    // 80CC96B0: addi    r4, r4, 9608
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9608);

label_80CC96B4:
    ctx->pc = 0x80CC96B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC96B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CC96B4: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CC96B4u)) return;
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
label_80CC96B8:
    ctx->pc = 0x80CC96B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC96B8u)) return;
    // 80CC96B8: bl      0x8045EF2C
    {
            ctx->lr = 0x80CC96BCu;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80CC96BC:
    ctx->pc = 0x80CC96BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC96BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC96BC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC96C0:
    ctx->pc = 0x80CC96C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC96C0u)) return;
    // 80CC96C0: bl      0x8045F220
    {
            ctx->lr = 0x80CC96C4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CC96C4:
    ctx->pc = 0x80CC96C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC96C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80CC96C4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CC96C8:
    ctx->pc = 0x80CC96C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC96C8u)) return;
    // 80CC96C8: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80CC96CC:
    ctx->pc = 0x80CC96CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC96CCu)) return;
    // 80CC96CC: addi    r5, r5, -32680
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-32680);

label_80CC96D0:
    ctx->pc = 0x80CC96D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC96D0u)) return;
    // 80CC96D0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80CC96D4:
    ctx->pc = 0x80CC96D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC96D4u)) return;
    // 80CC96D4: bl      0x8045EEA8
    {
            ctx->lr = 0x80CC96D8u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80CC96D8:
    ctx->pc = 0x80CC96D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC96D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC96D8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CC96DC:
    ctx->pc = 0x80CC96DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC96DCu)) return;
    // 80CC96DC: bl      0x8045F7C8
    {
            ctx->lr = 0x80CC96E0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CC96E0:
    ctx->pc = 0x80CC96E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC96E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CC96E0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CC96E4:
    ctx->pc = 0x80CC96E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC96E4u)) return;
    // 80CC96E4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CC96E8:
    ctx->pc = 0x80CC96E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC96E8u)) return;
    // 80CC96E8: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CC96EC:
    ctx->pc = 0x80CC96ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC96ECu)) return;
    // 80CC96EC: addi    r5, r5, 9612
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9612);

label_80CC96F0:
    ctx->pc = 0x80CC96F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC96F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC96F0: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CC96F0u)) return;
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
label_80CC96F4:
    ctx->pc = 0x80CC96F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC96F4u)) return;
    // 80CC96F4: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CC96F8:
    ctx->pc = 0x80CC96F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC96F8u)) return;
    // 80CC96F8: addi    r5, r5, 9616
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9616);

label_80CC96FC:
    ctx->pc = 0x80CC96FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC96FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC96FC: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CC96FCu)) return;
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
label_80CC9700:
    ctx->pc = 0x80CC9700u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9700u)) return;
    // 80CC9700: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CC9704:
    ctx->pc = 0x80CC9704u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9704u)) return;
    // 80CC9704: addi    r5, r5, 9620
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9620);

label_80CC9708:
    ctx->pc = 0x80CC9708u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9708u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CC9708: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CC9708u)) return;
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
label_80CC970C:
    ctx->pc = 0x80CC970Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC970Cu)) return;
    // 80CC970C: bl      0x8045C750
    {
            ctx->lr = 0x80CC9710u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80CC9710:
    ctx->pc = 0x80CC9710u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9710u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80CC9710: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CC9714:
    ctx->pc = 0x80CC9714u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9714u)) return;
    // 80CC9714: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CC9718:
    ctx->pc = 0x80CC9718u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9718u)) return;
    // 80CC9718: li      r5, 611
    ctx->gpr[5] = (u32)(s32)(611);

label_80CC971C:
    ctx->pc = 0x80CC971Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC971Cu)) return;
    // 80CC971C: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80CC9720:
    ctx->pc = 0x80CC9720u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9720u)) return;
    // 80CC9720: addi    r6, r6, -32292
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-32292);

label_80CC9724:
    ctx->pc = 0x80CC9724u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9724u)) return;
    // 80CC9724: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CC9728:
    ctx->pc = 0x80CC9728u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9728u)) return;
    // 80CC9728: bl      0x8045C7B4
    {
            ctx->lr = 0x80CC972Cu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CC972C:
    ctx->pc = 0x80CC972Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC972Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC972C: li      r3, 1352
    ctx->gpr[3] = (u32)(s32)(1352);

label_80CC9730:
    ctx->pc = 0x80CC9730u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9730u)) return;
    // 80CC9730: bl      0x8045BFA0
    {
            ctx->lr = 0x80CC9734u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80CC9734:
    ctx->pc = 0x80CC9734u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9734u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC9734: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80CC9738:
    ctx->pc = 0x80CC9738u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9738u)) return;
    // 80CC9738: bl      0x8045F7C8
    {
            ctx->lr = 0x80CC973Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CC973C:
    ctx->pc = 0x80CC973Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC973Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CC973C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CC9740:
    ctx->pc = 0x80CC9740u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9740u)) return;
    // 80CC9740: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80CC9744:
    ctx->pc = 0x80CC9744u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9744u)) return;
    // 80CC9744: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80CC9748:
    ctx->pc = 0x80CC9748u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9748u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CC9748: lwz     r0, 0(r4)
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
label_80CC974C:
    ctx->pc = 0x80CC974Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC974Cu)) return;
    // 80CC974C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80CC9750:
    ctx->pc = 0x80CC9750u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9750u)) return;
    // 80CC9750: lis     r4, -27377
    ctx->gpr[4] = ((u32)(s32)(-27377) << 16);

label_80CC9754:
    ctx->pc = 0x80CC9754u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9754u)) return;
    // 80CC9754: addi    r4, r4, 11824
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(11824);

label_80CC9758:
    ctx->pc = 0x80CC9758u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9758u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC9758: lwzx    r4, r4, r0
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
label_80CC975C:
    ctx->pc = 0x80CC975Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC975Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CC975C: lwz     r4, 0(r4)
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
label_80CC9760:
    ctx->pc = 0x80CC9760u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9760u)) return;
    // 80CC9760: bl      0x8045F608
    {
            ctx->lr = 0x80CC9764u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80CC9764:
    ctx->pc = 0x80CC9764u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9764u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC9764: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CC9768:
    ctx->pc = 0x80CC9768u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9768u)) return;
    // 80CC9768: bl      0x8045F220
    {
            ctx->lr = 0x80CC976Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CC976C:
    ctx->pc = 0x80CC976Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC976Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CC976C: bl      0x8045C034
    {
            ctx->lr = 0x80CC9770u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80CC9770:
    ctx->pc = 0x80CC9770u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9770u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC9770: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CC9774:
    ctx->pc = 0x80CC9774u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9774u)) return;
    // 80CC9774: bl      0x8045F220
    {
            ctx->lr = 0x80CC9778u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CC9778:
    ctx->pc = 0x80CC9778u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9778u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CC9778: lis     r4, -27377
    ctx->gpr[4] = ((u32)(s32)(-27377) << 16);

label_80CC977C:
    ctx->pc = 0x80CC977Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC977Cu)) return;
    // 80CC977C: addi    r4, r4, 11900
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(11900);

label_80CC9780:
    ctx->pc = 0x80CC9780u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9780u)) return;
    // 80CC9780: bl      0x8045C060
    {
            ctx->lr = 0x80CC9784u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80CC9784:
    ctx->pc = 0x80CC9784u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9784u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CC9784: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CC9788:
    ctx->pc = 0x80CC9788u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9788u)) return;
    // 80CC9788: li      r4, 20
    ctx->gpr[4] = (u32)(s32)(20);

label_80CC978C:
    ctx->pc = 0x80CC978Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC978Cu)) return;
    // 80CC978C: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CC9790:
    ctx->pc = 0x80CC9790u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9790u)) return;
    // 80CC9790: addi    r5, r5, 9624
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9624);

label_80CC9794:
    ctx->pc = 0x80CC9794u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9794u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC9794: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CC9794u)) return;
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
label_80CC9798:
    ctx->pc = 0x80CC9798u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9798u)) return;
    // 80CC9798: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CC979C:
    ctx->pc = 0x80CC979Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC979Cu)) return;
    // 80CC979C: addi    r5, r5, 9628
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9628);

label_80CC97A0:
    ctx->pc = 0x80CC97A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC97A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC97A0: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CC97A0u)) return;
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
label_80CC97A4:
    ctx->pc = 0x80CC97A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC97A4u)) return;
    // 80CC97A4: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CC97A8:
    ctx->pc = 0x80CC97A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC97A8u)) return;
    // 80CC97A8: addi    r5, r5, 9632
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9632);

label_80CC97AC:
    ctx->pc = 0x80CC97ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC97ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CC97AC: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CC97ACu)) return;
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
label_80CC97B0:
    ctx->pc = 0x80CC97B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC97B0u)) return;
    // 80CC97B0: bl      0x8045C750
    {
            ctx->lr = 0x80CC97B4u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80CC97B4:
    ctx->pc = 0x80CC97B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC97B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80CC97B4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CC97B8:
    ctx->pc = 0x80CC97B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC97B8u)) return;
    // 80CC97B8: li      r4, 20
    ctx->gpr[4] = (u32)(s32)(20);

label_80CC97BC:
    ctx->pc = 0x80CC97BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC97BCu)) return;
    // 80CC97BC: li      r5, 611
    ctx->gpr[5] = (u32)(s32)(611);

label_80CC97C0:
    ctx->pc = 0x80CC97C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC97C0u)) return;
    // 80CC97C0: li      r6, 32732
    ctx->gpr[6] = (u32)(s32)(32732);

label_80CC97C4:
    ctx->pc = 0x80CC97C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC97C4u)) return;
    // 80CC97C4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CC97C8:
    ctx->pc = 0x80CC97C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC97C8u)) return;
    // 80CC97C8: bl      0x8045C7B4
    {
            ctx->lr = 0x80CC97CCu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CC97CC:
    ctx->pc = 0x80CC97CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC97CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC97CC: li      r3, 50
    ctx->gpr[3] = (u32)(s32)(50);

label_80CC97D0:
    ctx->pc = 0x80CC97D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC97D0u)) return;
    // 80CC97D0: bl      0x8045F7C8
    {
            ctx->lr = 0x80CC97D4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CC97D4:
    ctx->pc = 0x80CC97D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC97D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CC97D4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CC97D8:
    ctx->pc = 0x80CC97D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC97D8u)) return;
    // 80CC97D8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CC97DC:
    ctx->pc = 0x80CC97DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC97DCu)) return;
    // 80CC97DC: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CC97E0:
    ctx->pc = 0x80CC97E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC97E0u)) return;
    // 80CC97E0: addi    r5, r5, 9636
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9636);

label_80CC97E4:
    ctx->pc = 0x80CC97E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC97E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC97E4: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CC97E4u)) return;
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
label_80CC97E8:
    ctx->pc = 0x80CC97E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC97E8u)) return;
    // 80CC97E8: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CC97EC:
    ctx->pc = 0x80CC97ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC97ECu)) return;
    // 80CC97EC: addi    r5, r5, 9640
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9640);

label_80CC97F0:
    ctx->pc = 0x80CC97F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC97F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC97F0: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CC97F0u)) return;
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
label_80CC97F4:
    ctx->pc = 0x80CC97F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC97F4u)) return;
    // 80CC97F4: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CC97F8:
    ctx->pc = 0x80CC97F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC97F8u)) return;
    // 80CC97F8: addi    r5, r5, 9644
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9644);

label_80CC97FC:
    ctx->pc = 0x80CC97FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC97FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CC97FC: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CC97FCu)) return;
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
label_80CC9800:
    ctx->pc = 0x80CC9800u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9800u)) return;
    // 80CC9800: bl      0x8045C750
    {
            ctx->lr = 0x80CC9804u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80CC9804:
    ctx->pc = 0x80CC9804u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9804u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80CC9804: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CC9808:
    ctx->pc = 0x80CC9808u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9808u)) return;
    // 80CC9808: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CC980C:
    ctx->pc = 0x80CC980Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC980Cu)) return;
    // 80CC980C: li      r5, 3427
    ctx->gpr[5] = (u32)(s32)(3427);

label_80CC9810:
    ctx->pc = 0x80CC9810u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9810u)) return;
    // 80CC9810: li      r6, 476
    ctx->gpr[6] = (u32)(s32)(476);

label_80CC9814:
    ctx->pc = 0x80CC9814u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9814u)) return;
    // 80CC9814: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CC9818:
    ctx->pc = 0x80CC9818u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9818u)) return;
    // 80CC9818: bl      0x8045C7B4
    {
            ctx->lr = 0x80CC981Cu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CC981C:
    ctx->pc = 0x80CC981Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC981Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CC981C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CC9820:
    ctx->pc = 0x80CC9820u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9820u)) return;
    // 80CC9820: li      r4, 200
    ctx->gpr[4] = (u32)(s32)(200);

label_80CC9824:
    ctx->pc = 0x80CC9824u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9824u)) return;
    // 80CC9824: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CC9828:
    ctx->pc = 0x80CC9828u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9828u)) return;
    // 80CC9828: addi    r5, r5, 9648
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9648);

label_80CC982C:
    ctx->pc = 0x80CC982Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC982Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC982C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CC982Cu)) return;
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
label_80CC9830:
    ctx->pc = 0x80CC9830u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9830u)) return;
    // 80CC9830: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CC9834:
    ctx->pc = 0x80CC9834u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9834u)) return;
    // 80CC9834: addi    r5, r5, 9652
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9652);

label_80CC9838:
    ctx->pc = 0x80CC9838u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9838u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC9838: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CC9838u)) return;
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
label_80CC983C:
    ctx->pc = 0x80CC983Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC983Cu)) return;
    // 80CC983C: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CC9840:
    ctx->pc = 0x80CC9840u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9840u)) return;
    // 80CC9840: addi    r5, r5, 9656
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9656);

label_80CC9844:
    ctx->pc = 0x80CC9844u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9844u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CC9844: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CC9844u)) return;
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
label_80CC9848:
    ctx->pc = 0x80CC9848u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9848u)) return;
    // 80CC9848: bl      0x8045C750
    {
            ctx->lr = 0x80CC984Cu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80CC984C:
    ctx->pc = 0x80CC984Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC984Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80CC984C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CC9850:
    ctx->pc = 0x80CC9850u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9850u)) return;
    // 80CC9850: li      r4, 200
    ctx->gpr[4] = (u32)(s32)(200);

label_80CC9854:
    ctx->pc = 0x80CC9854u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9854u)) return;
    // 80CC9854: li      r5, 3427
    ctx->gpr[5] = (u32)(s32)(3427);

label_80CC9858:
    ctx->pc = 0x80CC9858u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9858u)) return;
    // 80CC9858: li      r6, 476
    ctx->gpr[6] = (u32)(s32)(476);

label_80CC985C:
    ctx->pc = 0x80CC985Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC985Cu)) return;
    // 80CC985C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CC9860:
    ctx->pc = 0x80CC9860u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9860u)) return;
    // 80CC9860: bl      0x8045C7B4
    {
            ctx->lr = 0x80CC9864u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CC9864:
    ctx->pc = 0x80CC9864u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9864u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC9864: li      r3, 1353
    ctx->gpr[3] = (u32)(s32)(1353);

label_80CC9868:
    ctx->pc = 0x80CC9868u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9868u)) return;
    // 80CC9868: bl      0x8045BFA0
    {
            ctx->lr = 0x80CC986Cu;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80CC986C:
    ctx->pc = 0x80CC986Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC986Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CC986C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CC9870:
    ctx->pc = 0x80CC9870u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9870u)) return;
    // 80CC9870: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80CC9874:
    ctx->pc = 0x80CC9874u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9874u)) return;
    // 80CC9874: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80CC9878:
    ctx->pc = 0x80CC9878u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9878u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CC9878: lwz     r0, 0(r4)
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
label_80CC987C:
    ctx->pc = 0x80CC987Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC987Cu)) return;
    // 80CC987C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80CC9880:
    ctx->pc = 0x80CC9880u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9880u)) return;
    // 80CC9880: lis     r4, -27377
    ctx->gpr[4] = ((u32)(s32)(-27377) << 16);

label_80CC9884:
    ctx->pc = 0x80CC9884u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9884u)) return;
    // 80CC9884: addi    r4, r4, 11824
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(11824);

label_80CC9888:
    ctx->pc = 0x80CC9888u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9888u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC9888: lwzx    r4, r4, r0
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
label_80CC988C:
    ctx->pc = 0x80CC988Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC988Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CC988C: lwz     r4, 4(r4)
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
label_80CC9890:
    ctx->pc = 0x80CC9890u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9890u)) return;
    // 80CC9890: bl      0x8045F608
    {
            ctx->lr = 0x80CC9894u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80CC9894:
    ctx->pc = 0x80CC9894u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9894u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC9894: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80CC9898:
    ctx->pc = 0x80CC9898u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9898u)) return;
    // 80CC9898: bl      0x8045F7C8
    {
            ctx->lr = 0x80CC989Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CC989C:
    ctx->pc = 0x80CC989Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC989Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CC989C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC98A0:
    ctx->pc = 0x80CC98A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC98A0u)) return;
    // 80CC98A0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CC98A4:
    ctx->pc = 0x80CC98A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC98A4u)) return;
    // 80CC98A4: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CC98A8:
    ctx->pc = 0x80CC98A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC98A8u)) return;
    // 80CC98A8: addi    r5, r5, 9660
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9660);

label_80CC98AC:
    ctx->pc = 0x80CC98ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC98ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC98AC: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CC98ACu)) return;
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
label_80CC98B0:
    ctx->pc = 0x80CC98B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC98B0u)) return;
    // 80CC98B0: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CC98B4:
    ctx->pc = 0x80CC98B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC98B4u)) return;
    // 80CC98B4: addi    r5, r5, 9664
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9664);

label_80CC98B8:
    ctx->pc = 0x80CC98B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC98B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC98B8: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CC98B8u)) return;
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
label_80CC98BC:
    ctx->pc = 0x80CC98BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC98BCu)) return;
    // 80CC98BC: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CC98C0:
    ctx->pc = 0x80CC98C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC98C0u)) return;
    // 80CC98C0: addi    r5, r5, 9668
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9668);

label_80CC98C4:
    ctx->pc = 0x80CC98C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC98C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CC98C4: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CC98C4u)) return;
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
label_80CC98C8:
    ctx->pc = 0x80CC98C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC98C8u)) return;
    // 80CC98C8: bl      0x8045C750
    {
            ctx->lr = 0x80CC98CCu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80CC98CC:
    ctx->pc = 0x80CC98CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC98CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80CC98CC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC98D0:
    ctx->pc = 0x80CC98D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC98D0u)) return;
    // 80CC98D0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CC98D4:
    ctx->pc = 0x80CC98D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC98D4u)) return;
    // 80CC98D4: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80CC98D8:
    ctx->pc = 0x80CC98D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC98D8u)) return;
    // 80CC98D8: addi    r5, r6, -7680
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-7680);

label_80CC98DC:
    ctx->pc = 0x80CC98DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC98DCu)) return;
    // 80CC98DC: addi    r6, r6, -26660
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-26660);

label_80CC98E0:
    ctx->pc = 0x80CC98E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC98E0u)) return;
    // 80CC98E0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CC98E4:
    ctx->pc = 0x80CC98E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC98E4u)) return;
    // 80CC98E4: bl      0x8045C7B4
    {
            ctx->lr = 0x80CC98E8u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CC98E8:
    ctx->pc = 0x80CC98E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC98E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80CC98E8: li      r3, 1335
    ctx->gpr[3] = (u32)(s32)(1335);

label_80CC98EC:
    ctx->pc = 0x80CC98ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC98ECu)) return;
    // 80CC98EC: li      r4, 128
    ctx->gpr[4] = (u32)(s32)(128);

label_80CC98F0:
    ctx->pc = 0x80CC98F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC98F0u)) return;
    // 80CC98F0: li      r5, -100
    ctx->gpr[5] = (u32)(s32)(-100);

label_80CC98F4:
    ctx->pc = 0x80CC98F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC98F4u)) return;
    // 80CC98F4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80CC98F8:
    ctx->pc = 0x80CC98F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC98F8u)) return;
    // 80CC98F8: bl      0x80CCAE04
    {
            ctx->lr = 0x80CC98FCu;
            goto label_80CCAE04;
    }

label_80CC98FC:
    ctx->pc = 0x80CC98FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 19u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC98FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 19u : 1u;
    // 80CC98FC: lis     r3, -27377
    ctx->gpr[3] = ((u32)(s32)(-27377) << 16);

label_80CC9900:
    ctx->pc = 0x80CC9900u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9900u)) return;
    // 80CC9900: addi    r3, r3, 9672
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9672);

label_80CC9904:
    ctx->pc = 0x80CC9904u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9904u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80CC9904: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CC9904u)) return;
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
label_80CC9908:
    ctx->pc = 0x80CC9908u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9908u)) return;
    // 80CC9908: lis     r3, -27377
    ctx->gpr[3] = ((u32)(s32)(-27377) << 16);

label_80CC990C:
    ctx->pc = 0x80CC990Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC990Cu)) return;
    // 80CC990C: addi    r3, r3, 9676
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9676);

label_80CC9910:
    ctx->pc = 0x80CC9910u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9910u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80CC9910: lfs     f2, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CC9910u)) return;
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
label_80CC9914:
    ctx->pc = 0x80CC9914u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9914u)) return;
    // 80CC9914: lis     r3, -27377
    ctx->gpr[3] = ((u32)(s32)(-27377) << 16);

label_80CC9918:
    ctx->pc = 0x80CC9918u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9918u)) return;
    // 80CC9918: addi    r3, r3, 9680
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9680);

label_80CC991C:
    ctx->pc = 0x80CC991Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC991Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CC991C: lfs     f3, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CC991Cu)) return;
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
label_80CC9920:
    ctx->pc = 0x80CC9920u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9920u)) return;
    // 80CC9920: lis     r3, -27377
    ctx->gpr[3] = ((u32)(s32)(-27377) << 16);

label_80CC9924:
    ctx->pc = 0x80CC9924u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9924u)) return;
    // 80CC9924: addi    r3, r3, 9684
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9684);

label_80CC9928:
    ctx->pc = 0x80CC9928u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9928u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC9928: lfs     f4, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CC9928u)) return;
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
label_80CC992C:
    ctx->pc = 0x80CC992Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC992Cu)) return;
    // 80CC992C: lis     r3, -27377
    ctx->gpr[3] = ((u32)(s32)(-27377) << 16);

label_80CC9930:
    ctx->pc = 0x80CC9930u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9930u)) return;
    // 80CC9930: addi    r3, r3, 9688
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9688);

label_80CC9934:
    ctx->pc = 0x80CC9934u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9934u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC9934: lfs     f5, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CC9934u)) return;
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
label_80CC9938:
    ctx->pc = 0x80CC9938u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9938u)) return;
    // 80CC9938: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_80CC993C:
    ctx->pc = 0x80CC993Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC993Cu)) return;
    // 80CC993C: li      r4, 18
    ctx->gpr[4] = (u32)(s32)(18);

label_80CC9940:
    ctx->pc = 0x80CC9940u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9940u)) return;
    // 80CC9940: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80CC9944:
    ctx->pc = 0x80CC9944u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9944u)) return;
    // 80CC9944: bl      0x80CCB65C
    {
            ctx->lr = 0x80CC9948u;
            goto label_80CCB65C;
    }

label_80CC9948:
    ctx->pc = 0x80CC9948u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9948u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC9948: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80CC994C:
    ctx->pc = 0x80CC994Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC994Cu)) return;
    // 80CC994C: bl      0x8045F7C8
    {
            ctx->lr = 0x80CC9950u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CC9950:
    ctx->pc = 0x80CC9950u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 19u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9950u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 19u : 1u;
    // 80CC9950: lis     r3, -27377
    ctx->gpr[3] = ((u32)(s32)(-27377) << 16);

label_80CC9954:
    ctx->pc = 0x80CC9954u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9954u)) return;
    // 80CC9954: addi    r3, r3, 9672
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9672);

label_80CC9958:
    ctx->pc = 0x80CC9958u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9958u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80CC9958: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CC9958u)) return;
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
label_80CC995C:
    ctx->pc = 0x80CC995Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC995Cu)) return;
    // 80CC995C: lis     r3, -27377
    ctx->gpr[3] = ((u32)(s32)(-27377) << 16);

label_80CC9960:
    ctx->pc = 0x80CC9960u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9960u)) return;
    // 80CC9960: addi    r3, r3, 9676
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9676);

label_80CC9964:
    ctx->pc = 0x80CC9964u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9964u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80CC9964: lfs     f2, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CC9964u)) return;
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
label_80CC9968:
    ctx->pc = 0x80CC9968u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9968u)) return;
    // 80CC9968: lis     r3, -27377
    ctx->gpr[3] = ((u32)(s32)(-27377) << 16);

label_80CC996C:
    ctx->pc = 0x80CC996Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC996Cu)) return;
    // 80CC996C: addi    r3, r3, 9680
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9680);

label_80CC9970:
    ctx->pc = 0x80CC9970u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9970u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CC9970: lfs     f3, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CC9970u)) return;
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
label_80CC9974:
    ctx->pc = 0x80CC9974u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9974u)) return;
    // 80CC9974: lis     r3, -27377
    ctx->gpr[3] = ((u32)(s32)(-27377) << 16);

label_80CC9978:
    ctx->pc = 0x80CC9978u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9978u)) return;
    // 80CC9978: addi    r3, r3, 9692
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9692);

label_80CC997C:
    ctx->pc = 0x80CC997Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC997Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC997C: lfs     f4, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CC997Cu)) return;
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
label_80CC9980:
    ctx->pc = 0x80CC9980u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9980u)) return;
    // 80CC9980: lis     r3, -27377
    ctx->gpr[3] = ((u32)(s32)(-27377) << 16);

label_80CC9984:
    ctx->pc = 0x80CC9984u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9984u)) return;
    // 80CC9984: addi    r3, r3, 9688
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9688);

label_80CC9988:
    ctx->pc = 0x80CC9988u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9988u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC9988: lfs     f5, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CC9988u)) return;
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
label_80CC998C:
    ctx->pc = 0x80CC998Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC998Cu)) return;
    // 80CC998C: li      r3, 7
    ctx->gpr[3] = (u32)(s32)(7);

label_80CC9990:
    ctx->pc = 0x80CC9990u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9990u)) return;
    // 80CC9990: li      r4, 22
    ctx->gpr[4] = (u32)(s32)(22);

label_80CC9994:
    ctx->pc = 0x80CC9994u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9994u)) return;
    // 80CC9994: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80CC9998:
    ctx->pc = 0x80CC9998u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9998u)) return;
    // 80CC9998: bl      0x80CCB65C
    {
            ctx->lr = 0x80CC999Cu;
            goto label_80CCB65C;
    }

label_80CC999C:
    ctx->pc = 0x80CC999Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC999Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80CC999C: li      r3, 1335
    ctx->gpr[3] = (u32)(s32)(1335);

label_80CC99A0:
    ctx->pc = 0x80CC99A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC99A0u)) return;
    // 80CC99A0: li      r4, 110
    ctx->gpr[4] = (u32)(s32)(110);

label_80CC99A4:
    ctx->pc = 0x80CC99A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC99A4u)) return;
    // 80CC99A4: li      r5, -70
    ctx->gpr[5] = (u32)(s32)(-70);

label_80CC99A8:
    ctx->pc = 0x80CC99A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC99A8u)) return;
    // 80CC99A8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80CC99AC:
    ctx->pc = 0x80CC99ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC99ACu)) return;
    // 80CC99AC: bl      0x80CCAE04
    {
            ctx->lr = 0x80CC99B0u;
            goto label_80CCAE04;
    }

label_80CC99B0:
    ctx->pc = 0x80CC99B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 19u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC99B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 19u : 1u;
    // 80CC99B0: lis     r3, -27377
    ctx->gpr[3] = ((u32)(s32)(-27377) << 16);

label_80CC99B4:
    ctx->pc = 0x80CC99B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC99B4u)) return;
    // 80CC99B4: addi    r3, r3, 9696
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9696);

label_80CC99B8:
    ctx->pc = 0x80CC99B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC99B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80CC99B8: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CC99B8u)) return;
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
label_80CC99BC:
    ctx->pc = 0x80CC99BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC99BCu)) return;
    // 80CC99BC: lis     r3, -27377
    ctx->gpr[3] = ((u32)(s32)(-27377) << 16);

label_80CC99C0:
    ctx->pc = 0x80CC99C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC99C0u)) return;
    // 80CC99C0: addi    r3, r3, 9676
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9676);

label_80CC99C4:
    ctx->pc = 0x80CC99C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC99C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80CC99C4: lfs     f2, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CC99C4u)) return;
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
label_80CC99C8:
    ctx->pc = 0x80CC99C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC99C8u)) return;
    // 80CC99C8: lis     r3, -27377
    ctx->gpr[3] = ((u32)(s32)(-27377) << 16);

label_80CC99CC:
    ctx->pc = 0x80CC99CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC99CCu)) return;
    // 80CC99CC: addi    r3, r3, 9700
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9700);

label_80CC99D0:
    ctx->pc = 0x80CC99D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC99D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CC99D0: lfs     f3, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CC99D0u)) return;
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
label_80CC99D4:
    ctx->pc = 0x80CC99D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC99D4u)) return;
    // 80CC99D4: lis     r3, -27377
    ctx->gpr[3] = ((u32)(s32)(-27377) << 16);

label_80CC99D8:
    ctx->pc = 0x80CC99D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC99D8u)) return;
    // 80CC99D8: addi    r3, r3, 9704
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9704);

label_80CC99DC:
    ctx->pc = 0x80CC99DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC99DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC99DC: lfs     f4, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CC99DCu)) return;
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
label_80CC99E0:
    ctx->pc = 0x80CC99E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC99E0u)) return;
    // 80CC99E0: lis     r3, -27377
    ctx->gpr[3] = ((u32)(s32)(-27377) << 16);

label_80CC99E4:
    ctx->pc = 0x80CC99E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC99E4u)) return;
    // 80CC99E4: addi    r3, r3, 9688
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9688);

label_80CC99E8:
    ctx->pc = 0x80CC99E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC99E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC99E8: lfs     f5, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CC99E8u)) return;
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
label_80CC99EC:
    ctx->pc = 0x80CC99ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC99ECu)) return;
    // 80CC99EC: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_80CC99F0:
    ctx->pc = 0x80CC99F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC99F0u)) return;
    // 80CC99F0: li      r4, 19
    ctx->gpr[4] = (u32)(s32)(19);

label_80CC99F4:
    ctx->pc = 0x80CC99F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC99F4u)) return;
    // 80CC99F4: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_80CC99F8:
    ctx->pc = 0x80CC99F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC99F8u)) return;
    // 80CC99F8: bl      0x80CCB65C
    {
            ctx->lr = 0x80CC99FCu;
            goto label_80CCB65C;
    }

label_80CC99FC:
    ctx->pc = 0x80CC99FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC99FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC99FC: li      r3, 40
    ctx->gpr[3] = (u32)(s32)(40);

label_80CC9A00:
    ctx->pc = 0x80CC9A00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9A00u)) return;
    // 80CC9A00: bl      0x8045F7C8
    {
            ctx->lr = 0x80CC9A04u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CC9A04:
    ctx->pc = 0x80CC9A04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 19u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9A04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 19u : 1u;
    // 80CC9A04: lis     r3, -27377
    ctx->gpr[3] = ((u32)(s32)(-27377) << 16);

label_80CC9A08:
    ctx->pc = 0x80CC9A08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9A08u)) return;
    // 80CC9A08: addi    r3, r3, 9696
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9696);

label_80CC9A0C:
    ctx->pc = 0x80CC9A0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9A0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80CC9A0C: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CC9A0Cu)) return;
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
label_80CC9A10:
    ctx->pc = 0x80CC9A10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9A10u)) return;
    // 80CC9A10: lis     r3, -27377
    ctx->gpr[3] = ((u32)(s32)(-27377) << 16);

label_80CC9A14:
    ctx->pc = 0x80CC9A14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9A14u)) return;
    // 80CC9A14: addi    r3, r3, 9676
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9676);

label_80CC9A18:
    ctx->pc = 0x80CC9A18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9A18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80CC9A18: lfs     f2, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CC9A18u)) return;
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
label_80CC9A1C:
    ctx->pc = 0x80CC9A1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9A1Cu)) return;
    // 80CC9A1C: lis     r3, -27377
    ctx->gpr[3] = ((u32)(s32)(-27377) << 16);

label_80CC9A20:
    ctx->pc = 0x80CC9A20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9A20u)) return;
    // 80CC9A20: addi    r3, r3, 9700
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9700);

label_80CC9A24:
    ctx->pc = 0x80CC9A24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9A24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CC9A24: lfs     f3, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CC9A24u)) return;
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
label_80CC9A28:
    ctx->pc = 0x80CC9A28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9A28u)) return;
    // 80CC9A28: lis     r3, -27377
    ctx->gpr[3] = ((u32)(s32)(-27377) << 16);

label_80CC9A2C:
    ctx->pc = 0x80CC9A2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9A2Cu)) return;
    // 80CC9A2C: addi    r3, r3, 9704
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9704);

label_80CC9A30:
    ctx->pc = 0x80CC9A30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9A30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC9A30: lfs     f4, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CC9A30u)) return;
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
label_80CC9A34:
    ctx->pc = 0x80CC9A34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9A34u)) return;
    // 80CC9A34: lis     r3, -27377
    ctx->gpr[3] = ((u32)(s32)(-27377) << 16);

label_80CC9A38:
    ctx->pc = 0x80CC9A38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9A38u)) return;
    // 80CC9A38: addi    r3, r3, 9688
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9688);

label_80CC9A3C:
    ctx->pc = 0x80CC9A3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9A3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC9A3C: lfs     f5, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CC9A3Cu)) return;
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
label_80CC9A40:
    ctx->pc = 0x80CC9A40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9A40u)) return;
    // 80CC9A40: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_80CC9A44:
    ctx->pc = 0x80CC9A44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9A44u)) return;
    // 80CC9A44: li      r4, 19
    ctx->gpr[4] = (u32)(s32)(19);

label_80CC9A48:
    ctx->pc = 0x80CC9A48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9A48u)) return;
    // 80CC9A48: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_80CC9A4C:
    ctx->pc = 0x80CC9A4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9A4Cu)) return;
    // 80CC9A4C: bl      0x80CCB65C
    {
            ctx->lr = 0x80CC9A50u;
            goto label_80CCB65C;
    }

label_80CC9A50:
    ctx->pc = 0x80CC9A50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9A50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CC9A50: bl      0x8045F32C
    {
            ctx->lr = 0x80CC9A54u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80CC9A54:
    ctx->pc = 0x80CC9A54u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9A54u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC9A54: li      r3, 100
    ctx->gpr[3] = (u32)(s32)(100);

label_80CC9A58:
    ctx->pc = 0x80CC9A58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9A58u)) return;
    // 80CC9A58: bl      0x8045F7C8
    {
            ctx->lr = 0x80CC9A5Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CC9A5C:
    ctx->pc = 0x80CC9A5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9A5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC9A5C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CC9A60:
    ctx->pc = 0x80CC9A60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9A60u)) return;
    // 80CC9A60: bl      0x80CCB728
    {
            ctx->lr = 0x80CC9A64u;
            goto label_80CCB728;
    }

label_80CC9A64:
    ctx->pc = 0x80CC9A64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9A64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC9A64: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80CC9A68:
    ctx->pc = 0x80CC9A68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9A68u)) return;
    // 80CC9A68: bl      0x80CCB728
    {
            ctx->lr = 0x80CC9A6Cu;
            goto label_80CCB728;
    }

label_80CC9A6C:
    ctx->pc = 0x80CC9A6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9A6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC9A6C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CC9A70:
    ctx->pc = 0x80CC9A70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9A70u)) return;
    // 80CC9A70: bl      0x8045F220
    {
            ctx->lr = 0x80CC9A74u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CC9A74:
    ctx->pc = 0x80CC9A74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9A74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CC9A74: bl      0x8045EB8C
    {
            ctx->lr = 0x80CC9A78u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80CC9A78:
    ctx->pc = 0x80CC9A78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9A78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC9A78: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CC9A7C:
    ctx->pc = 0x80CC9A7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9A7Cu)) return;
    // 80CC9A7C: bl      0x8045F220
    {
            ctx->lr = 0x80CC9A80u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CC9A80:
    ctx->pc = 0x80CC9A80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9A80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CC9A80: lis     r4, -27377
    ctx->gpr[4] = ((u32)(s32)(-27377) << 16);

label_80CC9A84:
    ctx->pc = 0x80CC9A84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9A84u)) return;
    // 80CC9A84: addi    r4, r4, 28100
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(28100);

label_80CC9A88:
    ctx->pc = 0x80CC9A88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9A88u)) return;
    // 80CC9A88: lis     r5, -27864
    ctx->gpr[5] = ((u32)(s32)(-27864) << 16);

label_80CC9A8C:
    ctx->pc = 0x80CC9A8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9A8Cu)) return;
    // 80CC9A8C: addi    r5, r5, -24080
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24080);

label_80CC9A90:
    ctx->pc = 0x80CC9A90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9A90u)) return;
    // 80CC9A90: lis     r6, -27377
    ctx->gpr[6] = ((u32)(s32)(-27377) << 16);

label_80CC9A94:
    ctx->pc = 0x80CC9A94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9A94u)) return;
    // 80CC9A94: addi    r6, r6, 9596
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(9596);

label_80CC9A98:
    ctx->pc = 0x80CC9A98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9A98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CC9A98: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80CC9A98u)) return;
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
label_80CC9A9C:
    ctx->pc = 0x80CC9A9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9A9Cu)) return;
    // 80CC9A9C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80CC9AA0:
    ctx->pc = 0x80CC9AA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9AA0u)) return;
    // 80CC9AA0: li      r7, 32
    ctx->gpr[7] = (u32)(s32)(32);

label_80CC9AA4:
    ctx->pc = 0x80CC9AA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9AA4u)) return;
    // 80CC9AA4: bl      0x8045EBE4
    {
            ctx->lr = 0x80CC9AA8u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80CC9AA8:
    ctx->pc = 0x80CC9AA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9AA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CC9AA8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CC9AAC:
    ctx->pc = 0x80CC9AACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9AACu)) return;
    // 80CC9AAC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CC9AB0:
    ctx->pc = 0x80CC9AB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9AB0u)) return;
    // 80CC9AB0: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CC9AB4:
    ctx->pc = 0x80CC9AB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9AB4u)) return;
    // 80CC9AB4: addi    r5, r5, 9708
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9708);

label_80CC9AB8:
    ctx->pc = 0x80CC9AB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9AB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC9AB8: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CC9AB8u)) return;
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
label_80CC9ABC:
    ctx->pc = 0x80CC9ABCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9ABCu)) return;
    // 80CC9ABC: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CC9AC0:
    ctx->pc = 0x80CC9AC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9AC0u)) return;
    // 80CC9AC0: addi    r5, r5, 9712
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9712);

label_80CC9AC4:
    ctx->pc = 0x80CC9AC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9AC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC9AC4: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CC9AC4u)) return;
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
label_80CC9AC8:
    ctx->pc = 0x80CC9AC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9AC8u)) return;
    // 80CC9AC8: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CC9ACC:
    ctx->pc = 0x80CC9ACCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9ACCu)) return;
    // 80CC9ACC: addi    r5, r5, 9716
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9716);

label_80CC9AD0:
    ctx->pc = 0x80CC9AD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9AD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CC9AD0: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CC9AD0u)) return;
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
label_80CC9AD4:
    ctx->pc = 0x80CC9AD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9AD4u)) return;
    // 80CC9AD4: bl      0x8045C750
    {
            ctx->lr = 0x80CC9AD8u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80CC9AD8:
    ctx->pc = 0x80CC9AD8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9AD8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80CC9AD8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CC9ADC:
    ctx->pc = 0x80CC9ADCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9ADCu)) return;
    // 80CC9ADC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CC9AE0:
    ctx->pc = 0x80CC9AE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9AE0u)) return;
    // 80CC9AE0: li      r5, 3840
    ctx->gpr[5] = (u32)(s32)(3840);

label_80CC9AE4:
    ctx->pc = 0x80CC9AE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9AE4u)) return;
    // 80CC9AE4: li      r6, 24540
    ctx->gpr[6] = (u32)(s32)(24540);

label_80CC9AE8:
    ctx->pc = 0x80CC9AE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9AE8u)) return;
    // 80CC9AE8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CC9AEC:
    ctx->pc = 0x80CC9AECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9AECu)) return;
    // 80CC9AEC: bl      0x8045C7B4
    {
            ctx->lr = 0x80CC9AF0u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CC9AF0:
    ctx->pc = 0x80CC9AF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9AF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CC9AF0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CC9AF4:
    ctx->pc = 0x80CC9AF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9AF4u)) return;
    // 80CC9AF4: li      r4, 200
    ctx->gpr[4] = (u32)(s32)(200);

label_80CC9AF8:
    ctx->pc = 0x80CC9AF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9AF8u)) return;
    // 80CC9AF8: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CC9AFC:
    ctx->pc = 0x80CC9AFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9AFCu)) return;
    // 80CC9AFC: addi    r5, r5, 9720
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9720);

label_80CC9B00:
    ctx->pc = 0x80CC9B00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9B00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC9B00: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CC9B00u)) return;
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
label_80CC9B04:
    ctx->pc = 0x80CC9B04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9B04u)) return;
    // 80CC9B04: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CC9B08:
    ctx->pc = 0x80CC9B08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9B08u)) return;
    // 80CC9B08: addi    r5, r5, 9724
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9724);

label_80CC9B0C:
    ctx->pc = 0x80CC9B0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9B0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC9B0C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CC9B0Cu)) return;
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
label_80CC9B10:
    ctx->pc = 0x80CC9B10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9B10u)) return;
    // 80CC9B10: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CC9B14:
    ctx->pc = 0x80CC9B14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9B14u)) return;
    // 80CC9B14: addi    r5, r5, 9728
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9728);

label_80CC9B18:
    ctx->pc = 0x80CC9B18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9B18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CC9B18: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CC9B18u)) return;
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
label_80CC9B1C:
    ctx->pc = 0x80CC9B1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9B1Cu)) return;
    // 80CC9B1C: bl      0x8045C750
    {
            ctx->lr = 0x80CC9B20u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80CC9B20:
    ctx->pc = 0x80CC9B20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9B20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80CC9B20: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CC9B24:
    ctx->pc = 0x80CC9B24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9B24u)) return;
    // 80CC9B24: li      r4, 200
    ctx->gpr[4] = (u32)(s32)(200);

label_80CC9B28:
    ctx->pc = 0x80CC9B28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9B28u)) return;
    // 80CC9B28: li      r5, 3840
    ctx->gpr[5] = (u32)(s32)(3840);

label_80CC9B2C:
    ctx->pc = 0x80CC9B2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9B2Cu)) return;
    // 80CC9B2C: li      r6, 24540
    ctx->gpr[6] = (u32)(s32)(24540);

label_80CC9B30:
    ctx->pc = 0x80CC9B30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9B30u)) return;
    // 80CC9B30: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CC9B34:
    ctx->pc = 0x80CC9B34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9B34u)) return;
    // 80CC9B34: bl      0x8045C7B4
    {
            ctx->lr = 0x80CC9B38u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CC9B38:
    ctx->pc = 0x80CC9B38u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9B38u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC9B38: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CC9B3C:
    ctx->pc = 0x80CC9B3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9B3Cu)) return;
    // 80CC9B3C: bl      0x8045F220
    {
            ctx->lr = 0x80CC9B40u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CC9B40:
    ctx->pc = 0x80CC9B40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9B40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CC9B40: bl      0x8045C034
    {
            ctx->lr = 0x80CC9B44u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80CC9B44:
    ctx->pc = 0x80CC9B44u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9B44u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC9B44: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CC9B48:
    ctx->pc = 0x80CC9B48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9B48u)) return;
    // 80CC9B48: bl      0x8045F220
    {
            ctx->lr = 0x80CC9B4Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CC9B4C:
    ctx->pc = 0x80CC9B4Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9B4Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CC9B4C: lis     r4, -27377
    ctx->gpr[4] = ((u32)(s32)(-27377) << 16);

label_80CC9B50:
    ctx->pc = 0x80CC9B50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9B50u)) return;
    // 80CC9B50: addi    r4, r4, 11904
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(11904);

label_80CC9B54:
    ctx->pc = 0x80CC9B54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9B54u)) return;
    // 80CC9B54: bl      0x8045C060
    {
            ctx->lr = 0x80CC9B58u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80CC9B58:
    ctx->pc = 0x80CC9B58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9B58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC9B58: li      r3, 1354
    ctx->gpr[3] = (u32)(s32)(1354);

label_80CC9B5C:
    ctx->pc = 0x80CC9B5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9B5Cu)) return;
    // 80CC9B5C: bl      0x8045BFA0
    {
            ctx->lr = 0x80CC9B60u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80CC9B60:
    ctx->pc = 0x80CC9B60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9B60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CC9B60: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CC9B64:
    ctx->pc = 0x80CC9B64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9B64u)) return;
    // 80CC9B64: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80CC9B68:
    ctx->pc = 0x80CC9B68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9B68u)) return;
    // 80CC9B68: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80CC9B6C:
    ctx->pc = 0x80CC9B6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9B6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CC9B6C: lwz     r0, 0(r4)
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
label_80CC9B70:
    ctx->pc = 0x80CC9B70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9B70u)) return;
    // 80CC9B70: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80CC9B74:
    ctx->pc = 0x80CC9B74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9B74u)) return;
    // 80CC9B74: lis     r4, -27377
    ctx->gpr[4] = ((u32)(s32)(-27377) << 16);

label_80CC9B78:
    ctx->pc = 0x80CC9B78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9B78u)) return;
    // 80CC9B78: addi    r4, r4, 11824
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(11824);

label_80CC9B7C:
    ctx->pc = 0x80CC9B7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9B7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC9B7C: lwzx    r4, r4, r0
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
label_80CC9B80:
    ctx->pc = 0x80CC9B80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9B80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CC9B80: lwz     r4, 8(r4)
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
label_80CC9B84:
    ctx->pc = 0x80CC9B84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9B84u)) return;
    // 80CC9B84: bl      0x8045F608
    {
            ctx->lr = 0x80CC9B88u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80CC9B88:
    ctx->pc = 0x80CC9B88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9B88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC9B88: li      r3, 100
    ctx->gpr[3] = (u32)(s32)(100);

label_80CC9B8C:
    ctx->pc = 0x80CC9B8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9B8Cu)) return;
    // 80CC9B8C: bl      0x8045F7C8
    {
            ctx->lr = 0x80CC9B90u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CC9B90:
    ctx->pc = 0x80CC9B90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9B90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CC9B90: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CC9B94:
    ctx->pc = 0x80CC9B94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9B94u)) return;
    // 80CC9B94: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CC9B98:
    ctx->pc = 0x80CC9B98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9B98u)) return;
    // 80CC9B98: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CC9B9C:
    ctx->pc = 0x80CC9B9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9B9Cu)) return;
    // 80CC9B9C: addi    r5, r5, 9732
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9732);

label_80CC9BA0:
    ctx->pc = 0x80CC9BA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9BA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC9BA0: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CC9BA0u)) return;
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
label_80CC9BA4:
    ctx->pc = 0x80CC9BA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9BA4u)) return;
    // 80CC9BA4: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CC9BA8:
    ctx->pc = 0x80CC9BA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9BA8u)) return;
    // 80CC9BA8: addi    r5, r5, 9736
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9736);

label_80CC9BAC:
    ctx->pc = 0x80CC9BACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9BACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC9BAC: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CC9BACu)) return;
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
label_80CC9BB0:
    ctx->pc = 0x80CC9BB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9BB0u)) return;
    // 80CC9BB0: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CC9BB4:
    ctx->pc = 0x80CC9BB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9BB4u)) return;
    // 80CC9BB4: addi    r5, r5, 9740
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9740);

label_80CC9BB8:
    ctx->pc = 0x80CC9BB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9BB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CC9BB8: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CC9BB8u)) return;
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
label_80CC9BBC:
    ctx->pc = 0x80CC9BBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9BBCu)) return;
    // 80CC9BBC: bl      0x8045C750
    {
            ctx->lr = 0x80CC9BC0u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80CC9BC0:
    ctx->pc = 0x80CC9BC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9BC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80CC9BC0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CC9BC4:
    ctx->pc = 0x80CC9BC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9BC4u)) return;
    // 80CC9BC4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CC9BC8:
    ctx->pc = 0x80CC9BC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9BC8u)) return;
    // 80CC9BC8: li      r5, 3939
    ctx->gpr[5] = (u32)(s32)(3939);

label_80CC9BCC:
    ctx->pc = 0x80CC9BCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9BCCu)) return;
    // 80CC9BCC: li      r6, 7716
    ctx->gpr[6] = (u32)(s32)(7716);

label_80CC9BD0:
    ctx->pc = 0x80CC9BD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9BD0u)) return;
    // 80CC9BD0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CC9BD4:
    ctx->pc = 0x80CC9BD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9BD4u)) return;
    // 80CC9BD4: bl      0x8045C7B4
    {
            ctx->lr = 0x80CC9BD8u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CC9BD8:
    ctx->pc = 0x80CC9BD8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9BD8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CC9BD8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CC9BDC:
    ctx->pc = 0x80CC9BDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9BDCu)) return;
    // 80CC9BDC: li      r4, 200
    ctx->gpr[4] = (u32)(s32)(200);

label_80CC9BE0:
    ctx->pc = 0x80CC9BE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9BE0u)) return;
    // 80CC9BE0: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CC9BE4:
    ctx->pc = 0x80CC9BE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9BE4u)) return;
    // 80CC9BE4: addi    r5, r5, 9732
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9732);

label_80CC9BE8:
    ctx->pc = 0x80CC9BE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9BE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC9BE8: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CC9BE8u)) return;
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
label_80CC9BEC:
    ctx->pc = 0x80CC9BECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9BECu)) return;
    // 80CC9BEC: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CC9BF0:
    ctx->pc = 0x80CC9BF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9BF0u)) return;
    // 80CC9BF0: addi    r5, r5, 9736
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9736);

label_80CC9BF4:
    ctx->pc = 0x80CC9BF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9BF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC9BF4: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CC9BF4u)) return;
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
label_80CC9BF8:
    ctx->pc = 0x80CC9BF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9BF8u)) return;
    // 80CC9BF8: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CC9BFC:
    ctx->pc = 0x80CC9BFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9BFCu)) return;
    // 80CC9BFC: addi    r5, r5, 9740
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9740);

label_80CC9C00:
    ctx->pc = 0x80CC9C00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9C00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CC9C00: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CC9C00u)) return;
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
label_80CC9C04:
    ctx->pc = 0x80CC9C04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9C04u)) return;
    // 80CC9C04: bl      0x8045C750
    {
            ctx->lr = 0x80CC9C08u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80CC9C08:
    ctx->pc = 0x80CC9C08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9C08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80CC9C08: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CC9C0C:
    ctx->pc = 0x80CC9C0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9C0Cu)) return;
    // 80CC9C0C: li      r4, 200
    ctx->gpr[4] = (u32)(s32)(200);

label_80CC9C10:
    ctx->pc = 0x80CC9C10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9C10u)) return;
    // 80CC9C10: li      r5, 3939
    ctx->gpr[5] = (u32)(s32)(3939);

label_80CC9C14:
    ctx->pc = 0x80CC9C14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9C14u)) return;
    // 80CC9C14: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80CC9C18:
    ctx->pc = 0x80CC9C18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9C18u)) return;
    // 80CC9C18: addi    r6, r6, -9180
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-9180);

label_80CC9C1C:
    ctx->pc = 0x80CC9C1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9C1Cu)) return;
    // 80CC9C1C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CC9C20:
    ctx->pc = 0x80CC9C20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9C20u)) return;
    // 80CC9C20: bl      0x8045C7B4
    {
            ctx->lr = 0x80CC9C24u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CC9C24:
    ctx->pc = 0x80CC9C24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9C24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC9C24: li      r3, 1355
    ctx->gpr[3] = (u32)(s32)(1355);

label_80CC9C28:
    ctx->pc = 0x80CC9C28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9C28u)) return;
    // 80CC9C28: bl      0x8045BFA0
    {
            ctx->lr = 0x80CC9C2Cu;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80CC9C2C:
    ctx->pc = 0x80CC9C2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9C2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CC9C2C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CC9C30:
    ctx->pc = 0x80CC9C30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9C30u)) return;
    // 80CC9C30: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80CC9C34:
    ctx->pc = 0x80CC9C34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9C34u)) return;
    // 80CC9C34: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80CC9C38:
    ctx->pc = 0x80CC9C38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9C38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CC9C38: lwz     r0, 0(r4)
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
label_80CC9C3C:
    ctx->pc = 0x80CC9C3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9C3Cu)) return;
    // 80CC9C3C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80CC9C40:
    ctx->pc = 0x80CC9C40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9C40u)) return;
    // 80CC9C40: lis     r4, -27377
    ctx->gpr[4] = ((u32)(s32)(-27377) << 16);

label_80CC9C44:
    ctx->pc = 0x80CC9C44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9C44u)) return;
    // 80CC9C44: addi    r4, r4, 11824
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(11824);

label_80CC9C48:
    ctx->pc = 0x80CC9C48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9C48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC9C48: lwzx    r4, r4, r0
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
label_80CC9C4C:
    ctx->pc = 0x80CC9C4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9C4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CC9C4C: lwz     r4, 12(r4)
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
label_80CC9C50:
    ctx->pc = 0x80CC9C50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9C50u)) return;
    // 80CC9C50: bl      0x8045F608
    {
            ctx->lr = 0x80CC9C54u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80CC9C54:
    ctx->pc = 0x80CC9C54u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9C54u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC9C54: li      r3, 200
    ctx->gpr[3] = (u32)(s32)(200);

label_80CC9C58:
    ctx->pc = 0x80CC9C58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9C58u)) return;
    // 80CC9C58: bl      0x8045F7C8
    {
            ctx->lr = 0x80CC9C5Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CC9C5C:
    ctx->pc = 0x80CC9C5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9C5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CC9C5C: bl      0x8045F32C
    {
            ctx->lr = 0x80CC9C60u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80CC9C60:
    ctx->pc = 0x80CC9C60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9C60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC9C60: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_80CC9C64:
    ctx->pc = 0x80CC9C64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9C64u)) return;
    // 80CC9C64: bl      0x8045F7C8
    {
            ctx->lr = 0x80CC9C68u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CC9C68:
    ctx->pc = 0x80CC9C68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9C68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CC9C68: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CC9C6C:
    ctx->pc = 0x80CC9C6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9C6Cu)) return;
    // 80CC9C6C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CC9C70:
    ctx->pc = 0x80CC9C70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9C70u)) return;
    // 80CC9C70: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CC9C74:
    ctx->pc = 0x80CC9C74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9C74u)) return;
    // 80CC9C74: addi    r5, r5, 9744
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9744);

label_80CC9C78:
    ctx->pc = 0x80CC9C78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9C78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC9C78: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CC9C78u)) return;
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
label_80CC9C7C:
    ctx->pc = 0x80CC9C7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9C7Cu)) return;
    // 80CC9C7C: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CC9C80:
    ctx->pc = 0x80CC9C80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9C80u)) return;
    // 80CC9C80: addi    r5, r5, 9748
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9748);

label_80CC9C84:
    ctx->pc = 0x80CC9C84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9C84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC9C84: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CC9C84u)) return;
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
label_80CC9C88:
    ctx->pc = 0x80CC9C88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9C88u)) return;
    // 80CC9C88: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CC9C8C:
    ctx->pc = 0x80CC9C8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9C8Cu)) return;
    // 80CC9C8C: addi    r5, r5, 9752
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9752);

label_80CC9C90:
    ctx->pc = 0x80CC9C90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9C90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CC9C90: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CC9C90u)) return;
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
label_80CC9C94:
    ctx->pc = 0x80CC9C94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9C94u)) return;
    // 80CC9C94: bl      0x8045C750
    {
            ctx->lr = 0x80CC9C98u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80CC9C98:
    ctx->pc = 0x80CC9C98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9C98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80CC9C98: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CC9C9C:
    ctx->pc = 0x80CC9C9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9C9Cu)) return;
    // 80CC9C9C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CC9CA0:
    ctx->pc = 0x80CC9CA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9CA0u)) return;
    // 80CC9CA0: li      r5, 611
    ctx->gpr[5] = (u32)(s32)(611);

label_80CC9CA4:
    ctx->pc = 0x80CC9CA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9CA4u)) return;
    // 80CC9CA4: li      r6, 31452
    ctx->gpr[6] = (u32)(s32)(31452);

label_80CC9CA8:
    ctx->pc = 0x80CC9CA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9CA8u)) return;
    // 80CC9CA8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CC9CAC:
    ctx->pc = 0x80CC9CACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9CACu)) return;
    // 80CC9CAC: bl      0x8045C7B4
    {
            ctx->lr = 0x80CC9CB0u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CC9CB0:
    ctx->pc = 0x80CC9CB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9CB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC9CB0: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CC9CB4:
    ctx->pc = 0x80CC9CB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9CB4u)) return;
    // 80CC9CB4: bl      0x8045F220
    {
            ctx->lr = 0x80CC9CB8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CC9CB8:
    ctx->pc = 0x80CC9CB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9CB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CC9CB8: bl      0x8045EB8C
    {
            ctx->lr = 0x80CC9CBCu;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80CC9CBC:
    ctx->pc = 0x80CC9CBCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9CBCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC9CBC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CC9CC0:
    ctx->pc = 0x80CC9CC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9CC0u)) return;
    // 80CC9CC0: bl      0x8045F220
    {
            ctx->lr = 0x80CC9CC4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CC9CC4:
    ctx->pc = 0x80CC9CC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9CC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CC9CC4: lis     r4, -27861
    ctx->gpr[4] = ((u32)(s32)(-27861) << 16);

label_80CC9CC8:
    ctx->pc = 0x80CC9CC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9CC8u)) return;
    // 80CC9CC8: addi    r4, r4, -19168
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-19168);

label_80CC9CCC:
    ctx->pc = 0x80CC9CCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9CCCu)) return;
    // 80CC9CCC: lis     r5, -27864
    ctx->gpr[5] = ((u32)(s32)(-27864) << 16);

label_80CC9CD0:
    ctx->pc = 0x80CC9CD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9CD0u)) return;
    // 80CC9CD0: addi    r5, r5, -24080
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24080);

label_80CC9CD4:
    ctx->pc = 0x80CC9CD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9CD4u)) return;
    // 80CC9CD4: lis     r6, -27377
    ctx->gpr[6] = ((u32)(s32)(-27377) << 16);

label_80CC9CD8:
    ctx->pc = 0x80CC9CD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9CD8u)) return;
    // 80CC9CD8: addi    r6, r6, 9756
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(9756);

label_80CC9CDC:
    ctx->pc = 0x80CC9CDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9CDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CC9CDC: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80CC9CDCu)) return;
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
label_80CC9CE0:
    ctx->pc = 0x80CC9CE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9CE0u)) return;
    // 80CC9CE0: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80CC9CE4:
    ctx->pc = 0x80CC9CE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9CE4u)) return;
    // 80CC9CE4: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_80CC9CE8:
    ctx->pc = 0x80CC9CE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9CE8u)) return;
    // 80CC9CE8: bl      0x8045EBE4
    {
            ctx->lr = 0x80CC9CECu;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80CC9CEC:
    ctx->pc = 0x80CC9CECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9CECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC9CEC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CC9CF0:
    ctx->pc = 0x80CC9CF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9CF0u)) return;
    // 80CC9CF0: bl      0x8045F220
    {
            ctx->lr = 0x80CC9CF4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CC9CF4:
    ctx->pc = 0x80CC9CF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9CF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80CC9CF4: lis     r4, -27377
    ctx->gpr[4] = ((u32)(s32)(-27377) << 16);

label_80CC9CF8:
    ctx->pc = 0x80CC9CF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9CF8u)) return;
    // 80CC9CF8: addi    r4, r4, 9760
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9760);

label_80CC9CFC:
    ctx->pc = 0x80CC9CFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9CFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80CC9CFC: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CC9CFCu)) return;
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
label_80CC9D00:
    ctx->pc = 0x80CC9D00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9D00u)) return;
    // 80CC9D00: lis     r4, -27377
    ctx->gpr[4] = ((u32)(s32)(-27377) << 16);

label_80CC9D04:
    ctx->pc = 0x80CC9D04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9D04u)) return;
    // 80CC9D04: addi    r4, r4, 9764
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9764);

label_80CC9D08:
    ctx->pc = 0x80CC9D08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9D08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CC9D08: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CC9D08u)) return;
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
label_80CC9D0C:
    ctx->pc = 0x80CC9D0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9D0Cu)) return;
    // 80CC9D0C: lis     r4, -27377
    ctx->gpr[4] = ((u32)(s32)(-27377) << 16);

label_80CC9D10:
    ctx->pc = 0x80CC9D10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9D10u)) return;
    // 80CC9D10: addi    r4, r4, 9768
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9768);

label_80CC9D14:
    ctx->pc = 0x80CC9D14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9D14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC9D14: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CC9D14u)) return;
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
label_80CC9D18:
    ctx->pc = 0x80CC9D18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9D18u)) return;
    // 80CC9D18: lis     r4, -27377
    ctx->gpr[4] = ((u32)(s32)(-27377) << 16);

label_80CC9D1C:
    ctx->pc = 0x80CC9D1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9D1Cu)) return;
    // 80CC9D1C: addi    r4, r4, 9772
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9772);

label_80CC9D20:
    ctx->pc = 0x80CC9D20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9D20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC9D20: lfs     f4, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CC9D20u)) return;
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
label_80CC9D24:
    ctx->pc = 0x80CC9D24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9D24u)) return;
    // 80CC9D24: lis     r4, -27377
    ctx->gpr[4] = ((u32)(s32)(-27377) << 16);

label_80CC9D28:
    ctx->pc = 0x80CC9D28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9D28u)) return;
    // 80CC9D28: addi    r4, r4, 9776
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9776);

label_80CC9D2C:
    ctx->pc = 0x80CC9D2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9D2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CC9D2C: lfs     f5, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CC9D2Cu)) return;
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
label_80CC9D30:
    ctx->pc = 0x80CC9D30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9D30u)) return;
    // 80CC9D30: bl      0x8045E570
    {
            ctx->lr = 0x80CC9D34u;
            ctx->pc = 0x8045E570u;
            return;
    }

label_80CC9D34:
    ctx->pc = 0x80CC9D34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9D34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC9D34: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80CC9D38:
    ctx->pc = 0x80CC9D38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9D38u)) return;
    // 80CC9D38: bl      0x8045F7C8
    {
            ctx->lr = 0x80CC9D3Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CC9D3C:
    ctx->pc = 0x80CC9D3Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9D3Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC9D3C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC9D40:
    ctx->pc = 0x80CC9D40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9D40u)) return;
    // 80CC9D40: bl      0x8045F220
    {
            ctx->lr = 0x80CC9D44u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CC9D44:
    ctx->pc = 0x80CC9D44u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9D44u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CC9D44: lis     r4, -28596
    ctx->gpr[4] = ((u32)(s32)(-28596) << 16);

label_80CC9D48:
    ctx->pc = 0x80CC9D48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9D48u)) return;
    // 80CC9D48: addi    r4, r4, 19628
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(19628);

label_80CC9D4C:
    ctx->pc = 0x80CC9D4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9D4Cu)) return;
    // 80CC9D4C: lis     r5, -28598
    ctx->gpr[5] = ((u32)(s32)(-28598) << 16);

label_80CC9D50:
    ctx->pc = 0x80CC9D50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9D50u)) return;
    // 80CC9D50: addi    r5, r5, 24904
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(24904);

label_80CC9D54:
    ctx->pc = 0x80CC9D54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9D54u)) return;
    // 80CC9D54: lis     r6, -27377
    ctx->gpr[6] = ((u32)(s32)(-27377) << 16);

label_80CC9D58:
    ctx->pc = 0x80CC9D58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9D58u)) return;
    // 80CC9D58: addi    r6, r6, 9780
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(9780);

label_80CC9D5C:
    ctx->pc = 0x80CC9D5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9D5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CC9D5C: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80CC9D5Cu)) return;
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
label_80CC9D60:
    ctx->pc = 0x80CC9D60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9D60u)) return;
    // 80CC9D60: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80CC9D64:
    ctx->pc = 0x80CC9D64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9D64u)) return;
    // 80CC9D64: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_80CC9D68:
    ctx->pc = 0x80CC9D68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9D68u)) return;
    // 80CC9D68: bl      0x8045EBE4
    {
            ctx->lr = 0x80CC9D6Cu;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80CC9D6C:
    ctx->pc = 0x80CC9D6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9D6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC9D6C: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_80CC9D70:
    ctx->pc = 0x80CC9D70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9D70u)) return;
    // 80CC9D70: bl      0x8045F7C8
    {
            ctx->lr = 0x80CC9D74u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CC9D74:
    ctx->pc = 0x80CC9D74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9D74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC9D74: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC9D78:
    ctx->pc = 0x80CC9D78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9D78u)) return;
    // 80CC9D78: bl      0x8045F220
    {
            ctx->lr = 0x80CC9D7Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CC9D7C:
    ctx->pc = 0x80CC9D7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9D7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80CC9D7C: lis     r4, -27377
    ctx->gpr[4] = ((u32)(s32)(-27377) << 16);

label_80CC9D80:
    ctx->pc = 0x80CC9D80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9D80u)) return;
    // 80CC9D80: addi    r4, r4, 9784
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9784);

label_80CC9D84:
    ctx->pc = 0x80CC9D84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9D84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80CC9D84: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CC9D84u)) return;
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
label_80CC9D88:
    ctx->pc = 0x80CC9D88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9D88u)) return;
    // 80CC9D88: lis     r4, -27377
    ctx->gpr[4] = ((u32)(s32)(-27377) << 16);

label_80CC9D8C:
    ctx->pc = 0x80CC9D8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9D8Cu)) return;
    // 80CC9D8C: addi    r4, r4, 9788
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9788);

label_80CC9D90:
    ctx->pc = 0x80CC9D90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9D90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CC9D90: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CC9D90u)) return;
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
label_80CC9D94:
    ctx->pc = 0x80CC9D94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9D94u)) return;
    // 80CC9D94: lis     r4, -27377
    ctx->gpr[4] = ((u32)(s32)(-27377) << 16);

label_80CC9D98:
    ctx->pc = 0x80CC9D98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9D98u)) return;
    // 80CC9D98: addi    r4, r4, 9792
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9792);

label_80CC9D9C:
    ctx->pc = 0x80CC9D9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9D9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC9D9C: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CC9D9Cu)) return;
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
label_80CC9DA0:
    ctx->pc = 0x80CC9DA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9DA0u)) return;
    // 80CC9DA0: lis     r4, -27377
    ctx->gpr[4] = ((u32)(s32)(-27377) << 16);

label_80CC9DA4:
    ctx->pc = 0x80CC9DA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9DA4u)) return;
    // 80CC9DA4: addi    r4, r4, 9796
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9796);

label_80CC9DA8:
    ctx->pc = 0x80CC9DA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9DA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC9DA8: lfs     f4, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CC9DA8u)) return;
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
label_80CC9DAC:
    ctx->pc = 0x80CC9DACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9DACu)) return;
    // 80CC9DAC: lis     r4, -27377
    ctx->gpr[4] = ((u32)(s32)(-27377) << 16);

label_80CC9DB0:
    ctx->pc = 0x80CC9DB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9DB0u)) return;
    // 80CC9DB0: addi    r4, r4, 9776
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9776);

label_80CC9DB4:
    ctx->pc = 0x80CC9DB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9DB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CC9DB4: lfs     f5, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CC9DB4u)) return;
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
label_80CC9DB8:
    ctx->pc = 0x80CC9DB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9DB8u)) return;
    // 80CC9DB8: bl      0x8045E570
    {
            ctx->lr = 0x80CC9DBCu;
            ctx->pc = 0x8045E570u;
            return;
    }

label_80CC9DBC:
    ctx->pc = 0x80CC9DBCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9DBCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC9DBC: li      r3, 90
    ctx->gpr[3] = (u32)(s32)(90);

label_80CC9DC0:
    ctx->pc = 0x80CC9DC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9DC0u)) return;
    // 80CC9DC0: bl      0x8045F7C8
    {
            ctx->lr = 0x80CC9DC4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CC9DC4:
    ctx->pc = 0x80CC9DC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9DC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CC9DC4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CC9DC8:
    ctx->pc = 0x80CC9DC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9DC8u)) return;
    // 80CC9DC8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CC9DCC:
    ctx->pc = 0x80CC9DCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9DCCu)) return;
    // 80CC9DCC: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CC9DD0:
    ctx->pc = 0x80CC9DD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9DD0u)) return;
    // 80CC9DD0: addi    r5, r5, 9800
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9800);

label_80CC9DD4:
    ctx->pc = 0x80CC9DD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9DD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC9DD4: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CC9DD4u)) return;
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
label_80CC9DD8:
    ctx->pc = 0x80CC9DD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9DD8u)) return;
    // 80CC9DD8: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CC9DDC:
    ctx->pc = 0x80CC9DDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9DDCu)) return;
    // 80CC9DDC: addi    r5, r5, 9804
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9804);

label_80CC9DE0:
    ctx->pc = 0x80CC9DE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9DE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC9DE0: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CC9DE0u)) return;
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
label_80CC9DE4:
    ctx->pc = 0x80CC9DE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9DE4u)) return;
    // 80CC9DE4: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CC9DE8:
    ctx->pc = 0x80CC9DE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9DE8u)) return;
    // 80CC9DE8: addi    r5, r5, 9808
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9808);

label_80CC9DEC:
    ctx->pc = 0x80CC9DECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9DECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CC9DEC: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CC9DECu)) return;
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
label_80CC9DF0:
    ctx->pc = 0x80CC9DF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9DF0u)) return;
    // 80CC9DF0: bl      0x8045C750
    {
            ctx->lr = 0x80CC9DF4u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80CC9DF4:
    ctx->pc = 0x80CC9DF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9DF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80CC9DF4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CC9DF8:
    ctx->pc = 0x80CC9DF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9DF8u)) return;
    // 80CC9DF8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CC9DFC:
    ctx->pc = 0x80CC9DFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9DFCu)) return;
    // 80CC9DFC: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80CC9E00:
    ctx->pc = 0x80CC9E00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9E00u)) return;
    // 80CC9E00: addi    r5, r5, -1024
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-1024);

label_80CC9E04:
    ctx->pc = 0x80CC9E04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9E04u)) return;
    // 80CC9E04: li      r6, 2780
    ctx->gpr[6] = (u32)(s32)(2780);

label_80CC9E08:
    ctx->pc = 0x80CC9E08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9E08u)) return;
    // 80CC9E08: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CC9E0C:
    ctx->pc = 0x80CC9E0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9E0Cu)) return;
    // 80CC9E0C: bl      0x8045C7B4
    {
            ctx->lr = 0x80CC9E10u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CC9E10:
    ctx->pc = 0x80CC9E10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9E10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CC9E10: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CC9E14:
    ctx->pc = 0x80CC9E14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9E14u)) return;
    // 80CC9E14: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_80CC9E18:
    ctx->pc = 0x80CC9E18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9E18u)) return;
    // 80CC9E18: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CC9E1C:
    ctx->pc = 0x80CC9E1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9E1Cu)) return;
    // 80CC9E1C: addi    r5, r5, 9812
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9812);

label_80CC9E20:
    ctx->pc = 0x80CC9E20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9E20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC9E20: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CC9E20u)) return;
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
label_80CC9E24:
    ctx->pc = 0x80CC9E24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9E24u)) return;
    // 80CC9E24: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CC9E28:
    ctx->pc = 0x80CC9E28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9E28u)) return;
    // 80CC9E28: addi    r5, r5, 9816
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9816);

label_80CC9E2C:
    ctx->pc = 0x80CC9E2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9E2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC9E2C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CC9E2Cu)) return;
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
label_80CC9E30:
    ctx->pc = 0x80CC9E30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9E30u)) return;
    // 80CC9E30: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CC9E34:
    ctx->pc = 0x80CC9E34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9E34u)) return;
    // 80CC9E34: addi    r5, r5, 9820
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9820);

label_80CC9E38:
    ctx->pc = 0x80CC9E38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9E38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CC9E38: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CC9E38u)) return;
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
label_80CC9E3C:
    ctx->pc = 0x80CC9E3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9E3Cu)) return;
    // 80CC9E3C: bl      0x8045C750
    {
            ctx->lr = 0x80CC9E40u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80CC9E40:
    ctx->pc = 0x80CC9E40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9E40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80CC9E40: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CC9E44:
    ctx->pc = 0x80CC9E44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9E44u)) return;
    // 80CC9E44: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_80CC9E48:
    ctx->pc = 0x80CC9E48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9E48u)) return;
    // 80CC9E48: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80CC9E4C:
    ctx->pc = 0x80CC9E4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9E4Cu)) return;
    // 80CC9E4C: addi    r5, r5, -1024
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-1024);

label_80CC9E50:
    ctx->pc = 0x80CC9E50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9E50u)) return;
    // 80CC9E50: li      r6, 2780
    ctx->gpr[6] = (u32)(s32)(2780);

label_80CC9E54:
    ctx->pc = 0x80CC9E54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9E54u)) return;
    // 80CC9E54: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CC9E58:
    ctx->pc = 0x80CC9E58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9E58u)) return;
    // 80CC9E58: bl      0x8045C7B4
    {
            ctx->lr = 0x80CC9E5Cu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CC9E5C:
    ctx->pc = 0x80CC9E5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9E5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC9E5C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CC9E60:
    ctx->pc = 0x80CC9E60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9E60u)) return;
    // 80CC9E60: bl      0x8045F220
    {
            ctx->lr = 0x80CC9E64u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CC9E64:
    ctx->pc = 0x80CC9E64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9E64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CC9E64: lis     r4, -27377
    ctx->gpr[4] = ((u32)(s32)(-27377) << 16);

label_80CC9E68:
    ctx->pc = 0x80CC9E68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9E68u)) return;
    // 80CC9E68: addi    r4, r4, 9824
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9824);

label_80CC9E6C:
    ctx->pc = 0x80CC9E6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9E6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC9E6C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CC9E6Cu)) return;
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
label_80CC9E70:
    ctx->pc = 0x80CC9E70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9E70u)) return;
    // 80CC9E70: lis     r4, -27377
    ctx->gpr[4] = ((u32)(s32)(-27377) << 16);

label_80CC9E74:
    ctx->pc = 0x80CC9E74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9E74u)) return;
    // 80CC9E74: addi    r4, r4, 9828
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9828);

label_80CC9E78:
    ctx->pc = 0x80CC9E78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9E78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC9E78: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CC9E78u)) return;
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
label_80CC9E7C:
    ctx->pc = 0x80CC9E7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9E7Cu)) return;
    // 80CC9E7C: lis     r4, -27377
    ctx->gpr[4] = ((u32)(s32)(-27377) << 16);

label_80CC9E80:
    ctx->pc = 0x80CC9E80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9E80u)) return;
    // 80CC9E80: addi    r4, r4, 9832
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9832);

label_80CC9E84:
    ctx->pc = 0x80CC9E84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9E84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CC9E84: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CC9E84u)) return;
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
label_80CC9E88:
    ctx->pc = 0x80CC9E88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9E88u)) return;
    // 80CC9E88: bl      0x8045EF2C
    {
            ctx->lr = 0x80CC9E8Cu;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80CC9E8C:
    ctx->pc = 0x80CC9E8Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9E8Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC9E8C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CC9E90:
    ctx->pc = 0x80CC9E90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9E90u)) return;
    // 80CC9E90: bl      0x8045F220
    {
            ctx->lr = 0x80CC9E94u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CC9E94:
    ctx->pc = 0x80CC9E94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9E94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80CC9E94: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CC9E98:
    ctx->pc = 0x80CC9E98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9E98u)) return;
    // 80CC9E98: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80CC9E9C:
    ctx->pc = 0x80CC9E9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9E9Cu)) return;
    // 80CC9E9C: addi    r5, r5, -32680
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-32680);

label_80CC9EA0:
    ctx->pc = 0x80CC9EA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9EA0u)) return;
    // 80CC9EA0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80CC9EA4:
    ctx->pc = 0x80CC9EA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9EA4u)) return;
    // 80CC9EA4: bl      0x8045EEA8
    {
            ctx->lr = 0x80CC9EA8u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80CC9EA8:
    ctx->pc = 0x80CC9EA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9EA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC9EA8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CC9EAC:
    ctx->pc = 0x80CC9EACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9EACu)) return;
    // 80CC9EAC: bl      0x8045F7C8
    {
            ctx->lr = 0x80CC9EB0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CC9EB0:
    ctx->pc = 0x80CC9EB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9EB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC9EB0: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CC9EB4:
    ctx->pc = 0x80CC9EB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9EB4u)) return;
    // 80CC9EB4: bl      0x8045F220
    {
            ctx->lr = 0x80CC9EB8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CC9EB8:
    ctx->pc = 0x80CC9EB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9EB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CC9EB8: bl      0x8045EB8C
    {
            ctx->lr = 0x80CC9EBCu;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80CC9EBC:
    ctx->pc = 0x80CC9EBCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9EBCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC9EBC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CC9EC0:
    ctx->pc = 0x80CC9EC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9EC0u)) return;
    // 80CC9EC0: bl      0x8045F220
    {
            ctx->lr = 0x80CC9EC4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CC9EC4:
    ctx->pc = 0x80CC9EC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9EC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CC9EC4: bl      0x8045EB8C
    {
            ctx->lr = 0x80CC9EC8u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80CC9EC8:
    ctx->pc = 0x80CC9EC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9EC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC9EC8: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CC9ECC:
    ctx->pc = 0x80CC9ECCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9ECCu)) return;
    // 80CC9ECC: bl      0x8045F220
    {
            ctx->lr = 0x80CC9ED0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CC9ED0:
    ctx->pc = 0x80CC9ED0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9ED0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CC9ED0: lis     r4, -27861
    ctx->gpr[4] = ((u32)(s32)(-27861) << 16);

label_80CC9ED4:
    ctx->pc = 0x80CC9ED4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9ED4u)) return;
    // 80CC9ED4: addi    r4, r4, -19168
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-19168);

label_80CC9ED8:
    ctx->pc = 0x80CC9ED8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9ED8u)) return;
    // 80CC9ED8: lis     r5, -27864
    ctx->gpr[5] = ((u32)(s32)(-27864) << 16);

label_80CC9EDC:
    ctx->pc = 0x80CC9EDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9EDCu)) return;
    // 80CC9EDC: addi    r5, r5, -24080
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24080);

label_80CC9EE0:
    ctx->pc = 0x80CC9EE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9EE0u)) return;
    // 80CC9EE0: lis     r6, -27377
    ctx->gpr[6] = ((u32)(s32)(-27377) << 16);

label_80CC9EE4:
    ctx->pc = 0x80CC9EE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9EE4u)) return;
    // 80CC9EE4: addi    r6, r6, 9836
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(9836);

label_80CC9EE8:
    ctx->pc = 0x80CC9EE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9EE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CC9EE8: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80CC9EE8u)) return;
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
label_80CC9EEC:
    ctx->pc = 0x80CC9EECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9EECu)) return;
    // 80CC9EEC: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80CC9EF0:
    ctx->pc = 0x80CC9EF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9EF0u)) return;
    // 80CC9EF0: li      r7, 4
    ctx->gpr[7] = (u32)(s32)(4);

label_80CC9EF4:
    ctx->pc = 0x80CC9EF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9EF4u)) return;
    // 80CC9EF4: bl      0x8045EBE4
    {
            ctx->lr = 0x80CC9EF8u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80CC9EF8:
    ctx->pc = 0x80CC9EF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9EF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC9EF8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CC9EFC:
    ctx->pc = 0x80CC9EFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9EFCu)) return;
    // 80CC9EFC: bl      0x8045F7C8
    {
            ctx->lr = 0x80CC9F00u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CC9F00:
    ctx->pc = 0x80CC9F00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9F00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC9F00: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CC9F04:
    ctx->pc = 0x80CC9F04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9F04u)) return;
    // 80CC9F04: bl      0x8045F220
    {
            ctx->lr = 0x80CC9F08u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CC9F08:
    ctx->pc = 0x80CC9F08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9F08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80CC9F08: lis     r4, -27377
    ctx->gpr[4] = ((u32)(s32)(-27377) << 16);

label_80CC9F0C:
    ctx->pc = 0x80CC9F0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9F0Cu)) return;
    // 80CC9F0C: addi    r4, r4, 9840
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9840);

label_80CC9F10:
    ctx->pc = 0x80CC9F10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9F10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80CC9F10: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CC9F10u)) return;
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
label_80CC9F14:
    ctx->pc = 0x80CC9F14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9F14u)) return;
    // 80CC9F14: lis     r4, -27377
    ctx->gpr[4] = ((u32)(s32)(-27377) << 16);

label_80CC9F18:
    ctx->pc = 0x80CC9F18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9F18u)) return;
    // 80CC9F18: addi    r4, r4, 9828
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9828);

label_80CC9F1C:
    ctx->pc = 0x80CC9F1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9F1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CC9F1C: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CC9F1Cu)) return;
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
label_80CC9F20:
    ctx->pc = 0x80CC9F20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9F20u)) return;
    // 80CC9F20: lis     r4, -27377
    ctx->gpr[4] = ((u32)(s32)(-27377) << 16);

label_80CC9F24:
    ctx->pc = 0x80CC9F24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9F24u)) return;
    // 80CC9F24: addi    r4, r4, 9844
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9844);

label_80CC9F28:
    ctx->pc = 0x80CC9F28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9F28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CC9F28: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CC9F28u)) return;
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
label_80CC9F2C:
    ctx->pc = 0x80CC9F2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9F2Cu)) return;
    // 80CC9F2C: lis     r4, -27377
    ctx->gpr[4] = ((u32)(s32)(-27377) << 16);

label_80CC9F30:
    ctx->pc = 0x80CC9F30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9F30u)) return;
    // 80CC9F30: addi    r4, r4, 9772
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9772);

label_80CC9F34:
    ctx->pc = 0x80CC9F34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9F34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CC9F34: lfs     f4, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CC9F34u)) return;
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
label_80CC9F38:
    ctx->pc = 0x80CC9F38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9F38u)) return;
    // 80CC9F38: lis     r4, -27377
    ctx->gpr[4] = ((u32)(s32)(-27377) << 16);

label_80CC9F3C:
    ctx->pc = 0x80CC9F3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9F3Cu)) return;
    // 80CC9F3C: addi    r4, r4, 9776
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9776);

label_80CC9F40:
    ctx->pc = 0x80CC9F40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9F40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CC9F40: lfs     f5, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CC9F40u)) return;
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
label_80CC9F44:
    ctx->pc = 0x80CC9F44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9F44u)) return;
    // 80CC9F44: bl      0x8045E570
    {
            ctx->lr = 0x80CC9F48u;
            ctx->pc = 0x8045E570u;
            return;
    }

label_80CC9F48:
    ctx->pc = 0x80CC9F48u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9F48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC9F48: li      r3, 50
    ctx->gpr[3] = (u32)(s32)(50);

label_80CC9F4C:
    ctx->pc = 0x80CC9F4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9F4Cu)) return;
    // 80CC9F4C: bl      0x8045F7C8
    {
            ctx->lr = 0x80CC9F50u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CC9F50:
    ctx->pc = 0x80CC9F50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9F50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC9F50: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CC9F54:
    ctx->pc = 0x80CC9F54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9F54u)) return;
    // 80CC9F54: bl      0x8045F220
    {
            ctx->lr = 0x80CC9F58u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CC9F58:
    ctx->pc = 0x80CC9F58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9F58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CC9F58: lis     r4, -27862
    ctx->gpr[4] = ((u32)(s32)(-27862) << 16);

label_80CC9F5C:
    ctx->pc = 0x80CC9F5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9F5Cu)) return;
    // 80CC9F5C: addi    r4, r4, 28732
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(28732);

label_80CC9F60:
    ctx->pc = 0x80CC9F60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9F60u)) return;
    // 80CC9F60: lis     r5, -27864
    ctx->gpr[5] = ((u32)(s32)(-27864) << 16);

label_80CC9F64:
    ctx->pc = 0x80CC9F64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9F64u)) return;
    // 80CC9F64: addi    r5, r5, -24080
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24080);

label_80CC9F68:
    ctx->pc = 0x80CC9F68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9F68u)) return;
    // 80CC9F68: lis     r6, -27377
    ctx->gpr[6] = ((u32)(s32)(-27377) << 16);

label_80CC9F6C:
    ctx->pc = 0x80CC9F6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9F6Cu)) return;
    // 80CC9F6C: addi    r6, r6, 9704
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(9704);

label_80CC9F70:
    ctx->pc = 0x80CC9F70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9F70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CC9F70: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80CC9F70u)) return;
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
label_80CC9F74:
    ctx->pc = 0x80CC9F74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9F74u)) return;
    // 80CC9F74: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80CC9F78:
    ctx->pc = 0x80CC9F78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9F78u)) return;
    // 80CC9F78: li      r7, 4
    ctx->gpr[7] = (u32)(s32)(4);

label_80CC9F7C:
    ctx->pc = 0x80CC9F7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9F7Cu)) return;
    // 80CC9F7C: bl      0x8045EBE4
    {
            ctx->lr = 0x80CC9F80u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80CC9F80:
    ctx->pc = 0x80CC9F80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9F80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC9F80: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CC9F84:
    ctx->pc = 0x80CC9F84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9F84u)) return;
    // 80CC9F84: bl      0x8045F220
    {
            ctx->lr = 0x80CC9F88u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CC9F88:
    ctx->pc = 0x80CC9F88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9F88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CC9F88: bl      0x8045E4DC
    {
            ctx->lr = 0x80CC9F8Cu;
            ctx->pc = 0x8045E4DCu;
            return;
    }

label_80CC9F8C:
    ctx->pc = 0x80CC9F8Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9F8Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC9F8C: li      r3, 1356
    ctx->gpr[3] = (u32)(s32)(1356);

label_80CC9F90:
    ctx->pc = 0x80CC9F90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9F90u)) return;
    // 80CC9F90: bl      0x8045BFA0
    {
            ctx->lr = 0x80CC9F94u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80CC9F94:
    ctx->pc = 0x80CC9F94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9F94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CC9F94: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CC9F98:
    ctx->pc = 0x80CC9F98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9F98u)) return;
    // 80CC9F98: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80CC9F9C:
    ctx->pc = 0x80CC9F9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9F9Cu)) return;
    // 80CC9F9C: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80CC9FA0:
    ctx->pc = 0x80CC9FA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9FA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CC9FA0: lwz     r0, 0(r4)
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
label_80CC9FA4:
    ctx->pc = 0x80CC9FA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9FA4u)) return;
    // 80CC9FA4: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80CC9FA8:
    ctx->pc = 0x80CC9FA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9FA8u)) return;
    // 80CC9FA8: lis     r4, -27377
    ctx->gpr[4] = ((u32)(s32)(-27377) << 16);

label_80CC9FAC:
    ctx->pc = 0x80CC9FACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9FACu)) return;
    // 80CC9FAC: addi    r4, r4, 11824
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(11824);

label_80CC9FB0:
    ctx->pc = 0x80CC9FB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9FB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CC9FB0: lwzx    r4, r4, r0
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
label_80CC9FB4:
    ctx->pc = 0x80CC9FB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9FB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CC9FB4: lwz     r4, 16(r4)
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
label_80CC9FB8:
    ctx->pc = 0x80CC9FB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9FB8u)) return;
    // 80CC9FB8: bl      0x8045F608
    {
            ctx->lr = 0x80CC9FBCu;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80CC9FBC:
    ctx->pc = 0x80CC9FBCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9FBCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC9FBC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CC9FC0:
    ctx->pc = 0x80CC9FC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9FC0u)) return;
    // 80CC9FC0: bl      0x8045F220
    {
            ctx->lr = 0x80CC9FC4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CC9FC4:
    ctx->pc = 0x80CC9FC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9FC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CC9FC4: lis     r4, -27861
    ctx->gpr[4] = ((u32)(s32)(-27861) << 16);

label_80CC9FC8:
    ctx->pc = 0x80CC9FC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9FC8u)) return;
    // 80CC9FC8: addi    r4, r4, -19168
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-19168);

label_80CC9FCC:
    ctx->pc = 0x80CC9FCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9FCCu)) return;
    // 80CC9FCC: lis     r5, -27864
    ctx->gpr[5] = ((u32)(s32)(-27864) << 16);

label_80CC9FD0:
    ctx->pc = 0x80CC9FD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9FD0u)) return;
    // 80CC9FD0: addi    r5, r5, -24080
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24080);

label_80CC9FD4:
    ctx->pc = 0x80CC9FD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9FD4u)) return;
    // 80CC9FD4: lis     r6, -27377
    ctx->gpr[6] = ((u32)(s32)(-27377) << 16);

label_80CC9FD8:
    ctx->pc = 0x80CC9FD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9FD8u)) return;
    // 80CC9FD8: addi    r6, r6, 9848
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(9848);

label_80CC9FDC:
    ctx->pc = 0x80CC9FDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9FDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CC9FDC: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80CC9FDCu)) return;
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
label_80CC9FE0:
    ctx->pc = 0x80CC9FE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9FE0u)) return;
    // 80CC9FE0: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80CC9FE4:
    ctx->pc = 0x80CC9FE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9FE4u)) return;
    // 80CC9FE4: li      r7, 4
    ctx->gpr[7] = (u32)(s32)(4);

label_80CC9FE8:
    ctx->pc = 0x80CC9FE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9FE8u)) return;
    // 80CC9FE8: bl      0x8045EBE4
    {
            ctx->lr = 0x80CC9FECu;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80CC9FEC:
    ctx->pc = 0x80CC9FECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9FECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC9FEC: li      r3, 70
    ctx->gpr[3] = (u32)(s32)(70);

label_80CC9FF0:
    ctx->pc = 0x80CC9FF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9FF0u)) return;
    // 80CC9FF0: bl      0x8045F7C8
    {
            ctx->lr = 0x80CC9FF4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CC9FF4:
    ctx->pc = 0x80CC9FF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9FF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CC9FF4: bl      0x8045F32C
    {
            ctx->lr = 0x80CC9FF8u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80CC9FF8:
    ctx->pc = 0x80CC9FF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CC9FF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CC9FF8: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CC9FFC:
    ctx->pc = 0x80CC9FFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CC9FFCu)) return;
    // 80CC9FFC: bl      0x8045F220
    {
            ctx->lr = 0x80CCA000u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CCA000:
    ctx->pc = 0x80CCA000u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA000u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80CCA000: lis     r4, -27377
    ctx->gpr[4] = ((u32)(s32)(-27377) << 16);

label_80CCA004:
    ctx->pc = 0x80CCA004u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA004u)) return;
    // 80CCA004: addi    r4, r4, 9852
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9852);

label_80CCA008:
    ctx->pc = 0x80CCA008u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA008u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80CCA008: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CCA008u)) return;
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
label_80CCA00C:
    ctx->pc = 0x80CCA00Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA00Cu)) return;
    // 80CCA00C: lis     r4, -27377
    ctx->gpr[4] = ((u32)(s32)(-27377) << 16);

label_80CCA010:
    ctx->pc = 0x80CCA010u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA010u)) return;
    // 80CCA010: addi    r4, r4, 9828
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9828);

label_80CCA014:
    ctx->pc = 0x80CCA014u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA014u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CCA014: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CCA014u)) return;
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
label_80CCA018:
    ctx->pc = 0x80CCA018u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA018u)) return;
    // 80CCA018: lis     r4, -27377
    ctx->gpr[4] = ((u32)(s32)(-27377) << 16);

label_80CCA01C:
    ctx->pc = 0x80CCA01Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA01Cu)) return;
    // 80CCA01C: addi    r4, r4, 9856
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9856);

label_80CCA020:
    ctx->pc = 0x80CCA020u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA020u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCA020: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CCA020u)) return;
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
label_80CCA024:
    ctx->pc = 0x80CCA024u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA024u)) return;
    // 80CCA024: lis     r4, -27377
    ctx->gpr[4] = ((u32)(s32)(-27377) << 16);

label_80CCA028:
    ctx->pc = 0x80CCA028u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA028u)) return;
    // 80CCA028: addi    r4, r4, 9704
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9704);

label_80CCA02C:
    ctx->pc = 0x80CCA02Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA02Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCA02C: lfs     f4, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CCA02Cu)) return;
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
label_80CCA030:
    ctx->pc = 0x80CCA030u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA030u)) return;
    // 80CCA030: lis     r4, -27377
    ctx->gpr[4] = ((u32)(s32)(-27377) << 16);

label_80CCA034:
    ctx->pc = 0x80CCA034u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA034u)) return;
    // 80CCA034: addi    r4, r4, 9776
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9776);

label_80CCA038:
    ctx->pc = 0x80CCA038u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA038u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCA038: lfs     f5, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CCA038u)) return;
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
label_80CCA03C:
    ctx->pc = 0x80CCA03Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA03Cu)) return;
    // 80CCA03C: bl      0x8045E570
    {
            ctx->lr = 0x80CCA040u;
            ctx->pc = 0x8045E570u;
            return;
    }

label_80CCA040:
    ctx->pc = 0x80CCA040u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA040u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCA040: li      r3, 40
    ctx->gpr[3] = (u32)(s32)(40);

label_80CCA044:
    ctx->pc = 0x80CCA044u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA044u)) return;
    // 80CCA044: bl      0x8045F7C8
    {
            ctx->lr = 0x80CCA048u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CCA048:
    ctx->pc = 0x80CCA048u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA048u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCA048: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCA04C:
    ctx->pc = 0x80CCA04Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA04Cu)) return;
    // 80CCA04C: bl      0x8045F220
    {
            ctx->lr = 0x80CCA050u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CCA050:
    ctx->pc = 0x80CCA050u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA050u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CCA050: lis     r4, -28596
    ctx->gpr[4] = ((u32)(s32)(-28596) << 16);

label_80CCA054:
    ctx->pc = 0x80CCA054u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA054u)) return;
    // 80CCA054: addi    r4, r4, 31184
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(31184);

label_80CCA058:
    ctx->pc = 0x80CCA058u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA058u)) return;
    // 80CCA058: lis     r5, -28598
    ctx->gpr[5] = ((u32)(s32)(-28598) << 16);

label_80CCA05C:
    ctx->pc = 0x80CCA05Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA05Cu)) return;
    // 80CCA05C: addi    r5, r5, 24904
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(24904);

label_80CCA060:
    ctx->pc = 0x80CCA060u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA060u)) return;
    // 80CCA060: lis     r6, -27377
    ctx->gpr[6] = ((u32)(s32)(-27377) << 16);

label_80CCA064:
    ctx->pc = 0x80CCA064u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA064u)) return;
    // 80CCA064: addi    r6, r6, 9688
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(9688);

label_80CCA068:
    ctx->pc = 0x80CCA068u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA068u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CCA068: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80CCA068u)) return;
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
label_80CCA06C:
    ctx->pc = 0x80CCA06Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA06Cu)) return;
    // 80CCA06C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80CCA070:
    ctx->pc = 0x80CCA070u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA070u)) return;
    // 80CCA070: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CCA074:
    ctx->pc = 0x80CCA074u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA074u)) return;
    // 80CCA074: bl      0x8045EBE4
    {
            ctx->lr = 0x80CCA078u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80CCA078:
    ctx->pc = 0x80CCA078u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA078u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCA078: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCA07C:
    ctx->pc = 0x80CCA07Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA07Cu)) return;
    // 80CCA07C: bl      0x8045F220
    {
            ctx->lr = 0x80CCA080u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CCA080:
    ctx->pc = 0x80CCA080u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA080u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CCA080: lis     r4, -27377
    ctx->gpr[4] = ((u32)(s32)(-27377) << 16);

label_80CCA084:
    ctx->pc = 0x80CCA084u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA084u)) return;
    // 80CCA084: addi    r4, r4, 9860
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9860);

label_80CCA088:
    ctx->pc = 0x80CCA088u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA088u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCA088: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CCA088u)) return;
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
label_80CCA08C:
    ctx->pc = 0x80CCA08Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA08Cu)) return;
    // 80CCA08C: lis     r4, -27377
    ctx->gpr[4] = ((u32)(s32)(-27377) << 16);

label_80CCA090:
    ctx->pc = 0x80CCA090u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA090u)) return;
    // 80CCA090: addi    r4, r4, 9828
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9828);

label_80CCA094:
    ctx->pc = 0x80CCA094u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA094u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCA094: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CCA094u)) return;
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
label_80CCA098:
    ctx->pc = 0x80CCA098u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA098u)) return;
    // 80CCA098: lis     r4, -27377
    ctx->gpr[4] = ((u32)(s32)(-27377) << 16);

label_80CCA09C:
    ctx->pc = 0x80CCA09Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA09Cu)) return;
    // 80CCA09C: addi    r4, r4, 9864
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9864);

label_80CCA0A0:
    ctx->pc = 0x80CCA0A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA0A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCA0A0: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CCA0A0u)) return;
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
label_80CCA0A4:
    ctx->pc = 0x80CCA0A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA0A4u)) return;
    // 80CCA0A4: bl      0x8045EF2C
    {
            ctx->lr = 0x80CCA0A8u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80CCA0A8:
    ctx->pc = 0x80CCA0A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA0A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCA0A8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCA0AC:
    ctx->pc = 0x80CCA0ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA0ACu)) return;
    // 80CCA0AC: bl      0x8045F220
    {
            ctx->lr = 0x80CCA0B0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CCA0B0:
    ctx->pc = 0x80CCA0B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA0B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80CCA0B0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CCA0B4:
    ctx->pc = 0x80CCA0B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA0B4u)) return;
    // 80CCA0B4: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80CCA0B8:
    ctx->pc = 0x80CCA0B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA0B8u)) return;
    // 80CCA0B8: addi    r5, r5, -30077
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-30077);

label_80CCA0BC:
    ctx->pc = 0x80CCA0BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA0BCu)) return;
    // 80CCA0BC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80CCA0C0:
    ctx->pc = 0x80CCA0C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA0C0u)) return;
    // 80CCA0C0: bl      0x8045EEA8
    {
            ctx->lr = 0x80CCA0C4u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80CCA0C4:
    ctx->pc = 0x80CCA0C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA0C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCA0C4: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80CCA0C8:
    ctx->pc = 0x80CCA0C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA0C8u)) return;
    // 80CCA0C8: bl      0x8045F7C8
    {
            ctx->lr = 0x80CCA0CCu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CCA0CC:
    ctx->pc = 0x80CCA0CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA0CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCA0CC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CCA0D0:
    ctx->pc = 0x80CCA0D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA0D0u)) return;
    // 80CCA0D0: bl      0x8045F220
    {
            ctx->lr = 0x80CCA0D4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CCA0D4:
    ctx->pc = 0x80CCA0D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA0D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CCA0D4: lis     r4, -27376
    ctx->gpr[4] = ((u32)(s32)(-27376) << 16);

label_80CCA0D8:
    ctx->pc = 0x80CCA0D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA0D8u)) return;
    // 80CCA0D8: addi    r4, r4, 21152
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(21152);

label_80CCA0DC:
    ctx->pc = 0x80CCA0DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA0DCu)) return;
    // 80CCA0DC: lis     r5, -27864
    ctx->gpr[5] = ((u32)(s32)(-27864) << 16);

label_80CCA0E0:
    ctx->pc = 0x80CCA0E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA0E0u)) return;
    // 80CCA0E0: addi    r5, r5, -24080
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24080);

label_80CCA0E4:
    ctx->pc = 0x80CCA0E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA0E4u)) return;
    // 80CCA0E4: lis     r6, -27377
    ctx->gpr[6] = ((u32)(s32)(-27377) << 16);

label_80CCA0E8:
    ctx->pc = 0x80CCA0E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA0E8u)) return;
    // 80CCA0E8: addi    r6, r6, 9596
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(9596);

label_80CCA0EC:
    ctx->pc = 0x80CCA0ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA0ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CCA0EC: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80CCA0ECu)) return;
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
label_80CCA0F0:
    ctx->pc = 0x80CCA0F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA0F0u)) return;
    // 80CCA0F0: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80CCA0F4:
    ctx->pc = 0x80CCA0F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA0F4u)) return;
    // 80CCA0F4: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_80CCA0F8:
    ctx->pc = 0x80CCA0F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA0F8u)) return;
    // 80CCA0F8: bl      0x8045EBE4
    {
            ctx->lr = 0x80CCA0FCu;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80CCA0FC:
    ctx->pc = 0x80CCA0FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA0FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCA0FC: li      r3, 20
    ctx->gpr[3] = (u32)(s32)(20);

label_80CCA100:
    ctx->pc = 0x80CCA100u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA100u)) return;
    // 80CCA100: bl      0x8045F7C8
    {
            ctx->lr = 0x80CCA104u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CCA104:
    ctx->pc = 0x80CCA104u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA104u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCA104: li      r3, 1357
    ctx->gpr[3] = (u32)(s32)(1357);

label_80CCA108:
    ctx->pc = 0x80CCA108u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA108u)) return;
    // 80CCA108: bl      0x8045BFA0
    {
            ctx->lr = 0x80CCA10Cu;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80CCA10C:
    ctx->pc = 0x80CCA10Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA10Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CCA10C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CCA110:
    ctx->pc = 0x80CCA110u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA110u)) return;
    // 80CCA110: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80CCA114:
    ctx->pc = 0x80CCA114u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA114u)) return;
    // 80CCA114: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80CCA118:
    ctx->pc = 0x80CCA118u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA118u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCA118: lwz     r0, 0(r4)
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
label_80CCA11C:
    ctx->pc = 0x80CCA11Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA11Cu)) return;
    // 80CCA11C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80CCA120:
    ctx->pc = 0x80CCA120u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA120u)) return;
    // 80CCA120: lis     r4, -27377
    ctx->gpr[4] = ((u32)(s32)(-27377) << 16);

label_80CCA124:
    ctx->pc = 0x80CCA124u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA124u)) return;
    // 80CCA124: addi    r4, r4, 11824
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(11824);

label_80CCA128:
    ctx->pc = 0x80CCA128u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA128u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCA128: lwzx    r4, r4, r0
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
label_80CCA12C:
    ctx->pc = 0x80CCA12Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA12Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCA12C: lwz     r4, 20(r4)
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
label_80CCA130:
    ctx->pc = 0x80CCA130u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA130u)) return;
    // 80CCA130: bl      0x8045F608
    {
            ctx->lr = 0x80CCA134u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80CCA134:
    ctx->pc = 0x80CCA134u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA134u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCA134: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80CCA138:
    ctx->pc = 0x80CCA138u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA138u)) return;
    // 80CCA138: bl      0x8045F7C8
    {
            ctx->lr = 0x80CCA13Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CCA13C:
    ctx->pc = 0x80CCA13Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA13Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCA13C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CCA140:
    ctx->pc = 0x80CCA140u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA140u)) return;
    // 80CCA140: bl      0x8045F220
    {
            ctx->lr = 0x80CCA144u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CCA144:
    ctx->pc = 0x80CCA144u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA144u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CCA144: bl      0x8045E6B8
    {
            ctx->lr = 0x80CCA148u;
            ctx->pc = 0x8045E6B8u;
            return;
    }

label_80CCA148:
    ctx->pc = 0x80CCA148u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA148u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CCA148: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CCA14C:
    ctx->pc = 0x80CCA14Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA14Cu)) return;
    // 80CCA14C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CCA150:
    ctx->pc = 0x80CCA150u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA150u)) return;
    // 80CCA150: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CCA154:
    ctx->pc = 0x80CCA154u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA154u)) return;
    // 80CCA154: addi    r5, r5, 9868
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9868);

label_80CCA158:
    ctx->pc = 0x80CCA158u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA158u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCA158: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCA158u)) return;
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
label_80CCA15C:
    ctx->pc = 0x80CCA15Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA15Cu)) return;
    // 80CCA15C: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CCA160:
    ctx->pc = 0x80CCA160u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA160u)) return;
    // 80CCA160: addi    r5, r5, 9872
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9872);

label_80CCA164:
    ctx->pc = 0x80CCA164u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA164u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCA164: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCA164u)) return;
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
label_80CCA168:
    ctx->pc = 0x80CCA168u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA168u)) return;
    // 80CCA168: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CCA16C:
    ctx->pc = 0x80CCA16Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA16Cu)) return;
    // 80CCA16C: addi    r5, r5, 9876
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9876);

label_80CCA170:
    ctx->pc = 0x80CCA170u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA170u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCA170: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCA170u)) return;
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
label_80CCA174:
    ctx->pc = 0x80CCA174u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA174u)) return;
    // 80CCA174: bl      0x8045C750
    {
            ctx->lr = 0x80CCA178u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80CCA178:
    ctx->pc = 0x80CCA178u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA178u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80CCA178: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CCA17C:
    ctx->pc = 0x80CCA17Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA17Cu)) return;
    // 80CCA17C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CCA180:
    ctx->pc = 0x80CCA180u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA180u)) return;
    // 80CCA180: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80CCA184:
    ctx->pc = 0x80CCA184u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA184u)) return;
    // 80CCA184: addi    r5, r5, -3072
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3072);

label_80CCA188:
    ctx->pc = 0x80CCA188u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA188u)) return;
    // 80CCA188: li      r6, 27868
    ctx->gpr[6] = (u32)(s32)(27868);

label_80CCA18C:
    ctx->pc = 0x80CCA18Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA18Cu)) return;
    // 80CCA18C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CCA190:
    ctx->pc = 0x80CCA190u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA190u)) return;
    // 80CCA190: bl      0x8045C7B4
    {
            ctx->lr = 0x80CCA194u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CCA194:
    ctx->pc = 0x80CCA194u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA194u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CCA194: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CCA198:
    ctx->pc = 0x80CCA198u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA198u)) return;
    // 80CCA198: li      r4, 40
    ctx->gpr[4] = (u32)(s32)(40);

label_80CCA19C:
    ctx->pc = 0x80CCA19Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA19Cu)) return;
    // 80CCA19C: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CCA1A0:
    ctx->pc = 0x80CCA1A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA1A0u)) return;
    // 80CCA1A0: addi    r5, r5, 9600
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9600);

label_80CCA1A4:
    ctx->pc = 0x80CCA1A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA1A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCA1A4: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCA1A4u)) return;
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
label_80CCA1A8:
    ctx->pc = 0x80CCA1A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA1A8u)) return;
    // 80CCA1A8: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CCA1AC:
    ctx->pc = 0x80CCA1ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA1ACu)) return;
    // 80CCA1AC: addi    r5, r5, 9872
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9872);

label_80CCA1B0:
    ctx->pc = 0x80CCA1B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA1B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCA1B0: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCA1B0u)) return;
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
label_80CCA1B4:
    ctx->pc = 0x80CCA1B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA1B4u)) return;
    // 80CCA1B4: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CCA1B8:
    ctx->pc = 0x80CCA1B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA1B8u)) return;
    // 80CCA1B8: addi    r5, r5, 9880
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9880);

label_80CCA1BC:
    ctx->pc = 0x80CCA1BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA1BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCA1BC: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCA1BCu)) return;
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
label_80CCA1C0:
    ctx->pc = 0x80CCA1C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA1C0u)) return;
    // 80CCA1C0: bl      0x8045C750
    {
            ctx->lr = 0x80CCA1C4u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80CCA1C4:
    ctx->pc = 0x80CCA1C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA1C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80CCA1C4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CCA1C8:
    ctx->pc = 0x80CCA1C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA1C8u)) return;
    // 80CCA1C8: li      r4, 40
    ctx->gpr[4] = (u32)(s32)(40);

label_80CCA1CC:
    ctx->pc = 0x80CCA1CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA1CCu)) return;
    // 80CCA1CC: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80CCA1D0:
    ctx->pc = 0x80CCA1D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA1D0u)) return;
    // 80CCA1D0: addi    r5, r5, -3072
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3072);

label_80CCA1D4:
    ctx->pc = 0x80CCA1D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA1D4u)) return;
    // 80CCA1D4: li      r6, 27868
    ctx->gpr[6] = (u32)(s32)(27868);

label_80CCA1D8:
    ctx->pc = 0x80CCA1D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA1D8u)) return;
    // 80CCA1D8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CCA1DC:
    ctx->pc = 0x80CCA1DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA1DCu)) return;
    // 80CCA1DC: bl      0x8045C7B4
    {
            ctx->lr = 0x80CCA1E0u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CCA1E0:
    ctx->pc = 0x80CCA1E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA1E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCA1E0: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_80CCA1E4:
    ctx->pc = 0x80CCA1E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA1E4u)) return;
    // 80CCA1E4: bl      0x8045F7C8
    {
            ctx->lr = 0x80CCA1E8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CCA1E8:
    ctx->pc = 0x80CCA1E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA1E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCA1E8: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CCA1EC:
    ctx->pc = 0x80CCA1ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA1ECu)) return;
    // 80CCA1EC: bl      0x8045F220
    {
            ctx->lr = 0x80CCA1F0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CCA1F0:
    ctx->pc = 0x80CCA1F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA1F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CCA1F0: bl      0x8045C034
    {
            ctx->lr = 0x80CCA1F4u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80CCA1F4:
    ctx->pc = 0x80CCA1F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA1F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCA1F4: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CCA1F8:
    ctx->pc = 0x80CCA1F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA1F8u)) return;
    // 80CCA1F8: bl      0x8045F220
    {
            ctx->lr = 0x80CCA1FCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CCA1FC:
    ctx->pc = 0x80CCA1FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA1FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CCA1FC: lis     r4, -27377
    ctx->gpr[4] = ((u32)(s32)(-27377) << 16);

label_80CCA200:
    ctx->pc = 0x80CCA200u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA200u)) return;
    // 80CCA200: addi    r4, r4, 11912
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(11912);

label_80CCA204:
    ctx->pc = 0x80CCA204u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA204u)) return;
    // 80CCA204: bl      0x8045C060
    {
            ctx->lr = 0x80CCA208u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80CCA208:
    ctx->pc = 0x80CCA208u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA208u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCA208: li      r3, 1358
    ctx->gpr[3] = (u32)(s32)(1358);

label_80CCA20C:
    ctx->pc = 0x80CCA20Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA20Cu)) return;
    // 80CCA20C: bl      0x8045BFA0
    {
            ctx->lr = 0x80CCA210u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80CCA210:
    ctx->pc = 0x80CCA210u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA210u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CCA210: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CCA214:
    ctx->pc = 0x80CCA214u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA214u)) return;
    // 80CCA214: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80CCA218:
    ctx->pc = 0x80CCA218u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA218u)) return;
    // 80CCA218: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80CCA21C:
    ctx->pc = 0x80CCA21Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA21Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCA21C: lwz     r0, 0(r4)
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
label_80CCA220:
    ctx->pc = 0x80CCA220u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA220u)) return;
    // 80CCA220: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80CCA224:
    ctx->pc = 0x80CCA224u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA224u)) return;
    // 80CCA224: lis     r4, -27377
    ctx->gpr[4] = ((u32)(s32)(-27377) << 16);

label_80CCA228:
    ctx->pc = 0x80CCA228u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA228u)) return;
    // 80CCA228: addi    r4, r4, 11824
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(11824);

label_80CCA22C:
    ctx->pc = 0x80CCA22Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA22Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCA22C: lwzx    r4, r4, r0
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
label_80CCA230:
    ctx->pc = 0x80CCA230u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA230u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCA230: lwz     r4, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCA234:
    ctx->pc = 0x80CCA234u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA234u)) return;
    // 80CCA234: bl      0x8045F608
    {
            ctx->lr = 0x80CCA238u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80CCA238:
    ctx->pc = 0x80CCA238u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA238u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCA238: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80CCA23C:
    ctx->pc = 0x80CCA23Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA23Cu)) return;
    // 80CCA23C: bl      0x8045F7C8
    {
            ctx->lr = 0x80CCA240u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CCA240:
    ctx->pc = 0x80CCA240u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA240u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CCA240: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CCA244:
    ctx->pc = 0x80CCA244u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA244u)) return;
    // 80CCA244: li      r4, 300
    ctx->gpr[4] = (u32)(s32)(300);

label_80CCA248:
    ctx->pc = 0x80CCA248u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA248u)) return;
    // 80CCA248: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CCA24C:
    ctx->pc = 0x80CCA24Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA24Cu)) return;
    // 80CCA24C: addi    r5, r5, 9884
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9884);

label_80CCA250:
    ctx->pc = 0x80CCA250u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA250u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCA250: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCA250u)) return;
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
label_80CCA254:
    ctx->pc = 0x80CCA254u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA254u)) return;
    // 80CCA254: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CCA258:
    ctx->pc = 0x80CCA258u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA258u)) return;
    // 80CCA258: addi    r5, r5, 9872
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9872);

label_80CCA25C:
    ctx->pc = 0x80CCA25Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA25Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCA25C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCA25Cu)) return;
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
label_80CCA260:
    ctx->pc = 0x80CCA260u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA260u)) return;
    // 80CCA260: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CCA264:
    ctx->pc = 0x80CCA264u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA264u)) return;
    // 80CCA264: addi    r5, r5, 9888
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9888);

label_80CCA268:
    ctx->pc = 0x80CCA268u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA268u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCA268: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCA268u)) return;
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
label_80CCA26C:
    ctx->pc = 0x80CCA26Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA26Cu)) return;
    // 80CCA26C: bl      0x8045C750
    {
            ctx->lr = 0x80CCA270u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80CCA270:
    ctx->pc = 0x80CCA270u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA270u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80CCA270: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CCA274:
    ctx->pc = 0x80CCA274u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA274u)) return;
    // 80CCA274: li      r4, 300
    ctx->gpr[4] = (u32)(s32)(300);

label_80CCA278:
    ctx->pc = 0x80CCA278u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA278u)) return;
    // 80CCA278: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80CCA27C:
    ctx->pc = 0x80CCA27Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA27Cu)) return;
    // 80CCA27C: addi    r5, r5, -3072
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3072);

label_80CCA280:
    ctx->pc = 0x80CCA280u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA280u)) return;
    // 80CCA280: li      r6, 27868
    ctx->gpr[6] = (u32)(s32)(27868);

label_80CCA284:
    ctx->pc = 0x80CCA284u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA284u)) return;
    // 80CCA284: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CCA288:
    ctx->pc = 0x80CCA288u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA288u)) return;
    // 80CCA288: bl      0x8045C7B4
    {
            ctx->lr = 0x80CCA28Cu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CCA28C:
    ctx->pc = 0x80CCA28Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA28Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCA28C: li      r3, 50
    ctx->gpr[3] = (u32)(s32)(50);

label_80CCA290:
    ctx->pc = 0x80CCA290u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA290u)) return;
    // 80CCA290: bl      0x8045F7C8
    {
            ctx->lr = 0x80CCA294u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CCA294:
    ctx->pc = 0x80CCA294u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA294u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCA294: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CCA298:
    ctx->pc = 0x80CCA298u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA298u)) return;
    // 80CCA298: bl      0x8045F220
    {
            ctx->lr = 0x80CCA29Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CCA29C:
    ctx->pc = 0x80CCA29Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA29Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CCA29C: bl      0x8045C034
    {
            ctx->lr = 0x80CCA2A0u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80CCA2A0:
    ctx->pc = 0x80CCA2A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA2A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80CCA2A0: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80CCA2A4:
    ctx->pc = 0x80CCA2A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA2A4u)) return;
    // 80CCA2A4: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80CCA2A8:
    ctx->pc = 0x80CCA2A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA2A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCA2A8: lwz     r0, 0(r3)
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
label_80CCA2AC:
    ctx->pc = 0x80CCA2ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA2ACu)) return;
    // 80CCA2AC: cmpwi   r0, 0
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

label_80CCA2B0:
    ctx->pc = 0x80CCA2B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA2B0u)) return;
    // 80CCA2B0: bc    4, 2, 0x80CCA2C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CCA2C8;
        }
    }

label_80CCA2B4:
    ctx->pc = 0x80CCA2B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA2B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCA2B4: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CCA2B8:
    ctx->pc = 0x80CCA2B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA2B8u)) return;
    // 80CCA2B8: bl      0x8045F220
    {
            ctx->lr = 0x80CCA2BCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CCA2BC:
    ctx->pc = 0x80CCA2BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA2BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CCA2BC: lis     r4, -27377
    ctx->gpr[4] = ((u32)(s32)(-27377) << 16);

label_80CCA2C0:
    ctx->pc = 0x80CCA2C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA2C0u)) return;
    // 80CCA2C0: addi    r4, r4, 11920
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(11920);

label_80CCA2C4:
    ctx->pc = 0x80CCA2C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA2C4u)) return;
    // 80CCA2C4: bl      0x8045C060
    {
            ctx->lr = 0x80CCA2C8u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80CCA2C8:
    ctx->pc = 0x80CCA2C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA2C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80CCA2C8: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80CCA2CC:
    ctx->pc = 0x80CCA2CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA2CCu)) return;
    // 80CCA2CC: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80CCA2D0:
    ctx->pc = 0x80CCA2D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA2D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCA2D0: lwz     r0, 0(r3)
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
label_80CCA2D4:
    ctx->pc = 0x80CCA2D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA2D4u)) return;
    // 80CCA2D4: cmpwi   r0, 1
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

label_80CCA2D8:
    ctx->pc = 0x80CCA2D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA2D8u)) return;
    // 80CCA2D8: bc    4, 2, 0x80CCA2F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CCA2F0;
        }
    }

label_80CCA2DC:
    ctx->pc = 0x80CCA2DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA2DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCA2DC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CCA2E0:
    ctx->pc = 0x80CCA2E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA2E0u)) return;
    // 80CCA2E0: bl      0x8045F220
    {
            ctx->lr = 0x80CCA2E4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CCA2E4:
    ctx->pc = 0x80CCA2E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA2E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CCA2E4: lis     r4, -27377
    ctx->gpr[4] = ((u32)(s32)(-27377) << 16);

label_80CCA2E8:
    ctx->pc = 0x80CCA2E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA2E8u)) return;
    // 80CCA2E8: addi    r4, r4, 11928
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(11928);

label_80CCA2EC:
    ctx->pc = 0x80CCA2ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA2ECu)) return;
    // 80CCA2EC: bl      0x8045C060
    {
            ctx->lr = 0x80CCA2F0u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80CCA2F0:
    ctx->pc = 0x80CCA2F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA2F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCA2F0: li      r3, 1359
    ctx->gpr[3] = (u32)(s32)(1359);

label_80CCA2F4:
    ctx->pc = 0x80CCA2F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA2F4u)) return;
    // 80CCA2F4: bl      0x8045BFA0
    {
            ctx->lr = 0x80CCA2F8u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80CCA2F8:
    ctx->pc = 0x80CCA2F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA2F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CCA2F8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CCA2FC:
    ctx->pc = 0x80CCA2FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA2FCu)) return;
    // 80CCA2FC: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80CCA300:
    ctx->pc = 0x80CCA300u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA300u)) return;
    // 80CCA300: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80CCA304:
    ctx->pc = 0x80CCA304u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA304u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCA304: lwz     r0, 0(r4)
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
label_80CCA308:
    ctx->pc = 0x80CCA308u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA308u)) return;
    // 80CCA308: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80CCA30C:
    ctx->pc = 0x80CCA30Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA30Cu)) return;
    // 80CCA30C: lis     r4, -27377
    ctx->gpr[4] = ((u32)(s32)(-27377) << 16);

label_80CCA310:
    ctx->pc = 0x80CCA310u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA310u)) return;
    // 80CCA310: addi    r4, r4, 11824
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(11824);

label_80CCA314:
    ctx->pc = 0x80CCA314u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA314u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCA314: lwzx    r4, r4, r0
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
label_80CCA318:
    ctx->pc = 0x80CCA318u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA318u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCA318: lwz     r4, 28(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCA31C:
    ctx->pc = 0x80CCA31Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA31Cu)) return;
    // 80CCA31C: bl      0x8045F608
    {
            ctx->lr = 0x80CCA320u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80CCA320:
    ctx->pc = 0x80CCA320u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA320u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCA320: li      r3, 150
    ctx->gpr[3] = (u32)(s32)(150);

label_80CCA324:
    ctx->pc = 0x80CCA324u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA324u)) return;
    // 80CCA324: bl      0x8045F7C8
    {
            ctx->lr = 0x80CCA328u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CCA328:
    ctx->pc = 0x80CCA328u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA328u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CCA328: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CCA32C:
    ctx->pc = 0x80CCA32Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA32Cu)) return;
    // 80CCA32C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CCA330:
    ctx->pc = 0x80CCA330u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA330u)) return;
    // 80CCA330: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CCA334:
    ctx->pc = 0x80CCA334u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA334u)) return;
    // 80CCA334: addi    r5, r5, 9892
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9892);

label_80CCA338:
    ctx->pc = 0x80CCA338u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA338u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCA338: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCA338u)) return;
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
label_80CCA33C:
    ctx->pc = 0x80CCA33Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA33Cu)) return;
    // 80CCA33C: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CCA340:
    ctx->pc = 0x80CCA340u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA340u)) return;
    // 80CCA340: addi    r5, r5, 9896
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9896);

label_80CCA344:
    ctx->pc = 0x80CCA344u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA344u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCA344: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCA344u)) return;
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
label_80CCA348:
    ctx->pc = 0x80CCA348u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA348u)) return;
    // 80CCA348: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CCA34C:
    ctx->pc = 0x80CCA34Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA34Cu)) return;
    // 80CCA34C: addi    r5, r5, 9900
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9900);

label_80CCA350:
    ctx->pc = 0x80CCA350u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA350u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCA350: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCA350u)) return;
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
label_80CCA354:
    ctx->pc = 0x80CCA354u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA354u)) return;
    // 80CCA354: bl      0x8045C750
    {
            ctx->lr = 0x80CCA358u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80CCA358:
    ctx->pc = 0x80CCA358u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA358u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80CCA358: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CCA35C:
    ctx->pc = 0x80CCA35Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA35Cu)) return;
    // 80CCA35C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CCA360:
    ctx->pc = 0x80CCA360u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA360u)) return;
    // 80CCA360: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80CCA364:
    ctx->pc = 0x80CCA364u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA364u)) return;
    // 80CCA364: addi    r5, r6, -10240
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-10240);

label_80CCA368:
    ctx->pc = 0x80CCA368u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA368u)) return;
    // 80CCA368: addi    r6, r6, -8996
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-8996);

label_80CCA36C:
    ctx->pc = 0x80CCA36Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA36Cu)) return;
    // 80CCA36C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CCA370:
    ctx->pc = 0x80CCA370u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA370u)) return;
    // 80CCA370: bl      0x8045C7B4
    {
            ctx->lr = 0x80CCA374u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CCA374:
    ctx->pc = 0x80CCA374u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA374u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CCA374: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CCA378:
    ctx->pc = 0x80CCA378u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA378u)) return;
    // 80CCA378: li      r4, 150
    ctx->gpr[4] = (u32)(s32)(150);

label_80CCA37C:
    ctx->pc = 0x80CCA37Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA37Cu)) return;
    // 80CCA37C: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CCA380:
    ctx->pc = 0x80CCA380u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA380u)) return;
    // 80CCA380: addi    r5, r5, 9904
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9904);

label_80CCA384:
    ctx->pc = 0x80CCA384u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA384u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCA384: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCA384u)) return;
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
label_80CCA388:
    ctx->pc = 0x80CCA388u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA388u)) return;
    // 80CCA388: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CCA38C:
    ctx->pc = 0x80CCA38Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA38Cu)) return;
    // 80CCA38C: addi    r5, r5, 9896
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9896);

label_80CCA390:
    ctx->pc = 0x80CCA390u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA390u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCA390: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCA390u)) return;
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
label_80CCA394:
    ctx->pc = 0x80CCA394u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA394u)) return;
    // 80CCA394: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CCA398:
    ctx->pc = 0x80CCA398u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA398u)) return;
    // 80CCA398: addi    r5, r5, 9908
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9908);

label_80CCA39C:
    ctx->pc = 0x80CCA39Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA39Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCA39C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCA39Cu)) return;
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
label_80CCA3A0:
    ctx->pc = 0x80CCA3A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA3A0u)) return;
    // 80CCA3A0: bl      0x8045C750
    {
            ctx->lr = 0x80CCA3A4u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80CCA3A4:
    ctx->pc = 0x80CCA3A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA3A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80CCA3A4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CCA3A8:
    ctx->pc = 0x80CCA3A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA3A8u)) return;
    // 80CCA3A8: li      r4, 150
    ctx->gpr[4] = (u32)(s32)(150);

label_80CCA3AC:
    ctx->pc = 0x80CCA3ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA3ACu)) return;
    // 80CCA3AC: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80CCA3B0:
    ctx->pc = 0x80CCA3B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA3B0u)) return;
    // 80CCA3B0: addi    r5, r6, -10240
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-10240);

label_80CCA3B4:
    ctx->pc = 0x80CCA3B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA3B4u)) return;
    // 80CCA3B4: addi    r6, r6, -8996
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-8996);

label_80CCA3B8:
    ctx->pc = 0x80CCA3B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA3B8u)) return;
    // 80CCA3B8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CCA3BC:
    ctx->pc = 0x80CCA3BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA3BCu)) return;
    // 80CCA3BC: bl      0x8045C7B4
    {
            ctx->lr = 0x80CCA3C0u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CCA3C0:
    ctx->pc = 0x80CCA3C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA3C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCA3C0: li      r3, 1360
    ctx->gpr[3] = (u32)(s32)(1360);

label_80CCA3C4:
    ctx->pc = 0x80CCA3C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA3C4u)) return;
    // 80CCA3C4: bl      0x8045BFA0
    {
            ctx->lr = 0x80CCA3C8u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80CCA3C8:
    ctx->pc = 0x80CCA3C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA3C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCA3C8: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CCA3CC:
    ctx->pc = 0x80CCA3CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA3CCu)) return;
    // 80CCA3CC: bl      0x8045F220
    {
            ctx->lr = 0x80CCA3D0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CCA3D0:
    ctx->pc = 0x80CCA3D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA3D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CCA3D0: lis     r4, -27377
    ctx->gpr[4] = ((u32)(s32)(-27377) << 16);

label_80CCA3D4:
    ctx->pc = 0x80CCA3D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA3D4u)) return;
    // 80CCA3D4: addi    r4, r4, 11932
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(11932);

label_80CCA3D8:
    ctx->pc = 0x80CCA3D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA3D8u)) return;
    // 80CCA3D8: bl      0x8045C060
    {
            ctx->lr = 0x80CCA3DCu;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80CCA3DC:
    ctx->pc = 0x80CCA3DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA3DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CCA3DC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CCA3E0:
    ctx->pc = 0x80CCA3E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA3E0u)) return;
    // 80CCA3E0: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80CCA3E4:
    ctx->pc = 0x80CCA3E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA3E4u)) return;
    // 80CCA3E4: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80CCA3E8:
    ctx->pc = 0x80CCA3E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA3E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCA3E8: lwz     r0, 0(r4)
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
label_80CCA3EC:
    ctx->pc = 0x80CCA3ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA3ECu)) return;
    // 80CCA3EC: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80CCA3F0:
    ctx->pc = 0x80CCA3F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA3F0u)) return;
    // 80CCA3F0: lis     r4, -27377
    ctx->gpr[4] = ((u32)(s32)(-27377) << 16);

label_80CCA3F4:
    ctx->pc = 0x80CCA3F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA3F4u)) return;
    // 80CCA3F4: addi    r4, r4, 11824
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(11824);

label_80CCA3F8:
    ctx->pc = 0x80CCA3F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA3F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCA3F8: lwzx    r4, r4, r0
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
label_80CCA3FC:
    ctx->pc = 0x80CCA3FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA3FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCA3FC: lwz     r4, 32(r4)
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
label_80CCA400:
    ctx->pc = 0x80CCA400u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA400u)) return;
    // 80CCA400: bl      0x8045F608
    {
            ctx->lr = 0x80CCA404u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80CCA404:
    ctx->pc = 0x80CCA404u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA404u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCA404: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CCA408:
    ctx->pc = 0x80CCA408u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA408u)) return;
    // 80CCA408: bl      0x8045F220
    {
            ctx->lr = 0x80CCA40Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CCA40C:
    ctx->pc = 0x80CCA40Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA40Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CCA40C: lis     r4, -27376
    ctx->gpr[4] = ((u32)(s32)(-27376) << 16);

label_80CCA410:
    ctx->pc = 0x80CCA410u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA410u)) return;
    // 80CCA410: addi    r4, r4, 21152
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(21152);

label_80CCA414:
    ctx->pc = 0x80CCA414u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA414u)) return;
    // 80CCA414: lis     r5, -27864
    ctx->gpr[5] = ((u32)(s32)(-27864) << 16);

label_80CCA418:
    ctx->pc = 0x80CCA418u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA418u)) return;
    // 80CCA418: addi    r5, r5, -24080
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24080);

label_80CCA41C:
    ctx->pc = 0x80CCA41Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA41Cu)) return;
    // 80CCA41C: lis     r6, -27377
    ctx->gpr[6] = ((u32)(s32)(-27377) << 16);

label_80CCA420:
    ctx->pc = 0x80CCA420u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA420u)) return;
    // 80CCA420: addi    r6, r6, 9596
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(9596);

label_80CCA424:
    ctx->pc = 0x80CCA424u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA424u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CCA424: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80CCA424u)) return;
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
label_80CCA428:
    ctx->pc = 0x80CCA428u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA428u)) return;
    // 80CCA428: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80CCA42C:
    ctx->pc = 0x80CCA42Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA42Cu)) return;
    // 80CCA42C: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_80CCA430:
    ctx->pc = 0x80CCA430u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA430u)) return;
    // 80CCA430: bl      0x8045EBE4
    {
            ctx->lr = 0x80CCA434u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80CCA434:
    ctx->pc = 0x80CCA434u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA434u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCA434: li      r3, 80
    ctx->gpr[3] = (u32)(s32)(80);

label_80CCA438:
    ctx->pc = 0x80CCA438u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA438u)) return;
    // 80CCA438: bl      0x8045F7C8
    {
            ctx->lr = 0x80CCA43Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CCA43C:
    ctx->pc = 0x80CCA43Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA43Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CCA43C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CCA440:
    ctx->pc = 0x80CCA440u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA440u)) return;
    // 80CCA440: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CCA444:
    ctx->pc = 0x80CCA444u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA444u)) return;
    // 80CCA444: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CCA448:
    ctx->pc = 0x80CCA448u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA448u)) return;
    // 80CCA448: addi    r5, r5, 9912
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9912);

label_80CCA44C:
    ctx->pc = 0x80CCA44Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA44Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCA44C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCA44Cu)) return;
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
label_80CCA450:
    ctx->pc = 0x80CCA450u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA450u)) return;
    // 80CCA450: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CCA454:
    ctx->pc = 0x80CCA454u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA454u)) return;
    // 80CCA454: addi    r5, r5, 9916
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9916);

label_80CCA458:
    ctx->pc = 0x80CCA458u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA458u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCA458: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCA458u)) return;
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
label_80CCA45C:
    ctx->pc = 0x80CCA45Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA45Cu)) return;
    // 80CCA45C: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CCA460:
    ctx->pc = 0x80CCA460u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA460u)) return;
    // 80CCA460: addi    r5, r5, 9920
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9920);

label_80CCA464:
    ctx->pc = 0x80CCA464u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA464u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCA464: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCA464u)) return;
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
label_80CCA468:
    ctx->pc = 0x80CCA468u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA468u)) return;
    // 80CCA468: bl      0x8045C750
    {
            ctx->lr = 0x80CCA46Cu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80CCA46C:
    ctx->pc = 0x80CCA46Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA46Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80CCA46C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CCA470:
    ctx->pc = 0x80CCA470u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA470u)) return;
    // 80CCA470: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CCA474:
    ctx->pc = 0x80CCA474u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA474u)) return;
    // 80CCA474: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80CCA478:
    ctx->pc = 0x80CCA478u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA478u)) return;
    // 80CCA478: addi    r5, r6, -4863
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-4863);

label_80CCA47C:
    ctx->pc = 0x80CCA47Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA47Cu)) return;
    // 80CCA47C: addi    r6, r6, -14116
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-14116);

label_80CCA480:
    ctx->pc = 0x80CCA480u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA480u)) return;
    // 80CCA480: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CCA484:
    ctx->pc = 0x80CCA484u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA484u)) return;
    // 80CCA484: bl      0x8045C7B4
    {
            ctx->lr = 0x80CCA488u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CCA488:
    ctx->pc = 0x80CCA488u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA488u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CCA488: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CCA48C:
    ctx->pc = 0x80CCA48Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA48Cu)) return;
    // 80CCA48C: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_80CCA490:
    ctx->pc = 0x80CCA490u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA490u)) return;
    // 80CCA490: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CCA494:
    ctx->pc = 0x80CCA494u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA494u)) return;
    // 80CCA494: addi    r5, r5, 9924
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9924);

label_80CCA498:
    ctx->pc = 0x80CCA498u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA498u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCA498: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCA498u)) return;
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
label_80CCA49C:
    ctx->pc = 0x80CCA49Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA49Cu)) return;
    // 80CCA49C: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CCA4A0:
    ctx->pc = 0x80CCA4A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA4A0u)) return;
    // 80CCA4A0: addi    r5, r5, 9928
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9928);

label_80CCA4A4:
    ctx->pc = 0x80CCA4A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA4A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCA4A4: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCA4A4u)) return;
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
label_80CCA4A8:
    ctx->pc = 0x80CCA4A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA4A8u)) return;
    // 80CCA4A8: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CCA4AC:
    ctx->pc = 0x80CCA4ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA4ACu)) return;
    // 80CCA4AC: addi    r5, r5, 9932
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9932);

label_80CCA4B0:
    ctx->pc = 0x80CCA4B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA4B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCA4B0: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCA4B0u)) return;
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
label_80CCA4B4:
    ctx->pc = 0x80CCA4B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA4B4u)) return;
    // 80CCA4B4: bl      0x8045C750
    {
            ctx->lr = 0x80CCA4B8u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80CCA4B8:
    ctx->pc = 0x80CCA4B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA4B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80CCA4B8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CCA4BC:
    ctx->pc = 0x80CCA4BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA4BCu)) return;
    // 80CCA4BC: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_80CCA4C0:
    ctx->pc = 0x80CCA4C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA4C0u)) return;
    // 80CCA4C0: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80CCA4C4:
    ctx->pc = 0x80CCA4C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA4C4u)) return;
    // 80CCA4C4: addi    r5, r6, -4863
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-4863);

label_80CCA4C8:
    ctx->pc = 0x80CCA4C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA4C8u)) return;
    // 80CCA4C8: addi    r6, r6, -14116
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-14116);

label_80CCA4CC:
    ctx->pc = 0x80CCA4CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA4CCu)) return;
    // 80CCA4CC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CCA4D0:
    ctx->pc = 0x80CCA4D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA4D0u)) return;
    // 80CCA4D0: bl      0x8045C7B4
    {
            ctx->lr = 0x80CCA4D4u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CCA4D4:
    ctx->pc = 0x80CCA4D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA4D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCA4D4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CCA4D8:
    ctx->pc = 0x80CCA4D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA4D8u)) return;
    // 80CCA4D8: bl      0x8045F7C8
    {
            ctx->lr = 0x80CCA4DCu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CCA4DC:
    ctx->pc = 0x80CCA4DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA4DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCA4DC: li      r3, 1361
    ctx->gpr[3] = (u32)(s32)(1361);

label_80CCA4E0:
    ctx->pc = 0x80CCA4E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA4E0u)) return;
    // 80CCA4E0: bl      0x8045BFA0
    {
            ctx->lr = 0x80CCA4E4u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80CCA4E4:
    ctx->pc = 0x80CCA4E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA4E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CCA4E4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CCA4E8:
    ctx->pc = 0x80CCA4E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA4E8u)) return;
    // 80CCA4E8: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80CCA4EC:
    ctx->pc = 0x80CCA4ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA4ECu)) return;
    // 80CCA4EC: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80CCA4F0:
    ctx->pc = 0x80CCA4F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA4F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCA4F0: lwz     r0, 0(r4)
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
label_80CCA4F4:
    ctx->pc = 0x80CCA4F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA4F4u)) return;
    // 80CCA4F4: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80CCA4F8:
    ctx->pc = 0x80CCA4F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA4F8u)) return;
    // 80CCA4F8: lis     r4, -27377
    ctx->gpr[4] = ((u32)(s32)(-27377) << 16);

label_80CCA4FC:
    ctx->pc = 0x80CCA4FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA4FCu)) return;
    // 80CCA4FC: addi    r4, r4, 11824
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(11824);

label_80CCA500:
    ctx->pc = 0x80CCA500u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA500u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCA500: lwzx    r4, r4, r0
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
label_80CCA504:
    ctx->pc = 0x80CCA504u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA504u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCA504: lwz     r4, 36(r4)
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
label_80CCA508:
    ctx->pc = 0x80CCA508u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA508u)) return;
    // 80CCA508: bl      0x8045F608
    {
            ctx->lr = 0x80CCA50Cu;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80CCA50C:
    ctx->pc = 0x80CCA50Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA50Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCA50C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CCA510:
    ctx->pc = 0x80CCA510u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA510u)) return;
    // 80CCA510: bl      0x8045F220
    {
            ctx->lr = 0x80CCA514u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CCA514:
    ctx->pc = 0x80CCA514u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA514u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CCA514: lis     r4, -27376
    ctx->gpr[4] = ((u32)(s32)(-27376) << 16);

label_80CCA518:
    ctx->pc = 0x80CCA518u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA518u)) return;
    // 80CCA518: addi    r4, r4, 32548
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(32548);

label_80CCA51C:
    ctx->pc = 0x80CCA51Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA51Cu)) return;
    // 80CCA51C: lis     r5, -27864
    ctx->gpr[5] = ((u32)(s32)(-27864) << 16);

label_80CCA520:
    ctx->pc = 0x80CCA520u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA520u)) return;
    // 80CCA520: addi    r5, r5, -24080
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24080);

label_80CCA524:
    ctx->pc = 0x80CCA524u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA524u)) return;
    // 80CCA524: lis     r6, -27377
    ctx->gpr[6] = ((u32)(s32)(-27377) << 16);

label_80CCA528:
    ctx->pc = 0x80CCA528u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA528u)) return;
    // 80CCA528: addi    r6, r6, 9596
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(9596);

label_80CCA52C:
    ctx->pc = 0x80CCA52Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA52Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CCA52C: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80CCA52Cu)) return;
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
label_80CCA530:
    ctx->pc = 0x80CCA530u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA530u)) return;
    // 80CCA530: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80CCA534:
    ctx->pc = 0x80CCA534u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA534u)) return;
    // 80CCA534: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_80CCA538:
    ctx->pc = 0x80CCA538u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA538u)) return;
    // 80CCA538: bl      0x8045EBE4
    {
            ctx->lr = 0x80CCA53Cu;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80CCA53C:
    ctx->pc = 0x80CCA53Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA53Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCA53C: li      r3, 70
    ctx->gpr[3] = (u32)(s32)(70);

label_80CCA540:
    ctx->pc = 0x80CCA540u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA540u)) return;
    // 80CCA540: bl      0x8045F7C8
    {
            ctx->lr = 0x80CCA544u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CCA544:
    ctx->pc = 0x80CCA544u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA544u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CCA544: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CCA548:
    ctx->pc = 0x80CCA548u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA548u)) return;
    // 80CCA548: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CCA54C:
    ctx->pc = 0x80CCA54Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA54Cu)) return;
    // 80CCA54C: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CCA550:
    ctx->pc = 0x80CCA550u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA550u)) return;
    // 80CCA550: addi    r5, r5, 9936
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9936);

label_80CCA554:
    ctx->pc = 0x80CCA554u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA554u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCA554: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCA554u)) return;
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
label_80CCA558:
    ctx->pc = 0x80CCA558u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA558u)) return;
    // 80CCA558: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CCA55C:
    ctx->pc = 0x80CCA55Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA55Cu)) return;
    // 80CCA55C: addi    r5, r5, 9940
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9940);

label_80CCA560:
    ctx->pc = 0x80CCA560u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA560u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCA560: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCA560u)) return;
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
label_80CCA564:
    ctx->pc = 0x80CCA564u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA564u)) return;
    // 80CCA564: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CCA568:
    ctx->pc = 0x80CCA568u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA568u)) return;
    // 80CCA568: addi    r5, r5, 9944
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9944);

label_80CCA56C:
    ctx->pc = 0x80CCA56Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA56Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCA56C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCA56Cu)) return;
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
label_80CCA570:
    ctx->pc = 0x80CCA570u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA570u)) return;
    // 80CCA570: bl      0x8045C750
    {
            ctx->lr = 0x80CCA574u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80CCA574:
    ctx->pc = 0x80CCA574u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA574u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80CCA574: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CCA578:
    ctx->pc = 0x80CCA578u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA578u)) return;
    // 80CCA578: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CCA57C:
    ctx->pc = 0x80CCA57Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA57Cu)) return;
    // 80CCA57C: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80CCA580:
    ctx->pc = 0x80CCA580u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA580u)) return;
    // 80CCA580: addi    r5, r5, -4096
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-4096);

label_80CCA584:
    ctx->pc = 0x80CCA584u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA584u)) return;
    // 80CCA584: li      r6, 31196
    ctx->gpr[6] = (u32)(s32)(31196);

label_80CCA588:
    ctx->pc = 0x80CCA588u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA588u)) return;
    // 80CCA588: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CCA58C:
    ctx->pc = 0x80CCA58Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA58Cu)) return;
    // 80CCA58C: bl      0x8045C7B4
    {
            ctx->lr = 0x80CCA590u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CCA590:
    ctx->pc = 0x80CCA590u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA590u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CCA590: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CCA594:
    ctx->pc = 0x80CCA594u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA594u)) return;
    // 80CCA594: li      r4, 10
    ctx->gpr[4] = (u32)(s32)(10);

label_80CCA598:
    ctx->pc = 0x80CCA598u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA598u)) return;
    // 80CCA598: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CCA59C:
    ctx->pc = 0x80CCA59Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA59Cu)) return;
    // 80CCA59C: addi    r5, r5, 9612
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9612);

label_80CCA5A0:
    ctx->pc = 0x80CCA5A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA5A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCA5A0: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCA5A0u)) return;
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
label_80CCA5A4:
    ctx->pc = 0x80CCA5A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA5A4u)) return;
    // 80CCA5A4: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CCA5A8:
    ctx->pc = 0x80CCA5A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA5A8u)) return;
    // 80CCA5A8: addi    r5, r5, 9948
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9948);

label_80CCA5AC:
    ctx->pc = 0x80CCA5ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA5ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCA5AC: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCA5ACu)) return;
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
label_80CCA5B0:
    ctx->pc = 0x80CCA5B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA5B0u)) return;
    // 80CCA5B0: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CCA5B4:
    ctx->pc = 0x80CCA5B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA5B4u)) return;
    // 80CCA5B4: addi    r5, r5, 9952
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9952);

label_80CCA5B8:
    ctx->pc = 0x80CCA5B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA5B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCA5B8: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCA5B8u)) return;
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
label_80CCA5BC:
    ctx->pc = 0x80CCA5BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA5BCu)) return;
    // 80CCA5BC: bl      0x8045C750
    {
            ctx->lr = 0x80CCA5C0u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80CCA5C0:
    ctx->pc = 0x80CCA5C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA5C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80CCA5C0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CCA5C4:
    ctx->pc = 0x80CCA5C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA5C4u)) return;
    // 80CCA5C4: li      r4, 10
    ctx->gpr[4] = (u32)(s32)(10);

label_80CCA5C8:
    ctx->pc = 0x80CCA5C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA5C8u)) return;
    // 80CCA5C8: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80CCA5CC:
    ctx->pc = 0x80CCA5CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA5CCu)) return;
    // 80CCA5CC: addi    r5, r5, -4096
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-4096);

label_80CCA5D0:
    ctx->pc = 0x80CCA5D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA5D0u)) return;
    // 80CCA5D0: li      r6, 31196
    ctx->gpr[6] = (u32)(s32)(31196);

label_80CCA5D4:
    ctx->pc = 0x80CCA5D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA5D4u)) return;
    // 80CCA5D4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CCA5D8:
    ctx->pc = 0x80CCA5D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA5D8u)) return;
    // 80CCA5D8: bl      0x8045C7B4
    {
            ctx->lr = 0x80CCA5DCu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CCA5DC:
    ctx->pc = 0x80CCA5DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA5DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCA5DC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CCA5E0:
    ctx->pc = 0x80CCA5E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA5E0u)) return;
    // 80CCA5E0: bl      0x8045F220
    {
            ctx->lr = 0x80CCA5E4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CCA5E4:
    ctx->pc = 0x80CCA5E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA5E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CCA5E4: bl      0x8045C034
    {
            ctx->lr = 0x80CCA5E8u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80CCA5E8:
    ctx->pc = 0x80CCA5E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA5E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCA5E8: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CCA5EC:
    ctx->pc = 0x80CCA5ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA5ECu)) return;
    // 80CCA5EC: bl      0x8045F220
    {
            ctx->lr = 0x80CCA5F0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CCA5F0:
    ctx->pc = 0x80CCA5F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA5F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CCA5F0: lis     r4, -27377
    ctx->gpr[4] = ((u32)(s32)(-27377) << 16);

label_80CCA5F4:
    ctx->pc = 0x80CCA5F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA5F4u)) return;
    // 80CCA5F4: addi    r4, r4, 11936
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(11936);

label_80CCA5F8:
    ctx->pc = 0x80CCA5F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA5F8u)) return;
    // 80CCA5F8: bl      0x8045C060
    {
            ctx->lr = 0x80CCA5FCu;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80CCA5FC:
    ctx->pc = 0x80CCA5FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA5FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCA5FC: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_80CCA600:
    ctx->pc = 0x80CCA600u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA600u)) return;
    // 80CCA600: bl      0x8045F7C8
    {
            ctx->lr = 0x80CCA604u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CCA604:
    ctx->pc = 0x80CCA604u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA604u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CCA604: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CCA608:
    ctx->pc = 0x80CCA608u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA608u)) return;
    // 80CCA608: li      r4, 200
    ctx->gpr[4] = (u32)(s32)(200);

label_80CCA60C:
    ctx->pc = 0x80CCA60Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA60Cu)) return;
    // 80CCA60C: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CCA610:
    ctx->pc = 0x80CCA610u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA610u)) return;
    // 80CCA610: addi    r5, r5, 9956
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9956);

label_80CCA614:
    ctx->pc = 0x80CCA614u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA614u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCA614: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCA614u)) return;
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
label_80CCA618:
    ctx->pc = 0x80CCA618u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA618u)) return;
    // 80CCA618: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CCA61C:
    ctx->pc = 0x80CCA61Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA61Cu)) return;
    // 80CCA61C: addi    r5, r5, 9960
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9960);

label_80CCA620:
    ctx->pc = 0x80CCA620u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA620u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCA620: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCA620u)) return;
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
label_80CCA624:
    ctx->pc = 0x80CCA624u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA624u)) return;
    // 80CCA624: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CCA628:
    ctx->pc = 0x80CCA628u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA628u)) return;
    // 80CCA628: addi    r5, r5, 9964
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9964);

label_80CCA62C:
    ctx->pc = 0x80CCA62Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA62Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCA62C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCA62Cu)) return;
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
label_80CCA630:
    ctx->pc = 0x80CCA630u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA630u)) return;
    // 80CCA630: bl      0x8045C750
    {
            ctx->lr = 0x80CCA634u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80CCA634:
    ctx->pc = 0x80CCA634u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA634u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80CCA634: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CCA638:
    ctx->pc = 0x80CCA638u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA638u)) return;
    // 80CCA638: li      r4, 200
    ctx->gpr[4] = (u32)(s32)(200);

label_80CCA63C:
    ctx->pc = 0x80CCA63Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA63Cu)) return;
    // 80CCA63C: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80CCA640:
    ctx->pc = 0x80CCA640u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA640u)) return;
    // 80CCA640: addi    r5, r5, -4096
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-4096);

label_80CCA644:
    ctx->pc = 0x80CCA644u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA644u)) return;
    // 80CCA644: li      r6, 31196
    ctx->gpr[6] = (u32)(s32)(31196);

label_80CCA648:
    ctx->pc = 0x80CCA648u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA648u)) return;
    // 80CCA648: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CCA64C:
    ctx->pc = 0x80CCA64Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA64Cu)) return;
    // 80CCA64C: bl      0x8045C7B4
    {
            ctx->lr = 0x80CCA650u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CCA650:
    ctx->pc = 0x80CCA650u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA650u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCA650: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_80CCA654:
    ctx->pc = 0x80CCA654u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA654u)) return;
    // 80CCA654: bl      0x8045F7C8
    {
            ctx->lr = 0x80CCA658u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CCA658:
    ctx->pc = 0x80CCA658u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA658u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CCA658: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CCA65C:
    ctx->pc = 0x80CCA65Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA65Cu)) return;
    // 80CCA65C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CCA660:
    ctx->pc = 0x80CCA660u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA660u)) return;
    // 80CCA660: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CCA664:
    ctx->pc = 0x80CCA664u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA664u)) return;
    // 80CCA664: addi    r5, r5, 9968
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9968);

label_80CCA668:
    ctx->pc = 0x80CCA668u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA668u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCA668: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCA668u)) return;
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
label_80CCA66C:
    ctx->pc = 0x80CCA66Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA66Cu)) return;
    // 80CCA66C: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CCA670:
    ctx->pc = 0x80CCA670u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA670u)) return;
    // 80CCA670: addi    r5, r5, 9972
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9972);

label_80CCA674:
    ctx->pc = 0x80CCA674u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA674u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCA674: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCA674u)) return;
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
label_80CCA678:
    ctx->pc = 0x80CCA678u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA678u)) return;
    // 80CCA678: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CCA67C:
    ctx->pc = 0x80CCA67Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA67Cu)) return;
    // 80CCA67C: addi    r5, r5, 9976
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9976);

label_80CCA680:
    ctx->pc = 0x80CCA680u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA680u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCA680: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCA680u)) return;
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
label_80CCA684:
    ctx->pc = 0x80CCA684u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA684u)) return;
    // 80CCA684: bl      0x8045C750
    {
            ctx->lr = 0x80CCA688u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80CCA688:
    ctx->pc = 0x80CCA688u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA688u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80CCA688: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CCA68C:
    ctx->pc = 0x80CCA68Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA68Cu)) return;
    // 80CCA68C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CCA690:
    ctx->pc = 0x80CCA690u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA690u)) return;
    // 80CCA690: li      r5, 2313
    ctx->gpr[5] = (u32)(s32)(2313);

label_80CCA694:
    ctx->pc = 0x80CCA694u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA694u)) return;
    // 80CCA694: li      r6, 1216
    ctx->gpr[6] = (u32)(s32)(1216);

label_80CCA698:
    ctx->pc = 0x80CCA698u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA698u)) return;
    // 80CCA698: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CCA69C:
    ctx->pc = 0x80CCA69Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA69Cu)) return;
    // 80CCA69C: bl      0x8045C7B4
    {
            ctx->lr = 0x80CCA6A0u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CCA6A0:
    ctx->pc = 0x80CCA6A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA6A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CCA6A0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CCA6A4:
    ctx->pc = 0x80CCA6A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA6A4u)) return;
    // 80CCA6A4: li      r4, 200
    ctx->gpr[4] = (u32)(s32)(200);

label_80CCA6A8:
    ctx->pc = 0x80CCA6A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA6A8u)) return;
    // 80CCA6A8: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CCA6AC:
    ctx->pc = 0x80CCA6ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA6ACu)) return;
    // 80CCA6AC: addi    r5, r5, 9980
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9980);

label_80CCA6B0:
    ctx->pc = 0x80CCA6B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA6B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCA6B0: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCA6B0u)) return;
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
label_80CCA6B4:
    ctx->pc = 0x80CCA6B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA6B4u)) return;
    // 80CCA6B4: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CCA6B8:
    ctx->pc = 0x80CCA6B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA6B8u)) return;
    // 80CCA6B8: addi    r5, r5, 9984
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9984);

label_80CCA6BC:
    ctx->pc = 0x80CCA6BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA6BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCA6BC: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCA6BCu)) return;
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
label_80CCA6C0:
    ctx->pc = 0x80CCA6C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA6C0u)) return;
    // 80CCA6C0: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CCA6C4:
    ctx->pc = 0x80CCA6C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA6C4u)) return;
    // 80CCA6C4: addi    r5, r5, 9988
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9988);

label_80CCA6C8:
    ctx->pc = 0x80CCA6C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA6C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCA6C8: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCA6C8u)) return;
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
label_80CCA6CC:
    ctx->pc = 0x80CCA6CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA6CCu)) return;
    // 80CCA6CC: bl      0x8045C750
    {
            ctx->lr = 0x80CCA6D0u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80CCA6D0:
    ctx->pc = 0x80CCA6D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA6D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80CCA6D0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CCA6D4:
    ctx->pc = 0x80CCA6D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA6D4u)) return;
    // 80CCA6D4: li      r4, 200
    ctx->gpr[4] = (u32)(s32)(200);

label_80CCA6D8:
    ctx->pc = 0x80CCA6D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA6D8u)) return;
    // 80CCA6D8: li      r5, 2313
    ctx->gpr[5] = (u32)(s32)(2313);

label_80CCA6DC:
    ctx->pc = 0x80CCA6DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA6DCu)) return;
    // 80CCA6DC: li      r6, 1216
    ctx->gpr[6] = (u32)(s32)(1216);

label_80CCA6E0:
    ctx->pc = 0x80CCA6E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA6E0u)) return;
    // 80CCA6E0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CCA6E4:
    ctx->pc = 0x80CCA6E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA6E4u)) return;
    // 80CCA6E4: bl      0x8045C7B4
    {
            ctx->lr = 0x80CCA6E8u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CCA6E8:
    ctx->pc = 0x80CCA6E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA6E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCA6E8: li      r3, 1362
    ctx->gpr[3] = (u32)(s32)(1362);

label_80CCA6EC:
    ctx->pc = 0x80CCA6ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA6ECu)) return;
    // 80CCA6EC: bl      0x8045BFA0
    {
            ctx->lr = 0x80CCA6F0u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80CCA6F0:
    ctx->pc = 0x80CCA6F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA6F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CCA6F0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCA6F4:
    ctx->pc = 0x80CCA6F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA6F4u)) return;
    // 80CCA6F4: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80CCA6F8:
    ctx->pc = 0x80CCA6F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA6F8u)) return;
    // 80CCA6F8: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80CCA6FC:
    ctx->pc = 0x80CCA6FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA6FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCA6FC: lwz     r0, 0(r4)
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
label_80CCA700:
    ctx->pc = 0x80CCA700u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA700u)) return;
    // 80CCA700: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80CCA704:
    ctx->pc = 0x80CCA704u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA704u)) return;
    // 80CCA704: lis     r4, -27377
    ctx->gpr[4] = ((u32)(s32)(-27377) << 16);

label_80CCA708:
    ctx->pc = 0x80CCA708u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA708u)) return;
    // 80CCA708: addi    r4, r4, 11824
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(11824);

label_80CCA70C:
    ctx->pc = 0x80CCA70Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA70Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCA70C: lwzx    r4, r4, r0
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
label_80CCA710:
    ctx->pc = 0x80CCA710u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA710u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCA710: lwz     r4, 40(r4)
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
label_80CCA714:
    ctx->pc = 0x80CCA714u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA714u)) return;
    // 80CCA714: bl      0x8045F608
    {
            ctx->lr = 0x80CCA718u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80CCA718:
    ctx->pc = 0x80CCA718u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA718u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCA718: li      r3, 120
    ctx->gpr[3] = (u32)(s32)(120);

label_80CCA71C:
    ctx->pc = 0x80CCA71Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA71Cu)) return;
    // 80CCA71C: bl      0x8045F7C8
    {
            ctx->lr = 0x80CCA720u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CCA720:
    ctx->pc = 0x80CCA720u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA720u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CCA720: bl      0x8045F32C
    {
            ctx->lr = 0x80CCA724u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80CCA724:
    ctx->pc = 0x80CCA724u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA724u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCA724: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_80CCA728:
    ctx->pc = 0x80CCA728u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA728u)) return;
    // 80CCA728: bl      0x8045F7C8
    {
            ctx->lr = 0x80CCA72Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CCA72C:
    ctx->pc = 0x80CCA72Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA72Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCA72C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CCA730:
    ctx->pc = 0x80CCA730u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA730u)) return;
    // 80CCA730: bl      0x8045F220
    {
            ctx->lr = 0x80CCA734u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CCA734:
    ctx->pc = 0x80CCA734u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA734u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CCA734: lis     r4, -27377
    ctx->gpr[4] = ((u32)(s32)(-27377) << 16);

label_80CCA738:
    ctx->pc = 0x80CCA738u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA738u)) return;
    // 80CCA738: addi    r4, r4, 11940
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(11940);

label_80CCA73C:
    ctx->pc = 0x80CCA73Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA73Cu)) return;
    // 80CCA73C: bl      0x8045C060
    {
            ctx->lr = 0x80CCA740u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80CCA740:
    ctx->pc = 0x80CCA740u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA740u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCA740: li      r3, 20
    ctx->gpr[3] = (u32)(s32)(20);

label_80CCA744:
    ctx->pc = 0x80CCA744u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA744u)) return;
    // 80CCA744: bl      0x8045F7C8
    {
            ctx->lr = 0x80CCA748u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CCA748:
    ctx->pc = 0x80CCA748u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA748u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CCA748: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CCA74C:
    ctx->pc = 0x80CCA74Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA74Cu)) return;
    // 80CCA74C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CCA750:
    ctx->pc = 0x80CCA750u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA750u)) return;
    // 80CCA750: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CCA754:
    ctx->pc = 0x80CCA754u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA754u)) return;
    // 80CCA754: addi    r5, r5, 9992
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9992);

label_80CCA758:
    ctx->pc = 0x80CCA758u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA758u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCA758: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCA758u)) return;
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
label_80CCA75C:
    ctx->pc = 0x80CCA75Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA75Cu)) return;
    // 80CCA75C: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CCA760:
    ctx->pc = 0x80CCA760u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA760u)) return;
    // 80CCA760: addi    r5, r5, 9996
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9996);

label_80CCA764:
    ctx->pc = 0x80CCA764u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA764u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCA764: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCA764u)) return;
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
label_80CCA768:
    ctx->pc = 0x80CCA768u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA768u)) return;
    // 80CCA768: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CCA76C:
    ctx->pc = 0x80CCA76Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA76Cu)) return;
    // 80CCA76C: addi    r5, r5, 10000
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(10000);

label_80CCA770:
    ctx->pc = 0x80CCA770u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA770u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCA770: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCA770u)) return;
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
label_80CCA774:
    ctx->pc = 0x80CCA774u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA774u)) return;
    // 80CCA774: bl      0x8045C750
    {
            ctx->lr = 0x80CCA778u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80CCA778:
    ctx->pc = 0x80CCA778u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA778u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80CCA778: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CCA77C:
    ctx->pc = 0x80CCA77Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA77Cu)) return;
    // 80CCA77C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CCA780:
    ctx->pc = 0x80CCA780u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA780u)) return;
    // 80CCA780: li      r5, 256
    ctx->gpr[5] = (u32)(s32)(256);

label_80CCA784:
    ctx->pc = 0x80CCA784u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA784u)) return;
    // 80CCA784: li      r6, 32732
    ctx->gpr[6] = (u32)(s32)(32732);

label_80CCA788:
    ctx->pc = 0x80CCA788u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA788u)) return;
    // 80CCA788: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CCA78C:
    ctx->pc = 0x80CCA78Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA78Cu)) return;
    // 80CCA78C: bl      0x8045C7B4
    {
            ctx->lr = 0x80CCA790u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CCA790:
    ctx->pc = 0x80CCA790u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA790u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCA790: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80CCA794:
    ctx->pc = 0x80CCA794u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA794u)) return;
    // 80CCA794: bl      0x8045F7C8
    {
            ctx->lr = 0x80CCA798u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CCA798:
    ctx->pc = 0x80CCA798u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA798u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CCA798: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CCA79C:
    ctx->pc = 0x80CCA79Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA79Cu)) return;
    // 80CCA79C: li      r4, 30
    ctx->gpr[4] = (u32)(s32)(30);

label_80CCA7A0:
    ctx->pc = 0x80CCA7A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA7A0u)) return;
    // 80CCA7A0: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CCA7A4:
    ctx->pc = 0x80CCA7A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA7A4u)) return;
    // 80CCA7A4: addi    r5, r5, 10004
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(10004);

label_80CCA7A8:
    ctx->pc = 0x80CCA7A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA7A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCA7A8: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCA7A8u)) return;
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
label_80CCA7AC:
    ctx->pc = 0x80CCA7ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA7ACu)) return;
    // 80CCA7AC: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CCA7B0:
    ctx->pc = 0x80CCA7B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA7B0u)) return;
    // 80CCA7B0: addi    r5, r5, 10008
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(10008);

label_80CCA7B4:
    ctx->pc = 0x80CCA7B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA7B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCA7B4: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCA7B4u)) return;
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
label_80CCA7B8:
    ctx->pc = 0x80CCA7B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA7B8u)) return;
    // 80CCA7B8: lis     r5, -27377
    ctx->gpr[5] = ((u32)(s32)(-27377) << 16);

label_80CCA7BC:
    ctx->pc = 0x80CCA7BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA7BCu)) return;
    // 80CCA7BC: addi    r5, r5, 10012
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(10012);

label_80CCA7C0:
    ctx->pc = 0x80CCA7C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA7C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCA7C0: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCA7C0u)) return;
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
label_80CCA7C4:
    ctx->pc = 0x80CCA7C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA7C4u)) return;
    // 80CCA7C4: bl      0x8045C750
    {
            ctx->lr = 0x80CCA7C8u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80CCA7C8:
    ctx->pc = 0x80CCA7C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA7C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80CCA7C8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CCA7CC:
    ctx->pc = 0x80CCA7CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA7CCu)) return;
    // 80CCA7CC: li      r4, 30
    ctx->gpr[4] = (u32)(s32)(30);

label_80CCA7D0:
    ctx->pc = 0x80CCA7D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA7D0u)) return;
    // 80CCA7D0: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80CCA7D4:
    ctx->pc = 0x80CCA7D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA7D4u)) return;
    // 80CCA7D4: addi    r5, r6, -512
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-512);

label_80CCA7D8:
    ctx->pc = 0x80CCA7D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA7D8u)) return;
    // 80CCA7D8: addi    r6, r6, -30244
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-30244);

label_80CCA7DC:
    ctx->pc = 0x80CCA7DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA7DCu)) return;
    // 80CCA7DC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CCA7E0:
    ctx->pc = 0x80CCA7E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA7E0u)) return;
    // 80CCA7E0: bl      0x8045C7B4
    {
            ctx->lr = 0x80CCA7E4u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CCA7E4:
    ctx->pc = 0x80CCA7E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA7E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80CCA7E4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCA7E8:
    ctx->pc = 0x80CCA7E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA7E8u)) return;
    // 80CCA7E8: li      r4, 760
    ctx->gpr[4] = (u32)(s32)(760);

label_80CCA7EC:
    ctx->pc = 0x80CCA7ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA7ECu)) return;
    // 80CCA7EC: li      r5, 1800
    ctx->gpr[5] = (u32)(s32)(1800);

label_80CCA7F0:
    ctx->pc = 0x80CCA7F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA7F0u)) return;
    // 80CCA7F0: bl      0x80CCAC38
    {
            ctx->lr = 0x80CCA7F4u;
            goto label_80CCAC38;
    }

label_80CCA7F4:
    ctx->pc = 0x80CCA7F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA7F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCA7F4: li      r3, 40
    ctx->gpr[3] = (u32)(s32)(40);

label_80CCA7F8:
    ctx->pc = 0x80CCA7F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA7F8u)) return;
    // 80CCA7F8: bl      0x8045F7C8
    {
            ctx->lr = 0x80CCA7FCu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CCA7FC:
    ctx->pc = 0x80CCA7FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA7FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80CCA7FC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCA800:
    ctx->pc = 0x80CCA800u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA800u)) return;
    // 80CCA800: li      r4, -120
    ctx->gpr[4] = (u32)(s32)(-120);

label_80CCA804:
    ctx->pc = 0x80CCA804u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA804u)) return;
    // 80CCA804: li      r5, 120
    ctx->gpr[5] = (u32)(s32)(120);

label_80CCA808:
    ctx->pc = 0x80CCA808u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA808u)) return;
    // 80CCA808: bl      0x80CCAD14
    {
            ctx->lr = 0x80CCA80Cu;
            goto label_80CCAD14;
    }

label_80CCA80C:
    ctx->pc = 0x80CCA80Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA80Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80CCA80C: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80CCA810:
    ctx->pc = 0x80CCA810u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA810u)) return;
    // 80CCA810: li      r4, 30
    ctx->gpr[4] = (u32)(s32)(30);

label_80CCA814:
    ctx->pc = 0x80CCA814u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA814u)) return;
    // 80CCA814: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80CCA818:
    ctx->pc = 0x80CCA818u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA818u)) return;
    // 80CCA818: bl      0x80CCAFC0
    {
            ctx->lr = 0x80CCA81Cu;
            goto label_80CCAFC0;
    }

label_80CCA81C:
    ctx->pc = 0x80CCA81Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA81Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCA81C: li      r3, 90
    ctx->gpr[3] = (u32)(s32)(90);

label_80CCA820:
    ctx->pc = 0x80CCA820u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA820u)) return;
    // 80CCA820: bl      0x8045F7C8
    {
            ctx->lr = 0x80CCA824u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CCA824:
    ctx->pc = 0x80CCA824u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA824u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCA824: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCA828:
    ctx->pc = 0x80CCA828u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA828u)) return;
    // 80CCA828: bl      0x80CCACA8
    {
            ctx->lr = 0x80CCA82Cu;
            goto label_80CCACA8;
    }

label_80CCA82C:
    ctx->pc = 0x80CCA82Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA82Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CCA82C: b       0x80CCA850
    {
            goto label_80CCA850;
    }

label_80CCA830:
    ctx->pc = 0x80CCA830u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA830u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CCA830: bl      0x80CCAB8C
    {
            ctx->lr = 0x80CCA834u;
            goto label_80CCAB8C;
    }

label_80CCA834:
    ctx->pc = 0x80CCA834u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA834u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCA834: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCA838:
    ctx->pc = 0x80CCA838u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA838u)) return;
    // 80CCA838: bl      0x8045EC10
    {
            ctx->lr = 0x80CCA83Cu;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80CCA83C:
    ctx->pc = 0x80CCA83Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA83Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCA83C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CCA840:
    ctx->pc = 0x80CCA840u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA840u)) return;
    // 80CCA840: bl      0x8045ED54
    {
            ctx->lr = 0x80CCA844u;
            ctx->pc = 0x8045ED54u;
            return;
    }

label_80CCA844:
    ctx->pc = 0x80CCA844u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA844u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CCA844: bl      0x80CCB0CC
    {
            ctx->lr = 0x80CCA848u;
            goto label_80CCB0CC;
    }

label_80CCA848:
    ctx->pc = 0x80CCA848u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA848u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CCA848: bl      0x8045DE34
    {
            ctx->lr = 0x80CCA84Cu;
            ctx->pc = 0x8045DE34u;
            return;
    }

label_80CCA84C:
    ctx->pc = 0x80CCA84Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA84Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CCA84C: bl      0x80460A80
    {
            ctx->lr = 0x80CCA850u;
            ctx->pc = 0x80460A80u;
            return;
    }

label_80CCA850:
    ctx->pc = 0x80CCA850u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA850u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCA850: lwz     r0, 20(r1)
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
label_80CCA854:
    ctx->pc = 0x80CCA854u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CCA854u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCA854: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCA858:
    ctx->pc = 0x80CCA858u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA858u)) return;
    // 80CCA858: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CCA85C:
    ctx->pc = 0x80CCA85Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA85Cu)) return;
    // 80CCA85C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CC95A0;
        }
    }

label_80CCA860:
    ctx->pc = 0x80CCA860u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA860u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CCA860: stwu     r1, -16(r1)
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
label_80CCA864:
    ctx->pc = 0x80CCA864u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA864u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCA864: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCA868:
    ctx->pc = 0x80CCA868u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA868u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CCA868: stw     r0, 20(r1)
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
label_80CCA86C:
    ctx->pc = 0x80CCA86Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA86Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCA86C: lwz     r3, 32(r3)
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
label_80CCA870:
    ctx->pc = 0x80CCA870u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA870u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCA870: lwz     r3, 16(r3)
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
label_80CCA874:
    ctx->pc = 0x80CCA874u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA874u)) return;
    // 80CCA874: bl      0x80509CF0
    {
            ctx->lr = 0x80CCA878u;
            ctx->pc = 0x80509CF0u;
            return;
    }

label_80CCA878:
    ctx->pc = 0x80CCA878u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA878u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCA878: lwz     r0, 20(r1)
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
label_80CCA87C:
    ctx->pc = 0x80CCA87Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CCA87Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCA87C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCA880:
    ctx->pc = 0x80CCA880u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA880u)) return;
    // 80CCA880: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CCA884:
    ctx->pc = 0x80CCA884u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA884u)) return;
    // 80CCA884: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CC95A0;
        }
    }

label_80CCA888:
    ctx->pc = 0x80CCA888u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA888u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CCA888: stwu     r1, -32(r1)
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
label_80CCA88C:
    ctx->pc = 0x80CCA88Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA88Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CCA88C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCA890:
    ctx->pc = 0x80CCA890u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA890u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CCA890: stw     r0, 36(r1)
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
label_80CCA894:
    ctx->pc = 0x80CCA894u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA894u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCA894: stw     r31, 28(r1)
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
label_80CCA898:
    ctx->pc = 0x80CCA898u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA898u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCA898: stw     r30, 24(r1)
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
label_80CCA89C:
    ctx->pc = 0x80CCA89Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA89Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CCA89C: stw     r29, 20(r1)
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
label_80CCA8A0:
    ctx->pc = 0x80CCA8A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA8A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCA8A0: lwz     r31, 32(r3)
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
label_80CCA8A4:
    ctx->pc = 0x80CCA8A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA8A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CCA8A4: lwz     r30, 16(r31)
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
label_80CCA8A8:
    ctx->pc = 0x80CCA8A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA8A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCA8A8: lwz     r5, 28(r31)
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
label_80CCA8AC:
    ctx->pc = 0x80CCA8ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA8ACu)) return;
    // 80CCA8AC: cmpwi   r5, 0
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

label_80CCA8B0:
    ctx->pc = 0x80CCA8B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA8B0u)) return;
    // 80CCA8B0: bc    4, 1, 0x80CCA8E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CCA8E8;
        }
    }

label_80CCA8B4:
    ctx->pc = 0x80CCA8B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA8B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80CCA8B4: lwz     r4, 24(r31)
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
label_80CCA8B8:
    ctx->pc = 0x80CCA8B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA8B8u)) return;
    // 80CCA8B8: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80CCA8BC:
    ctx->pc = 0x80CCA8BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA8BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80CCA8BC: lwz     r0, 20(r31)
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
label_80CCA8C0:
    ctx->pc = 0x80CCA8C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80CCA8C0u)) return;
    // 80CCA8C0: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80CCA8C4:
    ctx->pc = 0x80CCA8C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA8C4u)) return;
    // 80CCA8C4: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80CCA8C8:
    ctx->pc = 0x80CCA8C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80CCA8C8u)) return;
    // 80CCA8C8: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80CCA8CC:
    ctx->pc = 0x80CCA8CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA8CCu)) return;
    // 80CCA8CC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80CCA8D0:
    ctx->pc = 0x80CCA8D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA8D0u)) return;
    // 80CCA8D0: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80CCA8D4:
    ctx->pc = 0x80CCA8D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA8D4u)) return;
    // 80CCA8D4: bl      0x80509C74
    {
            ctx->lr = 0x80CCA8D8u;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80CCA8D8:
    ctx->pc = 0x80CCA8D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA8D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CCA8D8: stw     r29, 20(r31)
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
label_80CCA8DC:
    ctx->pc = 0x80CCA8DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA8DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCA8DC: lwz     r3, 28(r31)
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
label_80CCA8E0:
    ctx->pc = 0x80CCA8E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA8E0u)) return;
    // 80CCA8E0: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80CCA8E4:
    ctx->pc = 0x80CCA8E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA8E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CCA8E4: stw     r0, 28(r31)
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
label_80CCA8E8:
    ctx->pc = 0x80CCA8E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA8E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCA8E8: lwz     r5, 40(r31)
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
label_80CCA8EC:
    ctx->pc = 0x80CCA8ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA8ECu)) return;
    // 80CCA8EC: cmpwi   r5, 0
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

label_80CCA8F0:
    ctx->pc = 0x80CCA8F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA8F0u)) return;
    // 80CCA8F0: bc    4, 1, 0x80CCA928
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CCA928;
        }
    }

label_80CCA8F4:
    ctx->pc = 0x80CCA8F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA8F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80CCA8F4: lwz     r4, 36(r31)
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
label_80CCA8F8:
    ctx->pc = 0x80CCA8F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA8F8u)) return;
    // 80CCA8F8: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80CCA8FC:
    ctx->pc = 0x80CCA8FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA8FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80CCA8FC: lwz     r0, 32(r31)
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
label_80CCA900:
    ctx->pc = 0x80CCA900u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80CCA900u)) return;
    // 80CCA900: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80CCA904:
    ctx->pc = 0x80CCA904u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA904u)) return;
    // 80CCA904: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80CCA908:
    ctx->pc = 0x80CCA908u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80CCA908u)) return;
    // 80CCA908: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80CCA90C:
    ctx->pc = 0x80CCA90Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA90Cu)) return;
    // 80CCA90C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80CCA910:
    ctx->pc = 0x80CCA910u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA910u)) return;
    // 80CCA910: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80CCA914:
    ctx->pc = 0x80CCA914u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA914u)) return;
    // 80CCA914: bl      0x80509BF8
    {
            ctx->lr = 0x80CCA918u;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80CCA918:
    ctx->pc = 0x80CCA918u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA918u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CCA918: stw     r29, 32(r31)
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
label_80CCA91C:
    ctx->pc = 0x80CCA91Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA91Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCA91C: lwz     r3, 40(r31)
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
label_80CCA920:
    ctx->pc = 0x80CCA920u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA920u)) return;
    // 80CCA920: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80CCA924:
    ctx->pc = 0x80CCA924u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA924u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CCA924: stw     r0, 40(r31)
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
label_80CCA928:
    ctx->pc = 0x80CCA928u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA928u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCA928: lwz     r5, 52(r31)
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
label_80CCA92C:
    ctx->pc = 0x80CCA92Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA92Cu)) return;
    // 80CCA92C: cmpwi   r5, 0
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

label_80CCA930:
    ctx->pc = 0x80CCA930u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA930u)) return;
    // 80CCA930: bc    4, 1, 0x80CCA968
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CCA968;
        }
    }

label_80CCA934:
    ctx->pc = 0x80CCA934u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA934u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80CCA934: lwz     r4, 48(r31)
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
label_80CCA938:
    ctx->pc = 0x80CCA938u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA938u)) return;
    // 80CCA938: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80CCA93C:
    ctx->pc = 0x80CCA93Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA93Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80CCA93C: lwz     r0, 44(r31)
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
label_80CCA940:
    ctx->pc = 0x80CCA940u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80CCA940u)) return;
    // 80CCA940: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80CCA944:
    ctx->pc = 0x80CCA944u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA944u)) return;
    // 80CCA944: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80CCA948:
    ctx->pc = 0x80CCA948u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80CCA948u)) return;
    // 80CCA948: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80CCA94C:
    ctx->pc = 0x80CCA94Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA94Cu)) return;
    // 80CCA94C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80CCA950:
    ctx->pc = 0x80CCA950u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA950u)) return;
    // 80CCA950: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80CCA954:
    ctx->pc = 0x80CCA954u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA954u)) return;
    // 80CCA954: bl      0x80509B94
    {
            ctx->lr = 0x80CCA958u;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80CCA958:
    ctx->pc = 0x80CCA958u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA958u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CCA958: stw     r29, 44(r31)
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
label_80CCA95C:
    ctx->pc = 0x80CCA95Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA95Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCA95C: lwz     r3, 52(r31)
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
label_80CCA960:
    ctx->pc = 0x80CCA960u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA960u)) return;
    // 80CCA960: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80CCA964:
    ctx->pc = 0x80CCA964u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA964u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CCA964: stw     r0, 52(r31)
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
label_80CCA968:
    ctx->pc = 0x80CCA968u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA968u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCA968: lwz     r31, 28(r1)
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
label_80CCA96C:
    ctx->pc = 0x80CCA96Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA96Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCA96C: lwz     r30, 24(r1)
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
label_80CCA970:
    ctx->pc = 0x80CCA970u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA970u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CCA970: lwz     r29, 20(r1)
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
label_80CCA974:
    ctx->pc = 0x80CCA974u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA974u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCA974: lwz     r0, 36(r1)
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
label_80CCA978:
    ctx->pc = 0x80CCA978u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CCA978u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCA978: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCA97C:
    ctx->pc = 0x80CCA97Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA97Cu)) return;
    // 80CCA97C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80CCA980:
    ctx->pc = 0x80CCA980u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA980u)) return;
    // 80CCA980: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CC95A0;
        }
    }

label_80CCA984:
    ctx->pc = 0x80CCA984u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA984u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CCA984: stwu     r1, -32(r1)
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
label_80CCA988:
    ctx->pc = 0x80CCA988u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA988u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CCA988: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCA98C:
    ctx->pc = 0x80CCA98Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA98Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CCA98C: stw     r0, 36(r1)
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
label_80CCA990:
    ctx->pc = 0x80CCA990u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA990u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CCA990: stw     r31, 28(r1)
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
label_80CCA994:
    ctx->pc = 0x80CCA994u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA994u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCA994: stw     r30, 24(r1)
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
label_80CCA998:
    ctx->pc = 0x80CCA998u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA998u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCA998: stw     r29, 20(r1)
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
label_80CCA99C:
    ctx->pc = 0x80CCA99Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA99Cu)) return;
    // 80CCA99C: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80CCA9A0:
    ctx->pc = 0x80CCA9A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA9A0u)) return;
    // 80CCA9A0: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80CCA9A4:
    ctx->pc = 0x80CCA9A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA9A4u)) return;
    // 80CCA9A4: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CCA9A8:
    ctx->pc = 0x80CCA9A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA9A8u)) return;
    // 80CCA9A8: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80CCA9AC:
    ctx->pc = 0x80CCA9ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA9ACu)) return;
    // 80CCA9AC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80CCA9B0:
    ctx->pc = 0x80CCA9B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA9B0u)) return;
    // 80CCA9B0: bl      0x8050FD60
    {
            ctx->lr = 0x80CCA9B4u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80CCA9B4:
    ctx->pc = 0x80CCA9B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA9B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CCA9B4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80CCA9B8:
    ctx->pc = 0x80CCA9B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA9B8u)) return;
    // 80CCA9B8: cmplwi  r31, 0x0000
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

label_80CCA9BC:
    ctx->pc = 0x80CCA9BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA9BCu)) return;
    // 80CCA9BC: bc    12, 2, 0x80CCAA20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CCAA20;
        }
    }

label_80CCA9C0:
    ctx->pc = 0x80CCA9C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA9C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80CCA9C0: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80CCA9C4:
    ctx->pc = 0x80CCA9C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA9C4u)) return;
    // 80CCA9C4: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80CCA9C8:
    ctx->pc = 0x80CCA9C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA9C8u)) return;
    // 80CCA9C8: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80CCA9CC:
    ctx->pc = 0x80CCA9CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA9CCu)) return;
    // 80CCA9CC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80CCA9D0:
    ctx->pc = 0x80CCA9D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA9D0u)) return;
    // 80CCA9D0: or   r7, r30, r30
    {
        ctx->gpr[7] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80CCA9D4:
    ctx->pc = 0x80CCA9D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA9D4u)) return;
    // 80CCA9D4: bl      0x8050A0D4
    {
            ctx->lr = 0x80CCA9D8u;
            ctx->pc = 0x8050A0D4u;
            return;
    }

label_80CCA9D8:
    ctx->pc = 0x80CCA9D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 18u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCA9D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 18u : 1u;
    // 80CCA9D8: lis     r3, -32563
    ctx->gpr[3] = ((u32)(s32)(-32563) << 16);

label_80CCA9DC:
    ctx->pc = 0x80CCA9DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA9DCu)) return;
    // 80CCA9DC: addi    r0, r3, -22392
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-22392);

label_80CCA9E0:
    ctx->pc = 0x80CCA9E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA9E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80CCA9E0: stw     r0, 16(r31)
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
label_80CCA9E4:
    ctx->pc = 0x80CCA9E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA9E4u)) return;
    // 80CCA9E4: lis     r3, -32563
    ctx->gpr[3] = ((u32)(s32)(-32563) << 16);

label_80CCA9E8:
    ctx->pc = 0x80CCA9E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA9E8u)) return;
    // 80CCA9E8: addi    r0, r3, -22432
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-22432);

label_80CCA9EC:
    ctx->pc = 0x80CCA9ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA9ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80CCA9EC: stw     r0, 24(r31)
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
label_80CCA9F0:
    ctx->pc = 0x80CCA9F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA9F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CCA9F0: lwz     r3, 32(r31)
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
label_80CCA9F4:
    ctx->pc = 0x80CCA9F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA9F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CCA9F4: stw     r31, 16(r3)
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
label_80CCA9F8:
    ctx->pc = 0x80CCA9F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA9F8u)) return;
    // 80CCA9F8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80CCA9FC:
    ctx->pc = 0x80CCA9FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCA9FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CCA9FC: stw     r0, 20(r3)
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
label_80CCAA00:
    ctx->pc = 0x80CCAA00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAA00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCAA00: stw     r0, 24(r3)
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
label_80CCAA04:
    ctx->pc = 0x80CCAA04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAA04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCAA04: stw     r0, 28(r3)
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
label_80CCAA08:
    ctx->pc = 0x80CCAA08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAA08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CCAA08: stw     r0, 32(r3)
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
label_80CCAA0C:
    ctx->pc = 0x80CCAA0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAA0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCAA0C: stw     r0, 36(r3)
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
label_80CCAA10:
    ctx->pc = 0x80CCAA10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAA10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CCAA10: stw     r0, 40(r3)
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
label_80CCAA14:
    ctx->pc = 0x80CCAA14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAA14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCAA14: stw     r0, 44(r3)
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
label_80CCAA18:
    ctx->pc = 0x80CCAA18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAA18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCAA18: stw     r0, 48(r3)
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
label_80CCAA1C:
    ctx->pc = 0x80CCAA1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAA1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CCAA1C: stw     r0, 52(r3)
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
label_80CCAA20:
    ctx->pc = 0x80CCAA20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCAA20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80CCAA20: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80CCAA24:
    ctx->pc = 0x80CCAA24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAA24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCAA24: lwz     r31, 28(r1)
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
label_80CCAA28:
    ctx->pc = 0x80CCAA28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAA28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCAA28: lwz     r30, 24(r1)
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
label_80CCAA2C:
    ctx->pc = 0x80CCAA2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAA2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CCAA2C: lwz     r29, 20(r1)
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
label_80CCAA30:
    ctx->pc = 0x80CCAA30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAA30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCAA30: lwz     r0, 36(r1)
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
label_80CCAA34:
    ctx->pc = 0x80CCAA34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CCAA34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCAA34: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCAA38:
    ctx->pc = 0x80CCAA38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAA38u)) return;
    // 80CCAA38: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80CCAA3C:
    ctx->pc = 0x80CCAA3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAA3Cu)) return;
    // 80CCAA3C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CC95A0;
        }
    }

label_80CCAA40:
    ctx->pc = 0x80CCAA40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCAA40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CCAA40: stwu     r1, -16(r1)
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
label_80CCAA44:
    ctx->pc = 0x80CCAA44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAA44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CCAA44: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCAA48:
    ctx->pc = 0x80CCAA48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAA48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CCAA48: stw     r0, 20(r1)
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
label_80CCAA4C:
    ctx->pc = 0x80CCAA4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAA4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCAA4C: stw     r31, 12(r1)
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
label_80CCAA50:
    ctx->pc = 0x80CCAA50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAA50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCAA50: stw     r30, 8(r1)
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
label_80CCAA54:
    ctx->pc = 0x80CCAA54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAA54u)) return;
    // 80CCAA54: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80CCAA58:
    ctx->pc = 0x80CCAA58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAA58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCAA58: lwz     r31, 32(r3)
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
label_80CCAA5C:
    ctx->pc = 0x80CCAA5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAA5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CCAA5C: stw     r30, 24(r31)
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
label_80CCAA60:
    ctx->pc = 0x80CCAA60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAA60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCAA60: stw     r5, 28(r31)
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
label_80CCAA64:
    ctx->pc = 0x80CCAA64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAA64u)) return;
    // 80CCAA64: cmpwi   r5, 0
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

label_80CCAA68:
    ctx->pc = 0x80CCAA68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAA68u)) return;
    // 80CCAA68: bc    12, 1, 0x80CCAA78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CCAA78;
        }
    }

label_80CCAA6C:
    ctx->pc = 0x80CCAA6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCAA6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCAA6C: lwz     r3, 16(r31)
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
label_80CCAA70:
    ctx->pc = 0x80CCAA70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAA70u)) return;
    // 80CCAA70: bl      0x80509C74
    {
            ctx->lr = 0x80CCAA74u;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80CCAA74:
    ctx->pc = 0x80CCAA74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCAA74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CCAA74: stw     r30, 20(r31)
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
label_80CCAA78:
    ctx->pc = 0x80CCAA78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCAA78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCAA78: lwz     r31, 12(r1)
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
label_80CCAA7C:
    ctx->pc = 0x80CCAA7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAA7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CCAA7C: lwz     r30, 8(r1)
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
label_80CCAA80:
    ctx->pc = 0x80CCAA80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAA80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCAA80: lwz     r0, 20(r1)
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
label_80CCAA84:
    ctx->pc = 0x80CCAA84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CCAA84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCAA84: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCAA88:
    ctx->pc = 0x80CCAA88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAA88u)) return;
    // 80CCAA88: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CCAA8C:
    ctx->pc = 0x80CCAA8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAA8Cu)) return;
    // 80CCAA8C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CC95A0;
        }
    }

label_80CCAA90:
    ctx->pc = 0x80CCAA90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCAA90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CCAA90: stwu     r1, -16(r1)
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
label_80CCAA94:
    ctx->pc = 0x80CCAA94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAA94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CCAA94: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCAA98:
    ctx->pc = 0x80CCAA98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAA98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CCAA98: stw     r0, 20(r1)
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
label_80CCAA9C:
    ctx->pc = 0x80CCAA9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAA9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCAA9C: stw     r31, 12(r1)
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
label_80CCAAA0:
    ctx->pc = 0x80CCAAA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAAA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCAAA0: stw     r30, 8(r1)
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
label_80CCAAA4:
    ctx->pc = 0x80CCAAA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAAA4u)) return;
    // 80CCAAA4: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80CCAAA8:
    ctx->pc = 0x80CCAAA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAAA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCAAA8: lwz     r31, 32(r3)
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
label_80CCAAAC:
    ctx->pc = 0x80CCAAACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAAACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CCAAAC: stw     r30, 36(r31)
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
label_80CCAAB0:
    ctx->pc = 0x80CCAAB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAAB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCAAB0: stw     r5, 40(r31)
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
label_80CCAAB4:
    ctx->pc = 0x80CCAAB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAAB4u)) return;
    // 80CCAAB4: cmpwi   r5, 0
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

label_80CCAAB8:
    ctx->pc = 0x80CCAAB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAAB8u)) return;
    // 80CCAAB8: bc    12, 1, 0x80CCAAC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CCAAC8;
        }
    }

label_80CCAABC:
    ctx->pc = 0x80CCAABCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCAABCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCAABC: lwz     r3, 16(r31)
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
label_80CCAAC0:
    ctx->pc = 0x80CCAAC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAAC0u)) return;
    // 80CCAAC0: bl      0x80509BF8
    {
            ctx->lr = 0x80CCAAC4u;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80CCAAC4:
    ctx->pc = 0x80CCAAC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCAAC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CCAAC4: stw     r30, 32(r31)
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
label_80CCAAC8:
    ctx->pc = 0x80CCAAC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCAAC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCAAC8: lwz     r31, 12(r1)
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
label_80CCAACC:
    ctx->pc = 0x80CCAACCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAACCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CCAACC: lwz     r30, 8(r1)
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
label_80CCAAD0:
    ctx->pc = 0x80CCAAD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAAD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCAAD0: lwz     r0, 20(r1)
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
label_80CCAAD4:
    ctx->pc = 0x80CCAAD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CCAAD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCAAD4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCAAD8:
    ctx->pc = 0x80CCAAD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAAD8u)) return;
    // 80CCAAD8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CCAADC:
    ctx->pc = 0x80CCAADCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAADCu)) return;
    // 80CCAADC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CC95A0;
        }
    }

label_80CCAAE0:
    ctx->pc = 0x80CCAAE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCAAE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CCAAE0: stwu     r1, -16(r1)
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
label_80CCAAE4:
    ctx->pc = 0x80CCAAE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAAE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CCAAE4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCAAE8:
    ctx->pc = 0x80CCAAE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAAE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CCAAE8: stw     r0, 20(r1)
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
label_80CCAAEC:
    ctx->pc = 0x80CCAAECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAAECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCAAEC: stw     r31, 12(r1)
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
label_80CCAAF0:
    ctx->pc = 0x80CCAAF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAAF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCAAF0: stw     r30, 8(r1)
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
label_80CCAAF4:
    ctx->pc = 0x80CCAAF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAAF4u)) return;
    // 80CCAAF4: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80CCAAF8:
    ctx->pc = 0x80CCAAF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAAF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCAAF8: lwz     r31, 32(r3)
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
label_80CCAAFC:
    ctx->pc = 0x80CCAAFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAAFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CCAAFC: stw     r30, 48(r31)
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
label_80CCAB00:
    ctx->pc = 0x80CCAB00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAB00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCAB00: stw     r5, 52(r31)
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
label_80CCAB04:
    ctx->pc = 0x80CCAB04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAB04u)) return;
    // 80CCAB04: cmpwi   r5, 0
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

label_80CCAB08:
    ctx->pc = 0x80CCAB08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAB08u)) return;
    // 80CCAB08: bc    12, 1, 0x80CCAB18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CCAB18;
        }
    }

label_80CCAB0C:
    ctx->pc = 0x80CCAB0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCAB0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCAB0C: lwz     r3, 16(r31)
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
label_80CCAB10:
    ctx->pc = 0x80CCAB10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAB10u)) return;
    // 80CCAB10: bl      0x80509B94
    {
            ctx->lr = 0x80CCAB14u;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80CCAB14:
    ctx->pc = 0x80CCAB14u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCAB14u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CCAB14: stw     r30, 44(r31)
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
label_80CCAB18:
    ctx->pc = 0x80CCAB18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCAB18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCAB18: lwz     r31, 12(r1)
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
label_80CCAB1C:
    ctx->pc = 0x80CCAB1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAB1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CCAB1C: lwz     r30, 8(r1)
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
label_80CCAB20:
    ctx->pc = 0x80CCAB20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAB20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCAB20: lwz     r0, 20(r1)
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
label_80CCAB24:
    ctx->pc = 0x80CCAB24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CCAB24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCAB24: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCAB28:
    ctx->pc = 0x80CCAB28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAB28u)) return;
    // 80CCAB28: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CCAB2C:
    ctx->pc = 0x80CCAB2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAB2Cu)) return;
    // 80CCAB2C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CC95A0;
        }
    }

label_80CCAB30:
    ctx->pc = 0x80CCAB30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCAB30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CCAB30: stwu     r1, -16(r1)
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
label_80CCAB34:
    ctx->pc = 0x80CCAB34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAB34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CCAB34: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCAB38:
    ctx->pc = 0x80CCAB38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAB38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCAB38: stw     r0, 20(r1)
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
label_80CCAB3C:
    ctx->pc = 0x80CCAB3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAB3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCAB3C: stw     r31, 12(r1)
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
label_80CCAB40:
    ctx->pc = 0x80CCAB40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAB40u)) return;
    // 80CCAB40: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80CCAB44:
    ctx->pc = 0x80CCAB44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAB44u)) return;
    // 80CCAB44: lis     r4, -27375
    ctx->gpr[4] = ((u32)(s32)(-27375) << 16);

label_80CCAB48:
    ctx->pc = 0x80CCAB48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAB48u)) return;
    // 80CCAB48: addi    r4, r4, -30044
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-30044);

label_80CCAB4C:
    ctx->pc = 0x80CCAB4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAB4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCAB4C: lwz     r0, 0(r4)
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
label_80CCAB50:
    ctx->pc = 0x80CCAB50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAB50u)) return;
    // 80CCAB50: cmplwi  r0, 0x0000
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

label_80CCAB54:
    ctx->pc = 0x80CCAB54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAB54u)) return;
    // 80CCAB54: bc    4, 2, 0x80CCAB78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CCAB78;
        }
    }

label_80CCAB58:
    ctx->pc = 0x80CCAB58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCAB58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCAB58: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80CCAB5C:
    ctx->pc = 0x80CCAB5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAB5Cu)) return;
    // 80CCAB5C: bl      0x8050EEC0
    {
            ctx->lr = 0x80CCAB60u;
            ctx->pc = 0x8050EEC0u;
            return;
    }

label_80CCAB60:
    ctx->pc = 0x80CCAB60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCAB60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80CCAB60: lis     r4, -27375
    ctx->gpr[4] = ((u32)(s32)(-27375) << 16);

label_80CCAB64:
    ctx->pc = 0x80CCAB64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAB64u)) return;
    // 80CCAB64: addi    r4, r4, -30044
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-30044);

label_80CCAB68:
    ctx->pc = 0x80CCAB68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAB68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CCAB68: stw     r3, 0(r4)
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
label_80CCAB6C:
    ctx->pc = 0x80CCAB6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAB6Cu)) return;
    // 80CCAB6C: lis     r3, -27375
    ctx->gpr[3] = ((u32)(s32)(-27375) << 16);

label_80CCAB70:
    ctx->pc = 0x80CCAB70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAB70u)) return;
    // 80CCAB70: addi    r3, r3, -30048
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-30048);

label_80CCAB74:
    ctx->pc = 0x80CCAB74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAB74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CCAB74: stw     r31, 0(r3)
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
label_80CCAB78:
    ctx->pc = 0x80CCAB78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCAB78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CCAB78: lwz     r31, 12(r1)
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
label_80CCAB7C:
    ctx->pc = 0x80CCAB7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAB7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCAB7C: lwz     r0, 20(r1)
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
label_80CCAB80:
    ctx->pc = 0x80CCAB80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CCAB80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCAB80: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCAB84:
    ctx->pc = 0x80CCAB84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAB84u)) return;
    // 80CCAB84: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CCAB88:
    ctx->pc = 0x80CCAB88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAB88u)) return;
    // 80CCAB88: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CC95A0;
        }
    }

label_80CCAB8C:
    ctx->pc = 0x80CCAB8Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCAB8Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CCAB8C: stwu     r1, -32(r1)
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
label_80CCAB90:
    ctx->pc = 0x80CCAB90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAB90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CCAB90: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCAB94:
    ctx->pc = 0x80CCAB94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAB94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CCAB94: stw     r0, 36(r1)
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
label_80CCAB98:
    ctx->pc = 0x80CCAB98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAB98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CCAB98: stw     r31, 28(r1)
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
label_80CCAB9C:
    ctx->pc = 0x80CCAB9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAB9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCAB9C: stw     r30, 24(r1)
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
label_80CCABA0:
    ctx->pc = 0x80CCABA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCABA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCABA0: stw     r29, 20(r1)
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
label_80CCABA4:
    ctx->pc = 0x80CCABA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCABA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CCABA4: stw     r28, 16(r1)
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
label_80CCABA8:
    ctx->pc = 0x80CCABA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCABA8u)) return;
    // 80CCABA8: lis     r3, -27375
    ctx->gpr[3] = ((u32)(s32)(-27375) << 16);

label_80CCABAC:
    ctx->pc = 0x80CCABACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCABACu)) return;
    // 80CCABAC: addi    r30, r3, -30044
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(-30044);

label_80CCABB0:
    ctx->pc = 0x80CCABB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCABB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCABB0: lwz     r0, 0(r30)
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
label_80CCABB4:
    ctx->pc = 0x80CCABB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCABB4u)) return;
    // 80CCABB4: cmplwi  r0, 0x0000
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

label_80CCABB8:
    ctx->pc = 0x80CCABB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCABB8u)) return;
    // 80CCABB8: bc    12, 2, 0x80CCAC18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CCAC18;
        }
    }

label_80CCABBC:
    ctx->pc = 0x80CCABBCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCABBCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80CCABBC: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_80CCABC0:
    ctx->pc = 0x80CCABC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCABC0u)) return;
    // 80CCABC0: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_80CCABC4:
    ctx->pc = 0x80CCABC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCABC4u)) return;
    // 80CCABC4: lis     r3, -27375
    ctx->gpr[3] = ((u32)(s32)(-27375) << 16);

label_80CCABC8:
    ctx->pc = 0x80CCABC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCABC8u)) return;
    // 80CCABC8: addi    r31, r3, -30048
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(-30048);

label_80CCABCC:
    ctx->pc = 0x80CCABCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCABCCu)) return;
    // 80CCABCC: b       0x80CCABEC
    {
            goto label_80CCABEC;
    }

label_80CCABD0:
    ctx->pc = 0x80CCABD0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCABD0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CCABD0: lwz     r3, 0(r30)
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
label_80CCABD4:
    ctx->pc = 0x80CCABD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCABD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCABD4: lwzx    r3, r3, r29
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
label_80CCABD8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCABD8u)) return;
    // 80CCABD8: cmplwi  r3, 0x0000
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

label_80CCABDC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCABDCu)) return;
    // 80CCABDC: bc    12, 2, 0x80CCABE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CCABE4;
        }
    }

label_80CCABE0:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCABE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CCABE0: bl      0x8050F9E0
    {
            ctx->lr = 0x80CCABE4u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80CCABE4:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCABE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCABE4: addi    r29, r29, 4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4);

label_80CCABE8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCABE8u)) return;
    // 80CCABE8: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_80CCABEC:
    ctx->pc = 0x80CCABECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCABECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCABEC: lwz     r0, 0(r31)
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
label_80CCABF0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCABF0u)) return;
    // 80CCABF0: cmpw    r28, r0
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

label_80CCABF4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCABF4u)) return;
    // 80CCABF4: bc    12, 0, 0x80CCABD0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80CCABD0u;
                return;
            }
            goto label_80CCABD0;
        }
    }

label_80CCABF8:
    ctx->pc = 0x80CCABF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCABF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80CCABF8: lis     r3, -27375
    ctx->gpr[3] = ((u32)(s32)(-27375) << 16);

label_80CCABFC:
    ctx->pc = 0x80CCABFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCABFCu)) return;
    // 80CCABFC: addi    r3, r3, -30044
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-30044);

label_80CCAC00:
    ctx->pc = 0x80CCAC00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAC00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCAC00: lwz     r3, 0(r3)
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
label_80CCAC04:
    ctx->pc = 0x80CCAC04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAC04u)) return;
    // 80CCAC04: bl      0x8050ED40
    {
            ctx->lr = 0x80CCAC08u;
            ctx->pc = 0x8050ED40u;
            return;
    }

label_80CCAC08:
    ctx->pc = 0x80CCAC08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCAC08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80CCAC08: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80CCAC0C:
    ctx->pc = 0x80CCAC0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAC0Cu)) return;
    // 80CCAC0C: lis     r3, -27375
    ctx->gpr[3] = ((u32)(s32)(-27375) << 16);

label_80CCAC10:
    ctx->pc = 0x80CCAC10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAC10u)) return;
    // 80CCAC10: addi    r3, r3, -30044
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-30044);

label_80CCAC14:
    ctx->pc = 0x80CCAC14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAC14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CCAC14: stw     r0, 0(r3)
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
label_80CCAC18:
    ctx->pc = 0x80CCAC18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCAC18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CCAC18: lwz     r31, 28(r1)
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
label_80CCAC1C:
    ctx->pc = 0x80CCAC1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAC1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCAC1C: lwz     r30, 24(r1)
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
label_80CCAC20:
    ctx->pc = 0x80CCAC20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAC20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCAC20: lwz     r29, 20(r1)
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
label_80CCAC24:
    ctx->pc = 0x80CCAC24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAC24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CCAC24: lwz     r28, 16(r1)
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
label_80CCAC28:
    ctx->pc = 0x80CCAC28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAC28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCAC28: lwz     r0, 36(r1)
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
label_80CCAC2C:
    ctx->pc = 0x80CCAC2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CCAC2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCAC2C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCAC30:
    ctx->pc = 0x80CCAC30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAC30u)) return;
    // 80CCAC30: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80CCAC34:
    ctx->pc = 0x80CCAC34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAC34u)) return;
    // 80CCAC34: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CC95A0;
        }
    }

label_80CCAC38:
    ctx->pc = 0x80CCAC38u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCAC38u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CCAC38: stwu     r1, -16(r1)
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
label_80CCAC3C:
    ctx->pc = 0x80CCAC3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAC3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCAC3C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCAC40:
    ctx->pc = 0x80CCAC40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAC40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCAC40: stw     r0, 20(r1)
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
label_80CCAC44:
    ctx->pc = 0x80CCAC44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAC44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CCAC44: stw     r31, 12(r1)
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
label_80CCAC48:
    ctx->pc = 0x80CCAC48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAC48u)) return;
    // 80CCAC48: lis     r6, -27375
    ctx->gpr[6] = ((u32)(s32)(-27375) << 16);

label_80CCAC4C:
    ctx->pc = 0x80CCAC4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAC4Cu)) return;
    // 80CCAC4C: addi    r6, r6, -30048
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-30048);

label_80CCAC50:
    ctx->pc = 0x80CCAC50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAC50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCAC50: lwz     r0, 0(r6)
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
label_80CCAC54:
    ctx->pc = 0x80CCAC54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAC54u)) return;
    // 80CCAC54: cmpw    r3, r0
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

label_80CCAC58:
    ctx->pc = 0x80CCAC58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAC58u)) return;
    // 80CCAC58: bc    4, 0, 0x80CCAC94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CCAC94;
        }
    }

label_80CCAC5C:
    ctx->pc = 0x80CCAC5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCAC5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80CCAC5C: lis     r6, -27375
    ctx->gpr[6] = ((u32)(s32)(-27375) << 16);

label_80CCAC60:
    ctx->pc = 0x80CCAC60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAC60u)) return;
    // 80CCAC60: addi    r6, r6, -30044
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-30044);

label_80CCAC64:
    ctx->pc = 0x80CCAC64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAC64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCAC64: lwz     r6, 0(r6)
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
label_80CCAC68:
    ctx->pc = 0x80CCAC68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAC68u)) return;
    // 80CCAC68: rlwinm r31, r3, 2, 0, 29
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80CCAC6C:
    ctx->pc = 0x80CCAC6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAC6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCAC6C: lwzx    r0, r6, r31
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
label_80CCAC70:
    ctx->pc = 0x80CCAC70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAC70u)) return;
    // 80CCAC70: cmplwi  r0, 0x0000
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

label_80CCAC74:
    ctx->pc = 0x80CCAC74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAC74u)) return;
    // 80CCAC74: bc    4, 2, 0x80CCAC94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CCAC94;
        }
    }

label_80CCAC78:
    ctx->pc = 0x80CCAC78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCAC78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CCAC78: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80CCAC7C:
    ctx->pc = 0x80CCAC7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAC7Cu)) return;
    // 80CCAC7C: or   r4, r5, r5
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80CCAC80:
    ctx->pc = 0x80CCAC80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAC80u)) return;
    // 80CCAC80: bl      0x80CCA984
    {
            ctx->lr = 0x80CCAC84u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80CCA984u;
                return;
            }
            goto label_80CCA984;
    }

label_80CCAC84:
    ctx->pc = 0x80CCAC84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCAC84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80CCAC84: lis     r4, -27375
    ctx->gpr[4] = ((u32)(s32)(-27375) << 16);

label_80CCAC88:
    ctx->pc = 0x80CCAC88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAC88u)) return;
    // 80CCAC88: addi    r4, r4, -30044
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-30044);

label_80CCAC8C:
    ctx->pc = 0x80CCAC8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAC8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCAC8C: lwz     r4, 0(r4)
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
label_80CCAC90:
    ctx->pc = 0x80CCAC90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAC90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CCAC90: stwx    r3, r4, r31
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
label_80CCAC94:
    ctx->pc = 0x80CCAC94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCAC94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CCAC94: lwz     r31, 12(r1)
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
label_80CCAC98:
    ctx->pc = 0x80CCAC98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAC98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCAC98: lwz     r0, 20(r1)
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
label_80CCAC9C:
    ctx->pc = 0x80CCAC9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CCAC9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCAC9C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCACA0:
    ctx->pc = 0x80CCACA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCACA0u)) return;
    // 80CCACA0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CCACA4:
    ctx->pc = 0x80CCACA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCACA4u)) return;
    // 80CCACA4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CC95A0;
        }
    }

label_80CCACA8:
    ctx->pc = 0x80CCACA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCACA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CCACA8: stwu     r1, -16(r1)
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
label_80CCACAC:
    ctx->pc = 0x80CCACACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCACACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCACAC: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCACB0:
    ctx->pc = 0x80CCACB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCACB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCACB0: stw     r0, 20(r1)
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
label_80CCACB4:
    ctx->pc = 0x80CCACB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCACB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CCACB4: stw     r31, 12(r1)
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
label_80CCACB8:
    ctx->pc = 0x80CCACB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCACB8u)) return;
    // 80CCACB8: lis     r4, -27375
    ctx->gpr[4] = ((u32)(s32)(-27375) << 16);

label_80CCACBC:
    ctx->pc = 0x80CCACBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCACBCu)) return;
    // 80CCACBC: addi    r4, r4, -30048
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-30048);

label_80CCACC0:
    ctx->pc = 0x80CCACC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCACC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCACC0: lwz     r0, 0(r4)
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
label_80CCACC4:
    ctx->pc = 0x80CCACC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCACC4u)) return;
    // 80CCACC4: cmpw    r3, r0
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

label_80CCACC8:
    ctx->pc = 0x80CCACC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCACC8u)) return;
    // 80CCACC8: bc    4, 0, 0x80CCAD00
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CCAD00;
        }
    }

label_80CCACCC:
    ctx->pc = 0x80CCACCCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCACCCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80CCACCC: lis     r4, -27375
    ctx->gpr[4] = ((u32)(s32)(-27375) << 16);

label_80CCACD0:
    ctx->pc = 0x80CCACD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCACD0u)) return;
    // 80CCACD0: addi    r4, r4, -30044
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-30044);

label_80CCACD4:
    ctx->pc = 0x80CCACD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCACD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCACD4: lwz     r4, 0(r4)
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
label_80CCACD8:
    ctx->pc = 0x80CCACD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCACD8u)) return;
    // 80CCACD8: rlwinm r31, r3, 2, 0, 29
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80CCACDC:
    ctx->pc = 0x80CCACDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCACDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCACDC: lwzx    r3, r4, r31
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
label_80CCACE0:
    ctx->pc = 0x80CCACE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCACE0u)) return;
    // 80CCACE0: cmplwi  r3, 0x0000
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

label_80CCACE4:
    ctx->pc = 0x80CCACE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCACE4u)) return;
    // 80CCACE4: bc    12, 2, 0x80CCAD00
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CCAD00;
        }
    }

label_80CCACE8:
    ctx->pc = 0x80CCACE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCACE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CCACE8: bl      0x8050F9E0
    {
            ctx->lr = 0x80CCACECu;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80CCACEC:
    ctx->pc = 0x80CCACECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCACECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80CCACEC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80CCACF0:
    ctx->pc = 0x80CCACF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCACF0u)) return;
    // 80CCACF0: lis     r3, -27375
    ctx->gpr[3] = ((u32)(s32)(-27375) << 16);

label_80CCACF4:
    ctx->pc = 0x80CCACF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCACF4u)) return;
    // 80CCACF4: addi    r3, r3, -30044
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-30044);

label_80CCACF8:
    ctx->pc = 0x80CCACF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCACF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCACF8: lwz     r3, 0(r3)
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
label_80CCACFC:
    ctx->pc = 0x80CCACFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCACFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CCACFC: stwx    r0, r3, r31
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
label_80CCAD00:
    ctx->pc = 0x80CCAD00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCAD00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CCAD00: lwz     r31, 12(r1)
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
label_80CCAD04:
    ctx->pc = 0x80CCAD04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAD04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCAD04: lwz     r0, 20(r1)
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
label_80CCAD08:
    ctx->pc = 0x80CCAD08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CCAD08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCAD08: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCAD0C:
    ctx->pc = 0x80CCAD0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAD0Cu)) return;
    // 80CCAD0C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CCAD10:
    ctx->pc = 0x80CCAD10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAD10u)) return;
    // 80CCAD10: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CC95A0;
        }
    }

label_80CCAD14:
    ctx->pc = 0x80CCAD14u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCAD14u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCAD14: stwu     r1, -16(r1)
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
label_80CCAD18:
    ctx->pc = 0x80CCAD18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAD18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCAD18: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCAD1C:
    ctx->pc = 0x80CCAD1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAD1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CCAD1C: stw     r0, 20(r1)
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
label_80CCAD20:
    ctx->pc = 0x80CCAD20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAD20u)) return;
    // 80CCAD20: lis     r6, -27375
    ctx->gpr[6] = ((u32)(s32)(-27375) << 16);

label_80CCAD24:
    ctx->pc = 0x80CCAD24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAD24u)) return;
    // 80CCAD24: addi    r6, r6, -30048
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-30048);

label_80CCAD28:
    ctx->pc = 0x80CCAD28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAD28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCAD28: lwz     r0, 0(r6)
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
label_80CCAD2C:
    ctx->pc = 0x80CCAD2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAD2Cu)) return;
    // 80CCAD2C: cmpw    r3, r0
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

label_80CCAD30:
    ctx->pc = 0x80CCAD30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAD30u)) return;
    // 80CCAD30: bc    4, 0, 0x80CCAD54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CCAD54;
        }
    }

label_80CCAD34:
    ctx->pc = 0x80CCAD34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCAD34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80CCAD34: lis     r6, -27375
    ctx->gpr[6] = ((u32)(s32)(-27375) << 16);

label_80CCAD38:
    ctx->pc = 0x80CCAD38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAD38u)) return;
    // 80CCAD38: addi    r6, r6, -30044
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-30044);

label_80CCAD3C:
    ctx->pc = 0x80CCAD3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAD3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCAD3C: lwz     r6, 0(r6)
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
label_80CCAD40:
    ctx->pc = 0x80CCAD40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAD40u)) return;
    // 80CCAD40: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80CCAD44:
    ctx->pc = 0x80CCAD44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAD44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCAD44: lwzx    r3, r6, r0
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
label_80CCAD48:
    ctx->pc = 0x80CCAD48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAD48u)) return;
    // 80CCAD48: cmplwi  r3, 0x0000
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

label_80CCAD4C:
    ctx->pc = 0x80CCAD4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAD4Cu)) return;
    // 80CCAD4C: bc    12, 2, 0x80CCAD54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CCAD54;
        }
    }

label_80CCAD50:
    ctx->pc = 0x80CCAD50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCAD50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CCAD50: bl      0x80CCAA40
    {
            ctx->lr = 0x80CCAD54u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80CCAA40u;
                return;
            }
            goto label_80CCAA40;
    }

label_80CCAD54:
    ctx->pc = 0x80CCAD54u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCAD54u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCAD54: lwz     r0, 20(r1)
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
label_80CCAD58:
    ctx->pc = 0x80CCAD58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CCAD58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCAD58: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCAD5C:
    ctx->pc = 0x80CCAD5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAD5Cu)) return;
    // 80CCAD5C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CCAD60:
    ctx->pc = 0x80CCAD60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAD60u)) return;
    // 80CCAD60: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CC95A0;
        }
    }

label_80CCAD64:
    ctx->pc = 0x80CCAD64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCAD64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCAD64: stwu     r1, -16(r1)
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
label_80CCAD68:
    ctx->pc = 0x80CCAD68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAD68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCAD68: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCAD6C:
    ctx->pc = 0x80CCAD6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAD6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CCAD6C: stw     r0, 20(r1)
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
label_80CCAD70:
    ctx->pc = 0x80CCAD70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAD70u)) return;
    // 80CCAD70: lis     r6, -27375
    ctx->gpr[6] = ((u32)(s32)(-27375) << 16);

label_80CCAD74:
    ctx->pc = 0x80CCAD74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAD74u)) return;
    // 80CCAD74: addi    r6, r6, -30048
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-30048);

label_80CCAD78:
    ctx->pc = 0x80CCAD78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAD78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCAD78: lwz     r0, 0(r6)
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
label_80CCAD7C:
    ctx->pc = 0x80CCAD7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAD7Cu)) return;
    // 80CCAD7C: cmpw    r3, r0
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

label_80CCAD80:
    ctx->pc = 0x80CCAD80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAD80u)) return;
    // 80CCAD80: bc    4, 0, 0x80CCADA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CCADA4;
        }
    }

label_80CCAD84:
    ctx->pc = 0x80CCAD84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCAD84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80CCAD84: lis     r6, -27375
    ctx->gpr[6] = ((u32)(s32)(-27375) << 16);

label_80CCAD88:
    ctx->pc = 0x80CCAD88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAD88u)) return;
    // 80CCAD88: addi    r6, r6, -30044
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-30044);

label_80CCAD8C:
    ctx->pc = 0x80CCAD8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAD8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCAD8C: lwz     r6, 0(r6)
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
label_80CCAD90:
    ctx->pc = 0x80CCAD90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAD90u)) return;
    // 80CCAD90: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80CCAD94:
    ctx->pc = 0x80CCAD94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAD94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCAD94: lwzx    r3, r6, r0
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
label_80CCAD98:
    ctx->pc = 0x80CCAD98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAD98u)) return;
    // 80CCAD98: cmplwi  r3, 0x0000
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

label_80CCAD9C:
    ctx->pc = 0x80CCAD9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAD9Cu)) return;
    // 80CCAD9C: bc    12, 2, 0x80CCADA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CCADA4;
        }
    }

label_80CCADA0:
    ctx->pc = 0x80CCADA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCADA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CCADA0: bl      0x80CCAA90
    {
            ctx->lr = 0x80CCADA4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80CCAA90u;
                return;
            }
            goto label_80CCAA90;
    }

label_80CCADA4:
    ctx->pc = 0x80CCADA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCADA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCADA4: lwz     r0, 20(r1)
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
label_80CCADA8:
    ctx->pc = 0x80CCADA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CCADA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCADA8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCADAC:
    ctx->pc = 0x80CCADACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCADACu)) return;
    // 80CCADAC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CCADB0:
    ctx->pc = 0x80CCADB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCADB0u)) return;
    // 80CCADB0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CC95A0;
        }
    }

label_80CCADB4:
    ctx->pc = 0x80CCADB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCADB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCADB4: stwu     r1, -16(r1)
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
label_80CCADB8:
    ctx->pc = 0x80CCADB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCADB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCADB8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCADBC:
    ctx->pc = 0x80CCADBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCADBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CCADBC: stw     r0, 20(r1)
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
label_80CCADC0:
    ctx->pc = 0x80CCADC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCADC0u)) return;
    // 80CCADC0: lis     r6, -27375
    ctx->gpr[6] = ((u32)(s32)(-27375) << 16);

label_80CCADC4:
    ctx->pc = 0x80CCADC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCADC4u)) return;
    // 80CCADC4: addi    r6, r6, -30048
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-30048);

label_80CCADC8:
    ctx->pc = 0x80CCADC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCADC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCADC8: lwz     r0, 0(r6)
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
label_80CCADCC:
    ctx->pc = 0x80CCADCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCADCCu)) return;
    // 80CCADCC: cmpw    r3, r0
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

label_80CCADD0:
    ctx->pc = 0x80CCADD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCADD0u)) return;
    // 80CCADD0: bc    4, 0, 0x80CCADF4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CCADF4;
        }
    }

label_80CCADD4:
    ctx->pc = 0x80CCADD4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCADD4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80CCADD4: lis     r6, -27375
    ctx->gpr[6] = ((u32)(s32)(-27375) << 16);

label_80CCADD8:
    ctx->pc = 0x80CCADD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCADD8u)) return;
    // 80CCADD8: addi    r6, r6, -30044
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-30044);

label_80CCADDC:
    ctx->pc = 0x80CCADDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCADDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCADDC: lwz     r6, 0(r6)
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
label_80CCADE0:
    ctx->pc = 0x80CCADE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCADE0u)) return;
    // 80CCADE0: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80CCADE4:
    ctx->pc = 0x80CCADE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCADE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCADE4: lwzx    r3, r6, r0
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
label_80CCADE8:
    ctx->pc = 0x80CCADE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCADE8u)) return;
    // 80CCADE8: cmplwi  r3, 0x0000
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

label_80CCADEC:
    ctx->pc = 0x80CCADECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCADECu)) return;
    // 80CCADEC: bc    12, 2, 0x80CCADF4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CCADF4;
        }
    }

label_80CCADF0:
    ctx->pc = 0x80CCADF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCADF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CCADF0: bl      0x80CCAAE0
    {
            ctx->lr = 0x80CCADF4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80CCAAE0u;
                return;
            }
            goto label_80CCAAE0;
    }

label_80CCADF4:
    ctx->pc = 0x80CCADF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCADF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCADF4: lwz     r0, 20(r1)
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
label_80CCADF8:
    ctx->pc = 0x80CCADF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CCADF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCADF8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCADFC:
    ctx->pc = 0x80CCADFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCADFCu)) return;
    // 80CCADFC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CCAE00:
    ctx->pc = 0x80CCAE00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAE00u)) return;
    // 80CCAE00: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CC95A0;
        }
    }

label_80CCAE04:
    ctx->pc = 0x80CCAE04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCAE04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80CCAE04: stwu     r1, -32(r1)
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
label_80CCAE08:
    ctx->pc = 0x80CCAE08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAE08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CCAE08: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCAE0C:
    ctx->pc = 0x80CCAE0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAE0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CCAE0C: stw     r0, 36(r1)
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
label_80CCAE10:
    ctx->pc = 0x80CCAE10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAE10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CCAE10: stw     r31, 28(r1)
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
label_80CCAE14:
    ctx->pc = 0x80CCAE14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAE14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CCAE14: stw     r30, 24(r1)
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
label_80CCAE18:
    ctx->pc = 0x80CCAE18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAE18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCAE18: stw     r29, 20(r1)
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
label_80CCAE1C:
    ctx->pc = 0x80CCAE1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAE1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCAE1C: stw     r28, 16(r1)
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
label_80CCAE20:
    ctx->pc = 0x80CCAE20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAE20u)) return;
    // 80CCAE20: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80CCAE24:
    ctx->pc = 0x80CCAE24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAE24u)) return;
    // 80CCAE24: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80CCAE28:
    ctx->pc = 0x80CCAE28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAE28u)) return;
    // 80CCAE28: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80CCAE2C:
    ctx->pc = 0x80CCAE2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAE2Cu)) return;
    // 80CCAE2C: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_80CCAE30:
    ctx->pc = 0x80CCAE30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAE30u)) return;
    // 80CCAE30: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCAE34:
    ctx->pc = 0x80CCAE34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAE34u)) return;
    // 80CCAE34: bl      0x80401DB0
    {
            ctx->lr = 0x80CCAE38u;
            ctx->pc = 0x80401DB0u;
            return;
    }

label_80CCAE38:
    ctx->pc = 0x80CCAE38u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCAE38u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CCAE38: lis     r4, -27375
    ctx->gpr[4] = ((u32)(s32)(-27375) << 16);

label_80CCAE3C:
    ctx->pc = 0x80CCAE3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAE3Cu)) return;
    // 80CCAE3C: addi    r4, r4, -30040
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-30040);

label_80CCAE40:
    ctx->pc = 0x80CCAE40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAE40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCAE40: lwz     r0, 0(r4)
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
label_80CCAE44:
    ctx->pc = 0x80CCAE44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAE44u)) return;
    // 80CCAE44: add   r4, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80CCAE48:
    ctx->pc = 0x80CCAE48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAE48u)) return;
    // 80CCAE48: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80CCAE4C:
    ctx->pc = 0x80CCAE4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAE4Cu)) return;
    // 80CCAE4C: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80CCAE50:
    ctx->pc = 0x80CCAE50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAE50u)) return;
    // 80CCAE50: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80CCAE54:
    ctx->pc = 0x80CCAE54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAE54u)) return;
    // 80CCAE54: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80CCAE58:
    ctx->pc = 0x80CCAE58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAE58u)) return;
    // 80CCAE58: li      r7, 120
    ctx->gpr[7] = (u32)(s32)(120);

label_80CCAE5C:
    ctx->pc = 0x80CCAE5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAE5Cu)) return;
    // 80CCAE5C: bl      0x8050A0D4
    {
            ctx->lr = 0x80CCAE60u;
            ctx->pc = 0x8050A0D4u;
            return;
    }

label_80CCAE60:
    ctx->pc = 0x80CCAE60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCAE60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CCAE60: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80CCAE64:
    ctx->pc = 0x80CCAE64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAE64u)) return;
    // 80CCAE64: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80CCAE68:
    ctx->pc = 0x80CCAE68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAE68u)) return;
    // 80CCAE68: bl      0x80509C74
    {
            ctx->lr = 0x80CCAE6Cu;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80CCAE6C:
    ctx->pc = 0x80CCAE6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCAE6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CCAE6C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80CCAE70:
    ctx->pc = 0x80CCAE70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAE70u)) return;
    // 80CCAE70: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80CCAE74:
    ctx->pc = 0x80CCAE74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAE74u)) return;
    // 80CCAE74: bl      0x80509BF8
    {
            ctx->lr = 0x80CCAE78u;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80CCAE78:
    ctx->pc = 0x80CCAE78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCAE78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CCAE78: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80CCAE7C:
    ctx->pc = 0x80CCAE7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAE7Cu)) return;
    // 80CCAE7C: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80CCAE80:
    ctx->pc = 0x80CCAE80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAE80u)) return;
    // 80CCAE80: bl      0x80509B94
    {
            ctx->lr = 0x80CCAE84u;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80CCAE84:
    ctx->pc = 0x80CCAE84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCAE84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80CCAE84: lis     r3, -27375
    ctx->gpr[3] = ((u32)(s32)(-27375) << 16);

label_80CCAE88:
    ctx->pc = 0x80CCAE88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAE88u)) return;
    // 80CCAE88: addi    r4, r3, -30040
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-30040);

label_80CCAE8C:
    ctx->pc = 0x80CCAE8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAE8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80CCAE8C: lwz     r3, 0(r4)
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
label_80CCAE90:
    ctx->pc = 0x80CCAE90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAE90u)) return;
    // 80CCAE90: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_80CCAE94:
    ctx->pc = 0x80CCAE94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAE94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CCAE94: stw     r0, 0(r4)
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
label_80CCAE98:
    ctx->pc = 0x80CCAE98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAE98u)) return;
    // 80CCAE98: rlwinm r0, r0, 0, 27, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000001Fu;
    }

label_80CCAE9C:
    ctx->pc = 0x80CCAE9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAE9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CCAE9C: stw     r0, 0(r4)
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
label_80CCAEA0:
    ctx->pc = 0x80CCAEA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAEA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CCAEA0: lwz     r31, 28(r1)
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
label_80CCAEA4:
    ctx->pc = 0x80CCAEA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAEA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCAEA4: lwz     r30, 24(r1)
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
label_80CCAEA8:
    ctx->pc = 0x80CCAEA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAEA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCAEA8: lwz     r29, 20(r1)
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
label_80CCAEAC:
    ctx->pc = 0x80CCAEACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAEACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CCAEAC: lwz     r28, 16(r1)
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
label_80CCAEB0:
    ctx->pc = 0x80CCAEB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAEB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCAEB0: lwz     r0, 36(r1)
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
label_80CCAEB4:
    ctx->pc = 0x80CCAEB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CCAEB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCAEB4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCAEB8:
    ctx->pc = 0x80CCAEB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAEB8u)) return;
    // 80CCAEB8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80CCAEBC:
    ctx->pc = 0x80CCAEBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAEBCu)) return;
    // 80CCAEBC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CC95A0;
        }
    }

label_80CCAEC0:
    ctx->pc = 0x80CCAEC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCAEC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CCAEC0: stwu     r1, -48(r1)
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
label_80CCAEC4:
    ctx->pc = 0x80CCAEC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAEC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CCAEC4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCAEC8:
    ctx->pc = 0x80CCAEC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAEC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CCAEC8: stw     r0, 52(r1)
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
label_80CCAECC:
    ctx->pc = 0x80CCAECCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAECCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CCAECC: stw     r31, 44(r1)
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
label_80CCAED0:
    ctx->pc = 0x80CCAED0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAED0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCAED0: stw     r30, 40(r1)
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
label_80CCAED4:
    ctx->pc = 0x80CCAED4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAED4u)) return;
    // 80CCAED4: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80CCAED8:
    ctx->pc = 0x80CCAED8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAED8u)) return;
    // 80CCAED8: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80CCAEDC:
    ctx->pc = 0x80CCAEDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAEDCu)) return;
    // 80CCAEDC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CCAEE0:
    ctx->pc = 0x80CCAEE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAEE0u)) return;
    // 80CCAEE0: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80CCAEE4:
    ctx->pc = 0x80CCAEE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAEE4u)) return;
    // 80CCAEE4: lis     r5, -32563
    ctx->gpr[5] = ((u32)(s32)(-32563) << 16);

label_80CCAEE8:
    ctx->pc = 0x80CCAEE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAEE8u)) return;
    // 80CCAEE8: addi    r5, r5, -20208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-20208);

label_80CCAEEC:
    ctx->pc = 0x80CCAEECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAEECu)) return;
    // 80CCAEEC: bl      0x8050FD60
    {
            ctx->lr = 0x80CCAEF0u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80CCAEF0:
    ctx->pc = 0x80CCAEF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCAEF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80CCAEF0: lis     r4, -27375
    ctx->gpr[4] = ((u32)(s32)(-27375) << 16);

label_80CCAEF4:
    ctx->pc = 0x80CCAEF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAEF4u)) return;
    // 80CCAEF4: addi    r4, r4, -30032
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-30032);

label_80CCAEF8:
    ctx->pc = 0x80CCAEF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAEF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCAEF8: stw     r3, 0(r4)
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
label_80CCAEFC:
    ctx->pc = 0x80CCAEFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAEFCu)) return;
    // 80CCAEFC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CCAF00:
    ctx->pc = 0x80CCAF00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAF00u)) return;
    // 80CCAF00: bl      0x8045F7C8
    {
            ctx->lr = 0x80CCAF04u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CCAF04:
    ctx->pc = 0x80CCAF04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 70u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCAF04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 70u : 1u;
    // 80CCAF04: lis     r3, -27375
    ctx->gpr[3] = ((u32)(s32)(-27375) << 16);

label_80CCAF08:
    ctx->pc = 0x80CCAF08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAF08u)) return;
    // 80CCAF08: addi    r4, r3, -30032
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-30032);

label_80CCAF0C:
    ctx->pc = 0x80CCAF0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAF0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 67u : 0u;
    // 80CCAF0C: lwz     r3, 0(r4)
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
label_80CCAF10:
    ctx->pc = 0x80CCAF10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAF10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 66u : 0u;
    // 80CCAF10: lwz     r3, 32(r3)
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
label_80CCAF14:
    ctx->pc = 0x80CCAF14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAF14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 65u : 0u;
    // 80CCAF14: lwz     r5, 16(r3)
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
label_80CCAF18:
    ctx->pc = 0x80CCAF18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAF18u)) return;
    // 80CCAF18: lis     r3, -27377
    ctx->gpr[3] = ((u32)(s32)(-27377) << 16);

label_80CCAF1C:
    ctx->pc = 0x80CCAF1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAF1Cu)) return;
    // 80CCAF1C: addi    r3, r3, 10016
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(10016);

label_80CCAF20:
    ctx->pc = 0x80CCAF20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAF20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 62u : 0u;
    // 80CCAF20: lfs     f2, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CCAF20u)) return;
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
label_80CCAF24:
    ctx->pc = 0x80CCAF24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAF24u)) return;
    // 80CCAF24: lis     r3, -27377
    ctx->gpr[3] = ((u32)(s32)(-27377) << 16);

label_80CCAF28:
    ctx->pc = 0x80CCAF28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAF28u)) return;
    // 80CCAF28: addi    r3, r3, 10024
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(10024);

label_80CCAF2C:
    ctx->pc = 0x80CCAF2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAF2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 59u : 0u;
    // 80CCAF2C: lfd     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CCAF2Cu)) return;
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
label_80CCAF30:
    ctx->pc = 0x80CCAF30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAF30u)) return;
    // 80CCAF30: xoris   r0, r30, 0x8000
    ctx->gpr[0] = ctx->gpr[30] ^ (0x8000u << 16);

label_80CCAF34:
    ctx->pc = 0x80CCAF34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAF34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 57u : 0u;
    // 80CCAF34: stw     r0, 12(r1)
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
label_80CCAF38:
    ctx->pc = 0x80CCAF38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAF38u)) return;
    // 80CCAF38: lis     r3, 17200
    ctx->gpr[3] = ((u32)(s32)(17200) << 16);

label_80CCAF3C:
    ctx->pc = 0x80CCAF3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAF3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 55u : 0u;
    // 80CCAF3C: stw     r3, 8(r1)
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
label_80CCAF40:
    ctx->pc = 0x80CCAF40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAF40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 54u : 0u;
    // 80CCAF40: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CCAF40u)) return;
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
label_80CCAF44:
    ctx->pc = 0x80CCAF44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAF44u)) return;
    // 80CCAF44: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80CCAF44u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_80CCAF48:
    ctx->pc = 0x80CCAF48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 17u, 0x80CCAF48u)) return;
    // 80CCAF48: fdivs   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80CCAF48u)) return;
    ppc_fdivs(ctx, 0, 2, 0);

label_80CCAF4C:
    ctx->pc = 0x80CCAF4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAF4Cu)) return;
    // 80CCAF4C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80CCAF4Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80CCAF50:
    ctx->pc = 0x80CCAF50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAF50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 34u : 0u;
    // 80CCAF50: stfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CCAF50u)) return;
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
label_80CCAF54:
    ctx->pc = 0x80CCAF54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAF54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 33u : 0u;
    // 80CCAF54: lwz     r0, 20(r1)
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
label_80CCAF58:
    ctx->pc = 0x80CCAF58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAF58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 32u : 0u;
    // 80CCAF58: stb     r0, 0(r5)
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
label_80CCAF5C:
    ctx->pc = 0x80CCAF5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAF5Cu)) return;
    // 80CCAF5C: xoris   r0, r31, 0x8000
    ctx->gpr[0] = ctx->gpr[31] ^ (0x8000u << 16);

label_80CCAF60:
    ctx->pc = 0x80CCAF60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAF60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 30u : 0u;
    // 80CCAF60: stw     r0, 28(r1)
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
label_80CCAF64:
    ctx->pc = 0x80CCAF64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAF64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 80CCAF64: stw     r3, 24(r1)
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
label_80CCAF68:
    ctx->pc = 0x80CCAF68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAF68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80CCAF68: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CCAF68u)) return;
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
label_80CCAF6C:
    ctx->pc = 0x80CCAF6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAF6Cu)) return;
    // 80CCAF6C: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80CCAF6Cu)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_80CCAF70:
    ctx->pc = 0x80CCAF70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 17u, 0x80CCAF70u)) return;
    // 80CCAF70: fdivs   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80CCAF70u)) return;
    ppc_fdivs(ctx, 0, 2, 0);

label_80CCAF74:
    ctx->pc = 0x80CCAF74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAF74u)) return;
    // 80CCAF74: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80CCAF74u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80CCAF78:
    ctx->pc = 0x80CCAF78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAF78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CCAF78: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CCAF78u)) return;
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
label_80CCAF7C:
    ctx->pc = 0x80CCAF7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAF7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCAF7C: lwz     r0, 36(r1)
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
label_80CCAF80:
    ctx->pc = 0x80CCAF80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAF80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCAF80: stb     r0, 1(r5)
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
label_80CCAF84:
    ctx->pc = 0x80CCAF84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAF84u)) return;
    // 80CCAF84: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80CCAF88:
    ctx->pc = 0x80CCAF88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAF88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCAF88: stw     r0, 4(r5)
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
label_80CCAF8C:
    ctx->pc = 0x80CCAF8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAF8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CCAF8C: stw     r0, 8(r5)
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
label_80CCAF90:
    ctx->pc = 0x80CCAF90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAF90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCAF90: lwz     r3, 0(r4)
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
label_80CCAF94:
    ctx->pc = 0x80CCAF94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAF94u)) return;
    // 80CCAF94: cmplwi  r3, 0x0000
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

label_80CCAF98:
    ctx->pc = 0x80CCAF98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAF98u)) return;
    // 80CCAF98: bc    12, 2, 0x80CCAFA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CCAFA8;
        }
    }

label_80CCAF9C:
    ctx->pc = 0x80CCAF9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCAF9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CCAF9C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80CCAFA0:
    ctx->pc = 0x80CCAFA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAFA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCAFA0: lwz     r3, 32(r3)
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
label_80CCAFA4:
    ctx->pc = 0x80CCAFA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAFA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CCAFA4: stb     r0, 0(r3)
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
label_80CCAFA8:
    ctx->pc = 0x80CCAFA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCAFA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCAFA8: lwz     r31, 44(r1)
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
label_80CCAFAC:
    ctx->pc = 0x80CCAFACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAFACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CCAFAC: lwz     r30, 40(r1)
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
label_80CCAFB0:
    ctx->pc = 0x80CCAFB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAFB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCAFB0: lwz     r0, 52(r1)
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
label_80CCAFB4:
    ctx->pc = 0x80CCAFB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CCAFB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCAFB4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCAFB8:
    ctx->pc = 0x80CCAFB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAFB8u)) return;
    // 80CCAFB8: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_80CCAFBC:
    ctx->pc = 0x80CCAFBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAFBCu)) return;
    // 80CCAFBC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CC95A0;
        }
    }

label_80CCAFC0:
    ctx->pc = 0x80CCAFC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 14u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCAFC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 14u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80CCAFC0: stwu     r1, -64(r1)
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
label_80CCAFC4:
    ctx->pc = 0x80CCAFC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAFC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80CCAFC4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCAFC8:
    ctx->pc = 0x80CCAFC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAFC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CCAFC8: stw     r0, 68(r1)
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
label_80CCAFCC:
    ctx->pc = 0x80CCAFCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAFCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CCAFCC: stw     r31, 60(r1)
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
label_80CCAFD0:
    ctx->pc = 0x80CCAFD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAFD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CCAFD0: stw     r30, 56(r1)
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
label_80CCAFD4:
    ctx->pc = 0x80CCAFD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAFD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CCAFD4: stw     r29, 52(r1)
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
label_80CCAFD8:
    ctx->pc = 0x80CCAFD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAFD8u)) return;
    // 80CCAFD8: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80CCAFDC:
    ctx->pc = 0x80CCAFDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAFDCu)) return;
    // 80CCAFDC: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80CCAFE0:
    ctx->pc = 0x80CCAFE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAFE0u)) return;
    // 80CCAFE0: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80CCAFE4:
    ctx->pc = 0x80CCAFE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAFE4u)) return;
    // 80CCAFE4: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CCAFE8:
    ctx->pc = 0x80CCAFE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAFE8u)) return;
    // 80CCAFE8: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80CCAFEC:
    ctx->pc = 0x80CCAFECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAFECu)) return;
    // 80CCAFEC: lis     r5, -32563
    ctx->gpr[5] = ((u32)(s32)(-32563) << 16);

label_80CCAFF0:
    ctx->pc = 0x80CCAFF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAFF0u)) return;
    // 80CCAFF0: addi    r5, r5, -20208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-20208);

label_80CCAFF4:
    ctx->pc = 0x80CCAFF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAFF4u)) return;
    // 80CCAFF4: bl      0x8050FD60
    {
            ctx->lr = 0x80CCAFF8u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80CCAFF8:
    ctx->pc = 0x80CCAFF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCAFF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80CCAFF8: lis     r4, -27375
    ctx->gpr[4] = ((u32)(s32)(-27375) << 16);

label_80CCAFFC:
    ctx->pc = 0x80CCAFFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCAFFCu)) return;
    // 80CCAFFC: addi    r4, r4, -30032
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-30032);

label_80CCB000:
    ctx->pc = 0x80CCB000u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB000u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCB000: stw     r3, 0(r4)
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
label_80CCB004:
    ctx->pc = 0x80CCB004u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB004u)) return;
    // 80CCB004: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CCB008:
    ctx->pc = 0x80CCB008u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB008u)) return;
    // 80CCB008: bl      0x8045F7C8
    {
            ctx->lr = 0x80CCB00Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CCB00C:
    ctx->pc = 0x80CCB00Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 70u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB00Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 70u : 1u;
    // 80CCB00C: lis     r3, -27375
    ctx->gpr[3] = ((u32)(s32)(-27375) << 16);

label_80CCB010:
    ctx->pc = 0x80CCB010u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB010u)) return;
    // 80CCB010: addi    r4, r3, -30032
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-30032);

label_80CCB014:
    ctx->pc = 0x80CCB014u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB014u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 67u : 0u;
    // 80CCB014: lwz     r3, 0(r4)
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
label_80CCB018:
    ctx->pc = 0x80CCB018u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB018u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 66u : 0u;
    // 80CCB018: lwz     r3, 32(r3)
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
label_80CCB01C:
    ctx->pc = 0x80CCB01Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB01Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 65u : 0u;
    // 80CCB01C: lwz     r5, 16(r3)
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
label_80CCB020:
    ctx->pc = 0x80CCB020u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB020u)) return;
    // 80CCB020: lis     r3, -27377
    ctx->gpr[3] = ((u32)(s32)(-27377) << 16);

label_80CCB024:
    ctx->pc = 0x80CCB024u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB024u)) return;
    // 80CCB024: addi    r3, r3, 10016
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(10016);

label_80CCB028:
    ctx->pc = 0x80CCB028u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB028u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 62u : 0u;
    // 80CCB028: lfs     f2, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CCB028u)) return;
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
label_80CCB02C:
    ctx->pc = 0x80CCB02Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB02Cu)) return;
    // 80CCB02C: lis     r3, -27377
    ctx->gpr[3] = ((u32)(s32)(-27377) << 16);

label_80CCB030:
    ctx->pc = 0x80CCB030u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB030u)) return;
    // 80CCB030: addi    r3, r3, 10024
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(10024);

label_80CCB034:
    ctx->pc = 0x80CCB034u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB034u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 59u : 0u;
    // 80CCB034: lfd     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CCB034u)) return;
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
label_80CCB038:
    ctx->pc = 0x80CCB038u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB038u)) return;
    // 80CCB038: xoris   r0, r29, 0x8000
    ctx->gpr[0] = ctx->gpr[29] ^ (0x8000u << 16);

label_80CCB03C:
    ctx->pc = 0x80CCB03Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB03Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 57u : 0u;
    // 80CCB03C: stw     r0, 12(r1)
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
label_80CCB040:
    ctx->pc = 0x80CCB040u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB040u)) return;
    // 80CCB040: lis     r3, 17200
    ctx->gpr[3] = ((u32)(s32)(17200) << 16);

label_80CCB044:
    ctx->pc = 0x80CCB044u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB044u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 55u : 0u;
    // 80CCB044: stw     r3, 8(r1)
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
label_80CCB048:
    ctx->pc = 0x80CCB048u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB048u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 54u : 0u;
    // 80CCB048: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CCB048u)) return;
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
label_80CCB04C:
    ctx->pc = 0x80CCB04Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB04Cu)) return;
    // 80CCB04C: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80CCB04Cu)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_80CCB050:
    ctx->pc = 0x80CCB050u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 17u, 0x80CCB050u)) return;
    // 80CCB050: fdivs   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80CCB050u)) return;
    ppc_fdivs(ctx, 0, 2, 0);

label_80CCB054:
    ctx->pc = 0x80CCB054u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB054u)) return;
    // 80CCB054: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80CCB054u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80CCB058:
    ctx->pc = 0x80CCB058u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB058u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 34u : 0u;
    // 80CCB058: stfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CCB058u)) return;
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
label_80CCB05C:
    ctx->pc = 0x80CCB05Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB05Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 33u : 0u;
    // 80CCB05C: lwz     r0, 20(r1)
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
label_80CCB060:
    ctx->pc = 0x80CCB060u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB060u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 32u : 0u;
    // 80CCB060: stb     r0, 0(r5)
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
label_80CCB064:
    ctx->pc = 0x80CCB064u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB064u)) return;
    // 80CCB064: xoris   r0, r31, 0x8000
    ctx->gpr[0] = ctx->gpr[31] ^ (0x8000u << 16);

label_80CCB068:
    ctx->pc = 0x80CCB068u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB068u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 30u : 0u;
    // 80CCB068: stw     r0, 28(r1)
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
label_80CCB06C:
    ctx->pc = 0x80CCB06Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB06Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 80CCB06C: stw     r3, 24(r1)
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
label_80CCB070:
    ctx->pc = 0x80CCB070u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB070u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80CCB070: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CCB070u)) return;
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
label_80CCB074:
    ctx->pc = 0x80CCB074u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB074u)) return;
    // 80CCB074: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80CCB074u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_80CCB078:
    ctx->pc = 0x80CCB078u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 17u, 0x80CCB078u)) return;
    // 80CCB078: fdivs   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80CCB078u)) return;
    ppc_fdivs(ctx, 0, 2, 0);

label_80CCB07C:
    ctx->pc = 0x80CCB07Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB07Cu)) return;
    // 80CCB07C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80CCB07Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80CCB080:
    ctx->pc = 0x80CCB080u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB080u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CCB080: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CCB080u)) return;
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
label_80CCB084:
    ctx->pc = 0x80CCB084u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB084u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCB084: lwz     r0, 36(r1)
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
label_80CCB088:
    ctx->pc = 0x80CCB088u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB088u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCB088: stb     r0, 1(r5)
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
label_80CCB08C:
    ctx->pc = 0x80CCB08Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB08Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CCB08C: stw     r30, 4(r5)
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
label_80CCB090:
    ctx->pc = 0x80CCB090u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB090u)) return;
    // 80CCB090: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80CCB094:
    ctx->pc = 0x80CCB094u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB094u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CCB094: stw     r0, 8(r5)
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
label_80CCB098:
    ctx->pc = 0x80CCB098u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB098u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCB098: lwz     r3, 0(r4)
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
label_80CCB09C:
    ctx->pc = 0x80CCB09Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB09Cu)) return;
    // 80CCB09C: cmplwi  r3, 0x0000
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

label_80CCB0A0:
    ctx->pc = 0x80CCB0A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB0A0u)) return;
    // 80CCB0A0: bc    12, 2, 0x80CCB0B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CCB0B0;
        }
    }

label_80CCB0A4:
    ctx->pc = 0x80CCB0A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB0A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CCB0A4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80CCB0A8:
    ctx->pc = 0x80CCB0A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB0A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCB0A8: lwz     r3, 32(r3)
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
label_80CCB0AC:
    ctx->pc = 0x80CCB0ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB0ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CCB0AC: stb     r0, 0(r3)
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
label_80CCB0B0:
    ctx->pc = 0x80CCB0B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB0B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCB0B0: lwz     r31, 60(r1)
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
label_80CCB0B4:
    ctx->pc = 0x80CCB0B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB0B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCB0B4: lwz     r30, 56(r1)
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
label_80CCB0B8:
    ctx->pc = 0x80CCB0B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB0B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CCB0B8: lwz     r29, 52(r1)
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
label_80CCB0BC:
    ctx->pc = 0x80CCB0BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB0BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCB0BC: lwz     r0, 68(r1)
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
label_80CCB0C0:
    ctx->pc = 0x80CCB0C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CCB0C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCB0C0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCB0C4:
    ctx->pc = 0x80CCB0C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB0C4u)) return;
    // 80CCB0C4: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_80CCB0C8:
    ctx->pc = 0x80CCB0C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB0C8u)) return;
    // 80CCB0C8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CC95A0;
        }
    }

label_80CCB0CC:
    ctx->pc = 0x80CCB0CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB0CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCB0CC: stwu     r1, -16(r1)
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
label_80CCB0D0:
    ctx->pc = 0x80CCB0D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB0D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCB0D0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCB0D4:
    ctx->pc = 0x80CCB0D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB0D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CCB0D4: stw     r0, 20(r1)
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
label_80CCB0D8:
    ctx->pc = 0x80CCB0D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB0D8u)) return;
    // 80CCB0D8: lis     r3, -27375
    ctx->gpr[3] = ((u32)(s32)(-27375) << 16);

label_80CCB0DC:
    ctx->pc = 0x80CCB0DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB0DCu)) return;
    // 80CCB0DC: addi    r3, r3, -30032
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-30032);

label_80CCB0E0:
    ctx->pc = 0x80CCB0E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB0E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCB0E0: lwz     r3, 0(r3)
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
label_80CCB0E4:
    ctx->pc = 0x80CCB0E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB0E4u)) return;
    // 80CCB0E4: cmplwi  r3, 0x0000
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

label_80CCB0E8:
    ctx->pc = 0x80CCB0E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB0E8u)) return;
    // 80CCB0E8: bc    12, 2, 0x80CCB100
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CCB100;
        }
    }

label_80CCB0EC:
    ctx->pc = 0x80CCB0ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB0ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CCB0EC: bl      0x8050F9E0
    {
            ctx->lr = 0x80CCB0F0u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80CCB0F0:
    ctx->pc = 0x80CCB0F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB0F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80CCB0F0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80CCB0F4:
    ctx->pc = 0x80CCB0F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB0F4u)) return;
    // 80CCB0F4: lis     r3, -27375
    ctx->gpr[3] = ((u32)(s32)(-27375) << 16);

label_80CCB0F8:
    ctx->pc = 0x80CCB0F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB0F8u)) return;
    // 80CCB0F8: addi    r3, r3, -30032
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-30032);

label_80CCB0FC:
    ctx->pc = 0x80CCB0FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB0FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CCB0FC: stw     r0, 0(r3)
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
label_80CCB100:
    ctx->pc = 0x80CCB100u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB100u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCB100: lwz     r0, 20(r1)
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
label_80CCB104:
    ctx->pc = 0x80CCB104u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CCB104u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCB104: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCB108:
    ctx->pc = 0x80CCB108u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB108u)) return;
    // 80CCB108: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CCB10C:
    ctx->pc = 0x80CCB10Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB10Cu)) return;
    // 80CCB10C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CC95A0;
        }
    }

label_80CCB110:
    ctx->pc = 0x80CCB110u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB110u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CCB110: stwu     r1, -16(r1)
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
label_80CCB114:
    ctx->pc = 0x80CCB114u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB114u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCB114: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCB118:
    ctx->pc = 0x80CCB118u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB118u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCB118: stw     r0, 20(r1)
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
label_80CCB11C:
    ctx->pc = 0x80CCB11Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB11Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CCB11C: stw     r31, 12(r1)
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
label_80CCB120:
    ctx->pc = 0x80CCB120u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB120u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCB120: stw     r30, 8(r1)
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
label_80CCB124:
    ctx->pc = 0x80CCB124u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB124u)) return;
    // 80CCB124: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80CCB128:
    ctx->pc = 0x80CCB128u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB128u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCB128: lwz     r31, 32(r30)
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
label_80CCB12C:
    ctx->pc = 0x80CCB12Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB12Cu)) return;
    // 80CCB12C: li      r3, 16
    ctx->gpr[3] = (u32)(s32)(16);

label_80CCB130:
    ctx->pc = 0x80CCB130u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB130u)) return;
    // 80CCB130: bl      0x8050EF60
    {
            ctx->lr = 0x80CCB134u;
            ctx->pc = 0x8050EF60u;
            return;
    }

label_80CCB134:
    ctx->pc = 0x80CCB134u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 24u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB134u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 24u : 1u;
    // 80CCB134: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80CCB138:
    ctx->pc = 0x80CCB138u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB138u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80CCB138: stb     r0, 0(r31)
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
label_80CCB13C:
    ctx->pc = 0x80CCB13Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB13Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80CCB13C: stb     r0, 12(r3)
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
label_80CCB140:
    ctx->pc = 0x80CCB140u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB140u)) return;
    // 80CCB140: li      r0, 255
    ctx->gpr[0] = (u32)(s32)(255);

label_80CCB144:
    ctx->pc = 0x80CCB144u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB144u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80CCB144: stb     r0, 13(r3)
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
label_80CCB148:
    ctx->pc = 0x80CCB148u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB148u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80CCB148: stb     r0, 14(r3)
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
label_80CCB14C:
    ctx->pc = 0x80CCB14Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB14Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80CCB14C: stb     r0, 15(r3)
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
label_80CCB150:
    ctx->pc = 0x80CCB150u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB150u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80CCB150: stw     r3, 16(r31)
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
label_80CCB154:
    ctx->pc = 0x80CCB154u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB154u)) return;
    // 80CCB154: lis     r3, -32563
    ctx->gpr[3] = ((u32)(s32)(-32563) << 16);

label_80CCB158:
    ctx->pc = 0x80CCB158u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB158u)) return;
    // 80CCB158: addi    r0, r3, -20080
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-20080);

label_80CCB15C:
    ctx->pc = 0x80CCB15Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB15Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80CCB15C: stw     r0, 16(r30)
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
label_80CCB160:
    ctx->pc = 0x80CCB160u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB160u)) return;
    // 80CCB160: lis     r3, -32563
    ctx->gpr[3] = ((u32)(s32)(-32563) << 16);

label_80CCB164:
    ctx->pc = 0x80CCB164u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB164u)) return;
    // 80CCB164: addi    r0, r3, -19816
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-19816);

label_80CCB168:
    ctx->pc = 0x80CCB168u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB168u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CCB168: stw     r0, 20(r30)
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
label_80CCB16C:
    ctx->pc = 0x80CCB16Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB16Cu)) return;
    // 80CCB16C: lis     r3, -32563
    ctx->gpr[3] = ((u32)(s32)(-32563) << 16);

label_80CCB170:
    ctx->pc = 0x80CCB170u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB170u)) return;
    // 80CCB170: addi    r0, r3, -19700
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-19700);

label_80CCB174:
    ctx->pc = 0x80CCB174u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB174u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCB174: stw     r0, 24(r30)
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
label_80CCB178:
    ctx->pc = 0x80CCB178u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB178u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCB178: lwz     r31, 12(r1)
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
label_80CCB17C:
    ctx->pc = 0x80CCB17Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB17Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CCB17C: lwz     r30, 8(r1)
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
label_80CCB180:
    ctx->pc = 0x80CCB180u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB180u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCB180: lwz     r0, 20(r1)
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
label_80CCB184:
    ctx->pc = 0x80CCB184u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CCB184u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCB184: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCB188:
    ctx->pc = 0x80CCB188u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB188u)) return;
    // 80CCB188: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CCB18C:
    ctx->pc = 0x80CCB18Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB18Cu)) return;
    // 80CCB18C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CC95A0;
        }
    }

label_80CCB190:
    ctx->pc = 0x80CCB190u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB190u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CCB190: stwu     r1, -16(r1)
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
label_80CCB194:
    ctx->pc = 0x80CCB194u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB194u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CCB194: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCB198:
    ctx->pc = 0x80CCB198u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB198u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CCB198: stw     r0, 20(r1)
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
label_80CCB19C:
    ctx->pc = 0x80CCB19Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB19Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCB19C: stw     r31, 12(r1)
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
label_80CCB1A0:
    ctx->pc = 0x80CCB1A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB1A0u)) return;
    // 80CCB1A0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80CCB1A4:
    ctx->pc = 0x80CCB1A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB1A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CCB1A4: lwz     r4, 32(r31)
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
label_80CCB1A8:
    ctx->pc = 0x80CCB1A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB1A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCB1A8: lwz     r5, 16(r4)
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
label_80CCB1AC:
    ctx->pc = 0x80CCB1ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB1ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CCB1AC: lbz     r0, 0(r4)
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
label_80CCB1B0:
    ctx->pc = 0x80CCB1B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB1B0u)) return;
    // 80CCB1B0: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80CCB1B4:
    ctx->pc = 0x80CCB1B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB1B4u)) return;
    // 80CCB1B4: cmpwi   r0, 2
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

label_80CCB1B8:
    ctx->pc = 0x80CCB1B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB1B8u)) return;
    // 80CCB1B8: bc    12, 2, 0x80CCB218
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CCB218;
        }
    }

label_80CCB1BC:
    ctx->pc = 0x80CCB1BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB1BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CCB1BC: bc    4, 0, 0x80CCB1D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CCB1D0;
        }
    }

label_80CCB1C0:
    ctx->pc = 0x80CCB1C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB1C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCB1C0: cmpwi   r0, 0
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

label_80CCB1C4:
    ctx->pc = 0x80CCB1C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB1C4u)) return;
    // 80CCB1C4: bc    12, 2, 0x80CCB27C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CCB27C;
        }
    }

label_80CCB1C8:
    ctx->pc = 0x80CCB1C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB1C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CCB1C8: bc    4, 0, 0x80CCB1E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CCB1E0;
        }
    }

label_80CCB1CC:
    ctx->pc = 0x80CCB1CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB1CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CCB1CC: b       0x80CCB27C
    {
            goto label_80CCB27C;
    }

label_80CCB1D0:
    ctx->pc = 0x80CCB1D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB1D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCB1D0: cmpwi   r0, 4
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

label_80CCB1D4:
    ctx->pc = 0x80CCB1D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB1D4u)) return;
    // 80CCB1D4: bc    12, 2, 0x80CCB268
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CCB268;
        }
    }

label_80CCB1D8:
    ctx->pc = 0x80CCB1D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB1D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CCB1D8: bc    4, 0, 0x80CCB27C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CCB27C;
        }
    }

label_80CCB1DC:
    ctx->pc = 0x80CCB1DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB1DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CCB1DC: b       0x80CCB23C
    {
            goto label_80CCB23C;
    }

label_80CCB1E0:
    ctx->pc = 0x80CCB1E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB1E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CCB1E0: lbz     r3, 12(r5)
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
label_80CCB1E4:
    ctx->pc = 0x80CCB1E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB1E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCB1E4: lbz     r0, 0(r5)
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
label_80CCB1E8:
    ctx->pc = 0x80CCB1E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB1E8u)) return;
    // 80CCB1E8: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80CCB1EC:
    ctx->pc = 0x80CCB1ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB1ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CCB1EC: stb     r0, 12(r5)
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
label_80CCB1F0:
    ctx->pc = 0x80CCB1F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB1F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCB1F0: lbz     r3, 12(r5)
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
label_80CCB1F4:
    ctx->pc = 0x80CCB1F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB1F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CCB1F4: lbz     r0, 0(r5)
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
label_80CCB1F8:
    ctx->pc = 0x80CCB1F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB1F8u)) return;
    // 80CCB1F8: subfic  r0, r0, 255
    {
        u64 res = (u64)(u32)(s32)(255) + (u64)(~ctx->gpr[0]) + 1u;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80CCB1FC:
    ctx->pc = 0x80CCB1FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB1FCu)) return;
    // 80CCB1FC: cmpw    r3, r0
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

label_80CCB200:
    ctx->pc = 0x80CCB200u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB200u)) return;
    // 80CCB200: bc    12, 0, 0x80CCB27C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CCB27C;
        }
    }

label_80CCB204:
    ctx->pc = 0x80CCB204u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB204u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80CCB204: li      r0, 255
    ctx->gpr[0] = (u32)(s32)(255);

label_80CCB208:
    ctx->pc = 0x80CCB208u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB208u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CCB208: stb     r0, 12(r5)
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
label_80CCB20C:
    ctx->pc = 0x80CCB20Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB20Cu)) return;
    // 80CCB20C: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_80CCB210:
    ctx->pc = 0x80CCB210u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB210u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCB210: stb     r0, 0(r4)
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
label_80CCB214:
    ctx->pc = 0x80CCB214u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB214u)) return;
    // 80CCB214: b       0x80CCB27C
    {
            goto label_80CCB27C;
    }

label_80CCB218:
    ctx->pc = 0x80CCB218u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB218u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CCB218: lwz     r3, 8(r5)
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
label_80CCB21C:
    ctx->pc = 0x80CCB21Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB21Cu)) return;
    // 80CCB21C: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_80CCB220:
    ctx->pc = 0x80CCB220u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB220u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CCB220: stw     r3, 8(r5)
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
label_80CCB224:
    ctx->pc = 0x80CCB224u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB224u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCB224: lwz     r0, 4(r5)
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
label_80CCB228:
    ctx->pc = 0x80CCB228u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB228u)) return;
    // 80CCB228: cmpw    r3, r0
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

label_80CCB22C:
    ctx->pc = 0x80CCB22Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB22Cu)) return;
    // 80CCB22C: bc    4, 1, 0x80CCB27C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CCB27C;
        }
    }

label_80CCB230:
    ctx->pc = 0x80CCB230u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB230u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CCB230: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_80CCB234:
    ctx->pc = 0x80CCB234u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB234u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCB234: stb     r0, 0(r4)
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
label_80CCB238:
    ctx->pc = 0x80CCB238u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB238u)) return;
    // 80CCB238: b       0x80CCB27C
    {
            goto label_80CCB27C;
    }

label_80CCB23C:
    ctx->pc = 0x80CCB23Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB23Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCB23C: lbz     r3, 1(r5)
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
label_80CCB240:
    ctx->pc = 0x80CCB240u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB240u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCB240: lbz     r0, 12(r5)
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
label_80CCB244:
    ctx->pc = 0x80CCB244u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB244u)) return;
    // 80CCB244: subf   r0, r3, r0
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_80CCB248:
    ctx->pc = 0x80CCB248u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB248u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCB248: stb     r0, 12(r5)
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
label_80CCB24C:
    ctx->pc = 0x80CCB24Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB24Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CCB24C: lbz     r3, 12(r5)
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
label_80CCB250:
    ctx->pc = 0x80CCB250u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB250u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCB250: lbz     r0, 1(r5)
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
label_80CCB254:
    ctx->pc = 0x80CCB254u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB254u)) return;
    // 80CCB254: cmplw   r3, r0
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

label_80CCB258:
    ctx->pc = 0x80CCB258u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB258u)) return;
    // 80CCB258: bc    12, 1, 0x80CCB27C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CCB27C;
        }
    }

label_80CCB25C:
    ctx->pc = 0x80CCB25Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB25Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CCB25C: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_80CCB260:
    ctx->pc = 0x80CCB260u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB260u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCB260: stb     r0, 0(r4)
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
label_80CCB264:
    ctx->pc = 0x80CCB264u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB264u)) return;
    // 80CCB264: b       0x80CCB27C
    {
            goto label_80CCB27C;
    }

label_80CCB268:
    ctx->pc = 0x80CCB268u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB268u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CCB268: bl      0x8050F9E0
    {
            ctx->lr = 0x80CCB26Cu;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80CCB26C:
    ctx->pc = 0x80CCB26Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB26Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80CCB26C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80CCB270:
    ctx->pc = 0x80CCB270u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB270u)) return;
    // 80CCB270: lis     r3, -27375
    ctx->gpr[3] = ((u32)(s32)(-27375) << 16);

label_80CCB274:
    ctx->pc = 0x80CCB274u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB274u)) return;
    // 80CCB274: addi    r3, r3, -30032
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-30032);

label_80CCB278:
    ctx->pc = 0x80CCB278u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB278u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CCB278: stw     r0, 0(r3)
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
label_80CCB27C:
    ctx->pc = 0x80CCB27Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB27Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCB27C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80CCB280:
    ctx->pc = 0x80CCB280u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB280u)) return;
    // 80CCB280: bl      0x80CCB298
    {
            ctx->lr = 0x80CCB284u;
            goto label_80CCB298;
    }

label_80CCB284:
    ctx->pc = 0x80CCB284u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB284u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CCB284: lwz     r31, 12(r1)
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
label_80CCB288:
    ctx->pc = 0x80CCB288u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB288u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCB288: lwz     r0, 20(r1)
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
label_80CCB28C:
    ctx->pc = 0x80CCB28Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CCB28Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCB28C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCB290:
    ctx->pc = 0x80CCB290u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB290u)) return;
    // 80CCB290: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CCB294:
    ctx->pc = 0x80CCB294u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB294u)) return;
    // 80CCB294: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CC95A0;
        }
    }

label_80CCB298:
    ctx->pc = 0x80CCB298u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB298u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CCB298: stwu     r1, -16(r1)
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
label_80CCB29C:
    ctx->pc = 0x80CCB29Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB29Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CCB29C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCB2A0:
    ctx->pc = 0x80CCB2A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB2A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCB2A0: stw     r0, 20(r1)
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
label_80CCB2A4:
    ctx->pc = 0x80CCB2A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB2A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCB2A4: lwz     r3, 32(r3)
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
label_80CCB2A8:
    ctx->pc = 0x80CCB2A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB2A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CCB2A8: lwz     r4, 16(r3)
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
label_80CCB2AC:
    ctx->pc = 0x80CCB2ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB2ACu)) return;
    // 80CCB2AC: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80CCB2B0:
    ctx->pc = 0x80CCB2B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB2B0u)) return;
    // 80CCB2B0: addi    r3, r3, 4120
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4120);

label_80CCB2B4:
    ctx->pc = 0x80CCB2B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB2B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCB2B4: lwz     r0, 0(r3)
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
label_80CCB2B8:
    ctx->pc = 0x80CCB2B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB2B8u)) return;
    // 80CCB2B8: cmpwi   r0, 0
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

label_80CCB2BC:
    ctx->pc = 0x80CCB2BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB2BCu)) return;
    // 80CCB2BC: bc    4, 2, 0x80CCB2FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CCB2FC;
        }
    }

label_80CCB2C0:
    ctx->pc = 0x80CCB2C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 15u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB2C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 15u : 1u;
    // 80CCB2C0: lis     r3, -27377
    ctx->gpr[3] = ((u32)(s32)(-27377) << 16);

label_80CCB2C4:
    ctx->pc = 0x80CCB2C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB2C4u)) return;
    // 80CCB2C4: addi    r3, r3, 10032
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(10032);

label_80CCB2C8:
    ctx->pc = 0x80CCB2C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB2C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80CCB2C8: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CCB2C8u)) return;
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
label_80CCB2CC:
    ctx->pc = 0x80CCB2CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB2CCu)) return;
    // 80CCB2CC: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80CCB2CCu)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_80CCB2D0:
    ctx->pc = 0x80CCB2D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB2D0u)) return;
    // 80CCB2D0: lis     r3, -27377
    ctx->gpr[3] = ((u32)(s32)(-27377) << 16);

label_80CCB2D4:
    ctx->pc = 0x80CCB2D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB2D4u)) return;
    // 80CCB2D4: addi    r3, r3, 10036
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(10036);

label_80CCB2D8:
    ctx->pc = 0x80CCB2D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB2D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CCB2D8: lfs     f3, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CCB2D8u)) return;
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
label_80CCB2DC:
    ctx->pc = 0x80CCB2DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB2DCu)) return;
    // 80CCB2DC: lis     r3, -27377
    ctx->gpr[3] = ((u32)(s32)(-27377) << 16);

label_80CCB2E0:
    ctx->pc = 0x80CCB2E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB2E0u)) return;
    // 80CCB2E0: addi    r3, r3, 10040
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(10040);

label_80CCB2E4:
    ctx->pc = 0x80CCB2E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB2E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CCB2E4: lfs     f4, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CCB2E4u)) return;
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
label_80CCB2E8:
    ctx->pc = 0x80CCB2E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB2E8u)) return;
    // 80CCB2E8: lis     r3, -27377
    ctx->gpr[3] = ((u32)(s32)(-27377) << 16);

label_80CCB2EC:
    ctx->pc = 0x80CCB2ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB2ECu)) return;
    // 80CCB2EC: addi    r3, r3, 10044
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(10044);

label_80CCB2F0:
    ctx->pc = 0x80CCB2F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB2F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCB2F0: lfs     f5, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CCB2F0u)) return;
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
label_80CCB2F4:
    ctx->pc = 0x80CCB2F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB2F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCB2F4: lwz     r3, 12(r4)
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
label_80CCB2F8:
    ctx->pc = 0x80CCB2F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB2F8u)) return;
    // 80CCB2F8: bl      0x80CCB334
    {
            ctx->lr = 0x80CCB2FCu;
            goto label_80CCB334;
    }

label_80CCB2FC:
    ctx->pc = 0x80CCB2FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB2FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCB2FC: lwz     r0, 20(r1)
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
label_80CCB300:
    ctx->pc = 0x80CCB300u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CCB300u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCB300: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCB304:
    ctx->pc = 0x80CCB304u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB304u)) return;
    // 80CCB304: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CCB308:
    ctx->pc = 0x80CCB308u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB308u)) return;
    // 80CCB308: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CC95A0;
        }
    }

label_80CCB30C:
    ctx->pc = 0x80CCB30Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB30Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CCB30C: stwu     r1, -16(r1)
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
label_80CCB310:
    ctx->pc = 0x80CCB310u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB310u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCB310: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCB314:
    ctx->pc = 0x80CCB314u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB314u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CCB314: stw     r0, 20(r1)
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
label_80CCB318:
    ctx->pc = 0x80CCB318u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB318u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCB318: lwz     r3, 32(r3)
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
label_80CCB31C:
    ctx->pc = 0x80CCB31Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB31Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCB31C: lwz     r3, 16(r3)
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
label_80CCB320:
    ctx->pc = 0x80CCB320u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB320u)) return;
    // 80CCB320: bl      0x8050ED40
    {
            ctx->lr = 0x80CCB324u;
            ctx->pc = 0x8050ED40u;
            return;
    }

label_80CCB324:
    ctx->pc = 0x80CCB324u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB324u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCB324: lwz     r0, 20(r1)
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
label_80CCB328:
    ctx->pc = 0x80CCB328u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CCB328u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCB328: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCB32C:
    ctx->pc = 0x80CCB32Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB32Cu)) return;
    // 80CCB32C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CCB330:
    ctx->pc = 0x80CCB330u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB330u)) return;
    // 80CCB330: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CC95A0;
        }
    }

label_80CCB334:
    ctx->pc = 0x80CCB334u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB334u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCB334: stwu     r1, -16(r1)
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
label_80CCB338:
    ctx->pc = 0x80CCB338u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB338u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CCB338: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCB33C:
    ctx->pc = 0x80CCB33Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB33Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCB33C: stw     r0, 20(r1)
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
label_80CCB340:
    ctx->pc = 0x80CCB340u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB340u)) return;
    // 80CCB340: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80CCB344:
    ctx->pc = 0x80CCB344u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB344u)) return;
    // 80CCB344: bl      0x80607948
    {
            ctx->lr = 0x80CCB348u;
            ctx->pc = 0x80607948u;
            return;
    }

label_80CCB348:
    ctx->pc = 0x80CCB348u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB348u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCB348: lwz     r0, 20(r1)
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
label_80CCB34C:
    ctx->pc = 0x80CCB34Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CCB34Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCB34C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCB350:
    ctx->pc = 0x80CCB350u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB350u)) return;
    // 80CCB350: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CCB354:
    ctx->pc = 0x80CCB354u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB354u)) return;
    // 80CCB354: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CC95A0;
        }
    }

label_80CCB358:
    ctx->pc = 0x80CCB358u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 24u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB358u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 24u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80CCB358: stwu     r1, -96(r1)
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
label_80CCB35C:
    ctx->pc = 0x80CCB35Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB35Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80CCB35C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCB360:
    ctx->pc = 0x80CCB360u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB360u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80CCB360: stw     r0, 100(r1)
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
label_80CCB364:
    ctx->pc = 0x80CCB364u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB364u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80CCB364: stfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CCB364u)) return;
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
label_80CCB368:
    ctx->pc = 0x80CCB368u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB368u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80CCB368: psq_st   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80CCB368u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80CCB368u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCB36C:
    ctx->pc = 0x80CCB36Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB36Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80CCB36C: stfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CCB36Cu)) return;
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
label_80CCB370:
    ctx->pc = 0x80CCB370u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB370u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80CCB370: psq_st   f30, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80CCB370u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x80CCB370u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCB374:
    ctx->pc = 0x80CCB374u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB374u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80CCB374: stfd     f29, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CCB374u)) return;
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
label_80CCB378:
    ctx->pc = 0x80CCB378u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB378u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80CCB378: psq_st   f29, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80CCB378u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x80CCB378u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCB37C:
    ctx->pc = 0x80CCB37Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB37Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80CCB37C: stfd     f28, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CCB37Cu)) return;
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
label_80CCB380:
    ctx->pc = 0x80CCB380u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB380u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80CCB380: psq_st   f28, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80CCB380u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x80CCB380u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCB384:
    ctx->pc = 0x80CCB384u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB384u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80CCB384: stfd     f27, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CCB384u)) return;
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
label_80CCB388:
    ctx->pc = 0x80CCB388u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB388u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CCB388: psq_st   f27, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80CCB388u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_store_inline(ctx, 27u, ea, false, 0u, false, 0x80CCB388u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCB38C:
    ctx->pc = 0x80CCB38Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB38Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CCB38C: stw     r31, 12(r1)
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
label_80CCB390:
    ctx->pc = 0x80CCB390u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB390u)) return;
    // 80CCB390: fmr    f27, f1
    if (!ppc_fp_available_inline(ctx, 0x80CCB390u)) return;
    ctx->fpr[27] = ctx->fpr[1];

label_80CCB394:
    ctx->pc = 0x80CCB394u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB394u)) return;
    // 80CCB394: fmr    f28, f2
    if (!ppc_fp_available_inline(ctx, 0x80CCB394u)) return;
    ctx->fpr[28] = ctx->fpr[2];

label_80CCB398:
    ctx->pc = 0x80CCB398u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB398u)) return;
    // 80CCB398: fmr    f29, f3
    if (!ppc_fp_available_inline(ctx, 0x80CCB398u)) return;
    ctx->fpr[29] = ctx->fpr[3];

label_80CCB39C:
    ctx->pc = 0x80CCB39Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB39Cu)) return;
    // 80CCB39C: fmr    f30, f4
    if (!ppc_fp_available_inline(ctx, 0x80CCB39Cu)) return;
    ctx->fpr[30] = ctx->fpr[4];

label_80CCB3A0:
    ctx->pc = 0x80CCB3A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB3A0u)) return;
    // 80CCB3A0: fmr    f31, f5
    if (!ppc_fp_available_inline(ctx, 0x80CCB3A0u)) return;
    ctx->fpr[31] = ctx->fpr[5];

label_80CCB3A4:
    ctx->pc = 0x80CCB3A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB3A4u)) return;
    // 80CCB3A4: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CCB3A8:
    ctx->pc = 0x80CCB3A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB3A8u)) return;
    // 80CCB3A8: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80CCB3AC:
    ctx->pc = 0x80CCB3ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB3ACu)) return;
    // 80CCB3AC: lis     r5, -32563
    ctx->gpr[5] = ((u32)(s32)(-32563) << 16);

label_80CCB3B0:
    ctx->pc = 0x80CCB3B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB3B0u)) return;
    // 80CCB3B0: addi    r5, r5, -19404
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-19404);

label_80CCB3B4:
    ctx->pc = 0x80CCB3B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB3B4u)) return;
    // 80CCB3B4: bl      0x8050FD60
    {
            ctx->lr = 0x80CCB3B8u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80CCB3B8:
    ctx->pc = 0x80CCB3B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB3B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CCB3B8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80CCB3BC:
    ctx->pc = 0x80CCB3BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB3BCu)) return;
    // 80CCB3BC: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_80CCB3C0:
    ctx->pc = 0x80CCB3C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB3C0u)) return;
    // 80CCB3C0: bl      0x8050EF60
    {
            ctx->lr = 0x80CCB3C4u;
            ctx->pc = 0x8050EF60u;
            return;
    }

label_80CCB3C4:
    ctx->pc = 0x80CCB3C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 29u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB3C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 29u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80CCB3C4: lwz     r5, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCB3C8:
    ctx->pc = 0x80CCB3C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB3C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 80CCB3C8: stw     r3, 16(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCB3CC:
    ctx->pc = 0x80CCB3CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB3CCu)) return;
    // 80CCB3CC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80CCB3D0:
    ctx->pc = 0x80CCB3D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB3D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80CCB3D0: stb     r0, 0(r5)
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
label_80CCB3D4:
    ctx->pc = 0x80CCB3D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB3D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80CCB3D4: stfs     f27, 32(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCB3D4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[27]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCB3D8:
    ctx->pc = 0x80CCB3D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB3D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80CCB3D8: stfs     f28, 36(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCB3D8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[28]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCB3DC:
    ctx->pc = 0x80CCB3DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB3DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80CCB3DC: stfs     f29, 40(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCB3DCu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[29]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCB3E0:
    ctx->pc = 0x80CCB3E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB3E0u)) return;
    // 80CCB3E0: lis     r4, -27377
    ctx->gpr[4] = ((u32)(s32)(-27377) << 16);

label_80CCB3E4:
    ctx->pc = 0x80CCB3E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB3E4u)) return;
    // 80CCB3E4: addi    r4, r4, 10048
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10048);

label_80CCB3E8:
    ctx->pc = 0x80CCB3E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB3E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80CCB3E8: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CCB3E8u)) return;
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
label_80CCB3EC:
    ctx->pc = 0x80CCB3ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB3ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80CCB3EC: stfs     f0, 8(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCB3ECu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCB3F0:
    ctx->pc = 0x80CCB3F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB3F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80CCB3F0: stfs     f30, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CCB3F0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[30]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCB3F4:
    ctx->pc = 0x80CCB3F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB3F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80CCB3F4: stfs     f31, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CCB3F4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCB3F8:
    ctx->pc = 0x80CCB3F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB3F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80CCB3F8: psq_l   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80CCB3F8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80CCB3F8u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCB3FC:
    ctx->pc = 0x80CCB3FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB3FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80CCB3FC: lfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CCB3FCu)) return;
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
label_80CCB400:
    ctx->pc = 0x80CCB400u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB400u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80CCB400: psq_l   f30, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80CCB400u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x80CCB400u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCB404:
    ctx->pc = 0x80CCB404u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB404u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80CCB404: lfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CCB404u)) return;
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
label_80CCB408:
    ctx->pc = 0x80CCB408u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB408u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CCB408: psq_l   f29, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80CCB408u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x80CCB408u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCB40C:
    ctx->pc = 0x80CCB40Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB40Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CCB40C: lfd     f29, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CCB40Cu)) return;
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
label_80CCB410:
    ctx->pc = 0x80CCB410u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB410u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CCB410: psq_l   f28, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80CCB410u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x80CCB410u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCB414:
    ctx->pc = 0x80CCB414u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB414u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CCB414: lfd     f28, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CCB414u)) return;
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
label_80CCB418:
    ctx->pc = 0x80CCB418u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB418u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCB418: psq_l   f27, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80CCB418u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_load_inline(ctx, 27u, ea, false, 0u, false, 0x80CCB418u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCB41C:
    ctx->pc = 0x80CCB41Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB41Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCB41C: lfd     f27, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CCB41Cu)) return;
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
label_80CCB420:
    ctx->pc = 0x80CCB420u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB420u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CCB420: lwz     r31, 12(r1)
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
label_80CCB424:
    ctx->pc = 0x80CCB424u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB424u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCB424: lwz     r0, 100(r1)
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
label_80CCB428:
    ctx->pc = 0x80CCB428u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CCB428u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCB428: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCB42C:
    ctx->pc = 0x80CCB42Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB42Cu)) return;
    // 80CCB42C: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_80CCB430:
    ctx->pc = 0x80CCB430u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB430u)) return;
    // 80CCB430: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CC95A0;
        }
    }

label_80CCB434:
    ctx->pc = 0x80CCB434u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB434u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CCB434: lis     r4, -32563
    ctx->gpr[4] = ((u32)(s32)(-32563) << 16);

label_80CCB438:
    ctx->pc = 0x80CCB438u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB438u)) return;
    // 80CCB438: addi    r0, r4, -19364
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-19364);

label_80CCB43C:
    ctx->pc = 0x80CCB43Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB43Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCB43C: stw     r0, 16(r3)
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
label_80CCB440:
    ctx->pc = 0x80CCB440u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB440u)) return;
    // 80CCB440: lis     r4, -32563
    ctx->gpr[4] = ((u32)(s32)(-32563) << 16);

label_80CCB444:
    ctx->pc = 0x80CCB444u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB444u)) return;
    // 80CCB444: addi    r0, r4, -19132
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-19132);

label_80CCB448:
    ctx->pc = 0x80CCB448u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB448u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCB448: stw     r0, 20(r3)
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
label_80CCB44C:
    ctx->pc = 0x80CCB44Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB44Cu)) return;
    // 80CCB44C: lis     r4, -32563
    ctx->gpr[4] = ((u32)(s32)(-32563) << 16);

label_80CCB450:
    ctx->pc = 0x80CCB450u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB450u)) return;
    // 80CCB450: addi    r0, r4, -18980
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-18980);

label_80CCB454:
    ctx->pc = 0x80CCB454u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB454u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCB454: stw     r0, 24(r3)
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
label_80CCB458:
    ctx->pc = 0x80CCB458u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB458u)) return;
    // 80CCB458: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CC95A0;
        }
    }

label_80CCB45C:
    ctx->pc = 0x80CCB45Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB45Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CCB45C: stwu     r1, -32(r1)
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
label_80CCB460:
    ctx->pc = 0x80CCB460u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB460u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CCB460: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCB464:
    ctx->pc = 0x80CCB464u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB464u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CCB464: stw     r0, 36(r1)
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
label_80CCB468:
    ctx->pc = 0x80CCB468u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB468u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCB468: stw     r31, 28(r1)
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
label_80CCB46C:
    ctx->pc = 0x80CCB46Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB46Cu)) return;
    // 80CCB46C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80CCB470:
    ctx->pc = 0x80CCB470u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB470u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CCB470: lwz     r4, 32(r31)
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
label_80CCB474:
    ctx->pc = 0x80CCB474u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB474u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCB474: lwz     r5, 16(r4)
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
label_80CCB478:
    ctx->pc = 0x80CCB478u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB478u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CCB478: lbz     r0, 0(r4)
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
label_80CCB47C:
    ctx->pc = 0x80CCB47Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB47Cu)) return;
    // 80CCB47C: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80CCB480:
    ctx->pc = 0x80CCB480u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB480u)) return;
    // 80CCB480: cmpwi   r0, 1
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

label_80CCB484:
    ctx->pc = 0x80CCB484u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB484u)) return;
    // 80CCB484: bc    12, 2, 0x80CCB4B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CCB4B0;
        }
    }

label_80CCB488:
    ctx->pc = 0x80CCB488u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB488u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CCB488: bc    4, 0, 0x80CCB498
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CCB498;
        }
    }

label_80CCB48C:
    ctx->pc = 0x80CCB48Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB48Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCB48C: cmpwi   r0, 0
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

label_80CCB490:
    ctx->pc = 0x80CCB490u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB490u)) return;
    // 80CCB490: bc    4, 0, 0x80CCB4A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CCB4A4;
        }
    }

label_80CCB494:
    ctx->pc = 0x80CCB494u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB494u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CCB494: b       0x80CCB528
    {
            goto label_80CCB528;
    }

label_80CCB498:
    ctx->pc = 0x80CCB498u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB498u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCB498: cmpwi   r0, 3
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

label_80CCB49C:
    ctx->pc = 0x80CCB49Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB49Cu)) return;
    // 80CCB49C: bc    4, 0, 0x80CCB528
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CCB528;
        }
    }

label_80CCB4A0:
    ctx->pc = 0x80CCB4A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB4A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CCB4A0: b       0x80CCB51C
    {
            goto label_80CCB51C;
    }

label_80CCB4A4:
    ctx->pc = 0x80CCB4A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB4A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CCB4A4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80CCB4A8:
    ctx->pc = 0x80CCB4A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB4A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCB4A8: stb     r0, 0(r4)
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
label_80CCB4AC:
    ctx->pc = 0x80CCB4ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB4ACu)) return;
    // 80CCB4AC: b       0x80CCB528
    {
            goto label_80CCB528;
    }

label_80CCB4B0:
    ctx->pc = 0x80CCB4B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 24u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB4B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 24u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80CCB4B0: lfs     f1, 8(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CCB4B0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCB4B4:
    ctx->pc = 0x80CCB4B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB4B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80CCB4B4: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCB4B4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
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
label_80CCB4B8:
    ctx->pc = 0x80CCB4B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB4B8u)) return;
    // 80CCB4B8: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80CCB4B8u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80CCB4BC:
    ctx->pc = 0x80CCB4BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB4BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80CCB4BC: stfs     f0, 8(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CCB4BCu)) return;
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
label_80CCB4C0:
    ctx->pc = 0x80CCB4C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB4C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80CCB4C0: lfs     f2, 8(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CCB4C0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
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
label_80CCB4C4:
    ctx->pc = 0x80CCB4C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB4C4u)) return;
    // 80CCB4C4: lis     r3, -27375
    ctx->gpr[3] = ((u32)(s32)(-27375) << 16);

label_80CCB4C8:
    ctx->pc = 0x80CCB4C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB4C8u)) return;
    // 80CCB4C8: addi    r3, r3, -31476
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-31476);

label_80CCB4CC:
    ctx->pc = 0x80CCB4CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB4CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80CCB4CC: lwz     r3, 4(r3)
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
label_80CCB4D0:
    ctx->pc = 0x80CCB4D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB4D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80CCB4D0: lwz     r0, 4(r3)
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
label_80CCB4D4:
    ctx->pc = 0x80CCB4D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB4D4u)) return;
    // 80CCB4D4: lis     r3, -27377
    ctx->gpr[3] = ((u32)(s32)(-27377) << 16);

label_80CCB4D8:
    ctx->pc = 0x80CCB4D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB4D8u)) return;
    // 80CCB4D8: addi    r3, r3, 10056
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(10056);

label_80CCB4DC:
    ctx->pc = 0x80CCB4DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB4DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80CCB4DC: lfd     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CCB4DCu)) return;
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
label_80CCB4E0:
    ctx->pc = 0x80CCB4E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB4E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CCB4E0: stw     r0, 12(r1)
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
label_80CCB4E4:
    ctx->pc = 0x80CCB4E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB4E4u)) return;
    // 80CCB4E4: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_80CCB4E8:
    ctx->pc = 0x80CCB4E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB4E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CCB4E8: stw     r0, 8(r1)
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
label_80CCB4EC:
    ctx->pc = 0x80CCB4ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB4ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CCB4EC: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CCB4ECu)) return;
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
label_80CCB4F0:
    ctx->pc = 0x80CCB4F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB4F0u)) return;
    // 80CCB4F0: fsubs   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80CCB4F0u)) return;
    ppc_fsubs(ctx, 1, 0, 1);

label_80CCB4F4:
    ctx->pc = 0x80CCB4F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB4F4u)) return;
    // 80CCB4F4: lis     r3, -27377
    ctx->gpr[3] = ((u32)(s32)(-27377) << 16);

label_80CCB4F8:
    ctx->pc = 0x80CCB4F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB4F8u)) return;
    // 80CCB4F8: addi    r3, r3, 10052
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(10052);

label_80CCB4FC:
    ctx->pc = 0x80CCB4FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB4FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCB4FC: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CCB4FCu)) return;
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
label_80CCB500:
    ctx->pc = 0x80CCB500u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB500u)) return;
    // 80CCB500: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80CCB500u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_80CCB504:
    ctx->pc = 0x80CCB504u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB504u)) return;
    // 80CCB504: fcmpo   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80CCB504u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], true);

label_80CCB508:
    ctx->pc = 0x80CCB508u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB508u)) return;
    // 80CCB508: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80CCB50C:
    ctx->pc = 0x80CCB50Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB50Cu)) return;
    // 80CCB50C: bc    4, 2, 0x80CCB528
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CCB528;
        }
    }

label_80CCB510:
    ctx->pc = 0x80CCB510u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB510u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CCB510: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_80CCB514:
    ctx->pc = 0x80CCB514u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB514u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCB514: stb     r0, 0(r4)
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
label_80CCB518:
    ctx->pc = 0x80CCB518u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB518u)) return;
    // 80CCB518: b       0x80CCB528
    {
            goto label_80CCB528;
    }

label_80CCB51C:
    ctx->pc = 0x80CCB51Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB51Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCB51C: cmplwi  r31, 0x0000
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

label_80CCB520:
    ctx->pc = 0x80CCB520u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB520u)) return;
    // 80CCB520: bc    12, 2, 0x80CCB528
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CCB528;
        }
    }

label_80CCB524:
    ctx->pc = 0x80CCB524u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB524u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CCB524: bl      0x8050F9E0
    {
            ctx->lr = 0x80CCB528u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80CCB528:
    ctx->pc = 0x80CCB528u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB528u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCB528: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80CCB52C:
    ctx->pc = 0x80CCB52Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB52Cu)) return;
    // 80CCB52C: bl      0x80CCB544
    {
            ctx->lr = 0x80CCB530u;
            goto label_80CCB544;
    }

label_80CCB530:
    ctx->pc = 0x80CCB530u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB530u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CCB530: lwz     r31, 28(r1)
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
label_80CCB534:
    ctx->pc = 0x80CCB534u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB534u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCB534: lwz     r0, 36(r1)
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
label_80CCB538:
    ctx->pc = 0x80CCB538u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CCB538u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCB538: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCB53C:
    ctx->pc = 0x80CCB53Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB53Cu)) return;
    // 80CCB53C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80CCB540:
    ctx->pc = 0x80CCB540u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB540u)) return;
    // 80CCB540: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CC95A0;
        }
    }

label_80CCB544:
    ctx->pc = 0x80CCB544u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB544u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CCB544: stwu     r1, -16(r1)
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
label_80CCB548:
    ctx->pc = 0x80CCB548u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB548u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CCB548: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCB54C:
    ctx->pc = 0x80CCB54Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB54Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCB54C: stw     r0, 20(r1)
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
label_80CCB550:
    ctx->pc = 0x80CCB550u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB550u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCB550: stw     r31, 12(r1)
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
label_80CCB554:
    ctx->pc = 0x80CCB554u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB554u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CCB554: stw     r30, 8(r1)
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
label_80CCB558:
    ctx->pc = 0x80CCB558u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB558u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCB558: lwz     r31, 32(r3)
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
label_80CCB55C:
    ctx->pc = 0x80CCB55Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB55Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CCB55C: lwz     r30, 16(r31)
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
label_80CCB560:
    ctx->pc = 0x80CCB560u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB560u)) return;
    // 80CCB560: lis     r3, -27375
    ctx->gpr[3] = ((u32)(s32)(-27375) << 16);

label_80CCB564:
    ctx->pc = 0x80CCB564u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB564u)) return;
    // 80CCB564: addi    r3, r3, -30100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-30100);

label_80CCB568:
    ctx->pc = 0x80CCB568u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB568u)) return;
    // 80CCB568: bl      0x8060F594
    {
            ctx->lr = 0x80CCB56Cu;
            ctx->pc = 0x8060F594u;
            return;
    }

label_80CCB56C:
    ctx->pc = 0x80CCB56Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB56Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCB56C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCB570:
    ctx->pc = 0x80CCB570u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB570u)) return;
    // 80CCB570: bl      0x8004B49C
    {
            ctx->lr = 0x80CCB574u;
            ctx->pc = 0x8004B49Cu;
            return;
    }

label_80CCB574:
    ctx->pc = 0x80CCB574u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB574u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CCB574: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCB578:
    ctx->pc = 0x80CCB578u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB578u)) return;
    // 80CCB578: addi    r4, r31, 32
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(32);

label_80CCB57C:
    ctx->pc = 0x80CCB57Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB57Cu)) return;
    // 80CCB57C: bl      0x8004AA9C
    {
            ctx->lr = 0x80CCB580u;
            ctx->pc = 0x8004AA9Cu;
            return;
    }

label_80CCB580:
    ctx->pc = 0x80CCB580u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB580u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCB580: lfs     f1, 4(r30)
    if (!ppc_fp_available_inline(ctx, 0x80CCB580u)) return;
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
label_80CCB584:
    ctx->pc = 0x80CCB584u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB584u)) return;
    // 80CCB584: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCB588:
    ctx->pc = 0x80CCB588u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB588u)) return;
    // 80CCB588: lis     r4, -27377
    ctx->gpr[4] = ((u32)(s32)(-27377) << 16);

label_80CCB58C:
    ctx->pc = 0x80CCB58Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB58Cu)) return;
    // 80CCB58C: addi    r4, r4, 10052
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10052);

label_80CCB590:
    ctx->pc = 0x80CCB590u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB590u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCB590: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CCB590u)) return;
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
label_80CCB594:
    ctx->pc = 0x80CCB594u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB594u)) return;
    // 80CCB594: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80CCB594u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80CCB598:
    ctx->pc = 0x80CCB598u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB598u)) return;
    // 80CCB598: bl      0x8004A8A8
    {
            ctx->lr = 0x80CCB59Cu;
            ctx->pc = 0x8004A8A8u;
            return;
    }

label_80CCB59C:
    ctx->pc = 0x80CCB59Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB59Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 80CCB59C: lis     r3, -27375
    ctx->gpr[3] = ((u32)(s32)(-27375) << 16);

label_80CCB5A0:
    ctx->pc = 0x80CCB5A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB5A0u)) return;
    // 80CCB5A0: addi    r3, r3, -31560
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-31560);

label_80CCB5A4:
    ctx->pc = 0x80CCB5A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB5A4u)) return;
    // 80CCB5A4: lis     r4, -27375
    ctx->gpr[4] = ((u32)(s32)(-27375) << 16);

label_80CCB5A8:
    ctx->pc = 0x80CCB5A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB5A8u)) return;
    // 80CCB5A8: addi    r4, r4, -31488
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-31488);

label_80CCB5AC:
    ctx->pc = 0x80CCB5ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB5ACu)) return;
    // 80CCB5AC: lis     r5, -27375
    ctx->gpr[5] = ((u32)(s32)(-27375) << 16);

label_80CCB5B0:
    ctx->pc = 0x80CCB5B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB5B0u)) return;
    // 80CCB5B0: addi    r5, r5, -30132
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-30132);

label_80CCB5B4:
    ctx->pc = 0x80CCB5B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB5B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCB5B4: lfs     f1, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x80CCB5B4u)) return;
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
label_80CCB5B8:
    ctx->pc = 0x80CCB5B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB5B8u)) return;
    // 80CCB5B8: bl      0x805FA0F8
    {
            ctx->lr = 0x80CCB5BCu;
            ctx->pc = 0x805FA0F8u;
            return;
    }

label_80CCB5BC:
    ctx->pc = 0x80CCB5BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB5BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCB5BC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CCB5C0:
    ctx->pc = 0x80CCB5C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB5C0u)) return;
    // 80CCB5C0: bl      0x8004B504
    {
            ctx->lr = 0x80CCB5C4u;
            ctx->pc = 0x8004B504u;
            return;
    }

label_80CCB5C4:
    ctx->pc = 0x80CCB5C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB5C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCB5C4: lwz     r31, 12(r1)
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
label_80CCB5C8:
    ctx->pc = 0x80CCB5C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB5C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CCB5C8: lwz     r30, 8(r1)
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
label_80CCB5CC:
    ctx->pc = 0x80CCB5CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB5CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCB5CC: lwz     r0, 20(r1)
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
label_80CCB5D0:
    ctx->pc = 0x80CCB5D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CCB5D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCB5D0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCB5D4:
    ctx->pc = 0x80CCB5D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB5D4u)) return;
    // 80CCB5D4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CCB5D8:
    ctx->pc = 0x80CCB5D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB5D8u)) return;
    // 80CCB5D8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CC95A0;
        }
    }

label_80CCB5DC:
    ctx->pc = 0x80CCB5DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB5DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCB5DC: stwu     r1, -16(r1)
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
label_80CCB5E0:
    ctx->pc = 0x80CCB5E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB5E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CCB5E0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCB5E4:
    ctx->pc = 0x80CCB5E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB5E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCB5E4: stw     r0, 20(r1)
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
label_80CCB5E8:
    ctx->pc = 0x80CCB5E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB5E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CCB5E8: lwz     r3, 32(r3)
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
label_80CCB5EC:
    ctx->pc = 0x80CCB5ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB5ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCB5EC: lwz     r3, 16(r3)
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
label_80CCB5F0:
    ctx->pc = 0x80CCB5F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB5F0u)) return;
    // 80CCB5F0: cmplwi  r3, 0x0000
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

label_80CCB5F4:
    ctx->pc = 0x80CCB5F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB5F4u)) return;
    // 80CCB5F4: bc    12, 2, 0x80CCB5FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CCB5FC;
        }
    }

label_80CCB5F8:
    ctx->pc = 0x80CCB5F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB5F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CCB5F8: bl      0x8050ED40
    {
            ctx->lr = 0x80CCB5FCu;
            ctx->pc = 0x8050ED40u;
            return;
    }

label_80CCB5FC:
    ctx->pc = 0x80CCB5FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB5FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCB5FC: lwz     r0, 20(r1)
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
label_80CCB600:
    ctx->pc = 0x80CCB600u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CCB600u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCB600: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCB604:
    ctx->pc = 0x80CCB604u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB604u)) return;
    // 80CCB604: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CCB608:
    ctx->pc = 0x80CCB608u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB608u)) return;
    // 80CCB608: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CC95A0;
        }
    }

label_80CCB60C:
    ctx->pc = 0x80CCB60Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB60Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CCB60C: stwu     r1, -16(r1)
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
label_80CCB610:
    ctx->pc = 0x80CCB610u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB610u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCB610: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCB614:
    ctx->pc = 0x80CCB614u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB614u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CCB614: stw     r0, 20(r1)
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
label_80CCB618:
    ctx->pc = 0x80CCB618u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB618u)) return;
    // 80CCB618: lis     r3, -27375
    ctx->gpr[3] = ((u32)(s32)(-27375) << 16);

label_80CCB61C:
    ctx->pc = 0x80CCB61Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB61Cu)) return;
    // 80CCB61C: addi    r3, r3, -30100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-30100);

label_80CCB620:
    ctx->pc = 0x80CCB620u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB620u)) return;
    // 80CCB620: bl      0x80CCB8A8
    {
            ctx->lr = 0x80CCB624u;
            goto label_80CCB8A8;
    }

label_80CCB624:
    ctx->pc = 0x80CCB624u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB624u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCB624: lwz     r0, 20(r1)
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
label_80CCB628:
    ctx->pc = 0x80CCB628u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CCB628u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCB628: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCB62C:
    ctx->pc = 0x80CCB62Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB62Cu)) return;
    // 80CCB62C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CCB630:
    ctx->pc = 0x80CCB630u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB630u)) return;
    // 80CCB630: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CC95A0;
        }
    }

label_80CCB634:
    ctx->pc = 0x80CCB634u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB634u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CCB634: stwu     r1, -16(r1)
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
label_80CCB638:
    ctx->pc = 0x80CCB638u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB638u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCB638: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCB63C:
    ctx->pc = 0x80CCB63Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB63Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CCB63C: stw     r0, 20(r1)
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
label_80CCB640:
    ctx->pc = 0x80CCB640u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB640u)) return;
    // 80CCB640: lis     r3, -27375
    ctx->gpr[3] = ((u32)(s32)(-27375) << 16);

label_80CCB644:
    ctx->pc = 0x80CCB644u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB644u)) return;
    // 80CCB644: addi    r3, r3, -30100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-30100);

label_80CCB648:
    ctx->pc = 0x80CCB648u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB648u)) return;
    // 80CCB648: bl      0x8060F2FC
    {
            ctx->lr = 0x80CCB64Cu;
            ctx->pc = 0x8060F2FCu;
            return;
    }

label_80CCB64C:
    ctx->pc = 0x80CCB64Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB64Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCB64C: lwz     r0, 20(r1)
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
label_80CCB650:
    ctx->pc = 0x80CCB650u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CCB650u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCB650: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCB654:
    ctx->pc = 0x80CCB654u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB654u)) return;
    // 80CCB654: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CCB658:
    ctx->pc = 0x80CCB658u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB658u)) return;
    // 80CCB658: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CC95A0;
        }
    }

label_80CCB65C:
    ctx->pc = 0x80CCB65Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB65Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCB65C: stwu     r1, -64(r1)
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
label_80CCB660:
    ctx->pc = 0x80CCB660u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB660u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CCB660: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCB664:
    ctx->pc = 0x80CCB664u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB664u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCB664: stw     r0, 68(r1)
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
label_80CCB668:
    ctx->pc = 0x80CCB668u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB668u)) return;
    // 80CCB668: addi    r11, r1, 64
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(64);

label_80CCB66C:
    ctx->pc = 0x80CCB66Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB66Cu)) return;
    // 80CCB66C: bl      0x80006D3C
    {
            ctx->lr = 0x80CCB670u;
            ctx->pc = 0x80006D3Cu;
            return;
    }

label_80CCB670:
    ctx->pc = 0x80CCB670u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 17u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB670u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 17u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80CCB670: stw     r31, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCB674:
    ctx->pc = 0x80CCB674u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB674u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80CCB674: stw     r30, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCB678:
    ctx->pc = 0x80CCB678u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB678u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80CCB678: stw     r29, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCB67C:
    ctx->pc = 0x80CCB67Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB67Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80CCB67C: stw     r28, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCB680:
    ctx->pc = 0x80CCB680u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB680u)) return;
    // 80CCB680: fmr    f27, f1
    if (!ppc_fp_available_inline(ctx, 0x80CCB680u)) return;
    ctx->fpr[27] = ctx->fpr[1];

label_80CCB684:
    ctx->pc = 0x80CCB684u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB684u)) return;
    // 80CCB684: fmr    f28, f2
    if (!ppc_fp_available_inline(ctx, 0x80CCB684u)) return;
    ctx->fpr[28] = ctx->fpr[2];

label_80CCB688:
    ctx->pc = 0x80CCB688u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB688u)) return;
    // 80CCB688: fmr    f29, f3
    if (!ppc_fp_available_inline(ctx, 0x80CCB688u)) return;
    ctx->fpr[29] = ctx->fpr[3];

label_80CCB68C:
    ctx->pc = 0x80CCB68Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB68Cu)) return;
    // 80CCB68C: fmr    f30, f4
    if (!ppc_fp_available_inline(ctx, 0x80CCB68Cu)) return;
    ctx->fpr[30] = ctx->fpr[4];

label_80CCB690:
    ctx->pc = 0x80CCB690u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB690u)) return;
    // 80CCB690: fmr    f31, f5
    if (!ppc_fp_available_inline(ctx, 0x80CCB690u)) return;
    ctx->fpr[31] = ctx->fpr[5];

label_80CCB694:
    ctx->pc = 0x80CCB694u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB694u)) return;
    // 80CCB694: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80CCB698:
    ctx->pc = 0x80CCB698u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB698u)) return;
    // 80CCB698: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80CCB69C:
    ctx->pc = 0x80CCB69Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB69Cu)) return;
    // 80CCB69C: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80CCB6A0:
    ctx->pc = 0x80CCB6A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB6A0u)) return;
    // 80CCB6A0: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CCB6A4:
    ctx->pc = 0x80CCB6A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB6A4u)) return;
    // 80CCB6A4: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80CCB6A8:
    ctx->pc = 0x80CCB6A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB6A8u)) return;
    // 80CCB6A8: lis     r5, -32563
    ctx->gpr[5] = ((u32)(s32)(-32563) << 16);

label_80CCB6AC:
    ctx->pc = 0x80CCB6ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB6ACu)) return;
    // 80CCB6AC: addi    r5, r5, -18568
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-18568);

label_80CCB6B0:
    ctx->pc = 0x80CCB6B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB6B0u)) return;
    // 80CCB6B0: bl      0x8050FD60
    {
            ctx->lr = 0x80CCB6B4u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80CCB6B4:
    ctx->pc = 0x80CCB6B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB6B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80CCB6B4: rlwinm r30, r30, 2, 0, 29
    {
        ctx->gpr[30] = dolrecomp_rotl32(ctx->gpr[30], 2u) & 0xFFFFFFFCu;
    }

label_80CCB6B8:
    ctx->pc = 0x80CCB6B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB6B8u)) return;
    // 80CCB6B8: lis     r4, -27375
    ctx->gpr[4] = ((u32)(s32)(-27375) << 16);

label_80CCB6BC:
    ctx->pc = 0x80CCB6BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB6BCu)) return;
    // 80CCB6BC: addi    r31, r4, -30092
    ctx->gpr[31] = ctx->gpr[4] + (u32)(s32)(-30092);

label_80CCB6C0:
    ctx->pc = 0x80CCB6C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB6C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCB6C0: stwx    r3, r31, r30
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
label_80CCB6C4:
    ctx->pc = 0x80CCB6C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB6C4u)) return;
    // 80CCB6C4: li      r3, 16
    ctx->gpr[3] = (u32)(s32)(16);

label_80CCB6C8:
    ctx->pc = 0x80CCB6C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB6C8u)) return;
    // 80CCB6C8: bl      0x8050EF60
    {
            ctx->lr = 0x80CCB6CCu;
            ctx->pc = 0x8050EF60u;
            return;
    }

label_80CCB6CC:
    ctx->pc = 0x80CCB6CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 15u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB6CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 15u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80CCB6CC: lwzx    r4, r31, r30
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
label_80CCB6D0:
    ctx->pc = 0x80CCB6D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB6D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80CCB6D0: lwz     r4, 32(r4)
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
label_80CCB6D4:
    ctx->pc = 0x80CCB6D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB6D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80CCB6D4: stw     r3, 16(r4)
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
label_80CCB6D8:
    ctx->pc = 0x80CCB6D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB6D8u)) return;
    // 80CCB6D8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80CCB6DC:
    ctx->pc = 0x80CCB6DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB6DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CCB6DC: stb     r0, 0(r4)
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
label_80CCB6E0:
    ctx->pc = 0x80CCB6E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB6E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CCB6E0: stfs     f27, 32(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CCB6E0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[27]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCB6E4:
    ctx->pc = 0x80CCB6E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB6E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CCB6E4: stfs     f28, 36(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CCB6E4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[28]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCB6E8:
    ctx->pc = 0x80CCB6E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB6E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCB6E8: stfs     f29, 40(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CCB6E8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[29]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCB6EC:
    ctx->pc = 0x80CCB6ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB6ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCB6EC: stw     r0, 8(r4)
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
label_80CCB6F0:
    ctx->pc = 0x80CCB6F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB6F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CCB6F0: stfs     f30, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CCB6F0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[30]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCB6F4:
    ctx->pc = 0x80CCB6F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB6F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCB6F4: stfs     f31, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CCB6F4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCB6F8:
    ctx->pc = 0x80CCB6F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB6F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CCB6F8: stw     r28, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCB6FC:
    ctx->pc = 0x80CCB6FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB6FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCB6FC: stw     r29, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCB700:
    ctx->pc = 0x80CCB700u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB700u)) return;
    // 80CCB700: addi    r11, r1, 64
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(64);

label_80CCB704:
    ctx->pc = 0x80CCB704u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB704u)) return;
    // 80CCB704: bl      0x80006D88
    {
            ctx->lr = 0x80CCB708u;
            ctx->pc = 0x80006D88u;
            return;
    }

label_80CCB708:
    ctx->pc = 0x80CCB708u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB708u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CCB708: lwz     r31, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCB70C:
    ctx->pc = 0x80CCB70Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB70Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCB70C: lwz     r30, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCB710:
    ctx->pc = 0x80CCB710u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB710u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCB710: lwz     r29, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCB714:
    ctx->pc = 0x80CCB714u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB714u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CCB714: lwz     r28, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCB718:
    ctx->pc = 0x80CCB718u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB718u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCB718: lwz     r0, 68(r1)
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
label_80CCB71C:
    ctx->pc = 0x80CCB71Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CCB71Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCB71C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCB720:
    ctx->pc = 0x80CCB720u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB720u)) return;
    // 80CCB720: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_80CCB724:
    ctx->pc = 0x80CCB724u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB724u)) return;
    // 80CCB724: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CC95A0;
        }
    }

label_80CCB728:
    ctx->pc = 0x80CCB728u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB728u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CCB728: stwu     r1, -16(r1)
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
label_80CCB72C:
    ctx->pc = 0x80CCB72Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB72Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CCB72C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCB730:
    ctx->pc = 0x80CCB730u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB730u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CCB730: stw     r0, 20(r1)
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
label_80CCB734:
    ctx->pc = 0x80CCB734u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB734u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCB734: stw     r31, 12(r1)
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
label_80CCB738:
    ctx->pc = 0x80CCB738u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB738u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCB738: stw     r30, 8(r1)
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
label_80CCB73C:
    ctx->pc = 0x80CCB73Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB73Cu)) return;
    // 80CCB73C: rlwinm r30, r3, 2, 0, 29
    {
        ctx->gpr[30] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80CCB740:
    ctx->pc = 0x80CCB740u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB740u)) return;
    // 80CCB740: lis     r3, -27375
    ctx->gpr[3] = ((u32)(s32)(-27375) << 16);

label_80CCB744:
    ctx->pc = 0x80CCB744u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB744u)) return;
    // 80CCB744: addi    r31, r3, -30092
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(-30092);

label_80CCB748:
    ctx->pc = 0x80CCB748u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB748u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCB748: lwzx    r3, r31, r30
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
label_80CCB74C:
    ctx->pc = 0x80CCB74Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB74Cu)) return;
    // 80CCB74C: cmplwi  r3, 0x0000
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

label_80CCB750:
    ctx->pc = 0x80CCB750u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB750u)) return;
    // 80CCB750: bc    12, 2, 0x80CCB760
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CCB760;
        }
    }

label_80CCB754:
    ctx->pc = 0x80CCB754u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB754u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CCB754: bl      0x8050F9E0
    {
            ctx->lr = 0x80CCB758u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80CCB758:
    ctx->pc = 0x80CCB758u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB758u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCB758: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80CCB75C:
    ctx->pc = 0x80CCB75Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB75Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CCB75C: stwx    r0, r31, r30
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
label_80CCB760:
    ctx->pc = 0x80CCB760u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB760u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCB760: lwz     r31, 12(r1)
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
label_80CCB764:
    ctx->pc = 0x80CCB764u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB764u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CCB764: lwz     r30, 8(r1)
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
label_80CCB768:
    ctx->pc = 0x80CCB768u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB768u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCB768: lwz     r0, 20(r1)
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
label_80CCB76C:
    ctx->pc = 0x80CCB76Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CCB76Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCB76C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCB770:
    ctx->pc = 0x80CCB770u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB770u)) return;
    // 80CCB770: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CCB774:
    ctx->pc = 0x80CCB774u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB774u)) return;
    // 80CCB774: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CC95A0;
        }
    }

label_80CCB778:
    ctx->pc = 0x80CCB778u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB778u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CCB778: lis     r4, -32563
    ctx->gpr[4] = ((u32)(s32)(-32563) << 16);

label_80CCB77C:
    ctx->pc = 0x80CCB77Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB77Cu)) return;
    // 80CCB77C: addi    r0, r4, -18528
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-18528);

label_80CCB780:
    ctx->pc = 0x80CCB780u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB780u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCB780: stw     r0, 16(r3)
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
label_80CCB784:
    ctx->pc = 0x80CCB784u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB784u)) return;
    // 80CCB784: lis     r4, -32563
    ctx->gpr[4] = ((u32)(s32)(-32563) << 16);

label_80CCB788:
    ctx->pc = 0x80CCB788u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB788u)) return;
    // 80CCB788: addi    r0, r4, -18316
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-18316);

label_80CCB78C:
    ctx->pc = 0x80CCB78Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB78Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCB78C: stw     r0, 20(r3)
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
label_80CCB790:
    ctx->pc = 0x80CCB790u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB790u)) return;
    // 80CCB790: lis     r4, -32563
    ctx->gpr[4] = ((u32)(s32)(-32563) << 16);

label_80CCB794:
    ctx->pc = 0x80CCB794u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB794u)) return;
    // 80CCB794: addi    r0, r4, -18312
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-18312);

label_80CCB798:
    ctx->pc = 0x80CCB798u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB798u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCB798: stw     r0, 24(r3)
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
label_80CCB79C:
    ctx->pc = 0x80CCB79Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB79Cu)) return;
    // 80CCB79C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CC95A0;
        }
    }

label_80CCB7A0:
    ctx->pc = 0x80CCB7A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB7A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CCB7A0: stwu     r1, -16(r1)
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
label_80CCB7A4:
    ctx->pc = 0x80CCB7A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB7A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CCB7A4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCB7A8:
    ctx->pc = 0x80CCB7A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB7A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CCB7A8: stw     r0, 20(r1)
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
label_80CCB7AC:
    ctx->pc = 0x80CCB7ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB7ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCB7AC: stw     r31, 12(r1)
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
label_80CCB7B0:
    ctx->pc = 0x80CCB7B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB7B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCB7B0: stw     r30, 8(r1)
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
label_80CCB7B4:
    ctx->pc = 0x80CCB7B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB7B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CCB7B4: lwz     r31, 32(r3)
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
label_80CCB7B8:
    ctx->pc = 0x80CCB7B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB7B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCB7B8: lwz     r30, 16(r31)
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
label_80CCB7BC:
    ctx->pc = 0x80CCB7BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB7BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CCB7BC: lbz     r0, 0(r31)
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
label_80CCB7C0:
    ctx->pc = 0x80CCB7C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB7C0u)) return;
    // 80CCB7C0: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80CCB7C4:
    ctx->pc = 0x80CCB7C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB7C4u)) return;
    // 80CCB7C4: cmpwi   r0, 1
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

label_80CCB7C8:
    ctx->pc = 0x80CCB7C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB7C8u)) return;
    // 80CCB7C8: bc    12, 2, 0x80CCB7F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CCB7F4;
        }
    }

label_80CCB7CC:
    ctx->pc = 0x80CCB7CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB7CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CCB7CC: bc    4, 0, 0x80CCB7DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CCB7DC;
        }
    }

label_80CCB7D0:
    ctx->pc = 0x80CCB7D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB7D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCB7D0: cmpwi   r0, 0
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

label_80CCB7D4:
    ctx->pc = 0x80CCB7D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB7D4u)) return;
    // 80CCB7D4: bc    4, 0, 0x80CCB7E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CCB7E8;
        }
    }

label_80CCB7D8:
    ctx->pc = 0x80CCB7D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB7D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CCB7D8: b       0x80CCB85C
    {
            goto label_80CCB85C;
    }

label_80CCB7DC:
    ctx->pc = 0x80CCB7DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB7DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCB7DC: cmpwi   r0, 3
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

label_80CCB7E0:
    ctx->pc = 0x80CCB7E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB7E0u)) return;
    // 80CCB7E0: bc    4, 0, 0x80CCB85C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CCB85C;
        }
    }

label_80CCB7E4:
    ctx->pc = 0x80CCB7E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB7E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CCB7E4: b       0x80CCB850
    {
            goto label_80CCB850;
    }

label_80CCB7E8:
    ctx->pc = 0x80CCB7E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB7E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CCB7E8: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80CCB7EC:
    ctx->pc = 0x80CCB7ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB7ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCB7EC: stb     r0, 0(r31)
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
label_80CCB7F0:
    ctx->pc = 0x80CCB7F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB7F0u)) return;
    // 80CCB7F0: b       0x80CCB85C
    {
            goto label_80CCB85C;
    }

label_80CCB7F4:
    ctx->pc = 0x80CCB7F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 53u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB7F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 53u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 52u : 0u;
    // 80CCB7F4: lwz     r3, 8(r31)
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
label_80CCB7F8:
    ctx->pc = 0x80CCB7F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB7F8u)) return;
    // 80CCB7F8: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_80CCB7FC:
    ctx->pc = 0x80CCB7FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB7FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 50u : 0u;
    // 80CCB7FC: stw     r0, 8(r31)
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
label_80CCB800:
    ctx->pc = 0x80CCB800u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB800u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80CCB800: lwz     r4, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCB804:
    ctx->pc = 0x80CCB804u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB804u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 48u : 0u;
    // 80CCB804: lwz     r3, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCB808:
    ctx->pc = 0x80CCB808u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80CCB808u)) return;
    // 80CCB808: divwu   r0, r4, r3
    {
        u32 divisor = ctx->gpr[3];
        ctx->gpr[0] = divisor == 0 ? 0u : ctx->gpr[4] / divisor;
    }

label_80CCB80C:
    ctx->pc = 0x80CCB80Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80CCB80Cu)) return;
    // 80CCB80C: mullw   r0, r0, r3
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[3];
        ctx->gpr[0] = (u32)product;
    }

label_80CCB810:
    ctx->pc = 0x80CCB810u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB810u)) return;
    // 80CCB810: subf   r0, r0, r4
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_80CCB814:
    ctx->pc = 0x80CCB814u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB814u)) return;
    // 80CCB814: cmplwi  r0, 0x0000
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

label_80CCB818:
    ctx->pc = 0x80CCB818u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB818u)) return;
    // 80CCB818: bc    4, 2, 0x80CCB834
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CCB834;
        }
    }

label_80CCB81C:
    ctx->pc = 0x80CCB81Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB81Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CCB81C: lfs     f1, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x80CCB81Cu)) return;
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
label_80CCB820:
    ctx->pc = 0x80CCB820u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB820u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCB820: lfs     f2, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x80CCB820u)) return;
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
label_80CCB824:
    ctx->pc = 0x80CCB824u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB824u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CCB824: lfs     f3, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x80CCB824u)) return;
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
label_80CCB828:
    ctx->pc = 0x80CCB828u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB828u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCB828: lfs     f4, 0(r30)
    if (!ppc_fp_available_inline(ctx, 0x80CCB828u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
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
label_80CCB82C:
    ctx->pc = 0x80CCB82Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB82Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCB82C: lfs     f5, 4(r30)
    if (!ppc_fp_available_inline(ctx, 0x80CCB82Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
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
label_80CCB830:
    ctx->pc = 0x80CCB830u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB830u)) return;
    // 80CCB830: bl      0x80CCB358
    {
            ctx->lr = 0x80CCB834u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80CCB358u;
                return;
            }
            goto label_80CCB358;
    }

label_80CCB834:
    ctx->pc = 0x80CCB834u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB834u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CCB834: lwz     r3, 8(r31)
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
label_80CCB838:
    ctx->pc = 0x80CCB838u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB838u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCB838: lwz     r0, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCB83C:
    ctx->pc = 0x80CCB83Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB83Cu)) return;
    // 80CCB83C: cmplw   r3, r0
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

label_80CCB840:
    ctx->pc = 0x80CCB840u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB840u)) return;
    // 80CCB840: bc    4, 1, 0x80CCB85C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CCB85C;
        }
    }

label_80CCB844:
    ctx->pc = 0x80CCB844u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB844u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CCB844: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_80CCB848:
    ctx->pc = 0x80CCB848u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB848u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCB848: stb     r0, 0(r31)
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
label_80CCB84C:
    ctx->pc = 0x80CCB84Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB84Cu)) return;
    // 80CCB84C: b       0x80CCB85C
    {
            goto label_80CCB85C;
    }

label_80CCB850:
    ctx->pc = 0x80CCB850u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB850u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCB850: cmplwi  r3, 0x0000
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

label_80CCB854:
    ctx->pc = 0x80CCB854u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB854u)) return;
    // 80CCB854: bc    12, 2, 0x80CCB85C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CCB85C;
        }
    }

label_80CCB858:
    ctx->pc = 0x80CCB858u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB858u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CCB858: bl      0x8050F9E0
    {
            ctx->lr = 0x80CCB85Cu;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80CCB85C:
    ctx->pc = 0x80CCB85Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB85Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCB85C: lwz     r31, 12(r1)
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
label_80CCB860:
    ctx->pc = 0x80CCB860u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB860u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CCB860: lwz     r30, 8(r1)
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
label_80CCB864:
    ctx->pc = 0x80CCB864u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB864u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCB864: lwz     r0, 20(r1)
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
label_80CCB868:
    ctx->pc = 0x80CCB868u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CCB868u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCB868: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCB86C:
    ctx->pc = 0x80CCB86Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB86Cu)) return;
    // 80CCB86C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CCB870:
    ctx->pc = 0x80CCB870u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB870u)) return;
    // 80CCB870: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CC95A0;
        }
    }

label_80CCB874:
    ctx->pc = 0x80CCB874u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB874u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CCB874: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CC95A0;
        }
    }

label_80CCB878:
    ctx->pc = 0x80CCB878u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB878u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCB878: stwu     r1, -16(r1)
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
label_80CCB87C:
    ctx->pc = 0x80CCB87Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB87Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CCB87C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCB880:
    ctx->pc = 0x80CCB880u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB880u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCB880: stw     r0, 20(r1)
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
label_80CCB884:
    ctx->pc = 0x80CCB884u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB884u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CCB884: lwz     r3, 32(r3)
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
label_80CCB888:
    ctx->pc = 0x80CCB888u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB888u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCB888: lwz     r3, 16(r3)
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
label_80CCB88C:
    ctx->pc = 0x80CCB88Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB88Cu)) return;
    // 80CCB88C: cmplwi  r3, 0x0000
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

label_80CCB890:
    ctx->pc = 0x80CCB890u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB890u)) return;
    // 80CCB890: bc    12, 2, 0x80CCB898
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CCB898;
        }
    }

label_80CCB894:
    ctx->pc = 0x80CCB894u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB894u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CCB894: bl      0x8050ED40
    {
            ctx->lr = 0x80CCB898u;
            ctx->pc = 0x8050ED40u;
            return;
    }

label_80CCB898:
    ctx->pc = 0x80CCB898u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB898u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCB898: lwz     r0, 20(r1)
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
label_80CCB89C:
    ctx->pc = 0x80CCB89Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CCB89Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCB89C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCB8A0:
    ctx->pc = 0x80CCB8A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB8A0u)) return;
    // 80CCB8A0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CCB8A4:
    ctx->pc = 0x80CCB8A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB8A4u)) return;
    // 80CCB8A4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CC95A0;
        }
    }

label_80CCB8A8:
    ctx->pc = 0x80CCB8A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB8A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CCB8A8: stwu     r1, -16(r1)
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
label_80CCB8AC:
    ctx->pc = 0x80CCB8ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB8ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCB8AC: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCB8B0:
    ctx->pc = 0x80CCB8B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB8B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCB8B0: stw     r0, 20(r1)
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
label_80CCB8B4:
    ctx->pc = 0x80CCB8B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB8B4u)) return;
    // 80CCB8B4: bl      0x8004DFB8
    {
            ctx->lr = 0x80CCB8B8u;
            ctx->pc = 0x8004DFB8u;
            return;
    }

label_80CCB8B8:
    ctx->pc = 0x80CCB8B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB8B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCB8B8: lwz     r0, 20(r1)
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
label_80CCB8BC:
    ctx->pc = 0x80CCB8BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CCB8BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCB8BC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCB8C0:
    ctx->pc = 0x80CCB8C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB8C0u)) return;
    // 80CCB8C0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CCB8C4:
    ctx->pc = 0x80CCB8C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB8C4u)) return;
    // 80CCB8C4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CC95A0;
        }
    }

    ctx->pc = 0x80CCB8C8u;
    return;
return_dispatch_80CC95A0:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80CC95DCu: goto label_80CC95DC;
    case 0x80CC95E4u: goto label_80CC95E4;
    case 0x80CC95E8u: goto label_80CC95E8;
    case 0x80CC95ECu: goto label_80CC95EC;
    case 0x80CC95F0u: goto label_80CC95F0;
    case 0x80CC95F8u: goto label_80CC95F8;
    case 0x80CC9600u: goto label_80CC9600;
    case 0x80CC9640u: goto label_80CC9640;
    case 0x80CC9648u: goto label_80CC9648;
    case 0x80CC9650u: goto label_80CC9650;
    case 0x80CC9658u: goto label_80CC9658;
    case 0x80CC965Cu: goto label_80CC965C;
    case 0x80CC9664u: goto label_80CC9664;
    case 0x80CC968Cu: goto label_80CC968C;
    case 0x80CC9694u: goto label_80CC9694;
    case 0x80CC96BCu: goto label_80CC96BC;
    case 0x80CC96C4u: goto label_80CC96C4;
    case 0x80CC96D8u: goto label_80CC96D8;
    case 0x80CC96E0u: goto label_80CC96E0;
    case 0x80CC9710u: goto label_80CC9710;
    case 0x80CC972Cu: goto label_80CC972C;
    case 0x80CC9734u: goto label_80CC9734;
    case 0x80CC973Cu: goto label_80CC973C;
    case 0x80CC9764u: goto label_80CC9764;
    case 0x80CC976Cu: goto label_80CC976C;
    case 0x80CC9770u: goto label_80CC9770;
    case 0x80CC9778u: goto label_80CC9778;
    case 0x80CC9784u: goto label_80CC9784;
    case 0x80CC97B4u: goto label_80CC97B4;
    case 0x80CC97CCu: goto label_80CC97CC;
    case 0x80CC97D4u: goto label_80CC97D4;
    case 0x80CC9804u: goto label_80CC9804;
    case 0x80CC981Cu: goto label_80CC981C;
    case 0x80CC984Cu: goto label_80CC984C;
    case 0x80CC9864u: goto label_80CC9864;
    case 0x80CC986Cu: goto label_80CC986C;
    case 0x80CC9894u: goto label_80CC9894;
    case 0x80CC989Cu: goto label_80CC989C;
    case 0x80CC98CCu: goto label_80CC98CC;
    case 0x80CC98E8u: goto label_80CC98E8;
    case 0x80CC98FCu: goto label_80CC98FC;
    case 0x80CC9948u: goto label_80CC9948;
    case 0x80CC9950u: goto label_80CC9950;
    case 0x80CC999Cu: goto label_80CC999C;
    case 0x80CC99B0u: goto label_80CC99B0;
    case 0x80CC99FCu: goto label_80CC99FC;
    case 0x80CC9A04u: goto label_80CC9A04;
    case 0x80CC9A50u: goto label_80CC9A50;
    case 0x80CC9A54u: goto label_80CC9A54;
    case 0x80CC9A5Cu: goto label_80CC9A5C;
    case 0x80CC9A64u: goto label_80CC9A64;
    case 0x80CC9A6Cu: goto label_80CC9A6C;
    case 0x80CC9A74u: goto label_80CC9A74;
    case 0x80CC9A78u: goto label_80CC9A78;
    case 0x80CC9A80u: goto label_80CC9A80;
    case 0x80CC9AA8u: goto label_80CC9AA8;
    case 0x80CC9AD8u: goto label_80CC9AD8;
    case 0x80CC9AF0u: goto label_80CC9AF0;
    case 0x80CC9B20u: goto label_80CC9B20;
    case 0x80CC9B38u: goto label_80CC9B38;
    case 0x80CC9B40u: goto label_80CC9B40;
    case 0x80CC9B44u: goto label_80CC9B44;
    case 0x80CC9B4Cu: goto label_80CC9B4C;
    case 0x80CC9B58u: goto label_80CC9B58;
    case 0x80CC9B60u: goto label_80CC9B60;
    case 0x80CC9B88u: goto label_80CC9B88;
    case 0x80CC9B90u: goto label_80CC9B90;
    case 0x80CC9BC0u: goto label_80CC9BC0;
    case 0x80CC9BD8u: goto label_80CC9BD8;
    case 0x80CC9C08u: goto label_80CC9C08;
    case 0x80CC9C24u: goto label_80CC9C24;
    case 0x80CC9C2Cu: goto label_80CC9C2C;
    case 0x80CC9C54u: goto label_80CC9C54;
    case 0x80CC9C5Cu: goto label_80CC9C5C;
    case 0x80CC9C60u: goto label_80CC9C60;
    case 0x80CC9C68u: goto label_80CC9C68;
    case 0x80CC9C98u: goto label_80CC9C98;
    case 0x80CC9CB0u: goto label_80CC9CB0;
    case 0x80CC9CB8u: goto label_80CC9CB8;
    case 0x80CC9CBCu: goto label_80CC9CBC;
    case 0x80CC9CC4u: goto label_80CC9CC4;
    case 0x80CC9CECu: goto label_80CC9CEC;
    case 0x80CC9CF4u: goto label_80CC9CF4;
    case 0x80CC9D34u: goto label_80CC9D34;
    case 0x80CC9D3Cu: goto label_80CC9D3C;
    case 0x80CC9D44u: goto label_80CC9D44;
    case 0x80CC9D6Cu: goto label_80CC9D6C;
    case 0x80CC9D74u: goto label_80CC9D74;
    case 0x80CC9D7Cu: goto label_80CC9D7C;
    case 0x80CC9DBCu: goto label_80CC9DBC;
    case 0x80CC9DC4u: goto label_80CC9DC4;
    case 0x80CC9DF4u: goto label_80CC9DF4;
    case 0x80CC9E10u: goto label_80CC9E10;
    case 0x80CC9E40u: goto label_80CC9E40;
    case 0x80CC9E5Cu: goto label_80CC9E5C;
    case 0x80CC9E64u: goto label_80CC9E64;
    case 0x80CC9E8Cu: goto label_80CC9E8C;
    case 0x80CC9E94u: goto label_80CC9E94;
    case 0x80CC9EA8u: goto label_80CC9EA8;
    case 0x80CC9EB0u: goto label_80CC9EB0;
    case 0x80CC9EB8u: goto label_80CC9EB8;
    case 0x80CC9EBCu: goto label_80CC9EBC;
    case 0x80CC9EC4u: goto label_80CC9EC4;
    case 0x80CC9EC8u: goto label_80CC9EC8;
    case 0x80CC9ED0u: goto label_80CC9ED0;
    case 0x80CC9EF8u: goto label_80CC9EF8;
    case 0x80CC9F00u: goto label_80CC9F00;
    case 0x80CC9F08u: goto label_80CC9F08;
    case 0x80CC9F48u: goto label_80CC9F48;
    case 0x80CC9F50u: goto label_80CC9F50;
    case 0x80CC9F58u: goto label_80CC9F58;
    case 0x80CC9F80u: goto label_80CC9F80;
    case 0x80CC9F88u: goto label_80CC9F88;
    case 0x80CC9F8Cu: goto label_80CC9F8C;
    case 0x80CC9F94u: goto label_80CC9F94;
    case 0x80CC9FBCu: goto label_80CC9FBC;
    case 0x80CC9FC4u: goto label_80CC9FC4;
    case 0x80CC9FECu: goto label_80CC9FEC;
    case 0x80CC9FF4u: goto label_80CC9FF4;
    case 0x80CC9FF8u: goto label_80CC9FF8;
    case 0x80CCA000u: goto label_80CCA000;
    case 0x80CCA040u: goto label_80CCA040;
    case 0x80CCA048u: goto label_80CCA048;
    case 0x80CCA050u: goto label_80CCA050;
    case 0x80CCA078u: goto label_80CCA078;
    case 0x80CCA080u: goto label_80CCA080;
    case 0x80CCA0A8u: goto label_80CCA0A8;
    case 0x80CCA0B0u: goto label_80CCA0B0;
    case 0x80CCA0C4u: goto label_80CCA0C4;
    case 0x80CCA0CCu: goto label_80CCA0CC;
    case 0x80CCA0D4u: goto label_80CCA0D4;
    case 0x80CCA0FCu: goto label_80CCA0FC;
    case 0x80CCA104u: goto label_80CCA104;
    case 0x80CCA10Cu: goto label_80CCA10C;
    case 0x80CCA134u: goto label_80CCA134;
    case 0x80CCA13Cu: goto label_80CCA13C;
    case 0x80CCA144u: goto label_80CCA144;
    case 0x80CCA148u: goto label_80CCA148;
    case 0x80CCA178u: goto label_80CCA178;
    case 0x80CCA194u: goto label_80CCA194;
    case 0x80CCA1C4u: goto label_80CCA1C4;
    case 0x80CCA1E0u: goto label_80CCA1E0;
    case 0x80CCA1E8u: goto label_80CCA1E8;
    case 0x80CCA1F0u: goto label_80CCA1F0;
    case 0x80CCA1F4u: goto label_80CCA1F4;
    case 0x80CCA1FCu: goto label_80CCA1FC;
    case 0x80CCA208u: goto label_80CCA208;
    case 0x80CCA210u: goto label_80CCA210;
    case 0x80CCA238u: goto label_80CCA238;
    case 0x80CCA240u: goto label_80CCA240;
    case 0x80CCA270u: goto label_80CCA270;
    case 0x80CCA28Cu: goto label_80CCA28C;
    case 0x80CCA294u: goto label_80CCA294;
    case 0x80CCA29Cu: goto label_80CCA29C;
    case 0x80CCA2A0u: goto label_80CCA2A0;
    case 0x80CCA2BCu: goto label_80CCA2BC;
    case 0x80CCA2C8u: goto label_80CCA2C8;
    case 0x80CCA2E4u: goto label_80CCA2E4;
    case 0x80CCA2F0u: goto label_80CCA2F0;
    case 0x80CCA2F8u: goto label_80CCA2F8;
    case 0x80CCA320u: goto label_80CCA320;
    case 0x80CCA328u: goto label_80CCA328;
    case 0x80CCA358u: goto label_80CCA358;
    case 0x80CCA374u: goto label_80CCA374;
    case 0x80CCA3A4u: goto label_80CCA3A4;
    case 0x80CCA3C0u: goto label_80CCA3C0;
    case 0x80CCA3C8u: goto label_80CCA3C8;
    case 0x80CCA3D0u: goto label_80CCA3D0;
    case 0x80CCA3DCu: goto label_80CCA3DC;
    case 0x80CCA404u: goto label_80CCA404;
    case 0x80CCA40Cu: goto label_80CCA40C;
    case 0x80CCA434u: goto label_80CCA434;
    case 0x80CCA43Cu: goto label_80CCA43C;
    case 0x80CCA46Cu: goto label_80CCA46C;
    case 0x80CCA488u: goto label_80CCA488;
    case 0x80CCA4B8u: goto label_80CCA4B8;
    case 0x80CCA4D4u: goto label_80CCA4D4;
    case 0x80CCA4DCu: goto label_80CCA4DC;
    case 0x80CCA4E4u: goto label_80CCA4E4;
    case 0x80CCA50Cu: goto label_80CCA50C;
    case 0x80CCA514u: goto label_80CCA514;
    case 0x80CCA53Cu: goto label_80CCA53C;
    case 0x80CCA544u: goto label_80CCA544;
    case 0x80CCA574u: goto label_80CCA574;
    case 0x80CCA590u: goto label_80CCA590;
    case 0x80CCA5C0u: goto label_80CCA5C0;
    case 0x80CCA5DCu: goto label_80CCA5DC;
    case 0x80CCA5E4u: goto label_80CCA5E4;
    case 0x80CCA5E8u: goto label_80CCA5E8;
    case 0x80CCA5F0u: goto label_80CCA5F0;
    case 0x80CCA5FCu: goto label_80CCA5FC;
    case 0x80CCA604u: goto label_80CCA604;
    case 0x80CCA634u: goto label_80CCA634;
    case 0x80CCA650u: goto label_80CCA650;
    case 0x80CCA658u: goto label_80CCA658;
    case 0x80CCA688u: goto label_80CCA688;
    case 0x80CCA6A0u: goto label_80CCA6A0;
    case 0x80CCA6D0u: goto label_80CCA6D0;
    case 0x80CCA6E8u: goto label_80CCA6E8;
    case 0x80CCA6F0u: goto label_80CCA6F0;
    case 0x80CCA718u: goto label_80CCA718;
    case 0x80CCA720u: goto label_80CCA720;
    case 0x80CCA724u: goto label_80CCA724;
    case 0x80CCA72Cu: goto label_80CCA72C;
    case 0x80CCA734u: goto label_80CCA734;
    case 0x80CCA740u: goto label_80CCA740;
    case 0x80CCA748u: goto label_80CCA748;
    case 0x80CCA778u: goto label_80CCA778;
    case 0x80CCA790u: goto label_80CCA790;
    case 0x80CCA798u: goto label_80CCA798;
    case 0x80CCA7C8u: goto label_80CCA7C8;
    case 0x80CCA7E4u: goto label_80CCA7E4;
    case 0x80CCA7F4u: goto label_80CCA7F4;
    case 0x80CCA7FCu: goto label_80CCA7FC;
    case 0x80CCA80Cu: goto label_80CCA80C;
    case 0x80CCA81Cu: goto label_80CCA81C;
    case 0x80CCA824u: goto label_80CCA824;
    case 0x80CCA82Cu: goto label_80CCA82C;
    case 0x80CCA834u: goto label_80CCA834;
    case 0x80CCA83Cu: goto label_80CCA83C;
    case 0x80CCA844u: goto label_80CCA844;
    case 0x80CCA848u: goto label_80CCA848;
    case 0x80CCA84Cu: goto label_80CCA84C;
    case 0x80CCA850u: goto label_80CCA850;
    case 0x80CCA878u: goto label_80CCA878;
    case 0x80CCA8D8u: goto label_80CCA8D8;
    case 0x80CCA918u: goto label_80CCA918;
    case 0x80CCA958u: goto label_80CCA958;
    case 0x80CCA9B4u: goto label_80CCA9B4;
    case 0x80CCA9D8u: goto label_80CCA9D8;
    case 0x80CCAA74u: goto label_80CCAA74;
    case 0x80CCAAC4u: goto label_80CCAAC4;
    case 0x80CCAB14u: goto label_80CCAB14;
    case 0x80CCAB60u: goto label_80CCAB60;
    case 0x80CCABE4u: goto label_80CCABE4;
    case 0x80CCAC08u: goto label_80CCAC08;
    case 0x80CCAC84u: goto label_80CCAC84;
    case 0x80CCACECu: goto label_80CCACEC;
    case 0x80CCAD54u: goto label_80CCAD54;
    case 0x80CCADA4u: goto label_80CCADA4;
    case 0x80CCADF4u: goto label_80CCADF4;
    case 0x80CCAE38u: goto label_80CCAE38;
    case 0x80CCAE60u: goto label_80CCAE60;
    case 0x80CCAE6Cu: goto label_80CCAE6C;
    case 0x80CCAE78u: goto label_80CCAE78;
    case 0x80CCAE84u: goto label_80CCAE84;
    case 0x80CCAEF0u: goto label_80CCAEF0;
    case 0x80CCAF04u: goto label_80CCAF04;
    case 0x80CCAFF8u: goto label_80CCAFF8;
    case 0x80CCB00Cu: goto label_80CCB00C;
    case 0x80CCB0F0u: goto label_80CCB0F0;
    case 0x80CCB134u: goto label_80CCB134;
    case 0x80CCB26Cu: goto label_80CCB26C;
    case 0x80CCB284u: goto label_80CCB284;
    case 0x80CCB2FCu: goto label_80CCB2FC;
    case 0x80CCB324u: goto label_80CCB324;
    case 0x80CCB348u: goto label_80CCB348;
    case 0x80CCB3B8u: goto label_80CCB3B8;
    case 0x80CCB3C4u: goto label_80CCB3C4;
    case 0x80CCB528u: goto label_80CCB528;
    case 0x80CCB530u: goto label_80CCB530;
    case 0x80CCB56Cu: goto label_80CCB56C;
    case 0x80CCB574u: goto label_80CCB574;
    case 0x80CCB580u: goto label_80CCB580;
    case 0x80CCB59Cu: goto label_80CCB59C;
    case 0x80CCB5BCu: goto label_80CCB5BC;
    case 0x80CCB5C4u: goto label_80CCB5C4;
    case 0x80CCB5FCu: goto label_80CCB5FC;
    case 0x80CCB624u: goto label_80CCB624;
    case 0x80CCB64Cu: goto label_80CCB64C;
    case 0x80CCB670u: goto label_80CCB670;
    case 0x80CCB6B4u: goto label_80CCB6B4;
    case 0x80CCB6CCu: goto label_80CCB6CC;
    case 0x80CCB708u: goto label_80CCB708;
    case 0x80CCB758u: goto label_80CCB758;
    case 0x80CCB834u: goto label_80CCB834;
    case 0x80CCB85Cu: goto label_80CCB85C;
    case 0x80CCB898u: goto label_80CCB898;
    case 0x80CCB8B8u: goto label_80CCB8B8;
    default: return;
    }
}

