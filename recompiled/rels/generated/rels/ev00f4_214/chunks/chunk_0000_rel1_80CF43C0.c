// DolRecomp output
#include "../generated.h"

void func_80CF43C0(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80CF43C0[1110] = {
        &&label_80CF43C0,
        &&label_80CF43C4,
        &&label_80CF43C8,
        &&label_80CF43CC,
        &&label_80CF43D0,
        &&label_80CF43D4,
        &&label_80CF43D8,
        &&label_80CF43DC,
        &&label_80CF43E0,
        &&label_80CF43E4,
        &&label_80CF43E8,
        &&label_80CF43EC,
        &&label_80CF43F0,
        &&label_80CF43F4,
        &&label_80CF43F8,
        &&label_80CF43FC,
        &&label_80CF4400,
        &&label_80CF4404,
        &&label_80CF4408,
        &&label_80CF440C,
        &&label_80CF4410,
        &&label_80CF4414,
        &&label_80CF4418,
        &&label_80CF441C,
        &&label_80CF4420,
        &&label_80CF4424,
        &&label_80CF4428,
        &&label_80CF442C,
        &&label_80CF4430,
        &&label_80CF4434,
        &&label_80CF4438,
        &&label_80CF443C,
        &&label_80CF4440,
        &&label_80CF4444,
        &&label_80CF4448,
        &&label_80CF444C,
        &&label_80CF4450,
        &&label_80CF4454,
        &&label_80CF4458,
        &&label_80CF445C,
        &&label_80CF4460,
        &&label_80CF4464,
        &&label_80CF4468,
        &&label_80CF446C,
        &&label_80CF4470,
        &&label_80CF4474,
        &&label_80CF4478,
        &&label_80CF447C,
        &&label_80CF4480,
        &&label_80CF4484,
        &&label_80CF4488,
        &&label_80CF448C,
        &&label_80CF4490,
        &&label_80CF4494,
        &&label_80CF4498,
        &&label_80CF449C,
        &&label_80CF44A0,
        &&label_80CF44A4,
        &&label_80CF44A8,
        &&label_80CF44AC,
        &&label_80CF44B0,
        &&label_80CF44B4,
        &&label_80CF44B8,
        &&label_80CF44BC,
        &&label_80CF44C0,
        &&label_80CF44C4,
        &&label_80CF44C8,
        &&label_80CF44CC,
        &&label_80CF44D0,
        &&label_80CF44D4,
        &&label_80CF44D8,
        &&label_80CF44DC,
        &&label_80CF44E0,
        &&label_80CF44E4,
        &&label_80CF44E8,
        &&label_80CF44EC,
        &&label_80CF44F0,
        &&label_80CF44F4,
        &&label_80CF44F8,
        &&label_80CF44FC,
        &&label_80CF4500,
        &&label_80CF4504,
        &&label_80CF4508,
        &&label_80CF450C,
        &&label_80CF4510,
        &&label_80CF4514,
        &&label_80CF4518,
        &&label_80CF451C,
        &&label_80CF4520,
        &&label_80CF4524,
        &&label_80CF4528,
        &&label_80CF452C,
        &&label_80CF4530,
        &&label_80CF4534,
        &&label_80CF4538,
        &&label_80CF453C,
        &&label_80CF4540,
        &&label_80CF4544,
        &&label_80CF4548,
        &&label_80CF454C,
        &&label_80CF4550,
        &&label_80CF4554,
        &&label_80CF4558,
        &&label_80CF455C,
        &&label_80CF4560,
        &&label_80CF4564,
        &&label_80CF4568,
        &&label_80CF456C,
        &&label_80CF4570,
        &&label_80CF4574,
        &&label_80CF4578,
        &&label_80CF457C,
        &&label_80CF4580,
        &&label_80CF4584,
        &&label_80CF4588,
        &&label_80CF458C,
        &&label_80CF4590,
        &&label_80CF4594,
        &&label_80CF4598,
        &&label_80CF459C,
        &&label_80CF45A0,
        &&label_80CF45A4,
        &&label_80CF45A8,
        &&label_80CF45AC,
        &&label_80CF45B0,
        &&label_80CF45B4,
        &&label_80CF45B8,
        &&label_80CF45BC,
        &&label_80CF45C0,
        &&label_80CF45C4,
        &&label_80CF45C8,
        &&label_80CF45CC,
        &&label_80CF45D0,
        &&label_80CF45D4,
        &&label_80CF45D8,
        &&label_80CF45DC,
        &&label_80CF45E0,
        &&label_80CF45E4,
        &&label_80CF45E8,
        &&label_80CF45EC,
        &&label_80CF45F0,
        &&label_80CF45F4,
        &&label_80CF45F8,
        &&label_80CF45FC,
        &&label_80CF4600,
        &&label_80CF4604,
        &&label_80CF4608,
        &&label_80CF460C,
        &&label_80CF4610,
        &&label_80CF4614,
        &&label_80CF4618,
        &&label_80CF461C,
        &&label_80CF4620,
        &&label_80CF4624,
        &&label_80CF4628,
        &&label_80CF462C,
        &&label_80CF4630,
        &&label_80CF4634,
        &&label_80CF4638,
        &&label_80CF463C,
        &&label_80CF4640,
        &&label_80CF4644,
        &&label_80CF4648,
        &&label_80CF464C,
        &&label_80CF4650,
        &&label_80CF4654,
        &&label_80CF4658,
        &&label_80CF465C,
        &&label_80CF4660,
        &&label_80CF4664,
        &&label_80CF4668,
        &&label_80CF466C,
        &&label_80CF4670,
        &&label_80CF4674,
        &&label_80CF4678,
        &&label_80CF467C,
        &&label_80CF4680,
        &&label_80CF4684,
        &&label_80CF4688,
        &&label_80CF468C,
        &&label_80CF4690,
        &&label_80CF4694,
        &&label_80CF4698,
        &&label_80CF469C,
        &&label_80CF46A0,
        &&label_80CF46A4,
        &&label_80CF46A8,
        &&label_80CF46AC,
        &&label_80CF46B0,
        &&label_80CF46B4,
        &&label_80CF46B8,
        &&label_80CF46BC,
        &&label_80CF46C0,
        &&label_80CF46C4,
        &&label_80CF46C8,
        &&label_80CF46CC,
        &&label_80CF46D0,
        &&label_80CF46D4,
        &&label_80CF46D8,
        &&label_80CF46DC,
        &&label_80CF46E0,
        &&label_80CF46E4,
        &&label_80CF46E8,
        &&label_80CF46EC,
        &&label_80CF46F0,
        &&label_80CF46F4,
        &&label_80CF46F8,
        &&label_80CF46FC,
        &&label_80CF4700,
        &&label_80CF4704,
        &&label_80CF4708,
        &&label_80CF470C,
        &&label_80CF4710,
        &&label_80CF4714,
        &&label_80CF4718,
        &&label_80CF471C,
        &&label_80CF4720,
        &&label_80CF4724,
        &&label_80CF4728,
        &&label_80CF472C,
        &&label_80CF4730,
        &&label_80CF4734,
        &&label_80CF4738,
        &&label_80CF473C,
        &&label_80CF4740,
        &&label_80CF4744,
        &&label_80CF4748,
        &&label_80CF474C,
        &&label_80CF4750,
        &&label_80CF4754,
        &&label_80CF4758,
        &&label_80CF475C,
        &&label_80CF4760,
        &&label_80CF4764,
        &&label_80CF4768,
        &&label_80CF476C,
        &&label_80CF4770,
        &&label_80CF4774,
        &&label_80CF4778,
        &&label_80CF477C,
        &&label_80CF4780,
        &&label_80CF4784,
        &&label_80CF4788,
        &&label_80CF478C,
        &&label_80CF4790,
        &&label_80CF4794,
        &&label_80CF4798,
        &&label_80CF479C,
        &&label_80CF47A0,
        &&label_80CF47A4,
        &&label_80CF47A8,
        &&label_80CF47AC,
        &&label_80CF47B0,
        &&label_80CF47B4,
        &&label_80CF47B8,
        &&label_80CF47BC,
        &&label_80CF47C0,
        &&label_80CF47C4,
        &&label_80CF47C8,
        &&label_80CF47CC,
        &&label_80CF47D0,
        &&label_80CF47D4,
        &&label_80CF47D8,
        &&label_80CF47DC,
        &&label_80CF47E0,
        &&label_80CF47E4,
        &&label_80CF47E8,
        &&label_80CF47EC,
        &&label_80CF47F0,
        &&label_80CF47F4,
        &&label_80CF47F8,
        &&label_80CF47FC,
        &&label_80CF4800,
        &&label_80CF4804,
        &&label_80CF4808,
        &&label_80CF480C,
        &&label_80CF4810,
        &&label_80CF4814,
        &&label_80CF4818,
        &&label_80CF481C,
        &&label_80CF4820,
        &&label_80CF4824,
        &&label_80CF4828,
        &&label_80CF482C,
        &&label_80CF4830,
        &&label_80CF4834,
        &&label_80CF4838,
        &&label_80CF483C,
        &&label_80CF4840,
        &&label_80CF4844,
        &&label_80CF4848,
        &&label_80CF484C,
        &&label_80CF4850,
        &&label_80CF4854,
        &&label_80CF4858,
        &&label_80CF485C,
        &&label_80CF4860,
        &&label_80CF4864,
        &&label_80CF4868,
        &&label_80CF486C,
        &&label_80CF4870,
        &&label_80CF4874,
        &&label_80CF4878,
        &&label_80CF487C,
        &&label_80CF4880,
        &&label_80CF4884,
        &&label_80CF4888,
        &&label_80CF488C,
        &&label_80CF4890,
        &&label_80CF4894,
        &&label_80CF4898,
        &&label_80CF489C,
        &&label_80CF48A0,
        &&label_80CF48A4,
        &&label_80CF48A8,
        &&label_80CF48AC,
        &&label_80CF48B0,
        &&label_80CF48B4,
        &&label_80CF48B8,
        &&label_80CF48BC,
        &&label_80CF48C0,
        &&label_80CF48C4,
        &&label_80CF48C8,
        &&label_80CF48CC,
        &&label_80CF48D0,
        &&label_80CF48D4,
        &&label_80CF48D8,
        &&label_80CF48DC,
        &&label_80CF48E0,
        &&label_80CF48E4,
        &&label_80CF48E8,
        &&label_80CF48EC,
        &&label_80CF48F0,
        &&label_80CF48F4,
        &&label_80CF48F8,
        &&label_80CF48FC,
        &&label_80CF4900,
        &&label_80CF4904,
        &&label_80CF4908,
        &&label_80CF490C,
        &&label_80CF4910,
        &&label_80CF4914,
        &&label_80CF4918,
        &&label_80CF491C,
        &&label_80CF4920,
        &&label_80CF4924,
        &&label_80CF4928,
        &&label_80CF492C,
        &&label_80CF4930,
        &&label_80CF4934,
        &&label_80CF4938,
        &&label_80CF493C,
        &&label_80CF4940,
        &&label_80CF4944,
        &&label_80CF4948,
        &&label_80CF494C,
        &&label_80CF4950,
        &&label_80CF4954,
        &&label_80CF4958,
        &&label_80CF495C,
        &&label_80CF4960,
        &&label_80CF4964,
        &&label_80CF4968,
        &&label_80CF496C,
        &&label_80CF4970,
        &&label_80CF4974,
        &&label_80CF4978,
        &&label_80CF497C,
        &&label_80CF4980,
        &&label_80CF4984,
        &&label_80CF4988,
        &&label_80CF498C,
        &&label_80CF4990,
        &&label_80CF4994,
        &&label_80CF4998,
        &&label_80CF499C,
        &&label_80CF49A0,
        &&label_80CF49A4,
        &&label_80CF49A8,
        &&label_80CF49AC,
        &&label_80CF49B0,
        &&label_80CF49B4,
        &&label_80CF49B8,
        &&label_80CF49BC,
        &&label_80CF49C0,
        &&label_80CF49C4,
        &&label_80CF49C8,
        &&label_80CF49CC,
        &&label_80CF49D0,
        &&label_80CF49D4,
        &&label_80CF49D8,
        &&label_80CF49DC,
        &&label_80CF49E0,
        &&label_80CF49E4,
        &&label_80CF49E8,
        &&label_80CF49EC,
        &&label_80CF49F0,
        &&label_80CF49F4,
        &&label_80CF49F8,
        &&label_80CF49FC,
        &&label_80CF4A00,
        &&label_80CF4A04,
        &&label_80CF4A08,
        &&label_80CF4A0C,
        &&label_80CF4A10,
        &&label_80CF4A14,
        &&label_80CF4A18,
        &&label_80CF4A1C,
        &&label_80CF4A20,
        &&label_80CF4A24,
        &&label_80CF4A28,
        &&label_80CF4A2C,
        &&label_80CF4A30,
        &&label_80CF4A34,
        &&label_80CF4A38,
        &&label_80CF4A3C,
        &&label_80CF4A40,
        &&label_80CF4A44,
        &&label_80CF4A48,
        &&label_80CF4A4C,
        &&label_80CF4A50,
        &&label_80CF4A54,
        &&label_80CF4A58,
        &&label_80CF4A5C,
        &&label_80CF4A60,
        &&label_80CF4A64,
        &&label_80CF4A68,
        &&label_80CF4A6C,
        &&label_80CF4A70,
        &&label_80CF4A74,
        &&label_80CF4A78,
        &&label_80CF4A7C,
        &&label_80CF4A80,
        &&label_80CF4A84,
        &&label_80CF4A88,
        &&label_80CF4A8C,
        &&label_80CF4A90,
        &&label_80CF4A94,
        &&label_80CF4A98,
        &&label_80CF4A9C,
        &&label_80CF4AA0,
        &&label_80CF4AA4,
        &&label_80CF4AA8,
        &&label_80CF4AAC,
        &&label_80CF4AB0,
        &&label_80CF4AB4,
        &&label_80CF4AB8,
        &&label_80CF4ABC,
        &&label_80CF4AC0,
        &&label_80CF4AC4,
        &&label_80CF4AC8,
        &&label_80CF4ACC,
        &&label_80CF4AD0,
        &&label_80CF4AD4,
        &&label_80CF4AD8,
        &&label_80CF4ADC,
        &&label_80CF4AE0,
        &&label_80CF4AE4,
        &&label_80CF4AE8,
        &&label_80CF4AEC,
        &&label_80CF4AF0,
        &&label_80CF4AF4,
        &&label_80CF4AF8,
        &&label_80CF4AFC,
        &&label_80CF4B00,
        &&label_80CF4B04,
        &&label_80CF4B08,
        &&label_80CF4B0C,
        &&label_80CF4B10,
        &&label_80CF4B14,
        &&label_80CF4B18,
        &&label_80CF4B1C,
        &&label_80CF4B20,
        &&label_80CF4B24,
        &&label_80CF4B28,
        &&label_80CF4B2C,
        &&label_80CF4B30,
        &&label_80CF4B34,
        &&label_80CF4B38,
        &&label_80CF4B3C,
        &&label_80CF4B40,
        &&label_80CF4B44,
        &&label_80CF4B48,
        &&label_80CF4B4C,
        &&label_80CF4B50,
        &&label_80CF4B54,
        &&label_80CF4B58,
        &&label_80CF4B5C,
        &&label_80CF4B60,
        &&label_80CF4B64,
        &&label_80CF4B68,
        &&label_80CF4B6C,
        &&label_80CF4B70,
        &&label_80CF4B74,
        &&label_80CF4B78,
        &&label_80CF4B7C,
        &&label_80CF4B80,
        &&label_80CF4B84,
        &&label_80CF4B88,
        &&label_80CF4B8C,
        &&label_80CF4B90,
        &&label_80CF4B94,
        &&label_80CF4B98,
        &&label_80CF4B9C,
        &&label_80CF4BA0,
        &&label_80CF4BA4,
        &&label_80CF4BA8,
        &&label_80CF4BAC,
        &&label_80CF4BB0,
        &&label_80CF4BB4,
        &&label_80CF4BB8,
        &&label_80CF4BBC,
        &&label_80CF4BC0,
        &&label_80CF4BC4,
        &&label_80CF4BC8,
        &&label_80CF4BCC,
        &&label_80CF4BD0,
        &&label_80CF4BD4,
        &&label_80CF4BD8,
        &&label_80CF4BDC,
        &&label_80CF4BE0,
        &&label_80CF4BE4,
        &&label_80CF4BE8,
        &&label_80CF4BEC,
        &&label_80CF4BF0,
        &&label_80CF4BF4,
        &&label_80CF4BF8,
        &&label_80CF4BFC,
        &&label_80CF4C00,
        &&label_80CF4C04,
        &&label_80CF4C08,
        &&label_80CF4C0C,
        &&label_80CF4C10,
        &&label_80CF4C14,
        &&label_80CF4C18,
        &&label_80CF4C1C,
        &&label_80CF4C20,
        &&label_80CF4C24,
        &&label_80CF4C28,
        &&label_80CF4C2C,
        &&label_80CF4C30,
        &&label_80CF4C34,
        &&label_80CF4C38,
        &&label_80CF4C3C,
        &&label_80CF4C40,
        &&label_80CF4C44,
        &&label_80CF4C48,
        &&label_80CF4C4C,
        &&label_80CF4C50,
        &&label_80CF4C54,
        &&label_80CF4C58,
        &&label_80CF4C5C,
        &&label_80CF4C60,
        &&label_80CF4C64,
        &&label_80CF4C68,
        &&label_80CF4C6C,
        &&label_80CF4C70,
        &&label_80CF4C74,
        &&label_80CF4C78,
        &&label_80CF4C7C,
        &&label_80CF4C80,
        &&label_80CF4C84,
        &&label_80CF4C88,
        &&label_80CF4C8C,
        &&label_80CF4C90,
        &&label_80CF4C94,
        &&label_80CF4C98,
        &&label_80CF4C9C,
        &&label_80CF4CA0,
        &&label_80CF4CA4,
        &&label_80CF4CA8,
        &&label_80CF4CAC,
        &&label_80CF4CB0,
        &&label_80CF4CB4,
        &&label_80CF4CB8,
        &&label_80CF4CBC,
        &&label_80CF4CC0,
        &&label_80CF4CC4,
        &&label_80CF4CC8,
        &&label_80CF4CCC,
        &&label_80CF4CD0,
        &&label_80CF4CD4,
        &&label_80CF4CD8,
        &&label_80CF4CDC,
        &&label_80CF4CE0,
        &&label_80CF4CE4,
        &&label_80CF4CE8,
        &&label_80CF4CEC,
        &&label_80CF4CF0,
        &&label_80CF4CF4,
        &&label_80CF4CF8,
        &&label_80CF4CFC,
        &&label_80CF4D00,
        &&label_80CF4D04,
        &&label_80CF4D08,
        &&label_80CF4D0C,
        &&label_80CF4D10,
        &&label_80CF4D14,
        &&label_80CF4D18,
        &&label_80CF4D1C,
        &&label_80CF4D20,
        &&label_80CF4D24,
        &&label_80CF4D28,
        &&label_80CF4D2C,
        &&label_80CF4D30,
        &&label_80CF4D34,
        &&label_80CF4D38,
        &&label_80CF4D3C,
        &&label_80CF4D40,
        &&label_80CF4D44,
        &&label_80CF4D48,
        &&label_80CF4D4C,
        &&label_80CF4D50,
        &&label_80CF4D54,
        &&label_80CF4D58,
        &&label_80CF4D5C,
        &&label_80CF4D60,
        &&label_80CF4D64,
        &&label_80CF4D68,
        &&label_80CF4D6C,
        &&label_80CF4D70,
        &&label_80CF4D74,
        &&label_80CF4D78,
        &&label_80CF4D7C,
        &&label_80CF4D80,
        &&label_80CF4D84,
        &&label_80CF4D88,
        &&label_80CF4D8C,
        &&label_80CF4D90,
        &&label_80CF4D94,
        &&label_80CF4D98,
        &&label_80CF4D9C,
        &&label_80CF4DA0,
        &&label_80CF4DA4,
        &&label_80CF4DA8,
        &&label_80CF4DAC,
        &&label_80CF4DB0,
        &&label_80CF4DB4,
        &&label_80CF4DB8,
        &&label_80CF4DBC,
        &&label_80CF4DC0,
        &&label_80CF4DC4,
        &&label_80CF4DC8,
        &&label_80CF4DCC,
        &&label_80CF4DD0,
        &&label_80CF4DD4,
        &&label_80CF4DD8,
        &&label_80CF4DDC,
        &&label_80CF4DE0,
        &&label_80CF4DE4,
        &&label_80CF4DE8,
        &&label_80CF4DEC,
        &&label_80CF4DF0,
        &&label_80CF4DF4,
        &&label_80CF4DF8,
        &&label_80CF4DFC,
        &&label_80CF4E00,
        &&label_80CF4E04,
        &&label_80CF4E08,
        &&label_80CF4E0C,
        &&label_80CF4E10,
        &&label_80CF4E14,
        &&label_80CF4E18,
        &&label_80CF4E1C,
        &&label_80CF4E20,
        &&label_80CF4E24,
        &&label_80CF4E28,
        &&label_80CF4E2C,
        &&label_80CF4E30,
        &&label_80CF4E34,
        &&label_80CF4E38,
        &&label_80CF4E3C,
        &&label_80CF4E40,
        &&label_80CF4E44,
        &&label_80CF4E48,
        &&label_80CF4E4C,
        &&label_80CF4E50,
        &&label_80CF4E54,
        &&label_80CF4E58,
        &&label_80CF4E5C,
        &&label_80CF4E60,
        &&label_80CF4E64,
        &&label_80CF4E68,
        &&label_80CF4E6C,
        &&label_80CF4E70,
        &&label_80CF4E74,
        &&label_80CF4E78,
        &&label_80CF4E7C,
        &&label_80CF4E80,
        &&label_80CF4E84,
        &&label_80CF4E88,
        &&label_80CF4E8C,
        &&label_80CF4E90,
        &&label_80CF4E94,
        &&label_80CF4E98,
        &&label_80CF4E9C,
        &&label_80CF4EA0,
        &&label_80CF4EA4,
        &&label_80CF4EA8,
        &&label_80CF4EAC,
        &&label_80CF4EB0,
        &&label_80CF4EB4,
        &&label_80CF4EB8,
        &&label_80CF4EBC,
        &&label_80CF4EC0,
        &&label_80CF4EC4,
        &&label_80CF4EC8,
        &&label_80CF4ECC,
        &&label_80CF4ED0,
        &&label_80CF4ED4,
        &&label_80CF4ED8,
        &&label_80CF4EDC,
        &&label_80CF4EE0,
        &&label_80CF4EE4,
        &&label_80CF4EE8,
        &&label_80CF4EEC,
        &&label_80CF4EF0,
        &&label_80CF4EF4,
        &&label_80CF4EF8,
        &&label_80CF4EFC,
        &&label_80CF4F00,
        &&label_80CF4F04,
        &&label_80CF4F08,
        &&label_80CF4F0C,
        &&label_80CF4F10,
        &&label_80CF4F14,
        &&label_80CF4F18,
        &&label_80CF4F1C,
        &&label_80CF4F20,
        &&label_80CF4F24,
        &&label_80CF4F28,
        &&label_80CF4F2C,
        &&label_80CF4F30,
        &&label_80CF4F34,
        &&label_80CF4F38,
        &&label_80CF4F3C,
        &&label_80CF4F40,
        &&label_80CF4F44,
        &&label_80CF4F48,
        &&label_80CF4F4C,
        &&label_80CF4F50,
        &&label_80CF4F54,
        &&label_80CF4F58,
        &&label_80CF4F5C,
        &&label_80CF4F60,
        &&label_80CF4F64,
        &&label_80CF4F68,
        &&label_80CF4F6C,
        &&label_80CF4F70,
        &&label_80CF4F74,
        &&label_80CF4F78,
        &&label_80CF4F7C,
        &&label_80CF4F80,
        &&label_80CF4F84,
        &&label_80CF4F88,
        &&label_80CF4F8C,
        &&label_80CF4F90,
        &&label_80CF4F94,
        &&label_80CF4F98,
        &&label_80CF4F9C,
        &&label_80CF4FA0,
        &&label_80CF4FA4,
        &&label_80CF4FA8,
        &&label_80CF4FAC,
        &&label_80CF4FB0,
        &&label_80CF4FB4,
        &&label_80CF4FB8,
        &&label_80CF4FBC,
        &&label_80CF4FC0,
        &&label_80CF4FC4,
        &&label_80CF4FC8,
        &&label_80CF4FCC,
        &&label_80CF4FD0,
        &&label_80CF4FD4,
        &&label_80CF4FD8,
        &&label_80CF4FDC,
        &&label_80CF4FE0,
        &&label_80CF4FE4,
        &&label_80CF4FE8,
        &&label_80CF4FEC,
        &&label_80CF4FF0,
        &&label_80CF4FF4,
        &&label_80CF4FF8,
        &&label_80CF4FFC,
        &&label_80CF5000,
        &&label_80CF5004,
        &&label_80CF5008,
        &&label_80CF500C,
        &&label_80CF5010,
        &&label_80CF5014,
        &&label_80CF5018,
        &&label_80CF501C,
        &&label_80CF5020,
        &&label_80CF5024,
        &&label_80CF5028,
        &&label_80CF502C,
        &&label_80CF5030,
        &&label_80CF5034,
        &&label_80CF5038,
        &&label_80CF503C,
        &&label_80CF5040,
        &&label_80CF5044,
        &&label_80CF5048,
        &&label_80CF504C,
        &&label_80CF5050,
        &&label_80CF5054,
        &&label_80CF5058,
        &&label_80CF505C,
        &&label_80CF5060,
        &&label_80CF5064,
        &&label_80CF5068,
        &&label_80CF506C,
        &&label_80CF5070,
        &&label_80CF5074,
        &&label_80CF5078,
        &&label_80CF507C,
        &&label_80CF5080,
        &&label_80CF5084,
        &&label_80CF5088,
        &&label_80CF508C,
        &&label_80CF5090,
        &&label_80CF5094,
        &&label_80CF5098,
        &&label_80CF509C,
        &&label_80CF50A0,
        &&label_80CF50A4,
        &&label_80CF50A8,
        &&label_80CF50AC,
        &&label_80CF50B0,
        &&label_80CF50B4,
        &&label_80CF50B8,
        &&label_80CF50BC,
        &&label_80CF50C0,
        &&label_80CF50C4,
        &&label_80CF50C8,
        &&label_80CF50CC,
        &&label_80CF50D0,
        &&label_80CF50D4,
        &&label_80CF50D8,
        &&label_80CF50DC,
        &&label_80CF50E0,
        &&label_80CF50E4,
        &&label_80CF50E8,
        &&label_80CF50EC,
        &&label_80CF50F0,
        &&label_80CF50F4,
        &&label_80CF50F8,
        &&label_80CF50FC,
        &&label_80CF5100,
        &&label_80CF5104,
        &&label_80CF5108,
        &&label_80CF510C,
        &&label_80CF5110,
        &&label_80CF5114,
        &&label_80CF5118,
        &&label_80CF511C,
        &&label_80CF5120,
        &&label_80CF5124,
        &&label_80CF5128,
        &&label_80CF512C,
        &&label_80CF5130,
        &&label_80CF5134,
        &&label_80CF5138,
        &&label_80CF513C,
        &&label_80CF5140,
        &&label_80CF5144,
        &&label_80CF5148,
        &&label_80CF514C,
        &&label_80CF5150,
        &&label_80CF5154,
        &&label_80CF5158,
        &&label_80CF515C,
        &&label_80CF5160,
        &&label_80CF5164,
        &&label_80CF5168,
        &&label_80CF516C,
        &&label_80CF5170,
        &&label_80CF5174,
        &&label_80CF5178,
        &&label_80CF517C,
        &&label_80CF5180,
        &&label_80CF5184,
        &&label_80CF5188,
        &&label_80CF518C,
        &&label_80CF5190,
        &&label_80CF5194,
        &&label_80CF5198,
        &&label_80CF519C,
        &&label_80CF51A0,
        &&label_80CF51A4,
        &&label_80CF51A8,
        &&label_80CF51AC,
        &&label_80CF51B0,
        &&label_80CF51B4,
        &&label_80CF51B8,
        &&label_80CF51BC,
        &&label_80CF51C0,
        &&label_80CF51C4,
        &&label_80CF51C8,
        &&label_80CF51CC,
        &&label_80CF51D0,
        &&label_80CF51D4,
        &&label_80CF51D8,
        &&label_80CF51DC,
        &&label_80CF51E0,
        &&label_80CF51E4,
        &&label_80CF51E8,
        &&label_80CF51EC,
        &&label_80CF51F0,
        &&label_80CF51F4,
        &&label_80CF51F8,
        &&label_80CF51FC,
        &&label_80CF5200,
        &&label_80CF5204,
        &&label_80CF5208,
        &&label_80CF520C,
        &&label_80CF5210,
        &&label_80CF5214,
        &&label_80CF5218,
        &&label_80CF521C,
        &&label_80CF5220,
        &&label_80CF5224,
        &&label_80CF5228,
        &&label_80CF522C,
        &&label_80CF5230,
        &&label_80CF5234,
        &&label_80CF5238,
        &&label_80CF523C,
        &&label_80CF5240,
        &&label_80CF5244,
        &&label_80CF5248,
        &&label_80CF524C,
        &&label_80CF5250,
        &&label_80CF5254,
        &&label_80CF5258,
        &&label_80CF525C,
        &&label_80CF5260,
        &&label_80CF5264,
        &&label_80CF5268,
        &&label_80CF526C,
        &&label_80CF5270,
        &&label_80CF5274,
        &&label_80CF5278,
        &&label_80CF527C,
        &&label_80CF5280,
        &&label_80CF5284,
        &&label_80CF5288,
        &&label_80CF528C,
        &&label_80CF5290,
        &&label_80CF5294,
        &&label_80CF5298,
        &&label_80CF529C,
        &&label_80CF52A0,
        &&label_80CF52A4,
        &&label_80CF52A8,
        &&label_80CF52AC,
        &&label_80CF52B0,
        &&label_80CF52B4,
        &&label_80CF52B8,
        &&label_80CF52BC,
        &&label_80CF52C0,
        &&label_80CF52C4,
        &&label_80CF52C8,
        &&label_80CF52CC,
        &&label_80CF52D0,
        &&label_80CF52D4,
        &&label_80CF52D8,
        &&label_80CF52DC,
        &&label_80CF52E0,
        &&label_80CF52E4,
        &&label_80CF52E8,
        &&label_80CF52EC,
        &&label_80CF52F0,
        &&label_80CF52F4,
        &&label_80CF52F8,
        &&label_80CF52FC,
        &&label_80CF5300,
        &&label_80CF5304,
        &&label_80CF5308,
        &&label_80CF530C,
        &&label_80CF5310,
        &&label_80CF5314,
        &&label_80CF5318,
        &&label_80CF531C,
        &&label_80CF5320,
        &&label_80CF5324,
        &&label_80CF5328,
        &&label_80CF532C,
        &&label_80CF5330,
        &&label_80CF5334,
        &&label_80CF5338,
        &&label_80CF533C,
        &&label_80CF5340,
        &&label_80CF5344,
        &&label_80CF5348,
        &&label_80CF534C,
        &&label_80CF5350,
        &&label_80CF5354,
        &&label_80CF5358,
        &&label_80CF535C,
        &&label_80CF5360,
        &&label_80CF5364,
        &&label_80CF5368,
        &&label_80CF536C,
        &&label_80CF5370,
        &&label_80CF5374,
        &&label_80CF5378,
        &&label_80CF537C,
        &&label_80CF5380,
        &&label_80CF5384,
        &&label_80CF5388,
        &&label_80CF538C,
        &&label_80CF5390,
        &&label_80CF5394,
        &&label_80CF5398,
        &&label_80CF539C,
        &&label_80CF53A0,
        &&label_80CF53A4,
        &&label_80CF53A8,
        &&label_80CF53AC,
        &&label_80CF53B0,
        &&label_80CF53B4,
        &&label_80CF53B8,
        &&label_80CF53BC,
        &&label_80CF53C0,
        &&label_80CF53C4,
        &&label_80CF53C8,
        &&label_80CF53CC,
        &&label_80CF53D0,
        &&label_80CF53D4,
        &&label_80CF53D8,
        &&label_80CF53DC,
        &&label_80CF53E0,
        &&label_80CF53E4,
        &&label_80CF53E8,
        &&label_80CF53EC,
        &&label_80CF53F0,
        &&label_80CF53F4,
        &&label_80CF53F8,
        &&label_80CF53FC,
        &&label_80CF5400,
        &&label_80CF5404,
        &&label_80CF5408,
        &&label_80CF540C,
        &&label_80CF5410,
        &&label_80CF5414,
        &&label_80CF5418,
        &&label_80CF541C,
        &&label_80CF5420,
        &&label_80CF5424,
        &&label_80CF5428,
        &&label_80CF542C,
        &&label_80CF5430,
        &&label_80CF5434,
        &&label_80CF5438,
        &&label_80CF543C,
        &&label_80CF5440,
        &&label_80CF5444,
        &&label_80CF5448,
        &&label_80CF544C,
        &&label_80CF5450,
        &&label_80CF5454,
        &&label_80CF5458,
        &&label_80CF545C,
        &&label_80CF5460,
        &&label_80CF5464,
        &&label_80CF5468,
        &&label_80CF546C,
        &&label_80CF5470,
        &&label_80CF5474,
        &&label_80CF5478,
        &&label_80CF547C,
        &&label_80CF5480,
        &&label_80CF5484,
        &&label_80CF5488,
        &&label_80CF548C,
        &&label_80CF5490,
        &&label_80CF5494,
        &&label_80CF5498,
        &&label_80CF549C,
        &&label_80CF54A0,
        &&label_80CF54A4,
        &&label_80CF54A8,
        &&label_80CF54AC,
        &&label_80CF54B0,
        &&label_80CF54B4,
        &&label_80CF54B8,
        &&label_80CF54BC,
        &&label_80CF54C0,
        &&label_80CF54C4,
        &&label_80CF54C8,
        &&label_80CF54CC,
        &&label_80CF54D0,
        &&label_80CF54D4,
        &&label_80CF54D8,
        &&label_80CF54DC,
        &&label_80CF54E0,
        &&label_80CF54E4,
        &&label_80CF54E8,
        &&label_80CF54EC,
        &&label_80CF54F0,
        &&label_80CF54F4,
        &&label_80CF54F8,
        &&label_80CF54FC,
        &&label_80CF5500,
        &&label_80CF5504,
        &&label_80CF5508,
        &&label_80CF550C,
        &&label_80CF5510,
        &&label_80CF5514
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80CF43C0u && pc <= 0x80CF5514u && ((pc - 0x80CF43C0u) & 3u) == 0u)
            goto *pc_table_80CF43C0[(pc - 0x80CF43C0u) >> 2];
    }
    return;
label_80CF43C0:
    ctx->pc = 0x80CF43C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF43C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CF43C0: stwu     r1, -16(r1)
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
label_80CF43C4:
    ctx->pc = 0x80CF43C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF43C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CF43C4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF43C8:
    ctx->pc = 0x80CF43C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF43C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CF43C8: stw     r0, 20(r1)
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
label_80CF43CC:
    ctx->pc = 0x80CF43CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF43CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CF43CC: stw     r31, 12(r1)
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
label_80CF43D0:
    ctx->pc = 0x80CF43D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF43D0u)) return;
    // 80CF43D0: cmpwi   r3, 2
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

label_80CF43D4:
    ctx->pc = 0x80CF43D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF43D4u)) return;
    // 80CF43D4: bc    12, 2, 0x80CF4E3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CF4E3C;
        }
    }

label_80CF43D8:
    ctx->pc = 0x80CF43D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF43D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CF43D8: bc    4, 0, 0x80CF43EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CF43EC;
        }
    }

label_80CF43DC:
    ctx->pc = 0x80CF43DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF43DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CF43DC: cmpwi   r3, 0
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

label_80CF43E0:
    ctx->pc = 0x80CF43E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF43E0u)) return;
    // 80CF43E0: bc    12, 2, 0x80CF4E7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CF4E7C;
        }
    }

label_80CF43E4:
    ctx->pc = 0x80CF43E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF43E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CF43E4: bc    4, 0, 0x80CF43F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CF43F4;
        }
    }

label_80CF43E8:
    ctx->pc = 0x80CF43E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF43E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CF43E8: b       0x80CF4E7C
    {
            goto label_80CF4E7C;
    }

label_80CF43EC:
    ctx->pc = 0x80CF43ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF43ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CF43EC: cmpwi   r3, 4
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

label_80CF43F0:
    ctx->pc = 0x80CF43F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF43F0u)) return;
    // 80CF43F0: b       0x80CF4E7C
    {
            goto label_80CF4E7C;
    }

label_80CF43F4:
    ctx->pc = 0x80CF43F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF43F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CF43F4: bl      0x8045DE7C
    {
            ctx->lr = 0x80CF43F8u;
            ctx->pc = 0x8045DE7Cu;
            return;
    }

label_80CF43F8:
    ctx->pc = 0x80CF43F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF43F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CF43F8: bl      0x80460A60
    {
            ctx->lr = 0x80CF43FCu;
            ctx->pc = 0x80460A60u;
            return;
    }

label_80CF43FC:
    ctx->pc = 0x80CF43FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF43FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CF43FC: bl      0x80460A24
    {
            ctx->lr = 0x80CF4400u;
            ctx->pc = 0x80460A24u;
            return;
    }

label_80CF4400:
    ctx->pc = 0x80CF4400u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4400u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CF4400: li      r3, 67
    ctx->gpr[3] = (u32)(s32)(67);

label_80CF4404:
    ctx->pc = 0x80CF4404u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4404u)) return;
    // 80CF4404: bl      0x80406090
    {
            ctx->lr = 0x80CF4408u;
            ctx->pc = 0x80406090u;
            return;
    }

label_80CF4408:
    ctx->pc = 0x80CF4408u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4408u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CF4408: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CF440C:
    ctx->pc = 0x80CF440Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF440Cu)) return;
    // 80CF440C: bl      0x8045F220
    {
            ctx->lr = 0x80CF4410u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CF4410:
    ctx->pc = 0x80CF4410u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4410u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CF4410: lis     r4, -27361
    ctx->gpr[4] = ((u32)(s32)(-27361) << 16);

label_80CF4414:
    ctx->pc = 0x80CF4414u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4414u)) return;
    // 80CF4414: addi    r4, r4, -3824
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-3824);

label_80CF4418:
    ctx->pc = 0x80CF4418u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4418u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CF4418: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CF4418u)) return;
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
label_80CF441C:
    ctx->pc = 0x80CF441Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF441Cu)) return;
    // 80CF441C: lis     r4, -27361
    ctx->gpr[4] = ((u32)(s32)(-27361) << 16);

label_80CF4420:
    ctx->pc = 0x80CF4420u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4420u)) return;
    // 80CF4420: addi    r4, r4, -3820
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-3820);

label_80CF4424:
    ctx->pc = 0x80CF4424u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4424u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CF4424: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CF4424u)) return;
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
label_80CF4428:
    ctx->pc = 0x80CF4428u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4428u)) return;
    // 80CF4428: lis     r4, -27361
    ctx->gpr[4] = ((u32)(s32)(-27361) << 16);

label_80CF442C:
    ctx->pc = 0x80CF442Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF442Cu)) return;
    // 80CF442C: addi    r4, r4, -3816
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-3816);

label_80CF4430:
    ctx->pc = 0x80CF4430u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4430u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CF4430: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CF4430u)) return;
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
label_80CF4434:
    ctx->pc = 0x80CF4434u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4434u)) return;
    // 80CF4434: bl      0x8045EF2C
    {
            ctx->lr = 0x80CF4438u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80CF4438:
    ctx->pc = 0x80CF4438u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4438u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CF4438: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CF443C:
    ctx->pc = 0x80CF443Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF443Cu)) return;
    // 80CF443C: bl      0x8045F220
    {
            ctx->lr = 0x80CF4440u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CF4440:
    ctx->pc = 0x80CF4440u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4440u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80CF4440: li      r4, 2444
    ctx->gpr[4] = (u32)(s32)(2444);

label_80CF4444:
    ctx->pc = 0x80CF4444u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4444u)) return;
    // 80CF4444: li      r5, 17615
    ctx->gpr[5] = (u32)(s32)(17615);

label_80CF4448:
    ctx->pc = 0x80CF4448u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4448u)) return;
    // 80CF4448: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80CF444C:
    ctx->pc = 0x80CF444Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF444Cu)) return;
    // 80CF444C: addi    r6, r6, -1627
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-1627);

label_80CF4450:
    ctx->pc = 0x80CF4450u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4450u)) return;
    // 80CF4450: bl      0x8045EEA8
    {
            ctx->lr = 0x80CF4454u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80CF4454:
    ctx->pc = 0x80CF4454u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4454u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CF4454: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CF4458:
    ctx->pc = 0x80CF4458u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4458u)) return;
    // 80CF4458: bl      0x8045F220
    {
            ctx->lr = 0x80CF445Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CF445C:
    ctx->pc = 0x80CF445Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF445Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CF445C: bl      0x8045EB8C
    {
            ctx->lr = 0x80CF4460u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80CF4460:
    ctx->pc = 0x80CF4460u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4460u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CF4460: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CF4464:
    ctx->pc = 0x80CF4464u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4464u)) return;
    // 80CF4464: bl      0x8045F220
    {
            ctx->lr = 0x80CF4468u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CF4468:
    ctx->pc = 0x80CF4468u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4468u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CF4468: lis     r4, -27361
    ctx->gpr[4] = ((u32)(s32)(-27361) << 16);

label_80CF446C:
    ctx->pc = 0x80CF446Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF446Cu)) return;
    // 80CF446C: addi    r4, r4, 21700
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(21700);

label_80CF4470:
    ctx->pc = 0x80CF4470u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4470u)) return;
    // 80CF4470: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80CF4474:
    ctx->pc = 0x80CF4474u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4474u)) return;
    // 80CF4474: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80CF4478:
    ctx->pc = 0x80CF4478u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4478u)) return;
    // 80CF4478: lis     r6, -27361
    ctx->gpr[6] = ((u32)(s32)(-27361) << 16);

label_80CF447C:
    ctx->pc = 0x80CF447Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF447Cu)) return;
    // 80CF447C: addi    r6, r6, -3812
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-3812);

label_80CF4480:
    ctx->pc = 0x80CF4480u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4480u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CF4480: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80CF4480u)) return;
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
label_80CF4484:
    ctx->pc = 0x80CF4484u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4484u)) return;
    // 80CF4484: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80CF4488:
    ctx->pc = 0x80CF4488u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4488u)) return;
    // 80CF4488: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CF448C:
    ctx->pc = 0x80CF448Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF448Cu)) return;
    // 80CF448C: bl      0x8045EBE4
    {
            ctx->lr = 0x80CF4490u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80CF4490:
    ctx->pc = 0x80CF4490u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4490u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CF4490: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CF4494:
    ctx->pc = 0x80CF4494u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4494u)) return;
    // 80CF4494: bl      0x8045F220
    {
            ctx->lr = 0x80CF4498u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CF4498:
    ctx->pc = 0x80CF4498u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4498u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80CF4498: lis     r4, -27361
    ctx->gpr[4] = ((u32)(s32)(-27361) << 16);

label_80CF449C:
    ctx->pc = 0x80CF449Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF449Cu)) return;
    // 80CF449C: addi    r4, r4, -3820
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-3820);

label_80CF44A0:
    ctx->pc = 0x80CF44A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF44A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CF44A0: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CF44A0u)) return;
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
label_80CF44A4:
    ctx->pc = 0x80CF44A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF44A4u)) return;
    // 80CF44A4: bl      0x80CF5328
    {
            ctx->lr = 0x80CF44A8u;
            goto label_80CF5328;
    }

label_80CF44A8:
    ctx->pc = 0x80CF44A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 15u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF44A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 15u : 1u;
    // 80CF44A8: lis     r4, -27360
    ctx->gpr[4] = ((u32)(s32)(-27360) << 16);

label_80CF44AC:
    ctx->pc = 0x80CF44ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF44ACu)) return;
    // 80CF44AC: addi    r4, r4, -2716
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-2716);

label_80CF44B0:
    ctx->pc = 0x80CF44B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF44B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80CF44B0: stw     r3, 0(r4)
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
label_80CF44B4:
    ctx->pc = 0x80CF44B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF44B4u)) return;
    // 80CF44B4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CF44B8:
    ctx->pc = 0x80CF44B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF44B8u)) return;
    // 80CF44B8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CF44BC:
    ctx->pc = 0x80CF44BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF44BCu)) return;
    // 80CF44BC: lis     r5, -27361
    ctx->gpr[5] = ((u32)(s32)(-27361) << 16);

label_80CF44C0:
    ctx->pc = 0x80CF44C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF44C0u)) return;
    // 80CF44C0: addi    r5, r5, -3808
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3808);

label_80CF44C4:
    ctx->pc = 0x80CF44C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF44C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CF44C4: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CF44C4u)) return;
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
label_80CF44C8:
    ctx->pc = 0x80CF44C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF44C8u)) return;
    // 80CF44C8: lis     r5, -27361
    ctx->gpr[5] = ((u32)(s32)(-27361) << 16);

label_80CF44CC:
    ctx->pc = 0x80CF44CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF44CCu)) return;
    // 80CF44CC: addi    r5, r5, -3804
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3804);

label_80CF44D0:
    ctx->pc = 0x80CF44D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF44D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CF44D0: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CF44D0u)) return;
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
label_80CF44D4:
    ctx->pc = 0x80CF44D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF44D4u)) return;
    // 80CF44D4: lis     r5, -27361
    ctx->gpr[5] = ((u32)(s32)(-27361) << 16);

label_80CF44D8:
    ctx->pc = 0x80CF44D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF44D8u)) return;
    // 80CF44D8: addi    r5, r5, -3800
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3800);

label_80CF44DC:
    ctx->pc = 0x80CF44DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF44DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CF44DC: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CF44DCu)) return;
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
label_80CF44E0:
    ctx->pc = 0x80CF44E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF44E0u)) return;
    // 80CF44E0: bl      0x8045C750
    {
            ctx->lr = 0x80CF44E4u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80CF44E4:
    ctx->pc = 0x80CF44E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF44E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80CF44E4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CF44E8:
    ctx->pc = 0x80CF44E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF44E8u)) return;
    // 80CF44E8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CF44EC:
    ctx->pc = 0x80CF44ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF44ECu)) return;
    // 80CF44EC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80CF44F0:
    ctx->pc = 0x80CF44F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF44F0u)) return;
    // 80CF44F0: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80CF44F4:
    ctx->pc = 0x80CF44F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF44F4u)) return;
    // 80CF44F4: addi    r6, r6, -28672
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-28672);

label_80CF44F8:
    ctx->pc = 0x80CF44F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF44F8u)) return;
    // 80CF44F8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CF44FC:
    ctx->pc = 0x80CF44FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF44FCu)) return;
    // 80CF44FC: bl      0x8045C7B4
    {
            ctx->lr = 0x80CF4500u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CF4500:
    ctx->pc = 0x80CF4500u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 17u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4500u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 17u : 1u;
    // 80CF4500: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CF4504:
    ctx->pc = 0x80CF4504u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4504u)) return;
    // 80CF4504: lis     r4, -32676
    ctx->gpr[4] = ((u32)(s32)(-32676) << 16);

label_80CF4508:
    ctx->pc = 0x80CF4508u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4508u)) return;
    // 80CF4508: addi    r4, r4, -5088
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5088);

label_80CF450C:
    ctx->pc = 0x80CF450Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF450Cu)) return;
    // 80CF450C: lis     r5, -27361
    ctx->gpr[5] = ((u32)(s32)(-27361) << 16);

label_80CF4510:
    ctx->pc = 0x80CF4510u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4510u)) return;
    // 80CF4510: addi    r5, r5, -3796
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3796);

label_80CF4514:
    ctx->pc = 0x80CF4514u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4514u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CF4514: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CF4514u)) return;
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
label_80CF4518:
    ctx->pc = 0x80CF4518u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4518u)) return;
    // 80CF4518: lis     r5, -27361
    ctx->gpr[5] = ((u32)(s32)(-27361) << 16);

label_80CF451C:
    ctx->pc = 0x80CF451Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF451Cu)) return;
    // 80CF451C: addi    r5, r5, -3792
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3792);

label_80CF4520:
    ctx->pc = 0x80CF4520u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4520u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CF4520: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CF4520u)) return;
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
label_80CF4524:
    ctx->pc = 0x80CF4524u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4524u)) return;
    // 80CF4524: lis     r5, -27361
    ctx->gpr[5] = ((u32)(s32)(-27361) << 16);

label_80CF4528:
    ctx->pc = 0x80CF4528u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4528u)) return;
    // 80CF4528: addi    r5, r5, -3788
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3788);

label_80CF452C:
    ctx->pc = 0x80CF452Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF452Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CF452C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CF452Cu)) return;
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
label_80CF4530:
    ctx->pc = 0x80CF4530u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4530u)) return;
    // 80CF4530: li      r5, 2195
    ctx->gpr[5] = (u32)(s32)(2195);

label_80CF4534:
    ctx->pc = 0x80CF4534u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4534u)) return;
    // 80CF4534: li      r6, 3820
    ctx->gpr[6] = (u32)(s32)(3820);

label_80CF4538:
    ctx->pc = 0x80CF4538u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4538u)) return;
    // 80CF4538: lis     r7, 1
    ctx->gpr[7] = ((u32)(s32)(1) << 16);

label_80CF453C:
    ctx->pc = 0x80CF453Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF453Cu)) return;
    // 80CF453C: addi    r7, r7, -482
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-482);

label_80CF4540:
    ctx->pc = 0x80CF4540u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4540u)) return;
    // 80CF4540: bl      0x8045ED84
    {
            ctx->lr = 0x80CF4544u;
            ctx->pc = 0x8045ED84u;
            return;
    }

label_80CF4544:
    ctx->pc = 0x80CF4544u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4544u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CF4544: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CF4548:
    ctx->pc = 0x80CF4548u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4548u)) return;
    // 80CF4548: li      r4, 200
    ctx->gpr[4] = (u32)(s32)(200);

label_80CF454C:
    ctx->pc = 0x80CF454Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF454Cu)) return;
    // 80CF454C: lis     r5, -27361
    ctx->gpr[5] = ((u32)(s32)(-27361) << 16);

label_80CF4550:
    ctx->pc = 0x80CF4550u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4550u)) return;
    // 80CF4550: addi    r5, r5, -3808
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3808);

label_80CF4554:
    ctx->pc = 0x80CF4554u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4554u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CF4554: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CF4554u)) return;
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
label_80CF4558:
    ctx->pc = 0x80CF4558u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4558u)) return;
    // 80CF4558: lis     r5, -27361
    ctx->gpr[5] = ((u32)(s32)(-27361) << 16);

label_80CF455C:
    ctx->pc = 0x80CF455Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF455Cu)) return;
    // 80CF455C: addi    r5, r5, -3784
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3784);

label_80CF4560:
    ctx->pc = 0x80CF4560u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4560u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CF4560: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CF4560u)) return;
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
label_80CF4564:
    ctx->pc = 0x80CF4564u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4564u)) return;
    // 80CF4564: lis     r5, -27361
    ctx->gpr[5] = ((u32)(s32)(-27361) << 16);

label_80CF4568:
    ctx->pc = 0x80CF4568u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4568u)) return;
    // 80CF4568: addi    r5, r5, -3800
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3800);

label_80CF456C:
    ctx->pc = 0x80CF456Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF456Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CF456C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CF456Cu)) return;
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
label_80CF4570:
    ctx->pc = 0x80CF4570u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4570u)) return;
    // 80CF4570: bl      0x8045C750
    {
            ctx->lr = 0x80CF4574u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80CF4574:
    ctx->pc = 0x80CF4574u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4574u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CF4574: li      r3, 200
    ctx->gpr[3] = (u32)(s32)(200);

label_80CF4578:
    ctx->pc = 0x80CF4578u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4578u)) return;
    // 80CF4578: bl      0x8045F7C8
    {
            ctx->lr = 0x80CF457Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CF457C:
    ctx->pc = 0x80CF457Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF457Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CF457C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CF4580:
    ctx->pc = 0x80CF4580u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4580u)) return;
    // 80CF4580: bl      0x8045F220
    {
            ctx->lr = 0x80CF4584u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CF4584:
    ctx->pc = 0x80CF4584u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4584u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CF4584: lis     r4, -27361
    ctx->gpr[4] = ((u32)(s32)(-27361) << 16);

label_80CF4588:
    ctx->pc = 0x80CF4588u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4588u)) return;
    // 80CF4588: addi    r4, r4, -1596
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1596);

label_80CF458C:
    ctx->pc = 0x80CF458Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF458Cu)) return;
    // 80CF458C: bl      0x8045C060
    {
            ctx->lr = 0x80CF4590u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80CF4590:
    ctx->pc = 0x80CF4590u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4590u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CF4590: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CF4594:
    ctx->pc = 0x80CF4594u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4594u)) return;
    // 80CF4594: bl      0x8045F220
    {
            ctx->lr = 0x80CF4598u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CF4598:
    ctx->pc = 0x80CF4598u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4598u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CF4598: lis     r4, -28604
    ctx->gpr[4] = ((u32)(s32)(-28604) << 16);

label_80CF459C:
    ctx->pc = 0x80CF459Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF459Cu)) return;
    // 80CF459C: addi    r4, r4, 16948
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(16948);

label_80CF45A0:
    ctx->pc = 0x80CF45A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF45A0u)) return;
    // 80CF45A0: lis     r5, -28615
    ctx->gpr[5] = ((u32)(s32)(-28615) << 16);

label_80CF45A4:
    ctx->pc = 0x80CF45A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF45A4u)) return;
    // 80CF45A4: addi    r5, r5, -7300
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-7300);

label_80CF45A8:
    ctx->pc = 0x80CF45A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF45A8u)) return;
    // 80CF45A8: lis     r6, -27361
    ctx->gpr[6] = ((u32)(s32)(-27361) << 16);

label_80CF45AC:
    ctx->pc = 0x80CF45ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF45ACu)) return;
    // 80CF45AC: addi    r6, r6, -3780
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-3780);

label_80CF45B0:
    ctx->pc = 0x80CF45B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF45B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CF45B0: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80CF45B0u)) return;
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
label_80CF45B4:
    ctx->pc = 0x80CF45B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF45B4u)) return;
    // 80CF45B4: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80CF45B8:
    ctx->pc = 0x80CF45B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF45B8u)) return;
    // 80CF45B8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CF45BC:
    ctx->pc = 0x80CF45BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF45BCu)) return;
    // 80CF45BC: bl      0x8045EBE4
    {
            ctx->lr = 0x80CF45C0u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80CF45C0:
    ctx->pc = 0x80CF45C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF45C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CF45C0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CF45C4:
    ctx->pc = 0x80CF45C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF45C4u)) return;
    // 80CF45C4: li      r4, 90
    ctx->gpr[4] = (u32)(s32)(90);

label_80CF45C8:
    ctx->pc = 0x80CF45C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF45C8u)) return;
    // 80CF45C8: lis     r5, -27361
    ctx->gpr[5] = ((u32)(s32)(-27361) << 16);

label_80CF45CC:
    ctx->pc = 0x80CF45CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF45CCu)) return;
    // 80CF45CC: addi    r5, r5, -3776
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3776);

label_80CF45D0:
    ctx->pc = 0x80CF45D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF45D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CF45D0: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CF45D0u)) return;
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
label_80CF45D4:
    ctx->pc = 0x80CF45D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF45D4u)) return;
    // 80CF45D4: lis     r5, -27361
    ctx->gpr[5] = ((u32)(s32)(-27361) << 16);

label_80CF45D8:
    ctx->pc = 0x80CF45D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF45D8u)) return;
    // 80CF45D8: addi    r5, r5, -3772
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3772);

label_80CF45DC:
    ctx->pc = 0x80CF45DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF45DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CF45DC: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CF45DCu)) return;
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
label_80CF45E0:
    ctx->pc = 0x80CF45E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF45E0u)) return;
    // 80CF45E0: lis     r5, -27361
    ctx->gpr[5] = ((u32)(s32)(-27361) << 16);

label_80CF45E4:
    ctx->pc = 0x80CF45E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF45E4u)) return;
    // 80CF45E4: addi    r5, r5, -3768
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3768);

label_80CF45E8:
    ctx->pc = 0x80CF45E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF45E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CF45E8: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CF45E8u)) return;
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
label_80CF45EC:
    ctx->pc = 0x80CF45ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF45ECu)) return;
    // 80CF45EC: bl      0x8045C750
    {
            ctx->lr = 0x80CF45F0u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80CF45F0:
    ctx->pc = 0x80CF45F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF45F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CF45F0: li      r3, 70
    ctx->gpr[3] = (u32)(s32)(70);

label_80CF45F4:
    ctx->pc = 0x80CF45F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF45F4u)) return;
    // 80CF45F4: bl      0x8045F7C8
    {
            ctx->lr = 0x80CF45F8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CF45F8:
    ctx->pc = 0x80CF45F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF45F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CF45F8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CF45FC:
    ctx->pc = 0x80CF45FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF45FCu)) return;
    // 80CF45FC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CF4600:
    ctx->pc = 0x80CF4600u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4600u)) return;
    // 80CF4600: lis     r5, -27361
    ctx->gpr[5] = ((u32)(s32)(-27361) << 16);

label_80CF4604:
    ctx->pc = 0x80CF4604u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4604u)) return;
    // 80CF4604: addi    r5, r5, -3764
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3764);

label_80CF4608:
    ctx->pc = 0x80CF4608u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4608u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CF4608: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CF4608u)) return;
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
label_80CF460C:
    ctx->pc = 0x80CF460Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF460Cu)) return;
    // 80CF460C: lis     r5, -27361
    ctx->gpr[5] = ((u32)(s32)(-27361) << 16);

label_80CF4610:
    ctx->pc = 0x80CF4610u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4610u)) return;
    // 80CF4610: addi    r5, r5, -3760
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3760);

label_80CF4614:
    ctx->pc = 0x80CF4614u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4614u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CF4614: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CF4614u)) return;
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
label_80CF4618:
    ctx->pc = 0x80CF4618u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4618u)) return;
    // 80CF4618: lis     r5, -27361
    ctx->gpr[5] = ((u32)(s32)(-27361) << 16);

label_80CF461C:
    ctx->pc = 0x80CF461Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF461Cu)) return;
    // 80CF461C: addi    r5, r5, -3756
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3756);

label_80CF4620:
    ctx->pc = 0x80CF4620u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4620u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CF4620: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CF4620u)) return;
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
label_80CF4624:
    ctx->pc = 0x80CF4624u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4624u)) return;
    // 80CF4624: bl      0x8045C750
    {
            ctx->lr = 0x80CF4628u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80CF4628:
    ctx->pc = 0x80CF4628u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4628u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80CF4628: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CF462C:
    ctx->pc = 0x80CF462Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF462Cu)) return;
    // 80CF462C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CF4630:
    ctx->pc = 0x80CF4630u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4630u)) return;
    // 80CF4630: li      r5, 256
    ctx->gpr[5] = (u32)(s32)(256);

label_80CF4634:
    ctx->pc = 0x80CF4634u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4634u)) return;
    // 80CF4634: li      r6, 31744
    ctx->gpr[6] = (u32)(s32)(31744);

label_80CF4638:
    ctx->pc = 0x80CF4638u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4638u)) return;
    // 80CF4638: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CF463C:
    ctx->pc = 0x80CF463Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF463Cu)) return;
    // 80CF463C: bl      0x8045C7B4
    {
            ctx->lr = 0x80CF4640u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CF4640:
    ctx->pc = 0x80CF4640u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4640u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CF4640: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_80CF4644:
    ctx->pc = 0x80CF4644u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4644u)) return;
    // 80CF4644: bl      0x8045F7C8
    {
            ctx->lr = 0x80CF4648u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CF4648:
    ctx->pc = 0x80CF4648u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4648u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CF4648: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CF464C:
    ctx->pc = 0x80CF464Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF464Cu)) return;
    // 80CF464C: li      r4, 200
    ctx->gpr[4] = (u32)(s32)(200);

label_80CF4650:
    ctx->pc = 0x80CF4650u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4650u)) return;
    // 80CF4650: lis     r5, -27361
    ctx->gpr[5] = ((u32)(s32)(-27361) << 16);

label_80CF4654:
    ctx->pc = 0x80CF4654u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4654u)) return;
    // 80CF4654: addi    r5, r5, -3752
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3752);

label_80CF4658:
    ctx->pc = 0x80CF4658u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4658u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CF4658: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CF4658u)) return;
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
label_80CF465C:
    ctx->pc = 0x80CF465Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF465Cu)) return;
    // 80CF465C: lis     r5, -27361
    ctx->gpr[5] = ((u32)(s32)(-27361) << 16);

label_80CF4660:
    ctx->pc = 0x80CF4660u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4660u)) return;
    // 80CF4660: addi    r5, r5, -3748
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3748);

label_80CF4664:
    ctx->pc = 0x80CF4664u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4664u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CF4664: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CF4664u)) return;
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
label_80CF4668:
    ctx->pc = 0x80CF4668u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4668u)) return;
    // 80CF4668: lis     r5, -27361
    ctx->gpr[5] = ((u32)(s32)(-27361) << 16);

label_80CF466C:
    ctx->pc = 0x80CF466Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF466Cu)) return;
    // 80CF466C: addi    r5, r5, -3744
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3744);

label_80CF4670:
    ctx->pc = 0x80CF4670u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4670u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CF4670: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CF4670u)) return;
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
label_80CF4674:
    ctx->pc = 0x80CF4674u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4674u)) return;
    // 80CF4674: bl      0x8045C750
    {
            ctx->lr = 0x80CF4678u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80CF4678:
    ctx->pc = 0x80CF4678u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4678u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CF4678: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CF467C:
    ctx->pc = 0x80CF467Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF467Cu)) return;
    // 80CF467C: bl      0x8045F220
    {
            ctx->lr = 0x80CF4680u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CF4680:
    ctx->pc = 0x80CF4680u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4680u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CF4680: lis     r4, -27361
    ctx->gpr[4] = ((u32)(s32)(-27361) << 16);

label_80CF4684:
    ctx->pc = 0x80CF4684u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4684u)) return;
    // 80CF4684: addi    r4, r4, 30040
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(30040);

label_80CF4688:
    ctx->pc = 0x80CF4688u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4688u)) return;
    // 80CF4688: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80CF468C:
    ctx->pc = 0x80CF468Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF468Cu)) return;
    // 80CF468C: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80CF4690:
    ctx->pc = 0x80CF4690u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4690u)) return;
    // 80CF4690: lis     r6, -27361
    ctx->gpr[6] = ((u32)(s32)(-27361) << 16);

label_80CF4694:
    ctx->pc = 0x80CF4694u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4694u)) return;
    // 80CF4694: addi    r6, r6, -3812
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-3812);

label_80CF4698:
    ctx->pc = 0x80CF4698u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4698u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CF4698: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80CF4698u)) return;
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
label_80CF469C:
    ctx->pc = 0x80CF469Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF469Cu)) return;
    // 80CF469C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80CF46A0:
    ctx->pc = 0x80CF46A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF46A0u)) return;
    // 80CF46A0: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_80CF46A4:
    ctx->pc = 0x80CF46A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF46A4u)) return;
    // 80CF46A4: bl      0x8045EBE4
    {
            ctx->lr = 0x80CF46A8u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80CF46A8:
    ctx->pc = 0x80CF46A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF46A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CF46A8: li      r3, 1406
    ctx->gpr[3] = (u32)(s32)(1406);

label_80CF46AC:
    ctx->pc = 0x80CF46ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF46ACu)) return;
    // 80CF46AC: bl      0x8045BFA0
    {
            ctx->lr = 0x80CF46B0u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80CF46B0:
    ctx->pc = 0x80CF46B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF46B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80CF46B0: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80CF46B4:
    ctx->pc = 0x80CF46B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF46B4u)) return;
    // 80CF46B4: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80CF46B8:
    ctx->pc = 0x80CF46B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF46B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CF46B8: lwz     r0, 0(r3)
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
label_80CF46BC:
    ctx->pc = 0x80CF46BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF46BCu)) return;
    // 80CF46BC: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80CF46C0:
    ctx->pc = 0x80CF46C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF46C0u)) return;
    // 80CF46C0: lis     r3, -27361
    ctx->gpr[3] = ((u32)(s32)(-27361) << 16);

label_80CF46C4:
    ctx->pc = 0x80CF46C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF46C4u)) return;
    // 80CF46C4: addi    r3, r3, -1640
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1640);

label_80CF46C8:
    ctx->pc = 0x80CF46C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF46C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CF46C8: lwzx    r3, r3, r0
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
label_80CF46CC:
    ctx->pc = 0x80CF46CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF46CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CF46CC: lwz     r3, 0(r3)
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
label_80CF46D0:
    ctx->pc = 0x80CF46D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF46D0u)) return;
    // 80CF46D0: bl      0x8045F6FC
    {
            ctx->lr = 0x80CF46D4u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80CF46D4:
    ctx->pc = 0x80CF46D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF46D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CF46D4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CF46D8:
    ctx->pc = 0x80CF46D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF46D8u)) return;
    // 80CF46D8: bl      0x8045F220
    {
            ctx->lr = 0x80CF46DCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CF46DC:
    ctx->pc = 0x80CF46DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF46DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CF46DC: lis     r4, -27361
    ctx->gpr[4] = ((u32)(s32)(-27361) << 16);

label_80CF46E0:
    ctx->pc = 0x80CF46E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF46E0u)) return;
    // 80CF46E0: addi    r4, r4, -1584
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1584);

label_80CF46E4:
    ctx->pc = 0x80CF46E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF46E4u)) return;
    // 80CF46E4: bl      0x8045C060
    {
            ctx->lr = 0x80CF46E8u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80CF46E8:
    ctx->pc = 0x80CF46E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF46E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CF46E8: li      r3, 50
    ctx->gpr[3] = (u32)(s32)(50);

label_80CF46EC:
    ctx->pc = 0x80CF46ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF46ECu)) return;
    // 80CF46EC: bl      0x8045F7C8
    {
            ctx->lr = 0x80CF46F0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CF46F0:
    ctx->pc = 0x80CF46F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF46F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CF46F0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CF46F4:
    ctx->pc = 0x80CF46F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF46F4u)) return;
    // 80CF46F4: bl      0x8045F220
    {
            ctx->lr = 0x80CF46F8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CF46F8:
    ctx->pc = 0x80CF46F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF46F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CF46F8: lis     r4, -27361
    ctx->gpr[4] = ((u32)(s32)(-27361) << 16);

label_80CF46FC:
    ctx->pc = 0x80CF46FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF46FCu)) return;
    // 80CF46FC: addi    r4, r4, 21700
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(21700);

label_80CF4700:
    ctx->pc = 0x80CF4700u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4700u)) return;
    // 80CF4700: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80CF4704:
    ctx->pc = 0x80CF4704u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4704u)) return;
    // 80CF4704: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80CF4708:
    ctx->pc = 0x80CF4708u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4708u)) return;
    // 80CF4708: lis     r6, -27361
    ctx->gpr[6] = ((u32)(s32)(-27361) << 16);

label_80CF470C:
    ctx->pc = 0x80CF470Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF470Cu)) return;
    // 80CF470C: addi    r6, r6, -3812
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-3812);

label_80CF4710:
    ctx->pc = 0x80CF4710u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4710u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CF4710: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80CF4710u)) return;
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
label_80CF4714:
    ctx->pc = 0x80CF4714u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4714u)) return;
    // 80CF4714: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80CF4718:
    ctx->pc = 0x80CF4718u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4718u)) return;
    // 80CF4718: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_80CF471C:
    ctx->pc = 0x80CF471Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF471Cu)) return;
    // 80CF471C: bl      0x8045EBE4
    {
            ctx->lr = 0x80CF4720u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80CF4720:
    ctx->pc = 0x80CF4720u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4720u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CF4720: bl      0x8045BFF4
    {
            ctx->lr = 0x80CF4724u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80CF4724:
    ctx->pc = 0x80CF4724u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4724u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CF4724: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CF4728:
    ctx->pc = 0x80CF4728u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4728u)) return;
    // 80CF4728: bl      0x8045F220
    {
            ctx->lr = 0x80CF472Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CF472C:
    ctx->pc = 0x80CF472Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF472Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CF472C: bl      0x8045C034
    {
            ctx->lr = 0x80CF4730u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80CF4730:
    ctx->pc = 0x80CF4730u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4730u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80CF4730: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80CF4734:
    ctx->pc = 0x80CF4734u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4734u)) return;
    // 80CF4734: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80CF4738:
    ctx->pc = 0x80CF4738u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4738u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CF4738: lwz     r0, 0(r3)
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
label_80CF473C:
    ctx->pc = 0x80CF473Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF473Cu)) return;
    // 80CF473C: cmpwi   r0, 0
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

label_80CF4740:
    ctx->pc = 0x80CF4740u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4740u)) return;
    // 80CF4740: bc    4, 2, 0x80CF4758
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CF4758;
        }
    }

label_80CF4744:
    ctx->pc = 0x80CF4744u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4744u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CF4744: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CF4748:
    ctx->pc = 0x80CF4748u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4748u)) return;
    // 80CF4748: bl      0x8045F220
    {
            ctx->lr = 0x80CF474Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CF474C:
    ctx->pc = 0x80CF474Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF474Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CF474C: lis     r4, -27361
    ctx->gpr[4] = ((u32)(s32)(-27361) << 16);

label_80CF4750:
    ctx->pc = 0x80CF4750u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4750u)) return;
    // 80CF4750: addi    r4, r4, -1568
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1568);

label_80CF4754:
    ctx->pc = 0x80CF4754u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4754u)) return;
    // 80CF4754: bl      0x8045C060
    {
            ctx->lr = 0x80CF4758u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80CF4758:
    ctx->pc = 0x80CF4758u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4758u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80CF4758: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80CF475C:
    ctx->pc = 0x80CF475Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF475Cu)) return;
    // 80CF475C: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80CF4760:
    ctx->pc = 0x80CF4760u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4760u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CF4760: lwz     r0, 0(r3)
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
label_80CF4764:
    ctx->pc = 0x80CF4764u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4764u)) return;
    // 80CF4764: cmpwi   r0, 1
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

label_80CF4768:
    ctx->pc = 0x80CF4768u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4768u)) return;
    // 80CF4768: bc    4, 2, 0x80CF4780
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CF4780;
        }
    }

label_80CF476C:
    ctx->pc = 0x80CF476Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF476Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CF476C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CF4770:
    ctx->pc = 0x80CF4770u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4770u)) return;
    // 80CF4770: bl      0x8045F220
    {
            ctx->lr = 0x80CF4774u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CF4774:
    ctx->pc = 0x80CF4774u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4774u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CF4774: lis     r4, -27361
    ctx->gpr[4] = ((u32)(s32)(-27361) << 16);

label_80CF4778:
    ctx->pc = 0x80CF4778u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4778u)) return;
    // 80CF4778: addi    r4, r4, -1556
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1556);

label_80CF477C:
    ctx->pc = 0x80CF477Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF477Cu)) return;
    // 80CF477C: bl      0x8045C060
    {
            ctx->lr = 0x80CF4780u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80CF4780:
    ctx->pc = 0x80CF4780u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4780u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CF4780: li      r3, 1407
    ctx->gpr[3] = (u32)(s32)(1407);

label_80CF4784:
    ctx->pc = 0x80CF4784u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4784u)) return;
    // 80CF4784: bl      0x8045BFA0
    {
            ctx->lr = 0x80CF4788u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80CF4788:
    ctx->pc = 0x80CF4788u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4788u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80CF4788: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80CF478C:
    ctx->pc = 0x80CF478Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF478Cu)) return;
    // 80CF478C: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80CF4790:
    ctx->pc = 0x80CF4790u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4790u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CF4790: lwz     r0, 0(r3)
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
label_80CF4794:
    ctx->pc = 0x80CF4794u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4794u)) return;
    // 80CF4794: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80CF4798:
    ctx->pc = 0x80CF4798u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4798u)) return;
    // 80CF4798: lis     r3, -27361
    ctx->gpr[3] = ((u32)(s32)(-27361) << 16);

label_80CF479C:
    ctx->pc = 0x80CF479Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF479Cu)) return;
    // 80CF479C: addi    r3, r3, -1640
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1640);

label_80CF47A0:
    ctx->pc = 0x80CF47A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF47A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CF47A0: lwzx    r3, r3, r0
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
label_80CF47A4:
    ctx->pc = 0x80CF47A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF47A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CF47A4: lwz     r3, 4(r3)
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
label_80CF47A8:
    ctx->pc = 0x80CF47A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF47A8u)) return;
    // 80CF47A8: bl      0x8045F6FC
    {
            ctx->lr = 0x80CF47ACu;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80CF47AC:
    ctx->pc = 0x80CF47ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF47ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CF47AC: li      r3, 50
    ctx->gpr[3] = (u32)(s32)(50);

label_80CF47B0:
    ctx->pc = 0x80CF47B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF47B0u)) return;
    // 80CF47B0: bl      0x8045F7C8
    {
            ctx->lr = 0x80CF47B4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CF47B4:
    ctx->pc = 0x80CF47B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF47B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CF47B4: li      r3, 33
    ctx->gpr[3] = (u32)(s32)(33);

label_80CF47B8:
    ctx->pc = 0x80CF47B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF47B8u)) return;
    // 80CF47B8: bl      0x8045F7C8
    {
            ctx->lr = 0x80CF47BCu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CF47BC:
    ctx->pc = 0x80CF47BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF47BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80CF47BC: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80CF47C0:
    ctx->pc = 0x80CF47C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF47C0u)) return;
    // 80CF47C0: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80CF47C4:
    ctx->pc = 0x80CF47C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF47C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CF47C4: lwz     r0, 0(r3)
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
label_80CF47C8:
    ctx->pc = 0x80CF47C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF47C8u)) return;
    // 80CF47C8: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80CF47CC:
    ctx->pc = 0x80CF47CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF47CCu)) return;
    // 80CF47CC: lis     r3, -27361
    ctx->gpr[3] = ((u32)(s32)(-27361) << 16);

label_80CF47D0:
    ctx->pc = 0x80CF47D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF47D0u)) return;
    // 80CF47D0: addi    r3, r3, -1640
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1640);

label_80CF47D4:
    ctx->pc = 0x80CF47D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF47D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CF47D4: lwzx    r3, r3, r0
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
label_80CF47D8:
    ctx->pc = 0x80CF47D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF47D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CF47D8: lwz     r3, 8(r3)
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
label_80CF47DC:
    ctx->pc = 0x80CF47DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF47DCu)) return;
    // 80CF47DC: bl      0x8045F6FC
    {
            ctx->lr = 0x80CF47E0u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80CF47E0:
    ctx->pc = 0x80CF47E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF47E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CF47E0: bl      0x8045BFF4
    {
            ctx->lr = 0x80CF47E4u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80CF47E4:
    ctx->pc = 0x80CF47E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF47E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80CF47E4: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80CF47E8:
    ctx->pc = 0x80CF47E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF47E8u)) return;
    // 80CF47E8: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80CF47EC:
    ctx->pc = 0x80CF47ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF47ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CF47EC: lwz     r0, 0(r3)
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
label_80CF47F0:
    ctx->pc = 0x80CF47F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF47F0u)) return;
    // 80CF47F0: cmpwi   r0, 0
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

label_80CF47F4:
    ctx->pc = 0x80CF47F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF47F4u)) return;
    // 80CF47F4: bc    4, 2, 0x80CF4804
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CF4804;
        }
    }

label_80CF47F8:
    ctx->pc = 0x80CF47F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF47F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CF47F8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CF47FC:
    ctx->pc = 0x80CF47FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF47FCu)) return;
    // 80CF47FC: bl      0x8045F220
    {
            ctx->lr = 0x80CF4800u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CF4800:
    ctx->pc = 0x80CF4800u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4800u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CF4800: bl      0x8045C034
    {
            ctx->lr = 0x80CF4804u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80CF4804:
    ctx->pc = 0x80CF4804u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4804u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80CF4804: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80CF4808:
    ctx->pc = 0x80CF4808u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4808u)) return;
    // 80CF4808: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80CF480C:
    ctx->pc = 0x80CF480Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF480Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CF480C: lwz     r0, 0(r3)
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
label_80CF4810:
    ctx->pc = 0x80CF4810u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4810u)) return;
    // 80CF4810: cmpwi   r0, 1
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

label_80CF4814:
    ctx->pc = 0x80CF4814u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4814u)) return;
    // 80CF4814: bc    4, 2, 0x80CF4824
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CF4824;
        }
    }

label_80CF4818:
    ctx->pc = 0x80CF4818u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4818u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CF4818: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CF481C:
    ctx->pc = 0x80CF481Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF481Cu)) return;
    // 80CF481C: bl      0x8045F220
    {
            ctx->lr = 0x80CF4820u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CF4820:
    ctx->pc = 0x80CF4820u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4820u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CF4820: bl      0x8045C034
    {
            ctx->lr = 0x80CF4824u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80CF4824:
    ctx->pc = 0x80CF4824u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4824u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CF4824: bl      0x8045F32C
    {
            ctx->lr = 0x80CF4828u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80CF4828:
    ctx->pc = 0x80CF4828u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4828u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CF4828: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CF482C:
    ctx->pc = 0x80CF482Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF482Cu)) return;
    // 80CF482C: bl      0x8045F220
    {
            ctx->lr = 0x80CF4830u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CF4830:
    ctx->pc = 0x80CF4830u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4830u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CF4830: lis     r4, -27361
    ctx->gpr[4] = ((u32)(s32)(-27361) << 16);

label_80CF4834:
    ctx->pc = 0x80CF4834u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4834u)) return;
    // 80CF4834: addi    r4, r4, -1544
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1544);

label_80CF4838:
    ctx->pc = 0x80CF4838u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4838u)) return;
    // 80CF4838: bl      0x8045C060
    {
            ctx->lr = 0x80CF483Cu;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80CF483C:
    ctx->pc = 0x80CF483Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF483Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CF483C: li      r3, 1408
    ctx->gpr[3] = (u32)(s32)(1408);

label_80CF4840:
    ctx->pc = 0x80CF4840u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4840u)) return;
    // 80CF4840: bl      0x8045BFA0
    {
            ctx->lr = 0x80CF4844u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80CF4844:
    ctx->pc = 0x80CF4844u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4844u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80CF4844: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80CF4848:
    ctx->pc = 0x80CF4848u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4848u)) return;
    // 80CF4848: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80CF484C:
    ctx->pc = 0x80CF484Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF484Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CF484C: lwz     r0, 0(r3)
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
label_80CF4850:
    ctx->pc = 0x80CF4850u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4850u)) return;
    // 80CF4850: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80CF4854:
    ctx->pc = 0x80CF4854u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4854u)) return;
    // 80CF4854: lis     r3, -27361
    ctx->gpr[3] = ((u32)(s32)(-27361) << 16);

label_80CF4858:
    ctx->pc = 0x80CF4858u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4858u)) return;
    // 80CF4858: addi    r3, r3, -1640
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1640);

label_80CF485C:
    ctx->pc = 0x80CF485Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF485Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CF485C: lwzx    r3, r3, r0
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
label_80CF4860:
    ctx->pc = 0x80CF4860u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4860u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CF4860: lwz     r3, 12(r3)
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
label_80CF4864:
    ctx->pc = 0x80CF4864u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4864u)) return;
    // 80CF4864: bl      0x8045F6FC
    {
            ctx->lr = 0x80CF4868u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80CF4868:
    ctx->pc = 0x80CF4868u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4868u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CF4868: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CF486C:
    ctx->pc = 0x80CF486Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF486Cu)) return;
    // 80CF486C: bl      0x8045F220
    {
            ctx->lr = 0x80CF4870u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CF4870:
    ctx->pc = 0x80CF4870u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4870u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CF4870: lis     r4, -27360
    ctx->gpr[4] = ((u32)(s32)(-27360) << 16);

label_80CF4874:
    ctx->pc = 0x80CF4874u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4874u)) return;
    // 80CF4874: addi    r4, r4, -28852
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-28852);

label_80CF4878:
    ctx->pc = 0x80CF4878u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4878u)) return;
    // 80CF4878: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80CF487C:
    ctx->pc = 0x80CF487Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF487Cu)) return;
    // 80CF487C: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80CF4880:
    ctx->pc = 0x80CF4880u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4880u)) return;
    // 80CF4880: lis     r6, -27361
    ctx->gpr[6] = ((u32)(s32)(-27361) << 16);

label_80CF4884:
    ctx->pc = 0x80CF4884u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4884u)) return;
    // 80CF4884: addi    r6, r6, -3812
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-3812);

label_80CF4888:
    ctx->pc = 0x80CF4888u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4888u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CF4888: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80CF4888u)) return;
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
label_80CF488C:
    ctx->pc = 0x80CF488Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF488Cu)) return;
    // 80CF488C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80CF4890:
    ctx->pc = 0x80CF4890u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4890u)) return;
    // 80CF4890: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_80CF4894:
    ctx->pc = 0x80CF4894u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4894u)) return;
    // 80CF4894: bl      0x8045EBE4
    {
            ctx->lr = 0x80CF4898u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80CF4898:
    ctx->pc = 0x80CF4898u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4898u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CF4898: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CF489C:
    ctx->pc = 0x80CF489Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF489Cu)) return;
    // 80CF489C: bl      0x8045F220
    {
            ctx->lr = 0x80CF48A0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CF48A0:
    ctx->pc = 0x80CF48A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF48A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CF48A0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80CF48A4:
    ctx->pc = 0x80CF48A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF48A4u)) return;
    // 80CF48A4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CF48A8:
    ctx->pc = 0x80CF48A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF48A8u)) return;
    // 80CF48A8: bl      0x8045F220
    {
            ctx->lr = 0x80CF48ACu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CF48AC:
    ctx->pc = 0x80CF48ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF48ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80CF48AC: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80CF48B0:
    ctx->pc = 0x80CF48B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF48B0u)) return;
    // 80CF48B0: lis     r5, -27361
    ctx->gpr[5] = ((u32)(s32)(-27361) << 16);

label_80CF48B4:
    ctx->pc = 0x80CF48B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF48B4u)) return;
    // 80CF48B4: addi    r5, r5, -3740
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3740);

label_80CF48B8:
    ctx->pc = 0x80CF48B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF48B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CF48B8: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CF48B8u)) return;
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
label_80CF48BC:
    ctx->pc = 0x80CF48BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF48BCu)) return;
    // 80CF48BC: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80CF48BCu)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_80CF48C0:
    ctx->pc = 0x80CF48C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF48C0u)) return;
    // 80CF48C0: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80CF48C0u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80CF48C4:
    ctx->pc = 0x80CF48C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF48C4u)) return;
    // 80CF48C4: bl      0x8045E734
    {
            ctx->lr = 0x80CF48C8u;
            ctx->pc = 0x8045E734u;
            return;
    }

label_80CF48C8:
    ctx->pc = 0x80CF48C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF48C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CF48C8: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80CF48CC:
    ctx->pc = 0x80CF48CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF48CCu)) return;
    // 80CF48CC: bl      0x8045F7C8
    {
            ctx->lr = 0x80CF48D0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CF48D0:
    ctx->pc = 0x80CF48D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF48D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CF48D0: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CF48D4:
    ctx->pc = 0x80CF48D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF48D4u)) return;
    // 80CF48D4: bl      0x8045F220
    {
            ctx->lr = 0x80CF48D8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CF48D8:
    ctx->pc = 0x80CF48D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF48D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80CF48D8: lis     r4, -27361
    ctx->gpr[4] = ((u32)(s32)(-27361) << 16);

label_80CF48DC:
    ctx->pc = 0x80CF48DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF48DCu)) return;
    // 80CF48DC: addi    r4, r4, -3736
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-3736);

label_80CF48E0:
    ctx->pc = 0x80CF48E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF48E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80CF48E0: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CF48E0u)) return;
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
label_80CF48E4:
    ctx->pc = 0x80CF48E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF48E4u)) return;
    // 80CF48E4: lis     r4, -27361
    ctx->gpr[4] = ((u32)(s32)(-27361) << 16);

label_80CF48E8:
    ctx->pc = 0x80CF48E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF48E8u)) return;
    // 80CF48E8: addi    r4, r4, -3732
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-3732);

label_80CF48EC:
    ctx->pc = 0x80CF48ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF48ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CF48EC: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CF48ECu)) return;
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
label_80CF48F0:
    ctx->pc = 0x80CF48F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF48F0u)) return;
    // 80CF48F0: lis     r4, -27361
    ctx->gpr[4] = ((u32)(s32)(-27361) << 16);

label_80CF48F4:
    ctx->pc = 0x80CF48F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF48F4u)) return;
    // 80CF48F4: addi    r4, r4, -3728
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-3728);

label_80CF48F8:
    ctx->pc = 0x80CF48F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF48F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CF48F8: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CF48F8u)) return;
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
label_80CF48FC:
    ctx->pc = 0x80CF48FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF48FCu)) return;
    // 80CF48FC: lis     r4, -27361
    ctx->gpr[4] = ((u32)(s32)(-27361) << 16);

label_80CF4900:
    ctx->pc = 0x80CF4900u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4900u)) return;
    // 80CF4900: addi    r4, r4, -3724
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-3724);

label_80CF4904:
    ctx->pc = 0x80CF4904u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4904u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CF4904: lfs     f4, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CF4904u)) return;
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
label_80CF4908:
    ctx->pc = 0x80CF4908u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4908u)) return;
    // 80CF4908: lis     r4, -27361
    ctx->gpr[4] = ((u32)(s32)(-27361) << 16);

label_80CF490C:
    ctx->pc = 0x80CF490Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF490Cu)) return;
    // 80CF490C: addi    r4, r4, -3720
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-3720);

label_80CF4910:
    ctx->pc = 0x80CF4910u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4910u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CF4910: lfs     f5, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CF4910u)) return;
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
label_80CF4914:
    ctx->pc = 0x80CF4914u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4914u)) return;
    // 80CF4914: bl      0x8045E570
    {
            ctx->lr = 0x80CF4918u;
            ctx->pc = 0x8045E570u;
            return;
    }

label_80CF4918:
    ctx->pc = 0x80CF4918u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4918u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CF4918: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CF491C:
    ctx->pc = 0x80CF491Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF491Cu)) return;
    // 80CF491C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CF4920:
    ctx->pc = 0x80CF4920u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4920u)) return;
    // 80CF4920: lis     r5, -27361
    ctx->gpr[5] = ((u32)(s32)(-27361) << 16);

label_80CF4924:
    ctx->pc = 0x80CF4924u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4924u)) return;
    // 80CF4924: addi    r5, r5, -3716
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3716);

label_80CF4928:
    ctx->pc = 0x80CF4928u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4928u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CF4928: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CF4928u)) return;
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
label_80CF492C:
    ctx->pc = 0x80CF492Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF492Cu)) return;
    // 80CF492C: lis     r5, -27361
    ctx->gpr[5] = ((u32)(s32)(-27361) << 16);

label_80CF4930:
    ctx->pc = 0x80CF4930u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4930u)) return;
    // 80CF4930: addi    r5, r5, -3712
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3712);

label_80CF4934:
    ctx->pc = 0x80CF4934u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4934u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CF4934: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CF4934u)) return;
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
label_80CF4938:
    ctx->pc = 0x80CF4938u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4938u)) return;
    // 80CF4938: lis     r5, -27361
    ctx->gpr[5] = ((u32)(s32)(-27361) << 16);

label_80CF493C:
    ctx->pc = 0x80CF493Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF493Cu)) return;
    // 80CF493C: addi    r5, r5, -3708
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3708);

label_80CF4940:
    ctx->pc = 0x80CF4940u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4940u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CF4940: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CF4940u)) return;
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
label_80CF4944:
    ctx->pc = 0x80CF4944u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4944u)) return;
    // 80CF4944: bl      0x8045C750
    {
            ctx->lr = 0x80CF4948u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80CF4948:
    ctx->pc = 0x80CF4948u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4948u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80CF4948: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CF494C:
    ctx->pc = 0x80CF494Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF494Cu)) return;
    // 80CF494C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CF4950:
    ctx->pc = 0x80CF4950u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4950u)) return;
    // 80CF4950: li      r5, 5376
    ctx->gpr[5] = (u32)(s32)(5376);

label_80CF4954:
    ctx->pc = 0x80CF4954u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4954u)) return;
    // 80CF4954: li      r6, 11008
    ctx->gpr[6] = (u32)(s32)(11008);

label_80CF4958:
    ctx->pc = 0x80CF4958u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4958u)) return;
    // 80CF4958: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CF495C:
    ctx->pc = 0x80CF495Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF495Cu)) return;
    // 80CF495C: bl      0x8045C7B4
    {
            ctx->lr = 0x80CF4960u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CF4960:
    ctx->pc = 0x80CF4960u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4960u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CF4960: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CF4964:
    ctx->pc = 0x80CF4964u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4964u)) return;
    // 80CF4964: li      r4, 140
    ctx->gpr[4] = (u32)(s32)(140);

label_80CF4968:
    ctx->pc = 0x80CF4968u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4968u)) return;
    // 80CF4968: lis     r5, -27361
    ctx->gpr[5] = ((u32)(s32)(-27361) << 16);

label_80CF496C:
    ctx->pc = 0x80CF496Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF496Cu)) return;
    // 80CF496C: addi    r5, r5, -3704
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3704);

label_80CF4970:
    ctx->pc = 0x80CF4970u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4970u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CF4970: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CF4970u)) return;
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
label_80CF4974:
    ctx->pc = 0x80CF4974u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4974u)) return;
    // 80CF4974: lis     r5, -27361
    ctx->gpr[5] = ((u32)(s32)(-27361) << 16);

label_80CF4978:
    ctx->pc = 0x80CF4978u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4978u)) return;
    // 80CF4978: addi    r5, r5, -3712
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3712);

label_80CF497C:
    ctx->pc = 0x80CF497Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF497Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CF497C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CF497Cu)) return;
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
label_80CF4980:
    ctx->pc = 0x80CF4980u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4980u)) return;
    // 80CF4980: lis     r5, -27361
    ctx->gpr[5] = ((u32)(s32)(-27361) << 16);

label_80CF4984:
    ctx->pc = 0x80CF4984u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4984u)) return;
    // 80CF4984: addi    r5, r5, -3700
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3700);

label_80CF4988:
    ctx->pc = 0x80CF4988u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4988u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CF4988: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CF4988u)) return;
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
label_80CF498C:
    ctx->pc = 0x80CF498Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF498Cu)) return;
    // 80CF498C: bl      0x8045C750
    {
            ctx->lr = 0x80CF4990u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80CF4990:
    ctx->pc = 0x80CF4990u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4990u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80CF4990: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CF4994:
    ctx->pc = 0x80CF4994u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4994u)) return;
    // 80CF4994: li      r4, 140
    ctx->gpr[4] = (u32)(s32)(140);

label_80CF4998:
    ctx->pc = 0x80CF4998u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4998u)) return;
    // 80CF4998: li      r5, 5376
    ctx->gpr[5] = (u32)(s32)(5376);

label_80CF499C:
    ctx->pc = 0x80CF499Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF499Cu)) return;
    // 80CF499C: li      r6, 5632
    ctx->gpr[6] = (u32)(s32)(5632);

label_80CF49A0:
    ctx->pc = 0x80CF49A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF49A0u)) return;
    // 80CF49A0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CF49A4:
    ctx->pc = 0x80CF49A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF49A4u)) return;
    // 80CF49A4: bl      0x8045C7B4
    {
            ctx->lr = 0x80CF49A8u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CF49A8:
    ctx->pc = 0x80CF49A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF49A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CF49A8: li      r3, 70
    ctx->gpr[3] = (u32)(s32)(70);

label_80CF49AC:
    ctx->pc = 0x80CF49ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF49ACu)) return;
    // 80CF49AC: bl      0x8045F7C8
    {
            ctx->lr = 0x80CF49B0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CF49B0:
    ctx->pc = 0x80CF49B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF49B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CF49B0: li      r3, 1409
    ctx->gpr[3] = (u32)(s32)(1409);

label_80CF49B4:
    ctx->pc = 0x80CF49B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF49B4u)) return;
    // 80CF49B4: bl      0x8045BFA0
    {
            ctx->lr = 0x80CF49B8u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80CF49B8:
    ctx->pc = 0x80CF49B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF49B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CF49B8: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CF49BC:
    ctx->pc = 0x80CF49BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF49BCu)) return;
    // 80CF49BC: bl      0x8045F220
    {
            ctx->lr = 0x80CF49C0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CF49C0:
    ctx->pc = 0x80CF49C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF49C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CF49C0: lis     r4, -27361
    ctx->gpr[4] = ((u32)(s32)(-27361) << 16);

label_80CF49C4:
    ctx->pc = 0x80CF49C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF49C4u)) return;
    // 80CF49C4: addi    r4, r4, -1540
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1540);

label_80CF49C8:
    ctx->pc = 0x80CF49C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF49C8u)) return;
    // 80CF49C8: bl      0x8045C060
    {
            ctx->lr = 0x80CF49CCu;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80CF49CC:
    ctx->pc = 0x80CF49CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF49CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80CF49CC: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80CF49D0:
    ctx->pc = 0x80CF49D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF49D0u)) return;
    // 80CF49D0: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80CF49D4:
    ctx->pc = 0x80CF49D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF49D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CF49D4: lwz     r0, 0(r3)
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
label_80CF49D8:
    ctx->pc = 0x80CF49D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF49D8u)) return;
    // 80CF49D8: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80CF49DC:
    ctx->pc = 0x80CF49DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF49DCu)) return;
    // 80CF49DC: lis     r3, -27361
    ctx->gpr[3] = ((u32)(s32)(-27361) << 16);

label_80CF49E0:
    ctx->pc = 0x80CF49E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF49E0u)) return;
    // 80CF49E0: addi    r3, r3, -1640
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1640);

label_80CF49E4:
    ctx->pc = 0x80CF49E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF49E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CF49E4: lwzx    r3, r3, r0
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
label_80CF49E8:
    ctx->pc = 0x80CF49E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF49E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CF49E8: lwz     r3, 16(r3)
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
label_80CF49EC:
    ctx->pc = 0x80CF49ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF49ECu)) return;
    // 80CF49EC: bl      0x8045F6FC
    {
            ctx->lr = 0x80CF49F0u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80CF49F0:
    ctx->pc = 0x80CF49F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF49F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CF49F0: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80CF49F4:
    ctx->pc = 0x80CF49F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF49F4u)) return;
    // 80CF49F4: bl      0x8045F7C8
    {
            ctx->lr = 0x80CF49F8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CF49F8:
    ctx->pc = 0x80CF49F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF49F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CF49F8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CF49FC:
    ctx->pc = 0x80CF49FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF49FCu)) return;
    // 80CF49FC: li      r4, 250
    ctx->gpr[4] = (u32)(s32)(250);

label_80CF4A00:
    ctx->pc = 0x80CF4A00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4A00u)) return;
    // 80CF4A00: lis     r5, -27361
    ctx->gpr[5] = ((u32)(s32)(-27361) << 16);

label_80CF4A04:
    ctx->pc = 0x80CF4A04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4A04u)) return;
    // 80CF4A04: addi    r5, r5, -3696
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3696);

label_80CF4A08:
    ctx->pc = 0x80CF4A08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4A08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CF4A08: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CF4A08u)) return;
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
label_80CF4A0C:
    ctx->pc = 0x80CF4A0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4A0Cu)) return;
    // 80CF4A0C: lis     r5, -27361
    ctx->gpr[5] = ((u32)(s32)(-27361) << 16);

label_80CF4A10:
    ctx->pc = 0x80CF4A10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4A10u)) return;
    // 80CF4A10: addi    r5, r5, -3712
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3712);

label_80CF4A14:
    ctx->pc = 0x80CF4A14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4A14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CF4A14: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CF4A14u)) return;
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
label_80CF4A18:
    ctx->pc = 0x80CF4A18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4A18u)) return;
    // 80CF4A18: lis     r5, -27361
    ctx->gpr[5] = ((u32)(s32)(-27361) << 16);

label_80CF4A1C:
    ctx->pc = 0x80CF4A1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4A1Cu)) return;
    // 80CF4A1C: addi    r5, r5, -3692
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3692);

label_80CF4A20:
    ctx->pc = 0x80CF4A20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4A20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CF4A20: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CF4A20u)) return;
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
label_80CF4A24:
    ctx->pc = 0x80CF4A24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4A24u)) return;
    // 80CF4A24: bl      0x8045C750
    {
            ctx->lr = 0x80CF4A28u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80CF4A28:
    ctx->pc = 0x80CF4A28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4A28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80CF4A28: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CF4A2C:
    ctx->pc = 0x80CF4A2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4A2Cu)) return;
    // 80CF4A2C: li      r4, 250
    ctx->gpr[4] = (u32)(s32)(250);

label_80CF4A30:
    ctx->pc = 0x80CF4A30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4A30u)) return;
    // 80CF4A30: li      r5, 5376
    ctx->gpr[5] = (u32)(s32)(5376);

label_80CF4A34:
    ctx->pc = 0x80CF4A34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4A34u)) return;
    // 80CF4A34: li      r6, 7168
    ctx->gpr[6] = (u32)(s32)(7168);

label_80CF4A38:
    ctx->pc = 0x80CF4A38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4A38u)) return;
    // 80CF4A38: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CF4A3C:
    ctx->pc = 0x80CF4A3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4A3Cu)) return;
    // 80CF4A3C: bl      0x8045C7B4
    {
            ctx->lr = 0x80CF4A40u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CF4A40:
    ctx->pc = 0x80CF4A40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4A40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CF4A40: li      r3, 16
    ctx->gpr[3] = (u32)(s32)(16);

label_80CF4A44:
    ctx->pc = 0x80CF4A44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4A44u)) return;
    // 80CF4A44: bl      0x8045F7C8
    {
            ctx->lr = 0x80CF4A48u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CF4A48:
    ctx->pc = 0x80CF4A48u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4A48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CF4A48: bl      0x8045BFF4
    {
            ctx->lr = 0x80CF4A4Cu;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80CF4A4C:
    ctx->pc = 0x80CF4A4Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4A4Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CF4A4C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CF4A50:
    ctx->pc = 0x80CF4A50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4A50u)) return;
    // 80CF4A50: bl      0x8045F220
    {
            ctx->lr = 0x80CF4A54u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CF4A54:
    ctx->pc = 0x80CF4A54u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4A54u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CF4A54: bl      0x8045C034
    {
            ctx->lr = 0x80CF4A58u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80CF4A58:
    ctx->pc = 0x80CF4A58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4A58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CF4A58: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CF4A5C:
    ctx->pc = 0x80CF4A5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4A5Cu)) return;
    // 80CF4A5C: bl      0x8045F220
    {
            ctx->lr = 0x80CF4A60u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CF4A60:
    ctx->pc = 0x80CF4A60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4A60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CF4A60: bl      0x8045EB8C
    {
            ctx->lr = 0x80CF4A64u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80CF4A64:
    ctx->pc = 0x80CF4A64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4A64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CF4A64: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CF4A68:
    ctx->pc = 0x80CF4A68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4A68u)) return;
    // 80CF4A68: bl      0x8045F220
    {
            ctx->lr = 0x80CF4A6Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CF4A6C:
    ctx->pc = 0x80CF4A6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4A6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CF4A6C: lis     r4, -27360
    ctx->gpr[4] = ((u32)(s32)(-27360) << 16);

label_80CF4A70:
    ctx->pc = 0x80CF4A70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4A70u)) return;
    // 80CF4A70: addi    r4, r4, -2968
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-2968);

label_80CF4A74:
    ctx->pc = 0x80CF4A74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4A74u)) return;
    // 80CF4A74: lis     r5, -28615
    ctx->gpr[5] = ((u32)(s32)(-28615) << 16);

label_80CF4A78:
    ctx->pc = 0x80CF4A78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4A78u)) return;
    // 80CF4A78: addi    r5, r5, -7300
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-7300);

label_80CF4A7C:
    ctx->pc = 0x80CF4A7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4A7Cu)) return;
    // 80CF4A7C: lis     r6, -27361
    ctx->gpr[6] = ((u32)(s32)(-27361) << 16);

label_80CF4A80:
    ctx->pc = 0x80CF4A80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4A80u)) return;
    // 80CF4A80: addi    r6, r6, -3688
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-3688);

label_80CF4A84:
    ctx->pc = 0x80CF4A84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4A84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CF4A84: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80CF4A84u)) return;
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
label_80CF4A88:
    ctx->pc = 0x80CF4A88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4A88u)) return;
    // 80CF4A88: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80CF4A8C:
    ctx->pc = 0x80CF4A8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4A8Cu)) return;
    // 80CF4A8C: li      r7, 4
    ctx->gpr[7] = (u32)(s32)(4);

label_80CF4A90:
    ctx->pc = 0x80CF4A90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4A90u)) return;
    // 80CF4A90: bl      0x8045EBE4
    {
            ctx->lr = 0x80CF4A94u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80CF4A94:
    ctx->pc = 0x80CF4A94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4A94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CF4A94: bl      0x8045F32C
    {
            ctx->lr = 0x80CF4A98u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80CF4A98:
    ctx->pc = 0x80CF4A98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4A98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CF4A98: li      r3, 1410
    ctx->gpr[3] = (u32)(s32)(1410);

label_80CF4A9C:
    ctx->pc = 0x80CF4A9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4A9Cu)) return;
    // 80CF4A9C: bl      0x8045BFA0
    {
            ctx->lr = 0x80CF4AA0u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80CF4AA0:
    ctx->pc = 0x80CF4AA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4AA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CF4AA0: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CF4AA4:
    ctx->pc = 0x80CF4AA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4AA4u)) return;
    // 80CF4AA4: bl      0x8045F220
    {
            ctx->lr = 0x80CF4AA8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CF4AA8:
    ctx->pc = 0x80CF4AA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4AA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CF4AA8: lis     r4, -27361
    ctx->gpr[4] = ((u32)(s32)(-27361) << 16);

label_80CF4AAC:
    ctx->pc = 0x80CF4AACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4AACu)) return;
    // 80CF4AAC: addi    r4, r4, -1536
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1536);

label_80CF4AB0:
    ctx->pc = 0x80CF4AB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4AB0u)) return;
    // 80CF4AB0: bl      0x8045C060
    {
            ctx->lr = 0x80CF4AB4u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80CF4AB4:
    ctx->pc = 0x80CF4AB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4AB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80CF4AB4: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80CF4AB8:
    ctx->pc = 0x80CF4AB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4AB8u)) return;
    // 80CF4AB8: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80CF4ABC:
    ctx->pc = 0x80CF4ABCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4ABCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CF4ABC: lwz     r0, 0(r3)
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
label_80CF4AC0:
    ctx->pc = 0x80CF4AC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4AC0u)) return;
    // 80CF4AC0: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80CF4AC4:
    ctx->pc = 0x80CF4AC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4AC4u)) return;
    // 80CF4AC4: lis     r3, -27361
    ctx->gpr[3] = ((u32)(s32)(-27361) << 16);

label_80CF4AC8:
    ctx->pc = 0x80CF4AC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4AC8u)) return;
    // 80CF4AC8: addi    r3, r3, -1640
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1640);

label_80CF4ACC:
    ctx->pc = 0x80CF4ACCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4ACCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CF4ACC: lwzx    r3, r3, r0
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
label_80CF4AD0:
    ctx->pc = 0x80CF4AD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4AD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CF4AD0: lwz     r3, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF4AD4:
    ctx->pc = 0x80CF4AD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4AD4u)) return;
    // 80CF4AD4: bl      0x8045F6FC
    {
            ctx->lr = 0x80CF4AD8u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80CF4AD8:
    ctx->pc = 0x80CF4AD8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4AD8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CF4AD8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CF4ADC:
    ctx->pc = 0x80CF4ADCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4ADCu)) return;
    // 80CF4ADC: bl      0x8045F7C8
    {
            ctx->lr = 0x80CF4AE0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CF4AE0:
    ctx->pc = 0x80CF4AE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4AE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CF4AE0: bl      0x8045BFF4
    {
            ctx->lr = 0x80CF4AE4u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80CF4AE4:
    ctx->pc = 0x80CF4AE4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4AE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CF4AE4: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CF4AE8:
    ctx->pc = 0x80CF4AE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4AE8u)) return;
    // 80CF4AE8: bl      0x8045F220
    {
            ctx->lr = 0x80CF4AECu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CF4AEC:
    ctx->pc = 0x80CF4AECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4AECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CF4AEC: bl      0x8045C034
    {
            ctx->lr = 0x80CF4AF0u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80CF4AF0:
    ctx->pc = 0x80CF4AF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4AF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CF4AF0: bl      0x8045F32C
    {
            ctx->lr = 0x80CF4AF4u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80CF4AF4:
    ctx->pc = 0x80CF4AF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4AF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CF4AF4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CF4AF8:
    ctx->pc = 0x80CF4AF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4AF8u)) return;
    // 80CF4AF8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CF4AFC:
    ctx->pc = 0x80CF4AFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4AFCu)) return;
    // 80CF4AFC: lis     r5, -27361
    ctx->gpr[5] = ((u32)(s32)(-27361) << 16);

label_80CF4B00:
    ctx->pc = 0x80CF4B00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4B00u)) return;
    // 80CF4B00: addi    r5, r5, -3684
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3684);

label_80CF4B04:
    ctx->pc = 0x80CF4B04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4B04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CF4B04: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CF4B04u)) return;
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
label_80CF4B08:
    ctx->pc = 0x80CF4B08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4B08u)) return;
    // 80CF4B08: lis     r5, -27361
    ctx->gpr[5] = ((u32)(s32)(-27361) << 16);

label_80CF4B0C:
    ctx->pc = 0x80CF4B0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4B0Cu)) return;
    // 80CF4B0C: addi    r5, r5, -3680
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3680);

label_80CF4B10:
    ctx->pc = 0x80CF4B10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4B10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CF4B10: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CF4B10u)) return;
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
label_80CF4B14:
    ctx->pc = 0x80CF4B14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4B14u)) return;
    // 80CF4B14: lis     r5, -27361
    ctx->gpr[5] = ((u32)(s32)(-27361) << 16);

label_80CF4B18:
    ctx->pc = 0x80CF4B18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4B18u)) return;
    // 80CF4B18: addi    r5, r5, -3676
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3676);

label_80CF4B1C:
    ctx->pc = 0x80CF4B1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4B1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CF4B1C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CF4B1Cu)) return;
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
label_80CF4B20:
    ctx->pc = 0x80CF4B20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4B20u)) return;
    // 80CF4B20: bl      0x8045C750
    {
            ctx->lr = 0x80CF4B24u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80CF4B24:
    ctx->pc = 0x80CF4B24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4B24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80CF4B24: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CF4B28:
    ctx->pc = 0x80CF4B28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4B28u)) return;
    // 80CF4B28: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CF4B2C:
    ctx->pc = 0x80CF4B2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4B2Cu)) return;
    // 80CF4B2C: lis     r7, 1
    ctx->gpr[7] = ((u32)(s32)(1) << 16);

label_80CF4B30:
    ctx->pc = 0x80CF4B30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4B30u)) return;
    // 80CF4B30: addi    r5, r7, -8587
    ctx->gpr[5] = ctx->gpr[7] + (u32)(s32)(-8587);

label_80CF4B34:
    ctx->pc = 0x80CF4B34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4B34u)) return;
    // 80CF4B34: li      r6, 28855
    ctx->gpr[6] = (u32)(s32)(28855);

label_80CF4B38:
    ctx->pc = 0x80CF4B38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4B38u)) return;
    // 80CF4B38: addi    r7, r7, -2217
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-2217);

label_80CF4B3C:
    ctx->pc = 0x80CF4B3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4B3Cu)) return;
    // 80CF4B3C: bl      0x8045C7B4
    {
            ctx->lr = 0x80CF4B40u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CF4B40:
    ctx->pc = 0x80CF4B40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4B40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CF4B40: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CF4B44:
    ctx->pc = 0x80CF4B44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4B44u)) return;
    // 80CF4B44: bl      0x8045F220
    {
            ctx->lr = 0x80CF4B48u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CF4B48:
    ctx->pc = 0x80CF4B48u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4B48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CF4B48: lis     r4, -27360
    ctx->gpr[4] = ((u32)(s32)(-27360) << 16);

label_80CF4B4C:
    ctx->pc = 0x80CF4B4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4B4Cu)) return;
    // 80CF4B4C: addi    r4, r4, -13356
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-13356);

label_80CF4B50:
    ctx->pc = 0x80CF4B50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4B50u)) return;
    // 80CF4B50: lis     r5, -28615
    ctx->gpr[5] = ((u32)(s32)(-28615) << 16);

label_80CF4B54:
    ctx->pc = 0x80CF4B54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4B54u)) return;
    // 80CF4B54: addi    r5, r5, -7300
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-7300);

label_80CF4B58:
    ctx->pc = 0x80CF4B58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4B58u)) return;
    // 80CF4B58: lis     r6, -27361
    ctx->gpr[6] = ((u32)(s32)(-27361) << 16);

label_80CF4B5C:
    ctx->pc = 0x80CF4B5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4B5Cu)) return;
    // 80CF4B5C: addi    r6, r6, -3812
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-3812);

label_80CF4B60:
    ctx->pc = 0x80CF4B60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4B60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CF4B60: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80CF4B60u)) return;
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
label_80CF4B64:
    ctx->pc = 0x80CF4B64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4B64u)) return;
    // 80CF4B64: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80CF4B68:
    ctx->pc = 0x80CF4B68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4B68u)) return;
    // 80CF4B68: li      r7, 16
    ctx->gpr[7] = (u32)(s32)(16);

label_80CF4B6C:
    ctx->pc = 0x80CF4B6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4B6Cu)) return;
    // 80CF4B6C: bl      0x8045EBE4
    {
            ctx->lr = 0x80CF4B70u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80CF4B70:
    ctx->pc = 0x80CF4B70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4B70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CF4B70: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CF4B74:
    ctx->pc = 0x80CF4B74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4B74u)) return;
    // 80CF4B74: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_80CF4B78:
    ctx->pc = 0x80CF4B78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4B78u)) return;
    // 80CF4B78: lis     r5, -27361
    ctx->gpr[5] = ((u32)(s32)(-27361) << 16);

label_80CF4B7C:
    ctx->pc = 0x80CF4B7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4B7Cu)) return;
    // 80CF4B7C: addi    r5, r5, -3672
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3672);

label_80CF4B80:
    ctx->pc = 0x80CF4B80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4B80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CF4B80: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CF4B80u)) return;
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
label_80CF4B84:
    ctx->pc = 0x80CF4B84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4B84u)) return;
    // 80CF4B84: lis     r5, -27361
    ctx->gpr[5] = ((u32)(s32)(-27361) << 16);

label_80CF4B88:
    ctx->pc = 0x80CF4B88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4B88u)) return;
    // 80CF4B88: addi    r5, r5, -3668
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3668);

label_80CF4B8C:
    ctx->pc = 0x80CF4B8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4B8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CF4B8C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CF4B8Cu)) return;
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
label_80CF4B90:
    ctx->pc = 0x80CF4B90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4B90u)) return;
    // 80CF4B90: lis     r5, -27361
    ctx->gpr[5] = ((u32)(s32)(-27361) << 16);

label_80CF4B94:
    ctx->pc = 0x80CF4B94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4B94u)) return;
    // 80CF4B94: addi    r5, r5, -3664
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3664);

label_80CF4B98:
    ctx->pc = 0x80CF4B98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4B98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CF4B98: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CF4B98u)) return;
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
label_80CF4B9C:
    ctx->pc = 0x80CF4B9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4B9Cu)) return;
    // 80CF4B9C: bl      0x8045C750
    {
            ctx->lr = 0x80CF4BA0u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80CF4BA0:
    ctx->pc = 0x80CF4BA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4BA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80CF4BA0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CF4BA4:
    ctx->pc = 0x80CF4BA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4BA4u)) return;
    // 80CF4BA4: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_80CF4BA8:
    ctx->pc = 0x80CF4BA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4BA8u)) return;
    // 80CF4BA8: lis     r7, 1
    ctx->gpr[7] = ((u32)(s32)(1) << 16);

label_80CF4BAC:
    ctx->pc = 0x80CF4BACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4BACu)) return;
    // 80CF4BAC: addi    r5, r7, -5259
    ctx->gpr[5] = ctx->gpr[7] + (u32)(s32)(-5259);

label_80CF4BB0:
    ctx->pc = 0x80CF4BB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4BB0u)) return;
    // 80CF4BB0: li      r6, 27063
    ctx->gpr[6] = (u32)(s32)(27063);

label_80CF4BB4:
    ctx->pc = 0x80CF4BB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4BB4u)) return;
    // 80CF4BB4: addi    r7, r7, -1024
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-1024);

label_80CF4BB8:
    ctx->pc = 0x80CF4BB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4BB8u)) return;
    // 80CF4BB8: bl      0x8045C7B4
    {
            ctx->lr = 0x80CF4BBCu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CF4BBC:
    ctx->pc = 0x80CF4BBCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4BBCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CF4BBC: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_80CF4BC0:
    ctx->pc = 0x80CF4BC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4BC0u)) return;
    // 80CF4BC0: bl      0x8045F7C8
    {
            ctx->lr = 0x80CF4BC4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CF4BC4:
    ctx->pc = 0x80CF4BC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4BC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CF4BC4: li      r3, 1411
    ctx->gpr[3] = (u32)(s32)(1411);

label_80CF4BC8:
    ctx->pc = 0x80CF4BC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4BC8u)) return;
    // 80CF4BC8: bl      0x8045BFA0
    {
            ctx->lr = 0x80CF4BCCu;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80CF4BCC:
    ctx->pc = 0x80CF4BCCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4BCCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CF4BCC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CF4BD0:
    ctx->pc = 0x80CF4BD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4BD0u)) return;
    // 80CF4BD0: bl      0x8045F220
    {
            ctx->lr = 0x80CF4BD4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CF4BD4:
    ctx->pc = 0x80CF4BD4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4BD4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CF4BD4: lis     r4, -27361
    ctx->gpr[4] = ((u32)(s32)(-27361) << 16);

label_80CF4BD8:
    ctx->pc = 0x80CF4BD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4BD8u)) return;
    // 80CF4BD8: addi    r4, r4, -1532
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1532);

label_80CF4BDC:
    ctx->pc = 0x80CF4BDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4BDCu)) return;
    // 80CF4BDC: bl      0x8045C060
    {
            ctx->lr = 0x80CF4BE0u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80CF4BE0:
    ctx->pc = 0x80CF4BE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4BE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80CF4BE0: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80CF4BE4:
    ctx->pc = 0x80CF4BE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4BE4u)) return;
    // 80CF4BE4: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80CF4BE8:
    ctx->pc = 0x80CF4BE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4BE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CF4BE8: lwz     r0, 0(r3)
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
label_80CF4BEC:
    ctx->pc = 0x80CF4BECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4BECu)) return;
    // 80CF4BEC: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80CF4BF0:
    ctx->pc = 0x80CF4BF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4BF0u)) return;
    // 80CF4BF0: lis     r3, -27361
    ctx->gpr[3] = ((u32)(s32)(-27361) << 16);

label_80CF4BF4:
    ctx->pc = 0x80CF4BF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4BF4u)) return;
    // 80CF4BF4: addi    r3, r3, -1640
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1640);

label_80CF4BF8:
    ctx->pc = 0x80CF4BF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4BF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CF4BF8: lwzx    r3, r3, r0
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
label_80CF4BFC:
    ctx->pc = 0x80CF4BFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4BFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CF4BFC: lwz     r3, 24(r3)
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
label_80CF4C00:
    ctx->pc = 0x80CF4C00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4C00u)) return;
    // 80CF4C00: bl      0x8045F6FC
    {
            ctx->lr = 0x80CF4C04u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80CF4C04:
    ctx->pc = 0x80CF4C04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4C04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CF4C04: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CF4C08:
    ctx->pc = 0x80CF4C08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4C08u)) return;
    // 80CF4C08: bl      0x8045F7C8
    {
            ctx->lr = 0x80CF4C0Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CF4C0C:
    ctx->pc = 0x80CF4C0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4C0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CF4C0C: bl      0x8045BFF4
    {
            ctx->lr = 0x80CF4C10u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80CF4C10:
    ctx->pc = 0x80CF4C10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4C10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CF4C10: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CF4C14:
    ctx->pc = 0x80CF4C14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4C14u)) return;
    // 80CF4C14: bl      0x8045F220
    {
            ctx->lr = 0x80CF4C18u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CF4C18:
    ctx->pc = 0x80CF4C18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4C18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CF4C18: bl      0x8045C034
    {
            ctx->lr = 0x80CF4C1Cu;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80CF4C1C:
    ctx->pc = 0x80CF4C1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4C1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CF4C1C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CF4C20:
    ctx->pc = 0x80CF4C20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4C20u)) return;
    // 80CF4C20: bl      0x8045F220
    {
            ctx->lr = 0x80CF4C24u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CF4C24:
    ctx->pc = 0x80CF4C24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4C24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CF4C24: lis     r4, -27360
    ctx->gpr[4] = ((u32)(s32)(-27360) << 16);

label_80CF4C28:
    ctx->pc = 0x80CF4C28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4C28u)) return;
    // 80CF4C28: addi    r4, r4, -22192
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-22192);

label_80CF4C2C:
    ctx->pc = 0x80CF4C2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4C2Cu)) return;
    // 80CF4C2C: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80CF4C30:
    ctx->pc = 0x80CF4C30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4C30u)) return;
    // 80CF4C30: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80CF4C34:
    ctx->pc = 0x80CF4C34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4C34u)) return;
    // 80CF4C34: lis     r6, -27361
    ctx->gpr[6] = ((u32)(s32)(-27361) << 16);

label_80CF4C38:
    ctx->pc = 0x80CF4C38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4C38u)) return;
    // 80CF4C38: addi    r6, r6, -3812
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-3812);

label_80CF4C3C:
    ctx->pc = 0x80CF4C3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4C3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CF4C3C: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80CF4C3Cu)) return;
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
label_80CF4C40:
    ctx->pc = 0x80CF4C40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4C40u)) return;
    // 80CF4C40: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80CF4C44:
    ctx->pc = 0x80CF4C44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4C44u)) return;
    // 80CF4C44: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_80CF4C48:
    ctx->pc = 0x80CF4C48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4C48u)) return;
    // 80CF4C48: bl      0x8045EBE4
    {
            ctx->lr = 0x80CF4C4Cu;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80CF4C4C:
    ctx->pc = 0x80CF4C4Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4C4Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CF4C4C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CF4C50:
    ctx->pc = 0x80CF4C50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4C50u)) return;
    // 80CF4C50: bl      0x8045F220
    {
            ctx->lr = 0x80CF4C54u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CF4C54:
    ctx->pc = 0x80CF4C54u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4C54u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CF4C54: lis     r4, -27361
    ctx->gpr[4] = ((u32)(s32)(-27361) << 16);

label_80CF4C58:
    ctx->pc = 0x80CF4C58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4C58u)) return;
    // 80CF4C58: addi    r4, r4, 15056
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(15056);

label_80CF4C5C:
    ctx->pc = 0x80CF4C5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4C5Cu)) return;
    // 80CF4C5C: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80CF4C60:
    ctx->pc = 0x80CF4C60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4C60u)) return;
    // 80CF4C60: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80CF4C64:
    ctx->pc = 0x80CF4C64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4C64u)) return;
    // 80CF4C64: lis     r6, -27361
    ctx->gpr[6] = ((u32)(s32)(-27361) << 16);

label_80CF4C68:
    ctx->pc = 0x80CF4C68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4C68u)) return;
    // 80CF4C68: addi    r6, r6, -3660
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-3660);

label_80CF4C6C:
    ctx->pc = 0x80CF4C6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4C6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CF4C6C: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80CF4C6Cu)) return;
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
label_80CF4C70:
    ctx->pc = 0x80CF4C70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4C70u)) return;
    // 80CF4C70: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80CF4C74:
    ctx->pc = 0x80CF4C74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4C74u)) return;
    // 80CF4C74: li      r7, 4
    ctx->gpr[7] = (u32)(s32)(4);

label_80CF4C78:
    ctx->pc = 0x80CF4C78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4C78u)) return;
    // 80CF4C78: bl      0x8045EBE4
    {
            ctx->lr = 0x80CF4C7Cu;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80CF4C7C:
    ctx->pc = 0x80CF4C7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4C7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CF4C7C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CF4C80:
    ctx->pc = 0x80CF4C80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4C80u)) return;
    // 80CF4C80: bl      0x8045F220
    {
            ctx->lr = 0x80CF4C84u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CF4C84:
    ctx->pc = 0x80CF4C84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4C84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CF4C84: lis     r4, -27361
    ctx->gpr[4] = ((u32)(s32)(-27361) << 16);

label_80CF4C88:
    ctx->pc = 0x80CF4C88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4C88u)) return;
    // 80CF4C88: addi    r4, r4, 5164
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(5164);

label_80CF4C8C:
    ctx->pc = 0x80CF4C8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4C8Cu)) return;
    // 80CF4C8C: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80CF4C90:
    ctx->pc = 0x80CF4C90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4C90u)) return;
    // 80CF4C90: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80CF4C94:
    ctx->pc = 0x80CF4C94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4C94u)) return;
    // 80CF4C94: lis     r6, -27361
    ctx->gpr[6] = ((u32)(s32)(-27361) << 16);

label_80CF4C98:
    ctx->pc = 0x80CF4C98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4C98u)) return;
    // 80CF4C98: addi    r6, r6, -3656
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-3656);

label_80CF4C9C:
    ctx->pc = 0x80CF4C9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4C9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CF4C9C: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80CF4C9Cu)) return;
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
label_80CF4CA0:
    ctx->pc = 0x80CF4CA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4CA0u)) return;
    // 80CF4CA0: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80CF4CA4:
    ctx->pc = 0x80CF4CA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4CA4u)) return;
    // 80CF4CA4: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_80CF4CA8:
    ctx->pc = 0x80CF4CA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4CA8u)) return;
    // 80CF4CA8: bl      0x8045EBE4
    {
            ctx->lr = 0x80CF4CACu;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80CF4CAC:
    ctx->pc = 0x80CF4CACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4CACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CF4CAC: li      r3, 1412
    ctx->gpr[3] = (u32)(s32)(1412);

label_80CF4CB0:
    ctx->pc = 0x80CF4CB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4CB0u)) return;
    // 80CF4CB0: bl      0x8045BFA0
    {
            ctx->lr = 0x80CF4CB4u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80CF4CB4:
    ctx->pc = 0x80CF4CB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4CB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CF4CB4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CF4CB8:
    ctx->pc = 0x80CF4CB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4CB8u)) return;
    // 80CF4CB8: bl      0x8045F220
    {
            ctx->lr = 0x80CF4CBCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CF4CBC:
    ctx->pc = 0x80CF4CBCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4CBCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CF4CBC: lis     r4, -27361
    ctx->gpr[4] = ((u32)(s32)(-27361) << 16);

label_80CF4CC0:
    ctx->pc = 0x80CF4CC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4CC0u)) return;
    // 80CF4CC0: addi    r4, r4, -1528
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1528);

label_80CF4CC4:
    ctx->pc = 0x80CF4CC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4CC4u)) return;
    // 80CF4CC4: bl      0x8045C060
    {
            ctx->lr = 0x80CF4CC8u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80CF4CC8:
    ctx->pc = 0x80CF4CC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4CC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80CF4CC8: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80CF4CCC:
    ctx->pc = 0x80CF4CCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4CCCu)) return;
    // 80CF4CCC: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80CF4CD0:
    ctx->pc = 0x80CF4CD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4CD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CF4CD0: lwz     r0, 0(r3)
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
label_80CF4CD4:
    ctx->pc = 0x80CF4CD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4CD4u)) return;
    // 80CF4CD4: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80CF4CD8:
    ctx->pc = 0x80CF4CD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4CD8u)) return;
    // 80CF4CD8: lis     r3, -27361
    ctx->gpr[3] = ((u32)(s32)(-27361) << 16);

label_80CF4CDC:
    ctx->pc = 0x80CF4CDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4CDCu)) return;
    // 80CF4CDC: addi    r3, r3, -1640
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1640);

label_80CF4CE0:
    ctx->pc = 0x80CF4CE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4CE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CF4CE0: lwzx    r3, r3, r0
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
label_80CF4CE4:
    ctx->pc = 0x80CF4CE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4CE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CF4CE4: lwz     r3, 28(r3)
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
label_80CF4CE8:
    ctx->pc = 0x80CF4CE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4CE8u)) return;
    // 80CF4CE8: bl      0x8045F6FC
    {
            ctx->lr = 0x80CF4CECu;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80CF4CEC:
    ctx->pc = 0x80CF4CECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4CECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CF4CEC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CF4CF0:
    ctx->pc = 0x80CF4CF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4CF0u)) return;
    // 80CF4CF0: bl      0x8045F7C8
    {
            ctx->lr = 0x80CF4CF4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CF4CF4:
    ctx->pc = 0x80CF4CF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4CF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CF4CF4: bl      0x8045BFF4
    {
            ctx->lr = 0x80CF4CF8u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80CF4CF8:
    ctx->pc = 0x80CF4CF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4CF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CF4CF8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CF4CFC:
    ctx->pc = 0x80CF4CFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4CFCu)) return;
    // 80CF4CFC: bl      0x8045F220
    {
            ctx->lr = 0x80CF4D00u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CF4D00:
    ctx->pc = 0x80CF4D00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4D00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CF4D00: bl      0x8045C034
    {
            ctx->lr = 0x80CF4D04u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80CF4D04:
    ctx->pc = 0x80CF4D04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4D04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CF4D04: li      r3, 1413
    ctx->gpr[3] = (u32)(s32)(1413);

label_80CF4D08:
    ctx->pc = 0x80CF4D08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4D08u)) return;
    // 80CF4D08: bl      0x8045BFA0
    {
            ctx->lr = 0x80CF4D0Cu;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80CF4D0C:
    ctx->pc = 0x80CF4D0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4D0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CF4D0C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CF4D10:
    ctx->pc = 0x80CF4D10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4D10u)) return;
    // 80CF4D10: bl      0x8045F220
    {
            ctx->lr = 0x80CF4D14u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CF4D14:
    ctx->pc = 0x80CF4D14u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4D14u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CF4D14: lis     r4, -27361
    ctx->gpr[4] = ((u32)(s32)(-27361) << 16);

label_80CF4D18:
    ctx->pc = 0x80CF4D18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4D18u)) return;
    // 80CF4D18: addi    r4, r4, -1524
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1524);

label_80CF4D1C:
    ctx->pc = 0x80CF4D1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4D1Cu)) return;
    // 80CF4D1C: bl      0x8045C060
    {
            ctx->lr = 0x80CF4D20u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80CF4D20:
    ctx->pc = 0x80CF4D20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4D20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80CF4D20: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80CF4D24:
    ctx->pc = 0x80CF4D24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4D24u)) return;
    // 80CF4D24: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80CF4D28:
    ctx->pc = 0x80CF4D28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4D28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CF4D28: lwz     r0, 0(r3)
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
label_80CF4D2C:
    ctx->pc = 0x80CF4D2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4D2Cu)) return;
    // 80CF4D2C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80CF4D30:
    ctx->pc = 0x80CF4D30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4D30u)) return;
    // 80CF4D30: lis     r3, -27361
    ctx->gpr[3] = ((u32)(s32)(-27361) << 16);

label_80CF4D34:
    ctx->pc = 0x80CF4D34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4D34u)) return;
    // 80CF4D34: addi    r3, r3, -1640
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1640);

label_80CF4D38:
    ctx->pc = 0x80CF4D38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4D38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CF4D38: lwzx    r3, r3, r0
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
label_80CF4D3C:
    ctx->pc = 0x80CF4D3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4D3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CF4D3C: lwz     r3, 32(r3)
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
label_80CF4D40:
    ctx->pc = 0x80CF4D40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4D40u)) return;
    // 80CF4D40: bl      0x8045F6FC
    {
            ctx->lr = 0x80CF4D44u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80CF4D44:
    ctx->pc = 0x80CF4D44u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4D44u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CF4D44: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CF4D48:
    ctx->pc = 0x80CF4D48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4D48u)) return;
    // 80CF4D48: bl      0x8045F7C8
    {
            ctx->lr = 0x80CF4D4Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CF4D4C:
    ctx->pc = 0x80CF4D4Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4D4Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CF4D4C: bl      0x8045BFF4
    {
            ctx->lr = 0x80CF4D50u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80CF4D50:
    ctx->pc = 0x80CF4D50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4D50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CF4D50: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CF4D54:
    ctx->pc = 0x80CF4D54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4D54u)) return;
    // 80CF4D54: bl      0x8045F220
    {
            ctx->lr = 0x80CF4D58u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CF4D58:
    ctx->pc = 0x80CF4D58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4D58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CF4D58: bl      0x8045C034
    {
            ctx->lr = 0x80CF4D5Cu;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80CF4D5C:
    ctx->pc = 0x80CF4D5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4D5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CF4D5C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CF4D60:
    ctx->pc = 0x80CF4D60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4D60u)) return;
    // 80CF4D60: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CF4D64:
    ctx->pc = 0x80CF4D64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4D64u)) return;
    // 80CF4D64: lis     r5, -27361
    ctx->gpr[5] = ((u32)(s32)(-27361) << 16);

label_80CF4D68:
    ctx->pc = 0x80CF4D68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4D68u)) return;
    // 80CF4D68: addi    r5, r5, -3652
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3652);

label_80CF4D6C:
    ctx->pc = 0x80CF4D6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4D6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CF4D6C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CF4D6Cu)) return;
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
label_80CF4D70:
    ctx->pc = 0x80CF4D70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4D70u)) return;
    // 80CF4D70: lis     r5, -27361
    ctx->gpr[5] = ((u32)(s32)(-27361) << 16);

label_80CF4D74:
    ctx->pc = 0x80CF4D74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4D74u)) return;
    // 80CF4D74: addi    r5, r5, -3648
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3648);

label_80CF4D78:
    ctx->pc = 0x80CF4D78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4D78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CF4D78: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CF4D78u)) return;
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
label_80CF4D7C:
    ctx->pc = 0x80CF4D7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4D7Cu)) return;
    // 80CF4D7C: lis     r5, -27361
    ctx->gpr[5] = ((u32)(s32)(-27361) << 16);

label_80CF4D80:
    ctx->pc = 0x80CF4D80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4D80u)) return;
    // 80CF4D80: addi    r5, r5, -3644
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3644);

label_80CF4D84:
    ctx->pc = 0x80CF4D84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4D84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CF4D84: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CF4D84u)) return;
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
label_80CF4D88:
    ctx->pc = 0x80CF4D88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4D88u)) return;
    // 80CF4D88: bl      0x8045C750
    {
            ctx->lr = 0x80CF4D8Cu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80CF4D8C:
    ctx->pc = 0x80CF4D8Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4D8Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80CF4D8C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CF4D90:
    ctx->pc = 0x80CF4D90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4D90u)) return;
    // 80CF4D90: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CF4D94:
    ctx->pc = 0x80CF4D94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4D94u)) return;
    // 80CF4D94: li      r5, 3840
    ctx->gpr[5] = (u32)(s32)(3840);

label_80CF4D98:
    ctx->pc = 0x80CF4D98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4D98u)) return;
    // 80CF4D98: li      r6, 9728
    ctx->gpr[6] = (u32)(s32)(9728);

label_80CF4D9C:
    ctx->pc = 0x80CF4D9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4D9Cu)) return;
    // 80CF4D9C: lis     r7, 1
    ctx->gpr[7] = ((u32)(s32)(1) << 16);

label_80CF4DA0:
    ctx->pc = 0x80CF4DA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4DA0u)) return;
    // 80CF4DA0: addi    r7, r7, -1536
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-1536);

label_80CF4DA4:
    ctx->pc = 0x80CF4DA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4DA4u)) return;
    // 80CF4DA4: bl      0x8045C7B4
    {
            ctx->lr = 0x80CF4DA8u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CF4DA8:
    ctx->pc = 0x80CF4DA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4DA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CF4DA8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CF4DAC:
    ctx->pc = 0x80CF4DACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4DACu)) return;
    // 80CF4DAC: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_80CF4DB0:
    ctx->pc = 0x80CF4DB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4DB0u)) return;
    // 80CF4DB0: lis     r5, -27361
    ctx->gpr[5] = ((u32)(s32)(-27361) << 16);

label_80CF4DB4:
    ctx->pc = 0x80CF4DB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4DB4u)) return;
    // 80CF4DB4: addi    r5, r5, -3640
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3640);

label_80CF4DB8:
    ctx->pc = 0x80CF4DB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4DB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CF4DB8: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CF4DB8u)) return;
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
label_80CF4DBC:
    ctx->pc = 0x80CF4DBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4DBCu)) return;
    // 80CF4DBC: lis     r5, -27361
    ctx->gpr[5] = ((u32)(s32)(-27361) << 16);

label_80CF4DC0:
    ctx->pc = 0x80CF4DC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4DC0u)) return;
    // 80CF4DC0: addi    r5, r5, -3636
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3636);

label_80CF4DC4:
    ctx->pc = 0x80CF4DC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4DC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CF4DC4: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CF4DC4u)) return;
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
label_80CF4DC8:
    ctx->pc = 0x80CF4DC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4DC8u)) return;
    // 80CF4DC8: lis     r5, -27361
    ctx->gpr[5] = ((u32)(s32)(-27361) << 16);

label_80CF4DCC:
    ctx->pc = 0x80CF4DCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4DCCu)) return;
    // 80CF4DCC: addi    r5, r5, -3632
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3632);

label_80CF4DD0:
    ctx->pc = 0x80CF4DD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4DD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CF4DD0: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CF4DD0u)) return;
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
label_80CF4DD4:
    ctx->pc = 0x80CF4DD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4DD4u)) return;
    // 80CF4DD4: bl      0x8045C750
    {
            ctx->lr = 0x80CF4DD8u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80CF4DD8:
    ctx->pc = 0x80CF4DD8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4DD8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CF4DD8: li      r3, 1414
    ctx->gpr[3] = (u32)(s32)(1414);

label_80CF4DDC:
    ctx->pc = 0x80CF4DDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4DDCu)) return;
    // 80CF4DDC: bl      0x8045BFA0
    {
            ctx->lr = 0x80CF4DE0u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80CF4DE0:
    ctx->pc = 0x80CF4DE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4DE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CF4DE0: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CF4DE4:
    ctx->pc = 0x80CF4DE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4DE4u)) return;
    // 80CF4DE4: bl      0x8045F220
    {
            ctx->lr = 0x80CF4DE8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CF4DE8:
    ctx->pc = 0x80CF4DE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4DE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CF4DE8: lis     r4, -27361
    ctx->gpr[4] = ((u32)(s32)(-27361) << 16);

label_80CF4DEC:
    ctx->pc = 0x80CF4DECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4DECu)) return;
    // 80CF4DEC: addi    r4, r4, -1532
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1532);

label_80CF4DF0:
    ctx->pc = 0x80CF4DF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4DF0u)) return;
    // 80CF4DF0: bl      0x8045C060
    {
            ctx->lr = 0x80CF4DF4u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80CF4DF4:
    ctx->pc = 0x80CF4DF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4DF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80CF4DF4: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80CF4DF8:
    ctx->pc = 0x80CF4DF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4DF8u)) return;
    // 80CF4DF8: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80CF4DFC:
    ctx->pc = 0x80CF4DFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4DFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CF4DFC: lwz     r0, 0(r3)
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
label_80CF4E00:
    ctx->pc = 0x80CF4E00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4E00u)) return;
    // 80CF4E00: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80CF4E04:
    ctx->pc = 0x80CF4E04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4E04u)) return;
    // 80CF4E04: lis     r3, -27361
    ctx->gpr[3] = ((u32)(s32)(-27361) << 16);

label_80CF4E08:
    ctx->pc = 0x80CF4E08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4E08u)) return;
    // 80CF4E08: addi    r3, r3, -1640
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1640);

label_80CF4E0C:
    ctx->pc = 0x80CF4E0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4E0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CF4E0C: lwzx    r3, r3, r0
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
label_80CF4E10:
    ctx->pc = 0x80CF4E10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4E10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CF4E10: lwz     r3, 36(r3)
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
label_80CF4E14:
    ctx->pc = 0x80CF4E14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4E14u)) return;
    // 80CF4E14: bl      0x8045F6FC
    {
            ctx->lr = 0x80CF4E18u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80CF4E18:
    ctx->pc = 0x80CF4E18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4E18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CF4E18: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80CF4E1C:
    ctx->pc = 0x80CF4E1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4E1Cu)) return;
    // 80CF4E1C: bl      0x8045F7C8
    {
            ctx->lr = 0x80CF4E20u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CF4E20:
    ctx->pc = 0x80CF4E20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4E20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CF4E20: bl      0x8045BFF4
    {
            ctx->lr = 0x80CF4E24u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80CF4E24:
    ctx->pc = 0x80CF4E24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4E24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CF4E24: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CF4E28:
    ctx->pc = 0x80CF4E28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4E28u)) return;
    // 80CF4E28: bl      0x8045F220
    {
            ctx->lr = 0x80CF4E2Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CF4E2C:
    ctx->pc = 0x80CF4E2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4E2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CF4E2C: bl      0x8045C034
    {
            ctx->lr = 0x80CF4E30u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80CF4E30:
    ctx->pc = 0x80CF4E30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4E30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CF4E30: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80CF4E34:
    ctx->pc = 0x80CF4E34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4E34u)) return;
    // 80CF4E34: bl      0x8045F7C8
    {
            ctx->lr = 0x80CF4E38u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CF4E38:
    ctx->pc = 0x80CF4E38u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4E38u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CF4E38: b       0x80CF4E7C
    {
            goto label_80CF4E7C;
    }

label_80CF4E3C:
    ctx->pc = 0x80CF4E3Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4E3Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CF4E3C: bl      0x8045DE34
    {
            ctx->lr = 0x80CF4E40u;
            ctx->pc = 0x8045DE34u;
            return;
    }

label_80CF4E40:
    ctx->pc = 0x80CF4E40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4E40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CF4E40: bl      0x80460A80
    {
            ctx->lr = 0x80CF4E44u;
            ctx->pc = 0x80460A80u;
            return;
    }

label_80CF4E44:
    ctx->pc = 0x80CF4E44u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4E44u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CF4E44: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CF4E48:
    ctx->pc = 0x80CF4E48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4E48u)) return;
    // 80CF4E48: bl      0x8045EC10
    {
            ctx->lr = 0x80CF4E4Cu;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80CF4E4C:
    ctx->pc = 0x80CF4E4Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4E4Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CF4E4C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CF4E50:
    ctx->pc = 0x80CF4E50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4E50u)) return;
    // 80CF4E50: bl      0x8045ED54
    {
            ctx->lr = 0x80CF4E54u;
            ctx->pc = 0x8045ED54u;
            return;
    }

label_80CF4E54:
    ctx->pc = 0x80CF4E54u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4E54u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80CF4E54: lis     r3, -27360
    ctx->gpr[3] = ((u32)(s32)(-27360) << 16);

label_80CF4E58:
    ctx->pc = 0x80CF4E58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4E58u)) return;
    // 80CF4E58: addi    r3, r3, -2716
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-2716);

label_80CF4E5C:
    ctx->pc = 0x80CF4E5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4E5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CF4E5C: lwz     r3, 0(r3)
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
label_80CF4E60:
    ctx->pc = 0x80CF4E60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4E60u)) return;
    // 80CF4E60: cmplwi  r3, 0x0000
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

label_80CF4E64:
    ctx->pc = 0x80CF4E64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4E64u)) return;
    // 80CF4E64: bc    12, 2, 0x80CF4E7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CF4E7C;
        }
    }

label_80CF4E68:
    ctx->pc = 0x80CF4E68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4E68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CF4E68: bl      0x8050F9E0
    {
            ctx->lr = 0x80CF4E6Cu;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80CF4E6C:
    ctx->pc = 0x80CF4E6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4E6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80CF4E6C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80CF4E70:
    ctx->pc = 0x80CF4E70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4E70u)) return;
    // 80CF4E70: lis     r3, -27360
    ctx->gpr[3] = ((u32)(s32)(-27360) << 16);

label_80CF4E74:
    ctx->pc = 0x80CF4E74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4E74u)) return;
    // 80CF4E74: addi    r3, r3, -2716
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-2716);

label_80CF4E78:
    ctx->pc = 0x80CF4E78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4E78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CF4E78: stw     r0, 0(r3)
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
label_80CF4E7C:
    ctx->pc = 0x80CF4E7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4E7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CF4E7C: lwz     r31, 12(r1)
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
label_80CF4E80:
    ctx->pc = 0x80CF4E80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4E80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CF4E80: lwz     r0, 20(r1)
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
label_80CF4E84:
    ctx->pc = 0x80CF4E84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CF4E84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CF4E84: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF4E88:
    ctx->pc = 0x80CF4E88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4E88u)) return;
    // 80CF4E88: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CF4E8C:
    ctx->pc = 0x80CF4E8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4E8Cu)) return;
    // 80CF4E8C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CF43C0;
        }
    }

label_80CF4E90:
    ctx->pc = 0x80CF4E90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4E90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CF4E90: stwu     r1, -64(r1)
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
label_80CF4E94:
    ctx->pc = 0x80CF4E94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4E94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CF4E94: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF4E98:
    ctx->pc = 0x80CF4E98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4E98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CF4E98: stw     r0, 68(r1)
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
label_80CF4E9C:
    ctx->pc = 0x80CF4E9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4E9Cu)) return;
    // 80CF4E9C: addi    r11, r1, 64
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(64);

label_80CF4EA0:
    ctx->pc = 0x80CF4EA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4EA0u)) return;
    // 80CF4EA0: bl      0x80006DD4
    {
            ctx->lr = 0x80CF4EA4u;
            ctx->pc = 0x80006DD4u;
            return;
    }

label_80CF4EA4:
    ctx->pc = 0x80CF4EA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 29u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4EA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 29u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80CF4EA4: lwz     r27, 32(r3)
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
label_80CF4EA8:
    ctx->pc = 0x80CF4EA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4EA8u)) return;
    // 80CF4EA8: lis     r3, -27361
    ctx->gpr[3] = ((u32)(s32)(-27361) << 16);

label_80CF4EAC:
    ctx->pc = 0x80CF4EACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4EACu)) return;
    // 80CF4EAC: addi    r3, r3, -3624
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3624);

label_80CF4EB0:
    ctx->pc = 0x80CF4EB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4EB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80CF4EB0: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CF4EB0u)) return;
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
label_80CF4EB4:
    ctx->pc = 0x80CF4EB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4EB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80CF4EB4: lfs     f0, 44(r27)
    if (!ppc_fp_available_inline(ctx, 0x80CF4EB4u)) return;
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
label_80CF4EB8:
    ctx->pc = 0x80CF4EB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4EB8u)) return;
    // 80CF4EB8: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80CF4EB8u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80CF4EBC:
    ctx->pc = 0x80CF4EBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4EBCu)) return;
    // 80CF4EBC: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80CF4EBCu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80CF4EC0:
    ctx->pc = 0x80CF4EC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4EC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80CF4EC0: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CF4EC0u)) return;
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
label_80CF4EC4:
    ctx->pc = 0x80CF4EC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4EC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80CF4EC4: lwz     r31, 12(r1)
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
label_80CF4EC8:
    ctx->pc = 0x80CF4EC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4EC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80CF4EC8: lfs     f0, 32(r27)
    if (!ppc_fp_available_inline(ctx, 0x80CF4EC8u)) return;
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
label_80CF4ECC:
    ctx->pc = 0x80CF4ECCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4ECCu)) return;
    // 80CF4ECC: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80CF4ECCu)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80CF4ED0:
    ctx->pc = 0x80CF4ED0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4ED0u)) return;
    // 80CF4ED0: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80CF4ED0u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80CF4ED4:
    ctx->pc = 0x80CF4ED4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4ED4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80CF4ED4: stfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CF4ED4u)) return;
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
label_80CF4ED8:
    ctx->pc = 0x80CF4ED8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4ED8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80CF4ED8: lwz     r30, 20(r1)
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
label_80CF4EDC:
    ctx->pc = 0x80CF4EDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4EDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80CF4EDC: lfs     f0, 36(r27)
    if (!ppc_fp_available_inline(ctx, 0x80CF4EDCu)) return;
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
label_80CF4EE0:
    ctx->pc = 0x80CF4EE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4EE0u)) return;
    // 80CF4EE0: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80CF4EE0u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80CF4EE4:
    ctx->pc = 0x80CF4EE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4EE4u)) return;
    // 80CF4EE4: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80CF4EE4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80CF4EE8:
    ctx->pc = 0x80CF4EE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4EE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CF4EE8: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CF4EE8u)) return;
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
label_80CF4EEC:
    ctx->pc = 0x80CF4EECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4EECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CF4EEC: lwz     r29, 28(r1)
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
label_80CF4EF0:
    ctx->pc = 0x80CF4EF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4EF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CF4EF0: lfs     f0, 40(r27)
    if (!ppc_fp_available_inline(ctx, 0x80CF4EF0u)) return;
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
label_80CF4EF4:
    ctx->pc = 0x80CF4EF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4EF4u)) return;
    // 80CF4EF4: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80CF4EF4u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80CF4EF8:
    ctx->pc = 0x80CF4EF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4EF8u)) return;
    // 80CF4EF8: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80CF4EF8u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80CF4EFC:
    ctx->pc = 0x80CF4EFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4EFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CF4EFC: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CF4EFCu)) return;
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
label_80CF4F00:
    ctx->pc = 0x80CF4F00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4F00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CF4F00: lwz     r28, 36(r1)
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
label_80CF4F04:
    ctx->pc = 0x80CF4F04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4F04u)) return;
    // 80CF4F04: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80CF4F08:
    ctx->pc = 0x80CF4F08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4F08u)) return;
    // 80CF4F08: addi    r3, r3, 4120
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4120);

label_80CF4F0C:
    ctx->pc = 0x80CF4F0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4F0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CF4F0C: lwz     r0, 0(r3)
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
label_80CF4F10:
    ctx->pc = 0x80CF4F10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4F10u)) return;
    // 80CF4F10: cmpwi   r0, 0
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

label_80CF4F14:
    ctx->pc = 0x80CF4F14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4F14u)) return;
    // 80CF4F14: bc    4, 2, 0x80CF4FCC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CF4FCC;
        }
    }

label_80CF4F18:
    ctx->pc = 0x80CF4F18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4F18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CF4F18: rlwinm r0, r31, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_80CF4F1C:
    ctx->pc = 0x80CF4F1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4F1Cu)) return;
    // 80CF4F1C: cmplwi  r0, 0x0000
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

label_80CF4F20:
    ctx->pc = 0x80CF4F20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4F20u)) return;
    // 80CF4F20: bc    12, 2, 0x80CF4FCC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CF4FCC;
        }
    }

label_80CF4F24:
    ctx->pc = 0x80CF4F24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4F24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CF4F24: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CF4F28:
    ctx->pc = 0x80CF4F28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4F28u)) return;
    // 80CF4F28: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_80CF4F2C:
    ctx->pc = 0x80CF4F2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4F2Cu)) return;
    // 80CF4F2C: bl      0x8060F4F8
    {
            ctx->lr = 0x80CF4F30u;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80CF4F30:
    ctx->pc = 0x80CF4F30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4F30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CF4F30: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CF4F34:
    ctx->pc = 0x80CF4F34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4F34u)) return;
    // 80CF4F34: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80CF4F38:
    ctx->pc = 0x80CF4F38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4F38u)) return;
    // 80CF4F38: bl      0x8060F4F8
    {
            ctx->lr = 0x80CF4F3Cu;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80CF4F3C:
    ctx->pc = 0x80CF4F3Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4F3Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CF4F3C: lfs     f5, 52(r27)
    if (!ppc_fp_available_inline(ctx, 0x80CF4F3Cu)) return;
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
label_80CF4F40:
    ctx->pc = 0x80CF4F40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4F40u)) return;
    // 80CF4F40: lis     r3, -27361
    ctx->gpr[3] = ((u32)(s32)(-27361) << 16);

label_80CF4F44:
    ctx->pc = 0x80CF4F44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4F44u)) return;
    // 80CF4F44: addi    r3, r3, -3616
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3616);

label_80CF4F48:
    ctx->pc = 0x80CF4F48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4F48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CF4F48: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CF4F48u)) return;
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
label_80CF4F4C:
    ctx->pc = 0x80CF4F4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4F4Cu)) return;
    // 80CF4F4C: fcmpo   cr0, f5, f0
    if (!ppc_fp_available_inline(ctx, 0x80CF4F4Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[5], ctx->fpr[0], true);

label_80CF4F50:
    ctx->pc = 0x80CF4F50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4F50u)) return;
    // 80CF4F50: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80CF4F54:
    ctx->pc = 0x80CF4F54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4F54u)) return;
    // 80CF4F54: bc    4, 2, 0x80CF4F68
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CF4F68;
        }
    }

label_80CF4F58:
    ctx->pc = 0x80CF4F58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4F58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80CF4F58: lis     r3, -27361
    ctx->gpr[3] = ((u32)(s32)(-27361) << 16);

label_80CF4F5C:
    ctx->pc = 0x80CF4F5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4F5Cu)) return;
    // 80CF4F5C: addi    r3, r3, -3620
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3620);

label_80CF4F60:
    ctx->pc = 0x80CF4F60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4F60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CF4F60: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CF4F60u)) return;
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
label_80CF4F64:
    ctx->pc = 0x80CF4F64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4F64u)) return;
    // 80CF4F64: fadds   f5, f5, f0
    if (!ppc_fp_available_inline(ctx, 0x80CF4F64u)) return;
    ppc_fadds(ctx, 5, 5, 0);

label_80CF4F68:
    ctx->pc = 0x80CF4F68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4F68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CF4F68: rlwinm r0, r31, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_80CF4F6C:
    ctx->pc = 0x80CF4F6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4F6Cu)) return;
    // 80CF4F6C: cmplwi  r0, 0x00FF
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

label_80CF4F70:
    ctx->pc = 0x80CF4F70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4F70u)) return;
    // 80CF4F70: bc    4, 1, 0x80CF4F78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CF4F78;
        }
    }

label_80CF4F74:
    ctx->pc = 0x80CF4F74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4F74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CF4F74: li      r31, 255
    ctx->gpr[31] = (u32)(s32)(255);

label_80CF4F78:
    ctx->pc = 0x80CF4F78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 21u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4F78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 21u : 1u;
    // 80CF4F78: lis     r3, -27361
    ctx->gpr[3] = ((u32)(s32)(-27361) << 16);

label_80CF4F7C:
    ctx->pc = 0x80CF4F7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4F7Cu)) return;
    // 80CF4F7C: addi    r3, r3, -3612
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3612);

label_80CF4F80:
    ctx->pc = 0x80CF4F80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4F80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80CF4F80: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CF4F80u)) return;
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
label_80CF4F84:
    ctx->pc = 0x80CF4F84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4F84u)) return;
    // 80CF4F84: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80CF4F84u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_80CF4F88:
    ctx->pc = 0x80CF4F88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4F88u)) return;
    // 80CF4F88: lis     r3, -27361
    ctx->gpr[3] = ((u32)(s32)(-27361) << 16);

label_80CF4F8C:
    ctx->pc = 0x80CF4F8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4F8Cu)) return;
    // 80CF4F8C: addi    r3, r3, -3608
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3608);

label_80CF4F90:
    ctx->pc = 0x80CF4F90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4F90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80CF4F90: lfs     f3, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CF4F90u)) return;
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
label_80CF4F94:
    ctx->pc = 0x80CF4F94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4F94u)) return;
    // 80CF4F94: lis     r3, -27361
    ctx->gpr[3] = ((u32)(s32)(-27361) << 16);

label_80CF4F98:
    ctx->pc = 0x80CF4F98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4F98u)) return;
    // 80CF4F98: addi    r3, r3, -3604
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3604);

label_80CF4F9C:
    ctx->pc = 0x80CF4F9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4F9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CF4F9C: lfs     f4, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CF4F9Cu)) return;
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
label_80CF4FA0:
    ctx->pc = 0x80CF4FA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4FA0u)) return;
    // 80CF4FA0: rlwinm r5, r28, 0, 24, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[28], 0u) & 0x000000FFu;
    }

label_80CF4FA4:
    ctx->pc = 0x80CF4FA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4FA4u)) return;
    // 80CF4FA4: rlwinm r0, r29, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[29], 0u) & 0x000000FFu;
    }

label_80CF4FA8:
    ctx->pc = 0x80CF4FA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4FA8u)) return;
    // 80CF4FA8: rlwinm r4, r0, 8, 0, 23
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 8u) & 0xFFFFFF00u;
    }

label_80CF4FAC:
    ctx->pc = 0x80CF4FACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4FACu)) return;
    // 80CF4FAC: rlwinm r0, r31, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_80CF4FB0:
    ctx->pc = 0x80CF4FB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4FB0u)) return;
    // 80CF4FB0: rlwinm r3, r0, 24, 0, 7
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 24u) & 0xFF000000u;
    }

label_80CF4FB4:
    ctx->pc = 0x80CF4FB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4FB4u)) return;
    // 80CF4FB4: rlwinm r0, r30, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0x000000FFu;
    }

label_80CF4FB8:
    ctx->pc = 0x80CF4FB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4FB8u)) return;
    // 80CF4FB8: rlwinm r0, r0, 16, 0, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 16u) & 0xFFFF0000u;
    }

label_80CF4FBC:
    ctx->pc = 0x80CF4FBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4FBCu)) return;
    // 80CF4FBC: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80CF4FC0:
    ctx->pc = 0x80CF4FC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4FC0u)) return;
    // 80CF4FC0: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_80CF4FC4:
    ctx->pc = 0x80CF4FC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4FC4u)) return;
    // 80CF4FC4: or   r3, r5, r0
    {
        ctx->gpr[3] = ctx->gpr[5] | ctx->gpr[0];
    }

label_80CF4FC8:
    ctx->pc = 0x80CF4FC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4FC8u)) return;
    // 80CF4FC8: bl      0x80CF5188
    {
            ctx->lr = 0x80CF4FCCu;
            goto label_80CF5188;
    }

label_80CF4FCC:
    ctx->pc = 0x80CF4FCCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4FCCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CF4FCC: addi    r11, r1, 64
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(64);

label_80CF4FD0:
    ctx->pc = 0x80CF4FD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4FD0u)) return;
    // 80CF4FD0: bl      0x80006E20
    {
            ctx->lr = 0x80CF4FD4u;
            ctx->pc = 0x80006E20u;
            return;
    }

label_80CF4FD4:
    ctx->pc = 0x80CF4FD4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4FD4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CF4FD4: lwz     r0, 68(r1)
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
label_80CF4FD8:
    ctx->pc = 0x80CF4FD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CF4FD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CF4FD8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF4FDC:
    ctx->pc = 0x80CF4FDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4FDCu)) return;
    // 80CF4FDC: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_80CF4FE0:
    ctx->pc = 0x80CF4FE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4FE0u)) return;
    // 80CF4FE0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CF43C0;
        }
    }

label_80CF4FE4:
    ctx->pc = 0x80CF4FE4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF4FE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CF4FE4: stwu     r1, -16(r1)
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
label_80CF4FE8:
    ctx->pc = 0x80CF4FE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4FE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CF4FE8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF4FEC:
    ctx->pc = 0x80CF4FECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4FECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CF4FEC: stw     r0, 20(r1)
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
label_80CF4FF0:
    ctx->pc = 0x80CF4FF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4FF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CF4FF0: lwz     r5, 32(r3)
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
label_80CF4FF4:
    ctx->pc = 0x80CF4FF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4FF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CF4FF4: lfs     f1, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CF4FF4u)) return;
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
label_80CF4FF8:
    ctx->pc = 0x80CF4FF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4FF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CF4FF8: lfs     f0, 48(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CF4FF8u)) return;
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
label_80CF4FFC:
    ctx->pc = 0x80CF4FFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF4FFCu)) return;
    // 80CF4FFC: fadds   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80CF4FFCu)) return;
    ppc_fadds(ctx, 1, 1, 0);

label_80CF5000:
    ctx->pc = 0x80CF5000u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5000u)) return;
    // 80CF5000: lis     r4, -27361
    ctx->gpr[4] = ((u32)(s32)(-27361) << 16);

label_80CF5004:
    ctx->pc = 0x80CF5004u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5004u)) return;
    // 80CF5004: addi    r4, r4, -3600
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-3600);

label_80CF5008:
    ctx->pc = 0x80CF5008u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5008u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CF5008: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CF5008u)) return;
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
label_80CF500C:
    ctx->pc = 0x80CF500Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF500Cu)) return;
    // 80CF500C: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80CF500Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80CF5010:
    ctx->pc = 0x80CF5010u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5010u)) return;
    // 80CF5010: bc    4, 1, 0x80CF501C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CF501C;
        }
    }

label_80CF5014:
    ctx->pc = 0x80CF5014u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF5014u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CF5014: fmr    f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80CF5014u)) return;
    ctx->fpr[1] = ctx->fpr[0];

label_80CF5018:
    ctx->pc = 0x80CF5018u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5018u)) return;
    // 80CF5018: b       0x80CF5034
    {
            goto label_80CF5034;
    }

label_80CF501C:
    ctx->pc = 0x80CF501Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF501Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80CF501C: lis     r4, -27361
    ctx->gpr[4] = ((u32)(s32)(-27361) << 16);

label_80CF5020:
    ctx->pc = 0x80CF5020u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5020u)) return;
    // 80CF5020: addi    r4, r4, -3612
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-3612);

label_80CF5024:
    ctx->pc = 0x80CF5024u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5024u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CF5024: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CF5024u)) return;
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
label_80CF5028:
    ctx->pc = 0x80CF5028u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5028u)) return;
    // 80CF5028: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80CF5028u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80CF502C:
    ctx->pc = 0x80CF502Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF502Cu)) return;
    // 80CF502C: bc    4, 0, 0x80CF5034
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CF5034;
        }
    }

label_80CF5030:
    ctx->pc = 0x80CF5030u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF5030u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CF5030: fmr    f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80CF5030u)) return;
    ctx->fpr[1] = ctx->fpr[0];

label_80CF5034:
    ctx->pc = 0x80CF5034u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF5034u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CF5034: stfs     f1, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CF5034u)) return;
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
label_80CF5038:
    ctx->pc = 0x80CF5038u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5038u)) return;
    // 80CF5038: bl      0x80CF4E90
    {
            ctx->lr = 0x80CF503Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80CF4E90u;
                return;
            }
            goto label_80CF4E90;
    }

label_80CF503C:
    ctx->pc = 0x80CF503Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF503Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CF503C: lwz     r0, 20(r1)
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
label_80CF5040:
    ctx->pc = 0x80CF5040u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CF5040u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CF5040: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF5044:
    ctx->pc = 0x80CF5044u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5044u)) return;
    // 80CF5044: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CF5048:
    ctx->pc = 0x80CF5048u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5048u)) return;
    // 80CF5048: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CF43C0;
        }
    }

label_80CF504C:
    ctx->pc = 0x80CF504Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF504Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CF504C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CF43C0;
        }
    }

label_80CF5050:
    ctx->pc = 0x80CF5050u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF5050u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80CF5050: stwu     r1, -16(r1)
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
label_80CF5054:
    ctx->pc = 0x80CF5054u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5054u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CF5054: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF5058:
    ctx->pc = 0x80CF5058u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5058u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CF5058: stw     r0, 20(r1)
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
label_80CF505C:
    ctx->pc = 0x80CF505Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF505Cu)) return;
    // 80CF505C: lis     r4, -32561
    ctx->gpr[4] = ((u32)(s32)(-32561) << 16);

label_80CF5060:
    ctx->pc = 0x80CF5060u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5060u)) return;
    // 80CF5060: addi    r0, r4, 20452
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(20452);

label_80CF5064:
    ctx->pc = 0x80CF5064u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5064u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CF5064: stw     r0, 16(r3)
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
label_80CF5068:
    ctx->pc = 0x80CF5068u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5068u)) return;
    // 80CF5068: lis     r4, -32561
    ctx->gpr[4] = ((u32)(s32)(-32561) << 16);

label_80CF506C:
    ctx->pc = 0x80CF506Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF506Cu)) return;
    // 80CF506C: addi    r0, r4, 20112
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(20112);

label_80CF5070:
    ctx->pc = 0x80CF5070u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5070u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CF5070: stw     r0, 20(r3)
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
label_80CF5074:
    ctx->pc = 0x80CF5074u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5074u)) return;
    // 80CF5074: lis     r4, -32561
    ctx->gpr[4] = ((u32)(s32)(-32561) << 16);

label_80CF5078:
    ctx->pc = 0x80CF5078u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5078u)) return;
    // 80CF5078: addi    r0, r4, 20556
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(20556);

label_80CF507C:
    ctx->pc = 0x80CF507Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF507Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CF507C: stw     r0, 24(r3)
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
label_80CF5080:
    ctx->pc = 0x80CF5080u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5080u)) return;
    // 80CF5080: bl      0x80CF4FE4
    {
            ctx->lr = 0x80CF5084u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80CF4FE4u;
                return;
            }
            goto label_80CF4FE4;
    }

label_80CF5084:
    ctx->pc = 0x80CF5084u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF5084u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CF5084: lwz     r0, 20(r1)
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
label_80CF5088:
    ctx->pc = 0x80CF5088u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CF5088u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CF5088: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF508C:
    ctx->pc = 0x80CF508Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF508Cu)) return;
    // 80CF508C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CF5090:
    ctx->pc = 0x80CF5090u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5090u)) return;
    // 80CF5090: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CF43C0;
        }
    }

label_80CF5094:
    ctx->pc = 0x80CF5094u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 23u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF5094u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 23u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80CF5094: stwu     r1, -96(r1)
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
label_80CF5098:
    ctx->pc = 0x80CF5098u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5098u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80CF5098: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF509C:
    ctx->pc = 0x80CF509Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF509Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80CF509C: stw     r0, 100(r1)
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
label_80CF50A0:
    ctx->pc = 0x80CF50A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF50A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80CF50A0: stfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CF50A0u)) return;
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
label_80CF50A4:
    ctx->pc = 0x80CF50A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF50A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80CF50A4: psq_st   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80CF50A4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80CF50A4u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF50A8:
    ctx->pc = 0x80CF50A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF50A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80CF50A8: stfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CF50A8u)) return;
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
label_80CF50AC:
    ctx->pc = 0x80CF50ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF50ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80CF50AC: psq_st   f30, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80CF50ACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x80CF50ACu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF50B0:
    ctx->pc = 0x80CF50B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF50B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80CF50B0: stfd     f29, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CF50B0u)) return;
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
label_80CF50B4:
    ctx->pc = 0x80CF50B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF50B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80CF50B4: psq_st   f29, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80CF50B4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x80CF50B4u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF50B8:
    ctx->pc = 0x80CF50B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF50B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80CF50B8: stfd     f28, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CF50B8u)) return;
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
label_80CF50BC:
    ctx->pc = 0x80CF50BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF50BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80CF50BC: psq_st   f28, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80CF50BCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x80CF50BCu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF50C0:
    ctx->pc = 0x80CF50C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF50C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CF50C0: stfd     f27, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CF50C0u)) return;
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
label_80CF50C4:
    ctx->pc = 0x80CF50C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF50C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CF50C4: psq_st   f27, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80CF50C4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_store_inline(ctx, 27u, ea, false, 0u, false, 0x80CF50C4u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF50C8:
    ctx->pc = 0x80CF50C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF50C8u)) return;
    // 80CF50C8: fmr    f27, f1
    if (!ppc_fp_available_inline(ctx, 0x80CF50C8u)) return;
    ctx->fpr[27] = ctx->fpr[1];

label_80CF50CC:
    ctx->pc = 0x80CF50CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF50CCu)) return;
    // 80CF50CC: fmr    f28, f2
    if (!ppc_fp_available_inline(ctx, 0x80CF50CCu)) return;
    ctx->fpr[28] = ctx->fpr[2];

label_80CF50D0:
    ctx->pc = 0x80CF50D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF50D0u)) return;
    // 80CF50D0: fmr    f29, f3
    if (!ppc_fp_available_inline(ctx, 0x80CF50D0u)) return;
    ctx->fpr[29] = ctx->fpr[3];

label_80CF50D4:
    ctx->pc = 0x80CF50D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF50D4u)) return;
    // 80CF50D4: fmr    f30, f4
    if (!ppc_fp_available_inline(ctx, 0x80CF50D4u)) return;
    ctx->fpr[30] = ctx->fpr[4];

label_80CF50D8:
    ctx->pc = 0x80CF50D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF50D8u)) return;
    // 80CF50D8: fmr    f31, f5
    if (!ppc_fp_available_inline(ctx, 0x80CF50D8u)) return;
    ctx->fpr[31] = ctx->fpr[5];

label_80CF50DC:
    ctx->pc = 0x80CF50DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF50DCu)) return;
    // 80CF50DC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CF50E0:
    ctx->pc = 0x80CF50E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF50E0u)) return;
    // 80CF50E0: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80CF50E4:
    ctx->pc = 0x80CF50E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF50E4u)) return;
    // 80CF50E4: lis     r5, -32561
    ctx->gpr[5] = ((u32)(s32)(-32561) << 16);

label_80CF50E8:
    ctx->pc = 0x80CF50E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF50E8u)) return;
    // 80CF50E8: addi    r5, r5, 20560
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(20560);

label_80CF50EC:
    ctx->pc = 0x80CF50ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF50ECu)) return;
    // 80CF50EC: bl      0x8050FD60
    {
            ctx->lr = 0x80CF50F0u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80CF50F0:
    ctx->pc = 0x80CF50F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 25u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF50F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 25u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80CF50F0: lwz     r5, 32(r3)
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
label_80CF50F4:
    ctx->pc = 0x80CF50F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF50F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80CF50F4: stfs     f27, 48(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CF50F4u)) return;
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
label_80CF50F8:
    ctx->pc = 0x80CF50F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF50F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80CF50F8: stfs     f28, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CF50F8u)) return;
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
label_80CF50FC:
    ctx->pc = 0x80CF50FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF50FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80CF50FC: stfs     f29, 32(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CF50FCu)) return;
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
label_80CF5100:
    ctx->pc = 0x80CF5100u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5100u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80CF5100: stfs     f30, 36(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CF5100u)) return;
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
label_80CF5104:
    ctx->pc = 0x80CF5104u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5104u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80CF5104: stfs     f31, 40(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CF5104u)) return;
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
label_80CF5108:
    ctx->pc = 0x80CF5108u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5108u)) return;
    // 80CF5108: lis     r4, -27361
    ctx->gpr[4] = ((u32)(s32)(-27361) << 16);

label_80CF510C:
    ctx->pc = 0x80CF510Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF510Cu)) return;
    // 80CF510C: addi    r4, r4, -3616
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-3616);

label_80CF5110:
    ctx->pc = 0x80CF5110u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5110u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80CF5110: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CF5110u)) return;
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
label_80CF5114:
    ctx->pc = 0x80CF5114u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5114u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80CF5114: stfs     f0, 52(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CF5114u)) return;
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
label_80CF5118:
    ctx->pc = 0x80CF5118u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5118u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80CF5118: psq_l   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80CF5118u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80CF5118u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF511C:
    ctx->pc = 0x80CF511Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF511Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80CF511C: lfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CF511Cu)) return;
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
label_80CF5120:
    ctx->pc = 0x80CF5120u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5120u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80CF5120: psq_l   f30, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80CF5120u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x80CF5120u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF5124:
    ctx->pc = 0x80CF5124u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5124u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CF5124: lfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CF5124u)) return;
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
label_80CF5128:
    ctx->pc = 0x80CF5128u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5128u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CF5128: psq_l   f29, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80CF5128u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x80CF5128u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF512C:
    ctx->pc = 0x80CF512Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF512Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CF512C: lfd     f29, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CF512Cu)) return;
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
label_80CF5130:
    ctx->pc = 0x80CF5130u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5130u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CF5130: psq_l   f28, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80CF5130u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x80CF5130u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF5134:
    ctx->pc = 0x80CF5134u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5134u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CF5134: lfd     f28, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CF5134u)) return;
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
label_80CF5138:
    ctx->pc = 0x80CF5138u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5138u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CF5138: psq_l   f27, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80CF5138u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_load_inline(ctx, 27u, ea, false, 0u, false, 0x80CF5138u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF513C:
    ctx->pc = 0x80CF513Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF513Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CF513C: lfd     f27, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CF513Cu)) return;
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
label_80CF5140:
    ctx->pc = 0x80CF5140u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5140u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CF5140: lwz     r0, 100(r1)
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
label_80CF5144:
    ctx->pc = 0x80CF5144u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CF5144u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CF5144: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF5148:
    ctx->pc = 0x80CF5148u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5148u)) return;
    // 80CF5148: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_80CF514C:
    ctx->pc = 0x80CF514Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF514Cu)) return;
    // 80CF514C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CF43C0;
        }
    }

label_80CF5150:
    ctx->pc = 0x80CF5150u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF5150u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CF5150: lwz     r3, 32(r3)
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
label_80CF5154:
    ctx->pc = 0x80CF5154u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5154u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CF5154: stfs     f1, 48(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CF5154u)) return;
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
label_80CF5158:
    ctx->pc = 0x80CF5158u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5158u)) return;
    // 80CF5158: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CF43C0;
        }
    }

label_80CF515C:
    ctx->pc = 0x80CF515Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF515Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CF515C: lwz     r3, 32(r3)
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
label_80CF5160:
    ctx->pc = 0x80CF5160u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5160u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CF5160: stfs     f1, 44(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CF5160u)) return;
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
label_80CF5164:
    ctx->pc = 0x80CF5164u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5164u)) return;
    // 80CF5164: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CF43C0;
        }
    }

label_80CF5168:
    ctx->pc = 0x80CF5168u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF5168u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CF5168: lwz     r3, 32(r3)
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
label_80CF516C:
    ctx->pc = 0x80CF516Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF516Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CF516C: stfs     f1, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CF516Cu)) return;
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
label_80CF5170:
    ctx->pc = 0x80CF5170u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5170u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CF5170: stfs     f2, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CF5170u)) return;
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
label_80CF5174:
    ctx->pc = 0x80CF5174u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5174u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CF5174: stfs     f3, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CF5174u)) return;
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
label_80CF5178:
    ctx->pc = 0x80CF5178u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5178u)) return;
    // 80CF5178: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CF43C0;
        }
    }

label_80CF517C:
    ctx->pc = 0x80CF517Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF517Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CF517C: lwz     r3, 32(r3)
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
label_80CF5180:
    ctx->pc = 0x80CF5180u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5180u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CF5180: stfs     f1, 52(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CF5180u)) return;
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
label_80CF5184:
    ctx->pc = 0x80CF5184u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5184u)) return;
    // 80CF5184: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CF43C0;
        }
    }

label_80CF5188:
    ctx->pc = 0x80CF5188u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF5188u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CF5188: stwu     r1, -16(r1)
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
label_80CF518C:
    ctx->pc = 0x80CF518Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF518Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CF518C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF5190:
    ctx->pc = 0x80CF5190u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5190u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CF5190: stw     r0, 20(r1)
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
label_80CF5194:
    ctx->pc = 0x80CF5194u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5194u)) return;
    // 80CF5194: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80CF5198:
    ctx->pc = 0x80CF5198u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5198u)) return;
    // 80CF5198: bl      0x80607948
    {
            ctx->lr = 0x80CF519Cu;
            ctx->pc = 0x80607948u;
            return;
    }

label_80CF519C:
    ctx->pc = 0x80CF519Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF519Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CF519C: lwz     r0, 20(r1)
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
label_80CF51A0:
    ctx->pc = 0x80CF51A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CF51A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CF51A0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF51A4:
    ctx->pc = 0x80CF51A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF51A4u)) return;
    // 80CF51A4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CF51A8:
    ctx->pc = 0x80CF51A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF51A8u)) return;
    // 80CF51A8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CF43C0;
        }
    }

label_80CF51AC:
    ctx->pc = 0x80CF51ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF51ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CF51AC: stwu     r1, -16(r1)
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
label_80CF51B0:
    ctx->pc = 0x80CF51B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF51B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CF51B0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF51B4:
    ctx->pc = 0x80CF51B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF51B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CF51B4: stw     r0, 20(r1)
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
label_80CF51B8:
    ctx->pc = 0x80CF51B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF51B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CF51B8: stw     r31, 12(r1)
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
label_80CF51BC:
    ctx->pc = 0x80CF51BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF51BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CF51BC: lwz     r4, 32(r3)
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
label_80CF51C0:
    ctx->pc = 0x80CF51C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF51C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CF51C0: lwz     r31, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF51C4:
    ctx->pc = 0x80CF51C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF51C4u)) return;
    // 80CF51C4: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80CF51C8:
    ctx->pc = 0x80CF51C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF51C8u)) return;
    // 80CF51C8: bl      0x8047EB28
    {
            ctx->lr = 0x80CF51CCu;
            ctx->pc = 0x8047EB28u;
            return;
    }

label_80CF51CC:
    ctx->pc = 0x80CF51CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF51CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CF51CC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80CF51D0:
    ctx->pc = 0x80CF51D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF51D0u)) return;
    // 80CF51D0: bl      0x8047EA34
    {
            ctx->lr = 0x80CF51D4u;
            ctx->pc = 0x8047EA34u;
            return;
    }

label_80CF51D4:
    ctx->pc = 0x80CF51D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF51D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CF51D4: lwz     r31, 12(r1)
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
label_80CF51D8:
    ctx->pc = 0x80CF51D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF51D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CF51D8: lwz     r0, 20(r1)
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
label_80CF51DC:
    ctx->pc = 0x80CF51DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CF51DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CF51DC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF51E0:
    ctx->pc = 0x80CF51E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF51E0u)) return;
    // 80CF51E0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CF51E4:
    ctx->pc = 0x80CF51E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF51E4u)) return;
    // 80CF51E4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CF43C0;
        }
    }

label_80CF51E8:
    ctx->pc = 0x80CF51E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF51E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CF51E8: lwz     r3, 32(r3)
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
label_80CF51EC:
    ctx->pc = 0x80CF51ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF51ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CF51EC: lwz     r4, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF51F0:
    ctx->pc = 0x80CF51F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF51F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CF51F0: lwz     r5, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF51F4:
    ctx->pc = 0x80CF51F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF51F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CF51F4: lwz     r3, 32(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF51F8:
    ctx->pc = 0x80CF51F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF51F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CF51F8: lfs     f0, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CF51F8u)) return;
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
label_80CF51FC:
    ctx->pc = 0x80CF51FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF51FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CF51FC: stfs     f0, 8(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CF51FCu)) return;
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
label_80CF5200:
    ctx->pc = 0x80CF5200u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5200u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CF5200: lwz     r3, 32(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF5204:
    ctx->pc = 0x80CF5204u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5204u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CF5204: lfs     f0, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CF5204u)) return;
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
label_80CF5208:
    ctx->pc = 0x80CF5208u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5208u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CF5208: stfs     f0, 16(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CF5208u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF520C:
    ctx->pc = 0x80CF520Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF520Cu)) return;
    // 80CF520C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CF43C0;
        }
    }

label_80CF5210:
    ctx->pc = 0x80CF5210u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 15u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF5210u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 15u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80CF5210: stwu     r1, -32(r1)
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
label_80CF5214:
    ctx->pc = 0x80CF5214u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5214u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80CF5214: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF5218:
    ctx->pc = 0x80CF5218u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5218u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80CF5218: stw     r0, 36(r1)
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
label_80CF521C:
    ctx->pc = 0x80CF521Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF521Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CF521C: stw     r31, 28(r1)
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
label_80CF5220:
    ctx->pc = 0x80CF5220u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5220u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CF5220: stw     r30, 24(r1)
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
label_80CF5224:
    ctx->pc = 0x80CF5224u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5224u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CF5224: stw     r29, 20(r1)
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
label_80CF5228:
    ctx->pc = 0x80CF5228u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5228u)) return;
    // 80CF5228: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80CF522C:
    ctx->pc = 0x80CF522Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF522Cu)) return;
    // 80CF522C: lis     r3, -32561
    ctx->gpr[3] = ((u32)(s32)(-32561) << 16);

label_80CF5230:
    ctx->pc = 0x80CF5230u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5230u)) return;
    // 80CF5230: addi    r0, r3, 20968
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(20968);

label_80CF5234:
    ctx->pc = 0x80CF5234u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5234u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CF5234: stw     r0, 16(r31)
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
label_80CF5238:
    ctx->pc = 0x80CF5238u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5238u)) return;
    // 80CF5238: lis     r3, -32561
    ctx->gpr[3] = ((u32)(s32)(-32561) << 16);

label_80CF523C:
    ctx->pc = 0x80CF523Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF523Cu)) return;
    // 80CF523C: addi    r0, r3, 20908
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(20908);

label_80CF5240:
    ctx->pc = 0x80CF5240u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5240u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CF5240: stw     r0, 24(r31)
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
label_80CF5244:
    ctx->pc = 0x80CF5244u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5244u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CF5244: lwz     r30, 32(r31)
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
label_80CF5248:
    ctx->pc = 0x80CF5248u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5248u)) return;
    // 80CF5248: bl      0x8047EA80
    {
            ctx->lr = 0x80CF524Cu;
            ctx->pc = 0x8047EA80u;
            return;
    }

label_80CF524C:
    ctx->pc = 0x80CF524Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF524Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 80CF524C: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80CF5250:
    ctx->pc = 0x80CF5250u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5250u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CF5250: stw     r29, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF5254:
    ctx->pc = 0x80CF5254u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5254u)) return;
    // 80CF5254: lis     r3, -27360
    ctx->gpr[3] = ((u32)(s32)(-27360) << 16);

label_80CF5258:
    ctx->pc = 0x80CF5258u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5258u)) return;
    // 80CF5258: addi    r3, r3, -2796
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-2796);

label_80CF525C:
    ctx->pc = 0x80CF525Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF525Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CF525C: lwz     r0, 0(r3)
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
label_80CF5260:
    ctx->pc = 0x80CF5260u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5260u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CF5260: stw     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF5264:
    ctx->pc = 0x80CF5264u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5264u)) return;
    // 80CF5264: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80CF5268:
    ctx->pc = 0x80CF5268u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5268u)) return;
    // 80CF5268: bl      0x80CF51E8
    {
            ctx->lr = 0x80CF526Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80CF51E8u;
                return;
            }
            goto label_80CF51E8;
    }

label_80CF526C:
    ctx->pc = 0x80CF526Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 25u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF526Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 25u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80CF526C: lfs     f0, 36(r30)
    if (!ppc_fp_available_inline(ctx, 0x80CF526Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
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
label_80CF5270:
    ctx->pc = 0x80CF5270u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5270u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80CF5270: stfs     f0, 12(r29)
    if (!ppc_fp_available_inline(ctx, 0x80CF5270u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF5274:
    ctx->pc = 0x80CF5274u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5274u)) return;
    // 80CF5274: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80CF5278:
    ctx->pc = 0x80CF5278u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5278u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80CF5278: stw     r0, 20(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF527C:
    ctx->pc = 0x80CF527Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF527Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80CF527C: stw     r0, 24(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF5280:
    ctx->pc = 0x80CF5280u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5280u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80CF5280: stw     r0, 28(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF5284:
    ctx->pc = 0x80CF5284u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5284u)) return;
    // 80CF5284: lis     r3, -27361
    ctx->gpr[3] = ((u32)(s32)(-27361) << 16);

label_80CF5288:
    ctx->pc = 0x80CF5288u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5288u)) return;
    // 80CF5288: addi    r3, r3, -3592
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3592);

label_80CF528C:
    ctx->pc = 0x80CF528Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF528Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80CF528C: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CF528Cu)) return;
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
label_80CF5290:
    ctx->pc = 0x80CF5290u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5290u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80CF5290: stfs     f0, 32(r29)
    if (!ppc_fp_available_inline(ctx, 0x80CF5290u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF5294:
    ctx->pc = 0x80CF5294u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5294u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80CF5294: stfs     f0, 36(r29)
    if (!ppc_fp_available_inline(ctx, 0x80CF5294u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF5298:
    ctx->pc = 0x80CF5298u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5298u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80CF5298: stfs     f0, 40(r29)
    if (!ppc_fp_available_inline(ctx, 0x80CF5298u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF529C:
    ctx->pc = 0x80CF529Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF529Cu)) return;
    // 80CF529C: lis     r3, -27360
    ctx->gpr[3] = ((u32)(s32)(-27360) << 16);

label_80CF52A0:
    ctx->pc = 0x80CF52A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF52A0u)) return;
    // 80CF52A0: addi    r3, r3, -2796
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-2796);

label_80CF52A4:
    ctx->pc = 0x80CF52A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF52A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CF52A4: lwz     r0, 4(r3)
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
label_80CF52A8:
    ctx->pc = 0x80CF52A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF52A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CF52A8: stw     r0, 4(r29)
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
label_80CF52AC:
    ctx->pc = 0x80CF52ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF52ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CF52AC: lwz     r0, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF52B0:
    ctx->pc = 0x80CF52B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF52B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CF52B0: stw     r0, 44(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF52B4:
    ctx->pc = 0x80CF52B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF52B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CF52B4: lwz     r0, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF52B8:
    ctx->pc = 0x80CF52B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF52B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CF52B8: stw     r0, 48(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF52BC:
    ctx->pc = 0x80CF52BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF52BCu)) return;
    // 80CF52BC: lis     r3, 26624
    ctx->gpr[3] = ((u32)(s32)(26624) << 16);

label_80CF52C0:
    ctx->pc = 0x80CF52C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF52C0u)) return;
    // 80CF52C0: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_80CF52C4:
    ctx->pc = 0x80CF52C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF52C4u)) return;
    // 80CF52C4: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80CF52C8:
    ctx->pc = 0x80CF52C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF52C8u)) return;
    // 80CF52C8: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80CF52CC:
    ctx->pc = 0x80CF52CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF52CCu)) return;
    // 80CF52CC: bl      0x8047EBFC
    {
            ctx->lr = 0x80CF52D0u;
            ctx->pc = 0x8047EBFCu;
            return;
    }

label_80CF52D0:
    ctx->pc = 0x80CF52D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 23u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF52D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 23u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80CF52D0: lha     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF52D4:
    ctx->pc = 0x80CF52D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF52D4u)) return;
    // 80CF52D4: ori     r0, r0, 0x0100
    ctx->gpr[0] = ctx->gpr[0] | 0x0100u;

label_80CF52D8:
    ctx->pc = 0x80CF52D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF52D8u)) return;
    // 80CF52D8: extsh r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_80CF52DC:
    ctx->pc = 0x80CF52DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF52DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80CF52DC: sth     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF52E0:
    ctx->pc = 0x80CF52E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF52E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80CF52E0: lwz     r4, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF52E4:
    ctx->pc = 0x80CF52E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF52E4u)) return;
    // 80CF52E4: lis     r3, -27361
    ctx->gpr[3] = ((u32)(s32)(-27361) << 16);

label_80CF52E8:
    ctx->pc = 0x80CF52E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF52E8u)) return;
    // 80CF52E8: addi    r3, r3, -3588
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3588);

label_80CF52EC:
    ctx->pc = 0x80CF52ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF52ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80CF52EC: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CF52ECu)) return;
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
label_80CF52F0:
    ctx->pc = 0x80CF52F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF52F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80CF52F0: stfs     f0, 16(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CF52F0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF52F4:
    ctx->pc = 0x80CF52F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF52F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80CF52F4: stfs     f0, 20(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CF52F4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF52F8:
    ctx->pc = 0x80CF52F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF52F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80CF52F8: stfs     f0, 24(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CF52F8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF52FC:
    ctx->pc = 0x80CF52FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF52FCu)) return;
    // 80CF52FC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80CF5300:
    ctx->pc = 0x80CF5300u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5300u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CF5300: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF5304:
    ctx->pc = 0x80CF5304u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5304u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CF5304: stw     r0, 8(r4)
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
label_80CF5308:
    ctx->pc = 0x80CF5308u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5308u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CF5308: stw     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF530C:
    ctx->pc = 0x80CF530Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF530Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CF530C: lwz     r31, 28(r1)
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
label_80CF5310:
    ctx->pc = 0x80CF5310u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5310u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CF5310: lwz     r30, 24(r1)
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
label_80CF5314:
    ctx->pc = 0x80CF5314u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5314u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CF5314: lwz     r29, 20(r1)
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
label_80CF5318:
    ctx->pc = 0x80CF5318u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5318u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CF5318: lwz     r0, 36(r1)
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
label_80CF531C:
    ctx->pc = 0x80CF531Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CF531Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CF531C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF5320:
    ctx->pc = 0x80CF5320u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5320u)) return;
    // 80CF5320: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80CF5324:
    ctx->pc = 0x80CF5324u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5324u)) return;
    // 80CF5324: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CF43C0;
        }
    }

label_80CF5328:
    ctx->pc = 0x80CF5328u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF5328u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CF5328: stwu     r1, -32(r1)
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
label_80CF532C:
    ctx->pc = 0x80CF532Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF532Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CF532C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF5330:
    ctx->pc = 0x80CF5330u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5330u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CF5330: stw     r0, 36(r1)
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
label_80CF5334:
    ctx->pc = 0x80CF5334u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5334u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CF5334: stfd     f31, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CF5334u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF5338:
    ctx->pc = 0x80CF5338u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5338u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CF5338: stw     r31, 20(r1)
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
label_80CF533C:
    ctx->pc = 0x80CF533Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF533Cu)) return;
    // 80CF533C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80CF5340:
    ctx->pc = 0x80CF5340u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5340u)) return;
    // 80CF5340: fmr    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x80CF5340u)) return;
    ctx->fpr[31] = ctx->fpr[1];

label_80CF5344:
    ctx->pc = 0x80CF5344u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5344u)) return;
    // 80CF5344: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_80CF5348:
    ctx->pc = 0x80CF5348u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5348u)) return;
    // 80CF5348: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80CF534C:
    ctx->pc = 0x80CF534Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF534Cu)) return;
    // 80CF534C: lis     r5, -32561
    ctx->gpr[5] = ((u32)(s32)(-32561) << 16);

label_80CF5350:
    ctx->pc = 0x80CF5350u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5350u)) return;
    // 80CF5350: addi    r5, r5, 21008
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(21008);

label_80CF5354:
    ctx->pc = 0x80CF5354u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5354u)) return;
    // 80CF5354: bl      0x8050FD60
    {
            ctx->lr = 0x80CF5358u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80CF5358:
    ctx->pc = 0x80CF5358u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF5358u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CF5358: lwz     r4, 32(r3)
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
label_80CF535C:
    ctx->pc = 0x80CF535Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF535Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CF535C: stfs     f31, 36(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CF535Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF5360:
    ctx->pc = 0x80CF5360u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5360u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CF5360: lwz     r4, 32(r3)
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
label_80CF5364:
    ctx->pc = 0x80CF5364u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5364u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CF5364: stw     r31, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF5368:
    ctx->pc = 0x80CF5368u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5368u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CF5368: lfd     f31, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CF5368u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF536C:
    ctx->pc = 0x80CF536Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF536Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CF536C: lwz     r31, 20(r1)
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
label_80CF5370:
    ctx->pc = 0x80CF5370u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5370u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CF5370: lwz     r0, 36(r1)
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
label_80CF5374:
    ctx->pc = 0x80CF5374u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CF5374u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CF5374: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF5378:
    ctx->pc = 0x80CF5378u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5378u)) return;
    // 80CF5378: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80CF537C:
    ctx->pc = 0x80CF537Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF537Cu)) return;
    // 80CF537C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CF43C0;
        }
    }

label_80CF5380:
    ctx->pc = 0x80CF5380u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF5380u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CF5380: lwz     r3, 32(r3)
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
label_80CF5384:
    ctx->pc = 0x80CF5384u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5384u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CF5384: lwz     r4, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF5388:
    ctx->pc = 0x80CF5388u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5388u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CF5388: lwz     r5, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF538C:
    ctx->pc = 0x80CF538Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF538Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CF538C: lwz     r3, 32(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF5390:
    ctx->pc = 0x80CF5390u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5390u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CF5390: lfs     f0, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CF5390u)) return;
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
label_80CF5394:
    ctx->pc = 0x80CF5394u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5394u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CF5394: stfs     f0, 8(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CF5394u)) return;
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
label_80CF5398:
    ctx->pc = 0x80CF5398u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5398u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CF5398: lwz     r3, 32(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF539C:
    ctx->pc = 0x80CF539Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF539Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CF539C: lfs     f0, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CF539Cu)) return;
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
label_80CF53A0:
    ctx->pc = 0x80CF53A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF53A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CF53A0: stfs     f0, 16(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CF53A0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF53A4:
    ctx->pc = 0x80CF53A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF53A4u)) return;
    // 80CF53A4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CF43C0;
        }
    }

label_80CF53A8:
    ctx->pc = 0x80CF53A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 15u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF53A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 15u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80CF53A8: stwu     r1, -32(r1)
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
label_80CF53AC:
    ctx->pc = 0x80CF53ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF53ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80CF53AC: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF53B0:
    ctx->pc = 0x80CF53B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF53B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80CF53B0: stw     r0, 36(r1)
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
label_80CF53B4:
    ctx->pc = 0x80CF53B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF53B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CF53B4: stw     r31, 28(r1)
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
label_80CF53B8:
    ctx->pc = 0x80CF53B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF53B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CF53B8: stw     r30, 24(r1)
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
label_80CF53BC:
    ctx->pc = 0x80CF53BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF53BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CF53BC: stw     r29, 20(r1)
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
label_80CF53C0:
    ctx->pc = 0x80CF53C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF53C0u)) return;
    // 80CF53C0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80CF53C4:
    ctx->pc = 0x80CF53C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF53C4u)) return;
    // 80CF53C4: lis     r3, -32561
    ctx->gpr[3] = ((u32)(s32)(-32561) << 16);

label_80CF53C8:
    ctx->pc = 0x80CF53C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF53C8u)) return;
    // 80CF53C8: addi    r0, r3, 21376
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(21376);

label_80CF53CC:
    ctx->pc = 0x80CF53CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF53CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CF53CC: stw     r0, 16(r31)
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
label_80CF53D0:
    ctx->pc = 0x80CF53D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF53D0u)) return;
    // 80CF53D0: lis     r3, -32561
    ctx->gpr[3] = ((u32)(s32)(-32561) << 16);

label_80CF53D4:
    ctx->pc = 0x80CF53D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF53D4u)) return;
    // 80CF53D4: addi    r0, r3, 20908
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(20908);

label_80CF53D8:
    ctx->pc = 0x80CF53D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF53D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CF53D8: stw     r0, 24(r31)
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
label_80CF53DC:
    ctx->pc = 0x80CF53DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF53DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CF53DC: lwz     r30, 32(r31)
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
label_80CF53E0:
    ctx->pc = 0x80CF53E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF53E0u)) return;
    // 80CF53E0: bl      0x8047EA80
    {
            ctx->lr = 0x80CF53E4u;
            ctx->pc = 0x8047EA80u;
            return;
    }

label_80CF53E4:
    ctx->pc = 0x80CF53E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF53E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 80CF53E4: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80CF53E8:
    ctx->pc = 0x80CF53E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF53E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CF53E8: stw     r29, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF53EC:
    ctx->pc = 0x80CF53ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF53ECu)) return;
    // 80CF53EC: lis     r3, -27360
    ctx->gpr[3] = ((u32)(s32)(-27360) << 16);

label_80CF53F0:
    ctx->pc = 0x80CF53F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF53F0u)) return;
    // 80CF53F0: addi    r3, r3, -2796
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-2796);

label_80CF53F4:
    ctx->pc = 0x80CF53F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF53F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CF53F4: lwz     r0, 0(r3)
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
label_80CF53F8:
    ctx->pc = 0x80CF53F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF53F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CF53F8: stw     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF53FC:
    ctx->pc = 0x80CF53FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF53FCu)) return;
    // 80CF53FC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80CF5400:
    ctx->pc = 0x80CF5400u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5400u)) return;
    // 80CF5400: bl      0x80CF5380
    {
            ctx->lr = 0x80CF5404u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80CF5380u;
                return;
            }
            goto label_80CF5380;
    }

label_80CF5404:
    ctx->pc = 0x80CF5404u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 25u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF5404u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 25u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80CF5404: lfs     f0, 36(r30)
    if (!ppc_fp_available_inline(ctx, 0x80CF5404u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
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
label_80CF5408:
    ctx->pc = 0x80CF5408u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5408u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80CF5408: stfs     f0, 12(r29)
    if (!ppc_fp_available_inline(ctx, 0x80CF5408u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF540C:
    ctx->pc = 0x80CF540Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF540Cu)) return;
    // 80CF540C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80CF5410:
    ctx->pc = 0x80CF5410u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5410u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80CF5410: stw     r0, 20(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF5414:
    ctx->pc = 0x80CF5414u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5414u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80CF5414: stw     r0, 24(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF5418:
    ctx->pc = 0x80CF5418u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5418u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80CF5418: stw     r0, 28(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF541C:
    ctx->pc = 0x80CF541Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF541Cu)) return;
    // 80CF541C: lis     r3, -27361
    ctx->gpr[3] = ((u32)(s32)(-27361) << 16);

label_80CF5420:
    ctx->pc = 0x80CF5420u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5420u)) return;
    // 80CF5420: addi    r3, r3, -3592
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3592);

label_80CF5424:
    ctx->pc = 0x80CF5424u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5424u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80CF5424: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CF5424u)) return;
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
label_80CF5428:
    ctx->pc = 0x80CF5428u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5428u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80CF5428: stfs     f0, 32(r29)
    if (!ppc_fp_available_inline(ctx, 0x80CF5428u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF542C:
    ctx->pc = 0x80CF542Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF542Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80CF542C: stfs     f0, 36(r29)
    if (!ppc_fp_available_inline(ctx, 0x80CF542Cu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF5430:
    ctx->pc = 0x80CF5430u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5430u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80CF5430: stfs     f0, 40(r29)
    if (!ppc_fp_available_inline(ctx, 0x80CF5430u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF5434:
    ctx->pc = 0x80CF5434u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5434u)) return;
    // 80CF5434: lis     r3, -27360
    ctx->gpr[3] = ((u32)(s32)(-27360) << 16);

label_80CF5438:
    ctx->pc = 0x80CF5438u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5438u)) return;
    // 80CF5438: addi    r3, r3, -2796
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-2796);

label_80CF543C:
    ctx->pc = 0x80CF543Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF543Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CF543C: lwz     r0, 4(r3)
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
label_80CF5440:
    ctx->pc = 0x80CF5440u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5440u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CF5440: stw     r0, 4(r29)
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
label_80CF5444:
    ctx->pc = 0x80CF5444u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5444u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CF5444: lwz     r0, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF5448:
    ctx->pc = 0x80CF5448u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5448u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CF5448: stw     r0, 44(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF544C:
    ctx->pc = 0x80CF544Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF544Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CF544C: lwz     r0, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF5450:
    ctx->pc = 0x80CF5450u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5450u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CF5450: stw     r0, 48(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF5454:
    ctx->pc = 0x80CF5454u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5454u)) return;
    // 80CF5454: lis     r3, 26624
    ctx->gpr[3] = ((u32)(s32)(26624) << 16);

label_80CF5458:
    ctx->pc = 0x80CF5458u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5458u)) return;
    // 80CF5458: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_80CF545C:
    ctx->pc = 0x80CF545Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF545Cu)) return;
    // 80CF545C: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80CF5460:
    ctx->pc = 0x80CF5460u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5460u)) return;
    // 80CF5460: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80CF5464:
    ctx->pc = 0x80CF5464u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5464u)) return;
    // 80CF5464: bl      0x8047EBFC
    {
            ctx->lr = 0x80CF5468u;
            ctx->pc = 0x8047EBFCu;
            return;
    }

label_80CF5468:
    ctx->pc = 0x80CF5468u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 23u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF5468u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 23u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80CF5468: lha     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF546C:
    ctx->pc = 0x80CF546Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF546Cu)) return;
    // 80CF546C: ori     r0, r0, 0x0100
    ctx->gpr[0] = ctx->gpr[0] | 0x0100u;

label_80CF5470:
    ctx->pc = 0x80CF5470u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5470u)) return;
    // 80CF5470: extsh r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_80CF5474:
    ctx->pc = 0x80CF5474u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5474u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80CF5474: sth     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF5478:
    ctx->pc = 0x80CF5478u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5478u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80CF5478: lwz     r4, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF547C:
    ctx->pc = 0x80CF547Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF547Cu)) return;
    // 80CF547C: lis     r3, -27361
    ctx->gpr[3] = ((u32)(s32)(-27361) << 16);

label_80CF5480:
    ctx->pc = 0x80CF5480u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5480u)) return;
    // 80CF5480: addi    r3, r3, -3588
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3588);

label_80CF5484:
    ctx->pc = 0x80CF5484u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5484u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80CF5484: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CF5484u)) return;
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
label_80CF5488:
    ctx->pc = 0x80CF5488u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5488u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80CF5488: stfs     f0, 16(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CF5488u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF548C:
    ctx->pc = 0x80CF548Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF548Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80CF548C: stfs     f0, 20(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CF548Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF5490:
    ctx->pc = 0x80CF5490u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5490u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80CF5490: stfs     f0, 24(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CF5490u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF5494:
    ctx->pc = 0x80CF5494u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5494u)) return;
    // 80CF5494: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80CF5498:
    ctx->pc = 0x80CF5498u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5498u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CF5498: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF549C:
    ctx->pc = 0x80CF549Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF549Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CF549C: stw     r0, 8(r4)
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
label_80CF54A0:
    ctx->pc = 0x80CF54A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF54A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CF54A0: stw     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF54A4:
    ctx->pc = 0x80CF54A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF54A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CF54A4: lwz     r31, 28(r1)
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
label_80CF54A8:
    ctx->pc = 0x80CF54A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF54A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CF54A8: lwz     r30, 24(r1)
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
label_80CF54AC:
    ctx->pc = 0x80CF54ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF54ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CF54AC: lwz     r29, 20(r1)
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
label_80CF54B0:
    ctx->pc = 0x80CF54B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF54B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CF54B0: lwz     r0, 36(r1)
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
label_80CF54B4:
    ctx->pc = 0x80CF54B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CF54B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CF54B4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF54B8:
    ctx->pc = 0x80CF54B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF54B8u)) return;
    // 80CF54B8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80CF54BC:
    ctx->pc = 0x80CF54BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF54BCu)) return;
    // 80CF54BC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CF43C0;
        }
    }

label_80CF54C0:
    ctx->pc = 0x80CF54C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF54C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CF54C0: stwu     r1, -32(r1)
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
label_80CF54C4:
    ctx->pc = 0x80CF54C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF54C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CF54C4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF54C8:
    ctx->pc = 0x80CF54C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF54C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CF54C8: stw     r0, 36(r1)
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
label_80CF54CC:
    ctx->pc = 0x80CF54CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF54CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CF54CC: stfd     f31, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CF54CCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF54D0:
    ctx->pc = 0x80CF54D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF54D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CF54D0: stw     r31, 20(r1)
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
label_80CF54D4:
    ctx->pc = 0x80CF54D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF54D4u)) return;
    // 80CF54D4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80CF54D8:
    ctx->pc = 0x80CF54D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF54D8u)) return;
    // 80CF54D8: fmr    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x80CF54D8u)) return;
    ctx->fpr[31] = ctx->fpr[1];

label_80CF54DC:
    ctx->pc = 0x80CF54DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF54DCu)) return;
    // 80CF54DC: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_80CF54E0:
    ctx->pc = 0x80CF54E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF54E0u)) return;
    // 80CF54E0: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80CF54E4:
    ctx->pc = 0x80CF54E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF54E4u)) return;
    // 80CF54E4: lis     r5, -32561
    ctx->gpr[5] = ((u32)(s32)(-32561) << 16);

label_80CF54E8:
    ctx->pc = 0x80CF54E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF54E8u)) return;
    // 80CF54E8: addi    r5, r5, 21416
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(21416);

label_80CF54EC:
    ctx->pc = 0x80CF54ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF54ECu)) return;
    // 80CF54EC: bl      0x8050FD60
    {
            ctx->lr = 0x80CF54F0u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80CF54F0:
    ctx->pc = 0x80CF54F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CF54F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CF54F0: lwz     r4, 32(r3)
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
label_80CF54F4:
    ctx->pc = 0x80CF54F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF54F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CF54F4: stfs     f31, 36(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CF54F4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF54F8:
    ctx->pc = 0x80CF54F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF54F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CF54F8: lwz     r4, 32(r3)
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
label_80CF54FC:
    ctx->pc = 0x80CF54FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF54FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CF54FC: stw     r31, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF5500:
    ctx->pc = 0x80CF5500u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5500u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CF5500: lfd     f31, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CF5500u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF5504:
    ctx->pc = 0x80CF5504u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5504u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CF5504: lwz     r31, 20(r1)
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
label_80CF5508:
    ctx->pc = 0x80CF5508u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5508u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CF5508: lwz     r0, 36(r1)
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
label_80CF550C:
    ctx->pc = 0x80CF550Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CF550Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CF550C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CF5510:
    ctx->pc = 0x80CF5510u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5510u)) return;
    // 80CF5510: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80CF5514:
    ctx->pc = 0x80CF5514u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CF5514u)) return;
    // 80CF5514: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CF43C0;
        }
    }

    ctx->pc = 0x80CF5518u;
    return;
return_dispatch_80CF43C0:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80CF43F8u: goto label_80CF43F8;
    case 0x80CF43FCu: goto label_80CF43FC;
    case 0x80CF4400u: goto label_80CF4400;
    case 0x80CF4408u: goto label_80CF4408;
    case 0x80CF4410u: goto label_80CF4410;
    case 0x80CF4438u: goto label_80CF4438;
    case 0x80CF4440u: goto label_80CF4440;
    case 0x80CF4454u: goto label_80CF4454;
    case 0x80CF445Cu: goto label_80CF445C;
    case 0x80CF4460u: goto label_80CF4460;
    case 0x80CF4468u: goto label_80CF4468;
    case 0x80CF4490u: goto label_80CF4490;
    case 0x80CF4498u: goto label_80CF4498;
    case 0x80CF44A8u: goto label_80CF44A8;
    case 0x80CF44E4u: goto label_80CF44E4;
    case 0x80CF4500u: goto label_80CF4500;
    case 0x80CF4544u: goto label_80CF4544;
    case 0x80CF4574u: goto label_80CF4574;
    case 0x80CF457Cu: goto label_80CF457C;
    case 0x80CF4584u: goto label_80CF4584;
    case 0x80CF4590u: goto label_80CF4590;
    case 0x80CF4598u: goto label_80CF4598;
    case 0x80CF45C0u: goto label_80CF45C0;
    case 0x80CF45F0u: goto label_80CF45F0;
    case 0x80CF45F8u: goto label_80CF45F8;
    case 0x80CF4628u: goto label_80CF4628;
    case 0x80CF4640u: goto label_80CF4640;
    case 0x80CF4648u: goto label_80CF4648;
    case 0x80CF4678u: goto label_80CF4678;
    case 0x80CF4680u: goto label_80CF4680;
    case 0x80CF46A8u: goto label_80CF46A8;
    case 0x80CF46B0u: goto label_80CF46B0;
    case 0x80CF46D4u: goto label_80CF46D4;
    case 0x80CF46DCu: goto label_80CF46DC;
    case 0x80CF46E8u: goto label_80CF46E8;
    case 0x80CF46F0u: goto label_80CF46F0;
    case 0x80CF46F8u: goto label_80CF46F8;
    case 0x80CF4720u: goto label_80CF4720;
    case 0x80CF4724u: goto label_80CF4724;
    case 0x80CF472Cu: goto label_80CF472C;
    case 0x80CF4730u: goto label_80CF4730;
    case 0x80CF474Cu: goto label_80CF474C;
    case 0x80CF4758u: goto label_80CF4758;
    case 0x80CF4774u: goto label_80CF4774;
    case 0x80CF4780u: goto label_80CF4780;
    case 0x80CF4788u: goto label_80CF4788;
    case 0x80CF47ACu: goto label_80CF47AC;
    case 0x80CF47B4u: goto label_80CF47B4;
    case 0x80CF47BCu: goto label_80CF47BC;
    case 0x80CF47E0u: goto label_80CF47E0;
    case 0x80CF47E4u: goto label_80CF47E4;
    case 0x80CF4800u: goto label_80CF4800;
    case 0x80CF4804u: goto label_80CF4804;
    case 0x80CF4820u: goto label_80CF4820;
    case 0x80CF4824u: goto label_80CF4824;
    case 0x80CF4828u: goto label_80CF4828;
    case 0x80CF4830u: goto label_80CF4830;
    case 0x80CF483Cu: goto label_80CF483C;
    case 0x80CF4844u: goto label_80CF4844;
    case 0x80CF4868u: goto label_80CF4868;
    case 0x80CF4870u: goto label_80CF4870;
    case 0x80CF4898u: goto label_80CF4898;
    case 0x80CF48A0u: goto label_80CF48A0;
    case 0x80CF48ACu: goto label_80CF48AC;
    case 0x80CF48C8u: goto label_80CF48C8;
    case 0x80CF48D0u: goto label_80CF48D0;
    case 0x80CF48D8u: goto label_80CF48D8;
    case 0x80CF4918u: goto label_80CF4918;
    case 0x80CF4948u: goto label_80CF4948;
    case 0x80CF4960u: goto label_80CF4960;
    case 0x80CF4990u: goto label_80CF4990;
    case 0x80CF49A8u: goto label_80CF49A8;
    case 0x80CF49B0u: goto label_80CF49B0;
    case 0x80CF49B8u: goto label_80CF49B8;
    case 0x80CF49C0u: goto label_80CF49C0;
    case 0x80CF49CCu: goto label_80CF49CC;
    case 0x80CF49F0u: goto label_80CF49F0;
    case 0x80CF49F8u: goto label_80CF49F8;
    case 0x80CF4A28u: goto label_80CF4A28;
    case 0x80CF4A40u: goto label_80CF4A40;
    case 0x80CF4A48u: goto label_80CF4A48;
    case 0x80CF4A4Cu: goto label_80CF4A4C;
    case 0x80CF4A54u: goto label_80CF4A54;
    case 0x80CF4A58u: goto label_80CF4A58;
    case 0x80CF4A60u: goto label_80CF4A60;
    case 0x80CF4A64u: goto label_80CF4A64;
    case 0x80CF4A6Cu: goto label_80CF4A6C;
    case 0x80CF4A94u: goto label_80CF4A94;
    case 0x80CF4A98u: goto label_80CF4A98;
    case 0x80CF4AA0u: goto label_80CF4AA0;
    case 0x80CF4AA8u: goto label_80CF4AA8;
    case 0x80CF4AB4u: goto label_80CF4AB4;
    case 0x80CF4AD8u: goto label_80CF4AD8;
    case 0x80CF4AE0u: goto label_80CF4AE0;
    case 0x80CF4AE4u: goto label_80CF4AE4;
    case 0x80CF4AECu: goto label_80CF4AEC;
    case 0x80CF4AF0u: goto label_80CF4AF0;
    case 0x80CF4AF4u: goto label_80CF4AF4;
    case 0x80CF4B24u: goto label_80CF4B24;
    case 0x80CF4B40u: goto label_80CF4B40;
    case 0x80CF4B48u: goto label_80CF4B48;
    case 0x80CF4B70u: goto label_80CF4B70;
    case 0x80CF4BA0u: goto label_80CF4BA0;
    case 0x80CF4BBCu: goto label_80CF4BBC;
    case 0x80CF4BC4u: goto label_80CF4BC4;
    case 0x80CF4BCCu: goto label_80CF4BCC;
    case 0x80CF4BD4u: goto label_80CF4BD4;
    case 0x80CF4BE0u: goto label_80CF4BE0;
    case 0x80CF4C04u: goto label_80CF4C04;
    case 0x80CF4C0Cu: goto label_80CF4C0C;
    case 0x80CF4C10u: goto label_80CF4C10;
    case 0x80CF4C18u: goto label_80CF4C18;
    case 0x80CF4C1Cu: goto label_80CF4C1C;
    case 0x80CF4C24u: goto label_80CF4C24;
    case 0x80CF4C4Cu: goto label_80CF4C4C;
    case 0x80CF4C54u: goto label_80CF4C54;
    case 0x80CF4C7Cu: goto label_80CF4C7C;
    case 0x80CF4C84u: goto label_80CF4C84;
    case 0x80CF4CACu: goto label_80CF4CAC;
    case 0x80CF4CB4u: goto label_80CF4CB4;
    case 0x80CF4CBCu: goto label_80CF4CBC;
    case 0x80CF4CC8u: goto label_80CF4CC8;
    case 0x80CF4CECu: goto label_80CF4CEC;
    case 0x80CF4CF4u: goto label_80CF4CF4;
    case 0x80CF4CF8u: goto label_80CF4CF8;
    case 0x80CF4D00u: goto label_80CF4D00;
    case 0x80CF4D04u: goto label_80CF4D04;
    case 0x80CF4D0Cu: goto label_80CF4D0C;
    case 0x80CF4D14u: goto label_80CF4D14;
    case 0x80CF4D20u: goto label_80CF4D20;
    case 0x80CF4D44u: goto label_80CF4D44;
    case 0x80CF4D4Cu: goto label_80CF4D4C;
    case 0x80CF4D50u: goto label_80CF4D50;
    case 0x80CF4D58u: goto label_80CF4D58;
    case 0x80CF4D5Cu: goto label_80CF4D5C;
    case 0x80CF4D8Cu: goto label_80CF4D8C;
    case 0x80CF4DA8u: goto label_80CF4DA8;
    case 0x80CF4DD8u: goto label_80CF4DD8;
    case 0x80CF4DE0u: goto label_80CF4DE0;
    case 0x80CF4DE8u: goto label_80CF4DE8;
    case 0x80CF4DF4u: goto label_80CF4DF4;
    case 0x80CF4E18u: goto label_80CF4E18;
    case 0x80CF4E20u: goto label_80CF4E20;
    case 0x80CF4E24u: goto label_80CF4E24;
    case 0x80CF4E2Cu: goto label_80CF4E2C;
    case 0x80CF4E30u: goto label_80CF4E30;
    case 0x80CF4E38u: goto label_80CF4E38;
    case 0x80CF4E40u: goto label_80CF4E40;
    case 0x80CF4E44u: goto label_80CF4E44;
    case 0x80CF4E4Cu: goto label_80CF4E4C;
    case 0x80CF4E54u: goto label_80CF4E54;
    case 0x80CF4E6Cu: goto label_80CF4E6C;
    case 0x80CF4EA4u: goto label_80CF4EA4;
    case 0x80CF4F30u: goto label_80CF4F30;
    case 0x80CF4F3Cu: goto label_80CF4F3C;
    case 0x80CF4FCCu: goto label_80CF4FCC;
    case 0x80CF4FD4u: goto label_80CF4FD4;
    case 0x80CF503Cu: goto label_80CF503C;
    case 0x80CF5084u: goto label_80CF5084;
    case 0x80CF50F0u: goto label_80CF50F0;
    case 0x80CF519Cu: goto label_80CF519C;
    case 0x80CF51CCu: goto label_80CF51CC;
    case 0x80CF51D4u: goto label_80CF51D4;
    case 0x80CF524Cu: goto label_80CF524C;
    case 0x80CF526Cu: goto label_80CF526C;
    case 0x80CF52D0u: goto label_80CF52D0;
    case 0x80CF5358u: goto label_80CF5358;
    case 0x80CF53E4u: goto label_80CF53E4;
    case 0x80CF5404u: goto label_80CF5404;
    case 0x80CF5468u: goto label_80CF5468;
    case 0x80CF54F0u: goto label_80CF54F0;
    default: return;
    }
}

