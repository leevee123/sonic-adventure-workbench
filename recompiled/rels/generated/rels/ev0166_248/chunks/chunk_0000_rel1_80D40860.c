// DolRecomp output
#include "../generated.h"

void func_80D40860(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80D40860[1017] = {
        &&label_80D40860,
        &&label_80D40864,
        &&label_80D40868,
        &&label_80D4086C,
        &&label_80D40870,
        &&label_80D40874,
        &&label_80D40878,
        &&label_80D4087C,
        &&label_80D40880,
        &&label_80D40884,
        &&label_80D40888,
        &&label_80D4088C,
        &&label_80D40890,
        &&label_80D40894,
        &&label_80D40898,
        &&label_80D4089C,
        &&label_80D408A0,
        &&label_80D408A4,
        &&label_80D408A8,
        &&label_80D408AC,
        &&label_80D408B0,
        &&label_80D408B4,
        &&label_80D408B8,
        &&label_80D408BC,
        &&label_80D408C0,
        &&label_80D408C4,
        &&label_80D408C8,
        &&label_80D408CC,
        &&label_80D408D0,
        &&label_80D408D4,
        &&label_80D408D8,
        &&label_80D408DC,
        &&label_80D408E0,
        &&label_80D408E4,
        &&label_80D408E8,
        &&label_80D408EC,
        &&label_80D408F0,
        &&label_80D408F4,
        &&label_80D408F8,
        &&label_80D408FC,
        &&label_80D40900,
        &&label_80D40904,
        &&label_80D40908,
        &&label_80D4090C,
        &&label_80D40910,
        &&label_80D40914,
        &&label_80D40918,
        &&label_80D4091C,
        &&label_80D40920,
        &&label_80D40924,
        &&label_80D40928,
        &&label_80D4092C,
        &&label_80D40930,
        &&label_80D40934,
        &&label_80D40938,
        &&label_80D4093C,
        &&label_80D40940,
        &&label_80D40944,
        &&label_80D40948,
        &&label_80D4094C,
        &&label_80D40950,
        &&label_80D40954,
        &&label_80D40958,
        &&label_80D4095C,
        &&label_80D40960,
        &&label_80D40964,
        &&label_80D40968,
        &&label_80D4096C,
        &&label_80D40970,
        &&label_80D40974,
        &&label_80D40978,
        &&label_80D4097C,
        &&label_80D40980,
        &&label_80D40984,
        &&label_80D40988,
        &&label_80D4098C,
        &&label_80D40990,
        &&label_80D40994,
        &&label_80D40998,
        &&label_80D4099C,
        &&label_80D409A0,
        &&label_80D409A4,
        &&label_80D409A8,
        &&label_80D409AC,
        &&label_80D409B0,
        &&label_80D409B4,
        &&label_80D409B8,
        &&label_80D409BC,
        &&label_80D409C0,
        &&label_80D409C4,
        &&label_80D409C8,
        &&label_80D409CC,
        &&label_80D409D0,
        &&label_80D409D4,
        &&label_80D409D8,
        &&label_80D409DC,
        &&label_80D409E0,
        &&label_80D409E4,
        &&label_80D409E8,
        &&label_80D409EC,
        &&label_80D409F0,
        &&label_80D409F4,
        &&label_80D409F8,
        &&label_80D409FC,
        &&label_80D40A00,
        &&label_80D40A04,
        &&label_80D40A08,
        &&label_80D40A0C,
        &&label_80D40A10,
        &&label_80D40A14,
        &&label_80D40A18,
        &&label_80D40A1C,
        &&label_80D40A20,
        &&label_80D40A24,
        &&label_80D40A28,
        &&label_80D40A2C,
        &&label_80D40A30,
        &&label_80D40A34,
        &&label_80D40A38,
        &&label_80D40A3C,
        &&label_80D40A40,
        &&label_80D40A44,
        &&label_80D40A48,
        &&label_80D40A4C,
        &&label_80D40A50,
        &&label_80D40A54,
        &&label_80D40A58,
        &&label_80D40A5C,
        &&label_80D40A60,
        &&label_80D40A64,
        &&label_80D40A68,
        &&label_80D40A6C,
        &&label_80D40A70,
        &&label_80D40A74,
        &&label_80D40A78,
        &&label_80D40A7C,
        &&label_80D40A80,
        &&label_80D40A84,
        &&label_80D40A88,
        &&label_80D40A8C,
        &&label_80D40A90,
        &&label_80D40A94,
        &&label_80D40A98,
        &&label_80D40A9C,
        &&label_80D40AA0,
        &&label_80D40AA4,
        &&label_80D40AA8,
        &&label_80D40AAC,
        &&label_80D40AB0,
        &&label_80D40AB4,
        &&label_80D40AB8,
        &&label_80D40ABC,
        &&label_80D40AC0,
        &&label_80D40AC4,
        &&label_80D40AC8,
        &&label_80D40ACC,
        &&label_80D40AD0,
        &&label_80D40AD4,
        &&label_80D40AD8,
        &&label_80D40ADC,
        &&label_80D40AE0,
        &&label_80D40AE4,
        &&label_80D40AE8,
        &&label_80D40AEC,
        &&label_80D40AF0,
        &&label_80D40AF4,
        &&label_80D40AF8,
        &&label_80D40AFC,
        &&label_80D40B00,
        &&label_80D40B04,
        &&label_80D40B08,
        &&label_80D40B0C,
        &&label_80D40B10,
        &&label_80D40B14,
        &&label_80D40B18,
        &&label_80D40B1C,
        &&label_80D40B20,
        &&label_80D40B24,
        &&label_80D40B28,
        &&label_80D40B2C,
        &&label_80D40B30,
        &&label_80D40B34,
        &&label_80D40B38,
        &&label_80D40B3C,
        &&label_80D40B40,
        &&label_80D40B44,
        &&label_80D40B48,
        &&label_80D40B4C,
        &&label_80D40B50,
        &&label_80D40B54,
        &&label_80D40B58,
        &&label_80D40B5C,
        &&label_80D40B60,
        &&label_80D40B64,
        &&label_80D40B68,
        &&label_80D40B6C,
        &&label_80D40B70,
        &&label_80D40B74,
        &&label_80D40B78,
        &&label_80D40B7C,
        &&label_80D40B80,
        &&label_80D40B84,
        &&label_80D40B88,
        &&label_80D40B8C,
        &&label_80D40B90,
        &&label_80D40B94,
        &&label_80D40B98,
        &&label_80D40B9C,
        &&label_80D40BA0,
        &&label_80D40BA4,
        &&label_80D40BA8,
        &&label_80D40BAC,
        &&label_80D40BB0,
        &&label_80D40BB4,
        &&label_80D40BB8,
        &&label_80D40BBC,
        &&label_80D40BC0,
        &&label_80D40BC4,
        &&label_80D40BC8,
        &&label_80D40BCC,
        &&label_80D40BD0,
        &&label_80D40BD4,
        &&label_80D40BD8,
        &&label_80D40BDC,
        &&label_80D40BE0,
        &&label_80D40BE4,
        &&label_80D40BE8,
        &&label_80D40BEC,
        &&label_80D40BF0,
        &&label_80D40BF4,
        &&label_80D40BF8,
        &&label_80D40BFC,
        &&label_80D40C00,
        &&label_80D40C04,
        &&label_80D40C08,
        &&label_80D40C0C,
        &&label_80D40C10,
        &&label_80D40C14,
        &&label_80D40C18,
        &&label_80D40C1C,
        &&label_80D40C20,
        &&label_80D40C24,
        &&label_80D40C28,
        &&label_80D40C2C,
        &&label_80D40C30,
        &&label_80D40C34,
        &&label_80D40C38,
        &&label_80D40C3C,
        &&label_80D40C40,
        &&label_80D40C44,
        &&label_80D40C48,
        &&label_80D40C4C,
        &&label_80D40C50,
        &&label_80D40C54,
        &&label_80D40C58,
        &&label_80D40C5C,
        &&label_80D40C60,
        &&label_80D40C64,
        &&label_80D40C68,
        &&label_80D40C6C,
        &&label_80D40C70,
        &&label_80D40C74,
        &&label_80D40C78,
        &&label_80D40C7C,
        &&label_80D40C80,
        &&label_80D40C84,
        &&label_80D40C88,
        &&label_80D40C8C,
        &&label_80D40C90,
        &&label_80D40C94,
        &&label_80D40C98,
        &&label_80D40C9C,
        &&label_80D40CA0,
        &&label_80D40CA4,
        &&label_80D40CA8,
        &&label_80D40CAC,
        &&label_80D40CB0,
        &&label_80D40CB4,
        &&label_80D40CB8,
        &&label_80D40CBC,
        &&label_80D40CC0,
        &&label_80D40CC4,
        &&label_80D40CC8,
        &&label_80D40CCC,
        &&label_80D40CD0,
        &&label_80D40CD4,
        &&label_80D40CD8,
        &&label_80D40CDC,
        &&label_80D40CE0,
        &&label_80D40CE4,
        &&label_80D40CE8,
        &&label_80D40CEC,
        &&label_80D40CF0,
        &&label_80D40CF4,
        &&label_80D40CF8,
        &&label_80D40CFC,
        &&label_80D40D00,
        &&label_80D40D04,
        &&label_80D40D08,
        &&label_80D40D0C,
        &&label_80D40D10,
        &&label_80D40D14,
        &&label_80D40D18,
        &&label_80D40D1C,
        &&label_80D40D20,
        &&label_80D40D24,
        &&label_80D40D28,
        &&label_80D40D2C,
        &&label_80D40D30,
        &&label_80D40D34,
        &&label_80D40D38,
        &&label_80D40D3C,
        &&label_80D40D40,
        &&label_80D40D44,
        &&label_80D40D48,
        &&label_80D40D4C,
        &&label_80D40D50,
        &&label_80D40D54,
        &&label_80D40D58,
        &&label_80D40D5C,
        &&label_80D40D60,
        &&label_80D40D64,
        &&label_80D40D68,
        &&label_80D40D6C,
        &&label_80D40D70,
        &&label_80D40D74,
        &&label_80D40D78,
        &&label_80D40D7C,
        &&label_80D40D80,
        &&label_80D40D84,
        &&label_80D40D88,
        &&label_80D40D8C,
        &&label_80D40D90,
        &&label_80D40D94,
        &&label_80D40D98,
        &&label_80D40D9C,
        &&label_80D40DA0,
        &&label_80D40DA4,
        &&label_80D40DA8,
        &&label_80D40DAC,
        &&label_80D40DB0,
        &&label_80D40DB4,
        &&label_80D40DB8,
        &&label_80D40DBC,
        &&label_80D40DC0,
        &&label_80D40DC4,
        &&label_80D40DC8,
        &&label_80D40DCC,
        &&label_80D40DD0,
        &&label_80D40DD4,
        &&label_80D40DD8,
        &&label_80D40DDC,
        &&label_80D40DE0,
        &&label_80D40DE4,
        &&label_80D40DE8,
        &&label_80D40DEC,
        &&label_80D40DF0,
        &&label_80D40DF4,
        &&label_80D40DF8,
        &&label_80D40DFC,
        &&label_80D40E00,
        &&label_80D40E04,
        &&label_80D40E08,
        &&label_80D40E0C,
        &&label_80D40E10,
        &&label_80D40E14,
        &&label_80D40E18,
        &&label_80D40E1C,
        &&label_80D40E20,
        &&label_80D40E24,
        &&label_80D40E28,
        &&label_80D40E2C,
        &&label_80D40E30,
        &&label_80D40E34,
        &&label_80D40E38,
        &&label_80D40E3C,
        &&label_80D40E40,
        &&label_80D40E44,
        &&label_80D40E48,
        &&label_80D40E4C,
        &&label_80D40E50,
        &&label_80D40E54,
        &&label_80D40E58,
        &&label_80D40E5C,
        &&label_80D40E60,
        &&label_80D40E64,
        &&label_80D40E68,
        &&label_80D40E6C,
        &&label_80D40E70,
        &&label_80D40E74,
        &&label_80D40E78,
        &&label_80D40E7C,
        &&label_80D40E80,
        &&label_80D40E84,
        &&label_80D40E88,
        &&label_80D40E8C,
        &&label_80D40E90,
        &&label_80D40E94,
        &&label_80D40E98,
        &&label_80D40E9C,
        &&label_80D40EA0,
        &&label_80D40EA4,
        &&label_80D40EA8,
        &&label_80D40EAC,
        &&label_80D40EB0,
        &&label_80D40EB4,
        &&label_80D40EB8,
        &&label_80D40EBC,
        &&label_80D40EC0,
        &&label_80D40EC4,
        &&label_80D40EC8,
        &&label_80D40ECC,
        &&label_80D40ED0,
        &&label_80D40ED4,
        &&label_80D40ED8,
        &&label_80D40EDC,
        &&label_80D40EE0,
        &&label_80D40EE4,
        &&label_80D40EE8,
        &&label_80D40EEC,
        &&label_80D40EF0,
        &&label_80D40EF4,
        &&label_80D40EF8,
        &&label_80D40EFC,
        &&label_80D40F00,
        &&label_80D40F04,
        &&label_80D40F08,
        &&label_80D40F0C,
        &&label_80D40F10,
        &&label_80D40F14,
        &&label_80D40F18,
        &&label_80D40F1C,
        &&label_80D40F20,
        &&label_80D40F24,
        &&label_80D40F28,
        &&label_80D40F2C,
        &&label_80D40F30,
        &&label_80D40F34,
        &&label_80D40F38,
        &&label_80D40F3C,
        &&label_80D40F40,
        &&label_80D40F44,
        &&label_80D40F48,
        &&label_80D40F4C,
        &&label_80D40F50,
        &&label_80D40F54,
        &&label_80D40F58,
        &&label_80D40F5C,
        &&label_80D40F60,
        &&label_80D40F64,
        &&label_80D40F68,
        &&label_80D40F6C,
        &&label_80D40F70,
        &&label_80D40F74,
        &&label_80D40F78,
        &&label_80D40F7C,
        &&label_80D40F80,
        &&label_80D40F84,
        &&label_80D40F88,
        &&label_80D40F8C,
        &&label_80D40F90,
        &&label_80D40F94,
        &&label_80D40F98,
        &&label_80D40F9C,
        &&label_80D40FA0,
        &&label_80D40FA4,
        &&label_80D40FA8,
        &&label_80D40FAC,
        &&label_80D40FB0,
        &&label_80D40FB4,
        &&label_80D40FB8,
        &&label_80D40FBC,
        &&label_80D40FC0,
        &&label_80D40FC4,
        &&label_80D40FC8,
        &&label_80D40FCC,
        &&label_80D40FD0,
        &&label_80D40FD4,
        &&label_80D40FD8,
        &&label_80D40FDC,
        &&label_80D40FE0,
        &&label_80D40FE4,
        &&label_80D40FE8,
        &&label_80D40FEC,
        &&label_80D40FF0,
        &&label_80D40FF4,
        &&label_80D40FF8,
        &&label_80D40FFC,
        &&label_80D41000,
        &&label_80D41004,
        &&label_80D41008,
        &&label_80D4100C,
        &&label_80D41010,
        &&label_80D41014,
        &&label_80D41018,
        &&label_80D4101C,
        &&label_80D41020,
        &&label_80D41024,
        &&label_80D41028,
        &&label_80D4102C,
        &&label_80D41030,
        &&label_80D41034,
        &&label_80D41038,
        &&label_80D4103C,
        &&label_80D41040,
        &&label_80D41044,
        &&label_80D41048,
        &&label_80D4104C,
        &&label_80D41050,
        &&label_80D41054,
        &&label_80D41058,
        &&label_80D4105C,
        &&label_80D41060,
        &&label_80D41064,
        &&label_80D41068,
        &&label_80D4106C,
        &&label_80D41070,
        &&label_80D41074,
        &&label_80D41078,
        &&label_80D4107C,
        &&label_80D41080,
        &&label_80D41084,
        &&label_80D41088,
        &&label_80D4108C,
        &&label_80D41090,
        &&label_80D41094,
        &&label_80D41098,
        &&label_80D4109C,
        &&label_80D410A0,
        &&label_80D410A4,
        &&label_80D410A8,
        &&label_80D410AC,
        &&label_80D410B0,
        &&label_80D410B4,
        &&label_80D410B8,
        &&label_80D410BC,
        &&label_80D410C0,
        &&label_80D410C4,
        &&label_80D410C8,
        &&label_80D410CC,
        &&label_80D410D0,
        &&label_80D410D4,
        &&label_80D410D8,
        &&label_80D410DC,
        &&label_80D410E0,
        &&label_80D410E4,
        &&label_80D410E8,
        &&label_80D410EC,
        &&label_80D410F0,
        &&label_80D410F4,
        &&label_80D410F8,
        &&label_80D410FC,
        &&label_80D41100,
        &&label_80D41104,
        &&label_80D41108,
        &&label_80D4110C,
        &&label_80D41110,
        &&label_80D41114,
        &&label_80D41118,
        &&label_80D4111C,
        &&label_80D41120,
        &&label_80D41124,
        &&label_80D41128,
        &&label_80D4112C,
        &&label_80D41130,
        &&label_80D41134,
        &&label_80D41138,
        &&label_80D4113C,
        &&label_80D41140,
        &&label_80D41144,
        &&label_80D41148,
        &&label_80D4114C,
        &&label_80D41150,
        &&label_80D41154,
        &&label_80D41158,
        &&label_80D4115C,
        &&label_80D41160,
        &&label_80D41164,
        &&label_80D41168,
        &&label_80D4116C,
        &&label_80D41170,
        &&label_80D41174,
        &&label_80D41178,
        &&label_80D4117C,
        &&label_80D41180,
        &&label_80D41184,
        &&label_80D41188,
        &&label_80D4118C,
        &&label_80D41190,
        &&label_80D41194,
        &&label_80D41198,
        &&label_80D4119C,
        &&label_80D411A0,
        &&label_80D411A4,
        &&label_80D411A8,
        &&label_80D411AC,
        &&label_80D411B0,
        &&label_80D411B4,
        &&label_80D411B8,
        &&label_80D411BC,
        &&label_80D411C0,
        &&label_80D411C4,
        &&label_80D411C8,
        &&label_80D411CC,
        &&label_80D411D0,
        &&label_80D411D4,
        &&label_80D411D8,
        &&label_80D411DC,
        &&label_80D411E0,
        &&label_80D411E4,
        &&label_80D411E8,
        &&label_80D411EC,
        &&label_80D411F0,
        &&label_80D411F4,
        &&label_80D411F8,
        &&label_80D411FC,
        &&label_80D41200,
        &&label_80D41204,
        &&label_80D41208,
        &&label_80D4120C,
        &&label_80D41210,
        &&label_80D41214,
        &&label_80D41218,
        &&label_80D4121C,
        &&label_80D41220,
        &&label_80D41224,
        &&label_80D41228,
        &&label_80D4122C,
        &&label_80D41230,
        &&label_80D41234,
        &&label_80D41238,
        &&label_80D4123C,
        &&label_80D41240,
        &&label_80D41244,
        &&label_80D41248,
        &&label_80D4124C,
        &&label_80D41250,
        &&label_80D41254,
        &&label_80D41258,
        &&label_80D4125C,
        &&label_80D41260,
        &&label_80D41264,
        &&label_80D41268,
        &&label_80D4126C,
        &&label_80D41270,
        &&label_80D41274,
        &&label_80D41278,
        &&label_80D4127C,
        &&label_80D41280,
        &&label_80D41284,
        &&label_80D41288,
        &&label_80D4128C,
        &&label_80D41290,
        &&label_80D41294,
        &&label_80D41298,
        &&label_80D4129C,
        &&label_80D412A0,
        &&label_80D412A4,
        &&label_80D412A8,
        &&label_80D412AC,
        &&label_80D412B0,
        &&label_80D412B4,
        &&label_80D412B8,
        &&label_80D412BC,
        &&label_80D412C0,
        &&label_80D412C4,
        &&label_80D412C8,
        &&label_80D412CC,
        &&label_80D412D0,
        &&label_80D412D4,
        &&label_80D412D8,
        &&label_80D412DC,
        &&label_80D412E0,
        &&label_80D412E4,
        &&label_80D412E8,
        &&label_80D412EC,
        &&label_80D412F0,
        &&label_80D412F4,
        &&label_80D412F8,
        &&label_80D412FC,
        &&label_80D41300,
        &&label_80D41304,
        &&label_80D41308,
        &&label_80D4130C,
        &&label_80D41310,
        &&label_80D41314,
        &&label_80D41318,
        &&label_80D4131C,
        &&label_80D41320,
        &&label_80D41324,
        &&label_80D41328,
        &&label_80D4132C,
        &&label_80D41330,
        &&label_80D41334,
        &&label_80D41338,
        &&label_80D4133C,
        &&label_80D41340,
        &&label_80D41344,
        &&label_80D41348,
        &&label_80D4134C,
        &&label_80D41350,
        &&label_80D41354,
        &&label_80D41358,
        &&label_80D4135C,
        &&label_80D41360,
        &&label_80D41364,
        &&label_80D41368,
        &&label_80D4136C,
        &&label_80D41370,
        &&label_80D41374,
        &&label_80D41378,
        &&label_80D4137C,
        &&label_80D41380,
        &&label_80D41384,
        &&label_80D41388,
        &&label_80D4138C,
        &&label_80D41390,
        &&label_80D41394,
        &&label_80D41398,
        &&label_80D4139C,
        &&label_80D413A0,
        &&label_80D413A4,
        &&label_80D413A8,
        &&label_80D413AC,
        &&label_80D413B0,
        &&label_80D413B4,
        &&label_80D413B8,
        &&label_80D413BC,
        &&label_80D413C0,
        &&label_80D413C4,
        &&label_80D413C8,
        &&label_80D413CC,
        &&label_80D413D0,
        &&label_80D413D4,
        &&label_80D413D8,
        &&label_80D413DC,
        &&label_80D413E0,
        &&label_80D413E4,
        &&label_80D413E8,
        &&label_80D413EC,
        &&label_80D413F0,
        &&label_80D413F4,
        &&label_80D413F8,
        &&label_80D413FC,
        &&label_80D41400,
        &&label_80D41404,
        &&label_80D41408,
        &&label_80D4140C,
        &&label_80D41410,
        &&label_80D41414,
        &&label_80D41418,
        &&label_80D4141C,
        &&label_80D41420,
        &&label_80D41424,
        &&label_80D41428,
        &&label_80D4142C,
        &&label_80D41430,
        &&label_80D41434,
        &&label_80D41438,
        &&label_80D4143C,
        &&label_80D41440,
        &&label_80D41444,
        &&label_80D41448,
        &&label_80D4144C,
        &&label_80D41450,
        &&label_80D41454,
        &&label_80D41458,
        &&label_80D4145C,
        &&label_80D41460,
        &&label_80D41464,
        &&label_80D41468,
        &&label_80D4146C,
        &&label_80D41470,
        &&label_80D41474,
        &&label_80D41478,
        &&label_80D4147C,
        &&label_80D41480,
        &&label_80D41484,
        &&label_80D41488,
        &&label_80D4148C,
        &&label_80D41490,
        &&label_80D41494,
        &&label_80D41498,
        &&label_80D4149C,
        &&label_80D414A0,
        &&label_80D414A4,
        &&label_80D414A8,
        &&label_80D414AC,
        &&label_80D414B0,
        &&label_80D414B4,
        &&label_80D414B8,
        &&label_80D414BC,
        &&label_80D414C0,
        &&label_80D414C4,
        &&label_80D414C8,
        &&label_80D414CC,
        &&label_80D414D0,
        &&label_80D414D4,
        &&label_80D414D8,
        &&label_80D414DC,
        &&label_80D414E0,
        &&label_80D414E4,
        &&label_80D414E8,
        &&label_80D414EC,
        &&label_80D414F0,
        &&label_80D414F4,
        &&label_80D414F8,
        &&label_80D414FC,
        &&label_80D41500,
        &&label_80D41504,
        &&label_80D41508,
        &&label_80D4150C,
        &&label_80D41510,
        &&label_80D41514,
        &&label_80D41518,
        &&label_80D4151C,
        &&label_80D41520,
        &&label_80D41524,
        &&label_80D41528,
        &&label_80D4152C,
        &&label_80D41530,
        &&label_80D41534,
        &&label_80D41538,
        &&label_80D4153C,
        &&label_80D41540,
        &&label_80D41544,
        &&label_80D41548,
        &&label_80D4154C,
        &&label_80D41550,
        &&label_80D41554,
        &&label_80D41558,
        &&label_80D4155C,
        &&label_80D41560,
        &&label_80D41564,
        &&label_80D41568,
        &&label_80D4156C,
        &&label_80D41570,
        &&label_80D41574,
        &&label_80D41578,
        &&label_80D4157C,
        &&label_80D41580,
        &&label_80D41584,
        &&label_80D41588,
        &&label_80D4158C,
        &&label_80D41590,
        &&label_80D41594,
        &&label_80D41598,
        &&label_80D4159C,
        &&label_80D415A0,
        &&label_80D415A4,
        &&label_80D415A8,
        &&label_80D415AC,
        &&label_80D415B0,
        &&label_80D415B4,
        &&label_80D415B8,
        &&label_80D415BC,
        &&label_80D415C0,
        &&label_80D415C4,
        &&label_80D415C8,
        &&label_80D415CC,
        &&label_80D415D0,
        &&label_80D415D4,
        &&label_80D415D8,
        &&label_80D415DC,
        &&label_80D415E0,
        &&label_80D415E4,
        &&label_80D415E8,
        &&label_80D415EC,
        &&label_80D415F0,
        &&label_80D415F4,
        &&label_80D415F8,
        &&label_80D415FC,
        &&label_80D41600,
        &&label_80D41604,
        &&label_80D41608,
        &&label_80D4160C,
        &&label_80D41610,
        &&label_80D41614,
        &&label_80D41618,
        &&label_80D4161C,
        &&label_80D41620,
        &&label_80D41624,
        &&label_80D41628,
        &&label_80D4162C,
        &&label_80D41630,
        &&label_80D41634,
        &&label_80D41638,
        &&label_80D4163C,
        &&label_80D41640,
        &&label_80D41644,
        &&label_80D41648,
        &&label_80D4164C,
        &&label_80D41650,
        &&label_80D41654,
        &&label_80D41658,
        &&label_80D4165C,
        &&label_80D41660,
        &&label_80D41664,
        &&label_80D41668,
        &&label_80D4166C,
        &&label_80D41670,
        &&label_80D41674,
        &&label_80D41678,
        &&label_80D4167C,
        &&label_80D41680,
        &&label_80D41684,
        &&label_80D41688,
        &&label_80D4168C,
        &&label_80D41690,
        &&label_80D41694,
        &&label_80D41698,
        &&label_80D4169C,
        &&label_80D416A0,
        &&label_80D416A4,
        &&label_80D416A8,
        &&label_80D416AC,
        &&label_80D416B0,
        &&label_80D416B4,
        &&label_80D416B8,
        &&label_80D416BC,
        &&label_80D416C0,
        &&label_80D416C4,
        &&label_80D416C8,
        &&label_80D416CC,
        &&label_80D416D0,
        &&label_80D416D4,
        &&label_80D416D8,
        &&label_80D416DC,
        &&label_80D416E0,
        &&label_80D416E4,
        &&label_80D416E8,
        &&label_80D416EC,
        &&label_80D416F0,
        &&label_80D416F4,
        &&label_80D416F8,
        &&label_80D416FC,
        &&label_80D41700,
        &&label_80D41704,
        &&label_80D41708,
        &&label_80D4170C,
        &&label_80D41710,
        &&label_80D41714,
        &&label_80D41718,
        &&label_80D4171C,
        &&label_80D41720,
        &&label_80D41724,
        &&label_80D41728,
        &&label_80D4172C,
        &&label_80D41730,
        &&label_80D41734,
        &&label_80D41738,
        &&label_80D4173C,
        &&label_80D41740,
        &&label_80D41744,
        &&label_80D41748,
        &&label_80D4174C,
        &&label_80D41750,
        &&label_80D41754,
        &&label_80D41758,
        &&label_80D4175C,
        &&label_80D41760,
        &&label_80D41764,
        &&label_80D41768,
        &&label_80D4176C,
        &&label_80D41770,
        &&label_80D41774,
        &&label_80D41778,
        &&label_80D4177C,
        &&label_80D41780,
        &&label_80D41784,
        &&label_80D41788,
        &&label_80D4178C,
        &&label_80D41790,
        &&label_80D41794,
        &&label_80D41798,
        &&label_80D4179C,
        &&label_80D417A0,
        &&label_80D417A4,
        &&label_80D417A8,
        &&label_80D417AC,
        &&label_80D417B0,
        &&label_80D417B4,
        &&label_80D417B8,
        &&label_80D417BC,
        &&label_80D417C0,
        &&label_80D417C4,
        &&label_80D417C8,
        &&label_80D417CC,
        &&label_80D417D0,
        &&label_80D417D4,
        &&label_80D417D8,
        &&label_80D417DC,
        &&label_80D417E0,
        &&label_80D417E4,
        &&label_80D417E8,
        &&label_80D417EC,
        &&label_80D417F0,
        &&label_80D417F4,
        &&label_80D417F8,
        &&label_80D417FC,
        &&label_80D41800,
        &&label_80D41804,
        &&label_80D41808,
        &&label_80D4180C,
        &&label_80D41810,
        &&label_80D41814,
        &&label_80D41818,
        &&label_80D4181C,
        &&label_80D41820,
        &&label_80D41824,
        &&label_80D41828,
        &&label_80D4182C,
        &&label_80D41830,
        &&label_80D41834,
        &&label_80D41838,
        &&label_80D4183C,
        &&label_80D41840
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80D40860u && pc <= 0x80D41840u && ((pc - 0x80D40860u) & 3u) == 0u)
            goto *pc_table_80D40860[(pc - 0x80D40860u) >> 2];
    }
    return;
label_80D40860:
    ctx->pc = 0x80D40860u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40860u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D40860: stwu     r1, -48(r1)
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
label_80D40864:
    ctx->pc = 0x80D40864u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40864u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D40864: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D40868:
    ctx->pc = 0x80D40868u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40868u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D40868: stw     r0, 52(r1)
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
label_80D4086C:
    ctx->pc = 0x80D4086Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4086Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D4086C: stfd     f31, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D4086Cu)) return;
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
label_80D40870:
    ctx->pc = 0x80D40870u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40870u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D40870: psq_st   f31, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D40870u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80D40870u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D40874:
    ctx->pc = 0x80D40874u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40874u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D40874: stfd     f30, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D40874u)) return;
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
label_80D40878:
    ctx->pc = 0x80D40878u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40878u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D40878: psq_st   f30, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D40878u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x80D40878u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D4087C:
    ctx->pc = 0x80D4087Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4087Cu)) return;
    // 80D4087C: cmpwi   r3, 2
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

label_80D40880:
    ctx->pc = 0x80D40880u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40880u)) return;
    // 80D40880: bc    12, 2, 0x80D40EB4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D40EB4;
        }
    }

label_80D40884:
    ctx->pc = 0x80D40884u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40884u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D40884: bc    4, 0, 0x80D40898
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D40898;
        }
    }

label_80D40888:
    ctx->pc = 0x80D40888u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40888u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D40888: cmpwi   r3, 0
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

label_80D4088C:
    ctx->pc = 0x80D4088Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4088Cu)) return;
    // 80D4088C: bc    12, 2, 0x80D40FA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D40FA4;
        }
    }

label_80D40890:
    ctx->pc = 0x80D40890u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40890u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D40890: bc    4, 0, 0x80D408A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D408A0;
        }
    }

label_80D40894:
    ctx->pc = 0x80D40894u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40894u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D40894: b       0x80D40FA4
    {
            goto label_80D40FA4;
    }

label_80D40898:
    ctx->pc = 0x80D40898u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40898u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D40898: cmpwi   r3, 4
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

label_80D4089C:
    ctx->pc = 0x80D4089Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4089Cu)) return;
    // 80D4089C: b       0x80D40FA4
    {
            goto label_80D40FA4;
    }

label_80D408A0:
    ctx->pc = 0x80D408A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D408A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D408A0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D408A4:
    ctx->pc = 0x80D408A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D408A4u)) return;
    // 80D408A4: bl      0x80D41294
    {
            ctx->lr = 0x80D408A8u;
            goto label_80D41294;
    }

label_80D408A8:
    ctx->pc = 0x80D408A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D408A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D408A8: bl      0x8045DE7C
    {
            ctx->lr = 0x80D408ACu;
            ctx->pc = 0x8045DE7Cu;
            return;
    }

label_80D408AC:
    ctx->pc = 0x80D408ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D408ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D408AC: bl      0x80460A60
    {
            ctx->lr = 0x80D408B0u;
            ctx->pc = 0x80460A60u;
            return;
    }

label_80D408B0:
    ctx->pc = 0x80D408B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D408B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D408B0: bl      0x80460A24
    {
            ctx->lr = 0x80D408B4u;
            ctx->pc = 0x80460A24u;
            return;
    }

label_80D408B4:
    ctx->pc = 0x80D408B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D408B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D408B4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D408B8:
    ctx->pc = 0x80D408B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D408B8u)) return;
    // 80D408B8: bl      0x8045EC10
    {
            ctx->lr = 0x80D408BCu;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80D408BC:
    ctx->pc = 0x80D408BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D408BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D408BC: li      r3, 1718
    ctx->gpr[3] = (u32)(s32)(1718);

label_80D408C0:
    ctx->pc = 0x80D408C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D408C0u)) return;
    // 80D408C0: bl      0x8045BFA0
    {
            ctx->lr = 0x80D408C4u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80D408C4:
    ctx->pc = 0x80D408C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D408C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D408C4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D408C8:
    ctx->pc = 0x80D408C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D408C8u)) return;
    // 80D408C8: bl      0x8045F7C8
    {
            ctx->lr = 0x80D408CCu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D408CC:
    ctx->pc = 0x80D408CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D408CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D408CC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D408D0:
    ctx->pc = 0x80D408D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D408D0u)) return;
    // 80D408D0: bl      0x8045F220
    {
            ctx->lr = 0x80D408D4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D408D4:
    ctx->pc = 0x80D408D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D408D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D408D4: lis     r4, -27321
    ctx->gpr[4] = ((u32)(s32)(-27321) << 16);

label_80D408D8:
    ctx->pc = 0x80D408D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D408D8u)) return;
    // 80D408D8: addi    r4, r4, 15568
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(15568);

label_80D408DC:
    ctx->pc = 0x80D408DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D408DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D408DC: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D408DCu)) return;
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
label_80D408E0:
    ctx->pc = 0x80D408E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D408E0u)) return;
    // 80D408E0: lis     r4, -27321
    ctx->gpr[4] = ((u32)(s32)(-27321) << 16);

label_80D408E4:
    ctx->pc = 0x80D408E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D408E4u)) return;
    // 80D408E4: addi    r4, r4, 15572
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(15572);

label_80D408E8:
    ctx->pc = 0x80D408E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D408E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D408E8: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D408E8u)) return;
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
label_80D408EC:
    ctx->pc = 0x80D408ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D408ECu)) return;
    // 80D408EC: lis     r4, -27321
    ctx->gpr[4] = ((u32)(s32)(-27321) << 16);

label_80D408F0:
    ctx->pc = 0x80D408F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D408F0u)) return;
    // 80D408F0: addi    r4, r4, 15576
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(15576);

label_80D408F4:
    ctx->pc = 0x80D408F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D408F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D408F4: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D408F4u)) return;
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
label_80D408F8:
    ctx->pc = 0x80D408F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D408F8u)) return;
    // 80D408F8: bl      0x8045EF2C
    {
            ctx->lr = 0x80D408FCu;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80D408FC:
    ctx->pc = 0x80D408FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D408FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D408FC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D40900:
    ctx->pc = 0x80D40900u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40900u)) return;
    // 80D40900: bl      0x8045F220
    {
            ctx->lr = 0x80D40904u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D40904:
    ctx->pc = 0x80D40904u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40904u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D40904: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D40908:
    ctx->pc = 0x80D40908u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40908u)) return;
    // 80D40908: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80D4090C:
    ctx->pc = 0x80D4090Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4090Cu)) return;
    // 80D4090C: addi    r5, r5, -32688
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-32688);

label_80D40910:
    ctx->pc = 0x80D40910u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40910u)) return;
    // 80D40910: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80D40914:
    ctx->pc = 0x80D40914u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40914u)) return;
    // 80D40914: bl      0x8045EEA8
    {
            ctx->lr = 0x80D40918u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80D40918:
    ctx->pc = 0x80D40918u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40918u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D40918: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D4091C:
    ctx->pc = 0x80D4091Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4091Cu)) return;
    // 80D4091C: bl      0x8045F7C8
    {
            ctx->lr = 0x80D40920u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D40920:
    ctx->pc = 0x80D40920u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40920u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D40920: bl      0x8045C3AC
    {
            ctx->lr = 0x80D40924u;
            ctx->pc = 0x8045C3ACu;
            return;
    }

label_80D40924:
    ctx->pc = 0x80D40924u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40924u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D40924: bl      0x8045C4A4
    {
            ctx->lr = 0x80D40928u;
            ctx->pc = 0x8045C4A4u;
            return;
    }

label_80D40928:
    ctx->pc = 0x80D40928u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40928u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D40928: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D4092C:
    ctx->pc = 0x80D4092Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4092Cu)) return;
    // 80D4092C: bl      0x8045F220
    {
            ctx->lr = 0x80D40930u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D40930:
    ctx->pc = 0x80D40930u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40930u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D40930: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D40934:
    ctx->pc = 0x80D40934u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40934u)) return;
    // 80D40934: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D40938:
    ctx->pc = 0x80D40938u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40938u)) return;
    // 80D40938: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D4093C:
    ctx->pc = 0x80D4093Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4093Cu)) return;
    // 80D4093C: lis     r6, -27321
    ctx->gpr[6] = ((u32)(s32)(-27321) << 16);

label_80D40940:
    ctx->pc = 0x80D40940u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40940u)) return;
    // 80D40940: addi    r6, r6, 15580
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(15580);

label_80D40944:
    ctx->pc = 0x80D40944u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40944u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D40944: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D40944u)) return;
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
label_80D40948:
    ctx->pc = 0x80D40948u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40948u)) return;
    // 80D40948: lis     r6, -27321
    ctx->gpr[6] = ((u32)(s32)(-27321) << 16);

label_80D4094C:
    ctx->pc = 0x80D4094Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4094Cu)) return;
    // 80D4094C: addi    r6, r6, 15584
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(15584);

label_80D40950:
    ctx->pc = 0x80D40950u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40950u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D40950: lfs     f2, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D40950u)) return;
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
label_80D40954:
    ctx->pc = 0x80D40954u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40954u)) return;
    // 80D40954: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80D40954u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80D40958:
    ctx->pc = 0x80D40958u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40958u)) return;
    // 80D40958: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80D4095C:
    ctx->pc = 0x80D4095Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4095Cu)) return;
    // 80D4095C: bl      0x8045C3C0
    {
            ctx->lr = 0x80D40960u;
            ctx->pc = 0x8045C3C0u;
            return;
    }

label_80D40960:
    ctx->pc = 0x80D40960u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40960u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D40960: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D40964:
    ctx->pc = 0x80D40964u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40964u)) return;
    // 80D40964: bl      0x8045F220
    {
            ctx->lr = 0x80D40968u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D40968:
    ctx->pc = 0x80D40968u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 20u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40968u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 20u : 1u;
    // 80D40968: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D4096C:
    ctx->pc = 0x80D4096Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4096Cu)) return;
    // 80D4096C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D40970:
    ctx->pc = 0x80D40970u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40970u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80D40970: stw     r0, 8(r1)
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
label_80D40974:
    ctx->pc = 0x80D40974u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40974u)) return;
    // 80D40974: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D40978:
    ctx->pc = 0x80D40978u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40978u)) return;
    // 80D40978: li      r4, 500
    ctx->gpr[4] = (u32)(s32)(500);

label_80D4097C:
    ctx->pc = 0x80D4097Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4097Cu)) return;
    // 80D4097C: lis     r6, -27321
    ctx->gpr[6] = ((u32)(s32)(-27321) << 16);

label_80D40980:
    ctx->pc = 0x80D40980u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40980u)) return;
    // 80D40980: addi    r6, r6, 15588
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(15588);

label_80D40984:
    ctx->pc = 0x80D40984u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40984u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80D40984: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D40984u)) return;
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
label_80D40988:
    ctx->pc = 0x80D40988u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40988u)) return;
    // 80D40988: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80D4098C:
    ctx->pc = 0x80D4098Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4098Cu)) return;
    // 80D4098C: lis     r7, 1
    ctx->gpr[7] = ((u32)(s32)(1) << 16);

label_80D40990:
    ctx->pc = 0x80D40990u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40990u)) return;
    // 80D40990: addi    r7, r7, -10923
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-10923);

label_80D40994:
    ctx->pc = 0x80D40994u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40994u)) return;
    // 80D40994: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80D40998:
    ctx->pc = 0x80D40998u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40998u)) return;
    // 80D40998: lis     r9, -27321
    ctx->gpr[9] = ((u32)(s32)(-27321) << 16);

label_80D4099C:
    ctx->pc = 0x80D4099Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4099Cu)) return;
    // 80D4099C: addi    r9, r9, 15592
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(15592);

label_80D409A0:
    ctx->pc = 0x80D409A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D409A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D409A0: lfs     f2, 0(r9)
    if (!ppc_fp_available_inline(ctx, 0x80D409A0u)) return;
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
label_80D409A4:
    ctx->pc = 0x80D409A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D409A4u)) return;
    // 80D409A4: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_80D409A8:
    ctx->pc = 0x80D409A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D409A8u)) return;
    // 80D409A8: lis     r10, -2
    ctx->gpr[10] = ((u32)(s32)(-2) << 16);

label_80D409AC:
    ctx->pc = 0x80D409ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D409ACu)) return;
    // 80D409AC: addi    r10, r10, 30949
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(30949);

label_80D409B0:
    ctx->pc = 0x80D409B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D409B0u)) return;
    // 80D409B0: fmr    f3, f2
    if (!ppc_fp_available_inline(ctx, 0x80D409B0u)) return;
    ctx->fpr[3] = ctx->fpr[2];

label_80D409B4:
    ctx->pc = 0x80D409B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D409B4u)) return;
    // 80D409B4: bl      0x8045C260
    {
            ctx->lr = 0x80D409B8u;
            ctx->pc = 0x8045C260u;
            return;
    }

label_80D409B8:
    ctx->pc = 0x80D409B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D409B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D409B8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D409BC:
    ctx->pc = 0x80D409BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D409BCu)) return;
    // 80D409BC: bl      0x8045F220
    {
            ctx->lr = 0x80D409C0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D409C0:
    ctx->pc = 0x80D409C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D409C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D409C0: lwz     r3, 32(r3)
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
label_80D409C4:
    ctx->pc = 0x80D409C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D409C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D409C4: lfs     f1, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D409C4u)) return;
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
label_80D409C8:
    ctx->pc = 0x80D409C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D409C8u)) return;
    // 80D409C8: lis     r3, -27321
    ctx->gpr[3] = ((u32)(s32)(-27321) << 16);

label_80D409CC:
    ctx->pc = 0x80D409CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D409CCu)) return;
    // 80D409CC: addi    r3, r3, 15600
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(15600);

label_80D409D0:
    ctx->pc = 0x80D409D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D409D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D409D0: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D409D0u)) return;
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
label_80D409D4:
    ctx->pc = 0x80D409D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D409D4u)) return;
    // 80D409D4: fsubs   f31, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80D409D4u)) return;
    ppc_fsubs(ctx, 31, 1, 0);

label_80D409D8:
    ctx->pc = 0x80D409D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D409D8u)) return;
    // 80D409D8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D409DC:
    ctx->pc = 0x80D409DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D409DCu)) return;
    // 80D409DC: bl      0x8045F220
    {
            ctx->lr = 0x80D409E0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D409E0:
    ctx->pc = 0x80D409E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D409E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D409E0: lwz     r3, 32(r3)
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
label_80D409E4:
    ctx->pc = 0x80D409E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D409E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D409E4: lfs     f1, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D409E4u)) return;
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
label_80D409E8:
    ctx->pc = 0x80D409E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D409E8u)) return;
    // 80D409E8: lis     r3, -27321
    ctx->gpr[3] = ((u32)(s32)(-27321) << 16);

label_80D409EC:
    ctx->pc = 0x80D409ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D409ECu)) return;
    // 80D409EC: addi    r3, r3, 15592
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(15592);

label_80D409F0:
    ctx->pc = 0x80D409F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D409F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D409F0: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D409F0u)) return;
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
label_80D409F4:
    ctx->pc = 0x80D409F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D409F4u)) return;
    // 80D409F4: fadds   f30, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80D409F4u)) return;
    ppc_fadds(ctx, 30, 0, 1);

label_80D409F8:
    ctx->pc = 0x80D409F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D409F8u)) return;
    // 80D409F8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D409FC:
    ctx->pc = 0x80D409FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D409FCu)) return;
    // 80D409FC: bl      0x8045F220
    {
            ctx->lr = 0x80D40A00u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D40A00:
    ctx->pc = 0x80D40A00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40A00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D40A00: lwz     r3, 32(r3)
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
label_80D40A04:
    ctx->pc = 0x80D40A04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40A04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D40A04: lfs     f1, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D40A04u)) return;
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
label_80D40A08:
    ctx->pc = 0x80D40A08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40A08u)) return;
    // 80D40A08: lis     r3, -27321
    ctx->gpr[3] = ((u32)(s32)(-27321) << 16);

label_80D40A0C:
    ctx->pc = 0x80D40A0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40A0Cu)) return;
    // 80D40A0C: addi    r3, r3, 15596
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(15596);

label_80D40A10:
    ctx->pc = 0x80D40A10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40A10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D40A10: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D40A10u)) return;
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
label_80D40A14:
    ctx->pc = 0x80D40A14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40A14u)) return;
    // 80D40A14: fadds   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80D40A14u)) return;
    ppc_fadds(ctx, 1, 0, 1);

label_80D40A18:
    ctx->pc = 0x80D40A18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40A18u)) return;
    // 80D40A18: fmr    f2, f30
    if (!ppc_fp_available_inline(ctx, 0x80D40A18u)) return;
    ctx->fpr[2] = ctx->fpr[30];

label_80D40A1C:
    ctx->pc = 0x80D40A1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40A1Cu)) return;
    // 80D40A1C: fmr    f3, f31
    if (!ppc_fp_available_inline(ctx, 0x80D40A1Cu)) return;
    ctx->fpr[3] = ctx->fpr[31];

label_80D40A20:
    ctx->pc = 0x80D40A20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40A20u)) return;
    // 80D40A20: bl      0x80D4172C
    {
            ctx->lr = 0x80D40A24u;
            goto label_80D4172C;
    }

label_80D40A24:
    ctx->pc = 0x80D40A24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40A24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D40A24: lis     r4, -27320
    ctx->gpr[4] = ((u32)(s32)(-27320) << 16);

label_80D40A28:
    ctx->pc = 0x80D40A28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40A28u)) return;
    // 80D40A28: addi    r4, r4, -3328
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-3328);

label_80D40A2C:
    ctx->pc = 0x80D40A2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40A2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D40A2C: stw     r3, 0(r4)
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
label_80D40A30:
    ctx->pc = 0x80D40A30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40A30u)) return;
    // 80D40A30: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D40A34:
    ctx->pc = 0x80D40A34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40A34u)) return;
    // 80D40A34: bl      0x8045F7C8
    {
            ctx->lr = 0x80D40A38u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D40A38:
    ctx->pc = 0x80D40A38u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40A38u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D40A38: lis     r3, -27320
    ctx->gpr[3] = ((u32)(s32)(-27320) << 16);

label_80D40A3C:
    ctx->pc = 0x80D40A3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40A3Cu)) return;
    // 80D40A3C: addi    r3, r3, -3328
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3328);

label_80D40A40:
    ctx->pc = 0x80D40A40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40A40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D40A40: lwz     r3, 0(r3)
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
label_80D40A44:
    ctx->pc = 0x80D40A44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40A44u)) return;
    // 80D40A44: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D40A48:
    ctx->pc = 0x80D40A48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40A48u)) return;
    // 80D40A48: bl      0x8045EE90
    {
            ctx->lr = 0x80D40A4Cu;
            ctx->pc = 0x8045EE90u;
            return;
    }

label_80D40A4C:
    ctx->pc = 0x80D40A4Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40A4Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D40A4C: lis     r3, -27320
    ctx->gpr[3] = ((u32)(s32)(-27320) << 16);

label_80D40A50:
    ctx->pc = 0x80D40A50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40A50u)) return;
    // 80D40A50: addi    r3, r3, -3328
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3328);

label_80D40A54:
    ctx->pc = 0x80D40A54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40A54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D40A54: lwz     r3, 0(r3)
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
label_80D40A58:
    ctx->pc = 0x80D40A58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40A58u)) return;
    // 80D40A58: bl      0x8045EAE8
    {
            ctx->lr = 0x80D40A5Cu;
            ctx->pc = 0x8045EAE8u;
            return;
    }

label_80D40A5C:
    ctx->pc = 0x80D40A5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40A5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D40A5C: lis     r3, -27320
    ctx->gpr[3] = ((u32)(s32)(-27320) << 16);

label_80D40A60:
    ctx->pc = 0x80D40A60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40A60u)) return;
    // 80D40A60: addi    r3, r3, -3328
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3328);

label_80D40A64:
    ctx->pc = 0x80D40A64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40A64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D40A64: lwz     r3, 0(r3)
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
label_80D40A68:
    ctx->pc = 0x80D40A68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40A68u)) return;
    // 80D40A68: lis     r4, -27321
    ctx->gpr[4] = ((u32)(s32)(-27321) << 16);

label_80D40A6C:
    ctx->pc = 0x80D40A6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40A6Cu)) return;
    // 80D40A6C: addi    r4, r4, 28016
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(28016);

label_80D40A70:
    ctx->pc = 0x80D40A70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40A70u)) return;
    // 80D40A70: lis     r5, -27321
    ctx->gpr[5] = ((u32)(s32)(-27321) << 16);

label_80D40A74:
    ctx->pc = 0x80D40A74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40A74u)) return;
    // 80D40A74: addi    r5, r5, 15604
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(15604);

label_80D40A78:
    ctx->pc = 0x80D40A78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40A78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D40A78: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D40A78u)) return;
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
label_80D40A7C:
    ctx->pc = 0x80D40A7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40A7Cu)) return;
    // 80D40A7C: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_80D40A80:
    ctx->pc = 0x80D40A80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40A80u)) return;
    // 80D40A80: bl      0x8045EB14
    {
            ctx->lr = 0x80D40A84u;
            ctx->pc = 0x8045EB14u;
            return;
    }

label_80D40A84:
    ctx->pc = 0x80D40A84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40A84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D40A84: li      r3, 1865
    ctx->gpr[3] = (u32)(s32)(1865);

label_80D40A88:
    ctx->pc = 0x80D40A88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40A88u)) return;
    // 80D40A88: bl      0x8045BFA0
    {
            ctx->lr = 0x80D40A8Cu;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80D40A8C:
    ctx->pc = 0x80D40A8Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40A8Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D40A8C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D40A90:
    ctx->pc = 0x80D40A90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40A90u)) return;
    // 80D40A90: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80D40A94:
    ctx->pc = 0x80D40A94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40A94u)) return;
    // 80D40A94: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80D40A98:
    ctx->pc = 0x80D40A98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40A98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D40A98: lwz     r0, 0(r4)
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
label_80D40A9C:
    ctx->pc = 0x80D40A9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40A9Cu)) return;
    // 80D40A9C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D40AA0:
    ctx->pc = 0x80D40AA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40AA0u)) return;
    // 80D40AA0: lis     r4, -27321
    ctx->gpr[4] = ((u32)(s32)(-27321) << 16);

label_80D40AA4:
    ctx->pc = 0x80D40AA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40AA4u)) return;
    // 80D40AA4: addi    r4, r4, 29632
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(29632);

label_80D40AA8:
    ctx->pc = 0x80D40AA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40AA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D40AA8: lwzx    r4, r4, r0
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
label_80D40AAC:
    ctx->pc = 0x80D40AACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40AACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D40AAC: lwz     r4, 0(r4)
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
label_80D40AB0:
    ctx->pc = 0x80D40AB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40AB0u)) return;
    // 80D40AB0: bl      0x8045F608
    {
            ctx->lr = 0x80D40AB4u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80D40AB4:
    ctx->pc = 0x80D40AB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40AB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D40AB4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D40AB8:
    ctx->pc = 0x80D40AB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40AB8u)) return;
    // 80D40AB8: bl      0x8045F220
    {
            ctx->lr = 0x80D40ABCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D40ABC:
    ctx->pc = 0x80D40ABCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40ABCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D40ABC: lis     r4, -27320
    ctx->gpr[4] = ((u32)(s32)(-27320) << 16);

label_80D40AC0:
    ctx->pc = 0x80D40AC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40AC0u)) return;
    // 80D40AC0: addi    r4, r4, -22572
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-22572);

label_80D40AC4:
    ctx->pc = 0x80D40AC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40AC4u)) return;
    // 80D40AC4: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80D40AC8:
    ctx->pc = 0x80D40AC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40AC8u)) return;
    // 80D40AC8: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80D40ACC:
    ctx->pc = 0x80D40ACCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40ACCu)) return;
    // 80D40ACC: lis     r6, -27321
    ctx->gpr[6] = ((u32)(s32)(-27321) << 16);

label_80D40AD0:
    ctx->pc = 0x80D40AD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40AD0u)) return;
    // 80D40AD0: addi    r6, r6, 15608
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(15608);

label_80D40AD4:
    ctx->pc = 0x80D40AD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40AD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D40AD4: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D40AD4u)) return;
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
label_80D40AD8:
    ctx->pc = 0x80D40AD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40AD8u)) return;
    // 80D40AD8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80D40ADC:
    ctx->pc = 0x80D40ADCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40ADCu)) return;
    // 80D40ADC: li      r7, 16
    ctx->gpr[7] = (u32)(s32)(16);

label_80D40AE0:
    ctx->pc = 0x80D40AE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40AE0u)) return;
    // 80D40AE0: bl      0x8045EBE4
    {
            ctx->lr = 0x80D40AE4u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80D40AE4:
    ctx->pc = 0x80D40AE4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40AE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D40AE4: li      r3, 33
    ctx->gpr[3] = (u32)(s32)(33);

label_80D40AE8:
    ctx->pc = 0x80D40AE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40AE8u)) return;
    // 80D40AE8: bl      0x8045F7C8
    {
            ctx->lr = 0x80D40AECu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D40AEC:
    ctx->pc = 0x80D40AECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40AECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D40AEC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D40AF0:
    ctx->pc = 0x80D40AF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40AF0u)) return;
    // 80D40AF0: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80D40AF4:
    ctx->pc = 0x80D40AF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40AF4u)) return;
    // 80D40AF4: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80D40AF8:
    ctx->pc = 0x80D40AF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40AF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D40AF8: lwz     r0, 0(r4)
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
label_80D40AFC:
    ctx->pc = 0x80D40AFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40AFCu)) return;
    // 80D40AFC: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D40B00:
    ctx->pc = 0x80D40B00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40B00u)) return;
    // 80D40B00: lis     r4, -27321
    ctx->gpr[4] = ((u32)(s32)(-27321) << 16);

label_80D40B04:
    ctx->pc = 0x80D40B04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40B04u)) return;
    // 80D40B04: addi    r4, r4, 29632
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(29632);

label_80D40B08:
    ctx->pc = 0x80D40B08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40B08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D40B08: lwzx    r4, r4, r0
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
label_80D40B0C:
    ctx->pc = 0x80D40B0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40B0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D40B0C: lwz     r4, 4(r4)
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
label_80D40B10:
    ctx->pc = 0x80D40B10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40B10u)) return;
    // 80D40B10: bl      0x8045F608
    {
            ctx->lr = 0x80D40B14u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80D40B14:
    ctx->pc = 0x80D40B14u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40B14u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D40B14: li      r3, 40
    ctx->gpr[3] = (u32)(s32)(40);

label_80D40B18:
    ctx->pc = 0x80D40B18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40B18u)) return;
    // 80D40B18: bl      0x8045F7C8
    {
            ctx->lr = 0x80D40B1Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D40B1C:
    ctx->pc = 0x80D40B1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40B1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D40B1C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D40B20:
    ctx->pc = 0x80D40B20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40B20u)) return;
    // 80D40B20: bl      0x80D4140C
    {
            ctx->lr = 0x80D40B24u;
            goto label_80D4140C;
    }

label_80D40B24:
    ctx->pc = 0x80D40B24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40B24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D40B24: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D40B28:
    ctx->pc = 0x80D40B28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40B28u)) return;
    // 80D40B28: bl      0x8045F220
    {
            ctx->lr = 0x80D40B2Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D40B2C:
    ctx->pc = 0x80D40B2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40B2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D40B2C: lis     r4, -27320
    ctx->gpr[4] = ((u32)(s32)(-27320) << 16);

label_80D40B30:
    ctx->pc = 0x80D40B30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40B30u)) return;
    // 80D40B30: addi    r4, r4, -10648
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-10648);

label_80D40B34:
    ctx->pc = 0x80D40B34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40B34u)) return;
    // 80D40B34: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80D40B38:
    ctx->pc = 0x80D40B38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40B38u)) return;
    // 80D40B38: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80D40B3C:
    ctx->pc = 0x80D40B3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40B3Cu)) return;
    // 80D40B3C: lis     r6, -27321
    ctx->gpr[6] = ((u32)(s32)(-27321) << 16);

label_80D40B40:
    ctx->pc = 0x80D40B40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40B40u)) return;
    // 80D40B40: addi    r6, r6, 15612
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(15612);

label_80D40B44:
    ctx->pc = 0x80D40B44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40B44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D40B44: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D40B44u)) return;
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
label_80D40B48:
    ctx->pc = 0x80D40B48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40B48u)) return;
    // 80D40B48: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80D40B4C:
    ctx->pc = 0x80D40B4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40B4Cu)) return;
    // 80D40B4C: li      r7, 16
    ctx->gpr[7] = (u32)(s32)(16);

label_80D40B50:
    ctx->pc = 0x80D40B50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40B50u)) return;
    // 80D40B50: bl      0x8045EBE4
    {
            ctx->lr = 0x80D40B54u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80D40B54:
    ctx->pc = 0x80D40B54u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40B54u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D40B54: li      r3, 50
    ctx->gpr[3] = (u32)(s32)(50);

label_80D40B58:
    ctx->pc = 0x80D40B58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40B58u)) return;
    // 80D40B58: bl      0x8045F7C8
    {
            ctx->lr = 0x80D40B5Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D40B5C:
    ctx->pc = 0x80D40B5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40B5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D40B5C: li      r3, 40
    ctx->gpr[3] = (u32)(s32)(40);

label_80D40B60:
    ctx->pc = 0x80D40B60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40B60u)) return;
    // 80D40B60: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80D40B64:
    ctx->pc = 0x80D40B64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40B64u)) return;
    // 80D40B64: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80D40B68:
    ctx->pc = 0x80D40B68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40B68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D40B68: lwz     r0, 0(r4)
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
label_80D40B6C:
    ctx->pc = 0x80D40B6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40B6Cu)) return;
    // 80D40B6C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D40B70:
    ctx->pc = 0x80D40B70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40B70u)) return;
    // 80D40B70: lis     r4, -27321
    ctx->gpr[4] = ((u32)(s32)(-27321) << 16);

label_80D40B74:
    ctx->pc = 0x80D40B74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40B74u)) return;
    // 80D40B74: addi    r4, r4, 29632
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(29632);

label_80D40B78:
    ctx->pc = 0x80D40B78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40B78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D40B78: lwzx    r4, r4, r0
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
label_80D40B7C:
    ctx->pc = 0x80D40B7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40B7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D40B7C: lwz     r4, 8(r4)
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
label_80D40B80:
    ctx->pc = 0x80D40B80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40B80u)) return;
    // 80D40B80: bl      0x8045F608
    {
            ctx->lr = 0x80D40B84u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80D40B84:
    ctx->pc = 0x80D40B84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40B84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D40B84: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D40B88:
    ctx->pc = 0x80D40B88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40B88u)) return;
    // 80D40B88: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80D40B8C:
    ctx->pc = 0x80D40B8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40B8Cu)) return;
    // 80D40B8C: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80D40B90:
    ctx->pc = 0x80D40B90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40B90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D40B90: lwz     r0, 0(r4)
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
label_80D40B94:
    ctx->pc = 0x80D40B94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40B94u)) return;
    // 80D40B94: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D40B98:
    ctx->pc = 0x80D40B98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40B98u)) return;
    // 80D40B98: lis     r4, -27321
    ctx->gpr[4] = ((u32)(s32)(-27321) << 16);

label_80D40B9C:
    ctx->pc = 0x80D40B9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40B9Cu)) return;
    // 80D40B9C: addi    r4, r4, 29632
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(29632);

label_80D40BA0:
    ctx->pc = 0x80D40BA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40BA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D40BA0: lwzx    r4, r4, r0
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
label_80D40BA4:
    ctx->pc = 0x80D40BA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40BA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D40BA4: lwz     r4, 12(r4)
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
label_80D40BA8:
    ctx->pc = 0x80D40BA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40BA8u)) return;
    // 80D40BA8: bl      0x8045F608
    {
            ctx->lr = 0x80D40BACu;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80D40BAC:
    ctx->pc = 0x80D40BACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40BACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D40BAC: li      r3, 20
    ctx->gpr[3] = (u32)(s32)(20);

label_80D40BB0:
    ctx->pc = 0x80D40BB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40BB0u)) return;
    // 80D40BB0: bl      0x8045F7C8
    {
            ctx->lr = 0x80D40BB4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D40BB4:
    ctx->pc = 0x80D40BB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40BB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D40BB4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D40BB8:
    ctx->pc = 0x80D40BB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40BB8u)) return;
    // 80D40BB8: li      r4, 760
    ctx->gpr[4] = (u32)(s32)(760);

label_80D40BBC:
    ctx->pc = 0x80D40BBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40BBCu)) return;
    // 80D40BBC: li      r5, 1800
    ctx->gpr[5] = (u32)(s32)(1800);

label_80D40BC0:
    ctx->pc = 0x80D40BC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40BC0u)) return;
    // 80D40BC0: bl      0x80D4139C
    {
            ctx->lr = 0x80D40BC4u;
            goto label_80D4139C;
    }

label_80D40BC4:
    ctx->pc = 0x80D40BC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40BC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D40BC4: lis     r3, -27320
    ctx->gpr[3] = ((u32)(s32)(-27320) << 16);

label_80D40BC8:
    ctx->pc = 0x80D40BC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40BC8u)) return;
    // 80D40BC8: addi    r3, r3, -3328
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3328);

label_80D40BCC:
    ctx->pc = 0x80D40BCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40BCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D40BCC: lwz     r3, 0(r3)
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
label_80D40BD0:
    ctx->pc = 0x80D40BD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40BD0u)) return;
    // 80D40BD0: bl      0x8045EAE8
    {
            ctx->lr = 0x80D40BD4u;
            ctx->pc = 0x8045EAE8u;
            return;
    }

label_80D40BD4:
    ctx->pc = 0x80D40BD4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40BD4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D40BD4: lis     r3, -27320
    ctx->gpr[3] = ((u32)(s32)(-27320) << 16);

label_80D40BD8:
    ctx->pc = 0x80D40BD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40BD8u)) return;
    // 80D40BD8: addi    r3, r3, -3328
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3328);

label_80D40BDC:
    ctx->pc = 0x80D40BDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40BDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D40BDC: lwz     r3, 0(r3)
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
label_80D40BE0:
    ctx->pc = 0x80D40BE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40BE0u)) return;
    // 80D40BE0: cmplwi  r3, 0x0000
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

label_80D40BE4:
    ctx->pc = 0x80D40BE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40BE4u)) return;
    // 80D40BE4: bc    12, 2, 0x80D40BFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D40BFC;
        }
    }

label_80D40BE8:
    ctx->pc = 0x80D40BE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40BE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D40BE8: bl      0x8050F9E0
    {
            ctx->lr = 0x80D40BECu;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80D40BEC:
    ctx->pc = 0x80D40BECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40BECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D40BEC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D40BF0:
    ctx->pc = 0x80D40BF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40BF0u)) return;
    // 80D40BF0: lis     r3, -27320
    ctx->gpr[3] = ((u32)(s32)(-27320) << 16);

label_80D40BF4:
    ctx->pc = 0x80D40BF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40BF4u)) return;
    // 80D40BF4: addi    r3, r3, -3328
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3328);

label_80D40BF8:
    ctx->pc = 0x80D40BF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40BF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D40BF8: stw     r0, 0(r3)
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
label_80D40BFC:
    ctx->pc = 0x80D40BFCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40BFCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D40BFC: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80D40C00:
    ctx->pc = 0x80D40C00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40C00u)) return;
    // 80D40C00: bl      0x8045F7C8
    {
            ctx->lr = 0x80D40C04u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D40C04:
    ctx->pc = 0x80D40C04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40C04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D40C04: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D40C08:
    ctx->pc = 0x80D40C08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40C08u)) return;
    // 80D40C08: bl      0x8045F220
    {
            ctx->lr = 0x80D40C0Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D40C0C:
    ctx->pc = 0x80D40C0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40C0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D40C0C: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D40C10:
    ctx->pc = 0x80D40C10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40C10u)) return;
    // 80D40C10: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D40C14:
    ctx->pc = 0x80D40C14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40C14u)) return;
    // 80D40C14: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D40C18:
    ctx->pc = 0x80D40C18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40C18u)) return;
    // 80D40C18: lis     r6, -27321
    ctx->gpr[6] = ((u32)(s32)(-27321) << 16);

label_80D40C1C:
    ctx->pc = 0x80D40C1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40C1Cu)) return;
    // 80D40C1C: addi    r6, r6, 15580
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(15580);

label_80D40C20:
    ctx->pc = 0x80D40C20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40C20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D40C20: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D40C20u)) return;
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
label_80D40C24:
    ctx->pc = 0x80D40C24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40C24u)) return;
    // 80D40C24: lis     r6, -27321
    ctx->gpr[6] = ((u32)(s32)(-27321) << 16);

label_80D40C28:
    ctx->pc = 0x80D40C28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40C28u)) return;
    // 80D40C28: addi    r6, r6, 15584
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(15584);

label_80D40C2C:
    ctx->pc = 0x80D40C2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40C2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D40C2C: lfs     f2, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D40C2Cu)) return;
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
label_80D40C30:
    ctx->pc = 0x80D40C30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40C30u)) return;
    // 80D40C30: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80D40C30u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80D40C34:
    ctx->pc = 0x80D40C34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40C34u)) return;
    // 80D40C34: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80D40C38:
    ctx->pc = 0x80D40C38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40C38u)) return;
    // 80D40C38: bl      0x8045C3C0
    {
            ctx->lr = 0x80D40C3Cu;
            ctx->pc = 0x8045C3C0u;
            return;
    }

label_80D40C3C:
    ctx->pc = 0x80D40C3Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40C3Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D40C3C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D40C40:
    ctx->pc = 0x80D40C40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40C40u)) return;
    // 80D40C40: bl      0x8045F220
    {
            ctx->lr = 0x80D40C44u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D40C44:
    ctx->pc = 0x80D40C44u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 19u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40C44u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 19u : 1u;
    // 80D40C44: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D40C48:
    ctx->pc = 0x80D40C48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40C48u)) return;
    // 80D40C48: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D40C4C:
    ctx->pc = 0x80D40C4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40C4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80D40C4C: stw     r0, 8(r1)
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
label_80D40C50:
    ctx->pc = 0x80D40C50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40C50u)) return;
    // 80D40C50: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D40C54:
    ctx->pc = 0x80D40C54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40C54u)) return;
    // 80D40C54: li      r4, 150
    ctx->gpr[4] = (u32)(s32)(150);

label_80D40C58:
    ctx->pc = 0x80D40C58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40C58u)) return;
    // 80D40C58: lis     r6, -27321
    ctx->gpr[6] = ((u32)(s32)(-27321) << 16);

label_80D40C5C:
    ctx->pc = 0x80D40C5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40C5Cu)) return;
    // 80D40C5C: addi    r6, r6, 15616
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(15616);

label_80D40C60:
    ctx->pc = 0x80D40C60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40C60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D40C60: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D40C60u)) return;
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
label_80D40C64:
    ctx->pc = 0x80D40C64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40C64u)) return;
    // 80D40C64: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80D40C68:
    ctx->pc = 0x80D40C68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40C68u)) return;
    // 80D40C68: li      r7, 10923
    ctx->gpr[7] = (u32)(s32)(10923);

label_80D40C6C:
    ctx->pc = 0x80D40C6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40C6Cu)) return;
    // 80D40C6C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80D40C70:
    ctx->pc = 0x80D40C70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40C70u)) return;
    // 80D40C70: lis     r9, -27321
    ctx->gpr[9] = ((u32)(s32)(-27321) << 16);

label_80D40C74:
    ctx->pc = 0x80D40C74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40C74u)) return;
    // 80D40C74: addi    r9, r9, 15620
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(15620);

label_80D40C78:
    ctx->pc = 0x80D40C78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40C78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D40C78: lfs     f2, 0(r9)
    if (!ppc_fp_available_inline(ctx, 0x80D40C78u)) return;
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
label_80D40C7C:
    ctx->pc = 0x80D40C7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40C7Cu)) return;
    // 80D40C7C: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_80D40C80:
    ctx->pc = 0x80D40C80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40C80u)) return;
    // 80D40C80: lis     r10, -1
    ctx->gpr[10] = ((u32)(s32)(-1) << 16);

label_80D40C84:
    ctx->pc = 0x80D40C84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40C84u)) return;
    // 80D40C84: addi    r10, r10, 27308
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(27308);

label_80D40C88:
    ctx->pc = 0x80D40C88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40C88u)) return;
    // 80D40C88: fmr    f3, f2
    if (!ppc_fp_available_inline(ctx, 0x80D40C88u)) return;
    ctx->fpr[3] = ctx->fpr[2];

label_80D40C8C:
    ctx->pc = 0x80D40C8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40C8Cu)) return;
    // 80D40C8C: bl      0x8045C260
    {
            ctx->lr = 0x80D40C90u;
            ctx->pc = 0x8045C260u;
            return;
    }

label_80D40C90:
    ctx->pc = 0x80D40C90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40C90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D40C90: li      r3, 70
    ctx->gpr[3] = (u32)(s32)(70);

label_80D40C94:
    ctx->pc = 0x80D40C94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40C94u)) return;
    // 80D40C94: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80D40C98:
    ctx->pc = 0x80D40C98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40C98u)) return;
    // 80D40C98: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80D40C9C:
    ctx->pc = 0x80D40C9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40C9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D40C9C: lwz     r0, 0(r4)
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
label_80D40CA0:
    ctx->pc = 0x80D40CA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40CA0u)) return;
    // 80D40CA0: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D40CA4:
    ctx->pc = 0x80D40CA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40CA4u)) return;
    // 80D40CA4: lis     r4, -27321
    ctx->gpr[4] = ((u32)(s32)(-27321) << 16);

label_80D40CA8:
    ctx->pc = 0x80D40CA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40CA8u)) return;
    // 80D40CA8: addi    r4, r4, 29632
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(29632);

label_80D40CAC:
    ctx->pc = 0x80D40CACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40CACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D40CAC: lwzx    r4, r4, r0
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
label_80D40CB0:
    ctx->pc = 0x80D40CB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40CB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D40CB0: lwz     r4, 16(r4)
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
label_80D40CB4:
    ctx->pc = 0x80D40CB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40CB4u)) return;
    // 80D40CB4: bl      0x8045F608
    {
            ctx->lr = 0x80D40CB8u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80D40CB8:
    ctx->pc = 0x80D40CB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40CB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D40CB8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D40CBC:
    ctx->pc = 0x80D40CBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40CBCu)) return;
    // 80D40CBC: bl      0x8045F7C8
    {
            ctx->lr = 0x80D40CC0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D40CC0:
    ctx->pc = 0x80D40CC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40CC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D40CC0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D40CC4:
    ctx->pc = 0x80D40CC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40CC4u)) return;
    // 80D40CC4: bl      0x8045F220
    {
            ctx->lr = 0x80D40CC8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D40CC8:
    ctx->pc = 0x80D40CC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40CC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D40CC8: lwz     r3, 32(r3)
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
label_80D40CCC:
    ctx->pc = 0x80D40CCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40CCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D40CCC: lfs     f1, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D40CCCu)) return;
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
label_80D40CD0:
    ctx->pc = 0x80D40CD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40CD0u)) return;
    // 80D40CD0: lis     r3, -27321
    ctx->gpr[3] = ((u32)(s32)(-27321) << 16);

label_80D40CD4:
    ctx->pc = 0x80D40CD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40CD4u)) return;
    // 80D40CD4: addi    r3, r3, 15600
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(15600);

label_80D40CD8:
    ctx->pc = 0x80D40CD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40CD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D40CD8: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D40CD8u)) return;
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
label_80D40CDC:
    ctx->pc = 0x80D40CDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40CDCu)) return;
    // 80D40CDC: fsubs   f30, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80D40CDCu)) return;
    ppc_fsubs(ctx, 30, 1, 0);

label_80D40CE0:
    ctx->pc = 0x80D40CE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40CE0u)) return;
    // 80D40CE0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D40CE4:
    ctx->pc = 0x80D40CE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40CE4u)) return;
    // 80D40CE4: bl      0x8045F220
    {
            ctx->lr = 0x80D40CE8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D40CE8:
    ctx->pc = 0x80D40CE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40CE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D40CE8: lwz     r3, 32(r3)
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
label_80D40CEC:
    ctx->pc = 0x80D40CECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40CECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D40CEC: lfs     f1, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D40CECu)) return;
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
label_80D40CF0:
    ctx->pc = 0x80D40CF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40CF0u)) return;
    // 80D40CF0: lis     r3, -27321
    ctx->gpr[3] = ((u32)(s32)(-27321) << 16);

label_80D40CF4:
    ctx->pc = 0x80D40CF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40CF4u)) return;
    // 80D40CF4: addi    r3, r3, 15592
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(15592);

label_80D40CF8:
    ctx->pc = 0x80D40CF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40CF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D40CF8: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D40CF8u)) return;
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
label_80D40CFC:
    ctx->pc = 0x80D40CFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40CFCu)) return;
    // 80D40CFC: fadds   f31, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80D40CFCu)) return;
    ppc_fadds(ctx, 31, 0, 1);

label_80D40D00:
    ctx->pc = 0x80D40D00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40D00u)) return;
    // 80D40D00: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D40D04:
    ctx->pc = 0x80D40D04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40D04u)) return;
    // 80D40D04: bl      0x8045F220
    {
            ctx->lr = 0x80D40D08u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D40D08:
    ctx->pc = 0x80D40D08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40D08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D40D08: lwz     r3, 32(r3)
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
label_80D40D0C:
    ctx->pc = 0x80D40D0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40D0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D40D0C: lfs     f1, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D40D0Cu)) return;
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
label_80D40D10:
    ctx->pc = 0x80D40D10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40D10u)) return;
    // 80D40D10: lis     r3, -27321
    ctx->gpr[3] = ((u32)(s32)(-27321) << 16);

label_80D40D14:
    ctx->pc = 0x80D40D14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40D14u)) return;
    // 80D40D14: addi    r3, r3, 15596
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(15596);

label_80D40D18:
    ctx->pc = 0x80D40D18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40D18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D40D18: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D40D18u)) return;
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
label_80D40D1C:
    ctx->pc = 0x80D40D1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40D1Cu)) return;
    // 80D40D1C: fadds   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80D40D1Cu)) return;
    ppc_fadds(ctx, 1, 0, 1);

label_80D40D20:
    ctx->pc = 0x80D40D20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40D20u)) return;
    // 80D40D20: fmr    f2, f31
    if (!ppc_fp_available_inline(ctx, 0x80D40D20u)) return;
    ctx->fpr[2] = ctx->fpr[31];

label_80D40D24:
    ctx->pc = 0x80D40D24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40D24u)) return;
    // 80D40D24: fmr    f3, f30
    if (!ppc_fp_available_inline(ctx, 0x80D40D24u)) return;
    ctx->fpr[3] = ctx->fpr[30];

label_80D40D28:
    ctx->pc = 0x80D40D28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40D28u)) return;
    // 80D40D28: bl      0x80D4172C
    {
            ctx->lr = 0x80D40D2Cu;
            goto label_80D4172C;
    }

label_80D40D2C:
    ctx->pc = 0x80D40D2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40D2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D40D2C: lis     r4, -27320
    ctx->gpr[4] = ((u32)(s32)(-27320) << 16);

label_80D40D30:
    ctx->pc = 0x80D40D30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40D30u)) return;
    // 80D40D30: addi    r4, r4, -3324
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-3324);

label_80D40D34:
    ctx->pc = 0x80D40D34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40D34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D40D34: stw     r3, 0(r4)
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
label_80D40D38:
    ctx->pc = 0x80D40D38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40D38u)) return;
    // 80D40D38: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D40D3C:
    ctx->pc = 0x80D40D3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40D3Cu)) return;
    // 80D40D3C: bl      0x8045F7C8
    {
            ctx->lr = 0x80D40D40u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D40D40:
    ctx->pc = 0x80D40D40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40D40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D40D40: lis     r3, -27320
    ctx->gpr[3] = ((u32)(s32)(-27320) << 16);

label_80D40D44:
    ctx->pc = 0x80D40D44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40D44u)) return;
    // 80D40D44: addi    r3, r3, -3324
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3324);

label_80D40D48:
    ctx->pc = 0x80D40D48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40D48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D40D48: lwz     r3, 0(r3)
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
label_80D40D4C:
    ctx->pc = 0x80D40D4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40D4Cu)) return;
    // 80D40D4C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D40D50:
    ctx->pc = 0x80D40D50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40D50u)) return;
    // 80D40D50: bl      0x8045EE90
    {
            ctx->lr = 0x80D40D54u;
            ctx->pc = 0x8045EE90u;
            return;
    }

label_80D40D54:
    ctx->pc = 0x80D40D54u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40D54u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D40D54: lis     r3, -27320
    ctx->gpr[3] = ((u32)(s32)(-27320) << 16);

label_80D40D58:
    ctx->pc = 0x80D40D58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40D58u)) return;
    // 80D40D58: addi    r3, r3, -3324
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3324);

label_80D40D5C:
    ctx->pc = 0x80D40D5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40D5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D40D5C: lwz     r3, 0(r3)
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
label_80D40D60:
    ctx->pc = 0x80D40D60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40D60u)) return;
    // 80D40D60: bl      0x8045EAE8
    {
            ctx->lr = 0x80D40D64u;
            ctx->pc = 0x8045EAE8u;
            return;
    }

label_80D40D64:
    ctx->pc = 0x80D40D64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40D64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D40D64: lis     r3, -27320
    ctx->gpr[3] = ((u32)(s32)(-27320) << 16);

label_80D40D68:
    ctx->pc = 0x80D40D68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40D68u)) return;
    // 80D40D68: addi    r3, r3, -3324
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3324);

label_80D40D6C:
    ctx->pc = 0x80D40D6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40D6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D40D6C: lwz     r3, 0(r3)
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
label_80D40D70:
    ctx->pc = 0x80D40D70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40D70u)) return;
    // 80D40D70: lis     r4, -27321
    ctx->gpr[4] = ((u32)(s32)(-27321) << 16);

label_80D40D74:
    ctx->pc = 0x80D40D74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40D74u)) return;
    // 80D40D74: addi    r4, r4, 28016
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(28016);

label_80D40D78:
    ctx->pc = 0x80D40D78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40D78u)) return;
    // 80D40D78: lis     r5, -27321
    ctx->gpr[5] = ((u32)(s32)(-27321) << 16);

label_80D40D7C:
    ctx->pc = 0x80D40D7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40D7Cu)) return;
    // 80D40D7C: addi    r5, r5, 15604
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(15604);

label_80D40D80:
    ctx->pc = 0x80D40D80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40D80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D40D80: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D40D80u)) return;
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
label_80D40D84:
    ctx->pc = 0x80D40D84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40D84u)) return;
    // 80D40D84: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_80D40D88:
    ctx->pc = 0x80D40D88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40D88u)) return;
    // 80D40D88: bl      0x8045EB14
    {
            ctx->lr = 0x80D40D8Cu;
            ctx->pc = 0x8045EB14u;
            return;
    }

label_80D40D8C:
    ctx->pc = 0x80D40D8Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40D8Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D40D8C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D40D90:
    ctx->pc = 0x80D40D90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40D90u)) return;
    // 80D40D90: bl      0x8045F7C8
    {
            ctx->lr = 0x80D40D94u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D40D94:
    ctx->pc = 0x80D40D94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40D94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D40D94: bl      0x8045C3AC
    {
            ctx->lr = 0x80D40D98u;
            ctx->pc = 0x8045C3ACu;
            return;
    }

label_80D40D98:
    ctx->pc = 0x80D40D98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40D98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D40D98: bl      0x8045C4A4
    {
            ctx->lr = 0x80D40D9Cu;
            ctx->pc = 0x8045C4A4u;
            return;
    }

label_80D40D9C:
    ctx->pc = 0x80D40D9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40D9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D40D9C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D40DA0:
    ctx->pc = 0x80D40DA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40DA0u)) return;
    // 80D40DA0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D40DA4:
    ctx->pc = 0x80D40DA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40DA4u)) return;
    // 80D40DA4: lis     r5, -27321
    ctx->gpr[5] = ((u32)(s32)(-27321) << 16);

label_80D40DA8:
    ctx->pc = 0x80D40DA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40DA8u)) return;
    // 80D40DA8: addi    r5, r5, 15624
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(15624);

label_80D40DAC:
    ctx->pc = 0x80D40DACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40DACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D40DAC: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D40DACu)) return;
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
label_80D40DB0:
    ctx->pc = 0x80D40DB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40DB0u)) return;
    // 80D40DB0: lis     r5, -27321
    ctx->gpr[5] = ((u32)(s32)(-27321) << 16);

label_80D40DB4:
    ctx->pc = 0x80D40DB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40DB4u)) return;
    // 80D40DB4: addi    r5, r5, 15628
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(15628);

label_80D40DB8:
    ctx->pc = 0x80D40DB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40DB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D40DB8: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D40DB8u)) return;
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
label_80D40DBC:
    ctx->pc = 0x80D40DBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40DBCu)) return;
    // 80D40DBC: lis     r5, -27321
    ctx->gpr[5] = ((u32)(s32)(-27321) << 16);

label_80D40DC0:
    ctx->pc = 0x80D40DC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40DC0u)) return;
    // 80D40DC0: addi    r5, r5, 15632
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(15632);

label_80D40DC4:
    ctx->pc = 0x80D40DC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40DC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D40DC4: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D40DC4u)) return;
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
label_80D40DC8:
    ctx->pc = 0x80D40DC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40DC8u)) return;
    // 80D40DC8: bl      0x8045C750
    {
            ctx->lr = 0x80D40DCCu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D40DCC:
    ctx->pc = 0x80D40DCCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40DCCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80D40DCC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D40DD0:
    ctx->pc = 0x80D40DD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40DD0u)) return;
    // 80D40DD0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D40DD4:
    ctx->pc = 0x80D40DD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40DD4u)) return;
    // 80D40DD4: li      r5, 721
    ctx->gpr[5] = (u32)(s32)(721);

label_80D40DD8:
    ctx->pc = 0x80D40DD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40DD8u)) return;
    // 80D40DD8: li      r6, 2471
    ctx->gpr[6] = (u32)(s32)(2471);

label_80D40DDC:
    ctx->pc = 0x80D40DDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40DDCu)) return;
    // 80D40DDC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80D40DE0:
    ctx->pc = 0x80D40DE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40DE0u)) return;
    // 80D40DE0: bl      0x8045C7B4
    {
            ctx->lr = 0x80D40DE4u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D40DE4:
    ctx->pc = 0x80D40DE4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40DE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D40DE4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D40DE8:
    ctx->pc = 0x80D40DE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40DE8u)) return;
    // 80D40DE8: li      r4, 160
    ctx->gpr[4] = (u32)(s32)(160);

label_80D40DEC:
    ctx->pc = 0x80D40DECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40DECu)) return;
    // 80D40DEC: lis     r5, -27321
    ctx->gpr[5] = ((u32)(s32)(-27321) << 16);

label_80D40DF0:
    ctx->pc = 0x80D40DF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40DF0u)) return;
    // 80D40DF0: addi    r5, r5, 15636
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(15636);

label_80D40DF4:
    ctx->pc = 0x80D40DF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40DF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D40DF4: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D40DF4u)) return;
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
label_80D40DF8:
    ctx->pc = 0x80D40DF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40DF8u)) return;
    // 80D40DF8: lis     r5, -27321
    ctx->gpr[5] = ((u32)(s32)(-27321) << 16);

label_80D40DFC:
    ctx->pc = 0x80D40DFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40DFCu)) return;
    // 80D40DFC: addi    r5, r5, 15640
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(15640);

label_80D40E00:
    ctx->pc = 0x80D40E00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40E00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D40E00: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D40E00u)) return;
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
label_80D40E04:
    ctx->pc = 0x80D40E04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40E04u)) return;
    // 80D40E04: lis     r5, -27321
    ctx->gpr[5] = ((u32)(s32)(-27321) << 16);

label_80D40E08:
    ctx->pc = 0x80D40E08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40E08u)) return;
    // 80D40E08: addi    r5, r5, 15644
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(15644);

label_80D40E0C:
    ctx->pc = 0x80D40E0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40E0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D40E0C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D40E0Cu)) return;
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
label_80D40E10:
    ctx->pc = 0x80D40E10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40E10u)) return;
    // 80D40E10: bl      0x8045C750
    {
            ctx->lr = 0x80D40E14u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D40E14:
    ctx->pc = 0x80D40E14u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40E14u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D40E14: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D40E18:
    ctx->pc = 0x80D40E18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40E18u)) return;
    // 80D40E18: li      r4, 160
    ctx->gpr[4] = (u32)(s32)(160);

label_80D40E1C:
    ctx->pc = 0x80D40E1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40E1Cu)) return;
    // 80D40E1C: li      r5, 2769
    ctx->gpr[5] = (u32)(s32)(2769);

label_80D40E20:
    ctx->pc = 0x80D40E20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40E20u)) return;
    // 80D40E20: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80D40E24:
    ctx->pc = 0x80D40E24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40E24u)) return;
    // 80D40E24: addi    r6, r6, -3304
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-3304);

label_80D40E28:
    ctx->pc = 0x80D40E28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40E28u)) return;
    // 80D40E28: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80D40E2C:
    ctx->pc = 0x80D40E2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40E2Cu)) return;
    // 80D40E2C: bl      0x8045C7B4
    {
            ctx->lr = 0x80D40E30u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D40E30:
    ctx->pc = 0x80D40E30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40E30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D40E30: li      r3, 50
    ctx->gpr[3] = (u32)(s32)(50);

label_80D40E34:
    ctx->pc = 0x80D40E34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40E34u)) return;
    // 80D40E34: bl      0x8045F7C8
    {
            ctx->lr = 0x80D40E38u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D40E38:
    ctx->pc = 0x80D40E38u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40E38u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D40E38: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D40E3C:
    ctx->pc = 0x80D40E3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40E3Cu)) return;
    // 80D40E3C: li      r4, -120
    ctx->gpr[4] = (u32)(s32)(-120);

label_80D40E40:
    ctx->pc = 0x80D40E40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40E40u)) return;
    // 80D40E40: li      r5, 120
    ctx->gpr[5] = (u32)(s32)(120);

label_80D40E44:
    ctx->pc = 0x80D40E44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40E44u)) return;
    // 80D40E44: bl      0x80D41478
    {
            ctx->lr = 0x80D40E48u;
            goto label_80D41478;
    }

label_80D40E48:
    ctx->pc = 0x80D40E48u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40E48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D40E48: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D40E4C:
    ctx->pc = 0x80D40E4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40E4Cu)) return;
    // 80D40E4C: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80D40E50:
    ctx->pc = 0x80D40E50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40E50u)) return;
    // 80D40E50: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80D40E54:
    ctx->pc = 0x80D40E54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40E54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D40E54: lwz     r0, 0(r4)
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
label_80D40E58:
    ctx->pc = 0x80D40E58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40E58u)) return;
    // 80D40E58: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D40E5C:
    ctx->pc = 0x80D40E5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40E5Cu)) return;
    // 80D40E5C: lis     r4, -27321
    ctx->gpr[4] = ((u32)(s32)(-27321) << 16);

label_80D40E60:
    ctx->pc = 0x80D40E60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40E60u)) return;
    // 80D40E60: addi    r4, r4, 29632
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(29632);

label_80D40E64:
    ctx->pc = 0x80D40E64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40E64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D40E64: lwzx    r4, r4, r0
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
label_80D40E68:
    ctx->pc = 0x80D40E68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40E68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D40E68: lwz     r4, 20(r4)
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
label_80D40E6C:
    ctx->pc = 0x80D40E6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40E6Cu)) return;
    // 80D40E6C: bl      0x8045F608
    {
            ctx->lr = 0x80D40E70u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80D40E70:
    ctx->pc = 0x80D40E70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40E70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D40E70: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D40E74:
    ctx->pc = 0x80D40E74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40E74u)) return;
    // 80D40E74: bl      0x8045F220
    {
            ctx->lr = 0x80D40E78u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D40E78:
    ctx->pc = 0x80D40E78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40E78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D40E78: lis     r4, -27320
    ctx->gpr[4] = ((u32)(s32)(-27320) << 16);

label_80D40E7C:
    ctx->pc = 0x80D40E7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40E7Cu)) return;
    // 80D40E7C: addi    r4, r4, -3348
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-3348);

label_80D40E80:
    ctx->pc = 0x80D40E80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40E80u)) return;
    // 80D40E80: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80D40E84:
    ctx->pc = 0x80D40E84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40E84u)) return;
    // 80D40E84: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80D40E88:
    ctx->pc = 0x80D40E88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40E88u)) return;
    // 80D40E88: lis     r6, -27321
    ctx->gpr[6] = ((u32)(s32)(-27321) << 16);

label_80D40E8C:
    ctx->pc = 0x80D40E8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40E8Cu)) return;
    // 80D40E8C: addi    r6, r6, 15648
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(15648);

label_80D40E90:
    ctx->pc = 0x80D40E90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40E90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D40E90: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D40E90u)) return;
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
label_80D40E94:
    ctx->pc = 0x80D40E94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40E94u)) return;
    // 80D40E94: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80D40E98:
    ctx->pc = 0x80D40E98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40E98u)) return;
    // 80D40E98: li      r7, 16
    ctx->gpr[7] = (u32)(s32)(16);

label_80D40E9C:
    ctx->pc = 0x80D40E9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40E9Cu)) return;
    // 80D40E9C: bl      0x8045EBE4
    {
            ctx->lr = 0x80D40EA0u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80D40EA0:
    ctx->pc = 0x80D40EA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40EA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D40EA0: bl      0x8045BFF4
    {
            ctx->lr = 0x80D40EA4u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80D40EA4:
    ctx->pc = 0x80D40EA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40EA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D40EA4: bl      0x8045F32C
    {
            ctx->lr = 0x80D40EA8u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80D40EA8:
    ctx->pc = 0x80D40EA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40EA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D40EA8: li      r3, 20
    ctx->gpr[3] = (u32)(s32)(20);

label_80D40EAC:
    ctx->pc = 0x80D40EACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40EACu)) return;
    // 80D40EAC: bl      0x8045F7C8
    {
            ctx->lr = 0x80D40EB0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D40EB0:
    ctx->pc = 0x80D40EB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40EB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D40EB0: b       0x80D40FA4
    {
            goto label_80D40FA4;
    }

label_80D40EB4:
    ctx->pc = 0x80D40EB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40EB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D40EB4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D40EB8:
    ctx->pc = 0x80D40EB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40EB8u)) return;
    // 80D40EB8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D40EBC:
    ctx->pc = 0x80D40EBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40EBCu)) return;
    // 80D40EBC: lis     r5, -27321
    ctx->gpr[5] = ((u32)(s32)(-27321) << 16);

label_80D40EC0:
    ctx->pc = 0x80D40EC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40EC0u)) return;
    // 80D40EC0: addi    r5, r5, 15636
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(15636);

label_80D40EC4:
    ctx->pc = 0x80D40EC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40EC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D40EC4: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D40EC4u)) return;
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
label_80D40EC8:
    ctx->pc = 0x80D40EC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40EC8u)) return;
    // 80D40EC8: lis     r5, -27321
    ctx->gpr[5] = ((u32)(s32)(-27321) << 16);

label_80D40ECC:
    ctx->pc = 0x80D40ECCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40ECCu)) return;
    // 80D40ECC: addi    r5, r5, 15640
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(15640);

label_80D40ED0:
    ctx->pc = 0x80D40ED0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40ED0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D40ED0: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D40ED0u)) return;
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
label_80D40ED4:
    ctx->pc = 0x80D40ED4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40ED4u)) return;
    // 80D40ED4: lis     r5, -27321
    ctx->gpr[5] = ((u32)(s32)(-27321) << 16);

label_80D40ED8:
    ctx->pc = 0x80D40ED8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40ED8u)) return;
    // 80D40ED8: addi    r5, r5, 15644
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(15644);

label_80D40EDC:
    ctx->pc = 0x80D40EDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40EDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D40EDC: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D40EDCu)) return;
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
label_80D40EE0:
    ctx->pc = 0x80D40EE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40EE0u)) return;
    // 80D40EE0: bl      0x8045C750
    {
            ctx->lr = 0x80D40EE4u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D40EE4:
    ctx->pc = 0x80D40EE4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40EE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D40EE4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D40EE8:
    ctx->pc = 0x80D40EE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40EE8u)) return;
    // 80D40EE8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D40EEC:
    ctx->pc = 0x80D40EECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40EECu)) return;
    // 80D40EEC: li      r5, 2769
    ctx->gpr[5] = (u32)(s32)(2769);

label_80D40EF0:
    ctx->pc = 0x80D40EF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40EF0u)) return;
    // 80D40EF0: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80D40EF4:
    ctx->pc = 0x80D40EF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40EF4u)) return;
    // 80D40EF4: addi    r6, r6, -3304
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-3304);

label_80D40EF8:
    ctx->pc = 0x80D40EF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40EF8u)) return;
    // 80D40EF8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80D40EFC:
    ctx->pc = 0x80D40EFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40EFCu)) return;
    // 80D40EFC: bl      0x8045C7B4
    {
            ctx->lr = 0x80D40F00u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D40F00:
    ctx->pc = 0x80D40F00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40F00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D40F00: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D40F04:
    ctx->pc = 0x80D40F04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40F04u)) return;
    // 80D40F04: bl      0x8045F7C8
    {
            ctx->lr = 0x80D40F08u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D40F08:
    ctx->pc = 0x80D40F08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40F08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D40F08: bl      0x80D412F0
    {
            ctx->lr = 0x80D40F0Cu;
            goto label_80D412F0;
    }

label_80D40F0C:
    ctx->pc = 0x80D40F0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40F0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D40F0C: lis     r3, -27320
    ctx->gpr[3] = ((u32)(s32)(-27320) << 16);

label_80D40F10:
    ctx->pc = 0x80D40F10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40F10u)) return;
    // 80D40F10: addi    r3, r3, -3328
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3328);

label_80D40F14:
    ctx->pc = 0x80D40F14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40F14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D40F14: lwz     r3, 0(r3)
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
label_80D40F18:
    ctx->pc = 0x80D40F18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40F18u)) return;
    // 80D40F18: bl      0x8045EAE8
    {
            ctx->lr = 0x80D40F1Cu;
            ctx->pc = 0x8045EAE8u;
            return;
    }

label_80D40F1C:
    ctx->pc = 0x80D40F1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40F1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D40F1C: lis     r3, -27320
    ctx->gpr[3] = ((u32)(s32)(-27320) << 16);

label_80D40F20:
    ctx->pc = 0x80D40F20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40F20u)) return;
    // 80D40F20: addi    r3, r3, -3324
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3324);

label_80D40F24:
    ctx->pc = 0x80D40F24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40F24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D40F24: lwz     r3, 0(r3)
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
label_80D40F28:
    ctx->pc = 0x80D40F28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40F28u)) return;
    // 80D40F28: bl      0x8045EAE8
    {
            ctx->lr = 0x80D40F2Cu;
            ctx->pc = 0x8045EAE8u;
            return;
    }

label_80D40F2C:
    ctx->pc = 0x80D40F2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40F2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D40F2C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D40F30:
    ctx->pc = 0x80D40F30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40F30u)) return;
    // 80D40F30: bl      0x8045EC10
    {
            ctx->lr = 0x80D40F34u;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80D40F34:
    ctx->pc = 0x80D40F34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40F34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D40F34: bl      0x8045C3AC
    {
            ctx->lr = 0x80D40F38u;
            ctx->pc = 0x8045C3ACu;
            return;
    }

label_80D40F38:
    ctx->pc = 0x80D40F38u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40F38u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D40F38: bl      0x8045C4A4
    {
            ctx->lr = 0x80D40F3Cu;
            ctx->pc = 0x8045C4A4u;
            return;
    }

label_80D40F3C:
    ctx->pc = 0x80D40F3Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40F3Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D40F3C: bl      0x8045BF80
    {
            ctx->lr = 0x80D40F40u;
            ctx->pc = 0x8045BF80u;
            return;
    }

label_80D40F40:
    ctx->pc = 0x80D40F40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40F40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D40F40: bl      0x8045F32C
    {
            ctx->lr = 0x80D40F44u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80D40F44:
    ctx->pc = 0x80D40F44u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40F44u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D40F44: lis     r3, -27320
    ctx->gpr[3] = ((u32)(s32)(-27320) << 16);

label_80D40F48:
    ctx->pc = 0x80D40F48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40F48u)) return;
    // 80D40F48: addi    r3, r3, -3328
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3328);

label_80D40F4C:
    ctx->pc = 0x80D40F4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40F4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D40F4C: lwz     r3, 0(r3)
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
label_80D40F50:
    ctx->pc = 0x80D40F50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40F50u)) return;
    // 80D40F50: cmplwi  r3, 0x0000
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

label_80D40F54:
    ctx->pc = 0x80D40F54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40F54u)) return;
    // 80D40F54: bc    12, 2, 0x80D40F6C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D40F6C;
        }
    }

label_80D40F58:
    ctx->pc = 0x80D40F58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40F58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D40F58: bl      0x8050F9E0
    {
            ctx->lr = 0x80D40F5Cu;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80D40F5C:
    ctx->pc = 0x80D40F5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40F5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D40F5C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D40F60:
    ctx->pc = 0x80D40F60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40F60u)) return;
    // 80D40F60: lis     r3, -27320
    ctx->gpr[3] = ((u32)(s32)(-27320) << 16);

label_80D40F64:
    ctx->pc = 0x80D40F64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40F64u)) return;
    // 80D40F64: addi    r3, r3, -3328
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3328);

label_80D40F68:
    ctx->pc = 0x80D40F68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40F68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D40F68: stw     r0, 0(r3)
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
label_80D40F6C:
    ctx->pc = 0x80D40F6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40F6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D40F6C: lis     r3, -27320
    ctx->gpr[3] = ((u32)(s32)(-27320) << 16);

label_80D40F70:
    ctx->pc = 0x80D40F70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40F70u)) return;
    // 80D40F70: addi    r3, r3, -3324
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3324);

label_80D40F74:
    ctx->pc = 0x80D40F74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40F74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D40F74: lwz     r3, 0(r3)
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
label_80D40F78:
    ctx->pc = 0x80D40F78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40F78u)) return;
    // 80D40F78: cmplwi  r3, 0x0000
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

label_80D40F7C:
    ctx->pc = 0x80D40F7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40F7Cu)) return;
    // 80D40F7C: bc    12, 2, 0x80D40F94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D40F94;
        }
    }

label_80D40F80:
    ctx->pc = 0x80D40F80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40F80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D40F80: bl      0x8050F9E0
    {
            ctx->lr = 0x80D40F84u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80D40F84:
    ctx->pc = 0x80D40F84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40F84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D40F84: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D40F88:
    ctx->pc = 0x80D40F88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40F88u)) return;
    // 80D40F88: lis     r3, -27320
    ctx->gpr[3] = ((u32)(s32)(-27320) << 16);

label_80D40F8C:
    ctx->pc = 0x80D40F8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40F8Cu)) return;
    // 80D40F8C: addi    r3, r3, -3324
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3324);

label_80D40F90:
    ctx->pc = 0x80D40F90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40F90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D40F90: stw     r0, 0(r3)
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
label_80D40F94:
    ctx->pc = 0x80D40F94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40F94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D40F94: bl      0x8045DE34
    {
            ctx->lr = 0x80D40F98u;
            ctx->pc = 0x8045DE34u;
            return;
    }

label_80D40F98:
    ctx->pc = 0x80D40F98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40F98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D40F98: bl      0x80460A80
    {
            ctx->lr = 0x80D40F9Cu;
            ctx->pc = 0x80460A80u;
            return;
    }

label_80D40F9C:
    ctx->pc = 0x80D40F9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40F9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D40F9C: bl      0x8045C3AC
    {
            ctx->lr = 0x80D40FA0u;
            ctx->pc = 0x8045C3ACu;
            return;
    }

label_80D40FA0:
    ctx->pc = 0x80D40FA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40FA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D40FA0: bl      0x8045C4A4
    {
            ctx->lr = 0x80D40FA4u;
            ctx->pc = 0x8045C4A4u;
            return;
    }

label_80D40FA4:
    ctx->pc = 0x80D40FA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40FA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D40FA4: psq_l   f31, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D40FA4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80D40FA4u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D40FA8:
    ctx->pc = 0x80D40FA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40FA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D40FA8: lfd     f31, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D40FA8u)) return;
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
label_80D40FAC:
    ctx->pc = 0x80D40FACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40FACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D40FAC: psq_l   f30, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D40FACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x80D40FACu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D40FB0:
    ctx->pc = 0x80D40FB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40FB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D40FB0: lfd     f30, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D40FB0u)) return;
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
label_80D40FB4:
    ctx->pc = 0x80D40FB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40FB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D40FB4: lwz     r0, 52(r1)
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
label_80D40FB8:
    ctx->pc = 0x80D40FB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D40FB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D40FB8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D40FBC:
    ctx->pc = 0x80D40FBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40FBCu)) return;
    // 80D40FBC: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_80D40FC0:
    ctx->pc = 0x80D40FC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40FC0u)) return;
    // 80D40FC0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D40860;
        }
    }

label_80D40FC4:
    ctx->pc = 0x80D40FC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40FC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D40FC4: stwu     r1, -16(r1)
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
label_80D40FC8:
    ctx->pc = 0x80D40FC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40FC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D40FC8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D40FCC:
    ctx->pc = 0x80D40FCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40FCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D40FCC: stw     r0, 20(r1)
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
label_80D40FD0:
    ctx->pc = 0x80D40FD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40FD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D40FD0: lwz     r3, 32(r3)
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
label_80D40FD4:
    ctx->pc = 0x80D40FD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40FD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D40FD4: lwz     r3, 16(r3)
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
label_80D40FD8:
    ctx->pc = 0x80D40FD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40FD8u)) return;
    // 80D40FD8: bl      0x80509CF0
    {
            ctx->lr = 0x80D40FDCu;
            ctx->pc = 0x80509CF0u;
            return;
    }

label_80D40FDC:
    ctx->pc = 0x80D40FDCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40FDCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D40FDC: lwz     r0, 20(r1)
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
label_80D40FE0:
    ctx->pc = 0x80D40FE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D40FE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D40FE0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D40FE4:
    ctx->pc = 0x80D40FE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40FE4u)) return;
    // 80D40FE4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D40FE8:
    ctx->pc = 0x80D40FE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40FE8u)) return;
    // 80D40FE8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D40860;
        }
    }

label_80D40FEC:
    ctx->pc = 0x80D40FECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D40FECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D40FEC: stwu     r1, -32(r1)
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
label_80D40FF0:
    ctx->pc = 0x80D40FF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40FF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D40FF0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D40FF4:
    ctx->pc = 0x80D40FF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40FF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D40FF4: stw     r0, 36(r1)
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
label_80D40FF8:
    ctx->pc = 0x80D40FF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40FF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D40FF8: stw     r31, 28(r1)
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
label_80D40FFC:
    ctx->pc = 0x80D40FFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D40FFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D40FFC: stw     r30, 24(r1)
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
label_80D41000:
    ctx->pc = 0x80D41000u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41000u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D41000: stw     r29, 20(r1)
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
label_80D41004:
    ctx->pc = 0x80D41004u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41004u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D41004: lwz     r31, 32(r3)
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
label_80D41008:
    ctx->pc = 0x80D41008u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41008u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D41008: lwz     r30, 16(r31)
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
label_80D4100C:
    ctx->pc = 0x80D4100Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4100Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D4100C: lwz     r5, 28(r31)
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
label_80D41010:
    ctx->pc = 0x80D41010u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41010u)) return;
    // 80D41010: cmpwi   r5, 0
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

label_80D41014:
    ctx->pc = 0x80D41014u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41014u)) return;
    // 80D41014: bc    4, 1, 0x80D4104C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D4104C;
        }
    }

label_80D41018:
    ctx->pc = 0x80D41018u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41018u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80D41018: lwz     r4, 24(r31)
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
label_80D4101C:
    ctx->pc = 0x80D4101Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4101Cu)) return;
    // 80D4101C: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80D41020:
    ctx->pc = 0x80D41020u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41020u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80D41020: lwz     r0, 20(r31)
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
label_80D41024:
    ctx->pc = 0x80D41024u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80D41024u)) return;
    // 80D41024: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80D41028:
    ctx->pc = 0x80D41028u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41028u)) return;
    // 80D41028: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80D4102C:
    ctx->pc = 0x80D4102Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80D4102Cu)) return;
    // 80D4102C: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80D41030:
    ctx->pc = 0x80D41030u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41030u)) return;
    // 80D41030: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80D41034:
    ctx->pc = 0x80D41034u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41034u)) return;
    // 80D41034: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80D41038:
    ctx->pc = 0x80D41038u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41038u)) return;
    // 80D41038: bl      0x80509C74
    {
            ctx->lr = 0x80D4103Cu;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80D4103C:
    ctx->pc = 0x80D4103Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D4103Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D4103C: stw     r29, 20(r31)
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
label_80D41040:
    ctx->pc = 0x80D41040u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41040u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D41040: lwz     r3, 28(r31)
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
label_80D41044:
    ctx->pc = 0x80D41044u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41044u)) return;
    // 80D41044: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80D41048:
    ctx->pc = 0x80D41048u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41048u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D41048: stw     r0, 28(r31)
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
label_80D4104C:
    ctx->pc = 0x80D4104Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D4104Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D4104C: lwz     r5, 40(r31)
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
label_80D41050:
    ctx->pc = 0x80D41050u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41050u)) return;
    // 80D41050: cmpwi   r5, 0
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

label_80D41054:
    ctx->pc = 0x80D41054u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41054u)) return;
    // 80D41054: bc    4, 1, 0x80D4108C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D4108C;
        }
    }

label_80D41058:
    ctx->pc = 0x80D41058u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41058u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80D41058: lwz     r4, 36(r31)
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
label_80D4105C:
    ctx->pc = 0x80D4105Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4105Cu)) return;
    // 80D4105C: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80D41060:
    ctx->pc = 0x80D41060u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41060u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80D41060: lwz     r0, 32(r31)
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
label_80D41064:
    ctx->pc = 0x80D41064u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80D41064u)) return;
    // 80D41064: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80D41068:
    ctx->pc = 0x80D41068u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41068u)) return;
    // 80D41068: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80D4106C:
    ctx->pc = 0x80D4106Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80D4106Cu)) return;
    // 80D4106C: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80D41070:
    ctx->pc = 0x80D41070u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41070u)) return;
    // 80D41070: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80D41074:
    ctx->pc = 0x80D41074u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41074u)) return;
    // 80D41074: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80D41078:
    ctx->pc = 0x80D41078u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41078u)) return;
    // 80D41078: bl      0x80509BF8
    {
            ctx->lr = 0x80D4107Cu;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80D4107C:
    ctx->pc = 0x80D4107Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D4107Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D4107C: stw     r29, 32(r31)
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
label_80D41080:
    ctx->pc = 0x80D41080u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41080u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D41080: lwz     r3, 40(r31)
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
label_80D41084:
    ctx->pc = 0x80D41084u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41084u)) return;
    // 80D41084: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80D41088:
    ctx->pc = 0x80D41088u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41088u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D41088: stw     r0, 40(r31)
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
label_80D4108C:
    ctx->pc = 0x80D4108Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D4108Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D4108C: lwz     r5, 52(r31)
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
label_80D41090:
    ctx->pc = 0x80D41090u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41090u)) return;
    // 80D41090: cmpwi   r5, 0
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

label_80D41094:
    ctx->pc = 0x80D41094u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41094u)) return;
    // 80D41094: bc    4, 1, 0x80D410CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D410CC;
        }
    }

label_80D41098:
    ctx->pc = 0x80D41098u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41098u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80D41098: lwz     r4, 48(r31)
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
label_80D4109C:
    ctx->pc = 0x80D4109Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4109Cu)) return;
    // 80D4109C: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80D410A0:
    ctx->pc = 0x80D410A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D410A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80D410A0: lwz     r0, 44(r31)
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
label_80D410A4:
    ctx->pc = 0x80D410A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80D410A4u)) return;
    // 80D410A4: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80D410A8:
    ctx->pc = 0x80D410A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D410A8u)) return;
    // 80D410A8: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80D410AC:
    ctx->pc = 0x80D410ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80D410ACu)) return;
    // 80D410AC: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80D410B0:
    ctx->pc = 0x80D410B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D410B0u)) return;
    // 80D410B0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80D410B4:
    ctx->pc = 0x80D410B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D410B4u)) return;
    // 80D410B4: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80D410B8:
    ctx->pc = 0x80D410B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D410B8u)) return;
    // 80D410B8: bl      0x80509B94
    {
            ctx->lr = 0x80D410BCu;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80D410BC:
    ctx->pc = 0x80D410BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D410BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D410BC: stw     r29, 44(r31)
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
label_80D410C0:
    ctx->pc = 0x80D410C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D410C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D410C0: lwz     r3, 52(r31)
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
label_80D410C4:
    ctx->pc = 0x80D410C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D410C4u)) return;
    // 80D410C4: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80D410C8:
    ctx->pc = 0x80D410C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D410C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D410C8: stw     r0, 52(r31)
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
label_80D410CC:
    ctx->pc = 0x80D410CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D410CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D410CC: lwz     r31, 28(r1)
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
label_80D410D0:
    ctx->pc = 0x80D410D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D410D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D410D0: lwz     r30, 24(r1)
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
label_80D410D4:
    ctx->pc = 0x80D410D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D410D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D410D4: lwz     r29, 20(r1)
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
label_80D410D8:
    ctx->pc = 0x80D410D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D410D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D410D8: lwz     r0, 36(r1)
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
label_80D410DC:
    ctx->pc = 0x80D410DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D410DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D410DC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D410E0:
    ctx->pc = 0x80D410E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D410E0u)) return;
    // 80D410E0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80D410E4:
    ctx->pc = 0x80D410E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D410E4u)) return;
    // 80D410E4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D40860;
        }
    }

label_80D410E8:
    ctx->pc = 0x80D410E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D410E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D410E8: stwu     r1, -32(r1)
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
label_80D410EC:
    ctx->pc = 0x80D410ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D410ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D410EC: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D410F0:
    ctx->pc = 0x80D410F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D410F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D410F0: stw     r0, 36(r1)
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
label_80D410F4:
    ctx->pc = 0x80D410F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D410F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D410F4: stw     r31, 28(r1)
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
label_80D410F8:
    ctx->pc = 0x80D410F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D410F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D410F8: stw     r30, 24(r1)
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
label_80D410FC:
    ctx->pc = 0x80D410FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D410FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D410FC: stw     r29, 20(r1)
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
label_80D41100:
    ctx->pc = 0x80D41100u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41100u)) return;
    // 80D41100: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D41104:
    ctx->pc = 0x80D41104u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41104u)) return;
    // 80D41104: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80D41108:
    ctx->pc = 0x80D41108u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41108u)) return;
    // 80D41108: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D4110C:
    ctx->pc = 0x80D4110Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4110Cu)) return;
    // 80D4110C: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80D41110:
    ctx->pc = 0x80D41110u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41110u)) return;
    // 80D41110: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80D41114:
    ctx->pc = 0x80D41114u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41114u)) return;
    // 80D41114: bl      0x8050FD60
    {
            ctx->lr = 0x80D41118u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80D41118:
    ctx->pc = 0x80D41118u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41118u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D41118: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D4111C:
    ctx->pc = 0x80D4111Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4111Cu)) return;
    // 80D4111C: cmplwi  r31, 0x0000
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

label_80D41120:
    ctx->pc = 0x80D41120u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41120u)) return;
    // 80D41120: bc    12, 2, 0x80D41184
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D41184;
        }
    }

label_80D41124:
    ctx->pc = 0x80D41124u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41124u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80D41124: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80D41128:
    ctx->pc = 0x80D41128u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41128u)) return;
    // 80D41128: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80D4112C:
    ctx->pc = 0x80D4112Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4112Cu)) return;
    // 80D4112C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80D41130:
    ctx->pc = 0x80D41130u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41130u)) return;
    // 80D41130: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80D41134:
    ctx->pc = 0x80D41134u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41134u)) return;
    // 80D41134: or   r7, r30, r30
    {
        ctx->gpr[7] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80D41138:
    ctx->pc = 0x80D41138u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41138u)) return;
    // 80D41138: bl      0x8050A0D4
    {
            ctx->lr = 0x80D4113Cu;
            ctx->pc = 0x8050A0D4u;
            return;
    }

label_80D4113C:
    ctx->pc = 0x80D4113Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 18u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D4113Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 18u : 1u;
    // 80D4113C: lis     r3, -32556
    ctx->gpr[3] = ((u32)(s32)(-32556) << 16);

label_80D41140:
    ctx->pc = 0x80D41140u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41140u)) return;
    // 80D41140: addi    r0, r3, 4076
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(4076);

label_80D41144:
    ctx->pc = 0x80D41144u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41144u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80D41144: stw     r0, 16(r31)
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
label_80D41148:
    ctx->pc = 0x80D41148u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41148u)) return;
    // 80D41148: lis     r3, -32556
    ctx->gpr[3] = ((u32)(s32)(-32556) << 16);

label_80D4114C:
    ctx->pc = 0x80D4114Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4114Cu)) return;
    // 80D4114C: addi    r0, r3, 4036
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(4036);

label_80D41150:
    ctx->pc = 0x80D41150u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41150u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80D41150: stw     r0, 24(r31)
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
label_80D41154:
    ctx->pc = 0x80D41154u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41154u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D41154: lwz     r3, 32(r31)
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
label_80D41158:
    ctx->pc = 0x80D41158u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41158u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D41158: stw     r31, 16(r3)
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
label_80D4115C:
    ctx->pc = 0x80D4115Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4115Cu)) return;
    // 80D4115C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D41160:
    ctx->pc = 0x80D41160u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41160u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D41160: stw     r0, 20(r3)
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
label_80D41164:
    ctx->pc = 0x80D41164u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41164u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D41164: stw     r0, 24(r3)
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
label_80D41168:
    ctx->pc = 0x80D41168u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41168u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D41168: stw     r0, 28(r3)
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
label_80D4116C:
    ctx->pc = 0x80D4116Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4116Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D4116C: stw     r0, 32(r3)
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
label_80D41170:
    ctx->pc = 0x80D41170u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41170u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D41170: stw     r0, 36(r3)
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
label_80D41174:
    ctx->pc = 0x80D41174u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41174u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D41174: stw     r0, 40(r3)
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
label_80D41178:
    ctx->pc = 0x80D41178u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41178u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D41178: stw     r0, 44(r3)
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
label_80D4117C:
    ctx->pc = 0x80D4117Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4117Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D4117C: stw     r0, 48(r3)
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
label_80D41180:
    ctx->pc = 0x80D41180u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41180u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D41180: stw     r0, 52(r3)
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
label_80D41184:
    ctx->pc = 0x80D41184u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41184u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80D41184: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80D41188:
    ctx->pc = 0x80D41188u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41188u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D41188: lwz     r31, 28(r1)
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
label_80D4118C:
    ctx->pc = 0x80D4118Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4118Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D4118C: lwz     r30, 24(r1)
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
label_80D41190:
    ctx->pc = 0x80D41190u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41190u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D41190: lwz     r29, 20(r1)
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
label_80D41194:
    ctx->pc = 0x80D41194u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41194u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D41194: lwz     r0, 36(r1)
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
label_80D41198:
    ctx->pc = 0x80D41198u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D41198u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D41198: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D4119C:
    ctx->pc = 0x80D4119Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4119Cu)) return;
    // 80D4119C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80D411A0:
    ctx->pc = 0x80D411A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D411A0u)) return;
    // 80D411A0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D40860;
        }
    }

label_80D411A4:
    ctx->pc = 0x80D411A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D411A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D411A4: stwu     r1, -16(r1)
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
label_80D411A8:
    ctx->pc = 0x80D411A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D411A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D411A8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D411AC:
    ctx->pc = 0x80D411ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D411ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D411AC: stw     r0, 20(r1)
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
label_80D411B0:
    ctx->pc = 0x80D411B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D411B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D411B0: stw     r31, 12(r1)
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
label_80D411B4:
    ctx->pc = 0x80D411B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D411B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D411B4: stw     r30, 8(r1)
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
label_80D411B8:
    ctx->pc = 0x80D411B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D411B8u)) return;
    // 80D411B8: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80D411BC:
    ctx->pc = 0x80D411BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D411BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D411BC: lwz     r31, 32(r3)
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
label_80D411C0:
    ctx->pc = 0x80D411C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D411C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D411C0: stw     r30, 24(r31)
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
label_80D411C4:
    ctx->pc = 0x80D411C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D411C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D411C4: stw     r5, 28(r31)
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
label_80D411C8:
    ctx->pc = 0x80D411C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D411C8u)) return;
    // 80D411C8: cmpwi   r5, 0
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

label_80D411CC:
    ctx->pc = 0x80D411CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D411CCu)) return;
    // 80D411CC: bc    12, 1, 0x80D411DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D411DC;
        }
    }

label_80D411D0:
    ctx->pc = 0x80D411D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D411D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D411D0: lwz     r3, 16(r31)
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
label_80D411D4:
    ctx->pc = 0x80D411D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D411D4u)) return;
    // 80D411D4: bl      0x80509C74
    {
            ctx->lr = 0x80D411D8u;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80D411D8:
    ctx->pc = 0x80D411D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D411D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D411D8: stw     r30, 20(r31)
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
label_80D411DC:
    ctx->pc = 0x80D411DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D411DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D411DC: lwz     r31, 12(r1)
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
label_80D411E0:
    ctx->pc = 0x80D411E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D411E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D411E0: lwz     r30, 8(r1)
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
label_80D411E4:
    ctx->pc = 0x80D411E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D411E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D411E4: lwz     r0, 20(r1)
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
label_80D411E8:
    ctx->pc = 0x80D411E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D411E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D411E8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D411EC:
    ctx->pc = 0x80D411ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D411ECu)) return;
    // 80D411EC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D411F0:
    ctx->pc = 0x80D411F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D411F0u)) return;
    // 80D411F0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D40860;
        }
    }

label_80D411F4:
    ctx->pc = 0x80D411F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D411F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D411F4: stwu     r1, -16(r1)
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
label_80D411F8:
    ctx->pc = 0x80D411F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D411F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D411F8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D411FC:
    ctx->pc = 0x80D411FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D411FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D411FC: stw     r0, 20(r1)
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
label_80D41200:
    ctx->pc = 0x80D41200u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41200u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D41200: stw     r31, 12(r1)
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
label_80D41204:
    ctx->pc = 0x80D41204u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41204u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D41204: stw     r30, 8(r1)
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
label_80D41208:
    ctx->pc = 0x80D41208u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41208u)) return;
    // 80D41208: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80D4120C:
    ctx->pc = 0x80D4120Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4120Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D4120C: lwz     r31, 32(r3)
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
label_80D41210:
    ctx->pc = 0x80D41210u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41210u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D41210: stw     r30, 36(r31)
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
label_80D41214:
    ctx->pc = 0x80D41214u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41214u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D41214: stw     r5, 40(r31)
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
label_80D41218:
    ctx->pc = 0x80D41218u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41218u)) return;
    // 80D41218: cmpwi   r5, 0
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

label_80D4121C:
    ctx->pc = 0x80D4121Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4121Cu)) return;
    // 80D4121C: bc    12, 1, 0x80D4122C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D4122C;
        }
    }

label_80D41220:
    ctx->pc = 0x80D41220u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41220u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D41220: lwz     r3, 16(r31)
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
label_80D41224:
    ctx->pc = 0x80D41224u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41224u)) return;
    // 80D41224: bl      0x80509BF8
    {
            ctx->lr = 0x80D41228u;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80D41228:
    ctx->pc = 0x80D41228u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41228u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D41228: stw     r30, 32(r31)
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
label_80D4122C:
    ctx->pc = 0x80D4122Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D4122Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D4122C: lwz     r31, 12(r1)
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
label_80D41230:
    ctx->pc = 0x80D41230u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41230u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D41230: lwz     r30, 8(r1)
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
label_80D41234:
    ctx->pc = 0x80D41234u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41234u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D41234: lwz     r0, 20(r1)
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
label_80D41238:
    ctx->pc = 0x80D41238u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D41238u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D41238: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D4123C:
    ctx->pc = 0x80D4123Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4123Cu)) return;
    // 80D4123C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D41240:
    ctx->pc = 0x80D41240u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41240u)) return;
    // 80D41240: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D40860;
        }
    }

label_80D41244:
    ctx->pc = 0x80D41244u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41244u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D41244: stwu     r1, -16(r1)
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
label_80D41248:
    ctx->pc = 0x80D41248u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41248u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D41248: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D4124C:
    ctx->pc = 0x80D4124Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4124Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D4124C: stw     r0, 20(r1)
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
label_80D41250:
    ctx->pc = 0x80D41250u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41250u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D41250: stw     r31, 12(r1)
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
label_80D41254:
    ctx->pc = 0x80D41254u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41254u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D41254: stw     r30, 8(r1)
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
label_80D41258:
    ctx->pc = 0x80D41258u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41258u)) return;
    // 80D41258: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80D4125C:
    ctx->pc = 0x80D4125Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4125Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D4125C: lwz     r31, 32(r3)
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
label_80D41260:
    ctx->pc = 0x80D41260u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41260u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D41260: stw     r30, 48(r31)
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
label_80D41264:
    ctx->pc = 0x80D41264u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41264u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D41264: stw     r5, 52(r31)
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
label_80D41268:
    ctx->pc = 0x80D41268u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41268u)) return;
    // 80D41268: cmpwi   r5, 0
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

label_80D4126C:
    ctx->pc = 0x80D4126Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4126Cu)) return;
    // 80D4126C: bc    12, 1, 0x80D4127C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D4127C;
        }
    }

label_80D41270:
    ctx->pc = 0x80D41270u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41270u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D41270: lwz     r3, 16(r31)
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
label_80D41274:
    ctx->pc = 0x80D41274u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41274u)) return;
    // 80D41274: bl      0x80509B94
    {
            ctx->lr = 0x80D41278u;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80D41278:
    ctx->pc = 0x80D41278u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41278u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D41278: stw     r30, 44(r31)
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
label_80D4127C:
    ctx->pc = 0x80D4127Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D4127Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D4127C: lwz     r31, 12(r1)
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
label_80D41280:
    ctx->pc = 0x80D41280u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41280u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D41280: lwz     r30, 8(r1)
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
label_80D41284:
    ctx->pc = 0x80D41284u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41284u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D41284: lwz     r0, 20(r1)
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
label_80D41288:
    ctx->pc = 0x80D41288u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D41288u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D41288: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D4128C:
    ctx->pc = 0x80D4128Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4128Cu)) return;
    // 80D4128C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D41290:
    ctx->pc = 0x80D41290u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41290u)) return;
    // 80D41290: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D40860;
        }
    }

label_80D41294:
    ctx->pc = 0x80D41294u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41294u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D41294: stwu     r1, -16(r1)
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
label_80D41298:
    ctx->pc = 0x80D41298u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41298u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D41298: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D4129C:
    ctx->pc = 0x80D4129Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4129Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D4129C: stw     r0, 20(r1)
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
label_80D412A0:
    ctx->pc = 0x80D412A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D412A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D412A0: stw     r31, 12(r1)
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
label_80D412A4:
    ctx->pc = 0x80D412A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D412A4u)) return;
    // 80D412A4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D412A8:
    ctx->pc = 0x80D412A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D412A8u)) return;
    // 80D412A8: lis     r4, -27320
    ctx->gpr[4] = ((u32)(s32)(-27320) << 16);

label_80D412AC:
    ctx->pc = 0x80D412ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D412ACu)) return;
    // 80D412AC: addi    r4, r4, -3316
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-3316);

label_80D412B0:
    ctx->pc = 0x80D412B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D412B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D412B0: lwz     r0, 0(r4)
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
label_80D412B4:
    ctx->pc = 0x80D412B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D412B4u)) return;
    // 80D412B4: cmplwi  r0, 0x0000
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

label_80D412B8:
    ctx->pc = 0x80D412B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D412B8u)) return;
    // 80D412B8: bc    4, 2, 0x80D412DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D412DC;
        }
    }

label_80D412BC:
    ctx->pc = 0x80D412BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D412BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D412BC: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80D412C0:
    ctx->pc = 0x80D412C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D412C0u)) return;
    // 80D412C0: bl      0x8050EEC0
    {
            ctx->lr = 0x80D412C4u;
            ctx->pc = 0x8050EEC0u;
            return;
    }

label_80D412C4:
    ctx->pc = 0x80D412C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D412C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80D412C4: lis     r4, -27320
    ctx->gpr[4] = ((u32)(s32)(-27320) << 16);

label_80D412C8:
    ctx->pc = 0x80D412C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D412C8u)) return;
    // 80D412C8: addi    r4, r4, -3316
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-3316);

label_80D412CC:
    ctx->pc = 0x80D412CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D412CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D412CC: stw     r3, 0(r4)
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
label_80D412D0:
    ctx->pc = 0x80D412D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D412D0u)) return;
    // 80D412D0: lis     r3, -27320
    ctx->gpr[3] = ((u32)(s32)(-27320) << 16);

label_80D412D4:
    ctx->pc = 0x80D412D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D412D4u)) return;
    // 80D412D4: addi    r3, r3, -3320
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3320);

label_80D412D8:
    ctx->pc = 0x80D412D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D412D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D412D8: stw     r31, 0(r3)
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
label_80D412DC:
    ctx->pc = 0x80D412DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D412DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D412DC: lwz     r31, 12(r1)
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
label_80D412E0:
    ctx->pc = 0x80D412E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D412E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D412E0: lwz     r0, 20(r1)
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
label_80D412E4:
    ctx->pc = 0x80D412E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D412E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D412E4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D412E8:
    ctx->pc = 0x80D412E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D412E8u)) return;
    // 80D412E8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D412EC:
    ctx->pc = 0x80D412ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D412ECu)) return;
    // 80D412EC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D40860;
        }
    }

label_80D412F0:
    ctx->pc = 0x80D412F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D412F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D412F0: stwu     r1, -32(r1)
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
label_80D412F4:
    ctx->pc = 0x80D412F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D412F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D412F4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D412F8:
    ctx->pc = 0x80D412F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D412F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D412F8: stw     r0, 36(r1)
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
label_80D412FC:
    ctx->pc = 0x80D412FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D412FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D412FC: stw     r31, 28(r1)
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
label_80D41300:
    ctx->pc = 0x80D41300u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41300u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D41300: stw     r30, 24(r1)
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
label_80D41304:
    ctx->pc = 0x80D41304u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41304u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D41304: stw     r29, 20(r1)
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
label_80D41308:
    ctx->pc = 0x80D41308u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41308u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D41308: stw     r28, 16(r1)
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
label_80D4130C:
    ctx->pc = 0x80D4130Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4130Cu)) return;
    // 80D4130C: lis     r3, -27320
    ctx->gpr[3] = ((u32)(s32)(-27320) << 16);

label_80D41310:
    ctx->pc = 0x80D41310u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41310u)) return;
    // 80D41310: addi    r30, r3, -3316
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(-3316);

label_80D41314:
    ctx->pc = 0x80D41314u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41314u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D41314: lwz     r0, 0(r30)
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
label_80D41318:
    ctx->pc = 0x80D41318u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41318u)) return;
    // 80D41318: cmplwi  r0, 0x0000
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

label_80D4131C:
    ctx->pc = 0x80D4131Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4131Cu)) return;
    // 80D4131C: bc    12, 2, 0x80D4137C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D4137C;
        }
    }

label_80D41320:
    ctx->pc = 0x80D41320u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41320u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D41320: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_80D41324:
    ctx->pc = 0x80D41324u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41324u)) return;
    // 80D41324: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_80D41328:
    ctx->pc = 0x80D41328u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41328u)) return;
    // 80D41328: lis     r3, -27320
    ctx->gpr[3] = ((u32)(s32)(-27320) << 16);

label_80D4132C:
    ctx->pc = 0x80D4132Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4132Cu)) return;
    // 80D4132C: addi    r31, r3, -3320
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(-3320);

label_80D41330:
    ctx->pc = 0x80D41330u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41330u)) return;
    // 80D41330: b       0x80D41350
    {
            goto label_80D41350;
    }

label_80D41334:
    ctx->pc = 0x80D41334u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41334u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D41334: lwz     r3, 0(r30)
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
label_80D41338:
    ctx->pc = 0x80D41338u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41338u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D41338: lwzx    r3, r3, r29
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
label_80D4133C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4133Cu)) return;
    // 80D4133C: cmplwi  r3, 0x0000
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

label_80D41340:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41340u)) return;
    // 80D41340: bc    12, 2, 0x80D41348
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D41348;
        }
    }

label_80D41344:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41344u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D41344: bl      0x8050F9E0
    {
            ctx->lr = 0x80D41348u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80D41348:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41348u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D41348: addi    r29, r29, 4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4);

label_80D4134C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4134Cu)) return;
    // 80D4134C: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_80D41350:
    ctx->pc = 0x80D41350u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41350u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D41350: lwz     r0, 0(r31)
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
label_80D41354:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41354u)) return;
    // 80D41354: cmpw    r28, r0
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

label_80D41358:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41358u)) return;
    // 80D41358: bc    12, 0, 0x80D41334
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80D41334u;
                return;
            }
            goto label_80D41334;
        }
    }

label_80D4135C:
    ctx->pc = 0x80D4135Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D4135Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D4135C: lis     r3, -27320
    ctx->gpr[3] = ((u32)(s32)(-27320) << 16);

label_80D41360:
    ctx->pc = 0x80D41360u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41360u)) return;
    // 80D41360: addi    r3, r3, -3316
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3316);

label_80D41364:
    ctx->pc = 0x80D41364u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41364u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D41364: lwz     r3, 0(r3)
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
label_80D41368:
    ctx->pc = 0x80D41368u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41368u)) return;
    // 80D41368: bl      0x8050ED40
    {
            ctx->lr = 0x80D4136Cu;
            ctx->pc = 0x8050ED40u;
            return;
    }

label_80D4136C:
    ctx->pc = 0x80D4136Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D4136Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D4136C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D41370:
    ctx->pc = 0x80D41370u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41370u)) return;
    // 80D41370: lis     r3, -27320
    ctx->gpr[3] = ((u32)(s32)(-27320) << 16);

label_80D41374:
    ctx->pc = 0x80D41374u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41374u)) return;
    // 80D41374: addi    r3, r3, -3316
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3316);

label_80D41378:
    ctx->pc = 0x80D41378u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41378u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D41378: stw     r0, 0(r3)
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
label_80D4137C:
    ctx->pc = 0x80D4137Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D4137Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D4137C: lwz     r31, 28(r1)
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
label_80D41380:
    ctx->pc = 0x80D41380u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41380u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D41380: lwz     r30, 24(r1)
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
label_80D41384:
    ctx->pc = 0x80D41384u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41384u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D41384: lwz     r29, 20(r1)
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
label_80D41388:
    ctx->pc = 0x80D41388u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41388u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D41388: lwz     r28, 16(r1)
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
label_80D4138C:
    ctx->pc = 0x80D4138Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4138Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D4138C: lwz     r0, 36(r1)
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
label_80D41390:
    ctx->pc = 0x80D41390u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D41390u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D41390: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D41394:
    ctx->pc = 0x80D41394u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41394u)) return;
    // 80D41394: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80D41398:
    ctx->pc = 0x80D41398u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41398u)) return;
    // 80D41398: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D40860;
        }
    }

label_80D4139C:
    ctx->pc = 0x80D4139Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D4139Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D4139C: stwu     r1, -16(r1)
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
label_80D413A0:
    ctx->pc = 0x80D413A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D413A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D413A0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D413A4:
    ctx->pc = 0x80D413A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D413A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D413A4: stw     r0, 20(r1)
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
label_80D413A8:
    ctx->pc = 0x80D413A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D413A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D413A8: stw     r31, 12(r1)
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
label_80D413AC:
    ctx->pc = 0x80D413ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D413ACu)) return;
    // 80D413AC: lis     r6, -27320
    ctx->gpr[6] = ((u32)(s32)(-27320) << 16);

label_80D413B0:
    ctx->pc = 0x80D413B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D413B0u)) return;
    // 80D413B0: addi    r6, r6, -3320
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-3320);

label_80D413B4:
    ctx->pc = 0x80D413B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D413B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D413B4: lwz     r0, 0(r6)
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
label_80D413B8:
    ctx->pc = 0x80D413B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D413B8u)) return;
    // 80D413B8: cmpw    r3, r0
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

label_80D413BC:
    ctx->pc = 0x80D413BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D413BCu)) return;
    // 80D413BC: bc    4, 0, 0x80D413F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D413F8;
        }
    }

label_80D413C0:
    ctx->pc = 0x80D413C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D413C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D413C0: lis     r6, -27320
    ctx->gpr[6] = ((u32)(s32)(-27320) << 16);

label_80D413C4:
    ctx->pc = 0x80D413C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D413C4u)) return;
    // 80D413C4: addi    r6, r6, -3316
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-3316);

label_80D413C8:
    ctx->pc = 0x80D413C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D413C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D413C8: lwz     r6, 0(r6)
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
label_80D413CC:
    ctx->pc = 0x80D413CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D413CCu)) return;
    // 80D413CC: rlwinm r31, r3, 2, 0, 29
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80D413D0:
    ctx->pc = 0x80D413D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D413D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D413D0: lwzx    r0, r6, r31
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
label_80D413D4:
    ctx->pc = 0x80D413D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D413D4u)) return;
    // 80D413D4: cmplwi  r0, 0x0000
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

label_80D413D8:
    ctx->pc = 0x80D413D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D413D8u)) return;
    // 80D413D8: bc    4, 2, 0x80D413F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D413F8;
        }
    }

label_80D413DC:
    ctx->pc = 0x80D413DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D413DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D413DC: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80D413E0:
    ctx->pc = 0x80D413E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D413E0u)) return;
    // 80D413E0: or   r4, r5, r5
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80D413E4:
    ctx->pc = 0x80D413E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D413E4u)) return;
    // 80D413E4: bl      0x80D410E8
    {
            ctx->lr = 0x80D413E8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80D410E8u;
                return;
            }
            goto label_80D410E8;
    }

label_80D413E8:
    ctx->pc = 0x80D413E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D413E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D413E8: lis     r4, -27320
    ctx->gpr[4] = ((u32)(s32)(-27320) << 16);

label_80D413EC:
    ctx->pc = 0x80D413ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D413ECu)) return;
    // 80D413EC: addi    r4, r4, -3316
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-3316);

label_80D413F0:
    ctx->pc = 0x80D413F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D413F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D413F0: lwz     r4, 0(r4)
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
label_80D413F4:
    ctx->pc = 0x80D413F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D413F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D413F4: stwx    r3, r4, r31
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
label_80D413F8:
    ctx->pc = 0x80D413F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D413F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D413F8: lwz     r31, 12(r1)
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
label_80D413FC:
    ctx->pc = 0x80D413FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D413FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D413FC: lwz     r0, 20(r1)
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
label_80D41400:
    ctx->pc = 0x80D41400u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D41400u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D41400: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D41404:
    ctx->pc = 0x80D41404u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41404u)) return;
    // 80D41404: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D41408:
    ctx->pc = 0x80D41408u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41408u)) return;
    // 80D41408: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D40860;
        }
    }

label_80D4140C:
    ctx->pc = 0x80D4140Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D4140Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D4140C: stwu     r1, -16(r1)
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
label_80D41410:
    ctx->pc = 0x80D41410u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41410u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D41410: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D41414:
    ctx->pc = 0x80D41414u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41414u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D41414: stw     r0, 20(r1)
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
label_80D41418:
    ctx->pc = 0x80D41418u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41418u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D41418: stw     r31, 12(r1)
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
label_80D4141C:
    ctx->pc = 0x80D4141Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4141Cu)) return;
    // 80D4141C: lis     r4, -27320
    ctx->gpr[4] = ((u32)(s32)(-27320) << 16);

label_80D41420:
    ctx->pc = 0x80D41420u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41420u)) return;
    // 80D41420: addi    r4, r4, -3320
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-3320);

label_80D41424:
    ctx->pc = 0x80D41424u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41424u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D41424: lwz     r0, 0(r4)
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
label_80D41428:
    ctx->pc = 0x80D41428u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41428u)) return;
    // 80D41428: cmpw    r3, r0
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

label_80D4142C:
    ctx->pc = 0x80D4142Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4142Cu)) return;
    // 80D4142C: bc    4, 0, 0x80D41464
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D41464;
        }
    }

label_80D41430:
    ctx->pc = 0x80D41430u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41430u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D41430: lis     r4, -27320
    ctx->gpr[4] = ((u32)(s32)(-27320) << 16);

label_80D41434:
    ctx->pc = 0x80D41434u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41434u)) return;
    // 80D41434: addi    r4, r4, -3316
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-3316);

label_80D41438:
    ctx->pc = 0x80D41438u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41438u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D41438: lwz     r4, 0(r4)
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
label_80D4143C:
    ctx->pc = 0x80D4143Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4143Cu)) return;
    // 80D4143C: rlwinm r31, r3, 2, 0, 29
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80D41440:
    ctx->pc = 0x80D41440u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41440u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D41440: lwzx    r3, r4, r31
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
label_80D41444:
    ctx->pc = 0x80D41444u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41444u)) return;
    // 80D41444: cmplwi  r3, 0x0000
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

label_80D41448:
    ctx->pc = 0x80D41448u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41448u)) return;
    // 80D41448: bc    12, 2, 0x80D41464
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D41464;
        }
    }

label_80D4144C:
    ctx->pc = 0x80D4144Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D4144Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D4144C: bl      0x8050F9E0
    {
            ctx->lr = 0x80D41450u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80D41450:
    ctx->pc = 0x80D41450u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41450u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D41450: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D41454:
    ctx->pc = 0x80D41454u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41454u)) return;
    // 80D41454: lis     r3, -27320
    ctx->gpr[3] = ((u32)(s32)(-27320) << 16);

label_80D41458:
    ctx->pc = 0x80D41458u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41458u)) return;
    // 80D41458: addi    r3, r3, -3316
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3316);

label_80D4145C:
    ctx->pc = 0x80D4145Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4145Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D4145C: lwz     r3, 0(r3)
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
label_80D41460:
    ctx->pc = 0x80D41460u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41460u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D41460: stwx    r0, r3, r31
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
label_80D41464:
    ctx->pc = 0x80D41464u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41464u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D41464: lwz     r31, 12(r1)
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
label_80D41468:
    ctx->pc = 0x80D41468u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41468u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D41468: lwz     r0, 20(r1)
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
label_80D4146C:
    ctx->pc = 0x80D4146Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D4146Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D4146C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D41470:
    ctx->pc = 0x80D41470u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41470u)) return;
    // 80D41470: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D41474:
    ctx->pc = 0x80D41474u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41474u)) return;
    // 80D41474: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D40860;
        }
    }

label_80D41478:
    ctx->pc = 0x80D41478u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41478u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D41478: stwu     r1, -16(r1)
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
label_80D4147C:
    ctx->pc = 0x80D4147Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4147Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D4147C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D41480:
    ctx->pc = 0x80D41480u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41480u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D41480: stw     r0, 20(r1)
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
label_80D41484:
    ctx->pc = 0x80D41484u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41484u)) return;
    // 80D41484: lis     r6, -27320
    ctx->gpr[6] = ((u32)(s32)(-27320) << 16);

label_80D41488:
    ctx->pc = 0x80D41488u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41488u)) return;
    // 80D41488: addi    r6, r6, -3320
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-3320);

label_80D4148C:
    ctx->pc = 0x80D4148Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4148Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D4148C: lwz     r0, 0(r6)
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
label_80D41490:
    ctx->pc = 0x80D41490u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41490u)) return;
    // 80D41490: cmpw    r3, r0
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

label_80D41494:
    ctx->pc = 0x80D41494u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41494u)) return;
    // 80D41494: bc    4, 0, 0x80D414B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D414B8;
        }
    }

label_80D41498:
    ctx->pc = 0x80D41498u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41498u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D41498: lis     r6, -27320
    ctx->gpr[6] = ((u32)(s32)(-27320) << 16);

label_80D4149C:
    ctx->pc = 0x80D4149Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4149Cu)) return;
    // 80D4149C: addi    r6, r6, -3316
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-3316);

label_80D414A0:
    ctx->pc = 0x80D414A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D414A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D414A0: lwz     r6, 0(r6)
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
label_80D414A4:
    ctx->pc = 0x80D414A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D414A4u)) return;
    // 80D414A4: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80D414A8:
    ctx->pc = 0x80D414A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D414A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D414A8: lwzx    r3, r6, r0
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
label_80D414AC:
    ctx->pc = 0x80D414ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D414ACu)) return;
    // 80D414AC: cmplwi  r3, 0x0000
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

label_80D414B0:
    ctx->pc = 0x80D414B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D414B0u)) return;
    // 80D414B0: bc    12, 2, 0x80D414B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D414B8;
        }
    }

label_80D414B4:
    ctx->pc = 0x80D414B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D414B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D414B4: bl      0x80D411A4
    {
            ctx->lr = 0x80D414B8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80D411A4u;
                return;
            }
            goto label_80D411A4;
    }

label_80D414B8:
    ctx->pc = 0x80D414B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D414B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D414B8: lwz     r0, 20(r1)
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
label_80D414BC:
    ctx->pc = 0x80D414BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D414BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D414BC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D414C0:
    ctx->pc = 0x80D414C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D414C0u)) return;
    // 80D414C0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D414C4:
    ctx->pc = 0x80D414C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D414C4u)) return;
    // 80D414C4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D40860;
        }
    }

label_80D414C8:
    ctx->pc = 0x80D414C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D414C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D414C8: stwu     r1, -16(r1)
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
label_80D414CC:
    ctx->pc = 0x80D414CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D414CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D414CC: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D414D0:
    ctx->pc = 0x80D414D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D414D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D414D0: stw     r0, 20(r1)
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
label_80D414D4:
    ctx->pc = 0x80D414D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D414D4u)) return;
    // 80D414D4: lis     r6, -27320
    ctx->gpr[6] = ((u32)(s32)(-27320) << 16);

label_80D414D8:
    ctx->pc = 0x80D414D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D414D8u)) return;
    // 80D414D8: addi    r6, r6, -3320
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-3320);

label_80D414DC:
    ctx->pc = 0x80D414DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D414DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D414DC: lwz     r0, 0(r6)
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
label_80D414E0:
    ctx->pc = 0x80D414E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D414E0u)) return;
    // 80D414E0: cmpw    r3, r0
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

label_80D414E4:
    ctx->pc = 0x80D414E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D414E4u)) return;
    // 80D414E4: bc    4, 0, 0x80D41508
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D41508;
        }
    }

label_80D414E8:
    ctx->pc = 0x80D414E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D414E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D414E8: lis     r6, -27320
    ctx->gpr[6] = ((u32)(s32)(-27320) << 16);

label_80D414EC:
    ctx->pc = 0x80D414ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D414ECu)) return;
    // 80D414EC: addi    r6, r6, -3316
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-3316);

label_80D414F0:
    ctx->pc = 0x80D414F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D414F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D414F0: lwz     r6, 0(r6)
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
label_80D414F4:
    ctx->pc = 0x80D414F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D414F4u)) return;
    // 80D414F4: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80D414F8:
    ctx->pc = 0x80D414F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D414F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D414F8: lwzx    r3, r6, r0
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
label_80D414FC:
    ctx->pc = 0x80D414FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D414FCu)) return;
    // 80D414FC: cmplwi  r3, 0x0000
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

label_80D41500:
    ctx->pc = 0x80D41500u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41500u)) return;
    // 80D41500: bc    12, 2, 0x80D41508
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D41508;
        }
    }

label_80D41504:
    ctx->pc = 0x80D41504u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41504u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D41504: bl      0x80D411F4
    {
            ctx->lr = 0x80D41508u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80D411F4u;
                return;
            }
            goto label_80D411F4;
    }

label_80D41508:
    ctx->pc = 0x80D41508u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41508u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D41508: lwz     r0, 20(r1)
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
label_80D4150C:
    ctx->pc = 0x80D4150Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D4150Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D4150C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D41510:
    ctx->pc = 0x80D41510u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41510u)) return;
    // 80D41510: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D41514:
    ctx->pc = 0x80D41514u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41514u)) return;
    // 80D41514: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D40860;
        }
    }

label_80D41518:
    ctx->pc = 0x80D41518u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41518u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D41518: stwu     r1, -16(r1)
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
label_80D4151C:
    ctx->pc = 0x80D4151Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4151Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D4151C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D41520:
    ctx->pc = 0x80D41520u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41520u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D41520: stw     r0, 20(r1)
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
label_80D41524:
    ctx->pc = 0x80D41524u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41524u)) return;
    // 80D41524: lis     r6, -27320
    ctx->gpr[6] = ((u32)(s32)(-27320) << 16);

label_80D41528:
    ctx->pc = 0x80D41528u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41528u)) return;
    // 80D41528: addi    r6, r6, -3320
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-3320);

label_80D4152C:
    ctx->pc = 0x80D4152Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4152Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D4152C: lwz     r0, 0(r6)
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
label_80D41530:
    ctx->pc = 0x80D41530u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41530u)) return;
    // 80D41530: cmpw    r3, r0
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

label_80D41534:
    ctx->pc = 0x80D41534u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41534u)) return;
    // 80D41534: bc    4, 0, 0x80D41558
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D41558;
        }
    }

label_80D41538:
    ctx->pc = 0x80D41538u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41538u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D41538: lis     r6, -27320
    ctx->gpr[6] = ((u32)(s32)(-27320) << 16);

label_80D4153C:
    ctx->pc = 0x80D4153Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4153Cu)) return;
    // 80D4153C: addi    r6, r6, -3316
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-3316);

label_80D41540:
    ctx->pc = 0x80D41540u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41540u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D41540: lwz     r6, 0(r6)
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
label_80D41544:
    ctx->pc = 0x80D41544u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41544u)) return;
    // 80D41544: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80D41548:
    ctx->pc = 0x80D41548u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41548u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D41548: lwzx    r3, r6, r0
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
label_80D4154C:
    ctx->pc = 0x80D4154Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4154Cu)) return;
    // 80D4154C: cmplwi  r3, 0x0000
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

label_80D41550:
    ctx->pc = 0x80D41550u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41550u)) return;
    // 80D41550: bc    12, 2, 0x80D41558
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D41558;
        }
    }

label_80D41554:
    ctx->pc = 0x80D41554u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41554u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D41554: bl      0x80D41244
    {
            ctx->lr = 0x80D41558u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80D41244u;
                return;
            }
            goto label_80D41244;
    }

label_80D41558:
    ctx->pc = 0x80D41558u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41558u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D41558: lwz     r0, 20(r1)
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
label_80D4155C:
    ctx->pc = 0x80D4155Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D4155Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D4155C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D41560:
    ctx->pc = 0x80D41560u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41560u)) return;
    // 80D41560: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D41564:
    ctx->pc = 0x80D41564u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41564u)) return;
    // 80D41564: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D40860;
        }
    }

label_80D41568:
    ctx->pc = 0x80D41568u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41568u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80D41568: stwu     r1, -32(r1)
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
label_80D4156C:
    ctx->pc = 0x80D4156Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4156Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D4156C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D41570:
    ctx->pc = 0x80D41570u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41570u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D41570: stw     r0, 36(r1)
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
label_80D41574:
    ctx->pc = 0x80D41574u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41574u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D41574: stw     r31, 28(r1)
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
label_80D41578:
    ctx->pc = 0x80D41578u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41578u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D41578: stw     r30, 24(r1)
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
label_80D4157C:
    ctx->pc = 0x80D4157Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4157Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D4157C: stw     r29, 20(r1)
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
label_80D41580:
    ctx->pc = 0x80D41580u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41580u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D41580: stw     r28, 16(r1)
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
label_80D41584:
    ctx->pc = 0x80D41584u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41584u)) return;
    // 80D41584: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D41588:
    ctx->pc = 0x80D41588u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41588u)) return;
    // 80D41588: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80D4158C:
    ctx->pc = 0x80D4158Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4158Cu)) return;
    // 80D4158C: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80D41590:
    ctx->pc = 0x80D41590u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41590u)) return;
    // 80D41590: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_80D41594:
    ctx->pc = 0x80D41594u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41594u)) return;
    // 80D41594: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D41598:
    ctx->pc = 0x80D41598u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41598u)) return;
    // 80D41598: bl      0x80401DB0
    {
            ctx->lr = 0x80D4159Cu;
            ctx->pc = 0x80401DB0u;
            return;
    }

label_80D4159C:
    ctx->pc = 0x80D4159Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D4159Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D4159C: lis     r4, -27320
    ctx->gpr[4] = ((u32)(s32)(-27320) << 16);

label_80D415A0:
    ctx->pc = 0x80D415A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D415A0u)) return;
    // 80D415A0: addi    r4, r4, -3312
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-3312);

label_80D415A4:
    ctx->pc = 0x80D415A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D415A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D415A4: lwz     r0, 0(r4)
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
label_80D415A8:
    ctx->pc = 0x80D415A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D415A8u)) return;
    // 80D415A8: add   r4, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80D415AC:
    ctx->pc = 0x80D415ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D415ACu)) return;
    // 80D415AC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80D415B0:
    ctx->pc = 0x80D415B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D415B0u)) return;
    // 80D415B0: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80D415B4:
    ctx->pc = 0x80D415B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D415B4u)) return;
    // 80D415B4: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80D415B8:
    ctx->pc = 0x80D415B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D415B8u)) return;
    // 80D415B8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80D415BC:
    ctx->pc = 0x80D415BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D415BCu)) return;
    // 80D415BC: li      r7, 120
    ctx->gpr[7] = (u32)(s32)(120);

label_80D415C0:
    ctx->pc = 0x80D415C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D415C0u)) return;
    // 80D415C0: bl      0x8050A0D4
    {
            ctx->lr = 0x80D415C4u;
            ctx->pc = 0x8050A0D4u;
            return;
    }

label_80D415C4:
    ctx->pc = 0x80D415C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D415C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D415C4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80D415C8:
    ctx->pc = 0x80D415C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D415C8u)) return;
    // 80D415C8: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80D415CC:
    ctx->pc = 0x80D415CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D415CCu)) return;
    // 80D415CC: bl      0x80509C74
    {
            ctx->lr = 0x80D415D0u;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80D415D0:
    ctx->pc = 0x80D415D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D415D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D415D0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80D415D4:
    ctx->pc = 0x80D415D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D415D4u)) return;
    // 80D415D4: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80D415D8:
    ctx->pc = 0x80D415D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D415D8u)) return;
    // 80D415D8: bl      0x80509BF8
    {
            ctx->lr = 0x80D415DCu;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80D415DC:
    ctx->pc = 0x80D415DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D415DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D415DC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80D415E0:
    ctx->pc = 0x80D415E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D415E0u)) return;
    // 80D415E0: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80D415E4:
    ctx->pc = 0x80D415E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D415E4u)) return;
    // 80D415E4: bl      0x80509B94
    {
            ctx->lr = 0x80D415E8u;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80D415E8:
    ctx->pc = 0x80D415E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D415E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80D415E8: lis     r3, -27320
    ctx->gpr[3] = ((u32)(s32)(-27320) << 16);

label_80D415EC:
    ctx->pc = 0x80D415ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D415ECu)) return;
    // 80D415EC: addi    r4, r3, -3312
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-3312);

label_80D415F0:
    ctx->pc = 0x80D415F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D415F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80D415F0: lwz     r3, 0(r4)
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
label_80D415F4:
    ctx->pc = 0x80D415F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D415F4u)) return;
    // 80D415F4: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_80D415F8:
    ctx->pc = 0x80D415F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D415F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D415F8: stw     r0, 0(r4)
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
label_80D415FC:
    ctx->pc = 0x80D415FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D415FCu)) return;
    // 80D415FC: rlwinm r0, r0, 0, 27, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000001Fu;
    }

label_80D41600:
    ctx->pc = 0x80D41600u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41600u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D41600: stw     r0, 0(r4)
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
label_80D41604:
    ctx->pc = 0x80D41604u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41604u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D41604: lwz     r31, 28(r1)
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
label_80D41608:
    ctx->pc = 0x80D41608u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41608u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D41608: lwz     r30, 24(r1)
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
label_80D4160C:
    ctx->pc = 0x80D4160Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4160Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D4160C: lwz     r29, 20(r1)
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
label_80D41610:
    ctx->pc = 0x80D41610u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41610u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D41610: lwz     r28, 16(r1)
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
label_80D41614:
    ctx->pc = 0x80D41614u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41614u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D41614: lwz     r0, 36(r1)
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
label_80D41618:
    ctx->pc = 0x80D41618u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D41618u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D41618: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D4161C:
    ctx->pc = 0x80D4161Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4161Cu)) return;
    // 80D4161C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80D41620:
    ctx->pc = 0x80D41620u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41620u)) return;
    // 80D41620: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D40860;
        }
    }

label_80D41624:
    ctx->pc = 0x80D41624u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41624u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D41624: stwu     r1, -16(r1)
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
label_80D41628:
    ctx->pc = 0x80D41628u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41628u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D41628: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D4162C:
    ctx->pc = 0x80D4162Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4162Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D4162C: stw     r0, 20(r1)
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
label_80D41630:
    ctx->pc = 0x80D41630u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41630u)) return;
    // 80D41630: bl      0x8050E9CC
    {
            ctx->lr = 0x80D41634u;
            ctx->pc = 0x8050E9CCu;
            return;
    }

label_80D41634:
    ctx->pc = 0x80D41634u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41634u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D41634: lwz     r0, 20(r1)
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
label_80D41638:
    ctx->pc = 0x80D41638u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D41638u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D41638: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D4163C:
    ctx->pc = 0x80D4163Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4163Cu)) return;
    // 80D4163C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D41640:
    ctx->pc = 0x80D41640u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41640u)) return;
    // 80D41640: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D40860;
        }
    }

label_80D41644:
    ctx->pc = 0x80D41644u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41644u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D41644: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D40860;
        }
    }

label_80D41648:
    ctx->pc = 0x80D41648u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41648u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D41648: stwu     r1, -16(r1)
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
label_80D4164C:
    ctx->pc = 0x80D4164Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4164Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D4164C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D41650:
    ctx->pc = 0x80D41650u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41650u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D41650: stw     r0, 20(r1)
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
label_80D41654:
    ctx->pc = 0x80D41654u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41654u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D41654: stw     r31, 12(r1)
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
label_80D41658:
    ctx->pc = 0x80D41658u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41658u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D41658: stw     r30, 8(r1)
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
label_80D4165C:
    ctx->pc = 0x80D4165Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4165Cu)) return;
    // 80D4165C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D41660:
    ctx->pc = 0x80D41660u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41660u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D41660: lwz     r31, 32(r30)
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
label_80D41664:
    ctx->pc = 0x80D41664u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41664u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D41664: lwz     r3, 60(r31)
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
label_80D41668:
    ctx->pc = 0x80D41668u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41668u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D41668: lwz     r0, 76(r3)
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
label_80D4166C:
    ctx->pc = 0x80D4166Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4166Cu)) return;
    // 80D4166C: cmplwi  r0, 0x0000
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

label_80D41670:
    ctx->pc = 0x80D41670u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41670u)) return;
    // 80D41670: bc    12, 2, 0x80D4167C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D4167C;
        }
    }

label_80D41674:
    ctx->pc = 0x80D41674u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41674u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D41674: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80D41678:
    ctx->pc = 0x80D41678u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41678u)) return;
    // 80D41678: bl      0x80461320
    {
            ctx->lr = 0x80D4167Cu;
            ctx->pc = 0x80461320u;
            return;
    }

label_80D4167C:
    ctx->pc = 0x80D4167Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D4167Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D4167C: lfs     f1, 44(r31)
    if (!ppc_fp_available_inline(ctx, 0x80D4167Cu)) return;
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
label_80D41680:
    ctx->pc = 0x80D41680u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41680u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D41680: lfs     f0, 48(r31)
    if (!ppc_fp_available_inline(ctx, 0x80D41680u)) return;
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
label_80D41684:
    ctx->pc = 0x80D41684u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41684u)) return;
    // 80D41684: fadds   f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80D41684u)) return;
    ppc_fadds(ctx, 2, 1, 0);

label_80D41688:
    ctx->pc = 0x80D41688u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41688u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D41688: lfs     f1, 52(r31)
    if (!ppc_fp_available_inline(ctx, 0x80D41688u)) return;
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
label_80D4168C:
    ctx->pc = 0x80D4168Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4168Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D4168C: lfs     f0, 16(r31)
    if (!ppc_fp_available_inline(ctx, 0x80D4168Cu)) return;
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
label_80D41690:
    ctx->pc = 0x80D41690u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41690u)) return;
    // 80D41690: fadds   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80D41690u)) return;
    ppc_fadds(ctx, 1, 1, 0);

label_80D41694:
    ctx->pc = 0x80D41694u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41694u)) return;
    // 80D41694: lis     r3, -27321
    ctx->gpr[3] = ((u32)(s32)(-27321) << 16);

label_80D41698:
    ctx->pc = 0x80D41698u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41698u)) return;
    // 80D41698: addi    r3, r3, 15656
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(15656);

label_80D4169C:
    ctx->pc = 0x80D4169Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4169Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D4169C: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D4169Cu)) return;
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
label_80D416A0:
    ctx->pc = 0x80D416A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D416A0u)) return;
    // 80D416A0: fcmpo   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80D416A0u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], true);

label_80D416A4:
    ctx->pc = 0x80D416A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D416A4u)) return;
    // 80D416A4: bc    4, 0, 0x80D416B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D416B0;
        }
    }

label_80D416A8:
    ctx->pc = 0x80D416A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D416A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D416A8: fmr    f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80D416A8u)) return;
    ctx->fpr[2] = ctx->fpr[0];

label_80D416AC:
    ctx->pc = 0x80D416ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D416ACu)) return;
    // 80D416AC: b       0x80D416C8
    {
            goto label_80D416C8;
    }

label_80D416B0:
    ctx->pc = 0x80D416B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D416B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D416B0: lis     r3, -27321
    ctx->gpr[3] = ((u32)(s32)(-27321) << 16);

label_80D416B4:
    ctx->pc = 0x80D416B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D416B4u)) return;
    // 80D416B4: addi    r3, r3, 15660
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(15660);

label_80D416B8:
    ctx->pc = 0x80D416B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D416B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D416B8: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D416B8u)) return;
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
label_80D416BC:
    ctx->pc = 0x80D416BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D416BCu)) return;
    // 80D416BC: fcmpo   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80D416BCu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], true);

label_80D416C0:
    ctx->pc = 0x80D416C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D416C0u)) return;
    // 80D416C0: bc    4, 1, 0x80D416C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D416C8;
        }
    }

label_80D416C4:
    ctx->pc = 0x80D416C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D416C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D416C4: fmr    f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80D416C4u)) return;
    ctx->fpr[2] = ctx->fpr[0];

label_80D416C8:
    ctx->pc = 0x80D416C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D416C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D416C8: lis     r3, -27321
    ctx->gpr[3] = ((u32)(s32)(-27321) << 16);

label_80D416CC:
    ctx->pc = 0x80D416CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D416CCu)) return;
    // 80D416CC: addi    r3, r3, 15656
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(15656);

label_80D416D0:
    ctx->pc = 0x80D416D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D416D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D416D0: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D416D0u)) return;
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
label_80D416D4:
    ctx->pc = 0x80D416D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D416D4u)) return;
    // 80D416D4: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80D416D4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80D416D8:
    ctx->pc = 0x80D416D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D416D8u)) return;
    // 80D416D8: bc    4, 0, 0x80D416E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D416E0;
        }
    }

label_80D416DC:
    ctx->pc = 0x80D416DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D416DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D416DC: fmr    f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80D416DCu)) return;
    ctx->fpr[1] = ctx->fpr[0];

label_80D416E0:
    ctx->pc = 0x80D416E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D416E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D416E0: lwz     r3, 16(r31)
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
label_80D416E4:
    ctx->pc = 0x80D416E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D416E4u)) return;
    // 80D416E4: bl      0x804C079C
    {
            ctx->lr = 0x80D416E8u;
            ctx->pc = 0x804C079Cu;
            return;
    }

label_80D416E8:
    ctx->pc = 0x80D416E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D416E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D416E8: lwz     r3, 24(r31)
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
label_80D416EC:
    ctx->pc = 0x80D416ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D416ECu)) return;
    // 80D416EC: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80D416F0:
    ctx->pc = 0x80D416F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D416F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D416F0: stw     r0, 24(r31)
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
label_80D416F4:
    ctx->pc = 0x80D416F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D416F4u)) return;
    // 80D416F4: cmpwi   r0, 0
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

label_80D416F8:
    ctx->pc = 0x80D416F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D416F8u)) return;
    // 80D416F8: bc    4, 2, 0x80D4170C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D4170C;
        }
    }

label_80D416FC:
    ctx->pc = 0x80D416FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D416FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D416FC: lwz     r3, 16(r31)
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
label_80D41700:
    ctx->pc = 0x80D41700u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41700u)) return;
    // 80D41700: bl      0x804C0688
    {
            ctx->lr = 0x80D41704u;
            ctx->pc = 0x804C0688u;
            return;
    }

label_80D41704:
    ctx->pc = 0x80D41704u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41704u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D41704: lwz     r0, 20(r31)
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
label_80D41708:
    ctx->pc = 0x80D41708u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41708u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D41708: stw     r0, 24(r31)
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
label_80D4170C:
    ctx->pc = 0x80D4170Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D4170Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D4170C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80D41710:
    ctx->pc = 0x80D41710u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41710u)) return;
    // 80D41710: bl      0x8050E95C
    {
            ctx->lr = 0x80D41714u;
            ctx->pc = 0x8050E95Cu;
            return;
    }

label_80D41714:
    ctx->pc = 0x80D41714u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41714u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D41714: lwz     r31, 12(r1)
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
label_80D41718:
    ctx->pc = 0x80D41718u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41718u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D41718: lwz     r30, 8(r1)
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
label_80D4171C:
    ctx->pc = 0x80D4171Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4171Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D4171C: lwz     r0, 20(r1)
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
label_80D41720:
    ctx->pc = 0x80D41720u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D41720u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D41720: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D41724:
    ctx->pc = 0x80D41724u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41724u)) return;
    // 80D41724: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D41728:
    ctx->pc = 0x80D41728u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41728u)) return;
    // 80D41728: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D40860;
        }
    }

label_80D4172C:
    ctx->pc = 0x80D4172Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 18u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D4172Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 18u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80D4172C: stwu     r1, -64(r1)
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
label_80D41730:
    ctx->pc = 0x80D41730u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41730u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80D41730: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D41734:
    ctx->pc = 0x80D41734u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41734u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80D41734: stw     r0, 68(r1)
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
label_80D41738:
    ctx->pc = 0x80D41738u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41738u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80D41738: stfd     f31, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D41738u)) return;
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
label_80D4173C:
    ctx->pc = 0x80D4173Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4173Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80D4173C: psq_st   f31, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D4173Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80D4173Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D41740:
    ctx->pc = 0x80D41740u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41740u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80D41740: stfd     f30, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D41740u)) return;
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
label_80D41744:
    ctx->pc = 0x80D41744u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41744u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D41744: psq_st   f30, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D41744u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x80D41744u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D41748:
    ctx->pc = 0x80D41748u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41748u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D41748: stfd     f29, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D41748u)) return;
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
label_80D4174C:
    ctx->pc = 0x80D4174Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4174Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D4174C: psq_st   f29, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D4174Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x80D4174Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D41750:
    ctx->pc = 0x80D41750u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41750u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D41750: stw     r31, 12(r1)
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
label_80D41754:
    ctx->pc = 0x80D41754u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41754u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D41754: stw     r30, 8(r1)
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
label_80D41758:
    ctx->pc = 0x80D41758u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41758u)) return;
    // 80D41758: fmr    f29, f1
    if (!ppc_fp_available_inline(ctx, 0x80D41758u)) return;
    ctx->fpr[29] = ctx->fpr[1];

label_80D4175C:
    ctx->pc = 0x80D4175Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4175Cu)) return;
    // 80D4175C: fmr    f30, f2
    if (!ppc_fp_available_inline(ctx, 0x80D4175Cu)) return;
    ctx->fpr[30] = ctx->fpr[2];

label_80D41760:
    ctx->pc = 0x80D41760u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41760u)) return;
    // 80D41760: fmr    f31, f3
    if (!ppc_fp_available_inline(ctx, 0x80D41760u)) return;
    ctx->fpr[31] = ctx->fpr[3];

label_80D41764:
    ctx->pc = 0x80D41764u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41764u)) return;
    // 80D41764: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D41768:
    ctx->pc = 0x80D41768u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41768u)) return;
    // 80D41768: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80D4176C:
    ctx->pc = 0x80D4176Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4176Cu)) return;
    // 80D4176C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80D41770:
    ctx->pc = 0x80D41770u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41770u)) return;
    // 80D41770: bl      0x8050FD60
    {
            ctx->lr = 0x80D41774u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80D41774:
    ctx->pc = 0x80D41774u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41774u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D41774: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D41778:
    ctx->pc = 0x80D41778u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41778u)) return;
    // 80D41778: cmplwi  r31, 0x0000
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

label_80D4177C:
    ctx->pc = 0x80D4177Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4177Cu)) return;
    // 80D4177C: bc    12, 2, 0x80D41810
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D41810;
        }
    }

label_80D41780:
    ctx->pc = 0x80D41780u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41780u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D41780: lis     r3, -32556
    ctx->gpr[3] = ((u32)(s32)(-32556) << 16);

label_80D41784:
    ctx->pc = 0x80D41784u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41784u)) return;
    // 80D41784: addi    r0, r3, 5704
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(5704);

label_80D41788:
    ctx->pc = 0x80D41788u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41788u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D41788: stw     r0, 16(r31)
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
label_80D4178C:
    ctx->pc = 0x80D4178Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4178Cu)) return;
    // 80D4178C: lis     r3, -32556
    ctx->gpr[3] = ((u32)(s32)(-32556) << 16);

label_80D41790:
    ctx->pc = 0x80D41790u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41790u)) return;
    // 80D41790: addi    r0, r3, 5700
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(5700);

label_80D41794:
    ctx->pc = 0x80D41794u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41794u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D41794: stw     r0, 20(r31)
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
label_80D41798:
    ctx->pc = 0x80D41798u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41798u)) return;
    // 80D41798: lis     r3, -32556
    ctx->gpr[3] = ((u32)(s32)(-32556) << 16);

label_80D4179C:
    ctx->pc = 0x80D4179Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4179Cu)) return;
    // 80D4179C: addi    r0, r3, 5668
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(5668);

label_80D417A0:
    ctx->pc = 0x80D417A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D417A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D417A0: stw     r0, 24(r31)
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
label_80D417A4:
    ctx->pc = 0x80D417A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D417A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D417A4: lwz     r30, 32(r31)
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
label_80D417A8:
    ctx->pc = 0x80D417A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D417A8u)) return;
    // 80D417A8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80D417AC:
    ctx->pc = 0x80D417ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D417ACu)) return;
    // 80D417AC: bl      0x80462174
    {
            ctx->lr = 0x80D417B0u;
            ctx->pc = 0x80462174u;
            return;
    }

label_80D417B0:
    ctx->pc = 0x80D417B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 23u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D417B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 23u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80D417B0: stfs     f29, 32(r30)
    if (!ppc_fp_available_inline(ctx, 0x80D417B0u)) return;
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
label_80D417B4:
    ctx->pc = 0x80D417B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D417B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80D417B4: stfs     f30, 36(r30)
    if (!ppc_fp_available_inline(ctx, 0x80D417B4u)) return;
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
label_80D417B8:
    ctx->pc = 0x80D417B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D417B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80D417B8: stfs     f31, 40(r30)
    if (!ppc_fp_available_inline(ctx, 0x80D417B8u)) return;
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
label_80D417BC:
    ctx->pc = 0x80D417BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D417BCu)) return;
    // 80D417BC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D417C0:
    ctx->pc = 0x80D417C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D417C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80D417C0: stw     r0, 20(r30)
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
label_80D417C4:
    ctx->pc = 0x80D417C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D417C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80D417C4: stw     r0, 24(r30)
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
label_80D417C8:
    ctx->pc = 0x80D417C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D417C8u)) return;
    // 80D417C8: lis     r3, -27321
    ctx->gpr[3] = ((u32)(s32)(-27321) << 16);

label_80D417CC:
    ctx->pc = 0x80D417CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D417CCu)) return;
    // 80D417CC: addi    r3, r3, 15660
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(15660);

label_80D417D0:
    ctx->pc = 0x80D417D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D417D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80D417D0: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D417D0u)) return;
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
label_80D417D4:
    ctx->pc = 0x80D417D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D417D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80D417D4: stfs     f0, 44(r30)
    if (!ppc_fp_available_inline(ctx, 0x80D417D4u)) return;
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
label_80D417D8:
    ctx->pc = 0x80D417D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D417D8u)) return;
    // 80D417D8: lis     r3, -27321
    ctx->gpr[3] = ((u32)(s32)(-27321) << 16);

label_80D417DC:
    ctx->pc = 0x80D417DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D417DCu)) return;
    // 80D417DC: addi    r3, r3, 15656
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(15656);

label_80D417E0:
    ctx->pc = 0x80D417E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D417E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D417E0: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D417E0u)) return;
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
label_80D417E4:
    ctx->pc = 0x80D417E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D417E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D417E4: stfs     f1, 48(r30)
    if (!ppc_fp_available_inline(ctx, 0x80D417E4u)) return;
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
label_80D417E8:
    ctx->pc = 0x80D417E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D417E8u)) return;
    // 80D417E8: lis     r3, -27321
    ctx->gpr[3] = ((u32)(s32)(-27321) << 16);

label_80D417EC:
    ctx->pc = 0x80D417ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D417ECu)) return;
    // 80D417EC: addi    r3, r3, 15664
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(15664);

label_80D417F0:
    ctx->pc = 0x80D417F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D417F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D417F0: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D417F0u)) return;
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
label_80D417F4:
    ctx->pc = 0x80D417F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D417F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D417F4: stfs     f0, 52(r30)
    if (!ppc_fp_available_inline(ctx, 0x80D417F4u)) return;
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
label_80D417F8:
    ctx->pc = 0x80D417F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D417F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D417F8: stfs     f1, 12(r30)
    if (!ppc_fp_available_inline(ctx, 0x80D417F8u)) return;
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
label_80D417FC:
    ctx->pc = 0x80D417FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D417FCu)) return;
    // 80D417FC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80D41800:
    ctx->pc = 0x80D41800u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41800u)) return;
    // 80D41800: addi    r4, r30, 16
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(16);

label_80D41804:
    ctx->pc = 0x80D41804u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41804u)) return;
    // 80D41804: addi    r5, r30, 32
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(32);

label_80D41808:
    ctx->pc = 0x80D41808u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41808u)) return;
    // 80D41808: bl      0x804C07B4
    {
            ctx->lr = 0x80D4180Cu;
            ctx->pc = 0x804C07B4u;
            return;
    }

label_80D4180C:
    ctx->pc = 0x80D4180Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D4180Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D4180C: stw     r3, 16(r30)
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
label_80D41810:
    ctx->pc = 0x80D41810u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 14u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D41810u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 14u : 1u;
    // 80D41810: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80D41814:
    ctx->pc = 0x80D41814u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41814u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80D41814: psq_l   f31, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D41814u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80D41814u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D41818:
    ctx->pc = 0x80D41818u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41818u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D41818: lfd     f31, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D41818u)) return;
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
label_80D4181C:
    ctx->pc = 0x80D4181Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4181Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D4181C: psq_l   f30, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D4181Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x80D4181Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D41820:
    ctx->pc = 0x80D41820u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41820u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D41820: lfd     f30, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D41820u)) return;
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
label_80D41824:
    ctx->pc = 0x80D41824u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41824u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D41824: psq_l   f29, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D41824u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x80D41824u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D41828:
    ctx->pc = 0x80D41828u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41828u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D41828: lfd     f29, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D41828u)) return;
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
label_80D4182C:
    ctx->pc = 0x80D4182Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4182Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D4182C: lwz     r31, 12(r1)
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
label_80D41830:
    ctx->pc = 0x80D41830u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41830u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D41830: lwz     r30, 8(r1)
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
label_80D41834:
    ctx->pc = 0x80D41834u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41834u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D41834: lwz     r0, 68(r1)
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
label_80D41838:
    ctx->pc = 0x80D41838u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D41838u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D41838: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D4183C:
    ctx->pc = 0x80D4183Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D4183Cu)) return;
    // 80D4183C: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_80D41840:
    ctx->pc = 0x80D41840u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D41840u)) return;
    // 80D41840: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D40860;
        }
    }

    ctx->pc = 0x80D41844u;
    return;
return_dispatch_80D40860:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80D408A8u: goto label_80D408A8;
    case 0x80D408ACu: goto label_80D408AC;
    case 0x80D408B0u: goto label_80D408B0;
    case 0x80D408B4u: goto label_80D408B4;
    case 0x80D408BCu: goto label_80D408BC;
    case 0x80D408C4u: goto label_80D408C4;
    case 0x80D408CCu: goto label_80D408CC;
    case 0x80D408D4u: goto label_80D408D4;
    case 0x80D408FCu: goto label_80D408FC;
    case 0x80D40904u: goto label_80D40904;
    case 0x80D40918u: goto label_80D40918;
    case 0x80D40920u: goto label_80D40920;
    case 0x80D40924u: goto label_80D40924;
    case 0x80D40928u: goto label_80D40928;
    case 0x80D40930u: goto label_80D40930;
    case 0x80D40960u: goto label_80D40960;
    case 0x80D40968u: goto label_80D40968;
    case 0x80D409B8u: goto label_80D409B8;
    case 0x80D409C0u: goto label_80D409C0;
    case 0x80D409E0u: goto label_80D409E0;
    case 0x80D40A00u: goto label_80D40A00;
    case 0x80D40A24u: goto label_80D40A24;
    case 0x80D40A38u: goto label_80D40A38;
    case 0x80D40A4Cu: goto label_80D40A4C;
    case 0x80D40A5Cu: goto label_80D40A5C;
    case 0x80D40A84u: goto label_80D40A84;
    case 0x80D40A8Cu: goto label_80D40A8C;
    case 0x80D40AB4u: goto label_80D40AB4;
    case 0x80D40ABCu: goto label_80D40ABC;
    case 0x80D40AE4u: goto label_80D40AE4;
    case 0x80D40AECu: goto label_80D40AEC;
    case 0x80D40B14u: goto label_80D40B14;
    case 0x80D40B1Cu: goto label_80D40B1C;
    case 0x80D40B24u: goto label_80D40B24;
    case 0x80D40B2Cu: goto label_80D40B2C;
    case 0x80D40B54u: goto label_80D40B54;
    case 0x80D40B5Cu: goto label_80D40B5C;
    case 0x80D40B84u: goto label_80D40B84;
    case 0x80D40BACu: goto label_80D40BAC;
    case 0x80D40BB4u: goto label_80D40BB4;
    case 0x80D40BC4u: goto label_80D40BC4;
    case 0x80D40BD4u: goto label_80D40BD4;
    case 0x80D40BECu: goto label_80D40BEC;
    case 0x80D40C04u: goto label_80D40C04;
    case 0x80D40C0Cu: goto label_80D40C0C;
    case 0x80D40C3Cu: goto label_80D40C3C;
    case 0x80D40C44u: goto label_80D40C44;
    case 0x80D40C90u: goto label_80D40C90;
    case 0x80D40CB8u: goto label_80D40CB8;
    case 0x80D40CC0u: goto label_80D40CC0;
    case 0x80D40CC8u: goto label_80D40CC8;
    case 0x80D40CE8u: goto label_80D40CE8;
    case 0x80D40D08u: goto label_80D40D08;
    case 0x80D40D2Cu: goto label_80D40D2C;
    case 0x80D40D40u: goto label_80D40D40;
    case 0x80D40D54u: goto label_80D40D54;
    case 0x80D40D64u: goto label_80D40D64;
    case 0x80D40D8Cu: goto label_80D40D8C;
    case 0x80D40D94u: goto label_80D40D94;
    case 0x80D40D98u: goto label_80D40D98;
    case 0x80D40D9Cu: goto label_80D40D9C;
    case 0x80D40DCCu: goto label_80D40DCC;
    case 0x80D40DE4u: goto label_80D40DE4;
    case 0x80D40E14u: goto label_80D40E14;
    case 0x80D40E30u: goto label_80D40E30;
    case 0x80D40E38u: goto label_80D40E38;
    case 0x80D40E48u: goto label_80D40E48;
    case 0x80D40E70u: goto label_80D40E70;
    case 0x80D40E78u: goto label_80D40E78;
    case 0x80D40EA0u: goto label_80D40EA0;
    case 0x80D40EA4u: goto label_80D40EA4;
    case 0x80D40EA8u: goto label_80D40EA8;
    case 0x80D40EB0u: goto label_80D40EB0;
    case 0x80D40EE4u: goto label_80D40EE4;
    case 0x80D40F00u: goto label_80D40F00;
    case 0x80D40F08u: goto label_80D40F08;
    case 0x80D40F0Cu: goto label_80D40F0C;
    case 0x80D40F1Cu: goto label_80D40F1C;
    case 0x80D40F2Cu: goto label_80D40F2C;
    case 0x80D40F34u: goto label_80D40F34;
    case 0x80D40F38u: goto label_80D40F38;
    case 0x80D40F3Cu: goto label_80D40F3C;
    case 0x80D40F40u: goto label_80D40F40;
    case 0x80D40F44u: goto label_80D40F44;
    case 0x80D40F5Cu: goto label_80D40F5C;
    case 0x80D40F84u: goto label_80D40F84;
    case 0x80D40F98u: goto label_80D40F98;
    case 0x80D40F9Cu: goto label_80D40F9C;
    case 0x80D40FA0u: goto label_80D40FA0;
    case 0x80D40FA4u: goto label_80D40FA4;
    case 0x80D40FDCu: goto label_80D40FDC;
    case 0x80D4103Cu: goto label_80D4103C;
    case 0x80D4107Cu: goto label_80D4107C;
    case 0x80D410BCu: goto label_80D410BC;
    case 0x80D41118u: goto label_80D41118;
    case 0x80D4113Cu: goto label_80D4113C;
    case 0x80D411D8u: goto label_80D411D8;
    case 0x80D41228u: goto label_80D41228;
    case 0x80D41278u: goto label_80D41278;
    case 0x80D412C4u: goto label_80D412C4;
    case 0x80D41348u: goto label_80D41348;
    case 0x80D4136Cu: goto label_80D4136C;
    case 0x80D413E8u: goto label_80D413E8;
    case 0x80D41450u: goto label_80D41450;
    case 0x80D414B8u: goto label_80D414B8;
    case 0x80D41508u: goto label_80D41508;
    case 0x80D41558u: goto label_80D41558;
    case 0x80D4159Cu: goto label_80D4159C;
    case 0x80D415C4u: goto label_80D415C4;
    case 0x80D415D0u: goto label_80D415D0;
    case 0x80D415DCu: goto label_80D415DC;
    case 0x80D415E8u: goto label_80D415E8;
    case 0x80D41634u: goto label_80D41634;
    case 0x80D4167Cu: goto label_80D4167C;
    case 0x80D416E8u: goto label_80D416E8;
    case 0x80D41704u: goto label_80D41704;
    case 0x80D41714u: goto label_80D41714;
    case 0x80D41774u: goto label_80D41774;
    case 0x80D417B0u: goto label_80D417B0;
    case 0x80D4180Cu: goto label_80D4180C;
    default: return;
    }
}

