// DolRecomp output
#include "../generated.h"

void func_80AA5000(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80AA5000[2156] = {
        &&label_80AA5000,
        &&label_80AA5004,
        &&label_80AA5008,
        &&label_80AA500C,
        &&label_80AA5010,
        &&label_80AA5014,
        &&label_80AA5018,
        &&label_80AA501C,
        &&label_80AA5020,
        &&label_80AA5024,
        &&label_80AA5028,
        &&label_80AA502C,
        &&label_80AA5030,
        &&label_80AA5034,
        &&label_80AA5038,
        &&label_80AA503C,
        &&label_80AA5040,
        &&label_80AA5044,
        &&label_80AA5048,
        &&label_80AA504C,
        &&label_80AA5050,
        &&label_80AA5054,
        &&label_80AA5058,
        &&label_80AA505C,
        &&label_80AA5060,
        &&label_80AA5064,
        &&label_80AA5068,
        &&label_80AA506C,
        &&label_80AA5070,
        &&label_80AA5074,
        &&label_80AA5078,
        &&label_80AA507C,
        &&label_80AA5080,
        &&label_80AA5084,
        &&label_80AA5088,
        &&label_80AA508C,
        &&label_80AA5090,
        &&label_80AA5094,
        &&label_80AA5098,
        &&label_80AA509C,
        &&label_80AA50A0,
        &&label_80AA50A4,
        &&label_80AA50A8,
        &&label_80AA50AC,
        &&label_80AA50B0,
        &&label_80AA50B4,
        &&label_80AA50B8,
        &&label_80AA50BC,
        &&label_80AA50C0,
        &&label_80AA50C4,
        &&label_80AA50C8,
        &&label_80AA50CC,
        &&label_80AA50D0,
        &&label_80AA50D4,
        &&label_80AA50D8,
        &&label_80AA50DC,
        &&label_80AA50E0,
        &&label_80AA50E4,
        &&label_80AA50E8,
        &&label_80AA50EC,
        &&label_80AA50F0,
        &&label_80AA50F4,
        &&label_80AA50F8,
        &&label_80AA50FC,
        &&label_80AA5100,
        &&label_80AA5104,
        &&label_80AA5108,
        &&label_80AA510C,
        &&label_80AA5110,
        &&label_80AA5114,
        &&label_80AA5118,
        &&label_80AA511C,
        &&label_80AA5120,
        &&label_80AA5124,
        &&label_80AA5128,
        &&label_80AA512C,
        &&label_80AA5130,
        &&label_80AA5134,
        &&label_80AA5138,
        &&label_80AA513C,
        &&label_80AA5140,
        &&label_80AA5144,
        &&label_80AA5148,
        &&label_80AA514C,
        &&label_80AA5150,
        &&label_80AA5154,
        &&label_80AA5158,
        &&label_80AA515C,
        &&label_80AA5160,
        &&label_80AA5164,
        &&label_80AA5168,
        &&label_80AA516C,
        &&label_80AA5170,
        &&label_80AA5174,
        &&label_80AA5178,
        &&label_80AA517C,
        &&label_80AA5180,
        &&label_80AA5184,
        &&label_80AA5188,
        &&label_80AA518C,
        &&label_80AA5190,
        &&label_80AA5194,
        &&label_80AA5198,
        &&label_80AA519C,
        &&label_80AA51A0,
        &&label_80AA51A4,
        &&label_80AA51A8,
        &&label_80AA51AC,
        &&label_80AA51B0,
        &&label_80AA51B4,
        &&label_80AA51B8,
        &&label_80AA51BC,
        &&label_80AA51C0,
        &&label_80AA51C4,
        &&label_80AA51C8,
        &&label_80AA51CC,
        &&label_80AA51D0,
        &&label_80AA51D4,
        &&label_80AA51D8,
        &&label_80AA51DC,
        &&label_80AA51E0,
        &&label_80AA51E4,
        &&label_80AA51E8,
        &&label_80AA51EC,
        &&label_80AA51F0,
        &&label_80AA51F4,
        &&label_80AA51F8,
        &&label_80AA51FC,
        &&label_80AA5200,
        &&label_80AA5204,
        &&label_80AA5208,
        &&label_80AA520C,
        &&label_80AA5210,
        &&label_80AA5214,
        &&label_80AA5218,
        &&label_80AA521C,
        &&label_80AA5220,
        &&label_80AA5224,
        &&label_80AA5228,
        &&label_80AA522C,
        &&label_80AA5230,
        &&label_80AA5234,
        &&label_80AA5238,
        &&label_80AA523C,
        &&label_80AA5240,
        &&label_80AA5244,
        &&label_80AA5248,
        &&label_80AA524C,
        &&label_80AA5250,
        &&label_80AA5254,
        &&label_80AA5258,
        &&label_80AA525C,
        &&label_80AA5260,
        &&label_80AA5264,
        &&label_80AA5268,
        &&label_80AA526C,
        &&label_80AA5270,
        &&label_80AA5274,
        &&label_80AA5278,
        &&label_80AA527C,
        &&label_80AA5280,
        &&label_80AA5284,
        &&label_80AA5288,
        &&label_80AA528C,
        &&label_80AA5290,
        &&label_80AA5294,
        &&label_80AA5298,
        &&label_80AA529C,
        &&label_80AA52A0,
        &&label_80AA52A4,
        &&label_80AA52A8,
        &&label_80AA52AC,
        &&label_80AA52B0,
        &&label_80AA52B4,
        &&label_80AA52B8,
        &&label_80AA52BC,
        &&label_80AA52C0,
        &&label_80AA52C4,
        &&label_80AA52C8,
        &&label_80AA52CC,
        &&label_80AA52D0,
        &&label_80AA52D4,
        &&label_80AA52D8,
        &&label_80AA52DC,
        &&label_80AA52E0,
        &&label_80AA52E4,
        &&label_80AA52E8,
        &&label_80AA52EC,
        &&label_80AA52F0,
        &&label_80AA52F4,
        &&label_80AA52F8,
        &&label_80AA52FC,
        &&label_80AA5300,
        &&label_80AA5304,
        &&label_80AA5308,
        &&label_80AA530C,
        &&label_80AA5310,
        &&label_80AA5314,
        &&label_80AA5318,
        &&label_80AA531C,
        &&label_80AA5320,
        &&label_80AA5324,
        &&label_80AA5328,
        &&label_80AA532C,
        &&label_80AA5330,
        &&label_80AA5334,
        &&label_80AA5338,
        &&label_80AA533C,
        &&label_80AA5340,
        &&label_80AA5344,
        &&label_80AA5348,
        &&label_80AA534C,
        &&label_80AA5350,
        &&label_80AA5354,
        &&label_80AA5358,
        &&label_80AA535C,
        &&label_80AA5360,
        &&label_80AA5364,
        &&label_80AA5368,
        &&label_80AA536C,
        &&label_80AA5370,
        &&label_80AA5374,
        &&label_80AA5378,
        &&label_80AA537C,
        &&label_80AA5380,
        &&label_80AA5384,
        &&label_80AA5388,
        &&label_80AA538C,
        &&label_80AA5390,
        &&label_80AA5394,
        &&label_80AA5398,
        &&label_80AA539C,
        &&label_80AA53A0,
        &&label_80AA53A4,
        &&label_80AA53A8,
        &&label_80AA53AC,
        &&label_80AA53B0,
        &&label_80AA53B4,
        &&label_80AA53B8,
        &&label_80AA53BC,
        &&label_80AA53C0,
        &&label_80AA53C4,
        &&label_80AA53C8,
        &&label_80AA53CC,
        &&label_80AA53D0,
        &&label_80AA53D4,
        &&label_80AA53D8,
        &&label_80AA53DC,
        &&label_80AA53E0,
        &&label_80AA53E4,
        &&label_80AA53E8,
        &&label_80AA53EC,
        &&label_80AA53F0,
        &&label_80AA53F4,
        &&label_80AA53F8,
        &&label_80AA53FC,
        &&label_80AA5400,
        &&label_80AA5404,
        &&label_80AA5408,
        &&label_80AA540C,
        &&label_80AA5410,
        &&label_80AA5414,
        &&label_80AA5418,
        &&label_80AA541C,
        &&label_80AA5420,
        &&label_80AA5424,
        &&label_80AA5428,
        &&label_80AA542C,
        &&label_80AA5430,
        &&label_80AA5434,
        &&label_80AA5438,
        &&label_80AA543C,
        &&label_80AA5440,
        &&label_80AA5444,
        &&label_80AA5448,
        &&label_80AA544C,
        &&label_80AA5450,
        &&label_80AA5454,
        &&label_80AA5458,
        &&label_80AA545C,
        &&label_80AA5460,
        &&label_80AA5464,
        &&label_80AA5468,
        &&label_80AA546C,
        &&label_80AA5470,
        &&label_80AA5474,
        &&label_80AA5478,
        &&label_80AA547C,
        &&label_80AA5480,
        &&label_80AA5484,
        &&label_80AA5488,
        &&label_80AA548C,
        &&label_80AA5490,
        &&label_80AA5494,
        &&label_80AA5498,
        &&label_80AA549C,
        &&label_80AA54A0,
        &&label_80AA54A4,
        &&label_80AA54A8,
        &&label_80AA54AC,
        &&label_80AA54B0,
        &&label_80AA54B4,
        &&label_80AA54B8,
        &&label_80AA54BC,
        &&label_80AA54C0,
        &&label_80AA54C4,
        &&label_80AA54C8,
        &&label_80AA54CC,
        &&label_80AA54D0,
        &&label_80AA54D4,
        &&label_80AA54D8,
        &&label_80AA54DC,
        &&label_80AA54E0,
        &&label_80AA54E4,
        &&label_80AA54E8,
        &&label_80AA54EC,
        &&label_80AA54F0,
        &&label_80AA54F4,
        &&label_80AA54F8,
        &&label_80AA54FC,
        &&label_80AA5500,
        &&label_80AA5504,
        &&label_80AA5508,
        &&label_80AA550C,
        &&label_80AA5510,
        &&label_80AA5514,
        &&label_80AA5518,
        &&label_80AA551C,
        &&label_80AA5520,
        &&label_80AA5524,
        &&label_80AA5528,
        &&label_80AA552C,
        &&label_80AA5530,
        &&label_80AA5534,
        &&label_80AA5538,
        &&label_80AA553C,
        &&label_80AA5540,
        &&label_80AA5544,
        &&label_80AA5548,
        &&label_80AA554C,
        &&label_80AA5550,
        &&label_80AA5554,
        &&label_80AA5558,
        &&label_80AA555C,
        &&label_80AA5560,
        &&label_80AA5564,
        &&label_80AA5568,
        &&label_80AA556C,
        &&label_80AA5570,
        &&label_80AA5574,
        &&label_80AA5578,
        &&label_80AA557C,
        &&label_80AA5580,
        &&label_80AA5584,
        &&label_80AA5588,
        &&label_80AA558C,
        &&label_80AA5590,
        &&label_80AA5594,
        &&label_80AA5598,
        &&label_80AA559C,
        &&label_80AA55A0,
        &&label_80AA55A4,
        &&label_80AA55A8,
        &&label_80AA55AC,
        &&label_80AA55B0,
        &&label_80AA55B4,
        &&label_80AA55B8,
        &&label_80AA55BC,
        &&label_80AA55C0,
        &&label_80AA55C4,
        &&label_80AA55C8,
        &&label_80AA55CC,
        &&label_80AA55D0,
        &&label_80AA55D4,
        &&label_80AA55D8,
        &&label_80AA55DC,
        &&label_80AA55E0,
        &&label_80AA55E4,
        &&label_80AA55E8,
        &&label_80AA55EC,
        &&label_80AA55F0,
        &&label_80AA55F4,
        &&label_80AA55F8,
        &&label_80AA55FC,
        &&label_80AA5600,
        &&label_80AA5604,
        &&label_80AA5608,
        &&label_80AA560C,
        &&label_80AA5610,
        &&label_80AA5614,
        &&label_80AA5618,
        &&label_80AA561C,
        &&label_80AA5620,
        &&label_80AA5624,
        &&label_80AA5628,
        &&label_80AA562C,
        &&label_80AA5630,
        &&label_80AA5634,
        &&label_80AA5638,
        &&label_80AA563C,
        &&label_80AA5640,
        &&label_80AA5644,
        &&label_80AA5648,
        &&label_80AA564C,
        &&label_80AA5650,
        &&label_80AA5654,
        &&label_80AA5658,
        &&label_80AA565C,
        &&label_80AA5660,
        &&label_80AA5664,
        &&label_80AA5668,
        &&label_80AA566C,
        &&label_80AA5670,
        &&label_80AA5674,
        &&label_80AA5678,
        &&label_80AA567C,
        &&label_80AA5680,
        &&label_80AA5684,
        &&label_80AA5688,
        &&label_80AA568C,
        &&label_80AA5690,
        &&label_80AA5694,
        &&label_80AA5698,
        &&label_80AA569C,
        &&label_80AA56A0,
        &&label_80AA56A4,
        &&label_80AA56A8,
        &&label_80AA56AC,
        &&label_80AA56B0,
        &&label_80AA56B4,
        &&label_80AA56B8,
        &&label_80AA56BC,
        &&label_80AA56C0,
        &&label_80AA56C4,
        &&label_80AA56C8,
        &&label_80AA56CC,
        &&label_80AA56D0,
        &&label_80AA56D4,
        &&label_80AA56D8,
        &&label_80AA56DC,
        &&label_80AA56E0,
        &&label_80AA56E4,
        &&label_80AA56E8,
        &&label_80AA56EC,
        &&label_80AA56F0,
        &&label_80AA56F4,
        &&label_80AA56F8,
        &&label_80AA56FC,
        &&label_80AA5700,
        &&label_80AA5704,
        &&label_80AA5708,
        &&label_80AA570C,
        &&label_80AA5710,
        &&label_80AA5714,
        &&label_80AA5718,
        &&label_80AA571C,
        &&label_80AA5720,
        &&label_80AA5724,
        &&label_80AA5728,
        &&label_80AA572C,
        &&label_80AA5730,
        &&label_80AA5734,
        &&label_80AA5738,
        &&label_80AA573C,
        &&label_80AA5740,
        &&label_80AA5744,
        &&label_80AA5748,
        &&label_80AA574C,
        &&label_80AA5750,
        &&label_80AA5754,
        &&label_80AA5758,
        &&label_80AA575C,
        &&label_80AA5760,
        &&label_80AA5764,
        &&label_80AA5768,
        &&label_80AA576C,
        &&label_80AA5770,
        &&label_80AA5774,
        &&label_80AA5778,
        &&label_80AA577C,
        &&label_80AA5780,
        &&label_80AA5784,
        &&label_80AA5788,
        &&label_80AA578C,
        &&label_80AA5790,
        &&label_80AA5794,
        &&label_80AA5798,
        &&label_80AA579C,
        &&label_80AA57A0,
        &&label_80AA57A4,
        &&label_80AA57A8,
        &&label_80AA57AC,
        &&label_80AA57B0,
        &&label_80AA57B4,
        &&label_80AA57B8,
        &&label_80AA57BC,
        &&label_80AA57C0,
        &&label_80AA57C4,
        &&label_80AA57C8,
        &&label_80AA57CC,
        &&label_80AA57D0,
        &&label_80AA57D4,
        &&label_80AA57D8,
        &&label_80AA57DC,
        &&label_80AA57E0,
        &&label_80AA57E4,
        &&label_80AA57E8,
        &&label_80AA57EC,
        &&label_80AA57F0,
        &&label_80AA57F4,
        &&label_80AA57F8,
        &&label_80AA57FC,
        &&label_80AA5800,
        &&label_80AA5804,
        &&label_80AA5808,
        &&label_80AA580C,
        &&label_80AA5810,
        &&label_80AA5814,
        &&label_80AA5818,
        &&label_80AA581C,
        &&label_80AA5820,
        &&label_80AA5824,
        &&label_80AA5828,
        &&label_80AA582C,
        &&label_80AA5830,
        &&label_80AA5834,
        &&label_80AA5838,
        &&label_80AA583C,
        &&label_80AA5840,
        &&label_80AA5844,
        &&label_80AA5848,
        &&label_80AA584C,
        &&label_80AA5850,
        &&label_80AA5854,
        &&label_80AA5858,
        &&label_80AA585C,
        &&label_80AA5860,
        &&label_80AA5864,
        &&label_80AA5868,
        &&label_80AA586C,
        &&label_80AA5870,
        &&label_80AA5874,
        &&label_80AA5878,
        &&label_80AA587C,
        &&label_80AA5880,
        &&label_80AA5884,
        &&label_80AA5888,
        &&label_80AA588C,
        &&label_80AA5890,
        &&label_80AA5894,
        &&label_80AA5898,
        &&label_80AA589C,
        &&label_80AA58A0,
        &&label_80AA58A4,
        &&label_80AA58A8,
        &&label_80AA58AC,
        &&label_80AA58B0,
        &&label_80AA58B4,
        &&label_80AA58B8,
        &&label_80AA58BC,
        &&label_80AA58C0,
        &&label_80AA58C4,
        &&label_80AA58C8,
        &&label_80AA58CC,
        &&label_80AA58D0,
        &&label_80AA58D4,
        &&label_80AA58D8,
        &&label_80AA58DC,
        &&label_80AA58E0,
        &&label_80AA58E4,
        &&label_80AA58E8,
        &&label_80AA58EC,
        &&label_80AA58F0,
        &&label_80AA58F4,
        &&label_80AA58F8,
        &&label_80AA58FC,
        &&label_80AA5900,
        &&label_80AA5904,
        &&label_80AA5908,
        &&label_80AA590C,
        &&label_80AA5910,
        &&label_80AA5914,
        &&label_80AA5918,
        &&label_80AA591C,
        &&label_80AA5920,
        &&label_80AA5924,
        &&label_80AA5928,
        &&label_80AA592C,
        &&label_80AA5930,
        &&label_80AA5934,
        &&label_80AA5938,
        &&label_80AA593C,
        &&label_80AA5940,
        &&label_80AA5944,
        &&label_80AA5948,
        &&label_80AA594C,
        &&label_80AA5950,
        &&label_80AA5954,
        &&label_80AA5958,
        &&label_80AA595C,
        &&label_80AA5960,
        &&label_80AA5964,
        &&label_80AA5968,
        &&label_80AA596C,
        &&label_80AA5970,
        &&label_80AA5974,
        &&label_80AA5978,
        &&label_80AA597C,
        &&label_80AA5980,
        &&label_80AA5984,
        &&label_80AA5988,
        &&label_80AA598C,
        &&label_80AA5990,
        &&label_80AA5994,
        &&label_80AA5998,
        &&label_80AA599C,
        &&label_80AA59A0,
        &&label_80AA59A4,
        &&label_80AA59A8,
        &&label_80AA59AC,
        &&label_80AA59B0,
        &&label_80AA59B4,
        &&label_80AA59B8,
        &&label_80AA59BC,
        &&label_80AA59C0,
        &&label_80AA59C4,
        &&label_80AA59C8,
        &&label_80AA59CC,
        &&label_80AA59D0,
        &&label_80AA59D4,
        &&label_80AA59D8,
        &&label_80AA59DC,
        &&label_80AA59E0,
        &&label_80AA59E4,
        &&label_80AA59E8,
        &&label_80AA59EC,
        &&label_80AA59F0,
        &&label_80AA59F4,
        &&label_80AA59F8,
        &&label_80AA59FC,
        &&label_80AA5A00,
        &&label_80AA5A04,
        &&label_80AA5A08,
        &&label_80AA5A0C,
        &&label_80AA5A10,
        &&label_80AA5A14,
        &&label_80AA5A18,
        &&label_80AA5A1C,
        &&label_80AA5A20,
        &&label_80AA5A24,
        &&label_80AA5A28,
        &&label_80AA5A2C,
        &&label_80AA5A30,
        &&label_80AA5A34,
        &&label_80AA5A38,
        &&label_80AA5A3C,
        &&label_80AA5A40,
        &&label_80AA5A44,
        &&label_80AA5A48,
        &&label_80AA5A4C,
        &&label_80AA5A50,
        &&label_80AA5A54,
        &&label_80AA5A58,
        &&label_80AA5A5C,
        &&label_80AA5A60,
        &&label_80AA5A64,
        &&label_80AA5A68,
        &&label_80AA5A6C,
        &&label_80AA5A70,
        &&label_80AA5A74,
        &&label_80AA5A78,
        &&label_80AA5A7C,
        &&label_80AA5A80,
        &&label_80AA5A84,
        &&label_80AA5A88,
        &&label_80AA5A8C,
        &&label_80AA5A90,
        &&label_80AA5A94,
        &&label_80AA5A98,
        &&label_80AA5A9C,
        &&label_80AA5AA0,
        &&label_80AA5AA4,
        &&label_80AA5AA8,
        &&label_80AA5AAC,
        &&label_80AA5AB0,
        &&label_80AA5AB4,
        &&label_80AA5AB8,
        &&label_80AA5ABC,
        &&label_80AA5AC0,
        &&label_80AA5AC4,
        &&label_80AA5AC8,
        &&label_80AA5ACC,
        &&label_80AA5AD0,
        &&label_80AA5AD4,
        &&label_80AA5AD8,
        &&label_80AA5ADC,
        &&label_80AA5AE0,
        &&label_80AA5AE4,
        &&label_80AA5AE8,
        &&label_80AA5AEC,
        &&label_80AA5AF0,
        &&label_80AA5AF4,
        &&label_80AA5AF8,
        &&label_80AA5AFC,
        &&label_80AA5B00,
        &&label_80AA5B04,
        &&label_80AA5B08,
        &&label_80AA5B0C,
        &&label_80AA5B10,
        &&label_80AA5B14,
        &&label_80AA5B18,
        &&label_80AA5B1C,
        &&label_80AA5B20,
        &&label_80AA5B24,
        &&label_80AA5B28,
        &&label_80AA5B2C,
        &&label_80AA5B30,
        &&label_80AA5B34,
        &&label_80AA5B38,
        &&label_80AA5B3C,
        &&label_80AA5B40,
        &&label_80AA5B44,
        &&label_80AA5B48,
        &&label_80AA5B4C,
        &&label_80AA5B50,
        &&label_80AA5B54,
        &&label_80AA5B58,
        &&label_80AA5B5C,
        &&label_80AA5B60,
        &&label_80AA5B64,
        &&label_80AA5B68,
        &&label_80AA5B6C,
        &&label_80AA5B70,
        &&label_80AA5B74,
        &&label_80AA5B78,
        &&label_80AA5B7C,
        &&label_80AA5B80,
        &&label_80AA5B84,
        &&label_80AA5B88,
        &&label_80AA5B8C,
        &&label_80AA5B90,
        &&label_80AA5B94,
        &&label_80AA5B98,
        &&label_80AA5B9C,
        &&label_80AA5BA0,
        &&label_80AA5BA4,
        &&label_80AA5BA8,
        &&label_80AA5BAC,
        &&label_80AA5BB0,
        &&label_80AA5BB4,
        &&label_80AA5BB8,
        &&label_80AA5BBC,
        &&label_80AA5BC0,
        &&label_80AA5BC4,
        &&label_80AA5BC8,
        &&label_80AA5BCC,
        &&label_80AA5BD0,
        &&label_80AA5BD4,
        &&label_80AA5BD8,
        &&label_80AA5BDC,
        &&label_80AA5BE0,
        &&label_80AA5BE4,
        &&label_80AA5BE8,
        &&label_80AA5BEC,
        &&label_80AA5BF0,
        &&label_80AA5BF4,
        &&label_80AA5BF8,
        &&label_80AA5BFC,
        &&label_80AA5C00,
        &&label_80AA5C04,
        &&label_80AA5C08,
        &&label_80AA5C0C,
        &&label_80AA5C10,
        &&label_80AA5C14,
        &&label_80AA5C18,
        &&label_80AA5C1C,
        &&label_80AA5C20,
        &&label_80AA5C24,
        &&label_80AA5C28,
        &&label_80AA5C2C,
        &&label_80AA5C30,
        &&label_80AA5C34,
        &&label_80AA5C38,
        &&label_80AA5C3C,
        &&label_80AA5C40,
        &&label_80AA5C44,
        &&label_80AA5C48,
        &&label_80AA5C4C,
        &&label_80AA5C50,
        &&label_80AA5C54,
        &&label_80AA5C58,
        &&label_80AA5C5C,
        &&label_80AA5C60,
        &&label_80AA5C64,
        &&label_80AA5C68,
        &&label_80AA5C6C,
        &&label_80AA5C70,
        &&label_80AA5C74,
        &&label_80AA5C78,
        &&label_80AA5C7C,
        &&label_80AA5C80,
        &&label_80AA5C84,
        &&label_80AA5C88,
        &&label_80AA5C8C,
        &&label_80AA5C90,
        &&label_80AA5C94,
        &&label_80AA5C98,
        &&label_80AA5C9C,
        &&label_80AA5CA0,
        &&label_80AA5CA4,
        &&label_80AA5CA8,
        &&label_80AA5CAC,
        &&label_80AA5CB0,
        &&label_80AA5CB4,
        &&label_80AA5CB8,
        &&label_80AA5CBC,
        &&label_80AA5CC0,
        &&label_80AA5CC4,
        &&label_80AA5CC8,
        &&label_80AA5CCC,
        &&label_80AA5CD0,
        &&label_80AA5CD4,
        &&label_80AA5CD8,
        &&label_80AA5CDC,
        &&label_80AA5CE0,
        &&label_80AA5CE4,
        &&label_80AA5CE8,
        &&label_80AA5CEC,
        &&label_80AA5CF0,
        &&label_80AA5CF4,
        &&label_80AA5CF8,
        &&label_80AA5CFC,
        &&label_80AA5D00,
        &&label_80AA5D04,
        &&label_80AA5D08,
        &&label_80AA5D0C,
        &&label_80AA5D10,
        &&label_80AA5D14,
        &&label_80AA5D18,
        &&label_80AA5D1C,
        &&label_80AA5D20,
        &&label_80AA5D24,
        &&label_80AA5D28,
        &&label_80AA5D2C,
        &&label_80AA5D30,
        &&label_80AA5D34,
        &&label_80AA5D38,
        &&label_80AA5D3C,
        &&label_80AA5D40,
        &&label_80AA5D44,
        &&label_80AA5D48,
        &&label_80AA5D4C,
        &&label_80AA5D50,
        &&label_80AA5D54,
        &&label_80AA5D58,
        &&label_80AA5D5C,
        &&label_80AA5D60,
        &&label_80AA5D64,
        &&label_80AA5D68,
        &&label_80AA5D6C,
        &&label_80AA5D70,
        &&label_80AA5D74,
        &&label_80AA5D78,
        &&label_80AA5D7C,
        &&label_80AA5D80,
        &&label_80AA5D84,
        &&label_80AA5D88,
        &&label_80AA5D8C,
        &&label_80AA5D90,
        &&label_80AA5D94,
        &&label_80AA5D98,
        &&label_80AA5D9C,
        &&label_80AA5DA0,
        &&label_80AA5DA4,
        &&label_80AA5DA8,
        &&label_80AA5DAC,
        &&label_80AA5DB0,
        &&label_80AA5DB4,
        &&label_80AA5DB8,
        &&label_80AA5DBC,
        &&label_80AA5DC0,
        &&label_80AA5DC4,
        &&label_80AA5DC8,
        &&label_80AA5DCC,
        &&label_80AA5DD0,
        &&label_80AA5DD4,
        &&label_80AA5DD8,
        &&label_80AA5DDC,
        &&label_80AA5DE0,
        &&label_80AA5DE4,
        &&label_80AA5DE8,
        &&label_80AA5DEC,
        &&label_80AA5DF0,
        &&label_80AA5DF4,
        &&label_80AA5DF8,
        &&label_80AA5DFC,
        &&label_80AA5E00,
        &&label_80AA5E04,
        &&label_80AA5E08,
        &&label_80AA5E0C,
        &&label_80AA5E10,
        &&label_80AA5E14,
        &&label_80AA5E18,
        &&label_80AA5E1C,
        &&label_80AA5E20,
        &&label_80AA5E24,
        &&label_80AA5E28,
        &&label_80AA5E2C,
        &&label_80AA5E30,
        &&label_80AA5E34,
        &&label_80AA5E38,
        &&label_80AA5E3C,
        &&label_80AA5E40,
        &&label_80AA5E44,
        &&label_80AA5E48,
        &&label_80AA5E4C,
        &&label_80AA5E50,
        &&label_80AA5E54,
        &&label_80AA5E58,
        &&label_80AA5E5C,
        &&label_80AA5E60,
        &&label_80AA5E64,
        &&label_80AA5E68,
        &&label_80AA5E6C,
        &&label_80AA5E70,
        &&label_80AA5E74,
        &&label_80AA5E78,
        &&label_80AA5E7C,
        &&label_80AA5E80,
        &&label_80AA5E84,
        &&label_80AA5E88,
        &&label_80AA5E8C,
        &&label_80AA5E90,
        &&label_80AA5E94,
        &&label_80AA5E98,
        &&label_80AA5E9C,
        &&label_80AA5EA0,
        &&label_80AA5EA4,
        &&label_80AA5EA8,
        &&label_80AA5EAC,
        &&label_80AA5EB0,
        &&label_80AA5EB4,
        &&label_80AA5EB8,
        &&label_80AA5EBC,
        &&label_80AA5EC0,
        &&label_80AA5EC4,
        &&label_80AA5EC8,
        &&label_80AA5ECC,
        &&label_80AA5ED0,
        &&label_80AA5ED4,
        &&label_80AA5ED8,
        &&label_80AA5EDC,
        &&label_80AA5EE0,
        &&label_80AA5EE4,
        &&label_80AA5EE8,
        &&label_80AA5EEC,
        &&label_80AA5EF0,
        &&label_80AA5EF4,
        &&label_80AA5EF8,
        &&label_80AA5EFC,
        &&label_80AA5F00,
        &&label_80AA5F04,
        &&label_80AA5F08,
        &&label_80AA5F0C,
        &&label_80AA5F10,
        &&label_80AA5F14,
        &&label_80AA5F18,
        &&label_80AA5F1C,
        &&label_80AA5F20,
        &&label_80AA5F24,
        &&label_80AA5F28,
        &&label_80AA5F2C,
        &&label_80AA5F30,
        &&label_80AA5F34,
        &&label_80AA5F38,
        &&label_80AA5F3C,
        &&label_80AA5F40,
        &&label_80AA5F44,
        &&label_80AA5F48,
        &&label_80AA5F4C,
        &&label_80AA5F50,
        &&label_80AA5F54,
        &&label_80AA5F58,
        &&label_80AA5F5C,
        &&label_80AA5F60,
        &&label_80AA5F64,
        &&label_80AA5F68,
        &&label_80AA5F6C,
        &&label_80AA5F70,
        &&label_80AA5F74,
        &&label_80AA5F78,
        &&label_80AA5F7C,
        &&label_80AA5F80,
        &&label_80AA5F84,
        &&label_80AA5F88,
        &&label_80AA5F8C,
        &&label_80AA5F90,
        &&label_80AA5F94,
        &&label_80AA5F98,
        &&label_80AA5F9C,
        &&label_80AA5FA0,
        &&label_80AA5FA4,
        &&label_80AA5FA8,
        &&label_80AA5FAC,
        &&label_80AA5FB0,
        &&label_80AA5FB4,
        &&label_80AA5FB8,
        &&label_80AA5FBC,
        &&label_80AA5FC0,
        &&label_80AA5FC4,
        &&label_80AA5FC8,
        &&label_80AA5FCC,
        &&label_80AA5FD0,
        &&label_80AA5FD4,
        &&label_80AA5FD8,
        &&label_80AA5FDC,
        &&label_80AA5FE0,
        &&label_80AA5FE4,
        &&label_80AA5FE8,
        &&label_80AA5FEC,
        &&label_80AA5FF0,
        &&label_80AA5FF4,
        &&label_80AA5FF8,
        &&label_80AA5FFC,
        &&label_80AA6000,
        &&label_80AA6004,
        &&label_80AA6008,
        &&label_80AA600C,
        &&label_80AA6010,
        &&label_80AA6014,
        &&label_80AA6018,
        &&label_80AA601C,
        &&label_80AA6020,
        &&label_80AA6024,
        &&label_80AA6028,
        &&label_80AA602C,
        &&label_80AA6030,
        &&label_80AA6034,
        &&label_80AA6038,
        &&label_80AA603C,
        &&label_80AA6040,
        &&label_80AA6044,
        &&label_80AA6048,
        &&label_80AA604C,
        &&label_80AA6050,
        &&label_80AA6054,
        &&label_80AA6058,
        &&label_80AA605C,
        &&label_80AA6060,
        &&label_80AA6064,
        &&label_80AA6068,
        &&label_80AA606C,
        &&label_80AA6070,
        &&label_80AA6074,
        &&label_80AA6078,
        &&label_80AA607C,
        &&label_80AA6080,
        &&label_80AA6084,
        &&label_80AA6088,
        &&label_80AA608C,
        &&label_80AA6090,
        &&label_80AA6094,
        &&label_80AA6098,
        &&label_80AA609C,
        &&label_80AA60A0,
        &&label_80AA60A4,
        &&label_80AA60A8,
        &&label_80AA60AC,
        &&label_80AA60B0,
        &&label_80AA60B4,
        &&label_80AA60B8,
        &&label_80AA60BC,
        &&label_80AA60C0,
        &&label_80AA60C4,
        &&label_80AA60C8,
        &&label_80AA60CC,
        &&label_80AA60D0,
        &&label_80AA60D4,
        &&label_80AA60D8,
        &&label_80AA60DC,
        &&label_80AA60E0,
        &&label_80AA60E4,
        &&label_80AA60E8,
        &&label_80AA60EC,
        &&label_80AA60F0,
        &&label_80AA60F4,
        &&label_80AA60F8,
        &&label_80AA60FC,
        &&label_80AA6100,
        &&label_80AA6104,
        &&label_80AA6108,
        &&label_80AA610C,
        &&label_80AA6110,
        &&label_80AA6114,
        &&label_80AA6118,
        &&label_80AA611C,
        &&label_80AA6120,
        &&label_80AA6124,
        &&label_80AA6128,
        &&label_80AA612C,
        &&label_80AA6130,
        &&label_80AA6134,
        &&label_80AA6138,
        &&label_80AA613C,
        &&label_80AA6140,
        &&label_80AA6144,
        &&label_80AA6148,
        &&label_80AA614C,
        &&label_80AA6150,
        &&label_80AA6154,
        &&label_80AA6158,
        &&label_80AA615C,
        &&label_80AA6160,
        &&label_80AA6164,
        &&label_80AA6168,
        &&label_80AA616C,
        &&label_80AA6170,
        &&label_80AA6174,
        &&label_80AA6178,
        &&label_80AA617C,
        &&label_80AA6180,
        &&label_80AA6184,
        &&label_80AA6188,
        &&label_80AA618C,
        &&label_80AA6190,
        &&label_80AA6194,
        &&label_80AA6198,
        &&label_80AA619C,
        &&label_80AA61A0,
        &&label_80AA61A4,
        &&label_80AA61A8,
        &&label_80AA61AC,
        &&label_80AA61B0,
        &&label_80AA61B4,
        &&label_80AA61B8,
        &&label_80AA61BC,
        &&label_80AA61C0,
        &&label_80AA61C4,
        &&label_80AA61C8,
        &&label_80AA61CC,
        &&label_80AA61D0,
        &&label_80AA61D4,
        &&label_80AA61D8,
        &&label_80AA61DC,
        &&label_80AA61E0,
        &&label_80AA61E4,
        &&label_80AA61E8,
        &&label_80AA61EC,
        &&label_80AA61F0,
        &&label_80AA61F4,
        &&label_80AA61F8,
        &&label_80AA61FC,
        &&label_80AA6200,
        &&label_80AA6204,
        &&label_80AA6208,
        &&label_80AA620C,
        &&label_80AA6210,
        &&label_80AA6214,
        &&label_80AA6218,
        &&label_80AA621C,
        &&label_80AA6220,
        &&label_80AA6224,
        &&label_80AA6228,
        &&label_80AA622C,
        &&label_80AA6230,
        &&label_80AA6234,
        &&label_80AA6238,
        &&label_80AA623C,
        &&label_80AA6240,
        &&label_80AA6244,
        &&label_80AA6248,
        &&label_80AA624C,
        &&label_80AA6250,
        &&label_80AA6254,
        &&label_80AA6258,
        &&label_80AA625C,
        &&label_80AA6260,
        &&label_80AA6264,
        &&label_80AA6268,
        &&label_80AA626C,
        &&label_80AA6270,
        &&label_80AA6274,
        &&label_80AA6278,
        &&label_80AA627C,
        &&label_80AA6280,
        &&label_80AA6284,
        &&label_80AA6288,
        &&label_80AA628C,
        &&label_80AA6290,
        &&label_80AA6294,
        &&label_80AA6298,
        &&label_80AA629C,
        &&label_80AA62A0,
        &&label_80AA62A4,
        &&label_80AA62A8,
        &&label_80AA62AC,
        &&label_80AA62B0,
        &&label_80AA62B4,
        &&label_80AA62B8,
        &&label_80AA62BC,
        &&label_80AA62C0,
        &&label_80AA62C4,
        &&label_80AA62C8,
        &&label_80AA62CC,
        &&label_80AA62D0,
        &&label_80AA62D4,
        &&label_80AA62D8,
        &&label_80AA62DC,
        &&label_80AA62E0,
        &&label_80AA62E4,
        &&label_80AA62E8,
        &&label_80AA62EC,
        &&label_80AA62F0,
        &&label_80AA62F4,
        &&label_80AA62F8,
        &&label_80AA62FC,
        &&label_80AA6300,
        &&label_80AA6304,
        &&label_80AA6308,
        &&label_80AA630C,
        &&label_80AA6310,
        &&label_80AA6314,
        &&label_80AA6318,
        &&label_80AA631C,
        &&label_80AA6320,
        &&label_80AA6324,
        &&label_80AA6328,
        &&label_80AA632C,
        &&label_80AA6330,
        &&label_80AA6334,
        &&label_80AA6338,
        &&label_80AA633C,
        &&label_80AA6340,
        &&label_80AA6344,
        &&label_80AA6348,
        &&label_80AA634C,
        &&label_80AA6350,
        &&label_80AA6354,
        &&label_80AA6358,
        &&label_80AA635C,
        &&label_80AA6360,
        &&label_80AA6364,
        &&label_80AA6368,
        &&label_80AA636C,
        &&label_80AA6370,
        &&label_80AA6374,
        &&label_80AA6378,
        &&label_80AA637C,
        &&label_80AA6380,
        &&label_80AA6384,
        &&label_80AA6388,
        &&label_80AA638C,
        &&label_80AA6390,
        &&label_80AA6394,
        &&label_80AA6398,
        &&label_80AA639C,
        &&label_80AA63A0,
        &&label_80AA63A4,
        &&label_80AA63A8,
        &&label_80AA63AC,
        &&label_80AA63B0,
        &&label_80AA63B4,
        &&label_80AA63B8,
        &&label_80AA63BC,
        &&label_80AA63C0,
        &&label_80AA63C4,
        &&label_80AA63C8,
        &&label_80AA63CC,
        &&label_80AA63D0,
        &&label_80AA63D4,
        &&label_80AA63D8,
        &&label_80AA63DC,
        &&label_80AA63E0,
        &&label_80AA63E4,
        &&label_80AA63E8,
        &&label_80AA63EC,
        &&label_80AA63F0,
        &&label_80AA63F4,
        &&label_80AA63F8,
        &&label_80AA63FC,
        &&label_80AA6400,
        &&label_80AA6404,
        &&label_80AA6408,
        &&label_80AA640C,
        &&label_80AA6410,
        &&label_80AA6414,
        &&label_80AA6418,
        &&label_80AA641C,
        &&label_80AA6420,
        &&label_80AA6424,
        &&label_80AA6428,
        &&label_80AA642C,
        &&label_80AA6430,
        &&label_80AA6434,
        &&label_80AA6438,
        &&label_80AA643C,
        &&label_80AA6440,
        &&label_80AA6444,
        &&label_80AA6448,
        &&label_80AA644C,
        &&label_80AA6450,
        &&label_80AA6454,
        &&label_80AA6458,
        &&label_80AA645C,
        &&label_80AA6460,
        &&label_80AA6464,
        &&label_80AA6468,
        &&label_80AA646C,
        &&label_80AA6470,
        &&label_80AA6474,
        &&label_80AA6478,
        &&label_80AA647C,
        &&label_80AA6480,
        &&label_80AA6484,
        &&label_80AA6488,
        &&label_80AA648C,
        &&label_80AA6490,
        &&label_80AA6494,
        &&label_80AA6498,
        &&label_80AA649C,
        &&label_80AA64A0,
        &&label_80AA64A4,
        &&label_80AA64A8,
        &&label_80AA64AC,
        &&label_80AA64B0,
        &&label_80AA64B4,
        &&label_80AA64B8,
        &&label_80AA64BC,
        &&label_80AA64C0,
        &&label_80AA64C4,
        &&label_80AA64C8,
        &&label_80AA64CC,
        &&label_80AA64D0,
        &&label_80AA64D4,
        &&label_80AA64D8,
        &&label_80AA64DC,
        &&label_80AA64E0,
        &&label_80AA64E4,
        &&label_80AA64E8,
        &&label_80AA64EC,
        &&label_80AA64F0,
        &&label_80AA64F4,
        &&label_80AA64F8,
        &&label_80AA64FC,
        &&label_80AA6500,
        &&label_80AA6504,
        &&label_80AA6508,
        &&label_80AA650C,
        &&label_80AA6510,
        &&label_80AA6514,
        &&label_80AA6518,
        &&label_80AA651C,
        &&label_80AA6520,
        &&label_80AA6524,
        &&label_80AA6528,
        &&label_80AA652C,
        &&label_80AA6530,
        &&label_80AA6534,
        &&label_80AA6538,
        &&label_80AA653C,
        &&label_80AA6540,
        &&label_80AA6544,
        &&label_80AA6548,
        &&label_80AA654C,
        &&label_80AA6550,
        &&label_80AA6554,
        &&label_80AA6558,
        &&label_80AA655C,
        &&label_80AA6560,
        &&label_80AA6564,
        &&label_80AA6568,
        &&label_80AA656C,
        &&label_80AA6570,
        &&label_80AA6574,
        &&label_80AA6578,
        &&label_80AA657C,
        &&label_80AA6580,
        &&label_80AA6584,
        &&label_80AA6588,
        &&label_80AA658C,
        &&label_80AA6590,
        &&label_80AA6594,
        &&label_80AA6598,
        &&label_80AA659C,
        &&label_80AA65A0,
        &&label_80AA65A4,
        &&label_80AA65A8,
        &&label_80AA65AC,
        &&label_80AA65B0,
        &&label_80AA65B4,
        &&label_80AA65B8,
        &&label_80AA65BC,
        &&label_80AA65C0,
        &&label_80AA65C4,
        &&label_80AA65C8,
        &&label_80AA65CC,
        &&label_80AA65D0,
        &&label_80AA65D4,
        &&label_80AA65D8,
        &&label_80AA65DC,
        &&label_80AA65E0,
        &&label_80AA65E4,
        &&label_80AA65E8,
        &&label_80AA65EC,
        &&label_80AA65F0,
        &&label_80AA65F4,
        &&label_80AA65F8,
        &&label_80AA65FC,
        &&label_80AA6600,
        &&label_80AA6604,
        &&label_80AA6608,
        &&label_80AA660C,
        &&label_80AA6610,
        &&label_80AA6614,
        &&label_80AA6618,
        &&label_80AA661C,
        &&label_80AA6620,
        &&label_80AA6624,
        &&label_80AA6628,
        &&label_80AA662C,
        &&label_80AA6630,
        &&label_80AA6634,
        &&label_80AA6638,
        &&label_80AA663C,
        &&label_80AA6640,
        &&label_80AA6644,
        &&label_80AA6648,
        &&label_80AA664C,
        &&label_80AA6650,
        &&label_80AA6654,
        &&label_80AA6658,
        &&label_80AA665C,
        &&label_80AA6660,
        &&label_80AA6664,
        &&label_80AA6668,
        &&label_80AA666C,
        &&label_80AA6670,
        &&label_80AA6674,
        &&label_80AA6678,
        &&label_80AA667C,
        &&label_80AA6680,
        &&label_80AA6684,
        &&label_80AA6688,
        &&label_80AA668C,
        &&label_80AA6690,
        &&label_80AA6694,
        &&label_80AA6698,
        &&label_80AA669C,
        &&label_80AA66A0,
        &&label_80AA66A4,
        &&label_80AA66A8,
        &&label_80AA66AC,
        &&label_80AA66B0,
        &&label_80AA66B4,
        &&label_80AA66B8,
        &&label_80AA66BC,
        &&label_80AA66C0,
        &&label_80AA66C4,
        &&label_80AA66C8,
        &&label_80AA66CC,
        &&label_80AA66D0,
        &&label_80AA66D4,
        &&label_80AA66D8,
        &&label_80AA66DC,
        &&label_80AA66E0,
        &&label_80AA66E4,
        &&label_80AA66E8,
        &&label_80AA66EC,
        &&label_80AA66F0,
        &&label_80AA66F4,
        &&label_80AA66F8,
        &&label_80AA66FC,
        &&label_80AA6700,
        &&label_80AA6704,
        &&label_80AA6708,
        &&label_80AA670C,
        &&label_80AA6710,
        &&label_80AA6714,
        &&label_80AA6718,
        &&label_80AA671C,
        &&label_80AA6720,
        &&label_80AA6724,
        &&label_80AA6728,
        &&label_80AA672C,
        &&label_80AA6730,
        &&label_80AA6734,
        &&label_80AA6738,
        &&label_80AA673C,
        &&label_80AA6740,
        &&label_80AA6744,
        &&label_80AA6748,
        &&label_80AA674C,
        &&label_80AA6750,
        &&label_80AA6754,
        &&label_80AA6758,
        &&label_80AA675C,
        &&label_80AA6760,
        &&label_80AA6764,
        &&label_80AA6768,
        &&label_80AA676C,
        &&label_80AA6770,
        &&label_80AA6774,
        &&label_80AA6778,
        &&label_80AA677C,
        &&label_80AA6780,
        &&label_80AA6784,
        &&label_80AA6788,
        &&label_80AA678C,
        &&label_80AA6790,
        &&label_80AA6794,
        &&label_80AA6798,
        &&label_80AA679C,
        &&label_80AA67A0,
        &&label_80AA67A4,
        &&label_80AA67A8,
        &&label_80AA67AC,
        &&label_80AA67B0,
        &&label_80AA67B4,
        &&label_80AA67B8,
        &&label_80AA67BC,
        &&label_80AA67C0,
        &&label_80AA67C4,
        &&label_80AA67C8,
        &&label_80AA67CC,
        &&label_80AA67D0,
        &&label_80AA67D4,
        &&label_80AA67D8,
        &&label_80AA67DC,
        &&label_80AA67E0,
        &&label_80AA67E4,
        &&label_80AA67E8,
        &&label_80AA67EC,
        &&label_80AA67F0,
        &&label_80AA67F4,
        &&label_80AA67F8,
        &&label_80AA67FC,
        &&label_80AA6800,
        &&label_80AA6804,
        &&label_80AA6808,
        &&label_80AA680C,
        &&label_80AA6810,
        &&label_80AA6814,
        &&label_80AA6818,
        &&label_80AA681C,
        &&label_80AA6820,
        &&label_80AA6824,
        &&label_80AA6828,
        &&label_80AA682C,
        &&label_80AA6830,
        &&label_80AA6834,
        &&label_80AA6838,
        &&label_80AA683C,
        &&label_80AA6840,
        &&label_80AA6844,
        &&label_80AA6848,
        &&label_80AA684C,
        &&label_80AA6850,
        &&label_80AA6854,
        &&label_80AA6858,
        &&label_80AA685C,
        &&label_80AA6860,
        &&label_80AA6864,
        &&label_80AA6868,
        &&label_80AA686C,
        &&label_80AA6870,
        &&label_80AA6874,
        &&label_80AA6878,
        &&label_80AA687C,
        &&label_80AA6880,
        &&label_80AA6884,
        &&label_80AA6888,
        &&label_80AA688C,
        &&label_80AA6890,
        &&label_80AA6894,
        &&label_80AA6898,
        &&label_80AA689C,
        &&label_80AA68A0,
        &&label_80AA68A4,
        &&label_80AA68A8,
        &&label_80AA68AC,
        &&label_80AA68B0,
        &&label_80AA68B4,
        &&label_80AA68B8,
        &&label_80AA68BC,
        &&label_80AA68C0,
        &&label_80AA68C4,
        &&label_80AA68C8,
        &&label_80AA68CC,
        &&label_80AA68D0,
        &&label_80AA68D4,
        &&label_80AA68D8,
        &&label_80AA68DC,
        &&label_80AA68E0,
        &&label_80AA68E4,
        &&label_80AA68E8,
        &&label_80AA68EC,
        &&label_80AA68F0,
        &&label_80AA68F4,
        &&label_80AA68F8,
        &&label_80AA68FC,
        &&label_80AA6900,
        &&label_80AA6904,
        &&label_80AA6908,
        &&label_80AA690C,
        &&label_80AA6910,
        &&label_80AA6914,
        &&label_80AA6918,
        &&label_80AA691C,
        &&label_80AA6920,
        &&label_80AA6924,
        &&label_80AA6928,
        &&label_80AA692C,
        &&label_80AA6930,
        &&label_80AA6934,
        &&label_80AA6938,
        &&label_80AA693C,
        &&label_80AA6940,
        &&label_80AA6944,
        &&label_80AA6948,
        &&label_80AA694C,
        &&label_80AA6950,
        &&label_80AA6954,
        &&label_80AA6958,
        &&label_80AA695C,
        &&label_80AA6960,
        &&label_80AA6964,
        &&label_80AA6968,
        &&label_80AA696C,
        &&label_80AA6970,
        &&label_80AA6974,
        &&label_80AA6978,
        &&label_80AA697C,
        &&label_80AA6980,
        &&label_80AA6984,
        &&label_80AA6988,
        &&label_80AA698C,
        &&label_80AA6990,
        &&label_80AA6994,
        &&label_80AA6998,
        &&label_80AA699C,
        &&label_80AA69A0,
        &&label_80AA69A4,
        &&label_80AA69A8,
        &&label_80AA69AC,
        &&label_80AA69B0,
        &&label_80AA69B4,
        &&label_80AA69B8,
        &&label_80AA69BC,
        &&label_80AA69C0,
        &&label_80AA69C4,
        &&label_80AA69C8,
        &&label_80AA69CC,
        &&label_80AA69D0,
        &&label_80AA69D4,
        &&label_80AA69D8,
        &&label_80AA69DC,
        &&label_80AA69E0,
        &&label_80AA69E4,
        &&label_80AA69E8,
        &&label_80AA69EC,
        &&label_80AA69F0,
        &&label_80AA69F4,
        &&label_80AA69F8,
        &&label_80AA69FC,
        &&label_80AA6A00,
        &&label_80AA6A04,
        &&label_80AA6A08,
        &&label_80AA6A0C,
        &&label_80AA6A10,
        &&label_80AA6A14,
        &&label_80AA6A18,
        &&label_80AA6A1C,
        &&label_80AA6A20,
        &&label_80AA6A24,
        &&label_80AA6A28,
        &&label_80AA6A2C,
        &&label_80AA6A30,
        &&label_80AA6A34,
        &&label_80AA6A38,
        &&label_80AA6A3C,
        &&label_80AA6A40,
        &&label_80AA6A44,
        &&label_80AA6A48,
        &&label_80AA6A4C,
        &&label_80AA6A50,
        &&label_80AA6A54,
        &&label_80AA6A58,
        &&label_80AA6A5C,
        &&label_80AA6A60,
        &&label_80AA6A64,
        &&label_80AA6A68,
        &&label_80AA6A6C,
        &&label_80AA6A70,
        &&label_80AA6A74,
        &&label_80AA6A78,
        &&label_80AA6A7C,
        &&label_80AA6A80,
        &&label_80AA6A84,
        &&label_80AA6A88,
        &&label_80AA6A8C,
        &&label_80AA6A90,
        &&label_80AA6A94,
        &&label_80AA6A98,
        &&label_80AA6A9C,
        &&label_80AA6AA0,
        &&label_80AA6AA4,
        &&label_80AA6AA8,
        &&label_80AA6AAC,
        &&label_80AA6AB0,
        &&label_80AA6AB4,
        &&label_80AA6AB8,
        &&label_80AA6ABC,
        &&label_80AA6AC0,
        &&label_80AA6AC4,
        &&label_80AA6AC8,
        &&label_80AA6ACC,
        &&label_80AA6AD0,
        &&label_80AA6AD4,
        &&label_80AA6AD8,
        &&label_80AA6ADC,
        &&label_80AA6AE0,
        &&label_80AA6AE4,
        &&label_80AA6AE8,
        &&label_80AA6AEC,
        &&label_80AA6AF0,
        &&label_80AA6AF4,
        &&label_80AA6AF8,
        &&label_80AA6AFC,
        &&label_80AA6B00,
        &&label_80AA6B04,
        &&label_80AA6B08,
        &&label_80AA6B0C,
        &&label_80AA6B10,
        &&label_80AA6B14,
        &&label_80AA6B18,
        &&label_80AA6B1C,
        &&label_80AA6B20,
        &&label_80AA6B24,
        &&label_80AA6B28,
        &&label_80AA6B2C,
        &&label_80AA6B30,
        &&label_80AA6B34,
        &&label_80AA6B38,
        &&label_80AA6B3C,
        &&label_80AA6B40,
        &&label_80AA6B44,
        &&label_80AA6B48,
        &&label_80AA6B4C,
        &&label_80AA6B50,
        &&label_80AA6B54,
        &&label_80AA6B58,
        &&label_80AA6B5C,
        &&label_80AA6B60,
        &&label_80AA6B64,
        &&label_80AA6B68,
        &&label_80AA6B6C,
        &&label_80AA6B70,
        &&label_80AA6B74,
        &&label_80AA6B78,
        &&label_80AA6B7C,
        &&label_80AA6B80,
        &&label_80AA6B84,
        &&label_80AA6B88,
        &&label_80AA6B8C,
        &&label_80AA6B90,
        &&label_80AA6B94,
        &&label_80AA6B98,
        &&label_80AA6B9C,
        &&label_80AA6BA0,
        &&label_80AA6BA4,
        &&label_80AA6BA8,
        &&label_80AA6BAC,
        &&label_80AA6BB0,
        &&label_80AA6BB4,
        &&label_80AA6BB8,
        &&label_80AA6BBC,
        &&label_80AA6BC0,
        &&label_80AA6BC4,
        &&label_80AA6BC8,
        &&label_80AA6BCC,
        &&label_80AA6BD0,
        &&label_80AA6BD4,
        &&label_80AA6BD8,
        &&label_80AA6BDC,
        &&label_80AA6BE0,
        &&label_80AA6BE4,
        &&label_80AA6BE8,
        &&label_80AA6BEC,
        &&label_80AA6BF0,
        &&label_80AA6BF4,
        &&label_80AA6BF8,
        &&label_80AA6BFC,
        &&label_80AA6C00,
        &&label_80AA6C04,
        &&label_80AA6C08,
        &&label_80AA6C0C,
        &&label_80AA6C10,
        &&label_80AA6C14,
        &&label_80AA6C18,
        &&label_80AA6C1C,
        &&label_80AA6C20,
        &&label_80AA6C24,
        &&label_80AA6C28,
        &&label_80AA6C2C,
        &&label_80AA6C30,
        &&label_80AA6C34,
        &&label_80AA6C38,
        &&label_80AA6C3C,
        &&label_80AA6C40,
        &&label_80AA6C44,
        &&label_80AA6C48,
        &&label_80AA6C4C,
        &&label_80AA6C50,
        &&label_80AA6C54,
        &&label_80AA6C58,
        &&label_80AA6C5C,
        &&label_80AA6C60,
        &&label_80AA6C64,
        &&label_80AA6C68,
        &&label_80AA6C6C,
        &&label_80AA6C70,
        &&label_80AA6C74,
        &&label_80AA6C78,
        &&label_80AA6C7C,
        &&label_80AA6C80,
        &&label_80AA6C84,
        &&label_80AA6C88,
        &&label_80AA6C8C,
        &&label_80AA6C90,
        &&label_80AA6C94,
        &&label_80AA6C98,
        &&label_80AA6C9C,
        &&label_80AA6CA0,
        &&label_80AA6CA4,
        &&label_80AA6CA8,
        &&label_80AA6CAC,
        &&label_80AA6CB0,
        &&label_80AA6CB4,
        &&label_80AA6CB8,
        &&label_80AA6CBC,
        &&label_80AA6CC0,
        &&label_80AA6CC4,
        &&label_80AA6CC8,
        &&label_80AA6CCC,
        &&label_80AA6CD0,
        &&label_80AA6CD4,
        &&label_80AA6CD8,
        &&label_80AA6CDC,
        &&label_80AA6CE0,
        &&label_80AA6CE4,
        &&label_80AA6CE8,
        &&label_80AA6CEC,
        &&label_80AA6CF0,
        &&label_80AA6CF4,
        &&label_80AA6CF8,
        &&label_80AA6CFC,
        &&label_80AA6D00,
        &&label_80AA6D04,
        &&label_80AA6D08,
        &&label_80AA6D0C,
        &&label_80AA6D10,
        &&label_80AA6D14,
        &&label_80AA6D18,
        &&label_80AA6D1C,
        &&label_80AA6D20,
        &&label_80AA6D24,
        &&label_80AA6D28,
        &&label_80AA6D2C,
        &&label_80AA6D30,
        &&label_80AA6D34,
        &&label_80AA6D38,
        &&label_80AA6D3C,
        &&label_80AA6D40,
        &&label_80AA6D44,
        &&label_80AA6D48,
        &&label_80AA6D4C,
        &&label_80AA6D50,
        &&label_80AA6D54,
        &&label_80AA6D58,
        &&label_80AA6D5C,
        &&label_80AA6D60,
        &&label_80AA6D64,
        &&label_80AA6D68,
        &&label_80AA6D6C,
        &&label_80AA6D70,
        &&label_80AA6D74,
        &&label_80AA6D78,
        &&label_80AA6D7C,
        &&label_80AA6D80,
        &&label_80AA6D84,
        &&label_80AA6D88,
        &&label_80AA6D8C,
        &&label_80AA6D90,
        &&label_80AA6D94,
        &&label_80AA6D98,
        &&label_80AA6D9C,
        &&label_80AA6DA0,
        &&label_80AA6DA4,
        &&label_80AA6DA8,
        &&label_80AA6DAC,
        &&label_80AA6DB0,
        &&label_80AA6DB4,
        &&label_80AA6DB8,
        &&label_80AA6DBC,
        &&label_80AA6DC0,
        &&label_80AA6DC4,
        &&label_80AA6DC8,
        &&label_80AA6DCC,
        &&label_80AA6DD0,
        &&label_80AA6DD4,
        &&label_80AA6DD8,
        &&label_80AA6DDC,
        &&label_80AA6DE0,
        &&label_80AA6DE4,
        &&label_80AA6DE8,
        &&label_80AA6DEC,
        &&label_80AA6DF0,
        &&label_80AA6DF4,
        &&label_80AA6DF8,
        &&label_80AA6DFC,
        &&label_80AA6E00,
        &&label_80AA6E04,
        &&label_80AA6E08,
        &&label_80AA6E0C,
        &&label_80AA6E10,
        &&label_80AA6E14,
        &&label_80AA6E18,
        &&label_80AA6E1C,
        &&label_80AA6E20,
        &&label_80AA6E24,
        &&label_80AA6E28,
        &&label_80AA6E2C,
        &&label_80AA6E30,
        &&label_80AA6E34,
        &&label_80AA6E38,
        &&label_80AA6E3C,
        &&label_80AA6E40,
        &&label_80AA6E44,
        &&label_80AA6E48,
        &&label_80AA6E4C,
        &&label_80AA6E50,
        &&label_80AA6E54,
        &&label_80AA6E58,
        &&label_80AA6E5C,
        &&label_80AA6E60,
        &&label_80AA6E64,
        &&label_80AA6E68,
        &&label_80AA6E6C,
        &&label_80AA6E70,
        &&label_80AA6E74,
        &&label_80AA6E78,
        &&label_80AA6E7C,
        &&label_80AA6E80,
        &&label_80AA6E84,
        &&label_80AA6E88,
        &&label_80AA6E8C,
        &&label_80AA6E90,
        &&label_80AA6E94,
        &&label_80AA6E98,
        &&label_80AA6E9C,
        &&label_80AA6EA0,
        &&label_80AA6EA4,
        &&label_80AA6EA8,
        &&label_80AA6EAC,
        &&label_80AA6EB0,
        &&label_80AA6EB4,
        &&label_80AA6EB8,
        &&label_80AA6EBC,
        &&label_80AA6EC0,
        &&label_80AA6EC4,
        &&label_80AA6EC8,
        &&label_80AA6ECC,
        &&label_80AA6ED0,
        &&label_80AA6ED4,
        &&label_80AA6ED8,
        &&label_80AA6EDC,
        &&label_80AA6EE0,
        &&label_80AA6EE4,
        &&label_80AA6EE8,
        &&label_80AA6EEC,
        &&label_80AA6EF0,
        &&label_80AA6EF4,
        &&label_80AA6EF8,
        &&label_80AA6EFC,
        &&label_80AA6F00,
        &&label_80AA6F04,
        &&label_80AA6F08,
        &&label_80AA6F0C,
        &&label_80AA6F10,
        &&label_80AA6F14,
        &&label_80AA6F18,
        &&label_80AA6F1C,
        &&label_80AA6F20,
        &&label_80AA6F24,
        &&label_80AA6F28,
        &&label_80AA6F2C,
        &&label_80AA6F30,
        &&label_80AA6F34,
        &&label_80AA6F38,
        &&label_80AA6F3C,
        &&label_80AA6F40,
        &&label_80AA6F44,
        &&label_80AA6F48,
        &&label_80AA6F4C,
        &&label_80AA6F50,
        &&label_80AA6F54,
        &&label_80AA6F58,
        &&label_80AA6F5C,
        &&label_80AA6F60,
        &&label_80AA6F64,
        &&label_80AA6F68,
        &&label_80AA6F6C,
        &&label_80AA6F70,
        &&label_80AA6F74,
        &&label_80AA6F78,
        &&label_80AA6F7C,
        &&label_80AA6F80,
        &&label_80AA6F84,
        &&label_80AA6F88,
        &&label_80AA6F8C,
        &&label_80AA6F90,
        &&label_80AA6F94,
        &&label_80AA6F98,
        &&label_80AA6F9C,
        &&label_80AA6FA0,
        &&label_80AA6FA4,
        &&label_80AA6FA8,
        &&label_80AA6FAC,
        &&label_80AA6FB0,
        &&label_80AA6FB4,
        &&label_80AA6FB8,
        &&label_80AA6FBC,
        &&label_80AA6FC0,
        &&label_80AA6FC4,
        &&label_80AA6FC8,
        &&label_80AA6FCC,
        &&label_80AA6FD0,
        &&label_80AA6FD4,
        &&label_80AA6FD8,
        &&label_80AA6FDC,
        &&label_80AA6FE0,
        &&label_80AA6FE4,
        &&label_80AA6FE8,
        &&label_80AA6FEC,
        &&label_80AA6FF0,
        &&label_80AA6FF4,
        &&label_80AA6FF8,
        &&label_80AA6FFC,
        &&label_80AA7000,
        &&label_80AA7004,
        &&label_80AA7008,
        &&label_80AA700C,
        &&label_80AA7010,
        &&label_80AA7014,
        &&label_80AA7018,
        &&label_80AA701C,
        &&label_80AA7020,
        &&label_80AA7024,
        &&label_80AA7028,
        &&label_80AA702C,
        &&label_80AA7030,
        &&label_80AA7034,
        &&label_80AA7038,
        &&label_80AA703C,
        &&label_80AA7040,
        &&label_80AA7044,
        &&label_80AA7048,
        &&label_80AA704C,
        &&label_80AA7050,
        &&label_80AA7054,
        &&label_80AA7058,
        &&label_80AA705C,
        &&label_80AA7060,
        &&label_80AA7064,
        &&label_80AA7068,
        &&label_80AA706C,
        &&label_80AA7070,
        &&label_80AA7074,
        &&label_80AA7078,
        &&label_80AA707C,
        &&label_80AA7080,
        &&label_80AA7084,
        &&label_80AA7088,
        &&label_80AA708C,
        &&label_80AA7090,
        &&label_80AA7094,
        &&label_80AA7098,
        &&label_80AA709C,
        &&label_80AA70A0,
        &&label_80AA70A4,
        &&label_80AA70A8,
        &&label_80AA70AC,
        &&label_80AA70B0,
        &&label_80AA70B4,
        &&label_80AA70B8,
        &&label_80AA70BC,
        &&label_80AA70C0,
        &&label_80AA70C4,
        &&label_80AA70C8,
        &&label_80AA70CC,
        &&label_80AA70D0,
        &&label_80AA70D4,
        &&label_80AA70D8,
        &&label_80AA70DC,
        &&label_80AA70E0,
        &&label_80AA70E4,
        &&label_80AA70E8,
        &&label_80AA70EC,
        &&label_80AA70F0,
        &&label_80AA70F4,
        &&label_80AA70F8,
        &&label_80AA70FC,
        &&label_80AA7100,
        &&label_80AA7104,
        &&label_80AA7108,
        &&label_80AA710C,
        &&label_80AA7110,
        &&label_80AA7114,
        &&label_80AA7118,
        &&label_80AA711C,
        &&label_80AA7120,
        &&label_80AA7124,
        &&label_80AA7128,
        &&label_80AA712C,
        &&label_80AA7130,
        &&label_80AA7134,
        &&label_80AA7138,
        &&label_80AA713C,
        &&label_80AA7140,
        &&label_80AA7144,
        &&label_80AA7148,
        &&label_80AA714C,
        &&label_80AA7150,
        &&label_80AA7154,
        &&label_80AA7158,
        &&label_80AA715C,
        &&label_80AA7160,
        &&label_80AA7164,
        &&label_80AA7168,
        &&label_80AA716C,
        &&label_80AA7170,
        &&label_80AA7174,
        &&label_80AA7178,
        &&label_80AA717C,
        &&label_80AA7180,
        &&label_80AA7184,
        &&label_80AA7188,
        &&label_80AA718C,
        &&label_80AA7190,
        &&label_80AA7194,
        &&label_80AA7198,
        &&label_80AA719C,
        &&label_80AA71A0,
        &&label_80AA71A4,
        &&label_80AA71A8,
        &&label_80AA71AC
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80AA5000u && pc <= 0x80AA71ACu && ((pc - 0x80AA5000u) & 3u) == 0u)
            goto *pc_table_80AA5000[(pc - 0x80AA5000u) >> 2];
    }
    return;
label_80AA5000:
    ctx->pc = 0x80AA5000u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 62u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5000u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 62u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 61u : 0u;
    // 80AA5000: stwu     r1, -176(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-176);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA5004:
    ctx->pc = 0x80AA5004u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5004u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 60u : 0u;
    // 80AA5004: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA5008:
    ctx->pc = 0x80AA5008u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5008u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 59u : 0u;
    // 80AA5008: stw     r0, 180(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA500C:
    ctx->pc = 0x80AA500Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA500Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 58u : 0u;
    // 80AA500C: stfd     f31, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AA500Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA5010:
    ctx->pc = 0x80AA5010u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5010u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 57u : 0u;
    // 80AA5010: psq_st   f31, 168(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80AA5010u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80AA5010u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA5014:
    ctx->pc = 0x80AA5014u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5014u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 56u : 0u;
    // 80AA5014: stfd     f30, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AA5014u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA5018:
    ctx->pc = 0x80AA5018u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5018u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 55u : 0u;
    // 80AA5018: psq_st   f30, 152(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80AA5018u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x80AA5018u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA501C:
    ctx->pc = 0x80AA501Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA501Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 54u : 0u;
    // 80AA501C: stfd     f29, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AA501Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA5020:
    ctx->pc = 0x80AA5020u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5020u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 53u : 0u;
    // 80AA5020: psq_st   f29, 136(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80AA5020u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x80AA5020u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA5024:
    ctx->pc = 0x80AA5024u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5024u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 52u : 0u;
    // 80AA5024: stfd     f28, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AA5024u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[28]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA5028:
    ctx->pc = 0x80AA5028u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5028u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80AA5028: psq_st   f28, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80AA5028u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x80AA5028u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA502C:
    ctx->pc = 0x80AA502Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA502Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 50u : 0u;
    // 80AA502C: stfd     f27, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AA502Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[27]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA5030:
    ctx->pc = 0x80AA5030u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5030u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80AA5030: psq_st   f27, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80AA5030u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_store_inline(ctx, 27u, ea, false, 0u, false, 0x80AA5030u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA5034:
    ctx->pc = 0x80AA5034u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5034u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 48u : 0u;
    // 80AA5034: stfd     f26, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AA5034u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[26]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA5038:
    ctx->pc = 0x80AA5038u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5038u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 47u : 0u;
    // 80AA5038: psq_st   f26, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80AA5038u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 26u, ea, false, 0u, false, 0x80AA5038u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA503C:
    ctx->pc = 0x80AA503Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA503Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 46u : 0u;
    // 80AA503C: stfd     f25, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AA503Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[25]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA5040:
    ctx->pc = 0x80AA5040u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5040u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 45u : 0u;
    // 80AA5040: psq_st   f25, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80AA5040u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_store_inline(ctx, 25u, ea, false, 0u, false, 0x80AA5040u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA5044:
    ctx->pc = 0x80AA5044u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5044u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 44u : 0u;
    // 80AA5044: stfd     f24, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AA5044u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[24]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA5048:
    ctx->pc = 0x80AA5048u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5048u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 43u : 0u;
    // 80AA5048: psq_st   f24, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80AA5048u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 24u, ea, false, 0u, false, 0x80AA5048u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA504C:
    ctx->pc = 0x80AA504Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA504Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 42u : 0u;
    // 80AA504C: stfd     f23, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AA504Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[23]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA5050:
    ctx->pc = 0x80AA5050u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5050u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 41u : 0u;
    // 80AA5050: psq_st   f23, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80AA5050u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 23u, ea, false, 0u, false, 0x80AA5050u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA5054:
    ctx->pc = 0x80AA5054u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5054u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 40u : 0u;
    // 80AA5054: stfd     f22, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AA5054u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[22]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA5058:
    ctx->pc = 0x80AA5058u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5058u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 39u : 0u;
    // 80AA5058: psq_st   f22, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80AA5058u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_store_inline(ctx, 22u, ea, false, 0u, false, 0x80AA5058u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA505C:
    ctx->pc = 0x80AA505Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA505Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 38u : 0u;
    // 80AA505C: stw     r31, 12(r1)
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
label_80AA5060:
    ctx->pc = 0x80AA5060u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5060u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 37u : 0u;
    // 80AA5060: stw     r30, 8(r1)
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
label_80AA5064:
    ctx->pc = 0x80AA5064u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5064u)) return;
    // 80AA5064: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80AA5068:
    ctx->pc = 0x80AA5068u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5068u)) return;
    // 80AA5068: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80AA506C:
    ctx->pc = 0x80AA506Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA506Cu)) return;
    // 80AA506C: fmr    f22, f1
    if (!ppc_fp_available_inline(ctx, 0x80AA506Cu)) return;
    ctx->fpr[22] = ctx->fpr[1];

label_80AA5070:
    ctx->pc = 0x80AA5070u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5070u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 33u : 0u;
    // 80AA5070: lfs     f27, 8(r30)
    if (!ppc_fp_available_inline(ctx, 0x80AA5070u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[27] = value;
        ctx->ps1[27] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA5074:
    ctx->pc = 0x80AA5074u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5074u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 32u : 0u;
    // 80AA5074: lfs     f26, 12(r30)
    if (!ppc_fp_available_inline(ctx, 0x80AA5074u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[26] = value;
        ctx->ps1[26] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA5078:
    ctx->pc = 0x80AA5078u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5078u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 31u : 0u;
    // 80AA5078: lfs     f25, 16(r30)
    if (!ppc_fp_available_inline(ctx, 0x80AA5078u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[25] = value;
        ctx->ps1[25] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA507C:
    ctx->pc = 0x80AA507Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA507Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 30u : 0u;
    // 80AA507C: lfs     f24, 20(r30)
    if (!ppc_fp_available_inline(ctx, 0x80AA507Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[24] = value;
        ctx->ps1[24] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA5080:
    ctx->pc = 0x80AA5080u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5080u)) return;
    // 80AA5080: fsubs   f0, f25, f27
    if (!ppc_fp_available_inline(ctx, 0x80AA5080u)) return;
    ppc_fsubs(ctx, 0, 25, 27);

label_80AA5084:
    ctx->pc = 0x80AA5084u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5084u)) return;
    // 80AA5084: fsubs   f2, f24, f26
    if (!ppc_fp_available_inline(ctx, 0x80AA5084u)) return;
    ppc_fsubs(ctx, 2, 24, 26);

label_80AA5088:
    ctx->pc = 0x80AA5088u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5088u)) return;
    // 80AA5088: fmuls   f1, f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA5088u)) return;
    ppc_fmuls(ctx, 1, 0, 0);

label_80AA508C:
    ctx->pc = 0x80AA508Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA508Cu)) return;
    // 80AA508C: fmuls   f0, f2, f2
    if (!ppc_fp_available_inline(ctx, 0x80AA508Cu)) return;
    ppc_fmuls(ctx, 0, 2, 2);

label_80AA5090:
    ctx->pc = 0x80AA5090u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5090u)) return;
    // 80AA5090: fadds   f23, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA5090u)) return;
    ppc_fadds(ctx, 23, 1, 0);

label_80AA5094:
    ctx->pc = 0x80AA5094u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5094u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80AA5094: lfs     f0, 0(r30)
    if (!ppc_fp_available_inline(ctx, 0x80AA5094u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
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
label_80AA5098:
    ctx->pc = 0x80AA5098u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5098u)) return;
    // 80AA5098: fsubs   f31, f25, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA5098u)) return;
    ppc_fsubs(ctx, 31, 25, 0);

label_80AA509C:
    ctx->pc = 0x80AA509Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA509Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80AA509C: lfs     f0, 4(r30)
    if (!ppc_fp_available_inline(ctx, 0x80AA509Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
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
label_80AA50A0:
    ctx->pc = 0x80AA50A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA50A0u)) return;
    // 80AA50A0: fsubs   f30, f24, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA50A0u)) return;
    ppc_fsubs(ctx, 30, 24, 0);

label_80AA50A4:
    ctx->pc = 0x80AA50A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA50A4u)) return;
    // 80AA50A4: fmuls   f1, f31, f31
    if (!ppc_fp_available_inline(ctx, 0x80AA50A4u)) return;
    ppc_fmuls(ctx, 1, 31, 31);

label_80AA50A8:
    ctx->pc = 0x80AA50A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA50A8u)) return;
    // 80AA50A8: fmuls   f0, f30, f30
    if (!ppc_fp_available_inline(ctx, 0x80AA50A8u)) return;
    ppc_fmuls(ctx, 0, 30, 30);

label_80AA50AC:
    ctx->pc = 0x80AA50ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA50ACu)) return;
    // 80AA50AC: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA50ACu)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80AA50B0:
    ctx->pc = 0x80AA50B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 17u, 0x80AA50B0u)) return;
    // 80AA50B0: fdivs   f1, f23, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA50B0u)) return;
    ppc_fdivs(ctx, 1, 23, 0);

label_80AA50B4:
    ctx->pc = 0x80AA50B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA50B4u)) return;
    // 80AA50B4: bl      0x80AA6788
    {
            ctx->lr = 0x80AA50B8u;
            goto label_80AA6788;
    }

label_80AA50B8:
    ctx->pc = 0x80AA50B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 31u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA50B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 31u : 1u;
    // 80AA50B8: lis     r3, -27646
    ctx->gpr[3] = ((u32)(s32)(-27646) << 16);

label_80AA50BC:
    ctx->pc = 0x80AA50BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA50BCu)) return;
    // 80AA50BC: addi    r3, r3, 30592
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(30592);

label_80AA50C0:
    ctx->pc = 0x80AA50C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA50C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80AA50C0: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AA50C0u)) return;
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
label_80AA50C4:
    ctx->pc = 0x80AA50C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA50C4u)) return;
    // 80AA50C4: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80AA50C4u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_80AA50C8:
    ctx->pc = 0x80AA50C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA50C8u)) return;
    // 80AA50C8: fmuls   f31, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA50C8u)) return;
    ppc_fmuls(ctx, 31, 31, 0);

label_80AA50CC:
    ctx->pc = 0x80AA50CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA50CCu)) return;
    // 80AA50CC: fmuls   f30, f30, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA50CCu)) return;
    ppc_fmuls(ctx, 30, 30, 0);

label_80AA50D0:
    ctx->pc = 0x80AA50D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA50D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80AA50D0: lfs     f0, 24(r30)
    if (!ppc_fp_available_inline(ctx, 0x80AA50D0u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
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
label_80AA50D4:
    ctx->pc = 0x80AA50D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA50D4u)) return;
    // 80AA50D4: fsubs   f29, f27, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA50D4u)) return;
    ppc_fsubs(ctx, 29, 27, 0);

label_80AA50D8:
    ctx->pc = 0x80AA50D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA50D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80AA50D8: lfs     f0, 28(r30)
    if (!ppc_fp_available_inline(ctx, 0x80AA50D8u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(28);
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
label_80AA50DC:
    ctx->pc = 0x80AA50DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA50DCu)) return;
    // 80AA50DC: fsubs   f28, f26, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA50DCu)) return;
    ppc_fsubs(ctx, 28, 26, 0);

label_80AA50E0:
    ctx->pc = 0x80AA50E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA50E0u)) return;
    // 80AA50E0: fmuls   f1, f29, f29
    if (!ppc_fp_available_inline(ctx, 0x80AA50E0u)) return;
    ppc_fmuls(ctx, 1, 29, 29);

label_80AA50E4:
    ctx->pc = 0x80AA50E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA50E4u)) return;
    // 80AA50E4: fmuls   f0, f28, f28
    if (!ppc_fp_available_inline(ctx, 0x80AA50E4u)) return;
    ppc_fmuls(ctx, 0, 28, 28);

label_80AA50E8:
    ctx->pc = 0x80AA50E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA50E8u)) return;
    // 80AA50E8: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA50E8u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80AA50EC:
    ctx->pc = 0x80AA50ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 17u, 0x80AA50ECu)) return;
    // 80AA50EC: fdivs   f1, f23, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA50ECu)) return;
    ppc_fdivs(ctx, 1, 23, 0);

label_80AA50F0:
    ctx->pc = 0x80AA50F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA50F0u)) return;
    // 80AA50F0: bl      0x80AA6788
    {
            ctx->lr = 0x80AA50F4u;
            goto label_80AA6788;
    }

label_80AA50F4:
    ctx->pc = 0x80AA50F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 65u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA50F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 65u : 1u;
    // 80AA50F4: lis     r3, -27646
    ctx->gpr[3] = ((u32)(s32)(-27646) << 16);

label_80AA50F8:
    ctx->pc = 0x80AA50F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA50F8u)) return;
    // 80AA50F8: addi    r3, r3, 30592
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(30592);

label_80AA50FC:
    ctx->pc = 0x80AA50FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA50FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 62u : 0u;
    // 80AA50FC: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AA50FCu)) return;
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
label_80AA5100:
    ctx->pc = 0x80AA5100u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5100u)) return;
    // 80AA5100: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80AA5100u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_80AA5104:
    ctx->pc = 0x80AA5104u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5104u)) return;
    // 80AA5104: fmuls   f29, f29, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA5104u)) return;
    ppc_fmuls(ctx, 29, 29, 0);

label_80AA5108:
    ctx->pc = 0x80AA5108u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5108u)) return;
    // 80AA5108: fmuls   f28, f28, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA5108u)) return;
    ppc_fmuls(ctx, 28, 28, 0);

label_80AA510C:
    ctx->pc = 0x80AA510Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA510Cu)) return;
    // 80AA510C: lis     r3, -27646
    ctx->gpr[3] = ((u32)(s32)(-27646) << 16);

label_80AA5110:
    ctx->pc = 0x80AA5110u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5110u)) return;
    // 80AA5110: addi    r3, r3, 30596
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(30596);

label_80AA5114:
    ctx->pc = 0x80AA5114u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5114u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 56u : 0u;
    // 80AA5114: lfs     f2, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AA5114u)) return;
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
label_80AA5118:
    ctx->pc = 0x80AA5118u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5118u)) return;
    // 80AA5118: lis     r3, -27646
    ctx->gpr[3] = ((u32)(s32)(-27646) << 16);

label_80AA511C:
    ctx->pc = 0x80AA511Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA511Cu)) return;
    // 80AA511C: addi    r3, r3, 30600
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(30600);

label_80AA5120:
    ctx->pc = 0x80AA5120u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5120u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 53u : 0u;
    // 80AA5120: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AA5120u)) return;
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
label_80AA5124:
    ctx->pc = 0x80AA5124u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5124u)) return;
    // 80AA5124: fmuls   f1, f0, f22
    if (!ppc_fp_available_inline(ctx, 0x80AA5124u)) return;
    ppc_fmuls(ctx, 1, 0, 22);

label_80AA5128:
    ctx->pc = 0x80AA5128u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5128u)) return;
    // 80AA5128: lis     r3, -27646
    ctx->gpr[3] = ((u32)(s32)(-27646) << 16);

label_80AA512C:
    ctx->pc = 0x80AA512Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA512Cu)) return;
    // 80AA512C: addi    r3, r3, 30604
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(30604);

label_80AA5130:
    ctx->pc = 0x80AA5130u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5130u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80AA5130: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AA5130u)) return;
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
label_80AA5134:
    ctx->pc = 0x80AA5134u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5134u)) return;
    // 80AA5134: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA5134u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_80AA5138:
    ctx->pc = 0x80AA5138u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5138u)) return;
    // 80AA5138: fmuls   f0, f0, f22
    if (!ppc_fp_available_inline(ctx, 0x80AA5138u)) return;
    ppc_fmuls(ctx, 0, 0, 22);

label_80AA513C:
    ctx->pc = 0x80AA513Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA513Cu)) return;
    // 80AA513C: fmuls   f0, f22, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA513Cu)) return;
    ppc_fmuls(ctx, 0, 22, 0);

label_80AA5140:
    ctx->pc = 0x80AA5140u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5140u)) return;
    // 80AA5140: fadds   f4, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA5140u)) return;
    ppc_fadds(ctx, 4, 2, 0);

label_80AA5144:
    ctx->pc = 0x80AA5144u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5144u)) return;
    // 80AA5144: fmuls   f0, f22, f31
    if (!ppc_fp_available_inline(ctx, 0x80AA5144u)) return;
    ppc_fmuls(ctx, 0, 22, 31);

label_80AA5148:
    ctx->pc = 0x80AA5148u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5148u)) return;
    // 80AA5148: fadds   f0, f27, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA5148u)) return;
    ppc_fadds(ctx, 0, 27, 0);

label_80AA514C:
    ctx->pc = 0x80AA514Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA514Cu)) return;
    // 80AA514C: fmuls   f1, f4, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA514Cu)) return;
    ppc_fmuls(ctx, 1, 4, 0);

label_80AA5150:
    ctx->pc = 0x80AA5150u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5150u)) return;
    // 80AA5150: fsubs   f3, f2, f4
    if (!ppc_fp_available_inline(ctx, 0x80AA5150u)) return;
    ppc_fsubs(ctx, 3, 2, 4);

label_80AA5154:
    ctx->pc = 0x80AA5154u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5154u)) return;
    // 80AA5154: fsubs   f2, f2, f22
    if (!ppc_fp_available_inline(ctx, 0x80AA5154u)) return;
    ppc_fsubs(ctx, 2, 2, 22);

label_80AA5158:
    ctx->pc = 0x80AA5158u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5158u)) return;
    // 80AA5158: fmuls   f0, f2, f29
    if (!ppc_fp_available_inline(ctx, 0x80AA5158u)) return;
    ppc_fmuls(ctx, 0, 2, 29);

label_80AA515C:
    ctx->pc = 0x80AA515Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA515Cu)) return;
    // 80AA515C: fadds   f0, f25, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA515Cu)) return;
    ppc_fadds(ctx, 0, 25, 0);

label_80AA5160:
    ctx->pc = 0x80AA5160u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5160u)) return;
    // 80AA5160: fmuls   f0, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA5160u)) return;
    ppc_fmuls(ctx, 0, 3, 0);

label_80AA5164:
    ctx->pc = 0x80AA5164u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5164u)) return;
    // 80AA5164: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA5164u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80AA5168:
    ctx->pc = 0x80AA5168u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5168u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 35u : 0u;
    // 80AA5168: stfs     f0, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x80AA5168u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA516C:
    ctx->pc = 0x80AA516Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA516Cu)) return;
    // 80AA516C: fmuls   f0, f22, f30
    if (!ppc_fp_available_inline(ctx, 0x80AA516Cu)) return;
    ppc_fmuls(ctx, 0, 22, 30);

label_80AA5170:
    ctx->pc = 0x80AA5170u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5170u)) return;
    // 80AA5170: fadds   f0, f26, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA5170u)) return;
    ppc_fadds(ctx, 0, 26, 0);

label_80AA5174:
    ctx->pc = 0x80AA5174u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5174u)) return;
    // 80AA5174: fmuls   f1, f4, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA5174u)) return;
    ppc_fmuls(ctx, 1, 4, 0);

label_80AA5178:
    ctx->pc = 0x80AA5178u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5178u)) return;
    // 80AA5178: fmuls   f0, f2, f28
    if (!ppc_fp_available_inline(ctx, 0x80AA5178u)) return;
    ppc_fmuls(ctx, 0, 2, 28);

label_80AA517C:
    ctx->pc = 0x80AA517Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA517Cu)) return;
    // 80AA517C: fadds   f0, f24, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA517Cu)) return;
    ppc_fadds(ctx, 0, 24, 0);

label_80AA5180:
    ctx->pc = 0x80AA5180u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5180u)) return;
    // 80AA5180: fmuls   f0, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA5180u)) return;
    ppc_fmuls(ctx, 0, 3, 0);

label_80AA5184:
    ctx->pc = 0x80AA5184u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5184u)) return;
    // 80AA5184: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA5184u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80AA5188:
    ctx->pc = 0x80AA5188u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5188u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 80AA5188: stfs     f0, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x80AA5188u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA518C:
    ctx->pc = 0x80AA518Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA518Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 80AA518C: psq_l   f31, 168(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80AA518Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80AA518Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA5190:
    ctx->pc = 0x80AA5190u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5190u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80AA5190: lfd     f31, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AA5190u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA5194:
    ctx->pc = 0x80AA5194u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5194u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80AA5194: psq_l   f30, 152(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80AA5194u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x80AA5194u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA5198:
    ctx->pc = 0x80AA5198u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5198u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80AA5198: lfd     f30, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AA5198u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA519C:
    ctx->pc = 0x80AA519Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA519Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80AA519C: psq_l   f29, 136(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80AA519Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x80AA519Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA51A0:
    ctx->pc = 0x80AA51A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA51A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80AA51A0: lfd     f29, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AA51A0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA51A4:
    ctx->pc = 0x80AA51A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA51A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80AA51A4: psq_l   f28, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80AA51A4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x80AA51A4u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA51A8:
    ctx->pc = 0x80AA51A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA51A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80AA51A8: lfd     f28, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AA51A8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        ctx->fpr[28] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA51AC:
    ctx->pc = 0x80AA51ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA51ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80AA51AC: psq_l   f27, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80AA51ACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_load_inline(ctx, 27u, ea, false, 0u, false, 0x80AA51ACu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA51B0:
    ctx->pc = 0x80AA51B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA51B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80AA51B0: lfd     f27, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AA51B0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->fpr[27] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA51B4:
    ctx->pc = 0x80AA51B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA51B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80AA51B4: psq_l   f26, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80AA51B4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 26u, ea, false, 0u, false, 0x80AA51B4u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA51B8:
    ctx->pc = 0x80AA51B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA51B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80AA51B8: lfd     f26, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AA51B8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->fpr[26] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA51BC:
    ctx->pc = 0x80AA51BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA51BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80AA51BC: psq_l   f25, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80AA51BCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 25u, ea, false, 0u, false, 0x80AA51BCu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA51C0:
    ctx->pc = 0x80AA51C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA51C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80AA51C0: lfd     f25, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AA51C0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->fpr[25] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA51C4:
    ctx->pc = 0x80AA51C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA51C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80AA51C4: psq_l   f24, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80AA51C4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 24u, ea, false, 0u, false, 0x80AA51C4u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA51C8:
    ctx->pc = 0x80AA51C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA51C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80AA51C8: lfd     f24, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AA51C8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[24] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA51CC:
    ctx->pc = 0x80AA51CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA51CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80AA51CC: psq_l   f23, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80AA51CCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 23u, ea, false, 0u, false, 0x80AA51CCu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA51D0:
    ctx->pc = 0x80AA51D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA51D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80AA51D0: lfd     f23, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AA51D0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[23] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA51D4:
    ctx->pc = 0x80AA51D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA51D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80AA51D4: psq_l   f22, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80AA51D4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_load_inline(ctx, 22u, ea, false, 0u, false, 0x80AA51D4u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA51D8:
    ctx->pc = 0x80AA51D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA51D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA51D8: lfd     f22, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AA51D8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[22] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA51DC:
    ctx->pc = 0x80AA51DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA51DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA51DC: lwz     r31, 12(r1)
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
label_80AA51E0:
    ctx->pc = 0x80AA51E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA51E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AA51E0: lwz     r30, 8(r1)
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
label_80AA51E4:
    ctx->pc = 0x80AA51E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA51E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA51E4: lwz     r0, 180(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA51E8:
    ctx->pc = 0x80AA51E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80AA51E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA51E8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA51EC:
    ctx->pc = 0x80AA51ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA51ECu)) return;
    // 80AA51EC: addi    r1, r1, 176
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(176);

label_80AA51F0:
    ctx->pc = 0x80AA51F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA51F0u)) return;
    // 80AA51F0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AA5000;
        }
    }

label_80AA51F4:
    ctx->pc = 0x80AA51F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 31u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA51F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 31u : 1u;
    // 80AA51F4: lis     r5, -27646
    ctx->gpr[5] = ((u32)(s32)(-27646) << 16);

label_80AA51F8:
    ctx->pc = 0x80AA51F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA51F8u)) return;
    // 80AA51F8: addi    r5, r5, 30632
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(30632);

label_80AA51FC:
    ctx->pc = 0x80AA51FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA51FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80AA51FC: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA51FCu)) return;
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
label_80AA5200:
    ctx->pc = 0x80AA5200u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5200u)) return;
    // 80AA5200: lis     r5, -27646
    ctx->gpr[5] = ((u32)(s32)(-27646) << 16);

label_80AA5204:
    ctx->pc = 0x80AA5204u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5204u)) return;
    // 80AA5204: addi    r5, r5, 30636
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(30636);

label_80AA5208:
    ctx->pc = 0x80AA5208u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5208u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80AA5208: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA5208u)) return;
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
label_80AA520C:
    ctx->pc = 0x80AA520Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA520Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80AA520C: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AA520Cu)) return;
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
label_80AA5210:
    ctx->pc = 0x80AA5210u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5210u)) return;
    // 80AA5210: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA5210u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80AA5214:
    ctx->pc = 0x80AA5214u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5214u)) return;
    // 80AA5214: fadds   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA5214u)) return;
    ppc_fadds(ctx, 0, 2, 0);

label_80AA5218:
    ctx->pc = 0x80AA5218u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5218u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80AA5218: stfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AA5218u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA521C:
    ctx->pc = 0x80AA521Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA521Cu)) return;
    // 80AA521C: lis     r5, -27646
    ctx->gpr[5] = ((u32)(s32)(-27646) << 16);

label_80AA5220:
    ctx->pc = 0x80AA5220u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5220u)) return;
    // 80AA5220: addi    r5, r5, 30640
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(30640);

label_80AA5224:
    ctx->pc = 0x80AA5224u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5224u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80AA5224: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA5224u)) return;
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
label_80AA5228:
    ctx->pc = 0x80AA5228u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5228u)) return;
    // 80AA5228: lis     r5, -27646
    ctx->gpr[5] = ((u32)(s32)(-27646) << 16);

label_80AA522C:
    ctx->pc = 0x80AA522Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA522Cu)) return;
    // 80AA522C: addi    r5, r5, 30644
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(30644);

label_80AA5230:
    ctx->pc = 0x80AA5230u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5230u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80AA5230: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA5230u)) return;
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
label_80AA5234:
    ctx->pc = 0x80AA5234u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5234u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80AA5234: lfs     f0, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AA5234u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
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
label_80AA5238:
    ctx->pc = 0x80AA5238u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5238u)) return;
    // 80AA5238: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA5238u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80AA523C:
    ctx->pc = 0x80AA523Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA523Cu)) return;
    // 80AA523C: fadds   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA523Cu)) return;
    ppc_fadds(ctx, 0, 2, 0);

label_80AA5240:
    ctx->pc = 0x80AA5240u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5240u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80AA5240: stfs     f0, 4(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AA5240u)) return;
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
label_80AA5244:
    ctx->pc = 0x80AA5244u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5244u)) return;
    // 80AA5244: lis     r5, -27646
    ctx->gpr[5] = ((u32)(s32)(-27646) << 16);

label_80AA5248:
    ctx->pc = 0x80AA5248u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5248u)) return;
    // 80AA5248: addi    r5, r5, 30648
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(30648);

label_80AA524C:
    ctx->pc = 0x80AA524Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA524Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80AA524C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA524Cu)) return;
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
label_80AA5250:
    ctx->pc = 0x80AA5250u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5250u)) return;
    // 80AA5250: lis     r5, -27646
    ctx->gpr[5] = ((u32)(s32)(-27646) << 16);

label_80AA5254:
    ctx->pc = 0x80AA5254u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5254u)) return;
    // 80AA5254: addi    r5, r5, 30652
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(30652);

label_80AA5258:
    ctx->pc = 0x80AA5258u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5258u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AA5258: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA5258u)) return;
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
label_80AA525C:
    ctx->pc = 0x80AA525Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA525Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA525C: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AA525Cu)) return;
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
label_80AA5260:
    ctx->pc = 0x80AA5260u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5260u)) return;
    // 80AA5260: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA5260u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80AA5264:
    ctx->pc = 0x80AA5264u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5264u)) return;
    // 80AA5264: fadds   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA5264u)) return;
    ppc_fadds(ctx, 0, 2, 0);

label_80AA5268:
    ctx->pc = 0x80AA5268u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5268u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA5268: stfs     f0, 8(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AA5268u)) return;
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
label_80AA526C:
    ctx->pc = 0x80AA526Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA526Cu)) return;
    // 80AA526C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AA5000;
        }
    }

label_80AA5270:
    ctx->pc = 0x80AA5270u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5270u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA5270: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AA5000;
        }
    }

label_80AA5274:
    ctx->pc = 0x80AA5274u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5274u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA5274: stwu     r1, -16(r1)
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
label_80AA5278:
    ctx->pc = 0x80AA5278u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5278u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AA5278: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA527C:
    ctx->pc = 0x80AA527Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA527Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA527C: stw     r0, 20(r1)
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
label_80AA5280:
    ctx->pc = 0x80AA5280u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5280u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AA5280: stw     r31, 12(r1)
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
label_80AA5284:
    ctx->pc = 0x80AA5284u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5284u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA5284: lwz     r31, 32(r3)
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
label_80AA5288:
    ctx->pc = 0x80AA5288u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5288u)) return;
    // 80AA5288: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA528C:
    ctx->pc = 0x80AA528Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA528Cu)) return;
    // 80AA528C: bl      0x8004B49C
    {
            ctx->lr = 0x80AA5290u;
            ctx->pc = 0x8004B49Cu;
            return;
    }

label_80AA5290:
    ctx->pc = 0x80AA5290u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5290u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AA5290: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA5294:
    ctx->pc = 0x80AA5294u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5294u)) return;
    // 80AA5294: addi    r4, r31, 32
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(32);

label_80AA5298:
    ctx->pc = 0x80AA5298u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5298u)) return;
    // 80AA5298: bl      0x8004AA9C
    {
            ctx->lr = 0x80AA529Cu;
            ctx->pc = 0x8004AA9Cu;
            return;
    }

label_80AA529C:
    ctx->pc = 0x80AA529Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA529Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA529C: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA52A0:
    ctx->pc = 0x80AA52A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA52A0u)) return;
    // 80AA52A0: cmpwi   r0, 0
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

label_80AA52A4:
    ctx->pc = 0x80AA52A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA52A4u)) return;
    // 80AA52A4: bc    12, 2, 0x80AA52B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80AA52B4;
        }
    }

label_80AA52A8:
    ctx->pc = 0x80AA52A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA52A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AA52A8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA52AC:
    ctx->pc = 0x80AA52ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA52ACu)) return;
    // 80AA52AC: rlwinm r4, r0, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_80AA52B0:
    ctx->pc = 0x80AA52B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA52B0u)) return;
    // 80AA52B0: bl      0x8004AF5C
    {
            ctx->lr = 0x80AA52B4u;
            ctx->pc = 0x8004AF5Cu;
            return;
    }

label_80AA52B4:
    ctx->pc = 0x80AA52B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA52B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA52B4: lwz     r0, 20(r31)
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
label_80AA52B8:
    ctx->pc = 0x80AA52B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA52B8u)) return;
    // 80AA52B8: cmpwi   r0, 0
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

label_80AA52BC:
    ctx->pc = 0x80AA52BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA52BCu)) return;
    // 80AA52BC: bc    12, 2, 0x80AA52CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80AA52CC;
        }
    }

label_80AA52C0:
    ctx->pc = 0x80AA52C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA52C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AA52C0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA52C4:
    ctx->pc = 0x80AA52C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA52C4u)) return;
    // 80AA52C4: rlwinm r4, r0, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_80AA52C8:
    ctx->pc = 0x80AA52C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA52C8u)) return;
    // 80AA52C8: bl      0x8004B3E0
    {
            ctx->lr = 0x80AA52CCu;
            ctx->pc = 0x8004B3E0u;
            return;
    }

label_80AA52CC:
    ctx->pc = 0x80AA52CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA52CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA52CC: lwz     r0, 28(r31)
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
label_80AA52D0:
    ctx->pc = 0x80AA52D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA52D0u)) return;
    // 80AA52D0: cmpwi   r0, 0
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

label_80AA52D4:
    ctx->pc = 0x80AA52D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA52D4u)) return;
    // 80AA52D4: bc    12, 2, 0x80AA52E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80AA52E4;
        }
    }

label_80AA52D8:
    ctx->pc = 0x80AA52D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA52D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AA52D8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA52DC:
    ctx->pc = 0x80AA52DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA52DCu)) return;
    // 80AA52DC: rlwinm r4, r0, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_80AA52E0:
    ctx->pc = 0x80AA52E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA52E0u)) return;
    // 80AA52E0: bl      0x8004AFDC
    {
            ctx->lr = 0x80AA52E4u;
            ctx->pc = 0x8004AFDCu;
            return;
    }

label_80AA52E4:
    ctx->pc = 0x80AA52E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA52E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AA52E4: lis     r3, -27645
    ctx->gpr[3] = ((u32)(s32)(-27645) << 16);

label_80AA52E8:
    ctx->pc = 0x80AA52E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA52E8u)) return;
    // 80AA52E8: addi    r3, r3, 32000
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(32000);

label_80AA52EC:
    ctx->pc = 0x80AA52ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA52ECu)) return;
    // 80AA52EC: bl      0x8060F594
    {
            ctx->lr = 0x80AA52F0u;
            ctx->pc = 0x8060F594u;
            return;
    }

label_80AA52F0:
    ctx->pc = 0x80AA52F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA52F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 80AA52F0: lis     r3, -27644
    ctx->gpr[3] = ((u32)(s32)(-27644) << 16);

label_80AA52F4:
    ctx->pc = 0x80AA52F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA52F4u)) return;
    // 80AA52F4: addi    r3, r3, -18496
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-18496);

label_80AA52F8:
    ctx->pc = 0x80AA52F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA52F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AA52F8: lfs     f1, 16(r31)
    if (!ppc_fp_available_inline(ctx, 0x80AA52F8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA52FC:
    ctx->pc = 0x80AA52FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA52FCu)) return;
    // 80AA52FC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AA5300:
    ctx->pc = 0x80AA5300u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5300u)) return;
    // 80AA5300: lis     r5, -27646
    ctx->gpr[5] = ((u32)(s32)(-27646) << 16);

label_80AA5304:
    ctx->pc = 0x80AA5304u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5304u)) return;
    // 80AA5304: addi    r5, r5, 30596
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(30596);

label_80AA5308:
    ctx->pc = 0x80AA5308u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5308u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA5308: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA5308u)) return;
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
label_80AA530C:
    ctx->pc = 0x80AA530Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA530Cu)) return;
    // 80AA530C: bl      0x805FBD30
    {
            ctx->lr = 0x80AA5310u;
            ctx->pc = 0x805FBD30u;
            return;
    }

label_80AA5310:
    ctx->pc = 0x80AA5310u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5310u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    // 80AA5310: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA5314:
    ctx->pc = 0x80AA5314u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5314u)) return;
    // 80AA5314: lis     r4, -27646
    ctx->gpr[4] = ((u32)(s32)(-27646) << 16);

label_80AA5318:
    ctx->pc = 0x80AA5318u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5318u)) return;
    // 80AA5318: addi    r4, r4, 30608
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(30608);

label_80AA531C:
    ctx->pc = 0x80AA531Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA531Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA531C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AA531Cu)) return;
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
label_80AA5320:
    ctx->pc = 0x80AA5320u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5320u)) return;
    // 80AA5320: lis     r4, -27646
    ctx->gpr[4] = ((u32)(s32)(-27646) << 16);

label_80AA5324:
    ctx->pc = 0x80AA5324u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5324u)) return;
    // 80AA5324: addi    r4, r4, 30656
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(30656);

label_80AA5328:
    ctx->pc = 0x80AA5328u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5328u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA5328: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AA5328u)) return;
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
label_80AA532C:
    ctx->pc = 0x80AA532Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA532Cu)) return;
    // 80AA532C: lis     r4, -27646
    ctx->gpr[4] = ((u32)(s32)(-27646) << 16);

label_80AA5330:
    ctx->pc = 0x80AA5330u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5330u)) return;
    // 80AA5330: addi    r4, r4, 30660
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(30660);

label_80AA5334:
    ctx->pc = 0x80AA5334u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5334u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA5334: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AA5334u)) return;
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
label_80AA5338:
    ctx->pc = 0x80AA5338u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5338u)) return;
    // 80AA5338: bl      0x8004B35C
    {
            ctx->lr = 0x80AA533Cu;
            ctx->pc = 0x8004B35Cu;
            return;
    }

label_80AA533C:
    ctx->pc = 0x80AA533Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA533Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AA533C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA5340:
    ctx->pc = 0x80AA5340u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5340u)) return;
    // 80AA5340: li      r4, 16384
    ctx->gpr[4] = (u32)(s32)(16384);

label_80AA5344:
    ctx->pc = 0x80AA5344u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5344u)) return;
    // 80AA5344: bl      0x8004AF5C
    {
            ctx->lr = 0x80AA5348u;
            ctx->pc = 0x8004AF5Cu;
            return;
    }

label_80AA5348:
    ctx->pc = 0x80AA5348u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5348u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AA5348: lis     r3, -27645
    ctx->gpr[3] = ((u32)(s32)(-27645) << 16);

label_80AA534C:
    ctx->pc = 0x80AA534Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA534Cu)) return;
    // 80AA534C: addi    r3, r3, 32000
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(32000);

label_80AA5350:
    ctx->pc = 0x80AA5350u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5350u)) return;
    // 80AA5350: bl      0x8060F594
    {
            ctx->lr = 0x80AA5354u;
            ctx->pc = 0x8060F594u;
            return;
    }

label_80AA5354:
    ctx->pc = 0x80AA5354u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5354u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80AA5354: lis     r3, -27645
    ctx->gpr[3] = ((u32)(s32)(-27645) << 16);

label_80AA5358:
    ctx->pc = 0x80AA5358u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5358u)) return;
    // 80AA5358: addi    r3, r3, 30972
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(30972);

label_80AA535C:
    ctx->pc = 0x80AA535Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA535Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA535C: lfs     f1, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x80AA535Cu)) return;
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
label_80AA5360:
    ctx->pc = 0x80AA5360u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5360u)) return;
    // 80AA5360: lis     r4, -27646
    ctx->gpr[4] = ((u32)(s32)(-27646) << 16);

label_80AA5364:
    ctx->pc = 0x80AA5364u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5364u)) return;
    // 80AA5364: addi    r4, r4, 30596
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(30596);

label_80AA5368:
    ctx->pc = 0x80AA5368u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5368u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA5368: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AA5368u)) return;
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
label_80AA536C:
    ctx->pc = 0x80AA536Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA536Cu)) return;
    // 80AA536C: bl      0x805FC188
    {
            ctx->lr = 0x80AA5370u;
            ctx->pc = 0x805FC188u;
            return;
    }

label_80AA5370:
    ctx->pc = 0x80AA5370u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5370u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA5370: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AA5374:
    ctx->pc = 0x80AA5374u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5374u)) return;
    // 80AA5374: bl      0x8004B504
    {
            ctx->lr = 0x80AA5378u;
            ctx->pc = 0x8004B504u;
            return;
    }

label_80AA5378:
    ctx->pc = 0x80AA5378u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5378u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AA5378: lwz     r31, 12(r1)
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
label_80AA537C:
    ctx->pc = 0x80AA537Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA537Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA537C: lwz     r0, 20(r1)
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
label_80AA5380:
    ctx->pc = 0x80AA5380u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80AA5380u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA5380: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA5384:
    ctx->pc = 0x80AA5384u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5384u)) return;
    // 80AA5384: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80AA5388:
    ctx->pc = 0x80AA5388u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5388u)) return;
    // 80AA5388: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AA5000;
        }
    }

label_80AA538C:
    ctx->pc = 0x80AA538Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 26u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA538Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 26u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80AA538C: stwu     r1, -128(r1)
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
label_80AA5390:
    ctx->pc = 0x80AA5390u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5390u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80AA5390: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA5394:
    ctx->pc = 0x80AA5394u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5394u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80AA5394: stw     r0, 132(r1)
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
label_80AA5398:
    ctx->pc = 0x80AA5398u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5398u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80AA5398: stfd     f31, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AA5398u)) return;
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
label_80AA539C:
    ctx->pc = 0x80AA539Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA539Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80AA539C: psq_st   f31, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80AA539Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80AA539Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA53A0:
    ctx->pc = 0x80AA53A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA53A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80AA53A0: stfd     f30, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AA53A0u)) return;
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
label_80AA53A4:
    ctx->pc = 0x80AA53A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA53A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80AA53A4: psq_st   f30, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80AA53A4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x80AA53A4u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA53A8:
    ctx->pc = 0x80AA53A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA53A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80AA53A8: stfd     f29, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AA53A8u)) return;
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
label_80AA53AC:
    ctx->pc = 0x80AA53ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA53ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80AA53AC: psq_st   f29, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80AA53ACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x80AA53ACu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA53B0:
    ctx->pc = 0x80AA53B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA53B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80AA53B0: stfd     f28, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AA53B0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[28]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA53B4:
    ctx->pc = 0x80AA53B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA53B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80AA53B4: psq_st   f28, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80AA53B4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x80AA53B4u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA53B8:
    ctx->pc = 0x80AA53B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA53B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80AA53B8: stfd     f27, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AA53B8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[27]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA53BC:
    ctx->pc = 0x80AA53BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA53BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80AA53BC: psq_st   f27, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80AA53BCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 27u, ea, false, 0u, false, 0x80AA53BCu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA53C0:
    ctx->pc = 0x80AA53C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA53C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80AA53C0: stw     r31, 44(r1)
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
label_80AA53C4:
    ctx->pc = 0x80AA53C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA53C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80AA53C4: stw     r30, 40(r1)
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
label_80AA53C8:
    ctx->pc = 0x80AA53C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA53C8u)) return;
    // 80AA53C8: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80AA53CC:
    ctx->pc = 0x80AA53CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA53CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80AA53CC: lwz     r31, 32(r30)
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
label_80AA53D0:
    ctx->pc = 0x80AA53D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA53D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80AA53D0: lfs     f28, 44(r31)
    if (!ppc_fp_available_inline(ctx, 0x80AA53D0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[28] = value;
        ctx->ps1[28] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA53D4:
    ctx->pc = 0x80AA53D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA53D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA53D4: lfs     f27, 48(r31)
    if (!ppc_fp_available_inline(ctx, 0x80AA53D4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[27] = value;
        ctx->ps1[27] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA53D8:
    ctx->pc = 0x80AA53D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA53D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA53D8: lfs     f31, 16(r31)
    if (!ppc_fp_available_inline(ctx, 0x80AA53D8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
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
label_80AA53DC:
    ctx->pc = 0x80AA53DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA53DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AA53DC: lfs     f30, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x80AA53DCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
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
label_80AA53E0:
    ctx->pc = 0x80AA53E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA53E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA53E0: lfs     f29, 12(r31)
    if (!ppc_fp_available_inline(ctx, 0x80AA53E0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
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
label_80AA53E4:
    ctx->pc = 0x80AA53E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA53E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AA53E4: lbz     r0, 0(r31)
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
label_80AA53E8:
    ctx->pc = 0x80AA53E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA53E8u)) return;
    // 80AA53E8: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80AA53EC:
    ctx->pc = 0x80AA53ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA53ECu)) return;
    // 80AA53EC: cmpwi   r0, 1
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

label_80AA53F0:
    ctx->pc = 0x80AA53F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA53F0u)) return;
    // 80AA53F0: bc    12, 2, 0x80AA5684
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80AA5684;
        }
    }

label_80AA53F4:
    ctx->pc = 0x80AA53F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 19u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA53F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 19u : 1u;
    // 80AA53F4: lis     r3, -27646
    ctx->gpr[3] = ((u32)(s32)(-27646) << 16);

label_80AA53F8:
    ctx->pc = 0x80AA53F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA53F8u)) return;
    // 80AA53F8: addi    r3, r3, 30596
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(30596);

label_80AA53FC:
    ctx->pc = 0x80AA53FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA53FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80AA53FC: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AA53FCu)) return;
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
label_80AA5400:
    ctx->pc = 0x80AA5400u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5400u)) return;
    // 80AA5400: fadds   f31, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA5400u)) return;
    ppc_fadds(ctx, 31, 31, 0);

label_80AA5404:
    ctx->pc = 0x80AA5404u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5404u)) return;
    // 80AA5404: lis     r3, -27644
    ctx->gpr[3] = ((u32)(s32)(-27644) << 16);

label_80AA5408:
    ctx->pc = 0x80AA5408u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5408u)) return;
    // 80AA5408: addi    r3, r3, -18496
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-18496);

label_80AA540C:
    ctx->pc = 0x80AA540Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA540Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80AA540C: lwz     r3, 4(r3)
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
label_80AA5410:
    ctx->pc = 0x80AA5410u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5410u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80AA5410: lwz     r3, 4(r3)
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
label_80AA5414:
    ctx->pc = 0x80AA5414u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5414u)) return;
    // 80AA5414: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80AA5418:
    ctx->pc = 0x80AA5418u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5418u)) return;
    // 80AA5418: lis     r3, -27646
    ctx->gpr[3] = ((u32)(s32)(-27646) << 16);

label_80AA541C:
    ctx->pc = 0x80AA541Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA541Cu)) return;
    // 80AA541C: addi    r3, r3, 30712
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(30712);

label_80AA5420:
    ctx->pc = 0x80AA5420u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5420u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA5420: lfd     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AA5420u)) return;
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
label_80AA5424:
    ctx->pc = 0x80AA5424u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5424u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA5424: stw     r0, 20(r1)
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
label_80AA5428:
    ctx->pc = 0x80AA5428u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5428u)) return;
    // 80AA5428: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_80AA542C:
    ctx->pc = 0x80AA542Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA542Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA542C: stw     r0, 16(r1)
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
label_80AA5430:
    ctx->pc = 0x80AA5430u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5430u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AA5430: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AA5430u)) return;
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
label_80AA5434:
    ctx->pc = 0x80AA5434u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5434u)) return;
    // 80AA5434: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80AA5434u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_80AA5438:
    ctx->pc = 0x80AA5438u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5438u)) return;
    // 80AA5438: fcmpo   cr0, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA5438u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[31], ctx->fpr[0], true);

label_80AA543C:
    ctx->pc = 0x80AA543Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA543Cu)) return;
    // 80AA543C: bc    4, 1, 0x80AA544C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AA544C;
        }
    }

label_80AA5440:
    ctx->pc = 0x80AA5440u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5440u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AA5440: lis     r3, -27646
    ctx->gpr[3] = ((u32)(s32)(-27646) << 16);

label_80AA5444:
    ctx->pc = 0x80AA5444u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5444u)) return;
    // 80AA5444: addi    r3, r3, 30608
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(30608);

label_80AA5448:
    ctx->pc = 0x80AA5448u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5448u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80AA5448: lfs     f31, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AA5448u)) return;
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
label_80AA544C:
    ctx->pc = 0x80AA544Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 19u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA544Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 19u : 1u;
    // 80AA544C: lis     r3, -27646
    ctx->gpr[3] = ((u32)(s32)(-27646) << 16);

label_80AA5450:
    ctx->pc = 0x80AA5450u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5450u)) return;
    // 80AA5450: addi    r3, r3, 30596
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(30596);

label_80AA5454:
    ctx->pc = 0x80AA5454u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5454u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80AA5454: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AA5454u)) return;
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
label_80AA5458:
    ctx->pc = 0x80AA5458u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5458u)) return;
    // 80AA5458: fadds   f30, f30, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA5458u)) return;
    ppc_fadds(ctx, 30, 30, 0);

label_80AA545C:
    ctx->pc = 0x80AA545Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA545Cu)) return;
    // 80AA545C: lis     r3, -27645
    ctx->gpr[3] = ((u32)(s32)(-27645) << 16);

label_80AA5460:
    ctx->pc = 0x80AA5460u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5460u)) return;
    // 80AA5460: addi    r3, r3, 30972
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(30972);

label_80AA5464:
    ctx->pc = 0x80AA5464u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5464u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80AA5464: lwz     r3, 4(r3)
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
label_80AA5468:
    ctx->pc = 0x80AA5468u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5468u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80AA5468: lwz     r3, 4(r3)
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
label_80AA546C:
    ctx->pc = 0x80AA546Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA546Cu)) return;
    // 80AA546C: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80AA5470:
    ctx->pc = 0x80AA5470u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5470u)) return;
    // 80AA5470: lis     r3, -27646
    ctx->gpr[3] = ((u32)(s32)(-27646) << 16);

label_80AA5474:
    ctx->pc = 0x80AA5474u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5474u)) return;
    // 80AA5474: addi    r3, r3, 30712
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(30712);

label_80AA5478:
    ctx->pc = 0x80AA5478u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5478u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA5478: lfd     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AA5478u)) return;
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
label_80AA547C:
    ctx->pc = 0x80AA547Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA547Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA547C: stw     r0, 28(r1)
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
label_80AA5480:
    ctx->pc = 0x80AA5480u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5480u)) return;
    // 80AA5480: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_80AA5484:
    ctx->pc = 0x80AA5484u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5484u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA5484: stw     r0, 24(r1)
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
label_80AA5488:
    ctx->pc = 0x80AA5488u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5488u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AA5488: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AA5488u)) return;
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
label_80AA548C:
    ctx->pc = 0x80AA548Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA548Cu)) return;
    // 80AA548C: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80AA548Cu)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_80AA5490:
    ctx->pc = 0x80AA5490u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5490u)) return;
    // 80AA5490: fcmpo   cr0, f30, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA5490u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[30], ctx->fpr[0], true);

label_80AA5494:
    ctx->pc = 0x80AA5494u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5494u)) return;
    // 80AA5494: bc    4, 1, 0x80AA54A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AA54A4;
        }
    }

label_80AA5498:
    ctx->pc = 0x80AA5498u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5498u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AA5498: lis     r3, -27646
    ctx->gpr[3] = ((u32)(s32)(-27646) << 16);

label_80AA549C:
    ctx->pc = 0x80AA549Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA549Cu)) return;
    // 80AA549C: addi    r3, r3, 30608
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(30608);

label_80AA54A0:
    ctx->pc = 0x80AA54A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA54A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80AA54A0: lfs     f30, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AA54A0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
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
label_80AA54A4:
    ctx->pc = 0x80AA54A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA54A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80AA54A4: lis     r3, -27646
    ctx->gpr[3] = ((u32)(s32)(-27646) << 16);

label_80AA54A8:
    ctx->pc = 0x80AA54A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA54A8u)) return;
    // 80AA54A8: addi    r3, r3, 30664
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(30664);

label_80AA54AC:
    ctx->pc = 0x80AA54ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA54ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AA54AC: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AA54ACu)) return;
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
label_80AA54B0:
    ctx->pc = 0x80AA54B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA54B0u)) return;
    // 80AA54B0: fadds   f29, f29, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA54B0u)) return;
    ppc_fadds(ctx, 29, 29, 0);

label_80AA54B4:
    ctx->pc = 0x80AA54B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA54B4u)) return;
    // 80AA54B4: fmr    f1, f29
    if (!ppc_fp_available_inline(ctx, 0x80AA54B4u)) return;
    ctx->fpr[1] = ctx->fpr[29];

label_80AA54B8:
    ctx->pc = 0x80AA54B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA54B8u)) return;
    // 80AA54B8: bl      0x80AA6810
    {
            ctx->lr = 0x80AA54BCu;
            goto label_80AA6810;
    }

label_80AA54BC:
    ctx->pc = 0x80AA54BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA54BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AA54BC: fctiwz    f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80AA54BCu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80AA54C0:
    ctx->pc = 0x80AA54C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA54C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AA54C0: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AA54C0u)) return;
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
label_80AA54C4:
    ctx->pc = 0x80AA54C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA54C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA54C4: lwz     r0, 36(r1)
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
label_80AA54C8:
    ctx->pc = 0x80AA54C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA54C8u)) return;
    // 80AA54C8: cmplwi  r0, 0x0033
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0033u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80AA54CC:
    ctx->pc = 0x80AA54CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA54CCu)) return;
    // 80AA54CC: bc    4, 1, 0x80AA54DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AA54DC;
        }
    }

label_80AA54D0:
    ctx->pc = 0x80AA54D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA54D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AA54D0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80AA54D4:
    ctx->pc = 0x80AA54D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA54D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA54D4: stb     r0, 0(r31)
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
label_80AA54D8:
    ctx->pc = 0x80AA54D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA54D8u)) return;
    // 80AA54D8: b       0x80AA5684
    {
            goto label_80AA5684;
    }

label_80AA54DC:
    ctx->pc = 0x80AA54DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA54DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80AA54DC: rlwinm r4, r0, 3, 0, 28
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 3u) & 0xFFFFFFF8u;
    }

label_80AA54E0:
    ctx->pc = 0x80AA54E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA54E0u)) return;
    // 80AA54E0: lis     r3, -27646
    ctx->gpr[3] = ((u32)(s32)(-27646) << 16);

label_80AA54E4:
    ctx->pc = 0x80AA54E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA54E4u)) return;
    // 80AA54E4: addi    r0, r3, 31672
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(31672);

label_80AA54E8:
    ctx->pc = 0x80AA54E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA54E8u)) return;
    // 80AA54E8: add   r3, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80AA54EC:
    ctx->pc = 0x80AA54ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA54ECu)) return;
    // 80AA54EC: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_80AA54F0:
    ctx->pc = 0x80AA54F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA54F0u)) return;
    // 80AA54F0: fsubs   f1, f29, f1
    if (!ppc_fp_available_inline(ctx, 0x80AA54F0u)) return;
    ppc_fsubs(ctx, 1, 29, 1);

label_80AA54F4:
    ctx->pc = 0x80AA54F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA54F4u)) return;
    // 80AA54F4: bl      0x80AA5000
    {
            ctx->lr = 0x80AA54F8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80AA5000u;
                return;
            }
            goto label_80AA5000;
    }

label_80AA54F8:
    ctx->pc = 0x80AA54F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA54F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AA54F8: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80AA54FC:
    ctx->pc = 0x80AA54FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA54FCu)) return;
    // 80AA54FC: addi    r4, r31, 32
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(32);

label_80AA5500:
    ctx->pc = 0x80AA5500u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5500u)) return;
    // 80AA5500: bl      0x80AA51F4
    {
            ctx->lr = 0x80AA5504u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80AA51F4u;
                return;
            }
            goto label_80AA51F4;
    }

label_80AA5504:
    ctx->pc = 0x80AA5504u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5504u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA5504: lfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AA5504u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
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
label_80AA5508:
    ctx->pc = 0x80AA5508u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5508u)) return;
    // 80AA5508: fsubs   f1, f0, f27
    if (!ppc_fp_available_inline(ctx, 0x80AA5508u)) return;
    ppc_fsubs(ctx, 1, 0, 27);

label_80AA550C:
    ctx->pc = 0x80AA550Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA550Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA550C: lfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AA550Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
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
label_80AA5510:
    ctx->pc = 0x80AA5510u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5510u)) return;
    // 80AA5510: fsubs   f2, f0, f28
    if (!ppc_fp_available_inline(ctx, 0x80AA5510u)) return;
    ppc_fsubs(ctx, 2, 0, 28);

label_80AA5514:
    ctx->pc = 0x80AA5514u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5514u)) return;
    // 80AA5514: bl      0x80401910
    {
            ctx->lr = 0x80AA5518u;
            ctx->pc = 0x80401910u;
            return;
    }

label_80AA5518:
    ctx->pc = 0x80AA5518u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5518u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 80AA5518: neg  r0, r3
    {
        u32 a = ctx->gpr[3];
        ctx->gpr[0] = (~a) + 1u;
    }

label_80AA551C:
    ctx->pc = 0x80AA551Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA551Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA551C: lfs     f3, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AA551Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
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
label_80AA5520:
    ctx->pc = 0x80AA5520u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5520u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AA5520: lfs     f4, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AA5520u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
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
label_80AA5524:
    ctx->pc = 0x80AA5524u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5524u)) return;
    // 80AA5524: lis     r3, -27646
    ctx->gpr[3] = ((u32)(s32)(-27646) << 16);

label_80AA5528:
    ctx->pc = 0x80AA5528u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5528u)) return;
    // 80AA5528: addi    r3, r3, 30668
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(30668);

label_80AA552C:
    ctx->pc = 0x80AA552Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA552Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA552C: lfs     f2, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AA552Cu)) return;
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
label_80AA5530:
    ctx->pc = 0x80AA5530u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5530u)) return;
    // 80AA5530: fcmpo   cr0, f29, f2
    if (!ppc_fp_available_inline(ctx, 0x80AA5530u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[29], ctx->fpr[2], true);

label_80AA5534:
    ctx->pc = 0x80AA5534u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5534u)) return;
    // 80AA5534: bc    4, 1, 0x80AA5570
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AA5570;
        }
    }

label_80AA5538:
    ctx->pc = 0x80AA5538u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5538u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AA5538: lis     r3, -27646
    ctx->gpr[3] = ((u32)(s32)(-27646) << 16);

label_80AA553C:
    ctx->pc = 0x80AA553Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA553Cu)) return;
    // 80AA553C: addi    r3, r3, 30672
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(30672);

label_80AA5540:
    ctx->pc = 0x80AA5540u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5540u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA5540: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AA5540u)) return;
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
label_80AA5544:
    ctx->pc = 0x80AA5544u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5544u)) return;
    // 80AA5544: fcmpo   cr0, f29, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA5544u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[29], ctx->fpr[0], true);

label_80AA5548:
    ctx->pc = 0x80AA5548u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5548u)) return;
    // 80AA5548: bc    4, 0, 0x80AA5570
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AA5570;
        }
    }

label_80AA554C:
    ctx->pc = 0x80AA554Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA554Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80AA554C: lis     r3, -27646
    ctx->gpr[3] = ((u32)(s32)(-27646) << 16);

label_80AA5550:
    ctx->pc = 0x80AA5550u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5550u)) return;
    // 80AA5550: addi    r3, r3, 30676
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(30676);

label_80AA5554:
    ctx->pc = 0x80AA5554u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5554u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA5554: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AA5554u)) return;
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
label_80AA5558:
    ctx->pc = 0x80AA5558u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5558u)) return;
    // 80AA5558: fsubs   f0, f29, f2
    if (!ppc_fp_available_inline(ctx, 0x80AA5558u)) return;
    ppc_fsubs(ctx, 0, 29, 2);

label_80AA555C:
    ctx->pc = 0x80AA555Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA555Cu)) return;
    // 80AA555C: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA555Cu)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80AA5560:
    ctx->pc = 0x80AA5560u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5560u)) return;
    // 80AA5560: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA5560u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80AA5564:
    ctx->pc = 0x80AA5564u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5564u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA5564: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AA5564u)) return;
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
label_80AA5568:
    ctx->pc = 0x80AA5568u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5568u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA5568: lwz     r3, 36(r1)
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
label_80AA556C:
    ctx->pc = 0x80AA556Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA556Cu)) return;
    // 80AA556C: b       0x80AA55C0
    {
            goto label_80AA55C0;
    }

label_80AA5570:
    ctx->pc = 0x80AA5570u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5570u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AA5570: lis     r3, -27646
    ctx->gpr[3] = ((u32)(s32)(-27646) << 16);

label_80AA5574:
    ctx->pc = 0x80AA5574u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5574u)) return;
    // 80AA5574: addi    r3, r3, 30680
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(30680);

label_80AA5578:
    ctx->pc = 0x80AA5578u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5578u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA5578: lfs     f2, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AA5578u)) return;
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
label_80AA557C:
    ctx->pc = 0x80AA557Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA557Cu)) return;
    // 80AA557C: fcmpo   cr0, f29, f2
    if (!ppc_fp_available_inline(ctx, 0x80AA557Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[29], ctx->fpr[2], true);

label_80AA5580:
    ctx->pc = 0x80AA5580u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5580u)) return;
    // 80AA5580: bc    4, 1, 0x80AA55BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AA55BC;
        }
    }

label_80AA5584:
    ctx->pc = 0x80AA5584u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5584u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AA5584: lis     r3, -27646
    ctx->gpr[3] = ((u32)(s32)(-27646) << 16);

label_80AA5588:
    ctx->pc = 0x80AA5588u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5588u)) return;
    // 80AA5588: addi    r3, r3, 30684
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(30684);

label_80AA558C:
    ctx->pc = 0x80AA558Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA558Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA558C: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AA558Cu)) return;
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
label_80AA5590:
    ctx->pc = 0x80AA5590u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5590u)) return;
    // 80AA5590: fcmpo   cr0, f29, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA5590u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[29], ctx->fpr[0], true);

label_80AA5594:
    ctx->pc = 0x80AA5594u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5594u)) return;
    // 80AA5594: bc    4, 0, 0x80AA55BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AA55BC;
        }
    }

label_80AA5598:
    ctx->pc = 0x80AA5598u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5598u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80AA5598: lis     r3, -27646
    ctx->gpr[3] = ((u32)(s32)(-27646) << 16);

label_80AA559C:
    ctx->pc = 0x80AA559Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA559Cu)) return;
    // 80AA559C: addi    r3, r3, 30688
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(30688);

label_80AA55A0:
    ctx->pc = 0x80AA55A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA55A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA55A0: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AA55A0u)) return;
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
label_80AA55A4:
    ctx->pc = 0x80AA55A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA55A4u)) return;
    // 80AA55A4: fsubs   f0, f29, f2
    if (!ppc_fp_available_inline(ctx, 0x80AA55A4u)) return;
    ppc_fsubs(ctx, 0, 29, 2);

label_80AA55A8:
    ctx->pc = 0x80AA55A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA55A8u)) return;
    // 80AA55A8: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA55A8u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80AA55AC:
    ctx->pc = 0x80AA55ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA55ACu)) return;
    // 80AA55AC: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA55ACu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80AA55B0:
    ctx->pc = 0x80AA55B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA55B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA55B0: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AA55B0u)) return;
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
label_80AA55B4:
    ctx->pc = 0x80AA55B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA55B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA55B4: lwz     r3, 36(r1)
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
label_80AA55B8:
    ctx->pc = 0x80AA55B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA55B8u)) return;
    // 80AA55B8: b       0x80AA55C0
    {
            goto label_80AA55C0;
    }

label_80AA55BC:
    ctx->pc = 0x80AA55BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA55BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA55BC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA55C0:
    ctx->pc = 0x80AA55C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA55C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80AA55C0: stw     r0, 20(r31)
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
label_80AA55C4:
    ctx->pc = 0x80AA55C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA55C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA55C4: stw     r3, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA55C8:
    ctx->pc = 0x80AA55C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA55C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA55C8: stfs     f3, 44(r31)
    if (!ppc_fp_available_inline(ctx, 0x80AA55C8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA55CC:
    ctx->pc = 0x80AA55CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA55CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AA55CC: stfs     f4, 48(r31)
    if (!ppc_fp_available_inline(ctx, 0x80AA55CCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA55D0:
    ctx->pc = 0x80AA55D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA55D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA55D0: stfs     f30, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x80AA55D0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[30]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA55D4:
    ctx->pc = 0x80AA55D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA55D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AA55D4: stfs     f31, 16(r31)
    if (!ppc_fp_available_inline(ctx, 0x80AA55D4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA55D8:
    ctx->pc = 0x80AA55D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA55D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA55D8: stfs     f29, 12(r31)
    if (!ppc_fp_available_inline(ctx, 0x80AA55D8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[29]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA55DC:
    ctx->pc = 0x80AA55DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA55DCu)) return;
    // 80AA55DC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80AA55E0:
    ctx->pc = 0x80AA55E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA55E0u)) return;
    // 80AA55E0: bl      0x80AA5274
    {
            ctx->lr = 0x80AA55E4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80AA5274u;
                return;
            }
            goto label_80AA5274;
    }

label_80AA55E4:
    ctx->pc = 0x80AA55E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA55E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AA55E4: lhz     r3, 6(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(6);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA55E8:
    ctx->pc = 0x80AA55E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA55E8u)) return;
    // 80AA55E8: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_80AA55EC:
    ctx->pc = 0x80AA55ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA55ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AA55EC: sth     r0, 6(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA55F0:
    ctx->pc = 0x80AA55F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA55F0u)) return;
    // 80AA55F0: rlwinm r0, r0, 0, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_80AA55F4:
    ctx->pc = 0x80AA55F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA55F4u)) return;
    // 80AA55F4: cmplwi  r0, 0x0001
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0001u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80AA55F8:
    ctx->pc = 0x80AA55F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA55F8u)) return;
    // 80AA55F8: bc    4, 2, 0x80AA5684
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AA5684;
        }
    }

label_80AA55FC:
    ctx->pc = 0x80AA55FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA55FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80AA55FC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80AA5600:
    ctx->pc = 0x80AA5600u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5600u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AA5600: sth     r0, 6(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA5604:
    ctx->pc = 0x80AA5604u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5604u)) return;
    // 80AA5604: lis     r3, -27646
    ctx->gpr[3] = ((u32)(s32)(-27646) << 16);

label_80AA5608:
    ctx->pc = 0x80AA5608u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5608u)) return;
    // 80AA5608: addi    r3, r3, 30692
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(30692);

label_80AA560C:
    ctx->pc = 0x80AA560Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA560Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA560C: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AA560Cu)) return;
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
label_80AA5610:
    ctx->pc = 0x80AA5610u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5610u)) return;
    // 80AA5610: fcmpo   cr0, f29, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA5610u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[29], ctx->fpr[0], true);

label_80AA5614:
    ctx->pc = 0x80AA5614u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5614u)) return;
    // 80AA5614: bc    4, 1, 0x80AA5648
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AA5648;
        }
    }

label_80AA5618:
    ctx->pc = 0x80AA5618u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5618u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AA5618: lis     r3, -27646
    ctx->gpr[3] = ((u32)(s32)(-27646) << 16);

label_80AA561C:
    ctx->pc = 0x80AA561Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA561Cu)) return;
    // 80AA561C: addi    r3, r3, 30696
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(30696);

label_80AA5620:
    ctx->pc = 0x80AA5620u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5620u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA5620: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AA5620u)) return;
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
label_80AA5624:
    ctx->pc = 0x80AA5624u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5624u)) return;
    // 80AA5624: fcmpo   cr0, f29, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA5624u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[29], ctx->fpr[0], true);

label_80AA5628:
    ctx->pc = 0x80AA5628u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5628u)) return;
    // 80AA5628: bc    4, 0, 0x80AA5648
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AA5648;
        }
    }

label_80AA562C:
    ctx->pc = 0x80AA562Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA562Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80AA562C: lis     r3, -27646
    ctx->gpr[3] = ((u32)(s32)(-27646) << 16);

label_80AA5630:
    ctx->pc = 0x80AA5630u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5630u)) return;
    // 80AA5630: addi    r3, r3, 30700
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(30700);

label_80AA5634:
    ctx->pc = 0x80AA5634u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5634u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA5634: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AA5634u)) return;
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
label_80AA5638:
    ctx->pc = 0x80AA5638u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5638u)) return;
    // 80AA5638: lis     r3, -27646
    ctx->gpr[3] = ((u32)(s32)(-27646) << 16);

label_80AA563C:
    ctx->pc = 0x80AA563Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA563Cu)) return;
    // 80AA563C: addi    r3, r3, 32104
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(32104);

label_80AA5640:
    ctx->pc = 0x80AA5640u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5640u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA5640: stfs     f0, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AA5640u)) return;
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
label_80AA5644:
    ctx->pc = 0x80AA5644u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5644u)) return;
    // 80AA5644: b       0x80AA5660
    {
            goto label_80AA5660;
    }

label_80AA5648:
    ctx->pc = 0x80AA5648u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5648u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80AA5648: lis     r3, -27646
    ctx->gpr[3] = ((u32)(s32)(-27646) << 16);

label_80AA564C:
    ctx->pc = 0x80AA564Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA564Cu)) return;
    // 80AA564C: addi    r3, r3, 30704
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(30704);

label_80AA5650:
    ctx->pc = 0x80AA5650u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5650u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AA5650: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AA5650u)) return;
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
label_80AA5654:
    ctx->pc = 0x80AA5654u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5654u)) return;
    // 80AA5654: lis     r3, -27646
    ctx->gpr[3] = ((u32)(s32)(-27646) << 16);

label_80AA5658:
    ctx->pc = 0x80AA5658u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5658u)) return;
    // 80AA5658: addi    r3, r3, 32104
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(32104);

label_80AA565C:
    ctx->pc = 0x80AA565Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA565Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80AA565C: stfs     f0, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AA565Cu)) return;
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
label_80AA5660:
    ctx->pc = 0x80AA5660u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5660u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80AA5660: lis     r3, -27646
    ctx->gpr[3] = ((u32)(s32)(-27646) << 16);

label_80AA5664:
    ctx->pc = 0x80AA5664u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5664u)) return;
    // 80AA5664: addi    r3, r3, 32104
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(32104);

label_80AA5668:
    ctx->pc = 0x80AA5668u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5668u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA5668: lwz     r4, 32(r31)
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
label_80AA566C:
    ctx->pc = 0x80AA566Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA566Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AA566C: lwz     r0, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA5670:
    ctx->pc = 0x80AA5670u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5670u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA5670: stw     r4, 20(r3)
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
label_80AA5674:
    ctx->pc = 0x80AA5674u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5674u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AA5674: stw     r0, 24(r3)
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
label_80AA5678:
    ctx->pc = 0x80AA5678u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5678u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA5678: lwz     r0, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA567C:
    ctx->pc = 0x80AA567Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA567Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA567C: stw     r0, 28(r3)
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
label_80AA5680:
    ctx->pc = 0x80AA5680u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5680u)) return;
    // 80AA5680: bl      0x8044DE60
    {
            ctx->lr = 0x80AA5684u;
            ctx->pc = 0x8044DE60u;
            return;
    }

label_80AA5684:
    ctx->pc = 0x80AA5684u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 17u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5684u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 17u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80AA5684: psq_l   f31, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80AA5684u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80AA5684u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA5688:
    ctx->pc = 0x80AA5688u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5688u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80AA5688: lfd     f31, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AA5688u)) return;
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
label_80AA568C:
    ctx->pc = 0x80AA568Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA568Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80AA568C: psq_l   f30, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80AA568Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x80AA568Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA5690:
    ctx->pc = 0x80AA5690u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5690u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80AA5690: lfd     f30, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AA5690u)) return;
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
label_80AA5694:
    ctx->pc = 0x80AA5694u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5694u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80AA5694: psq_l   f29, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80AA5694u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x80AA5694u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA5698:
    ctx->pc = 0x80AA5698u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5698u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80AA5698: lfd     f29, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AA5698u)) return;
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
label_80AA569C:
    ctx->pc = 0x80AA569Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA569Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80AA569C: psq_l   f28, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80AA569Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x80AA569Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA56A0:
    ctx->pc = 0x80AA56A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA56A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80AA56A0: lfd     f28, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AA56A0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->fpr[28] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA56A4:
    ctx->pc = 0x80AA56A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA56A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80AA56A4: psq_l   f27, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80AA56A4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 27u, ea, false, 0u, false, 0x80AA56A4u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA56A8:
    ctx->pc = 0x80AA56A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA56A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA56A8: lfd     f27, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AA56A8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[27] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA56AC:
    ctx->pc = 0x80AA56ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA56ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA56AC: lwz     r31, 44(r1)
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
label_80AA56B0:
    ctx->pc = 0x80AA56B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA56B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AA56B0: lwz     r30, 40(r1)
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
label_80AA56B4:
    ctx->pc = 0x80AA56B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA56B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA56B4: lwz     r0, 132(r1)
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
label_80AA56B8:
    ctx->pc = 0x80AA56B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80AA56B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA56B8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA56BC:
    ctx->pc = 0x80AA56BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA56BCu)) return;
    // 80AA56BC: addi    r1, r1, 128
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(128);

label_80AA56C0:
    ctx->pc = 0x80AA56C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA56C0u)) return;
    // 80AA56C0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AA5000;
        }
    }

label_80AA56C4:
    ctx->pc = 0x80AA56C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 25u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA56C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 25u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80AA56C4: lwz     r6, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA56C8:
    ctx->pc = 0x80AA56C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA56C8u)) return;
    // 80AA56C8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80AA56CC:
    ctx->pc = 0x80AA56CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA56CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80AA56CC: sth     r5, 6(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA56D0:
    ctx->pc = 0x80AA56D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA56D0u)) return;
    // 80AA56D0: lis     r4, -27646
    ctx->gpr[4] = ((u32)(s32)(-27646) << 16);

label_80AA56D4:
    ctx->pc = 0x80AA56D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA56D4u)) return;
    // 80AA56D4: addi    r4, r4, 30608
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(30608);

label_80AA56D8:
    ctx->pc = 0x80AA56D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA56D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80AA56D8: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AA56D8u)) return;
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
label_80AA56DC:
    ctx->pc = 0x80AA56DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA56DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80AA56DC: stfs     f0, 16(r6)
    if (!ppc_fp_available_inline(ctx, 0x80AA56DCu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA56E0:
    ctx->pc = 0x80AA56E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA56E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80AA56E0: stfs     f0, 12(r6)
    if (!ppc_fp_available_inline(ctx, 0x80AA56E0u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA56E4:
    ctx->pc = 0x80AA56E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA56E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80AA56E4: stfs     f0, 8(r6)
    if (!ppc_fp_available_inline(ctx, 0x80AA56E4u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA56E8:
    ctx->pc = 0x80AA56E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA56E8u)) return;
    // 80AA56E8: lis     r4, 1
    ctx->gpr[4] = ((u32)(s32)(1) << 16);

label_80AA56EC:
    ctx->pc = 0x80AA56ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA56ECu)) return;
    // 80AA56EC: addi    r0, r4, -17118
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-17118);

label_80AA56F0:
    ctx->pc = 0x80AA56F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA56F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80AA56F0: stw     r0, 24(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA56F4:
    ctx->pc = 0x80AA56F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA56F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80AA56F4: stfs     f0, 44(r6)
    if (!ppc_fp_available_inline(ctx, 0x80AA56F4u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA56F8:
    ctx->pc = 0x80AA56F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA56F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80AA56F8: stfs     f0, 48(r6)
    if (!ppc_fp_available_inline(ctx, 0x80AA56F8u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA56FC:
    ctx->pc = 0x80AA56FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA56FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80AA56FC: stb     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA5700:
    ctx->pc = 0x80AA5700u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5700u)) return;
    // 80AA5700: lis     r4, -32598
    ctx->gpr[4] = ((u32)(s32)(-32598) << 16);

label_80AA5704:
    ctx->pc = 0x80AA5704u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5704u)) return;
    // 80AA5704: addi    r0, r4, 21388
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(21388);

label_80AA5708:
    ctx->pc = 0x80AA5708u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5708u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA5708: stw     r0, 16(r3)
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
label_80AA570C:
    ctx->pc = 0x80AA570Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA570Cu)) return;
    // 80AA570C: lis     r4, -32598
    ctx->gpr[4] = ((u32)(s32)(-32598) << 16);

label_80AA5710:
    ctx->pc = 0x80AA5710u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5710u)) return;
    // 80AA5710: addi    r0, r4, 21108
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(21108);

label_80AA5714:
    ctx->pc = 0x80AA5714u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5714u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA5714: stw     r0, 20(r3)
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
label_80AA5718:
    ctx->pc = 0x80AA5718u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5718u)) return;
    // 80AA5718: lis     r4, -32598
    ctx->gpr[4] = ((u32)(s32)(-32598) << 16);

label_80AA571C:
    ctx->pc = 0x80AA571Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA571Cu)) return;
    // 80AA571C: addi    r0, r4, 21104
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(21104);

label_80AA5720:
    ctx->pc = 0x80AA5720u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5720u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA5720: stw     r0, 24(r3)
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
label_80AA5724:
    ctx->pc = 0x80AA5724u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5724u)) return;
    // 80AA5724: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AA5000;
        }
    }

label_80AA5728:
    ctx->pc = 0x80AA5728u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5728u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA5728: stwu     r1, -16(r1)
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
label_80AA572C:
    ctx->pc = 0x80AA572Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA572Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA572C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA5730:
    ctx->pc = 0x80AA5730u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5730u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AA5730: stw     r0, 20(r1)
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
label_80AA5734:
    ctx->pc = 0x80AA5734u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5734u)) return;
    // 80AA5734: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80AA5738:
    ctx->pc = 0x80AA5738u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5738u)) return;
    // 80AA5738: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80AA573C:
    ctx->pc = 0x80AA573Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA573Cu)) return;
    // 80AA573C: lis     r5, -32598
    ctx->gpr[5] = ((u32)(s32)(-32598) << 16);

label_80AA5740:
    ctx->pc = 0x80AA5740u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5740u)) return;
    // 80AA5740: addi    r5, r5, 22212
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(22212);

label_80AA5744:
    ctx->pc = 0x80AA5744u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5744u)) return;
    // 80AA5744: bl      0x8050FD60
    {
            ctx->lr = 0x80AA5748u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80AA5748:
    ctx->pc = 0x80AA5748u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5748u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 80AA5748: lis     r4, -27644
    ctx->gpr[4] = ((u32)(s32)(-27644) << 16);

label_80AA574C:
    ctx->pc = 0x80AA574Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA574Cu)) return;
    // 80AA574C: addi    r4, r4, -18460
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-18460);

label_80AA5750:
    ctx->pc = 0x80AA5750u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5750u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AA5750: stw     r3, 0(r4)
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
label_80AA5754:
    ctx->pc = 0x80AA5754u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5754u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA5754: lwz     r0, 20(r1)
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
label_80AA5758:
    ctx->pc = 0x80AA5758u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80AA5758u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA5758: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA575C:
    ctx->pc = 0x80AA575Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA575Cu)) return;
    // 80AA575C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80AA5760:
    ctx->pc = 0x80AA5760u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5760u)) return;
    // 80AA5760: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AA5000;
        }
    }

label_80AA5764:
    ctx->pc = 0x80AA5764u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5764u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80AA5764: stwu     r1, -16(r1)
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
label_80AA5768:
    ctx->pc = 0x80AA5768u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5768u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA5768: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA576C:
    ctx->pc = 0x80AA576Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA576Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA576C: stw     r0, 20(r1)
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
label_80AA5770:
    ctx->pc = 0x80AA5770u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5770u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AA5770: stw     r31, 12(r1)
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
label_80AA5774:
    ctx->pc = 0x80AA5774u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5774u)) return;
    // 80AA5774: lis     r3, -27644
    ctx->gpr[3] = ((u32)(s32)(-27644) << 16);

label_80AA5778:
    ctx->pc = 0x80AA5778u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5778u)) return;
    // 80AA5778: addi    r3, r3, -18460
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-18460);

label_80AA577C:
    ctx->pc = 0x80AA577Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA577Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA577C: lwz     r3, 0(r3)
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
label_80AA5780:
    ctx->pc = 0x80AA5780u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5780u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA5780: lwz     r31, 32(r3)
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
label_80AA5784:
    ctx->pc = 0x80AA5784u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5784u)) return;
    // 80AA5784: b       0x80AA5790
    {
            goto label_80AA5790;
    }

label_80AA5788:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5788u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA5788: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AA578C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA578Cu)) return;
    // 80AA578C: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA5790u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA5790:
    ctx->pc = 0x80AA5790u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5790u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AA5790: lbz     r0, 0(r31)
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
label_80AA5794:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5794u)) return;
    // 80AA5794: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80AA5798:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5798u)) return;
    // 80AA5798: cmpwi   r0, 1
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

label_80AA579C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA579Cu)) return;
    // 80AA579C: bc    4, 2, 0x80AA5788
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80AA5788u;
                return;
            }
            goto label_80AA5788;
        }
    }

label_80AA57A0:
    ctx->pc = 0x80AA57A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA57A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AA57A0: lwz     r31, 12(r1)
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
label_80AA57A4:
    ctx->pc = 0x80AA57A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA57A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA57A4: lwz     r0, 20(r1)
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
label_80AA57A8:
    ctx->pc = 0x80AA57A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80AA57A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA57A8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA57AC:
    ctx->pc = 0x80AA57ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA57ACu)) return;
    // 80AA57AC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80AA57B0:
    ctx->pc = 0x80AA57B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA57B0u)) return;
    // 80AA57B0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AA5000;
        }
    }

label_80AA57B4:
    ctx->pc = 0x80AA57B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA57B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA57B4: stwu     r1, -16(r1)
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
label_80AA57B8:
    ctx->pc = 0x80AA57B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA57B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA57B8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA57BC:
    ctx->pc = 0x80AA57BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA57BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AA57BC: stw     r0, 20(r1)
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
label_80AA57C0:
    ctx->pc = 0x80AA57C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA57C0u)) return;
    // 80AA57C0: lis     r3, -27644
    ctx->gpr[3] = ((u32)(s32)(-27644) << 16);

label_80AA57C4:
    ctx->pc = 0x80AA57C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA57C4u)) return;
    // 80AA57C4: addi    r3, r3, -18460
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-18460);

label_80AA57C8:
    ctx->pc = 0x80AA57C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA57C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA57C8: lwz     r3, 0(r3)
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
label_80AA57CC:
    ctx->pc = 0x80AA57CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA57CCu)) return;
    // 80AA57CC: cmplwi  r3, 0x0000
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

label_80AA57D0:
    ctx->pc = 0x80AA57D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA57D0u)) return;
    // 80AA57D0: bc    12, 2, 0x80AA57E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80AA57E8;
        }
    }

label_80AA57D4:
    ctx->pc = 0x80AA57D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA57D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA57D4: bl      0x8050F9E0
    {
            ctx->lr = 0x80AA57D8u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80AA57D8:
    ctx->pc = 0x80AA57D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA57D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80AA57D8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80AA57DC:
    ctx->pc = 0x80AA57DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA57DCu)) return;
    // 80AA57DC: lis     r3, -27644
    ctx->gpr[3] = ((u32)(s32)(-27644) << 16);

label_80AA57E0:
    ctx->pc = 0x80AA57E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA57E0u)) return;
    // 80AA57E0: addi    r3, r3, -18460
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-18460);

label_80AA57E4:
    ctx->pc = 0x80AA57E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA57E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80AA57E4: stw     r0, 0(r3)
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
label_80AA57E8:
    ctx->pc = 0x80AA57E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA57E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA57E8: lwz     r0, 20(r1)
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
label_80AA57EC:
    ctx->pc = 0x80AA57ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80AA57ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA57EC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA57F0:
    ctx->pc = 0x80AA57F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA57F0u)) return;
    // 80AA57F0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80AA57F4:
    ctx->pc = 0x80AA57F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA57F4u)) return;
    // 80AA57F4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AA5000;
        }
    }

label_80AA57F8:
    ctx->pc = 0x80AA57F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA57F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA57F8: stwu     r1, -16(r1)
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
label_80AA57FC:
    ctx->pc = 0x80AA57FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA57FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AA57FC: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA5800:
    ctx->pc = 0x80AA5800u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5800u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA5800: stw     r0, 20(r1)
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
label_80AA5804:
    ctx->pc = 0x80AA5804u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5804u)) return;
    // 80AA5804: cmpwi   r3, 2
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

label_80AA5808:
    ctx->pc = 0x80AA5808u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5808u)) return;
    // 80AA5808: bc    12, 2, 0x80AA66EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80AA66EC;
        }
    }

label_80AA580C:
    ctx->pc = 0x80AA580Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA580Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA580C: bc    4, 0, 0x80AA5820
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AA5820;
        }
    }

label_80AA5810:
    ctx->pc = 0x80AA5810u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5810u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA5810: cmpwi   r3, 0
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

label_80AA5814:
    ctx->pc = 0x80AA5814u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5814u)) return;
    // 80AA5814: bc    12, 2, 0x80AA6778
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80AA6778;
        }
    }

label_80AA5818:
    ctx->pc = 0x80AA5818u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5818u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA5818: bc    4, 0, 0x80AA5828
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AA5828;
        }
    }

label_80AA581C:
    ctx->pc = 0x80AA581Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA581Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA581C: b       0x80AA6778
    {
            goto label_80AA6778;
    }

label_80AA5820:
    ctx->pc = 0x80AA5820u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5820u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA5820: cmpwi   r3, 4
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

label_80AA5824:
    ctx->pc = 0x80AA5824u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5824u)) return;
    // 80AA5824: b       0x80AA6778
    {
            goto label_80AA6778;
    }

label_80AA5828:
    ctx->pc = 0x80AA5828u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5828u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA5828: bl      0x8045DE7C
    {
            ctx->lr = 0x80AA582Cu;
            ctx->pc = 0x8045DE7Cu;
            return;
    }

label_80AA582C:
    ctx->pc = 0x80AA582Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA582Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA582C: bl      0x80460A60
    {
            ctx->lr = 0x80AA5830u;
            ctx->pc = 0x80460A60u;
            return;
    }

label_80AA5830:
    ctx->pc = 0x80AA5830u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5830u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA5830: bl      0x80460A24
    {
            ctx->lr = 0x80AA5834u;
            ctx->pc = 0x80460A24u;
            return;
    }

label_80AA5834:
    ctx->pc = 0x80AA5834u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5834u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA5834: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA5838:
    ctx->pc = 0x80AA5838u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5838u)) return;
    // 80AA5838: bl      0x8045EC10
    {
            ctx->lr = 0x80AA583Cu;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80AA583C:
    ctx->pc = 0x80AA583Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA583Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AA583C: lis     r3, -27646
    ctx->gpr[3] = ((u32)(s32)(-27646) << 16);

label_80AA5840:
    ctx->pc = 0x80AA5840u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5840u)) return;
    // 80AA5840: addi    r3, r3, 32196
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(32196);

label_80AA5844:
    ctx->pc = 0x80AA5844u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5844u)) return;
    // 80AA5844: bl      0x8050AF58
    {
            ctx->lr = 0x80AA5848u;
            ctx->pc = 0x8050AF58u;
            return;
    }

label_80AA5848:
    ctx->pc = 0x80AA5848u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5848u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA5848: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80AA584C:
    ctx->pc = 0x80AA584Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA584Cu)) return;
    // 80AA584C: bl      0x80AA6E20
    {
            ctx->lr = 0x80AA5850u;
            goto label_80AA6E20;
    }

label_80AA5850:
    ctx->pc = 0x80AA5850u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5850u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA5850: li      r3, 76
    ctx->gpr[3] = (u32)(s32)(76);

label_80AA5854:
    ctx->pc = 0x80AA5854u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5854u)) return;
    // 80AA5854: bl      0x80406090
    {
            ctx->lr = 0x80AA5858u;
            ctx->pc = 0x80406090u;
            return;
    }

label_80AA5858:
    ctx->pc = 0x80AA5858u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5858u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80AA5858: lis     r3, -27646
    ctx->gpr[3] = ((u32)(s32)(-27646) << 16);

label_80AA585C:
    ctx->pc = 0x80AA585Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA585Cu)) return;
    // 80AA585C: addi    r3, r3, 30596
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(30596);

label_80AA5860:
    ctx->pc = 0x80AA5860u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5860u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80AA5860: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AA5860u)) return;
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
label_80AA5864:
    ctx->pc = 0x80AA5864u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5864u)) return;
    // 80AA5864: lis     r3, -27646
    ctx->gpr[3] = ((u32)(s32)(-27646) << 16);

label_80AA5868:
    ctx->pc = 0x80AA5868u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5868u)) return;
    // 80AA5868: addi    r3, r3, 30720
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(30720);

label_80AA586C:
    ctx->pc = 0x80AA586Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA586Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA586C: lfs     f2, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AA586Cu)) return;
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
label_80AA5870:
    ctx->pc = 0x80AA5870u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5870u)) return;
    // 80AA5870: lis     r3, -27646
    ctx->gpr[3] = ((u32)(s32)(-27646) << 16);

label_80AA5874:
    ctx->pc = 0x80AA5874u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5874u)) return;
    // 80AA5874: addi    r3, r3, 30608
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(30608);

label_80AA5878:
    ctx->pc = 0x80AA5878u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5878u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AA5878: lfs     f3, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AA5878u)) return;
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
label_80AA587C:
    ctx->pc = 0x80AA587Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA587Cu)) return;
    // 80AA587C: fmr    f4, f3
    if (!ppc_fp_available_inline(ctx, 0x80AA587Cu)) return;
    ctx->fpr[4] = ctx->fpr[3];

label_80AA5880:
    ctx->pc = 0x80AA5880u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5880u)) return;
    // 80AA5880: fmr    f5, f3
    if (!ppc_fp_available_inline(ctx, 0x80AA5880u)) return;
    ctx->fpr[5] = ctx->fpr[3];

label_80AA5884:
    ctx->pc = 0x80AA5884u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5884u)) return;
    // 80AA5884: bl      0x80AA6A38
    {
            ctx->lr = 0x80AA5888u;
            goto label_80AA6A38;
    }

label_80AA5888:
    ctx->pc = 0x80AA5888u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5888u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AA5888: lis     r4, -27644
    ctx->gpr[4] = ((u32)(s32)(-27644) << 16);

label_80AA588C:
    ctx->pc = 0x80AA588Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA588Cu)) return;
    // 80AA588C: addi    r4, r4, -18464
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-18464);

label_80AA5890:
    ctx->pc = 0x80AA5890u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5890u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA5890: stw     r3, 0(r4)
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
label_80AA5894:
    ctx->pc = 0x80AA5894u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5894u)) return;
    // 80AA5894: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA5898:
    ctx->pc = 0x80AA5898u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5898u)) return;
    // 80AA5898: bl      0x8045F220
    {
            ctx->lr = 0x80AA589Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA589C:
    ctx->pc = 0x80AA589Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA589Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA589C: bl      0x8045E760
    {
            ctx->lr = 0x80AA58A0u;
            ctx->pc = 0x8045E760u;
            return;
    }

label_80AA58A0:
    ctx->pc = 0x80AA58A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA58A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80AA58A0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AA58A4:
    ctx->pc = 0x80AA58A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA58A4u)) return;
    // 80AA58A4: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80AA58A8:
    ctx->pc = 0x80AA58A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA58A8u)) return;
    // 80AA58A8: li      r5, 17294
    ctx->gpr[5] = (u32)(s32)(17294);

label_80AA58AC:
    ctx->pc = 0x80AA58ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA58ACu)) return;
    // 80AA58AC: bl      0x8045C0F8
    {
            ctx->lr = 0x80AA58B0u;
            ctx->pc = 0x8045C0F8u;
            return;
    }

label_80AA58B0:
    ctx->pc = 0x80AA58B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA58B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA58B0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA58B4:
    ctx->pc = 0x80AA58B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA58B4u)) return;
    // 80AA58B4: bl      0x8045F220
    {
            ctx->lr = 0x80AA58B8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA58B8:
    ctx->pc = 0x80AA58B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA58B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80AA58B8: lis     r4, -27646
    ctx->gpr[4] = ((u32)(s32)(-27646) << 16);

label_80AA58BC:
    ctx->pc = 0x80AA58BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA58BCu)) return;
    // 80AA58BC: addi    r4, r4, 30724
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(30724);

label_80AA58C0:
    ctx->pc = 0x80AA58C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA58C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA58C0: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AA58C0u)) return;
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
label_80AA58C4:
    ctx->pc = 0x80AA58C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA58C4u)) return;
    // 80AA58C4: lis     r4, -27646
    ctx->gpr[4] = ((u32)(s32)(-27646) << 16);

label_80AA58C8:
    ctx->pc = 0x80AA58C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA58C8u)) return;
    // 80AA58C8: addi    r4, r4, 30728
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(30728);

label_80AA58CC:
    ctx->pc = 0x80AA58CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA58CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA58CC: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AA58CCu)) return;
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
label_80AA58D0:
    ctx->pc = 0x80AA58D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA58D0u)) return;
    // 80AA58D0: lis     r4, -27646
    ctx->gpr[4] = ((u32)(s32)(-27646) << 16);

label_80AA58D4:
    ctx->pc = 0x80AA58D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA58D4u)) return;
    // 80AA58D4: addi    r4, r4, 30732
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(30732);

label_80AA58D8:
    ctx->pc = 0x80AA58D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA58D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA58D8: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AA58D8u)) return;
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
label_80AA58DC:
    ctx->pc = 0x80AA58DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA58DCu)) return;
    // 80AA58DC: bl      0x8045EF2C
    {
            ctx->lr = 0x80AA58E0u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80AA58E0:
    ctx->pc = 0x80AA58E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA58E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA58E0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA58E4:
    ctx->pc = 0x80AA58E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA58E4u)) return;
    // 80AA58E4: bl      0x8045F220
    {
            ctx->lr = 0x80AA58E8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA58E8:
    ctx->pc = 0x80AA58E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA58E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80AA58E8: li      r4, 505
    ctx->gpr[4] = (u32)(s32)(505);

label_80AA58EC:
    ctx->pc = 0x80AA58ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA58ECu)) return;
    // 80AA58EC: li      r5, 414
    ctx->gpr[5] = (u32)(s32)(414);

label_80AA58F0:
    ctx->pc = 0x80AA58F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA58F0u)) return;
    // 80AA58F0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80AA58F4:
    ctx->pc = 0x80AA58F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA58F4u)) return;
    // 80AA58F4: bl      0x8045EEA8
    {
            ctx->lr = 0x80AA58F8u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80AA58F8:
    ctx->pc = 0x80AA58F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA58F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA58F8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA58FC:
    ctx->pc = 0x80AA58FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA58FCu)) return;
    // 80AA58FC: bl      0x8045F220
    {
            ctx->lr = 0x80AA5900u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA5900:
    ctx->pc = 0x80AA5900u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5900u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80AA5900: lis     r4, -27645
    ctx->gpr[4] = ((u32)(s32)(-27645) << 16);

label_80AA5904:
    ctx->pc = 0x80AA5904u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5904u)) return;
    // 80AA5904: addi    r4, r4, -21448
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-21448);

label_80AA5908:
    ctx->pc = 0x80AA5908u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5908u)) return;
    // 80AA5908: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80AA590C:
    ctx->pc = 0x80AA590Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA590Cu)) return;
    // 80AA590C: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80AA5910:
    ctx->pc = 0x80AA5910u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5910u)) return;
    // 80AA5910: lis     r6, -27646
    ctx->gpr[6] = ((u32)(s32)(-27646) << 16);

label_80AA5914:
    ctx->pc = 0x80AA5914u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5914u)) return;
    // 80AA5914: addi    r6, r6, 30736
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(30736);

label_80AA5918:
    ctx->pc = 0x80AA5918u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5918u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AA5918: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80AA5918u)) return;
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
label_80AA591C:
    ctx->pc = 0x80AA591Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA591Cu)) return;
    // 80AA591C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80AA5920:
    ctx->pc = 0x80AA5920u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5920u)) return;
    // 80AA5920: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80AA5924:
    ctx->pc = 0x80AA5924u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5924u)) return;
    // 80AA5924: bl      0x8045EBE4
    {
            ctx->lr = 0x80AA5928u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80AA5928:
    ctx->pc = 0x80AA5928u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5928u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80AA5928: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AA592C:
    ctx->pc = 0x80AA592Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA592Cu)) return;
    // 80AA592C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AA5930:
    ctx->pc = 0x80AA5930u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5930u)) return;
    // 80AA5930: li      r5, 3296
    ctx->gpr[5] = (u32)(s32)(3296);

label_80AA5934:
    ctx->pc = 0x80AA5934u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5934u)) return;
    // 80AA5934: li      r6, 29300
    ctx->gpr[6] = (u32)(s32)(29300);

label_80AA5938:
    ctx->pc = 0x80AA5938u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5938u)) return;
    // 80AA5938: lis     r7, 1
    ctx->gpr[7] = ((u32)(s32)(1) << 16);

label_80AA593C:
    ctx->pc = 0x80AA593Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA593Cu)) return;
    // 80AA593C: addi    r7, r7, -1024
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-1024);

label_80AA5940:
    ctx->pc = 0x80AA5940u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5940u)) return;
    // 80AA5940: bl      0x8045C7B4
    {
            ctx->lr = 0x80AA5944u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80AA5944:
    ctx->pc = 0x80AA5944u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5944u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80AA5944: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AA5948:
    ctx->pc = 0x80AA5948u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5948u)) return;
    // 80AA5948: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AA594C:
    ctx->pc = 0x80AA594Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA594Cu)) return;
    // 80AA594C: lis     r5, -27646
    ctx->gpr[5] = ((u32)(s32)(-27646) << 16);

label_80AA5950:
    ctx->pc = 0x80AA5950u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5950u)) return;
    // 80AA5950: addi    r5, r5, 30740
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(30740);

label_80AA5954:
    ctx->pc = 0x80AA5954u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5954u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA5954: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA5954u)) return;
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
label_80AA5958:
    ctx->pc = 0x80AA5958u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5958u)) return;
    // 80AA5958: lis     r5, -27646
    ctx->gpr[5] = ((u32)(s32)(-27646) << 16);

label_80AA595C:
    ctx->pc = 0x80AA595Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA595Cu)) return;
    // 80AA595C: addi    r5, r5, 30744
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(30744);

label_80AA5960:
    ctx->pc = 0x80AA5960u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5960u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA5960: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA5960u)) return;
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
label_80AA5964:
    ctx->pc = 0x80AA5964u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5964u)) return;
    // 80AA5964: lis     r5, -27646
    ctx->gpr[5] = ((u32)(s32)(-27646) << 16);

label_80AA5968:
    ctx->pc = 0x80AA5968u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5968u)) return;
    // 80AA5968: addi    r5, r5, 30748
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(30748);

label_80AA596C:
    ctx->pc = 0x80AA596Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA596Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA596C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA596Cu)) return;
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
label_80AA5970:
    ctx->pc = 0x80AA5970u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5970u)) return;
    // 80AA5970: bl      0x8045C750
    {
            ctx->lr = 0x80AA5974u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80AA5974:
    ctx->pc = 0x80AA5974u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5974u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA5974: li      r3, 20
    ctx->gpr[3] = (u32)(s32)(20);

label_80AA5978:
    ctx->pc = 0x80AA5978u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5978u)) return;
    // 80AA5978: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA597Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA597C:
    ctx->pc = 0x80AA597Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA597Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AA597C: lis     r3, -27644
    ctx->gpr[3] = ((u32)(s32)(-27644) << 16);

label_80AA5980:
    ctx->pc = 0x80AA5980u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5980u)) return;
    // 80AA5980: addi    r3, r3, -18464
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-18464);

label_80AA5984:
    ctx->pc = 0x80AA5984u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5984u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA5984: lwz     r3, 0(r3)
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
label_80AA5988:
    ctx->pc = 0x80AA5988u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5988u)) return;
    // 80AA5988: cmplwi  r3, 0x0000
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

label_80AA598C:
    ctx->pc = 0x80AA598Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA598Cu)) return;
    // 80AA598C: bc    12, 2, 0x80AA59A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80AA59A0;
        }
    }

label_80AA5990:
    ctx->pc = 0x80AA5990u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5990u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80AA5990: lis     r4, -27646
    ctx->gpr[4] = ((u32)(s32)(-27646) << 16);

label_80AA5994:
    ctx->pc = 0x80AA5994u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5994u)) return;
    // 80AA5994: addi    r4, r4, 30752
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(30752);

label_80AA5998:
    ctx->pc = 0x80AA5998u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5998u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA5998: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AA5998u)) return;
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
label_80AA599C:
    ctx->pc = 0x80AA599Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA599Cu)) return;
    // 80AA599C: bl      0x80AA6AF4
    {
            ctx->lr = 0x80AA59A0u;
            goto label_80AA6AF4;
    }

label_80AA59A0:
    ctx->pc = 0x80AA59A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA59A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA59A0: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_80AA59A4:
    ctx->pc = 0x80AA59A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA59A4u)) return;
    // 80AA59A4: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA59A8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA59A8:
    ctx->pc = 0x80AA59A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA59A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80AA59A8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA59AC:
    ctx->pc = 0x80AA59ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA59ACu)) return;
    // 80AA59AC: li      r4, 105
    ctx->gpr[4] = (u32)(s32)(105);

label_80AA59B0:
    ctx->pc = 0x80AA59B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA59B0u)) return;
    // 80AA59B0: li      r5, 2816
    ctx->gpr[5] = (u32)(s32)(2816);

label_80AA59B4:
    ctx->pc = 0x80AA59B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA59B4u)) return;
    // 80AA59B4: li      r6, 29440
    ctx->gpr[6] = (u32)(s32)(29440);

label_80AA59B8:
    ctx->pc = 0x80AA59B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA59B8u)) return;
    // 80AA59B8: lis     r7, 1
    ctx->gpr[7] = ((u32)(s32)(1) << 16);

label_80AA59BC:
    ctx->pc = 0x80AA59BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA59BCu)) return;
    // 80AA59BC: addi    r7, r7, -256
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-256);

label_80AA59C0:
    ctx->pc = 0x80AA59C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA59C0u)) return;
    // 80AA59C0: bl      0x8045C7B4
    {
            ctx->lr = 0x80AA59C4u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80AA59C4:
    ctx->pc = 0x80AA59C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA59C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80AA59C4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA59C8:
    ctx->pc = 0x80AA59C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA59C8u)) return;
    // 80AA59C8: li      r4, 105
    ctx->gpr[4] = (u32)(s32)(105);

label_80AA59CC:
    ctx->pc = 0x80AA59CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA59CCu)) return;
    // 80AA59CC: lis     r5, -27646
    ctx->gpr[5] = ((u32)(s32)(-27646) << 16);

label_80AA59D0:
    ctx->pc = 0x80AA59D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA59D0u)) return;
    // 80AA59D0: addi    r5, r5, 30756
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(30756);

label_80AA59D4:
    ctx->pc = 0x80AA59D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA59D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA59D4: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA59D4u)) return;
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
label_80AA59D8:
    ctx->pc = 0x80AA59D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA59D8u)) return;
    // 80AA59D8: lis     r5, -27646
    ctx->gpr[5] = ((u32)(s32)(-27646) << 16);

label_80AA59DC:
    ctx->pc = 0x80AA59DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA59DCu)) return;
    // 80AA59DC: addi    r5, r5, 30760
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(30760);

label_80AA59E0:
    ctx->pc = 0x80AA59E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA59E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA59E0: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA59E0u)) return;
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
label_80AA59E4:
    ctx->pc = 0x80AA59E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA59E4u)) return;
    // 80AA59E4: lis     r5, -27646
    ctx->gpr[5] = ((u32)(s32)(-27646) << 16);

label_80AA59E8:
    ctx->pc = 0x80AA59E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA59E8u)) return;
    // 80AA59E8: addi    r5, r5, 30764
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(30764);

label_80AA59EC:
    ctx->pc = 0x80AA59ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA59ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA59EC: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA59ECu)) return;
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
label_80AA59F0:
    ctx->pc = 0x80AA59F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA59F0u)) return;
    // 80AA59F0: bl      0x8045C750
    {
            ctx->lr = 0x80AA59F4u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80AA59F4:
    ctx->pc = 0x80AA59F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA59F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA59F4: li      r3, 104
    ctx->gpr[3] = (u32)(s32)(104);

label_80AA59F8:
    ctx->pc = 0x80AA59F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA59F8u)) return;
    // 80AA59F8: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA59FCu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA59FC:
    ctx->pc = 0x80AA59FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA59FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80AA59FC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA5A00:
    ctx->pc = 0x80AA5A00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5A00u)) return;
    // 80AA5A00: li      r4, 75
    ctx->gpr[4] = (u32)(s32)(75);

label_80AA5A04:
    ctx->pc = 0x80AA5A04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5A04u)) return;
    // 80AA5A04: li      r5, 4608
    ctx->gpr[5] = (u32)(s32)(4608);

label_80AA5A08:
    ctx->pc = 0x80AA5A08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5A08u)) return;
    // 80AA5A08: li      r6, 26880
    ctx->gpr[6] = (u32)(s32)(26880);

label_80AA5A0C:
    ctx->pc = 0x80AA5A0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5A0Cu)) return;
    // 80AA5A0C: lis     r7, 1
    ctx->gpr[7] = ((u32)(s32)(1) << 16);

label_80AA5A10:
    ctx->pc = 0x80AA5A10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5A10u)) return;
    // 80AA5A10: addi    r7, r7, -256
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-256);

label_80AA5A14:
    ctx->pc = 0x80AA5A14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5A14u)) return;
    // 80AA5A14: bl      0x8045C7B4
    {
            ctx->lr = 0x80AA5A18u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80AA5A18:
    ctx->pc = 0x80AA5A18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5A18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80AA5A18: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA5A1C:
    ctx->pc = 0x80AA5A1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5A1Cu)) return;
    // 80AA5A1C: li      r4, 75
    ctx->gpr[4] = (u32)(s32)(75);

label_80AA5A20:
    ctx->pc = 0x80AA5A20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5A20u)) return;
    // 80AA5A20: lis     r5, -27646
    ctx->gpr[5] = ((u32)(s32)(-27646) << 16);

label_80AA5A24:
    ctx->pc = 0x80AA5A24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5A24u)) return;
    // 80AA5A24: addi    r5, r5, 30768
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(30768);

label_80AA5A28:
    ctx->pc = 0x80AA5A28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5A28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA5A28: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA5A28u)) return;
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
label_80AA5A2C:
    ctx->pc = 0x80AA5A2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5A2Cu)) return;
    // 80AA5A2C: lis     r5, -27646
    ctx->gpr[5] = ((u32)(s32)(-27646) << 16);

label_80AA5A30:
    ctx->pc = 0x80AA5A30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5A30u)) return;
    // 80AA5A30: addi    r5, r5, 30772
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(30772);

label_80AA5A34:
    ctx->pc = 0x80AA5A34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5A34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA5A34: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA5A34u)) return;
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
label_80AA5A38:
    ctx->pc = 0x80AA5A38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5A38u)) return;
    // 80AA5A38: lis     r5, -27646
    ctx->gpr[5] = ((u32)(s32)(-27646) << 16);

label_80AA5A3C:
    ctx->pc = 0x80AA5A3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5A3Cu)) return;
    // 80AA5A3C: addi    r5, r5, 30776
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(30776);

label_80AA5A40:
    ctx->pc = 0x80AA5A40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5A40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA5A40: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA5A40u)) return;
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
label_80AA5A44:
    ctx->pc = 0x80AA5A44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5A44u)) return;
    // 80AA5A44: bl      0x8045C750
    {
            ctx->lr = 0x80AA5A48u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80AA5A48:
    ctx->pc = 0x80AA5A48u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5A48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA5A48: li      r3, 24
    ctx->gpr[3] = (u32)(s32)(24);

label_80AA5A4C:
    ctx->pc = 0x80AA5A4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5A4Cu)) return;
    // 80AA5A4C: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA5A50u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA5A50:
    ctx->pc = 0x80AA5A50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5A50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA5A50: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA5A54:
    ctx->pc = 0x80AA5A54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5A54u)) return;
    // 80AA5A54: bl      0x8045F220
    {
            ctx->lr = 0x80AA5A58u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA5A58:
    ctx->pc = 0x80AA5A58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5A58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AA5A58: lis     r4, -27646
    ctx->gpr[4] = ((u32)(s32)(-27646) << 16);

label_80AA5A5C:
    ctx->pc = 0x80AA5A5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5A5Cu)) return;
    // 80AA5A5C: addi    r4, r4, 32208
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(32208);

label_80AA5A60:
    ctx->pc = 0x80AA5A60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5A60u)) return;
    // 80AA5A60: bl      0x8045C060
    {
            ctx->lr = 0x80AA5A64u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80AA5A64:
    ctx->pc = 0x80AA5A64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5A64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA5A64: li      r3, 50
    ctx->gpr[3] = (u32)(s32)(50);

label_80AA5A68:
    ctx->pc = 0x80AA5A68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5A68u)) return;
    // 80AA5A68: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA5A6Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA5A6C:
    ctx->pc = 0x80AA5A6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5A6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80AA5A6C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA5A70:
    ctx->pc = 0x80AA5A70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5A70u)) return;
    // 80AA5A70: li      r4, 60
    ctx->gpr[4] = (u32)(s32)(60);

label_80AA5A74:
    ctx->pc = 0x80AA5A74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5A74u)) return;
    // 80AA5A74: li      r5, 4608
    ctx->gpr[5] = (u32)(s32)(4608);

label_80AA5A78:
    ctx->pc = 0x80AA5A78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5A78u)) return;
    // 80AA5A78: li      r6, 26880
    ctx->gpr[6] = (u32)(s32)(26880);

label_80AA5A7C:
    ctx->pc = 0x80AA5A7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5A7Cu)) return;
    // 80AA5A7C: lis     r7, 1
    ctx->gpr[7] = ((u32)(s32)(1) << 16);

label_80AA5A80:
    ctx->pc = 0x80AA5A80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5A80u)) return;
    // 80AA5A80: addi    r7, r7, -256
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-256);

label_80AA5A84:
    ctx->pc = 0x80AA5A84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5A84u)) return;
    // 80AA5A84: bl      0x8045C7B4
    {
            ctx->lr = 0x80AA5A88u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80AA5A88:
    ctx->pc = 0x80AA5A88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5A88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80AA5A88: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA5A8C:
    ctx->pc = 0x80AA5A8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5A8Cu)) return;
    // 80AA5A8C: li      r4, 60
    ctx->gpr[4] = (u32)(s32)(60);

label_80AA5A90:
    ctx->pc = 0x80AA5A90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5A90u)) return;
    // 80AA5A90: lis     r5, -27646
    ctx->gpr[5] = ((u32)(s32)(-27646) << 16);

label_80AA5A94:
    ctx->pc = 0x80AA5A94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5A94u)) return;
    // 80AA5A94: addi    r5, r5, 30780
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(30780);

label_80AA5A98:
    ctx->pc = 0x80AA5A98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5A98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA5A98: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA5A98u)) return;
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
label_80AA5A9C:
    ctx->pc = 0x80AA5A9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5A9Cu)) return;
    // 80AA5A9C: lis     r5, -27646
    ctx->gpr[5] = ((u32)(s32)(-27646) << 16);

label_80AA5AA0:
    ctx->pc = 0x80AA5AA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5AA0u)) return;
    // 80AA5AA0: addi    r5, r5, 30784
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(30784);

label_80AA5AA4:
    ctx->pc = 0x80AA5AA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5AA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA5AA4: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA5AA4u)) return;
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
label_80AA5AA8:
    ctx->pc = 0x80AA5AA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5AA8u)) return;
    // 80AA5AA8: lis     r5, -27646
    ctx->gpr[5] = ((u32)(s32)(-27646) << 16);

label_80AA5AAC:
    ctx->pc = 0x80AA5AACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5AACu)) return;
    // 80AA5AAC: addi    r5, r5, 30788
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(30788);

label_80AA5AB0:
    ctx->pc = 0x80AA5AB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5AB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA5AB0: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA5AB0u)) return;
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
label_80AA5AB4:
    ctx->pc = 0x80AA5AB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5AB4u)) return;
    // 80AA5AB4: bl      0x8045C750
    {
            ctx->lr = 0x80AA5AB8u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80AA5AB8:
    ctx->pc = 0x80AA5AB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5AB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA5AB8: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80AA5ABC:
    ctx->pc = 0x80AA5ABCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5ABCu)) return;
    // 80AA5ABC: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA5AC0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA5AC0:
    ctx->pc = 0x80AA5AC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5AC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80AA5AC0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AA5AC4:
    ctx->pc = 0x80AA5AC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5AC4u)) return;
    // 80AA5AC4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AA5AC8:
    ctx->pc = 0x80AA5AC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5AC8u)) return;
    // 80AA5AC8: lis     r7, 1
    ctx->gpr[7] = ((u32)(s32)(1) << 16);

label_80AA5ACC:
    ctx->pc = 0x80AA5ACCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5ACCu)) return;
    // 80AA5ACC: addi    r5, r7, -9728
    ctx->gpr[5] = ctx->gpr[7] + (u32)(s32)(-9728);

label_80AA5AD0:
    ctx->pc = 0x80AA5AD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5AD0u)) return;
    // 80AA5AD0: li      r6, 3328
    ctx->gpr[6] = (u32)(s32)(3328);

label_80AA5AD4:
    ctx->pc = 0x80AA5AD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5AD4u)) return;
    // 80AA5AD4: addi    r7, r7, -768
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-768);

label_80AA5AD8:
    ctx->pc = 0x80AA5AD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5AD8u)) return;
    // 80AA5AD8: bl      0x8045C7B4
    {
            ctx->lr = 0x80AA5ADCu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80AA5ADC:
    ctx->pc = 0x80AA5ADCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5ADCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80AA5ADC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AA5AE0:
    ctx->pc = 0x80AA5AE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5AE0u)) return;
    // 80AA5AE0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AA5AE4:
    ctx->pc = 0x80AA5AE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5AE4u)) return;
    // 80AA5AE4: lis     r5, -27646
    ctx->gpr[5] = ((u32)(s32)(-27646) << 16);

label_80AA5AE8:
    ctx->pc = 0x80AA5AE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5AE8u)) return;
    // 80AA5AE8: addi    r5, r5, 30792
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(30792);

label_80AA5AEC:
    ctx->pc = 0x80AA5AECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5AECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA5AEC: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA5AECu)) return;
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
label_80AA5AF0:
    ctx->pc = 0x80AA5AF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5AF0u)) return;
    // 80AA5AF0: lis     r5, -27646
    ctx->gpr[5] = ((u32)(s32)(-27646) << 16);

label_80AA5AF4:
    ctx->pc = 0x80AA5AF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5AF4u)) return;
    // 80AA5AF4: addi    r5, r5, 30796
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(30796);

label_80AA5AF8:
    ctx->pc = 0x80AA5AF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5AF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA5AF8: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA5AF8u)) return;
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
label_80AA5AFC:
    ctx->pc = 0x80AA5AFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5AFCu)) return;
    // 80AA5AFC: lis     r5, -27646
    ctx->gpr[5] = ((u32)(s32)(-27646) << 16);

label_80AA5B00:
    ctx->pc = 0x80AA5B00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5B00u)) return;
    // 80AA5B00: addi    r5, r5, 30800
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(30800);

label_80AA5B04:
    ctx->pc = 0x80AA5B04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5B04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA5B04: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA5B04u)) return;
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
label_80AA5B08:
    ctx->pc = 0x80AA5B08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5B08u)) return;
    // 80AA5B08: bl      0x8045C750
    {
            ctx->lr = 0x80AA5B0Cu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80AA5B0C:
    ctx->pc = 0x80AA5B0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5B0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80AA5B0C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA5B10:
    ctx->pc = 0x80AA5B10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5B10u)) return;
    // 80AA5B10: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_80AA5B14:
    ctx->pc = 0x80AA5B14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5B14u)) return;
    // 80AA5B14: lis     r5, -27646
    ctx->gpr[5] = ((u32)(s32)(-27646) << 16);

label_80AA5B18:
    ctx->pc = 0x80AA5B18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5B18u)) return;
    // 80AA5B18: addi    r5, r5, 30804
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(30804);

label_80AA5B1C:
    ctx->pc = 0x80AA5B1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5B1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA5B1C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA5B1Cu)) return;
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
label_80AA5B20:
    ctx->pc = 0x80AA5B20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5B20u)) return;
    // 80AA5B20: lis     r5, -27646
    ctx->gpr[5] = ((u32)(s32)(-27646) << 16);

label_80AA5B24:
    ctx->pc = 0x80AA5B24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5B24u)) return;
    // 80AA5B24: addi    r5, r5, 30808
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(30808);

label_80AA5B28:
    ctx->pc = 0x80AA5B28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5B28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA5B28: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA5B28u)) return;
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
label_80AA5B2C:
    ctx->pc = 0x80AA5B2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5B2Cu)) return;
    // 80AA5B2C: lis     r5, -27646
    ctx->gpr[5] = ((u32)(s32)(-27646) << 16);

label_80AA5B30:
    ctx->pc = 0x80AA5B30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5B30u)) return;
    // 80AA5B30: addi    r5, r5, 30812
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(30812);

label_80AA5B34:
    ctx->pc = 0x80AA5B34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5B34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA5B34: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA5B34u)) return;
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
label_80AA5B38:
    ctx->pc = 0x80AA5B38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5B38u)) return;
    // 80AA5B38: bl      0x8045C750
    {
            ctx->lr = 0x80AA5B3Cu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80AA5B3C:
    ctx->pc = 0x80AA5B3Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5B3Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA5B3C: li      r3, 40
    ctx->gpr[3] = (u32)(s32)(40);

label_80AA5B40:
    ctx->pc = 0x80AA5B40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5B40u)) return;
    // 80AA5B40: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA5B44u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA5B44:
    ctx->pc = 0x80AA5B44u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5B44u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA5B44: bl      0x80AA5728
    {
            ctx->lr = 0x80AA5B48u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80AA5728u;
                return;
            }
            goto label_80AA5728;
    }

label_80AA5B48:
    ctx->pc = 0x80AA5B48u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5B48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80AA5B48: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA5B4C:
    ctx->pc = 0x80AA5B4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5B4Cu)) return;
    // 80AA5B4C: li      r4, 1333
    ctx->gpr[4] = (u32)(s32)(1333);

label_80AA5B50:
    ctx->pc = 0x80AA5B50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5B50u)) return;
    // 80AA5B50: li      r5, 1800
    ctx->gpr[5] = (u32)(s32)(1800);

label_80AA5B54:
    ctx->pc = 0x80AA5B54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5B54u)) return;
    // 80AA5B54: bl      0x80AA6F28
    {
            ctx->lr = 0x80AA5B58u;
            goto label_80AA6F28;
    }

label_80AA5B58:
    ctx->pc = 0x80AA5B58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5B58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80AA5B58: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA5B5C:
    ctx->pc = 0x80AA5B5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5B5Cu)) return;
    // 80AA5B5C: li      r4, -60
    ctx->gpr[4] = (u32)(s32)(-60);

label_80AA5B60:
    ctx->pc = 0x80AA5B60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5B60u)) return;
    // 80AA5B60: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80AA5B64:
    ctx->pc = 0x80AA5B64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5B64u)) return;
    // 80AA5B64: bl      0x80AA7004
    {
            ctx->lr = 0x80AA5B68u;
            goto label_80AA7004;
    }

label_80AA5B68:
    ctx->pc = 0x80AA5B68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5B68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA5B68: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA5B6C:
    ctx->pc = 0x80AA5B6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5B6Cu)) return;
    // 80AA5B6C: bl      0x8045F220
    {
            ctx->lr = 0x80AA5B70u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA5B70:
    ctx->pc = 0x80AA5B70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5B70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AA5B70: lis     r4, -27646
    ctx->gpr[4] = ((u32)(s32)(-27646) << 16);

label_80AA5B74:
    ctx->pc = 0x80AA5B74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5B74u)) return;
    // 80AA5B74: addi    r4, r4, 32228
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(32228);

label_80AA5B78:
    ctx->pc = 0x80AA5B78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5B78u)) return;
    // 80AA5B78: bl      0x8045C060
    {
            ctx->lr = 0x80AA5B7Cu;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80AA5B7C:
    ctx->pc = 0x80AA5B7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5B7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA5B7C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AA5B80:
    ctx->pc = 0x80AA5B80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5B80u)) return;
    // 80AA5B80: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA5B84u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA5B84:
    ctx->pc = 0x80AA5B84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5B84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80AA5B84: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA5B88:
    ctx->pc = 0x80AA5B88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5B88u)) return;
    // 80AA5B88: li      r4, -10
    ctx->gpr[4] = (u32)(s32)(-10);

label_80AA5B8C:
    ctx->pc = 0x80AA5B8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5B8Cu)) return;
    // 80AA5B8C: li      r5, 100
    ctx->gpr[5] = (u32)(s32)(100);

label_80AA5B90:
    ctx->pc = 0x80AA5B90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5B90u)) return;
    // 80AA5B90: bl      0x80AA7004
    {
            ctx->lr = 0x80AA5B94u;
            goto label_80AA7004;
    }

label_80AA5B94:
    ctx->pc = 0x80AA5B94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5B94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA5B94: li      r3, 29
    ctx->gpr[3] = (u32)(s32)(29);

label_80AA5B98:
    ctx->pc = 0x80AA5B98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5B98u)) return;
    // 80AA5B98: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA5B9Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA5B9C:
    ctx->pc = 0x80AA5B9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5B9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA5B9C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA5BA0:
    ctx->pc = 0x80AA5BA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5BA0u)) return;
    // 80AA5BA0: bl      0x8045F220
    {
            ctx->lr = 0x80AA5BA4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA5BA4:
    ctx->pc = 0x80AA5BA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5BA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80AA5BA4: lis     r4, -27645
    ctx->gpr[4] = ((u32)(s32)(-27645) << 16);

label_80AA5BA8:
    ctx->pc = 0x80AA5BA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5BA8u)) return;
    // 80AA5BA8: addi    r4, r4, -14948
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14948);

label_80AA5BAC:
    ctx->pc = 0x80AA5BACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5BACu)) return;
    // 80AA5BAC: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80AA5BB0:
    ctx->pc = 0x80AA5BB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5BB0u)) return;
    // 80AA5BB0: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80AA5BB4:
    ctx->pc = 0x80AA5BB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5BB4u)) return;
    // 80AA5BB4: lis     r6, -27646
    ctx->gpr[6] = ((u32)(s32)(-27646) << 16);

label_80AA5BB8:
    ctx->pc = 0x80AA5BB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5BB8u)) return;
    // 80AA5BB8: addi    r6, r6, 30816
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(30816);

label_80AA5BBC:
    ctx->pc = 0x80AA5BBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5BBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AA5BBC: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80AA5BBCu)) return;
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
label_80AA5BC0:
    ctx->pc = 0x80AA5BC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5BC0u)) return;
    // 80AA5BC0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80AA5BC4:
    ctx->pc = 0x80AA5BC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5BC4u)) return;
    // 80AA5BC4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80AA5BC8:
    ctx->pc = 0x80AA5BC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5BC8u)) return;
    // 80AA5BC8: bl      0x8045EBE4
    {
            ctx->lr = 0x80AA5BCCu;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80AA5BCC:
    ctx->pc = 0x80AA5BCCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5BCCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA5BCC: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_80AA5BD0:
    ctx->pc = 0x80AA5BD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5BD0u)) return;
    // 80AA5BD0: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA5BD4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA5BD4:
    ctx->pc = 0x80AA5BD4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5BD4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA5BD4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA5BD8:
    ctx->pc = 0x80AA5BD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5BD8u)) return;
    // 80AA5BD8: bl      0x8045F220
    {
            ctx->lr = 0x80AA5BDCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA5BDC:
    ctx->pc = 0x80AA5BDCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5BDCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA5BDC: bl      0x8045EB40
    {
            ctx->lr = 0x80AA5BE0u;
            ctx->pc = 0x8045EB40u;
            return;
    }

label_80AA5BE0:
    ctx->pc = 0x80AA5BE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5BE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA5BE0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA5BE4:
    ctx->pc = 0x80AA5BE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5BE4u)) return;
    // 80AA5BE4: bl      0x8045F220
    {
            ctx->lr = 0x80AA5BE8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA5BE8:
    ctx->pc = 0x80AA5BE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5BE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80AA5BE8: lis     r4, -27645
    ctx->gpr[4] = ((u32)(s32)(-27645) << 16);

label_80AA5BEC:
    ctx->pc = 0x80AA5BECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5BECu)) return;
    // 80AA5BEC: addi    r4, r4, -7488
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-7488);

label_80AA5BF0:
    ctx->pc = 0x80AA5BF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5BF0u)) return;
    // 80AA5BF0: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80AA5BF4:
    ctx->pc = 0x80AA5BF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5BF4u)) return;
    // 80AA5BF4: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80AA5BF8:
    ctx->pc = 0x80AA5BF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5BF8u)) return;
    // 80AA5BF8: lis     r6, -27646
    ctx->gpr[6] = ((u32)(s32)(-27646) << 16);

label_80AA5BFC:
    ctx->pc = 0x80AA5BFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5BFCu)) return;
    // 80AA5BFC: addi    r6, r6, 30820
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(30820);

label_80AA5C00:
    ctx->pc = 0x80AA5C00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5C00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AA5C00: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80AA5C00u)) return;
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
label_80AA5C04:
    ctx->pc = 0x80AA5C04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5C04u)) return;
    // 80AA5C04: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80AA5C08:
    ctx->pc = 0x80AA5C08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5C08u)) return;
    // 80AA5C08: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80AA5C0C:
    ctx->pc = 0x80AA5C0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5C0Cu)) return;
    // 80AA5C0C: bl      0x8045EBE4
    {
            ctx->lr = 0x80AA5C10u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80AA5C10:
    ctx->pc = 0x80AA5C10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5C10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA5C10: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA5C14:
    ctx->pc = 0x80AA5C14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5C14u)) return;
    // 80AA5C14: bl      0x8045F220
    {
            ctx->lr = 0x80AA5C18u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA5C18:
    ctx->pc = 0x80AA5C18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5C18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AA5C18: lis     r4, -27646
    ctx->gpr[4] = ((u32)(s32)(-27646) << 16);

label_80AA5C1C:
    ctx->pc = 0x80AA5C1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5C1Cu)) return;
    // 80AA5C1C: addi    r4, r4, 32232
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(32232);

label_80AA5C20:
    ctx->pc = 0x80AA5C20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5C20u)) return;
    // 80AA5C20: bl      0x8045C060
    {
            ctx->lr = 0x80AA5C24u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80AA5C24:
    ctx->pc = 0x80AA5C24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5C24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA5C24: li      r3, 402
    ctx->gpr[3] = (u32)(s32)(402);

label_80AA5C28:
    ctx->pc = 0x80AA5C28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5C28u)) return;
    // 80AA5C28: bl      0x8045BFA0
    {
            ctx->lr = 0x80AA5C2Cu;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80AA5C2C:
    ctx->pc = 0x80AA5C2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5C2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA5C2C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA5C30:
    ctx->pc = 0x80AA5C30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5C30u)) return;
    // 80AA5C30: bl      0x8045F220
    {
            ctx->lr = 0x80AA5C34u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA5C34:
    ctx->pc = 0x80AA5C34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5C34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80AA5C34: lis     r4, -27645
    ctx->gpr[4] = ((u32)(s32)(-27645) << 16);

label_80AA5C38:
    ctx->pc = 0x80AA5C38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5C38u)) return;
    // 80AA5C38: addi    r4, r4, -7488
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-7488);

label_80AA5C3C:
    ctx->pc = 0x80AA5C3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5C3Cu)) return;
    // 80AA5C3C: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80AA5C40:
    ctx->pc = 0x80AA5C40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5C40u)) return;
    // 80AA5C40: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80AA5C44:
    ctx->pc = 0x80AA5C44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5C44u)) return;
    // 80AA5C44: lis     r6, -27646
    ctx->gpr[6] = ((u32)(s32)(-27646) << 16);

label_80AA5C48:
    ctx->pc = 0x80AA5C48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5C48u)) return;
    // 80AA5C48: addi    r6, r6, 30824
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(30824);

label_80AA5C4C:
    ctx->pc = 0x80AA5C4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5C4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AA5C4C: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80AA5C4Cu)) return;
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
label_80AA5C50:
    ctx->pc = 0x80AA5C50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5C50u)) return;
    // 80AA5C50: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80AA5C54:
    ctx->pc = 0x80AA5C54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5C54u)) return;
    // 80AA5C54: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80AA5C58:
    ctx->pc = 0x80AA5C58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5C58u)) return;
    // 80AA5C58: bl      0x8045EBE4
    {
            ctx->lr = 0x80AA5C5Cu;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80AA5C5C:
    ctx->pc = 0x80AA5C5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5C5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA5C5C: bl      0x80406038
    {
            ctx->lr = 0x80AA5C60u;
            ctx->pc = 0x80406038u;
            return;
    }

label_80AA5C60:
    ctx->pc = 0x80AA5C60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5C60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80AA5C60: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80AA5C64:
    ctx->pc = 0x80AA5C64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5C64u)) return;
    // 80AA5C64: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80AA5C68:
    ctx->pc = 0x80AA5C68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5C68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA5C68: lwz     r0, 0(r3)
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
label_80AA5C6C:
    ctx->pc = 0x80AA5C6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5C6Cu)) return;
    // 80AA5C6C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80AA5C70:
    ctx->pc = 0x80AA5C70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5C70u)) return;
    // 80AA5C70: lis     r3, -27646
    ctx->gpr[3] = ((u32)(s32)(-27646) << 16);

label_80AA5C74:
    ctx->pc = 0x80AA5C74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5C74u)) return;
    // 80AA5C74: addi    r3, r3, 31652
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(31652);

label_80AA5C78:
    ctx->pc = 0x80AA5C78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5C78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA5C78: lwzx    r3, r3, r0
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
label_80AA5C7C:
    ctx->pc = 0x80AA5C7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5C7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA5C7C: lwz     r3, 0(r3)
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
label_80AA5C80:
    ctx->pc = 0x80AA5C80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5C80u)) return;
    // 80AA5C80: bl      0x8045F6FC
    {
            ctx->lr = 0x80AA5C84u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80AA5C84:
    ctx->pc = 0x80AA5C84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5C84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA5C84: li      r3, 15
    ctx->gpr[3] = (u32)(s32)(15);

label_80AA5C88:
    ctx->pc = 0x80AA5C88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5C88u)) return;
    // 80AA5C88: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA5C8Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA5C8C:
    ctx->pc = 0x80AA5C8Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5C8Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA5C8C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA5C90:
    ctx->pc = 0x80AA5C90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5C90u)) return;
    // 80AA5C90: bl      0x8045F220
    {
            ctx->lr = 0x80AA5C94u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA5C94:
    ctx->pc = 0x80AA5C94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5C94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA5C94: bl      0x8045EB8C
    {
            ctx->lr = 0x80AA5C98u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80AA5C98:
    ctx->pc = 0x80AA5C98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5C98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA5C98: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA5C9C:
    ctx->pc = 0x80AA5C9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5C9Cu)) return;
    // 80AA5C9C: bl      0x8045F220
    {
            ctx->lr = 0x80AA5CA0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA5CA0:
    ctx->pc = 0x80AA5CA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5CA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80AA5CA0: lis     r4, -28587
    ctx->gpr[4] = ((u32)(s32)(-28587) << 16);

label_80AA5CA4:
    ctx->pc = 0x80AA5CA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5CA4u)) return;
    // 80AA5CA4: addi    r4, r4, 8236
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8236);

label_80AA5CA8:
    ctx->pc = 0x80AA5CA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5CA8u)) return;
    // 80AA5CA8: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80AA5CAC:
    ctx->pc = 0x80AA5CACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5CACu)) return;
    // 80AA5CAC: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80AA5CB0:
    ctx->pc = 0x80AA5CB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5CB0u)) return;
    // 80AA5CB0: lis     r6, -27646
    ctx->gpr[6] = ((u32)(s32)(-27646) << 16);

label_80AA5CB4:
    ctx->pc = 0x80AA5CB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5CB4u)) return;
    // 80AA5CB4: addi    r6, r6, 30596
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(30596);

label_80AA5CB8:
    ctx->pc = 0x80AA5CB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5CB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AA5CB8: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80AA5CB8u)) return;
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
label_80AA5CBC:
    ctx->pc = 0x80AA5CBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5CBCu)) return;
    // 80AA5CBC: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80AA5CC0:
    ctx->pc = 0x80AA5CC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5CC0u)) return;
    // 80AA5CC0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80AA5CC4:
    ctx->pc = 0x80AA5CC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5CC4u)) return;
    // 80AA5CC4: bl      0x8045EBE4
    {
            ctx->lr = 0x80AA5CC8u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80AA5CC8:
    ctx->pc = 0x80AA5CC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5CC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA5CC8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA5CCC:
    ctx->pc = 0x80AA5CCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5CCCu)) return;
    // 80AA5CCC: bl      0x8045F220
    {
            ctx->lr = 0x80AA5CD0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA5CD0:
    ctx->pc = 0x80AA5CD0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5CD0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80AA5CD0: lis     r4, -27646
    ctx->gpr[4] = ((u32)(s32)(-27646) << 16);

label_80AA5CD4:
    ctx->pc = 0x80AA5CD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5CD4u)) return;
    // 80AA5CD4: addi    r4, r4, 30828
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(30828);

label_80AA5CD8:
    ctx->pc = 0x80AA5CD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5CD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA5CD8: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AA5CD8u)) return;
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
label_80AA5CDC:
    ctx->pc = 0x80AA5CDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5CDCu)) return;
    // 80AA5CDC: lis     r4, -27646
    ctx->gpr[4] = ((u32)(s32)(-27646) << 16);

label_80AA5CE0:
    ctx->pc = 0x80AA5CE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5CE0u)) return;
    // 80AA5CE0: addi    r4, r4, 30832
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(30832);

label_80AA5CE4:
    ctx->pc = 0x80AA5CE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5CE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA5CE4: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AA5CE4u)) return;
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
label_80AA5CE8:
    ctx->pc = 0x80AA5CE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5CE8u)) return;
    // 80AA5CE8: lis     r4, -27646
    ctx->gpr[4] = ((u32)(s32)(-27646) << 16);

label_80AA5CEC:
    ctx->pc = 0x80AA5CECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5CECu)) return;
    // 80AA5CEC: addi    r4, r4, 30836
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(30836);

label_80AA5CF0:
    ctx->pc = 0x80AA5CF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5CF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA5CF0: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AA5CF0u)) return;
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
label_80AA5CF4:
    ctx->pc = 0x80AA5CF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5CF4u)) return;
    // 80AA5CF4: bl      0x8045EF2C
    {
            ctx->lr = 0x80AA5CF8u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80AA5CF8:
    ctx->pc = 0x80AA5CF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5CF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA5CF8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA5CFC:
    ctx->pc = 0x80AA5CFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5CFCu)) return;
    // 80AA5CFC: bl      0x8045F220
    {
            ctx->lr = 0x80AA5D00u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA5D00:
    ctx->pc = 0x80AA5D00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5D00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80AA5D00: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AA5D04:
    ctx->pc = 0x80AA5D04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5D04u)) return;
    // 80AA5D04: li      r5, 5120
    ctx->gpr[5] = (u32)(s32)(5120);

label_80AA5D08:
    ctx->pc = 0x80AA5D08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5D08u)) return;
    // 80AA5D08: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80AA5D0C:
    ctx->pc = 0x80AA5D0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5D0Cu)) return;
    // 80AA5D0C: bl      0x8045EEA8
    {
            ctx->lr = 0x80AA5D10u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80AA5D10:
    ctx->pc = 0x80AA5D10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5D10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA5D10: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA5D14:
    ctx->pc = 0x80AA5D14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5D14u)) return;
    // 80AA5D14: bl      0x8045F220
    {
            ctx->lr = 0x80AA5D18u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA5D18:
    ctx->pc = 0x80AA5D18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5D18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80AA5D18: lis     r4, -27646
    ctx->gpr[4] = ((u32)(s32)(-27646) << 16);

label_80AA5D1C:
    ctx->pc = 0x80AA5D1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5D1Cu)) return;
    // 80AA5D1C: addi    r4, r4, 30840
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(30840);

label_80AA5D20:
    ctx->pc = 0x80AA5D20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5D20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA5D20: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AA5D20u)) return;
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
label_80AA5D24:
    ctx->pc = 0x80AA5D24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5D24u)) return;
    // 80AA5D24: lis     r4, -27646
    ctx->gpr[4] = ((u32)(s32)(-27646) << 16);

label_80AA5D28:
    ctx->pc = 0x80AA5D28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5D28u)) return;
    // 80AA5D28: addi    r4, r4, 30844
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(30844);

label_80AA5D2C:
    ctx->pc = 0x80AA5D2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5D2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA5D2C: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AA5D2Cu)) return;
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
label_80AA5D30:
    ctx->pc = 0x80AA5D30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5D30u)) return;
    // 80AA5D30: lis     r4, -27646
    ctx->gpr[4] = ((u32)(s32)(-27646) << 16);

label_80AA5D34:
    ctx->pc = 0x80AA5D34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5D34u)) return;
    // 80AA5D34: addi    r4, r4, 30848
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(30848);

label_80AA5D38:
    ctx->pc = 0x80AA5D38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5D38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA5D38: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AA5D38u)) return;
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
label_80AA5D3C:
    ctx->pc = 0x80AA5D3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5D3Cu)) return;
    // 80AA5D3C: bl      0x8045E70C
    {
            ctx->lr = 0x80AA5D40u;
            ctx->pc = 0x8045E70Cu;
            return;
    }

label_80AA5D40:
    ctx->pc = 0x80AA5D40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5D40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80AA5D40: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AA5D44:
    ctx->pc = 0x80AA5D44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5D44u)) return;
    // 80AA5D44: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80AA5D48:
    ctx->pc = 0x80AA5D48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5D48u)) return;
    // 80AA5D48: li      r5, 12561
    ctx->gpr[5] = (u32)(s32)(12561);

label_80AA5D4C:
    ctx->pc = 0x80AA5D4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5D4Cu)) return;
    // 80AA5D4C: bl      0x8045C0F8
    {
            ctx->lr = 0x80AA5D50u;
            ctx->pc = 0x8045C0F8u;
            return;
    }

label_80AA5D50:
    ctx->pc = 0x80AA5D50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5D50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA5D50: li      r3, 25
    ctx->gpr[3] = (u32)(s32)(25);

label_80AA5D54:
    ctx->pc = 0x80AA5D54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5D54u)) return;
    // 80AA5D54: bl      0x80406090
    {
            ctx->lr = 0x80AA5D58u;
            ctx->pc = 0x80406090u;
            return;
    }

label_80AA5D58:
    ctx->pc = 0x80AA5D58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5D58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80AA5D58: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA5D5C:
    ctx->pc = 0x80AA5D5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5D5Cu)) return;
    // 80AA5D5C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AA5D60:
    ctx->pc = 0x80AA5D60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5D60u)) return;
    // 80AA5D60: li      r5, 1792
    ctx->gpr[5] = (u32)(s32)(1792);

label_80AA5D64:
    ctx->pc = 0x80AA5D64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5D64u)) return;
    // 80AA5D64: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80AA5D68:
    ctx->pc = 0x80AA5D68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5D68u)) return;
    // 80AA5D68: addi    r6, r6, -26112
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-26112);

label_80AA5D6C:
    ctx->pc = 0x80AA5D6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5D6Cu)) return;
    // 80AA5D6C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80AA5D70:
    ctx->pc = 0x80AA5D70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5D70u)) return;
    // 80AA5D70: bl      0x8045C7B4
    {
            ctx->lr = 0x80AA5D74u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80AA5D74:
    ctx->pc = 0x80AA5D74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5D74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80AA5D74: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA5D78:
    ctx->pc = 0x80AA5D78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5D78u)) return;
    // 80AA5D78: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AA5D7C:
    ctx->pc = 0x80AA5D7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5D7Cu)) return;
    // 80AA5D7C: lis     r5, -27646
    ctx->gpr[5] = ((u32)(s32)(-27646) << 16);

label_80AA5D80:
    ctx->pc = 0x80AA5D80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5D80u)) return;
    // 80AA5D80: addi    r5, r5, 30852
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(30852);

label_80AA5D84:
    ctx->pc = 0x80AA5D84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5D84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA5D84: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA5D84u)) return;
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
label_80AA5D88:
    ctx->pc = 0x80AA5D88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5D88u)) return;
    // 80AA5D88: lis     r5, -27646
    ctx->gpr[5] = ((u32)(s32)(-27646) << 16);

label_80AA5D8C:
    ctx->pc = 0x80AA5D8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5D8Cu)) return;
    // 80AA5D8C: addi    r5, r5, 30856
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(30856);

label_80AA5D90:
    ctx->pc = 0x80AA5D90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5D90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA5D90: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA5D90u)) return;
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
label_80AA5D94:
    ctx->pc = 0x80AA5D94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5D94u)) return;
    // 80AA5D94: lis     r5, -27646
    ctx->gpr[5] = ((u32)(s32)(-27646) << 16);

label_80AA5D98:
    ctx->pc = 0x80AA5D98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5D98u)) return;
    // 80AA5D98: addi    r5, r5, 30860
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(30860);

label_80AA5D9C:
    ctx->pc = 0x80AA5D9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5D9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA5D9C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA5D9Cu)) return;
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
label_80AA5DA0:
    ctx->pc = 0x80AA5DA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5DA0u)) return;
    // 80AA5DA0: bl      0x8045C750
    {
            ctx->lr = 0x80AA5DA4u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80AA5DA4:
    ctx->pc = 0x80AA5DA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5DA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80AA5DA4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA5DA8:
    ctx->pc = 0x80AA5DA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5DA8u)) return;
    // 80AA5DA8: li      r4, -128
    ctx->gpr[4] = (u32)(s32)(-128);

label_80AA5DAC:
    ctx->pc = 0x80AA5DACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5DACu)) return;
    // 80AA5DAC: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80AA5DB0:
    ctx->pc = 0x80AA5DB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5DB0u)) return;
    // 80AA5DB0: bl      0x80AA7054
    {
            ctx->lr = 0x80AA5DB4u;
            goto label_80AA7054;
    }

label_80AA5DB4:
    ctx->pc = 0x80AA5DB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5DB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80AA5DB4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA5DB8:
    ctx->pc = 0x80AA5DB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5DB8u)) return;
    // 80AA5DB8: li      r4, 76
    ctx->gpr[4] = (u32)(s32)(76);

label_80AA5DBC:
    ctx->pc = 0x80AA5DBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5DBCu)) return;
    // 80AA5DBC: li      r5, 3328
    ctx->gpr[5] = (u32)(s32)(3328);

label_80AA5DC0:
    ctx->pc = 0x80AA5DC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5DC0u)) return;
    // 80AA5DC0: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80AA5DC4:
    ctx->pc = 0x80AA5DC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5DC4u)) return;
    // 80AA5DC4: addi    r6, r6, -29696
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-29696);

label_80AA5DC8:
    ctx->pc = 0x80AA5DC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5DC8u)) return;
    // 80AA5DC8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80AA5DCC:
    ctx->pc = 0x80AA5DCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5DCCu)) return;
    // 80AA5DCC: bl      0x8045C7B4
    {
            ctx->lr = 0x80AA5DD0u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80AA5DD0:
    ctx->pc = 0x80AA5DD0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5DD0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80AA5DD0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA5DD4:
    ctx->pc = 0x80AA5DD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5DD4u)) return;
    // 80AA5DD4: li      r4, 76
    ctx->gpr[4] = (u32)(s32)(76);

label_80AA5DD8:
    ctx->pc = 0x80AA5DD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5DD8u)) return;
    // 80AA5DD8: lis     r5, -27646
    ctx->gpr[5] = ((u32)(s32)(-27646) << 16);

label_80AA5DDC:
    ctx->pc = 0x80AA5DDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5DDCu)) return;
    // 80AA5DDC: addi    r5, r5, 30864
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(30864);

label_80AA5DE0:
    ctx->pc = 0x80AA5DE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5DE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA5DE0: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA5DE0u)) return;
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
label_80AA5DE4:
    ctx->pc = 0x80AA5DE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5DE4u)) return;
    // 80AA5DE4: lis     r5, -27646
    ctx->gpr[5] = ((u32)(s32)(-27646) << 16);

label_80AA5DE8:
    ctx->pc = 0x80AA5DE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5DE8u)) return;
    // 80AA5DE8: addi    r5, r5, 30856
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(30856);

label_80AA5DEC:
    ctx->pc = 0x80AA5DECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5DECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA5DEC: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA5DECu)) return;
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
label_80AA5DF0:
    ctx->pc = 0x80AA5DF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5DF0u)) return;
    // 80AA5DF0: lis     r5, -27646
    ctx->gpr[5] = ((u32)(s32)(-27646) << 16);

label_80AA5DF4:
    ctx->pc = 0x80AA5DF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5DF4u)) return;
    // 80AA5DF4: addi    r5, r5, 30868
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(30868);

label_80AA5DF8:
    ctx->pc = 0x80AA5DF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5DF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA5DF8: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA5DF8u)) return;
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
label_80AA5DFC:
    ctx->pc = 0x80AA5DFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5DFCu)) return;
    // 80AA5DFC: bl      0x8045C750
    {
            ctx->lr = 0x80AA5E00u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80AA5E00:
    ctx->pc = 0x80AA5E00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5E00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA5E00: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AA5E04:
    ctx->pc = 0x80AA5E04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5E04u)) return;
    // 80AA5E04: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA5E08u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA5E08:
    ctx->pc = 0x80AA5E08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5E08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80AA5E08: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA5E0C:
    ctx->pc = 0x80AA5E0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5E0Cu)) return;
    // 80AA5E0C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AA5E10:
    ctx->pc = 0x80AA5E10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5E10u)) return;
    // 80AA5E10: li      r5, 100
    ctx->gpr[5] = (u32)(s32)(100);

label_80AA5E14:
    ctx->pc = 0x80AA5E14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5E14u)) return;
    // 80AA5E14: bl      0x80AA7054
    {
            ctx->lr = 0x80AA5E18u;
            goto label_80AA7054;
    }

label_80AA5E18:
    ctx->pc = 0x80AA5E18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5E18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA5E18: li      r3, 46
    ctx->gpr[3] = (u32)(s32)(46);

label_80AA5E1C:
    ctx->pc = 0x80AA5E1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5E1Cu)) return;
    // 80AA5E1C: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA5E20u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA5E20:
    ctx->pc = 0x80AA5E20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5E20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80AA5E20: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AA5E24:
    ctx->pc = 0x80AA5E24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5E24u)) return;
    // 80AA5E24: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_80AA5E28:
    ctx->pc = 0x80AA5E28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5E28u)) return;
    // 80AA5E28: lis     r5, -27646
    ctx->gpr[5] = ((u32)(s32)(-27646) << 16);

label_80AA5E2C:
    ctx->pc = 0x80AA5E2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5E2Cu)) return;
    // 80AA5E2C: addi    r5, r5, 30872
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(30872);

label_80AA5E30:
    ctx->pc = 0x80AA5E30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5E30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA5E30: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA5E30u)) return;
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
label_80AA5E34:
    ctx->pc = 0x80AA5E34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5E34u)) return;
    // 80AA5E34: lis     r5, -27646
    ctx->gpr[5] = ((u32)(s32)(-27646) << 16);

label_80AA5E38:
    ctx->pc = 0x80AA5E38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5E38u)) return;
    // 80AA5E38: addi    r5, r5, 30856
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(30856);

label_80AA5E3C:
    ctx->pc = 0x80AA5E3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5E3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA5E3C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA5E3Cu)) return;
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
label_80AA5E40:
    ctx->pc = 0x80AA5E40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5E40u)) return;
    // 80AA5E40: lis     r5, -27646
    ctx->gpr[5] = ((u32)(s32)(-27646) << 16);

label_80AA5E44:
    ctx->pc = 0x80AA5E44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5E44u)) return;
    // 80AA5E44: addi    r5, r5, 30876
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(30876);

label_80AA5E48:
    ctx->pc = 0x80AA5E48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5E48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA5E48: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA5E48u)) return;
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
label_80AA5E4C:
    ctx->pc = 0x80AA5E4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5E4Cu)) return;
    // 80AA5E4C: bl      0x8045C750
    {
            ctx->lr = 0x80AA5E50u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80AA5E50:
    ctx->pc = 0x80AA5E50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5E50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA5E50: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_80AA5E54:
    ctx->pc = 0x80AA5E54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5E54u)) return;
    // 80AA5E54: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA5E58u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA5E58:
    ctx->pc = 0x80AA5E58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5E58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA5E58: li      r3, 52
    ctx->gpr[3] = (u32)(s32)(52);

label_80AA5E5C:
    ctx->pc = 0x80AA5E5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5E5Cu)) return;
    // 80AA5E5C: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA5E60u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA5E60:
    ctx->pc = 0x80AA5E60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5E60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA5E60: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80AA5E64:
    ctx->pc = 0x80AA5E64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5E64u)) return;
    // 80AA5E64: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA5E68u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA5E68:
    ctx->pc = 0x80AA5E68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5E68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80AA5E68: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AA5E6C:
    ctx->pc = 0x80AA5E6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5E6Cu)) return;
    // 80AA5E6C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AA5E70:
    ctx->pc = 0x80AA5E70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5E70u)) return;
    // 80AA5E70: lis     r5, -27646
    ctx->gpr[5] = ((u32)(s32)(-27646) << 16);

label_80AA5E74:
    ctx->pc = 0x80AA5E74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5E74u)) return;
    // 80AA5E74: addi    r5, r5, 30880
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(30880);

label_80AA5E78:
    ctx->pc = 0x80AA5E78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5E78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA5E78: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA5E78u)) return;
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
label_80AA5E7C:
    ctx->pc = 0x80AA5E7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5E7Cu)) return;
    // 80AA5E7C: lis     r5, -27646
    ctx->gpr[5] = ((u32)(s32)(-27646) << 16);

label_80AA5E80:
    ctx->pc = 0x80AA5E80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5E80u)) return;
    // 80AA5E80: addi    r5, r5, 30884
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(30884);

label_80AA5E84:
    ctx->pc = 0x80AA5E84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5E84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA5E84: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA5E84u)) return;
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
label_80AA5E88:
    ctx->pc = 0x80AA5E88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5E88u)) return;
    // 80AA5E88: lis     r5, -27646
    ctx->gpr[5] = ((u32)(s32)(-27646) << 16);

label_80AA5E8C:
    ctx->pc = 0x80AA5E8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5E8Cu)) return;
    // 80AA5E8C: addi    r5, r5, 30888
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(30888);

label_80AA5E90:
    ctx->pc = 0x80AA5E90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5E90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA5E90: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA5E90u)) return;
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
label_80AA5E94:
    ctx->pc = 0x80AA5E94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5E94u)) return;
    // 80AA5E94: bl      0x8045C750
    {
            ctx->lr = 0x80AA5E98u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80AA5E98:
    ctx->pc = 0x80AA5E98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 14u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5E98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 14u : 1u;
    // 80AA5E98: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AA5E9C:
    ctx->pc = 0x80AA5E9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5E9Cu)) return;
    // 80AA5E9C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80AA5EA0:
    ctx->pc = 0x80AA5EA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5EA0u)) return;
    // 80AA5EA0: lis     r5, -27644
    ctx->gpr[5] = ((u32)(s32)(-27644) << 16);

label_80AA5EA4:
    ctx->pc = 0x80AA5EA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5EA4u)) return;
    // 80AA5EA4: addi    r5, r5, -18460
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-18460);

label_80AA5EA8:
    ctx->pc = 0x80AA5EA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5EA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80AA5EA8: lwz     r5, 0(r5)
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
label_80AA5EAC:
    ctx->pc = 0x80AA5EACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5EACu)) return;
    // 80AA5EAC: lis     r6, -27646
    ctx->gpr[6] = ((u32)(s32)(-27646) << 16);

label_80AA5EB0:
    ctx->pc = 0x80AA5EB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5EB0u)) return;
    // 80AA5EB0: addi    r6, r6, 30608
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(30608);

label_80AA5EB4:
    ctx->pc = 0x80AA5EB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5EB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA5EB4: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80AA5EB4u)) return;
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
label_80AA5EB8:
    ctx->pc = 0x80AA5EB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5EB8u)) return;
    // 80AA5EB8: lis     r6, -27646
    ctx->gpr[6] = ((u32)(s32)(-27646) << 16);

label_80AA5EBC:
    ctx->pc = 0x80AA5EBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5EBCu)) return;
    // 80AA5EBC: addi    r6, r6, 30596
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(30596);

label_80AA5EC0:
    ctx->pc = 0x80AA5EC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5EC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AA5EC0: lfs     f2, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80AA5EC0u)) return;
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
label_80AA5EC4:
    ctx->pc = 0x80AA5EC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5EC4u)) return;
    // 80AA5EC4: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80AA5EC4u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80AA5EC8:
    ctx->pc = 0x80AA5EC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5EC8u)) return;
    // 80AA5EC8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80AA5ECC:
    ctx->pc = 0x80AA5ECCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5ECCu)) return;
    // 80AA5ECC: bl      0x8045C3C0
    {
            ctx->lr = 0x80AA5ED0u;
            ctx->pc = 0x8045C3C0u;
            return;
    }

label_80AA5ED0:
    ctx->pc = 0x80AA5ED0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5ED0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80AA5ED0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA5ED4:
    ctx->pc = 0x80AA5ED4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5ED4u)) return;
    // 80AA5ED4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AA5ED8:
    ctx->pc = 0x80AA5ED8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5ED8u)) return;
    // 80AA5ED8: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80AA5EDC:
    ctx->pc = 0x80AA5EDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5EDCu)) return;
    // 80AA5EDC: bl      0x80AA7004
    {
            ctx->lr = 0x80AA5EE0u;
            goto label_80AA7004;
    }

label_80AA5EE0:
    ctx->pc = 0x80AA5EE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5EE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA5EE0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA5EE4:
    ctx->pc = 0x80AA5EE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5EE4u)) return;
    // 80AA5EE4: bl      0x8045F220
    {
            ctx->lr = 0x80AA5EE8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA5EE8:
    ctx->pc = 0x80AA5EE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5EE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA5EE8: bl      0x8045EB8C
    {
            ctx->lr = 0x80AA5EECu;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80AA5EEC:
    ctx->pc = 0x80AA5EECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5EECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA5EEC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA5EF0:
    ctx->pc = 0x80AA5EF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5EF0u)) return;
    // 80AA5EF0: bl      0x8045F220
    {
            ctx->lr = 0x80AA5EF4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA5EF4:
    ctx->pc = 0x80AA5EF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5EF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80AA5EF4: lis     r4, -28587
    ctx->gpr[4] = ((u32)(s32)(-28587) << 16);

label_80AA5EF8:
    ctx->pc = 0x80AA5EF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5EF8u)) return;
    // 80AA5EF8: addi    r4, r4, 8236
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8236);

label_80AA5EFC:
    ctx->pc = 0x80AA5EFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5EFCu)) return;
    // 80AA5EFC: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80AA5F00:
    ctx->pc = 0x80AA5F00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5F00u)) return;
    // 80AA5F00: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80AA5F04:
    ctx->pc = 0x80AA5F04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5F04u)) return;
    // 80AA5F04: lis     r6, -27646
    ctx->gpr[6] = ((u32)(s32)(-27646) << 16);

label_80AA5F08:
    ctx->pc = 0x80AA5F08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5F08u)) return;
    // 80AA5F08: addi    r6, r6, 30596
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(30596);

label_80AA5F0C:
    ctx->pc = 0x80AA5F0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5F0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AA5F0C: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80AA5F0Cu)) return;
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
label_80AA5F10:
    ctx->pc = 0x80AA5F10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5F10u)) return;
    // 80AA5F10: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80AA5F14:
    ctx->pc = 0x80AA5F14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5F14u)) return;
    // 80AA5F14: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80AA5F18:
    ctx->pc = 0x80AA5F18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5F18u)) return;
    // 80AA5F18: bl      0x8045EBE4
    {
            ctx->lr = 0x80AA5F1Cu;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80AA5F1C:
    ctx->pc = 0x80AA5F1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5F1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA5F1C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA5F20:
    ctx->pc = 0x80AA5F20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5F20u)) return;
    // 80AA5F20: bl      0x8045F220
    {
            ctx->lr = 0x80AA5F24u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA5F24:
    ctx->pc = 0x80AA5F24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5F24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AA5F24: lis     r4, -27646
    ctx->gpr[4] = ((u32)(s32)(-27646) << 16);

label_80AA5F28:
    ctx->pc = 0x80AA5F28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5F28u)) return;
    // 80AA5F28: addi    r4, r4, 32236
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(32236);

label_80AA5F2C:
    ctx->pc = 0x80AA5F2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5F2Cu)) return;
    // 80AA5F2C: bl      0x8045C060
    {
            ctx->lr = 0x80AA5F30u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80AA5F30:
    ctx->pc = 0x80AA5F30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5F30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80AA5F30: lis     r3, -27644
    ctx->gpr[3] = ((u32)(s32)(-27644) << 16);

label_80AA5F34:
    ctx->pc = 0x80AA5F34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5F34u)) return;
    // 80AA5F34: addi    r3, r3, -18460
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-18460);

label_80AA5F38:
    ctx->pc = 0x80AA5F38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5F38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA5F38: lwz     r3, 0(r3)
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
label_80AA5F3C:
    ctx->pc = 0x80AA5F3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5F3Cu)) return;
    // 80AA5F3C: bl      0x8045C360
    {
            ctx->lr = 0x80AA5F40u;
            ctx->pc = 0x8045C360u;
            return;
    }

label_80AA5F40:
    ctx->pc = 0x80AA5F40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5F40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA5F40: li      r3, 414
    ctx->gpr[3] = (u32)(s32)(414);

label_80AA5F44:
    ctx->pc = 0x80AA5F44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5F44u)) return;
    // 80AA5F44: bl      0x8045BFA0
    {
            ctx->lr = 0x80AA5F48u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80AA5F48:
    ctx->pc = 0x80AA5F48u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5F48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80AA5F48: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80AA5F4C:
    ctx->pc = 0x80AA5F4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5F4Cu)) return;
    // 80AA5F4C: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80AA5F50:
    ctx->pc = 0x80AA5F50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5F50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA5F50: lwz     r0, 0(r3)
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
label_80AA5F54:
    ctx->pc = 0x80AA5F54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5F54u)) return;
    // 80AA5F54: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80AA5F58:
    ctx->pc = 0x80AA5F58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5F58u)) return;
    // 80AA5F58: lis     r3, -27646
    ctx->gpr[3] = ((u32)(s32)(-27646) << 16);

label_80AA5F5C:
    ctx->pc = 0x80AA5F5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5F5Cu)) return;
    // 80AA5F5C: addi    r3, r3, 31652
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(31652);

label_80AA5F60:
    ctx->pc = 0x80AA5F60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5F60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA5F60: lwzx    r3, r3, r0
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
label_80AA5F64:
    ctx->pc = 0x80AA5F64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5F64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA5F64: lwz     r3, 4(r3)
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
label_80AA5F68:
    ctx->pc = 0x80AA5F68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5F68u)) return;
    // 80AA5F68: bl      0x8045F6FC
    {
            ctx->lr = 0x80AA5F6Cu;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80AA5F6C:
    ctx->pc = 0x80AA5F6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5F6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA5F6C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA5F70:
    ctx->pc = 0x80AA5F70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5F70u)) return;
    // 80AA5F70: bl      0x8045F220
    {
            ctx->lr = 0x80AA5F74u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA5F74:
    ctx->pc = 0x80AA5F74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5F74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA5F74: bl      0x8045E760
    {
            ctx->lr = 0x80AA5F78u;
            ctx->pc = 0x8045E760u;
            return;
    }

label_80AA5F78:
    ctx->pc = 0x80AA5F78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5F78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA5F78: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA5F7C:
    ctx->pc = 0x80AA5F7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5F7Cu)) return;
    // 80AA5F7C: bl      0x8045F220
    {
            ctx->lr = 0x80AA5F80u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA5F80:
    ctx->pc = 0x80AA5F80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5F80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80AA5F80: lis     r4, -27646
    ctx->gpr[4] = ((u32)(s32)(-27646) << 16);

label_80AA5F84:
    ctx->pc = 0x80AA5F84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5F84u)) return;
    // 80AA5F84: addi    r4, r4, 30892
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(30892);

label_80AA5F88:
    ctx->pc = 0x80AA5F88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5F88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA5F88: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AA5F88u)) return;
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
label_80AA5F8C:
    ctx->pc = 0x80AA5F8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5F8Cu)) return;
    // 80AA5F8C: lis     r4, -27646
    ctx->gpr[4] = ((u32)(s32)(-27646) << 16);

label_80AA5F90:
    ctx->pc = 0x80AA5F90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5F90u)) return;
    // 80AA5F90: addi    r4, r4, 30896
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(30896);

label_80AA5F94:
    ctx->pc = 0x80AA5F94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5F94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA5F94: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AA5F94u)) return;
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
label_80AA5F98:
    ctx->pc = 0x80AA5F98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5F98u)) return;
    // 80AA5F98: lis     r4, -27646
    ctx->gpr[4] = ((u32)(s32)(-27646) << 16);

label_80AA5F9C:
    ctx->pc = 0x80AA5F9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5F9Cu)) return;
    // 80AA5F9C: addi    r4, r4, 30900
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(30900);

label_80AA5FA0:
    ctx->pc = 0x80AA5FA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5FA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA5FA0: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AA5FA0u)) return;
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
label_80AA5FA4:
    ctx->pc = 0x80AA5FA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5FA4u)) return;
    // 80AA5FA4: bl      0x8045E70C
    {
            ctx->lr = 0x80AA5FA8u;
            ctx->pc = 0x8045E70Cu;
            return;
    }

label_80AA5FA8:
    ctx->pc = 0x80AA5FA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5FA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA5FA8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA5FAC:
    ctx->pc = 0x80AA5FACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5FACu)) return;
    // 80AA5FAC: bl      0x8045F220
    {
            ctx->lr = 0x80AA5FB0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA5FB0:
    ctx->pc = 0x80AA5FB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5FB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AA5FB0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AA5FB4:
    ctx->pc = 0x80AA5FB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5FB4u)) return;
    // 80AA5FB4: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80AA5FB8:
    ctx->pc = 0x80AA5FB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5FB8u)) return;
    // 80AA5FB8: addi    r5, r5, -6656
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-6656);

label_80AA5FBC:
    ctx->pc = 0x80AA5FBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5FBCu)) return;
    // 80AA5FBC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80AA5FC0:
    ctx->pc = 0x80AA5FC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5FC0u)) return;
    // 80AA5FC0: bl      0x8045EEA8
    {
            ctx->lr = 0x80AA5FC4u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80AA5FC4:
    ctx->pc = 0x80AA5FC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5FC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA5FC4: li      r3, 33
    ctx->gpr[3] = (u32)(s32)(33);

label_80AA5FC8:
    ctx->pc = 0x80AA5FC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5FC8u)) return;
    // 80AA5FC8: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA5FCCu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA5FCC:
    ctx->pc = 0x80AA5FCCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5FCCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA5FCC: bl      0x8045C3AC
    {
            ctx->lr = 0x80AA5FD0u;
            ctx->pc = 0x8045C3ACu;
            return;
    }

label_80AA5FD0:
    ctx->pc = 0x80AA5FD0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5FD0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80AA5FD0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AA5FD4:
    ctx->pc = 0x80AA5FD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5FD4u)) return;
    // 80AA5FD4: li      r4, 28
    ctx->gpr[4] = (u32)(s32)(28);

label_80AA5FD8:
    ctx->pc = 0x80AA5FD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5FD8u)) return;
    // 80AA5FD8: li      r5, 1280
    ctx->gpr[5] = (u32)(s32)(1280);

label_80AA5FDC:
    ctx->pc = 0x80AA5FDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5FDCu)) return;
    // 80AA5FDC: li      r6, 22784
    ctx->gpr[6] = (u32)(s32)(22784);

label_80AA5FE0:
    ctx->pc = 0x80AA5FE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5FE0u)) return;
    // 80AA5FE0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80AA5FE4:
    ctx->pc = 0x80AA5FE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5FE4u)) return;
    // 80AA5FE4: bl      0x8045C7B4
    {
            ctx->lr = 0x80AA5FE8u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80AA5FE8:
    ctx->pc = 0x80AA5FE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5FE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA5FE8: li      r3, 23
    ctx->gpr[3] = (u32)(s32)(23);

label_80AA5FEC:
    ctx->pc = 0x80AA5FECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5FECu)) return;
    // 80AA5FEC: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA5FF0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA5FF0:
    ctx->pc = 0x80AA5FF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5FF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA5FF0: bl      0x8045F32C
    {
            ctx->lr = 0x80AA5FF4u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80AA5FF4:
    ctx->pc = 0x80AA5FF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5FF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA5FF4: bl      0x8045C4A4
    {
            ctx->lr = 0x80AA5FF8u;
            ctx->pc = 0x8045C4A4u;
            return;
    }

label_80AA5FF8:
    ctx->pc = 0x80AA5FF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA5FF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80AA5FF8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA5FFC:
    ctx->pc = 0x80AA5FFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA5FFCu)) return;
    // 80AA5FFC: li      r4, -10
    ctx->gpr[4] = (u32)(s32)(-10);

label_80AA6000:
    ctx->pc = 0x80AA6000u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6000u)) return;
    // 80AA6000: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80AA6004:
    ctx->pc = 0x80AA6004u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6004u)) return;
    // 80AA6004: bl      0x80AA7004
    {
            ctx->lr = 0x80AA6008u;
            goto label_80AA7004;
    }

label_80AA6008:
    ctx->pc = 0x80AA6008u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6008u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80AA6008: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AA600C:
    ctx->pc = 0x80AA600Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA600Cu)) return;
    // 80AA600C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AA6010:
    ctx->pc = 0x80AA6010u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6010u)) return;
    // 80AA6010: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80AA6014:
    ctx->pc = 0x80AA6014u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6014u)) return;
    // 80AA6014: addi    r5, r6, -512
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-512);

label_80AA6018:
    ctx->pc = 0x80AA6018u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6018u)) return;
    // 80AA6018: addi    r6, r6, -9228
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-9228);

label_80AA601C:
    ctx->pc = 0x80AA601Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA601Cu)) return;
    // 80AA601C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80AA6020:
    ctx->pc = 0x80AA6020u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6020u)) return;
    // 80AA6020: bl      0x8045C7B4
    {
            ctx->lr = 0x80AA6024u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80AA6024:
    ctx->pc = 0x80AA6024u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6024u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80AA6024: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AA6028:
    ctx->pc = 0x80AA6028u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6028u)) return;
    // 80AA6028: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AA602C:
    ctx->pc = 0x80AA602Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA602Cu)) return;
    // 80AA602C: lis     r5, -27646
    ctx->gpr[5] = ((u32)(s32)(-27646) << 16);

label_80AA6030:
    ctx->pc = 0x80AA6030u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6030u)) return;
    // 80AA6030: addi    r5, r5, 30904
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(30904);

label_80AA6034:
    ctx->pc = 0x80AA6034u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6034u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA6034: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA6034u)) return;
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
label_80AA6038:
    ctx->pc = 0x80AA6038u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6038u)) return;
    // 80AA6038: lis     r5, -27646
    ctx->gpr[5] = ((u32)(s32)(-27646) << 16);

label_80AA603C:
    ctx->pc = 0x80AA603Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA603Cu)) return;
    // 80AA603C: addi    r5, r5, 30908
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(30908);

label_80AA6040:
    ctx->pc = 0x80AA6040u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6040u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA6040: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA6040u)) return;
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
label_80AA6044:
    ctx->pc = 0x80AA6044u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6044u)) return;
    // 80AA6044: lis     r5, -27646
    ctx->gpr[5] = ((u32)(s32)(-27646) << 16);

label_80AA6048:
    ctx->pc = 0x80AA6048u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6048u)) return;
    // 80AA6048: addi    r5, r5, 30912
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(30912);

label_80AA604C:
    ctx->pc = 0x80AA604Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA604Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA604C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA604Cu)) return;
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
label_80AA6050:
    ctx->pc = 0x80AA6050u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6050u)) return;
    // 80AA6050: bl      0x8045C750
    {
            ctx->lr = 0x80AA6054u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80AA6054:
    ctx->pc = 0x80AA6054u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6054u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80AA6054: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA6058:
    ctx->pc = 0x80AA6058u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6058u)) return;
    // 80AA6058: li      r4, 50
    ctx->gpr[4] = (u32)(s32)(50);

label_80AA605C:
    ctx->pc = 0x80AA605Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA605Cu)) return;
    // 80AA605C: li      r5, 3840
    ctx->gpr[5] = (u32)(s32)(3840);

label_80AA6060:
    ctx->pc = 0x80AA6060u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6060u)) return;
    // 80AA6060: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80AA6064:
    ctx->pc = 0x80AA6064u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6064u)) return;
    // 80AA6064: addi    r6, r6, -9228
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-9228);

label_80AA6068:
    ctx->pc = 0x80AA6068u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6068u)) return;
    // 80AA6068: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80AA606C:
    ctx->pc = 0x80AA606Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA606Cu)) return;
    // 80AA606C: bl      0x8045C7B4
    {
            ctx->lr = 0x80AA6070u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80AA6070:
    ctx->pc = 0x80AA6070u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6070u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80AA6070: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA6074:
    ctx->pc = 0x80AA6074u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6074u)) return;
    // 80AA6074: li      r4, 50
    ctx->gpr[4] = (u32)(s32)(50);

label_80AA6078:
    ctx->pc = 0x80AA6078u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6078u)) return;
    // 80AA6078: lis     r5, -27646
    ctx->gpr[5] = ((u32)(s32)(-27646) << 16);

label_80AA607C:
    ctx->pc = 0x80AA607Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA607Cu)) return;
    // 80AA607C: addi    r5, r5, 30916
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(30916);

label_80AA6080:
    ctx->pc = 0x80AA6080u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6080u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA6080: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA6080u)) return;
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
label_80AA6084:
    ctx->pc = 0x80AA6084u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6084u)) return;
    // 80AA6084: lis     r5, -27646
    ctx->gpr[5] = ((u32)(s32)(-27646) << 16);

label_80AA6088:
    ctx->pc = 0x80AA6088u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6088u)) return;
    // 80AA6088: addi    r5, r5, 30920
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(30920);

label_80AA608C:
    ctx->pc = 0x80AA608Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA608Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA608C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA608Cu)) return;
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
label_80AA6090:
    ctx->pc = 0x80AA6090u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6090u)) return;
    // 80AA6090: lis     r5, -27646
    ctx->gpr[5] = ((u32)(s32)(-27646) << 16);

label_80AA6094:
    ctx->pc = 0x80AA6094u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6094u)) return;
    // 80AA6094: addi    r5, r5, 30924
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(30924);

label_80AA6098:
    ctx->pc = 0x80AA6098u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6098u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA6098: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA6098u)) return;
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
label_80AA609C:
    ctx->pc = 0x80AA609Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA609Cu)) return;
    // 80AA609C: bl      0x8045C750
    {
            ctx->lr = 0x80AA60A0u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80AA60A0:
    ctx->pc = 0x80AA60A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA60A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA60A0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA60A4:
    ctx->pc = 0x80AA60A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA60A4u)) return;
    // 80AA60A4: bl      0x8045F220
    {
            ctx->lr = 0x80AA60A8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA60A8:
    ctx->pc = 0x80AA60A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA60A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA60A8: bl      0x8045C034
    {
            ctx->lr = 0x80AA60ACu;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80AA60AC:
    ctx->pc = 0x80AA60ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA60ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA60AC: li      r3, 415
    ctx->gpr[3] = (u32)(s32)(415);

label_80AA60B0:
    ctx->pc = 0x80AA60B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA60B0u)) return;
    // 80AA60B0: bl      0x8045BFA0
    {
            ctx->lr = 0x80AA60B4u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80AA60B4:
    ctx->pc = 0x80AA60B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA60B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AA60B4: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80AA60B8:
    ctx->pc = 0x80AA60B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA60B8u)) return;
    // 80AA60B8: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80AA60BC:
    ctx->pc = 0x80AA60BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA60BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA60BC: lwz     r0, 0(r3)
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
label_80AA60C0:
    ctx->pc = 0x80AA60C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA60C0u)) return;
    // 80AA60C0: cmpwi   r0, 0
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

label_80AA60C4:
    ctx->pc = 0x80AA60C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA60C4u)) return;
    // 80AA60C4: bc    4, 2, 0x80AA60DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AA60DC;
        }
    }

label_80AA60C8:
    ctx->pc = 0x80AA60C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA60C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA60C8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA60CC:
    ctx->pc = 0x80AA60CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA60CCu)) return;
    // 80AA60CC: bl      0x8045F220
    {
            ctx->lr = 0x80AA60D0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA60D0:
    ctx->pc = 0x80AA60D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA60D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AA60D0: lis     r4, -27646
    ctx->gpr[4] = ((u32)(s32)(-27646) << 16);

label_80AA60D4:
    ctx->pc = 0x80AA60D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA60D4u)) return;
    // 80AA60D4: addi    r4, r4, 32240
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(32240);

label_80AA60D8:
    ctx->pc = 0x80AA60D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA60D8u)) return;
    // 80AA60D8: bl      0x8045C060
    {
            ctx->lr = 0x80AA60DCu;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80AA60DC:
    ctx->pc = 0x80AA60DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA60DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80AA60DC: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80AA60E0:
    ctx->pc = 0x80AA60E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA60E0u)) return;
    // 80AA60E0: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80AA60E4:
    ctx->pc = 0x80AA60E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA60E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA60E4: lwz     r0, 0(r3)
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
label_80AA60E8:
    ctx->pc = 0x80AA60E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA60E8u)) return;
    // 80AA60E8: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80AA60EC:
    ctx->pc = 0x80AA60ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA60ECu)) return;
    // 80AA60EC: lis     r3, -27646
    ctx->gpr[3] = ((u32)(s32)(-27646) << 16);

label_80AA60F0:
    ctx->pc = 0x80AA60F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA60F0u)) return;
    // 80AA60F0: addi    r3, r3, 31652
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(31652);

label_80AA60F4:
    ctx->pc = 0x80AA60F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA60F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA60F4: lwzx    r3, r3, r0
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
label_80AA60F8:
    ctx->pc = 0x80AA60F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA60F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA60F8: lwz     r3, 8(r3)
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
label_80AA60FC:
    ctx->pc = 0x80AA60FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA60FCu)) return;
    // 80AA60FC: bl      0x8045F6FC
    {
            ctx->lr = 0x80AA6100u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80AA6100:
    ctx->pc = 0x80AA6100u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6100u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AA6100: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80AA6104:
    ctx->pc = 0x80AA6104u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6104u)) return;
    // 80AA6104: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80AA6108:
    ctx->pc = 0x80AA6108u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6108u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA6108: lwz     r0, 0(r3)
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
label_80AA610C:
    ctx->pc = 0x80AA610Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA610Cu)) return;
    // 80AA610C: cmpwi   r0, 1
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

label_80AA6110:
    ctx->pc = 0x80AA6110u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6110u)) return;
    // 80AA6110: bc    4, 2, 0x80AA6128
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AA6128;
        }
    }

label_80AA6114:
    ctx->pc = 0x80AA6114u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6114u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA6114: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA6118:
    ctx->pc = 0x80AA6118u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6118u)) return;
    // 80AA6118: bl      0x8045F220
    {
            ctx->lr = 0x80AA611Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA611C:
    ctx->pc = 0x80AA611Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA611Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AA611C: lis     r4, -27646
    ctx->gpr[4] = ((u32)(s32)(-27646) << 16);

label_80AA6120:
    ctx->pc = 0x80AA6120u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6120u)) return;
    // 80AA6120: addi    r4, r4, 32264
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(32264);

label_80AA6124:
    ctx->pc = 0x80AA6124u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6124u)) return;
    // 80AA6124: bl      0x8045C060
    {
            ctx->lr = 0x80AA6128u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80AA6128:
    ctx->pc = 0x80AA6128u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6128u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA6128: bl      0x8045BFF4
    {
            ctx->lr = 0x80AA612Cu;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80AA612C:
    ctx->pc = 0x80AA612Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA612Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA612C: bl      0x8045F32C
    {
            ctx->lr = 0x80AA6130u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80AA6130:
    ctx->pc = 0x80AA6130u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6130u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AA6130: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80AA6134:
    ctx->pc = 0x80AA6134u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6134u)) return;
    // 80AA6134: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80AA6138:
    ctx->pc = 0x80AA6138u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6138u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA6138: lwz     r0, 0(r3)
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
label_80AA613C:
    ctx->pc = 0x80AA613Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA613Cu)) return;
    // 80AA613C: cmpwi   r0, 0
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

label_80AA6140:
    ctx->pc = 0x80AA6140u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6140u)) return;
    // 80AA6140: bc    4, 2, 0x80AA6150
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AA6150;
        }
    }

label_80AA6144:
    ctx->pc = 0x80AA6144u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6144u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA6144: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA6148:
    ctx->pc = 0x80AA6148u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6148u)) return;
    // 80AA6148: bl      0x8045F220
    {
            ctx->lr = 0x80AA614Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA614C:
    ctx->pc = 0x80AA614Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA614Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA614C: bl      0x8045C034
    {
            ctx->lr = 0x80AA6150u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80AA6150:
    ctx->pc = 0x80AA6150u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6150u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AA6150: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80AA6154:
    ctx->pc = 0x80AA6154u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6154u)) return;
    // 80AA6154: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80AA6158:
    ctx->pc = 0x80AA6158u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6158u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA6158: lwz     r0, 0(r3)
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
label_80AA615C:
    ctx->pc = 0x80AA615Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA615Cu)) return;
    // 80AA615C: cmpwi   r0, 1
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

label_80AA6160:
    ctx->pc = 0x80AA6160u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6160u)) return;
    // 80AA6160: bc    4, 2, 0x80AA6170
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AA6170;
        }
    }

label_80AA6164:
    ctx->pc = 0x80AA6164u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6164u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA6164: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA6168:
    ctx->pc = 0x80AA6168u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6168u)) return;
    // 80AA6168: bl      0x8045F220
    {
            ctx->lr = 0x80AA616Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA616C:
    ctx->pc = 0x80AA616Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA616Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA616C: bl      0x8045C034
    {
            ctx->lr = 0x80AA6170u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80AA6170:
    ctx->pc = 0x80AA6170u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6170u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80AA6170: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AA6174:
    ctx->pc = 0x80AA6174u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6174u)) return;
    // 80AA6174: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AA6178:
    ctx->pc = 0x80AA6178u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6178u)) return;
    // 80AA6178: li      r5, 3072
    ctx->gpr[5] = (u32)(s32)(3072);

label_80AA617C:
    ctx->pc = 0x80AA617Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA617Cu)) return;
    // 80AA617C: li      r6, 23552
    ctx->gpr[6] = (u32)(s32)(23552);

label_80AA6180:
    ctx->pc = 0x80AA6180u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6180u)) return;
    // 80AA6180: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80AA6184:
    ctx->pc = 0x80AA6184u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6184u)) return;
    // 80AA6184: bl      0x8045C7B4
    {
            ctx->lr = 0x80AA6188u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80AA6188:
    ctx->pc = 0x80AA6188u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6188u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80AA6188: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AA618C:
    ctx->pc = 0x80AA618Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA618Cu)) return;
    // 80AA618C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AA6190:
    ctx->pc = 0x80AA6190u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6190u)) return;
    // 80AA6190: lis     r5, -27646
    ctx->gpr[5] = ((u32)(s32)(-27646) << 16);

label_80AA6194:
    ctx->pc = 0x80AA6194u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6194u)) return;
    // 80AA6194: addi    r5, r5, 30928
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(30928);

label_80AA6198:
    ctx->pc = 0x80AA6198u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6198u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA6198: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA6198u)) return;
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
label_80AA619C:
    ctx->pc = 0x80AA619Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA619Cu)) return;
    // 80AA619C: lis     r5, -27646
    ctx->gpr[5] = ((u32)(s32)(-27646) << 16);

label_80AA61A0:
    ctx->pc = 0x80AA61A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA61A0u)) return;
    // 80AA61A0: addi    r5, r5, 30932
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(30932);

label_80AA61A4:
    ctx->pc = 0x80AA61A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA61A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA61A4: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA61A4u)) return;
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
label_80AA61A8:
    ctx->pc = 0x80AA61A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA61A8u)) return;
    // 80AA61A8: lis     r5, -27646
    ctx->gpr[5] = ((u32)(s32)(-27646) << 16);

label_80AA61AC:
    ctx->pc = 0x80AA61ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA61ACu)) return;
    // 80AA61AC: addi    r5, r5, 30936
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(30936);

label_80AA61B0:
    ctx->pc = 0x80AA61B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA61B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA61B0: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA61B0u)) return;
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
label_80AA61B4:
    ctx->pc = 0x80AA61B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA61B4u)) return;
    // 80AA61B4: bl      0x8045C750
    {
            ctx->lr = 0x80AA61B8u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80AA61B8:
    ctx->pc = 0x80AA61B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA61B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80AA61B8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA61BC:
    ctx->pc = 0x80AA61BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA61BCu)) return;
    // 80AA61BC: li      r4, -70
    ctx->gpr[4] = (u32)(s32)(-70);

label_80AA61C0:
    ctx->pc = 0x80AA61C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA61C0u)) return;
    // 80AA61C0: li      r5, 120
    ctx->gpr[5] = (u32)(s32)(120);

label_80AA61C4:
    ctx->pc = 0x80AA61C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA61C4u)) return;
    // 80AA61C4: bl      0x80AA7004
    {
            ctx->lr = 0x80AA61C8u;
            goto label_80AA7004;
    }

label_80AA61C8:
    ctx->pc = 0x80AA61C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA61C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80AA61C8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA61CC:
    ctx->pc = 0x80AA61CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA61CCu)) return;
    // 80AA61CC: li      r4, 110
    ctx->gpr[4] = (u32)(s32)(110);

label_80AA61D0:
    ctx->pc = 0x80AA61D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA61D0u)) return;
    // 80AA61D0: li      r5, 3072
    ctx->gpr[5] = (u32)(s32)(3072);

label_80AA61D4:
    ctx->pc = 0x80AA61D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA61D4u)) return;
    // 80AA61D4: li      r6, 23552
    ctx->gpr[6] = (u32)(s32)(23552);

label_80AA61D8:
    ctx->pc = 0x80AA61D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA61D8u)) return;
    // 80AA61D8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80AA61DC:
    ctx->pc = 0x80AA61DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA61DCu)) return;
    // 80AA61DC: bl      0x8045C7B4
    {
            ctx->lr = 0x80AA61E0u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80AA61E0:
    ctx->pc = 0x80AA61E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA61E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80AA61E0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA61E4:
    ctx->pc = 0x80AA61E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA61E4u)) return;
    // 80AA61E4: li      r4, 110
    ctx->gpr[4] = (u32)(s32)(110);

label_80AA61E8:
    ctx->pc = 0x80AA61E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA61E8u)) return;
    // 80AA61E8: lis     r5, -27646
    ctx->gpr[5] = ((u32)(s32)(-27646) << 16);

label_80AA61EC:
    ctx->pc = 0x80AA61ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA61ECu)) return;
    // 80AA61EC: addi    r5, r5, 30940
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(30940);

label_80AA61F0:
    ctx->pc = 0x80AA61F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA61F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA61F0: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA61F0u)) return;
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
label_80AA61F4:
    ctx->pc = 0x80AA61F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA61F4u)) return;
    // 80AA61F4: lis     r5, -27646
    ctx->gpr[5] = ((u32)(s32)(-27646) << 16);

label_80AA61F8:
    ctx->pc = 0x80AA61F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA61F8u)) return;
    // 80AA61F8: addi    r5, r5, 30944
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(30944);

label_80AA61FC:
    ctx->pc = 0x80AA61FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA61FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA61FC: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA61FCu)) return;
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
label_80AA6200:
    ctx->pc = 0x80AA6200u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6200u)) return;
    // 80AA6200: lis     r5, -27646
    ctx->gpr[5] = ((u32)(s32)(-27646) << 16);

label_80AA6204:
    ctx->pc = 0x80AA6204u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6204u)) return;
    // 80AA6204: addi    r5, r5, 30948
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(30948);

label_80AA6208:
    ctx->pc = 0x80AA6208u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6208u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA6208: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA6208u)) return;
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
label_80AA620C:
    ctx->pc = 0x80AA620Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA620Cu)) return;
    // 80AA620C: bl      0x8045C750
    {
            ctx->lr = 0x80AA6210u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80AA6210:
    ctx->pc = 0x80AA6210u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6210u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA6210: li      r3, 105
    ctx->gpr[3] = (u32)(s32)(105);

label_80AA6214:
    ctx->pc = 0x80AA6214u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6214u)) return;
    // 80AA6214: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA6218u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA6218:
    ctx->pc = 0x80AA6218u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6218u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA6218: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA621C:
    ctx->pc = 0x80AA621Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA621Cu)) return;
    // 80AA621C: bl      0x8045F220
    {
            ctx->lr = 0x80AA6220u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA6220:
    ctx->pc = 0x80AA6220u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6220u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA6220: bl      0x8045E760
    {
            ctx->lr = 0x80AA6224u;
            ctx->pc = 0x8045E760u;
            return;
    }

label_80AA6224:
    ctx->pc = 0x80AA6224u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6224u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA6224: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA6228:
    ctx->pc = 0x80AA6228u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6228u)) return;
    // 80AA6228: bl      0x8045F220
    {
            ctx->lr = 0x80AA622Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA622C:
    ctx->pc = 0x80AA622Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA622Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80AA622C: lis     r4, -28582
    ctx->gpr[4] = ((u32)(s32)(-28582) << 16);

label_80AA6230:
    ctx->pc = 0x80AA6230u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6230u)) return;
    // 80AA6230: addi    r4, r4, -1616
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1616);

label_80AA6234:
    ctx->pc = 0x80AA6234u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6234u)) return;
    // 80AA6234: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80AA6238:
    ctx->pc = 0x80AA6238u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6238u)) return;
    // 80AA6238: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80AA623C:
    ctx->pc = 0x80AA623Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA623Cu)) return;
    // 80AA623C: lis     r6, -27646
    ctx->gpr[6] = ((u32)(s32)(-27646) << 16);

label_80AA6240:
    ctx->pc = 0x80AA6240u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6240u)) return;
    // 80AA6240: addi    r6, r6, 30592
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(30592);

label_80AA6244:
    ctx->pc = 0x80AA6244u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6244u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AA6244: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80AA6244u)) return;
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
label_80AA6248:
    ctx->pc = 0x80AA6248u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6248u)) return;
    // 80AA6248: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80AA624C:
    ctx->pc = 0x80AA624Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA624Cu)) return;
    // 80AA624C: li      r7, 6
    ctx->gpr[7] = (u32)(s32)(6);

label_80AA6250:
    ctx->pc = 0x80AA6250u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6250u)) return;
    // 80AA6250: bl      0x8045EBE4
    {
            ctx->lr = 0x80AA6254u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80AA6254:
    ctx->pc = 0x80AA6254u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6254u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA6254: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA6258:
    ctx->pc = 0x80AA6258u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6258u)) return;
    // 80AA6258: bl      0x8045F220
    {
            ctx->lr = 0x80AA625Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA625C:
    ctx->pc = 0x80AA625Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA625Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA625C: bl      0x8045C034
    {
            ctx->lr = 0x80AA6260u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80AA6260:
    ctx->pc = 0x80AA6260u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6260u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA6260: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_80AA6264:
    ctx->pc = 0x80AA6264u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6264u)) return;
    // 80AA6264: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA6268u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA6268:
    ctx->pc = 0x80AA6268u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6268u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA6268: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA626C:
    ctx->pc = 0x80AA626Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA626Cu)) return;
    // 80AA626C: bl      0x80AA6F98
    {
            ctx->lr = 0x80AA6270u;
            goto label_80AA6F98;
    }

label_80AA6270:
    ctx->pc = 0x80AA6270u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6270u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AA6270: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA6274:
    ctx->pc = 0x80AA6274u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6274u)) return;
    // 80AA6274: li      r4, 10
    ctx->gpr[4] = (u32)(s32)(10);

label_80AA6278:
    ctx->pc = 0x80AA6278u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6278u)) return;
    // 80AA6278: bl      0x804C5AB4
    {
            ctx->lr = 0x80AA627Cu;
            ctx->pc = 0x804C5AB4u;
            return;
    }

label_80AA627C:
    ctx->pc = 0x80AA627Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA627Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80AA627C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA6280:
    ctx->pc = 0x80AA6280u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6280u)) return;
    // 80AA6280: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80AA6284:
    ctx->pc = 0x80AA6284u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6284u)) return;
    // 80AA6284: li      r5, 5120
    ctx->gpr[5] = (u32)(s32)(5120);

label_80AA6288:
    ctx->pc = 0x80AA6288u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6288u)) return;
    // 80AA6288: li      r6, 23552
    ctx->gpr[6] = (u32)(s32)(23552);

label_80AA628C:
    ctx->pc = 0x80AA628Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA628Cu)) return;
    // 80AA628C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80AA6290:
    ctx->pc = 0x80AA6290u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6290u)) return;
    // 80AA6290: bl      0x8045C7B4
    {
            ctx->lr = 0x80AA6294u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80AA6294:
    ctx->pc = 0x80AA6294u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6294u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80AA6294: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AA6298:
    ctx->pc = 0x80AA6298u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6298u)) return;
    // 80AA6298: li      r4, 1335
    ctx->gpr[4] = (u32)(s32)(1335);

label_80AA629C:
    ctx->pc = 0x80AA629Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA629Cu)) return;
    // 80AA629C: li      r5, 1800
    ctx->gpr[5] = (u32)(s32)(1800);

label_80AA62A0:
    ctx->pc = 0x80AA62A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA62A0u)) return;
    // 80AA62A0: bl      0x80AA6F28
    {
            ctx->lr = 0x80AA62A4u;
            goto label_80AA6F28;
    }

label_80AA62A4:
    ctx->pc = 0x80AA62A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA62A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80AA62A4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AA62A8:
    ctx->pc = 0x80AA62A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA62A8u)) return;
    // 80AA62A8: li      r4, -20
    ctx->gpr[4] = (u32)(s32)(-20);

label_80AA62AC:
    ctx->pc = 0x80AA62ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA62ACu)) return;
    // 80AA62AC: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80AA62B0:
    ctx->pc = 0x80AA62B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA62B0u)) return;
    // 80AA62B0: bl      0x80AA7004
    {
            ctx->lr = 0x80AA62B4u;
            goto label_80AA7004;
    }

label_80AA62B4:
    ctx->pc = 0x80AA62B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA62B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA62B4: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80AA62B8:
    ctx->pc = 0x80AA62B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA62B8u)) return;
    // 80AA62B8: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA62BCu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA62BC:
    ctx->pc = 0x80AA62BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA62BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA62BC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA62C0:
    ctx->pc = 0x80AA62C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA62C0u)) return;
    // 80AA62C0: bl      0x8045F220
    {
            ctx->lr = 0x80AA62C4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA62C4:
    ctx->pc = 0x80AA62C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA62C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AA62C4: lis     r4, -27646
    ctx->gpr[4] = ((u32)(s32)(-27646) << 16);

label_80AA62C8:
    ctx->pc = 0x80AA62C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA62C8u)) return;
    // 80AA62C8: addi    r4, r4, 32268
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(32268);

label_80AA62CC:
    ctx->pc = 0x80AA62CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA62CCu)) return;
    // 80AA62CC: bl      0x8045C060
    {
            ctx->lr = 0x80AA62D0u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80AA62D0:
    ctx->pc = 0x80AA62D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA62D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80AA62D0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA62D4:
    ctx->pc = 0x80AA62D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA62D4u)) return;
    // 80AA62D4: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80AA62D8:
    ctx->pc = 0x80AA62D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA62D8u)) return;
    // 80AA62D8: li      r5, 1280
    ctx->gpr[5] = (u32)(s32)(1280);

label_80AA62DC:
    ctx->pc = 0x80AA62DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA62DCu)) return;
    // 80AA62DC: li      r6, 23552
    ctx->gpr[6] = (u32)(s32)(23552);

label_80AA62E0:
    ctx->pc = 0x80AA62E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA62E0u)) return;
    // 80AA62E0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80AA62E4:
    ctx->pc = 0x80AA62E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA62E4u)) return;
    // 80AA62E4: bl      0x8045C7B4
    {
            ctx->lr = 0x80AA62E8u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80AA62E8:
    ctx->pc = 0x80AA62E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA62E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA62E8: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80AA62EC:
    ctx->pc = 0x80AA62ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA62ECu)) return;
    // 80AA62EC: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA62F0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA62F0:
    ctx->pc = 0x80AA62F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA62F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80AA62F0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA62F4:
    ctx->pc = 0x80AA62F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA62F4u)) return;
    // 80AA62F4: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80AA62F8:
    ctx->pc = 0x80AA62F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA62F8u)) return;
    // 80AA62F8: li      r5, 4864
    ctx->gpr[5] = (u32)(s32)(4864);

label_80AA62FC:
    ctx->pc = 0x80AA62FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA62FCu)) return;
    // 80AA62FC: li      r6, 23552
    ctx->gpr[6] = (u32)(s32)(23552);

label_80AA6300:
    ctx->pc = 0x80AA6300u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6300u)) return;
    // 80AA6300: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80AA6304:
    ctx->pc = 0x80AA6304u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6304u)) return;
    // 80AA6304: bl      0x8045C7B4
    {
            ctx->lr = 0x80AA6308u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80AA6308:
    ctx->pc = 0x80AA6308u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6308u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA6308: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80AA630C:
    ctx->pc = 0x80AA630Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA630Cu)) return;
    // 80AA630C: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA6310u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA6310:
    ctx->pc = 0x80AA6310u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6310u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80AA6310: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA6314:
    ctx->pc = 0x80AA6314u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6314u)) return;
    // 80AA6314: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80AA6318:
    ctx->pc = 0x80AA6318u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6318u)) return;
    // 80AA6318: li      r5, 768
    ctx->gpr[5] = (u32)(s32)(768);

label_80AA631C:
    ctx->pc = 0x80AA631Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA631Cu)) return;
    // 80AA631C: li      r6, 23552
    ctx->gpr[6] = (u32)(s32)(23552);

label_80AA6320:
    ctx->pc = 0x80AA6320u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6320u)) return;
    // 80AA6320: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80AA6324:
    ctx->pc = 0x80AA6324u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6324u)) return;
    // 80AA6324: bl      0x8045C7B4
    {
            ctx->lr = 0x80AA6328u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80AA6328:
    ctx->pc = 0x80AA6328u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6328u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA6328: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80AA632C:
    ctx->pc = 0x80AA632Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA632Cu)) return;
    // 80AA632C: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA6330u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA6330:
    ctx->pc = 0x80AA6330u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6330u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80AA6330: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA6334:
    ctx->pc = 0x80AA6334u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6334u)) return;
    // 80AA6334: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80AA6338:
    ctx->pc = 0x80AA6338u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6338u)) return;
    // 80AA6338: li      r5, 4352
    ctx->gpr[5] = (u32)(s32)(4352);

label_80AA633C:
    ctx->pc = 0x80AA633Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA633Cu)) return;
    // 80AA633C: li      r6, 23552
    ctx->gpr[6] = (u32)(s32)(23552);

label_80AA6340:
    ctx->pc = 0x80AA6340u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6340u)) return;
    // 80AA6340: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80AA6344:
    ctx->pc = 0x80AA6344u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6344u)) return;
    // 80AA6344: bl      0x8045C7B4
    {
            ctx->lr = 0x80AA6348u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80AA6348:
    ctx->pc = 0x80AA6348u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6348u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA6348: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80AA634C:
    ctx->pc = 0x80AA634Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA634Cu)) return;
    // 80AA634C: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA6350u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA6350:
    ctx->pc = 0x80AA6350u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6350u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80AA6350: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA6354:
    ctx->pc = 0x80AA6354u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6354u)) return;
    // 80AA6354: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80AA6358:
    ctx->pc = 0x80AA6358u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6358u)) return;
    // 80AA6358: li      r5, 1792
    ctx->gpr[5] = (u32)(s32)(1792);

label_80AA635C:
    ctx->pc = 0x80AA635Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA635Cu)) return;
    // 80AA635C: li      r6, 23552
    ctx->gpr[6] = (u32)(s32)(23552);

label_80AA6360:
    ctx->pc = 0x80AA6360u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6360u)) return;
    // 80AA6360: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80AA6364:
    ctx->pc = 0x80AA6364u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6364u)) return;
    // 80AA6364: bl      0x8045C7B4
    {
            ctx->lr = 0x80AA6368u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80AA6368:
    ctx->pc = 0x80AA6368u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6368u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AA6368: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA636C:
    ctx->pc = 0x80AA636Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA636Cu)) return;
    // 80AA636C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AA6370:
    ctx->pc = 0x80AA6370u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6370u)) return;
    // 80AA6370: bl      0x804C5AB4
    {
            ctx->lr = 0x80AA6374u;
            ctx->pc = 0x804C5AB4u;
            return;
    }

label_80AA6374:
    ctx->pc = 0x80AA6374u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6374u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA6374: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80AA6378:
    ctx->pc = 0x80AA6378u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6378u)) return;
    // 80AA6378: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA637Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA637C:
    ctx->pc = 0x80AA637Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA637Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80AA637C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA6380:
    ctx->pc = 0x80AA6380u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6380u)) return;
    // 80AA6380: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80AA6384:
    ctx->pc = 0x80AA6384u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6384u)) return;
    // 80AA6384: li      r5, 4352
    ctx->gpr[5] = (u32)(s32)(4352);

label_80AA6388:
    ctx->pc = 0x80AA6388u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6388u)) return;
    // 80AA6388: li      r6, 23552
    ctx->gpr[6] = (u32)(s32)(23552);

label_80AA638C:
    ctx->pc = 0x80AA638Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA638Cu)) return;
    // 80AA638C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80AA6390:
    ctx->pc = 0x80AA6390u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6390u)) return;
    // 80AA6390: bl      0x8045C7B4
    {
            ctx->lr = 0x80AA6394u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80AA6394:
    ctx->pc = 0x80AA6394u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6394u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA6394: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80AA6398:
    ctx->pc = 0x80AA6398u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6398u)) return;
    // 80AA6398: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA639Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA639C:
    ctx->pc = 0x80AA639Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA639Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80AA639C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA63A0:
    ctx->pc = 0x80AA63A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA63A0u)) return;
    // 80AA63A0: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80AA63A4:
    ctx->pc = 0x80AA63A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA63A4u)) return;
    // 80AA63A4: li      r5, 2304
    ctx->gpr[5] = (u32)(s32)(2304);

label_80AA63A8:
    ctx->pc = 0x80AA63A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA63A8u)) return;
    // 80AA63A8: li      r6, 23552
    ctx->gpr[6] = (u32)(s32)(23552);

label_80AA63AC:
    ctx->pc = 0x80AA63ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA63ACu)) return;
    // 80AA63AC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80AA63B0:
    ctx->pc = 0x80AA63B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA63B0u)) return;
    // 80AA63B0: bl      0x8045C7B4
    {
            ctx->lr = 0x80AA63B4u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80AA63B4:
    ctx->pc = 0x80AA63B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA63B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA63B4: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80AA63B8:
    ctx->pc = 0x80AA63B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA63B8u)) return;
    // 80AA63B8: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA63BCu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA63BC:
    ctx->pc = 0x80AA63BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA63BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA63BC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA63C0:
    ctx->pc = 0x80AA63C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA63C0u)) return;
    // 80AA63C0: bl      0x8045F220
    {
            ctx->lr = 0x80AA63C4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA63C4:
    ctx->pc = 0x80AA63C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA63C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA63C4: bl      0x8045E760
    {
            ctx->lr = 0x80AA63C8u;
            ctx->pc = 0x8045E760u;
            return;
    }

label_80AA63C8:
    ctx->pc = 0x80AA63C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA63C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80AA63C8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA63CC:
    ctx->pc = 0x80AA63CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA63CCu)) return;
    // 80AA63CC: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80AA63D0:
    ctx->pc = 0x80AA63D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA63D0u)) return;
    // 80AA63D0: li      r5, 4096
    ctx->gpr[5] = (u32)(s32)(4096);

label_80AA63D4:
    ctx->pc = 0x80AA63D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA63D4u)) return;
    // 80AA63D4: li      r6, 23552
    ctx->gpr[6] = (u32)(s32)(23552);

label_80AA63D8:
    ctx->pc = 0x80AA63D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA63D8u)) return;
    // 80AA63D8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80AA63DC:
    ctx->pc = 0x80AA63DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA63DCu)) return;
    // 80AA63DC: bl      0x8045C7B4
    {
            ctx->lr = 0x80AA63E0u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80AA63E0:
    ctx->pc = 0x80AA63E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA63E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA63E0: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80AA63E4:
    ctx->pc = 0x80AA63E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA63E4u)) return;
    // 80AA63E4: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA63E8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA63E8:
    ctx->pc = 0x80AA63E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA63E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80AA63E8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA63EC:
    ctx->pc = 0x80AA63ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA63ECu)) return;
    // 80AA63EC: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80AA63F0:
    ctx->pc = 0x80AA63F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA63F0u)) return;
    // 80AA63F0: li      r5, 3072
    ctx->gpr[5] = (u32)(s32)(3072);

label_80AA63F4:
    ctx->pc = 0x80AA63F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA63F4u)) return;
    // 80AA63F4: li      r6, 23552
    ctx->gpr[6] = (u32)(s32)(23552);

label_80AA63F8:
    ctx->pc = 0x80AA63F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA63F8u)) return;
    // 80AA63F8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80AA63FC:
    ctx->pc = 0x80AA63FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA63FCu)) return;
    // 80AA63FC: bl      0x8045C7B4
    {
            ctx->lr = 0x80AA6400u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80AA6400:
    ctx->pc = 0x80AA6400u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6400u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA6400: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AA6404:
    ctx->pc = 0x80AA6404u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6404u)) return;
    // 80AA6404: bl      0x80AA6F98
    {
            ctx->lr = 0x80AA6408u;
            goto label_80AA6F98;
    }

label_80AA6408:
    ctx->pc = 0x80AA6408u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6408u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA6408: li      r3, 416
    ctx->gpr[3] = (u32)(s32)(416);

label_80AA640C:
    ctx->pc = 0x80AA640Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA640Cu)) return;
    // 80AA640C: bl      0x8045BFA0
    {
            ctx->lr = 0x80AA6410u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80AA6410:
    ctx->pc = 0x80AA6410u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6410u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80AA6410: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80AA6414:
    ctx->pc = 0x80AA6414u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6414u)) return;
    // 80AA6414: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80AA6418:
    ctx->pc = 0x80AA6418u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6418u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA6418: lwz     r0, 0(r3)
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
label_80AA641C:
    ctx->pc = 0x80AA641Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA641Cu)) return;
    // 80AA641C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80AA6420:
    ctx->pc = 0x80AA6420u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6420u)) return;
    // 80AA6420: lis     r3, -27646
    ctx->gpr[3] = ((u32)(s32)(-27646) << 16);

label_80AA6424:
    ctx->pc = 0x80AA6424u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6424u)) return;
    // 80AA6424: addi    r3, r3, 31652
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(31652);

label_80AA6428:
    ctx->pc = 0x80AA6428u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6428u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA6428: lwzx    r3, r3, r0
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
label_80AA642C:
    ctx->pc = 0x80AA642Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA642Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA642C: lwz     r3, 12(r3)
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
label_80AA6430:
    ctx->pc = 0x80AA6430u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6430u)) return;
    // 80AA6430: bl      0x8045F6FC
    {
            ctx->lr = 0x80AA6434u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80AA6434:
    ctx->pc = 0x80AA6434u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6434u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA6434: li      r3, 25
    ctx->gpr[3] = (u32)(s32)(25);

label_80AA6438:
    ctx->pc = 0x80AA6438u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6438u)) return;
    // 80AA6438: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA643Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA643C:
    ctx->pc = 0x80AA643Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA643Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AA643C: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80AA6440:
    ctx->pc = 0x80AA6440u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6440u)) return;
    // 80AA6440: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80AA6444:
    ctx->pc = 0x80AA6444u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6444u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA6444: lwz     r0, 0(r3)
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
label_80AA6448:
    ctx->pc = 0x80AA6448u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6448u)) return;
    // 80AA6448: cmpwi   r0, 0
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

label_80AA644C:
    ctx->pc = 0x80AA644Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA644Cu)) return;
    // 80AA644C: bc    4, 2, 0x80AA6464
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AA6464;
        }
    }

label_80AA6450:
    ctx->pc = 0x80AA6450u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6450u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA6450: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA6454:
    ctx->pc = 0x80AA6454u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6454u)) return;
    // 80AA6454: bl      0x8045F220
    {
            ctx->lr = 0x80AA6458u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA6458:
    ctx->pc = 0x80AA6458u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6458u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AA6458: lis     r4, -27646
    ctx->gpr[4] = ((u32)(s32)(-27646) << 16);

label_80AA645C:
    ctx->pc = 0x80AA645Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA645Cu)) return;
    // 80AA645C: addi    r4, r4, 32272
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(32272);

label_80AA6460:
    ctx->pc = 0x80AA6460u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6460u)) return;
    // 80AA6460: bl      0x8045C060
    {
            ctx->lr = 0x80AA6464u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80AA6464:
    ctx->pc = 0x80AA6464u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6464u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AA6464: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80AA6468:
    ctx->pc = 0x80AA6468u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6468u)) return;
    // 80AA6468: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80AA646C:
    ctx->pc = 0x80AA646Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA646Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA646C: lwz     r0, 0(r3)
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
label_80AA6470:
    ctx->pc = 0x80AA6470u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6470u)) return;
    // 80AA6470: cmpwi   r0, 1
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

label_80AA6474:
    ctx->pc = 0x80AA6474u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6474u)) return;
    // 80AA6474: bc    4, 2, 0x80AA648C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AA648C;
        }
    }

label_80AA6478:
    ctx->pc = 0x80AA6478u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6478u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA6478: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA647C:
    ctx->pc = 0x80AA647Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA647Cu)) return;
    // 80AA647C: bl      0x8045F220
    {
            ctx->lr = 0x80AA6480u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA6480:
    ctx->pc = 0x80AA6480u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6480u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AA6480: lis     r4, -27646
    ctx->gpr[4] = ((u32)(s32)(-27646) << 16);

label_80AA6484:
    ctx->pc = 0x80AA6484u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6484u)) return;
    // 80AA6484: addi    r4, r4, 32280
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(32280);

label_80AA6488:
    ctx->pc = 0x80AA6488u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6488u)) return;
    // 80AA6488: bl      0x8045C060
    {
            ctx->lr = 0x80AA648Cu;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80AA648C:
    ctx->pc = 0x80AA648Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA648Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA648C: li      r3, 20
    ctx->gpr[3] = (u32)(s32)(20);

label_80AA6490:
    ctx->pc = 0x80AA6490u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6490u)) return;
    // 80AA6490: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA6494u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA6494:
    ctx->pc = 0x80AA6494u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6494u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA6494: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA6498:
    ctx->pc = 0x80AA6498u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6498u)) return;
    // 80AA6498: bl      0x8045F220
    {
            ctx->lr = 0x80AA649Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA649C:
    ctx->pc = 0x80AA649Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA649Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA649C: bl      0x8045EB8C
    {
            ctx->lr = 0x80AA64A0u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80AA64A0:
    ctx->pc = 0x80AA64A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA64A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA64A0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA64A4:
    ctx->pc = 0x80AA64A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA64A4u)) return;
    // 80AA64A4: bl      0x8045F220
    {
            ctx->lr = 0x80AA64A8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA64A8:
    ctx->pc = 0x80AA64A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA64A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80AA64A8: lis     r4, -28587
    ctx->gpr[4] = ((u32)(s32)(-28587) << 16);

label_80AA64AC:
    ctx->pc = 0x80AA64ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA64ACu)) return;
    // 80AA64AC: addi    r4, r4, 8236
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8236);

label_80AA64B0:
    ctx->pc = 0x80AA64B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA64B0u)) return;
    // 80AA64B0: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80AA64B4:
    ctx->pc = 0x80AA64B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA64B4u)) return;
    // 80AA64B4: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80AA64B8:
    ctx->pc = 0x80AA64B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA64B8u)) return;
    // 80AA64B8: lis     r6, -27646
    ctx->gpr[6] = ((u32)(s32)(-27646) << 16);

label_80AA64BC:
    ctx->pc = 0x80AA64BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA64BCu)) return;
    // 80AA64BC: addi    r6, r6, 30596
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(30596);

label_80AA64C0:
    ctx->pc = 0x80AA64C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA64C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AA64C0: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80AA64C0u)) return;
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
label_80AA64C4:
    ctx->pc = 0x80AA64C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA64C4u)) return;
    // 80AA64C4: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80AA64C8:
    ctx->pc = 0x80AA64C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA64C8u)) return;
    // 80AA64C8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80AA64CC:
    ctx->pc = 0x80AA64CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA64CCu)) return;
    // 80AA64CC: bl      0x8045EBE4
    {
            ctx->lr = 0x80AA64D0u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80AA64D0:
    ctx->pc = 0x80AA64D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA64D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80AA64D0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AA64D4:
    ctx->pc = 0x80AA64D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA64D4u)) return;
    // 80AA64D4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AA64D8:
    ctx->pc = 0x80AA64D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA64D8u)) return;
    // 80AA64D8: li      r5, 5632
    ctx->gpr[5] = (u32)(s32)(5632);

label_80AA64DC:
    ctx->pc = 0x80AA64DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA64DCu)) return;
    // 80AA64DC: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80AA64E0:
    ctx->pc = 0x80AA64E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA64E0u)) return;
    // 80AA64E0: addi    r6, r6, -10496
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-10496);

label_80AA64E4:
    ctx->pc = 0x80AA64E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA64E4u)) return;
    // 80AA64E4: li      r7, 512
    ctx->gpr[7] = (u32)(s32)(512);

label_80AA64E8:
    ctx->pc = 0x80AA64E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA64E8u)) return;
    // 80AA64E8: bl      0x8045C7B4
    {
            ctx->lr = 0x80AA64ECu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80AA64EC:
    ctx->pc = 0x80AA64ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA64ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80AA64EC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AA64F0:
    ctx->pc = 0x80AA64F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA64F0u)) return;
    // 80AA64F0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AA64F4:
    ctx->pc = 0x80AA64F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA64F4u)) return;
    // 80AA64F4: lis     r5, -27646
    ctx->gpr[5] = ((u32)(s32)(-27646) << 16);

label_80AA64F8:
    ctx->pc = 0x80AA64F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA64F8u)) return;
    // 80AA64F8: addi    r5, r5, 30952
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(30952);

label_80AA64FC:
    ctx->pc = 0x80AA64FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA64FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA64FC: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA64FCu)) return;
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
label_80AA6500:
    ctx->pc = 0x80AA6500u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6500u)) return;
    // 80AA6500: lis     r5, -27646
    ctx->gpr[5] = ((u32)(s32)(-27646) << 16);

label_80AA6504:
    ctx->pc = 0x80AA6504u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6504u)) return;
    // 80AA6504: addi    r5, r5, 30956
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(30956);

label_80AA6508:
    ctx->pc = 0x80AA6508u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6508u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA6508: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA6508u)) return;
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
label_80AA650C:
    ctx->pc = 0x80AA650Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA650Cu)) return;
    // 80AA650C: lis     r5, -27646
    ctx->gpr[5] = ((u32)(s32)(-27646) << 16);

label_80AA6510:
    ctx->pc = 0x80AA6510u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6510u)) return;
    // 80AA6510: addi    r5, r5, 30960
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(30960);

label_80AA6514:
    ctx->pc = 0x80AA6514u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6514u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA6514: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA6514u)) return;
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
label_80AA6518:
    ctx->pc = 0x80AA6518u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6518u)) return;
    // 80AA6518: bl      0x8045C750
    {
            ctx->lr = 0x80AA651Cu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80AA651C:
    ctx->pc = 0x80AA651Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA651Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80AA651C: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80AA6520:
    ctx->pc = 0x80AA6520u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6520u)) return;
    // 80AA6520: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80AA6524:
    ctx->pc = 0x80AA6524u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6524u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA6524: lwz     r0, 0(r3)
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
label_80AA6528:
    ctx->pc = 0x80AA6528u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6528u)) return;
    // 80AA6528: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80AA652C:
    ctx->pc = 0x80AA652Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA652Cu)) return;
    // 80AA652C: lis     r3, -27646
    ctx->gpr[3] = ((u32)(s32)(-27646) << 16);

label_80AA6530:
    ctx->pc = 0x80AA6530u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6530u)) return;
    // 80AA6530: addi    r3, r3, 31652
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(31652);

label_80AA6534:
    ctx->pc = 0x80AA6534u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6534u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA6534: lwzx    r3, r3, r0
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
label_80AA6538:
    ctx->pc = 0x80AA6538u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6538u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA6538: lwz     r3, 16(r3)
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
label_80AA653C:
    ctx->pc = 0x80AA653Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA653Cu)) return;
    // 80AA653C: bl      0x8045F6FC
    {
            ctx->lr = 0x80AA6540u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80AA6540:
    ctx->pc = 0x80AA6540u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6540u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80AA6540: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA6544:
    ctx->pc = 0x80AA6544u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6544u)) return;
    // 80AA6544: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_80AA6548:
    ctx->pc = 0x80AA6548u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6548u)) return;
    // 80AA6548: li      r5, 6144
    ctx->gpr[5] = (u32)(s32)(6144);

label_80AA654C:
    ctx->pc = 0x80AA654Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA654Cu)) return;
    // 80AA654C: lis     r7, 1
    ctx->gpr[7] = ((u32)(s32)(1) << 16);

label_80AA6550:
    ctx->pc = 0x80AA6550u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6550u)) return;
    // 80AA6550: addi    r6, r7, -11520
    ctx->gpr[6] = ctx->gpr[7] + (u32)(s32)(-11520);

label_80AA6554:
    ctx->pc = 0x80AA6554u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6554u)) return;
    // 80AA6554: addi    r7, r7, -256
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-256);

label_80AA6558:
    ctx->pc = 0x80AA6558u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6558u)) return;
    // 80AA6558: bl      0x8045C7B4
    {
            ctx->lr = 0x80AA655Cu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80AA655C:
    ctx->pc = 0x80AA655Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA655Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80AA655C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA6560:
    ctx->pc = 0x80AA6560u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6560u)) return;
    // 80AA6560: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_80AA6564:
    ctx->pc = 0x80AA6564u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6564u)) return;
    // 80AA6564: lis     r5, -27646
    ctx->gpr[5] = ((u32)(s32)(-27646) << 16);

label_80AA6568:
    ctx->pc = 0x80AA6568u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6568u)) return;
    // 80AA6568: addi    r5, r5, 30964
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(30964);

label_80AA656C:
    ctx->pc = 0x80AA656Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA656Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA656C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA656Cu)) return;
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
label_80AA6570:
    ctx->pc = 0x80AA6570u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6570u)) return;
    // 80AA6570: lis     r5, -27646
    ctx->gpr[5] = ((u32)(s32)(-27646) << 16);

label_80AA6574:
    ctx->pc = 0x80AA6574u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6574u)) return;
    // 80AA6574: addi    r5, r5, 30968
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(30968);

label_80AA6578:
    ctx->pc = 0x80AA6578u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6578u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA6578: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA6578u)) return;
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
label_80AA657C:
    ctx->pc = 0x80AA657Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA657Cu)) return;
    // 80AA657C: lis     r5, -27646
    ctx->gpr[5] = ((u32)(s32)(-27646) << 16);

label_80AA6580:
    ctx->pc = 0x80AA6580u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6580u)) return;
    // 80AA6580: addi    r5, r5, 30972
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(30972);

label_80AA6584:
    ctx->pc = 0x80AA6584u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6584u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA6584: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA6584u)) return;
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
label_80AA6588:
    ctx->pc = 0x80AA6588u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6588u)) return;
    // 80AA6588: bl      0x8045C750
    {
            ctx->lr = 0x80AA658Cu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80AA658C:
    ctx->pc = 0x80AA658Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA658Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA658C: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_80AA6590:
    ctx->pc = 0x80AA6590u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6590u)) return;
    // 80AA6590: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA6594u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA6594:
    ctx->pc = 0x80AA6594u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6594u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA6594: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA6598:
    ctx->pc = 0x80AA6598u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6598u)) return;
    // 80AA6598: bl      0x8045F220
    {
            ctx->lr = 0x80AA659Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA659C:
    ctx->pc = 0x80AA659Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA659Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80AA659C: lis     r4, -27645
    ctx->gpr[4] = ((u32)(s32)(-27645) << 16);

label_80AA65A0:
    ctx->pc = 0x80AA65A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA65A0u)) return;
    // 80AA65A0: addi    r4, r4, -28092
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-28092);

label_80AA65A4:
    ctx->pc = 0x80AA65A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA65A4u)) return;
    // 80AA65A4: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80AA65A8:
    ctx->pc = 0x80AA65A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA65A8u)) return;
    // 80AA65A8: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80AA65AC:
    ctx->pc = 0x80AA65ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA65ACu)) return;
    // 80AA65AC: lis     r6, -27646
    ctx->gpr[6] = ((u32)(s32)(-27646) << 16);

label_80AA65B0:
    ctx->pc = 0x80AA65B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA65B0u)) return;
    // 80AA65B0: addi    r6, r6, 30976
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(30976);

label_80AA65B4:
    ctx->pc = 0x80AA65B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA65B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AA65B4: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80AA65B4u)) return;
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
label_80AA65B8:
    ctx->pc = 0x80AA65B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA65B8u)) return;
    // 80AA65B8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80AA65BC:
    ctx->pc = 0x80AA65BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA65BCu)) return;
    // 80AA65BC: li      r7, 16
    ctx->gpr[7] = (u32)(s32)(16);

label_80AA65C0:
    ctx->pc = 0x80AA65C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA65C0u)) return;
    // 80AA65C0: bl      0x8045EBE4
    {
            ctx->lr = 0x80AA65C4u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80AA65C4:
    ctx->pc = 0x80AA65C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA65C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA65C4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA65C8:
    ctx->pc = 0x80AA65C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA65C8u)) return;
    // 80AA65C8: bl      0x8045F220
    {
            ctx->lr = 0x80AA65CCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA65CC:
    ctx->pc = 0x80AA65CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA65CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA65CC: bl      0x8045EB40
    {
            ctx->lr = 0x80AA65D0u;
            ctx->pc = 0x8045EB40u;
            return;
    }

label_80AA65D0:
    ctx->pc = 0x80AA65D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA65D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA65D0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA65D4:
    ctx->pc = 0x80AA65D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA65D4u)) return;
    // 80AA65D4: bl      0x8045F220
    {
            ctx->lr = 0x80AA65D8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA65D8:
    ctx->pc = 0x80AA65D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA65D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80AA65D8: lis     r4, -28587
    ctx->gpr[4] = ((u32)(s32)(-28587) << 16);

label_80AA65DC:
    ctx->pc = 0x80AA65DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA65DCu)) return;
    // 80AA65DC: addi    r4, r4, 8236
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8236);

label_80AA65E0:
    ctx->pc = 0x80AA65E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA65E0u)) return;
    // 80AA65E0: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80AA65E4:
    ctx->pc = 0x80AA65E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA65E4u)) return;
    // 80AA65E4: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80AA65E8:
    ctx->pc = 0x80AA65E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA65E8u)) return;
    // 80AA65E8: lis     r6, -27646
    ctx->gpr[6] = ((u32)(s32)(-27646) << 16);

label_80AA65EC:
    ctx->pc = 0x80AA65ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA65ECu)) return;
    // 80AA65EC: addi    r6, r6, 30596
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(30596);

label_80AA65F0:
    ctx->pc = 0x80AA65F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA65F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AA65F0: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80AA65F0u)) return;
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
label_80AA65F4:
    ctx->pc = 0x80AA65F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA65F4u)) return;
    // 80AA65F4: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80AA65F8:
    ctx->pc = 0x80AA65F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA65F8u)) return;
    // 80AA65F8: li      r7, 16
    ctx->gpr[7] = (u32)(s32)(16);

label_80AA65FC:
    ctx->pc = 0x80AA65FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA65FCu)) return;
    // 80AA65FC: bl      0x8045EBE4
    {
            ctx->lr = 0x80AA6600u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80AA6600:
    ctx->pc = 0x80AA6600u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6600u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA6600: bl      0x8045BFF4
    {
            ctx->lr = 0x80AA6604u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80AA6604:
    ctx->pc = 0x80AA6604u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6604u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AA6604: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80AA6608:
    ctx->pc = 0x80AA6608u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6608u)) return;
    // 80AA6608: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80AA660C:
    ctx->pc = 0x80AA660Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA660Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA660C: lwz     r0, 0(r3)
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
label_80AA6610:
    ctx->pc = 0x80AA6610u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6610u)) return;
    // 80AA6610: cmpwi   r0, 0
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

label_80AA6614:
    ctx->pc = 0x80AA6614u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6614u)) return;
    // 80AA6614: bc    4, 2, 0x80AA6624
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AA6624;
        }
    }

label_80AA6618:
    ctx->pc = 0x80AA6618u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6618u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA6618: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA661C:
    ctx->pc = 0x80AA661Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA661Cu)) return;
    // 80AA661C: bl      0x8045F220
    {
            ctx->lr = 0x80AA6620u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA6620:
    ctx->pc = 0x80AA6620u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6620u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA6620: bl      0x8045C034
    {
            ctx->lr = 0x80AA6624u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80AA6624:
    ctx->pc = 0x80AA6624u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6624u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AA6624: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80AA6628:
    ctx->pc = 0x80AA6628u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6628u)) return;
    // 80AA6628: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80AA662C:
    ctx->pc = 0x80AA662Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA662Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA662C: lwz     r0, 0(r3)
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
label_80AA6630:
    ctx->pc = 0x80AA6630u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6630u)) return;
    // 80AA6630: cmpwi   r0, 1
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

label_80AA6634:
    ctx->pc = 0x80AA6634u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6634u)) return;
    // 80AA6634: bc    4, 2, 0x80AA6644
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AA6644;
        }
    }

label_80AA6638:
    ctx->pc = 0x80AA6638u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6638u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA6638: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA663C:
    ctx->pc = 0x80AA663Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA663Cu)) return;
    // 80AA663C: bl      0x8045F220
    {
            ctx->lr = 0x80AA6640u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA6640:
    ctx->pc = 0x80AA6640u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6640u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA6640: bl      0x8045C034
    {
            ctx->lr = 0x80AA6644u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80AA6644:
    ctx->pc = 0x80AA6644u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6644u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA6644: bl      0x8045F32C
    {
            ctx->lr = 0x80AA6648u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80AA6648:
    ctx->pc = 0x80AA6648u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6648u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80AA6648: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AA664C:
    ctx->pc = 0x80AA664Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA664Cu)) return;
    // 80AA664C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AA6650:
    ctx->pc = 0x80AA6650u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6650u)) return;
    // 80AA6650: li      r5, 512
    ctx->gpr[5] = (u32)(s32)(512);

label_80AA6654:
    ctx->pc = 0x80AA6654u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6654u)) return;
    // 80AA6654: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80AA6658:
    ctx->pc = 0x80AA6658u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6658u)) return;
    // 80AA6658: addi    r6, r6, -13312
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-13312);

label_80AA665C:
    ctx->pc = 0x80AA665Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA665Cu)) return;
    // 80AA665C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80AA6660:
    ctx->pc = 0x80AA6660u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6660u)) return;
    // 80AA6660: bl      0x8045C7B4
    {
            ctx->lr = 0x80AA6664u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80AA6664:
    ctx->pc = 0x80AA6664u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6664u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80AA6664: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AA6668:
    ctx->pc = 0x80AA6668u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6668u)) return;
    // 80AA6668: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AA666C:
    ctx->pc = 0x80AA666Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA666Cu)) return;
    // 80AA666C: lis     r5, -27646
    ctx->gpr[5] = ((u32)(s32)(-27646) << 16);

label_80AA6670:
    ctx->pc = 0x80AA6670u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6670u)) return;
    // 80AA6670: addi    r5, r5, 30980
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(30980);

label_80AA6674:
    ctx->pc = 0x80AA6674u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6674u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA6674: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA6674u)) return;
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
label_80AA6678:
    ctx->pc = 0x80AA6678u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6678u)) return;
    // 80AA6678: lis     r5, -27646
    ctx->gpr[5] = ((u32)(s32)(-27646) << 16);

label_80AA667C:
    ctx->pc = 0x80AA667Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA667Cu)) return;
    // 80AA667C: addi    r5, r5, 30984
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(30984);

label_80AA6680:
    ctx->pc = 0x80AA6680u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6680u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA6680: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA6680u)) return;
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
label_80AA6684:
    ctx->pc = 0x80AA6684u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6684u)) return;
    // 80AA6684: lis     r5, -27646
    ctx->gpr[5] = ((u32)(s32)(-27646) << 16);

label_80AA6688:
    ctx->pc = 0x80AA6688u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6688u)) return;
    // 80AA6688: addi    r5, r5, 30988
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(30988);

label_80AA668C:
    ctx->pc = 0x80AA668Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA668Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA668C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA668Cu)) return;
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
label_80AA6690:
    ctx->pc = 0x80AA6690u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6690u)) return;
    // 80AA6690: bl      0x8045C750
    {
            ctx->lr = 0x80AA6694u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80AA6694:
    ctx->pc = 0x80AA6694u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6694u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA6694: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA6698:
    ctx->pc = 0x80AA6698u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6698u)) return;
    // 80AA6698: bl      0x8045F220
    {
            ctx->lr = 0x80AA669Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA669C:
    ctx->pc = 0x80AA669Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA669Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA669C: bl      0x8045EB8C
    {
            ctx->lr = 0x80AA66A0u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80AA66A0:
    ctx->pc = 0x80AA66A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA66A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA66A0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA66A4:
    ctx->pc = 0x80AA66A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA66A4u)) return;
    // 80AA66A4: bl      0x8045F220
    {
            ctx->lr = 0x80AA66A8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA66A8:
    ctx->pc = 0x80AA66A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA66A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80AA66A8: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80AA66AC:
    ctx->pc = 0x80AA66ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA66ACu)) return;
    // 80AA66AC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA66B0:
    ctx->pc = 0x80AA66B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA66B0u)) return;
    // 80AA66B0: li      r4, 40
    ctx->gpr[4] = (u32)(s32)(40);

label_80AA66B4:
    ctx->pc = 0x80AA66B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA66B4u)) return;
    // 80AA66B4: lis     r6, -27646
    ctx->gpr[6] = ((u32)(s32)(-27646) << 16);

label_80AA66B8:
    ctx->pc = 0x80AA66B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA66B8u)) return;
    // 80AA66B8: addi    r6, r6, 30608
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(30608);

label_80AA66BC:
    ctx->pc = 0x80AA66BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA66BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA66BC: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80AA66BCu)) return;
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
label_80AA66C0:
    ctx->pc = 0x80AA66C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA66C0u)) return;
    // 80AA66C0: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80AA66C0u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_80AA66C4:
    ctx->pc = 0x80AA66C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA66C4u)) return;
    // 80AA66C4: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80AA66C4u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80AA66C8:
    ctx->pc = 0x80AA66C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA66C8u)) return;
    // 80AA66C8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80AA66CC:
    ctx->pc = 0x80AA66CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA66CCu)) return;
    // 80AA66CC: bl      0x8045C3C0
    {
            ctx->lr = 0x80AA66D0u;
            ctx->pc = 0x8045C3C0u;
            return;
    }

label_80AA66D0:
    ctx->pc = 0x80AA66D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA66D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80AA66D0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA66D4:
    ctx->pc = 0x80AA66D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA66D4u)) return;
    // 80AA66D4: lis     r4, -27646
    ctx->gpr[4] = ((u32)(s32)(-27646) << 16);

label_80AA66D8:
    ctx->pc = 0x80AA66D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA66D8u)) return;
    // 80AA66D8: addi    r4, r4, 30584
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(30584);

label_80AA66DC:
    ctx->pc = 0x80AA66DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA66DCu)) return;
    // 80AA66DC: bl      0x8045E7E0
    {
            ctx->lr = 0x80AA66E0u;
            ctx->pc = 0x8045E7E0u;
            return;
    }

label_80AA66E0:
    ctx->pc = 0x80AA66E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA66E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA66E0: li      r3, 103
    ctx->gpr[3] = (u32)(s32)(103);

label_80AA66E4:
    ctx->pc = 0x80AA66E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA66E4u)) return;
    // 80AA66E4: bl      0x8045F7C8
    {
            ctx->lr = 0x80AA66E8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AA66E8:
    ctx->pc = 0x80AA66E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA66E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA66E8: b       0x80AA6778
    {
            goto label_80AA6778;
    }

label_80AA66EC:
    ctx->pc = 0x80AA66ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA66ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA66EC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA66F0:
    ctx->pc = 0x80AA66F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA66F0u)) return;
    // 80AA66F0: bl      0x8045F220
    {
            ctx->lr = 0x80AA66F4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA66F4:
    ctx->pc = 0x80AA66F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA66F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80AA66F4: lis     r4, -27646
    ctx->gpr[4] = ((u32)(s32)(-27646) << 16);

label_80AA66F8:
    ctx->pc = 0x80AA66F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA66F8u)) return;
    // 80AA66F8: addi    r4, r4, 30992
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(30992);

label_80AA66FC:
    ctx->pc = 0x80AA66FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA66FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA66FC: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AA66FCu)) return;
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
label_80AA6700:
    ctx->pc = 0x80AA6700u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6700u)) return;
    // 80AA6700: lis     r4, -27646
    ctx->gpr[4] = ((u32)(s32)(-27646) << 16);

label_80AA6704:
    ctx->pc = 0x80AA6704u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6704u)) return;
    // 80AA6704: addi    r4, r4, 30608
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(30608);

label_80AA6708:
    ctx->pc = 0x80AA6708u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6708u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA6708: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AA6708u)) return;
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
label_80AA670C:
    ctx->pc = 0x80AA670Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA670Cu)) return;
    // 80AA670C: lis     r4, -27646
    ctx->gpr[4] = ((u32)(s32)(-27646) << 16);

label_80AA6710:
    ctx->pc = 0x80AA6710u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6710u)) return;
    // 80AA6710: addi    r4, r4, 30996
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(30996);

label_80AA6714:
    ctx->pc = 0x80AA6714u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6714u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA6714: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AA6714u)) return;
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
label_80AA6718:
    ctx->pc = 0x80AA6718u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6718u)) return;
    // 80AA6718: bl      0x8045EF2C
    {
            ctx->lr = 0x80AA671Cu;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80AA671C:
    ctx->pc = 0x80AA671Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA671Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA671C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA6720:
    ctx->pc = 0x80AA6720u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6720u)) return;
    // 80AA6720: bl      0x8045F220
    {
            ctx->lr = 0x80AA6724u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AA6724:
    ctx->pc = 0x80AA6724u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6724u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AA6724: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AA6728:
    ctx->pc = 0x80AA6728u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6728u)) return;
    // 80AA6728: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80AA672C:
    ctx->pc = 0x80AA672Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA672Cu)) return;
    // 80AA672C: addi    r5, r5, -5936
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-5936);

label_80AA6730:
    ctx->pc = 0x80AA6730u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6730u)) return;
    // 80AA6730: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80AA6734:
    ctx->pc = 0x80AA6734u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6734u)) return;
    // 80AA6734: bl      0x8045EEA8
    {
            ctx->lr = 0x80AA6738u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80AA6738:
    ctx->pc = 0x80AA6738u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6738u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA6738: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA673C:
    ctx->pc = 0x80AA673Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA673Cu)) return;
    // 80AA673C: bl      0x8045EC10
    {
            ctx->lr = 0x80AA6740u;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80AA6740:
    ctx->pc = 0x80AA6740u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6740u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA6740: bl      0x8045DE34
    {
            ctx->lr = 0x80AA6744u;
            ctx->pc = 0x8045DE34u;
            return;
    }

label_80AA6744:
    ctx->pc = 0x80AA6744u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6744u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA6744: bl      0x80460A80
    {
            ctx->lr = 0x80AA6748u;
            ctx->pc = 0x80460A80u;
            return;
    }

label_80AA6748:
    ctx->pc = 0x80AA6748u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6748u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA6748: bl      0x80AA57B4
    {
            ctx->lr = 0x80AA674Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80AA57B4u;
                return;
            }
            goto label_80AA57B4;
    }

label_80AA674C:
    ctx->pc = 0x80AA674Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA674Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA674C: bl      0x80AA6E7C
    {
            ctx->lr = 0x80AA6750u;
            goto label_80AA6E7C;
    }

label_80AA6750:
    ctx->pc = 0x80AA6750u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6750u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AA6750: lis     r3, -27644
    ctx->gpr[3] = ((u32)(s32)(-27644) << 16);

label_80AA6754:
    ctx->pc = 0x80AA6754u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6754u)) return;
    // 80AA6754: addi    r3, r3, -18464
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-18464);

label_80AA6758:
    ctx->pc = 0x80AA6758u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6758u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA6758: lwz     r3, 0(r3)
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
label_80AA675C:
    ctx->pc = 0x80AA675Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA675Cu)) return;
    // 80AA675C: cmplwi  r3, 0x0000
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

label_80AA6760:
    ctx->pc = 0x80AA6760u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6760u)) return;
    // 80AA6760: bc    12, 2, 0x80AA6778
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80AA6778;
        }
    }

label_80AA6764:
    ctx->pc = 0x80AA6764u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6764u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA6764: bl      0x8050F9E0
    {
            ctx->lr = 0x80AA6768u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80AA6768:
    ctx->pc = 0x80AA6768u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6768u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80AA6768: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80AA676C:
    ctx->pc = 0x80AA676Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA676Cu)) return;
    // 80AA676C: lis     r3, -27644
    ctx->gpr[3] = ((u32)(s32)(-27644) << 16);

label_80AA6770:
    ctx->pc = 0x80AA6770u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6770u)) return;
    // 80AA6770: addi    r3, r3, -18464
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-18464);

label_80AA6774:
    ctx->pc = 0x80AA6774u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6774u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80AA6774: stw     r0, 0(r3)
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
label_80AA6778:
    ctx->pc = 0x80AA6778u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6778u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA6778: lwz     r0, 20(r1)
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
label_80AA677C:
    ctx->pc = 0x80AA677Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80AA677Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA677C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA6780:
    ctx->pc = 0x80AA6780u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6780u)) return;
    // 80AA6780: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80AA6784:
    ctx->pc = 0x80AA6784u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6784u)) return;
    // 80AA6784: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AA5000;
        }
    }

label_80AA6788:
    ctx->pc = 0x80AA6788u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6788u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AA6788: stwu     r1, -16(r1)
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
label_80AA678C:
    ctx->pc = 0x80AA678Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA678Cu)) return;
    // 80AA678C: lis     r3, -27646
    ctx->gpr[3] = ((u32)(s32)(-27646) << 16);

label_80AA6790:
    ctx->pc = 0x80AA6790u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6790u)) return;
    // 80AA6790: addi    r3, r3, 30608
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(30608);

label_80AA6794:
    ctx->pc = 0x80AA6794u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6794u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA6794: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AA6794u)) return;
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
label_80AA6798:
    ctx->pc = 0x80AA6798u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6798u)) return;
    // 80AA6798: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA6798u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80AA679C:
    ctx->pc = 0x80AA679Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA679Cu)) return;
    // 80AA679C: bc    4, 1, 0x80AA6808
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AA6808;
        }
    }

label_80AA67A0:
    ctx->pc = 0x80AA67A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 26u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA67A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 26u : 1u;
    // 80AA67A0: frsqrte    f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80AA67A0u)) return;
    { f64 result; if (ppc_frsqrte(ctx, ctx->fpr[1], &result)) ctx->fpr[0] = result; }

label_80AA67A4:
    ctx->pc = 0x80AA67A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA67A4u)) return;
    // 80AA67A4: lis     r3, -27646
    ctx->gpr[3] = ((u32)(s32)(-27646) << 16);

label_80AA67A8:
    ctx->pc = 0x80AA67A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA67A8u)) return;
    // 80AA67A8: addi    r3, r3, 30616
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(30616);

label_80AA67AC:
    ctx->pc = 0x80AA67ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA67ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80AA67AC: lfd     f4, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AA67ACu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->fpr[4] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA67B0:
    ctx->pc = 0x80AA67B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA67B0u)) return;
    // 80AA67B0: fmul   f2, f4, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA67B0u)) return;
    ppc_fmul(ctx, 2, 4, 0);

label_80AA67B4:
    ctx->pc = 0x80AA67B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA67B4u)) return;
    // 80AA67B4: lis     r3, -27646
    ctx->gpr[3] = ((u32)(s32)(-27646) << 16);

label_80AA67B8:
    ctx->pc = 0x80AA67B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA67B8u)) return;
    // 80AA67B8: addi    r3, r3, 30624
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(30624);

label_80AA67BC:
    ctx->pc = 0x80AA67BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA67BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80AA67BC: lfd     f3, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AA67BCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA67C0:
    ctx->pc = 0x80AA67C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA67C0u)) return;
    // 80AA67C0: fmul   f0, f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA67C0u)) return;
    ppc_fmul(ctx, 0, 0, 0);

label_80AA67C4:
    ctx->pc = 0x80AA67C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA67C4u)) return;
    // 80AA67C4: fmul   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA67C4u)) return;
    ppc_fmul(ctx, 0, 1, 0);

label_80AA67C8:
    ctx->pc = 0x80AA67C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA67C8u)) return;
    // 80AA67C8: fsub   f0, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA67C8u)) return;
    ppc_fsub(ctx, 0, 3, 0);

label_80AA67CC:
    ctx->pc = 0x80AA67CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA67CCu)) return;
    // 80AA67CC: fmul   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA67CCu)) return;
    ppc_fmul(ctx, 0, 2, 0);

label_80AA67D0:
    ctx->pc = 0x80AA67D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA67D0u)) return;
    // 80AA67D0: fmul   f2, f4, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA67D0u)) return;
    ppc_fmul(ctx, 2, 4, 0);

label_80AA67D4:
    ctx->pc = 0x80AA67D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA67D4u)) return;
    // 80AA67D4: fmul   f0, f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA67D4u)) return;
    ppc_fmul(ctx, 0, 0, 0);

label_80AA67D8:
    ctx->pc = 0x80AA67D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA67D8u)) return;
    // 80AA67D8: fmul   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA67D8u)) return;
    ppc_fmul(ctx, 0, 1, 0);

label_80AA67DC:
    ctx->pc = 0x80AA67DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA67DCu)) return;
    // 80AA67DC: fsub   f0, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA67DCu)) return;
    ppc_fsub(ctx, 0, 3, 0);

label_80AA67E0:
    ctx->pc = 0x80AA67E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA67E0u)) return;
    // 80AA67E0: fmul   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA67E0u)) return;
    ppc_fmul(ctx, 0, 2, 0);

label_80AA67E4:
    ctx->pc = 0x80AA67E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA67E4u)) return;
    // 80AA67E4: fmul   f2, f4, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA67E4u)) return;
    ppc_fmul(ctx, 2, 4, 0);

label_80AA67E8:
    ctx->pc = 0x80AA67E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA67E8u)) return;
    // 80AA67E8: fmul   f0, f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA67E8u)) return;
    ppc_fmul(ctx, 0, 0, 0);

label_80AA67EC:
    ctx->pc = 0x80AA67ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA67ECu)) return;
    // 80AA67EC: fmul   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA67ECu)) return;
    ppc_fmul(ctx, 0, 1, 0);

label_80AA67F0:
    ctx->pc = 0x80AA67F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA67F0u)) return;
    // 80AA67F0: fsub   f0, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA67F0u)) return;
    ppc_fsub(ctx, 0, 3, 0);

label_80AA67F4:
    ctx->pc = 0x80AA67F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA67F4u)) return;
    // 80AA67F4: fmul   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA67F4u)) return;
    ppc_fmul(ctx, 0, 2, 0);

label_80AA67F8:
    ctx->pc = 0x80AA67F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA67F8u)) return;
    // 80AA67F8: fmul   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA67F8u)) return;
    ppc_fmul(ctx, 0, 1, 0);

label_80AA67FC:
    ctx->pc = 0x80AA67FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA67FCu)) return;
    // 80AA67FC: frsp    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA67FCu)) return;
    ppc_frsp(ctx, 0, 0);

label_80AA6800:
    ctx->pc = 0x80AA6800u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6800u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA6800: stfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AA6800u)) return;
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
label_80AA6804:
    ctx->pc = 0x80AA6804u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6804u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80AA6804: lfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AA6804u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA6808:
    ctx->pc = 0x80AA6808u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6808u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA6808: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80AA680C:
    ctx->pc = 0x80AA680Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA680Cu)) return;
    // 80AA680C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AA5000;
        }
    }

label_80AA6810:
    ctx->pc = 0x80AA6810u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6810u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AA6810: stwu     r1, -16(r1)
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
label_80AA6814:
    ctx->pc = 0x80AA6814u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6814u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA6814: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA6818:
    ctx->pc = 0x80AA6818u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6818u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA6818: stw     r0, 20(r1)
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
label_80AA681C:
    ctx->pc = 0x80AA681Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA681Cu)) return;
    // 80AA681C: bl      0x80013A1C
    {
            ctx->lr = 0x80AA6820u;
            ctx->pc = 0x80013A1Cu;
            return;
    }

label_80AA6820:
    ctx->pc = 0x80AA6820u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6820u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80AA6820: frsp    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x80AA6820u)) return;
    ppc_frsp(ctx, 1, 1);

label_80AA6824:
    ctx->pc = 0x80AA6824u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6824u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA6824: lwz     r0, 20(r1)
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
label_80AA6828:
    ctx->pc = 0x80AA6828u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80AA6828u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA6828: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA682C:
    ctx->pc = 0x80AA682Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA682Cu)) return;
    // 80AA682C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80AA6830:
    ctx->pc = 0x80AA6830u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6830u)) return;
    // 80AA6830: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AA5000;
        }
    }

label_80AA6834:
    ctx->pc = 0x80AA6834u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6834u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA6834: stwu     r1, -64(r1)
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
label_80AA6838:
    ctx->pc = 0x80AA6838u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6838u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AA6838: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA683C:
    ctx->pc = 0x80AA683Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA683Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA683C: stw     r0, 68(r1)
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
label_80AA6840:
    ctx->pc = 0x80AA6840u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6840u)) return;
    // 80AA6840: addi    r11, r1, 64
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(64);

label_80AA6844:
    ctx->pc = 0x80AA6844u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6844u)) return;
    // 80AA6844: bl      0x80006DD4
    {
            ctx->lr = 0x80AA6848u;
            ctx->pc = 0x80006DD4u;
            return;
    }

label_80AA6848:
    ctx->pc = 0x80AA6848u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 29u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6848u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 29u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80AA6848: lwz     r27, 32(r3)
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
label_80AA684C:
    ctx->pc = 0x80AA684Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA684Cu)) return;
    // 80AA684C: lis     r3, -27646
    ctx->gpr[3] = ((u32)(s32)(-27646) << 16);

label_80AA6850:
    ctx->pc = 0x80AA6850u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6850u)) return;
    // 80AA6850: addi    r3, r3, 31000
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(31000);

label_80AA6854:
    ctx->pc = 0x80AA6854u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6854u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80AA6854: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AA6854u)) return;
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
label_80AA6858:
    ctx->pc = 0x80AA6858u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6858u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80AA6858: lfs     f0, 44(r27)
    if (!ppc_fp_available_inline(ctx, 0x80AA6858u)) return;
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
label_80AA685C:
    ctx->pc = 0x80AA685Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA685Cu)) return;
    // 80AA685C: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA685Cu)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80AA6860:
    ctx->pc = 0x80AA6860u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6860u)) return;
    // 80AA6860: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA6860u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80AA6864:
    ctx->pc = 0x80AA6864u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6864u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80AA6864: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AA6864u)) return;
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
label_80AA6868:
    ctx->pc = 0x80AA6868u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6868u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80AA6868: lwz     r31, 12(r1)
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
label_80AA686C:
    ctx->pc = 0x80AA686Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA686Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80AA686C: lfs     f0, 32(r27)
    if (!ppc_fp_available_inline(ctx, 0x80AA686Cu)) return;
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
label_80AA6870:
    ctx->pc = 0x80AA6870u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6870u)) return;
    // 80AA6870: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA6870u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80AA6874:
    ctx->pc = 0x80AA6874u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6874u)) return;
    // 80AA6874: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA6874u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80AA6878:
    ctx->pc = 0x80AA6878u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6878u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80AA6878: stfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AA6878u)) return;
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
label_80AA687C:
    ctx->pc = 0x80AA687Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA687Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80AA687C: lwz     r30, 20(r1)
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
label_80AA6880:
    ctx->pc = 0x80AA6880u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6880u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80AA6880: lfs     f0, 36(r27)
    if (!ppc_fp_available_inline(ctx, 0x80AA6880u)) return;
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
label_80AA6884:
    ctx->pc = 0x80AA6884u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6884u)) return;
    // 80AA6884: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA6884u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80AA6888:
    ctx->pc = 0x80AA6888u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6888u)) return;
    // 80AA6888: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA6888u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80AA688C:
    ctx->pc = 0x80AA688Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA688Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80AA688C: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AA688Cu)) return;
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
label_80AA6890:
    ctx->pc = 0x80AA6890u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6890u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80AA6890: lwz     r29, 28(r1)
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
label_80AA6894:
    ctx->pc = 0x80AA6894u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6894u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80AA6894: lfs     f0, 40(r27)
    if (!ppc_fp_available_inline(ctx, 0x80AA6894u)) return;
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
label_80AA6898:
    ctx->pc = 0x80AA6898u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6898u)) return;
    // 80AA6898: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA6898u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80AA689C:
    ctx->pc = 0x80AA689Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA689Cu)) return;
    // 80AA689C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA689Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80AA68A0:
    ctx->pc = 0x80AA68A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA68A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA68A0: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AA68A0u)) return;
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
label_80AA68A4:
    ctx->pc = 0x80AA68A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA68A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AA68A4: lwz     r28, 36(r1)
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
label_80AA68A8:
    ctx->pc = 0x80AA68A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA68A8u)) return;
    // 80AA68A8: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80AA68AC:
    ctx->pc = 0x80AA68ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA68ACu)) return;
    // 80AA68AC: addi    r3, r3, 4120
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4120);

label_80AA68B0:
    ctx->pc = 0x80AA68B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA68B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA68B0: lwz     r0, 0(r3)
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
label_80AA68B4:
    ctx->pc = 0x80AA68B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA68B4u)) return;
    // 80AA68B4: cmpwi   r0, 0
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

label_80AA68B8:
    ctx->pc = 0x80AA68B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA68B8u)) return;
    // 80AA68B8: bc    4, 2, 0x80AA6970
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AA6970;
        }
    }

label_80AA68BC:
    ctx->pc = 0x80AA68BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA68BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AA68BC: rlwinm r0, r31, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_80AA68C0:
    ctx->pc = 0x80AA68C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA68C0u)) return;
    // 80AA68C0: cmplwi  r0, 0x0000
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

label_80AA68C4:
    ctx->pc = 0x80AA68C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA68C4u)) return;
    // 80AA68C4: bc    12, 2, 0x80AA6970
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80AA6970;
        }
    }

label_80AA68C8:
    ctx->pc = 0x80AA68C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA68C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AA68C8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA68CC:
    ctx->pc = 0x80AA68CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA68CCu)) return;
    // 80AA68CC: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_80AA68D0:
    ctx->pc = 0x80AA68D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA68D0u)) return;
    // 80AA68D0: bl      0x8060F4F8
    {
            ctx->lr = 0x80AA68D4u;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80AA68D4:
    ctx->pc = 0x80AA68D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA68D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AA68D4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AA68D8:
    ctx->pc = 0x80AA68D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA68D8u)) return;
    // 80AA68D8: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80AA68DC:
    ctx->pc = 0x80AA68DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA68DCu)) return;
    // 80AA68DC: bl      0x8060F4F8
    {
            ctx->lr = 0x80AA68E0u;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80AA68E0:
    ctx->pc = 0x80AA68E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA68E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA68E0: lfs     f5, 52(r27)
    if (!ppc_fp_available_inline(ctx, 0x80AA68E0u)) return;
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
label_80AA68E4:
    ctx->pc = 0x80AA68E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA68E4u)) return;
    // 80AA68E4: lis     r3, -27646
    ctx->gpr[3] = ((u32)(s32)(-27646) << 16);

label_80AA68E8:
    ctx->pc = 0x80AA68E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA68E8u)) return;
    // 80AA68E8: addi    r3, r3, 31008
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(31008);

label_80AA68EC:
    ctx->pc = 0x80AA68ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA68ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AA68EC: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AA68ECu)) return;
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
label_80AA68F0:
    ctx->pc = 0x80AA68F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA68F0u)) return;
    // 80AA68F0: fcmpo   cr0, f5, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA68F0u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[5], ctx->fpr[0], true);

label_80AA68F4:
    ctx->pc = 0x80AA68F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA68F4u)) return;
    // 80AA68F4: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80AA68F8:
    ctx->pc = 0x80AA68F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA68F8u)) return;
    // 80AA68F8: bc    4, 2, 0x80AA690C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AA690C;
        }
    }

label_80AA68FC:
    ctx->pc = 0x80AA68FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA68FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80AA68FC: lis     r3, -27646
    ctx->gpr[3] = ((u32)(s32)(-27646) << 16);

label_80AA6900:
    ctx->pc = 0x80AA6900u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6900u)) return;
    // 80AA6900: addi    r3, r3, 31004
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(31004);

label_80AA6904:
    ctx->pc = 0x80AA6904u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6904u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA6904: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AA6904u)) return;
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
label_80AA6908:
    ctx->pc = 0x80AA6908u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6908u)) return;
    // 80AA6908: fadds   f5, f5, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA6908u)) return;
    ppc_fadds(ctx, 5, 5, 0);

label_80AA690C:
    ctx->pc = 0x80AA690Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA690Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AA690C: rlwinm r0, r31, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_80AA6910:
    ctx->pc = 0x80AA6910u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6910u)) return;
    // 80AA6910: cmplwi  r0, 0x00FF
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

label_80AA6914:
    ctx->pc = 0x80AA6914u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6914u)) return;
    // 80AA6914: bc    4, 1, 0x80AA691C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AA691C;
        }
    }

label_80AA6918:
    ctx->pc = 0x80AA6918u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6918u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA6918: li      r31, 255
    ctx->gpr[31] = (u32)(s32)(255);

label_80AA691C:
    ctx->pc = 0x80AA691Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 21u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA691Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 21u : 1u;
    // 80AA691C: lis     r3, -27646
    ctx->gpr[3] = ((u32)(s32)(-27646) << 16);

label_80AA6920:
    ctx->pc = 0x80AA6920u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6920u)) return;
    // 80AA6920: addi    r3, r3, 31012
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(31012);

label_80AA6924:
    ctx->pc = 0x80AA6924u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6924u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80AA6924: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AA6924u)) return;
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
label_80AA6928:
    ctx->pc = 0x80AA6928u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6928u)) return;
    // 80AA6928: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80AA6928u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_80AA692C:
    ctx->pc = 0x80AA692Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA692Cu)) return;
    // 80AA692C: lis     r3, -27646
    ctx->gpr[3] = ((u32)(s32)(-27646) << 16);

label_80AA6930:
    ctx->pc = 0x80AA6930u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6930u)) return;
    // 80AA6930: addi    r3, r3, 31016
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(31016);

label_80AA6934:
    ctx->pc = 0x80AA6934u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6934u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80AA6934: lfs     f3, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AA6934u)) return;
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
label_80AA6938:
    ctx->pc = 0x80AA6938u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6938u)) return;
    // 80AA6938: lis     r3, -27646
    ctx->gpr[3] = ((u32)(s32)(-27646) << 16);

label_80AA693C:
    ctx->pc = 0x80AA693Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA693Cu)) return;
    // 80AA693C: addi    r3, r3, 31020
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(31020);

label_80AA6940:
    ctx->pc = 0x80AA6940u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6940u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80AA6940: lfs     f4, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AA6940u)) return;
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
label_80AA6944:
    ctx->pc = 0x80AA6944u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6944u)) return;
    // 80AA6944: rlwinm r5, r28, 0, 24, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[28], 0u) & 0x000000FFu;
    }

label_80AA6948:
    ctx->pc = 0x80AA6948u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6948u)) return;
    // 80AA6948: rlwinm r0, r29, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[29], 0u) & 0x000000FFu;
    }

label_80AA694C:
    ctx->pc = 0x80AA694Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA694Cu)) return;
    // 80AA694C: rlwinm r4, r0, 8, 0, 23
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 8u) & 0xFFFFFF00u;
    }

label_80AA6950:
    ctx->pc = 0x80AA6950u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6950u)) return;
    // 80AA6950: rlwinm r0, r31, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_80AA6954:
    ctx->pc = 0x80AA6954u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6954u)) return;
    // 80AA6954: rlwinm r3, r0, 24, 0, 7
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 24u) & 0xFF000000u;
    }

label_80AA6958:
    ctx->pc = 0x80AA6958u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6958u)) return;
    // 80AA6958: rlwinm r0, r30, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0x000000FFu;
    }

label_80AA695C:
    ctx->pc = 0x80AA695Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA695Cu)) return;
    // 80AA695C: rlwinm r0, r0, 16, 0, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 16u) & 0xFFFF0000u;
    }

label_80AA6960:
    ctx->pc = 0x80AA6960u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6960u)) return;
    // 80AA6960: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80AA6964:
    ctx->pc = 0x80AA6964u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6964u)) return;
    // 80AA6964: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_80AA6968:
    ctx->pc = 0x80AA6968u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6968u)) return;
    // 80AA6968: or   r3, r5, r0
    {
        ctx->gpr[3] = ctx->gpr[5] | ctx->gpr[0];
    }

label_80AA696C:
    ctx->pc = 0x80AA696Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA696Cu)) return;
    // 80AA696C: bl      0x80AA6B2C
    {
            ctx->lr = 0x80AA6970u;
            goto label_80AA6B2C;
    }

label_80AA6970:
    ctx->pc = 0x80AA6970u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6970u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA6970: addi    r11, r1, 64
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(64);

label_80AA6974:
    ctx->pc = 0x80AA6974u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6974u)) return;
    // 80AA6974: bl      0x80006E20
    {
            ctx->lr = 0x80AA6978u;
            ctx->pc = 0x80006E20u;
            return;
    }

label_80AA6978:
    ctx->pc = 0x80AA6978u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6978u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA6978: lwz     r0, 68(r1)
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
label_80AA697C:
    ctx->pc = 0x80AA697Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80AA697Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA697C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA6980:
    ctx->pc = 0x80AA6980u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6980u)) return;
    // 80AA6980: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_80AA6984:
    ctx->pc = 0x80AA6984u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6984u)) return;
    // 80AA6984: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AA5000;
        }
    }

label_80AA6988:
    ctx->pc = 0x80AA6988u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6988u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80AA6988: stwu     r1, -16(r1)
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
label_80AA698C:
    ctx->pc = 0x80AA698Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA698Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80AA698C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA6990:
    ctx->pc = 0x80AA6990u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6990u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80AA6990: stw     r0, 20(r1)
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
label_80AA6994:
    ctx->pc = 0x80AA6994u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6994u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80AA6994: lwz     r5, 32(r3)
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
label_80AA6998:
    ctx->pc = 0x80AA6998u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6998u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA6998: lfs     f1, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA6998u)) return;
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
label_80AA699C:
    ctx->pc = 0x80AA699Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA699Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA699C: lfs     f0, 48(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA699Cu)) return;
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
label_80AA69A0:
    ctx->pc = 0x80AA69A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA69A0u)) return;
    // 80AA69A0: fadds   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA69A0u)) return;
    ppc_fadds(ctx, 1, 1, 0);

label_80AA69A4:
    ctx->pc = 0x80AA69A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA69A4u)) return;
    // 80AA69A4: lis     r4, -27646
    ctx->gpr[4] = ((u32)(s32)(-27646) << 16);

label_80AA69A8:
    ctx->pc = 0x80AA69A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA69A8u)) return;
    // 80AA69A8: addi    r4, r4, 31024
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(31024);

label_80AA69AC:
    ctx->pc = 0x80AA69ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA69ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA69AC: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AA69ACu)) return;
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
label_80AA69B0:
    ctx->pc = 0x80AA69B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA69B0u)) return;
    // 80AA69B0: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA69B0u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80AA69B4:
    ctx->pc = 0x80AA69B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA69B4u)) return;
    // 80AA69B4: bc    4, 1, 0x80AA69C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AA69C0;
        }
    }

label_80AA69B8:
    ctx->pc = 0x80AA69B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA69B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA69B8: fmr    f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA69B8u)) return;
    ctx->fpr[1] = ctx->fpr[0];

label_80AA69BC:
    ctx->pc = 0x80AA69BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA69BCu)) return;
    // 80AA69BC: b       0x80AA69D8
    {
            goto label_80AA69D8;
    }

label_80AA69C0:
    ctx->pc = 0x80AA69C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA69C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AA69C0: lis     r4, -27646
    ctx->gpr[4] = ((u32)(s32)(-27646) << 16);

label_80AA69C4:
    ctx->pc = 0x80AA69C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA69C4u)) return;
    // 80AA69C4: addi    r4, r4, 31012
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(31012);

label_80AA69C8:
    ctx->pc = 0x80AA69C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA69C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA69C8: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AA69C8u)) return;
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
label_80AA69CC:
    ctx->pc = 0x80AA69CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA69CCu)) return;
    // 80AA69CC: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA69CCu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80AA69D0:
    ctx->pc = 0x80AA69D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA69D0u)) return;
    // 80AA69D0: bc    4, 0, 0x80AA69D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AA69D8;
        }
    }

label_80AA69D4:
    ctx->pc = 0x80AA69D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA69D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA69D4: fmr    f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80AA69D4u)) return;
    ctx->fpr[1] = ctx->fpr[0];

label_80AA69D8:
    ctx->pc = 0x80AA69D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA69D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA69D8: stfs     f1, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA69D8u)) return;
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
label_80AA69DC:
    ctx->pc = 0x80AA69DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA69DCu)) return;
    // 80AA69DC: bl      0x80AA6834
    {
            ctx->lr = 0x80AA69E0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80AA6834u;
                return;
            }
            goto label_80AA6834;
    }

label_80AA69E0:
    ctx->pc = 0x80AA69E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA69E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA69E0: lwz     r0, 20(r1)
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
label_80AA69E4:
    ctx->pc = 0x80AA69E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80AA69E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA69E4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA69E8:
    ctx->pc = 0x80AA69E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA69E8u)) return;
    // 80AA69E8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80AA69EC:
    ctx->pc = 0x80AA69ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA69ECu)) return;
    // 80AA69EC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AA5000;
        }
    }

label_80AA69F0:
    ctx->pc = 0x80AA69F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA69F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA69F0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AA5000;
        }
    }

label_80AA69F4:
    ctx->pc = 0x80AA69F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA69F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80AA69F4: stwu     r1, -16(r1)
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
label_80AA69F8:
    ctx->pc = 0x80AA69F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA69F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80AA69F8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA69FC:
    ctx->pc = 0x80AA69FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA69FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80AA69FC: stw     r0, 20(r1)
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
label_80AA6A00:
    ctx->pc = 0x80AA6A00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6A00u)) return;
    // 80AA6A00: lis     r4, -32598
    ctx->gpr[4] = ((u32)(s32)(-32598) << 16);

label_80AA6A04:
    ctx->pc = 0x80AA6A04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6A04u)) return;
    // 80AA6A04: addi    r0, r4, 27016
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(27016);

label_80AA6A08:
    ctx->pc = 0x80AA6A08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6A08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA6A08: stw     r0, 16(r3)
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
label_80AA6A0C:
    ctx->pc = 0x80AA6A0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6A0Cu)) return;
    // 80AA6A0C: lis     r4, -32598
    ctx->gpr[4] = ((u32)(s32)(-32598) << 16);

label_80AA6A10:
    ctx->pc = 0x80AA6A10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6A10u)) return;
    // 80AA6A10: addi    r0, r4, 26676
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(26676);

label_80AA6A14:
    ctx->pc = 0x80AA6A14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6A14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA6A14: stw     r0, 20(r3)
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
label_80AA6A18:
    ctx->pc = 0x80AA6A18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6A18u)) return;
    // 80AA6A18: lis     r4, -32598
    ctx->gpr[4] = ((u32)(s32)(-32598) << 16);

label_80AA6A1C:
    ctx->pc = 0x80AA6A1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6A1Cu)) return;
    // 80AA6A1C: addi    r0, r4, 27120
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(27120);

label_80AA6A20:
    ctx->pc = 0x80AA6A20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6A20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA6A20: stw     r0, 24(r3)
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
label_80AA6A24:
    ctx->pc = 0x80AA6A24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6A24u)) return;
    // 80AA6A24: bl      0x80AA6988
    {
            ctx->lr = 0x80AA6A28u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80AA6988u;
                return;
            }
            goto label_80AA6988;
    }

label_80AA6A28:
    ctx->pc = 0x80AA6A28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6A28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA6A28: lwz     r0, 20(r1)
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
label_80AA6A2C:
    ctx->pc = 0x80AA6A2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80AA6A2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA6A2C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA6A30:
    ctx->pc = 0x80AA6A30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6A30u)) return;
    // 80AA6A30: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80AA6A34:
    ctx->pc = 0x80AA6A34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6A34u)) return;
    // 80AA6A34: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AA5000;
        }
    }

label_80AA6A38:
    ctx->pc = 0x80AA6A38u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 23u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6A38u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 23u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80AA6A38: stwu     r1, -96(r1)
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
label_80AA6A3C:
    ctx->pc = 0x80AA6A3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6A3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80AA6A3C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA6A40:
    ctx->pc = 0x80AA6A40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6A40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80AA6A40: stw     r0, 100(r1)
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
label_80AA6A44:
    ctx->pc = 0x80AA6A44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6A44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80AA6A44: stfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AA6A44u)) return;
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
label_80AA6A48:
    ctx->pc = 0x80AA6A48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6A48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80AA6A48: psq_st   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80AA6A48u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80AA6A48u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA6A4C:
    ctx->pc = 0x80AA6A4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6A4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80AA6A4C: stfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AA6A4Cu)) return;
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
label_80AA6A50:
    ctx->pc = 0x80AA6A50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6A50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80AA6A50: psq_st   f30, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80AA6A50u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x80AA6A50u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA6A54:
    ctx->pc = 0x80AA6A54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6A54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80AA6A54: stfd     f29, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AA6A54u)) return;
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
label_80AA6A58:
    ctx->pc = 0x80AA6A58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6A58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80AA6A58: psq_st   f29, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80AA6A58u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x80AA6A58u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA6A5C:
    ctx->pc = 0x80AA6A5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6A5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80AA6A5C: stfd     f28, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AA6A5Cu)) return;
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
label_80AA6A60:
    ctx->pc = 0x80AA6A60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6A60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80AA6A60: psq_st   f28, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80AA6A60u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x80AA6A60u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA6A64:
    ctx->pc = 0x80AA6A64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6A64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80AA6A64: stfd     f27, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AA6A64u)) return;
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
label_80AA6A68:
    ctx->pc = 0x80AA6A68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6A68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80AA6A68: psq_st   f27, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80AA6A68u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_store_inline(ctx, 27u, ea, false, 0u, false, 0x80AA6A68u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA6A6C:
    ctx->pc = 0x80AA6A6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6A6Cu)) return;
    // 80AA6A6C: fmr    f27, f1
    if (!ppc_fp_available_inline(ctx, 0x80AA6A6Cu)) return;
    ctx->fpr[27] = ctx->fpr[1];

label_80AA6A70:
    ctx->pc = 0x80AA6A70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6A70u)) return;
    // 80AA6A70: fmr    f28, f2
    if (!ppc_fp_available_inline(ctx, 0x80AA6A70u)) return;
    ctx->fpr[28] = ctx->fpr[2];

label_80AA6A74:
    ctx->pc = 0x80AA6A74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6A74u)) return;
    // 80AA6A74: fmr    f29, f3
    if (!ppc_fp_available_inline(ctx, 0x80AA6A74u)) return;
    ctx->fpr[29] = ctx->fpr[3];

label_80AA6A78:
    ctx->pc = 0x80AA6A78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6A78u)) return;
    // 80AA6A78: fmr    f30, f4
    if (!ppc_fp_available_inline(ctx, 0x80AA6A78u)) return;
    ctx->fpr[30] = ctx->fpr[4];

label_80AA6A7C:
    ctx->pc = 0x80AA6A7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6A7Cu)) return;
    // 80AA6A7C: fmr    f31, f5
    if (!ppc_fp_available_inline(ctx, 0x80AA6A7Cu)) return;
    ctx->fpr[31] = ctx->fpr[5];

label_80AA6A80:
    ctx->pc = 0x80AA6A80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6A80u)) return;
    // 80AA6A80: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80AA6A84:
    ctx->pc = 0x80AA6A84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6A84u)) return;
    // 80AA6A84: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80AA6A88:
    ctx->pc = 0x80AA6A88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6A88u)) return;
    // 80AA6A88: lis     r5, -32598
    ctx->gpr[5] = ((u32)(s32)(-32598) << 16);

label_80AA6A8C:
    ctx->pc = 0x80AA6A8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6A8Cu)) return;
    // 80AA6A8C: addi    r5, r5, 27124
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(27124);

label_80AA6A90:
    ctx->pc = 0x80AA6A90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6A90u)) return;
    // 80AA6A90: bl      0x8050FD60
    {
            ctx->lr = 0x80AA6A94u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80AA6A94:
    ctx->pc = 0x80AA6A94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 25u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6A94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 25u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80AA6A94: lwz     r5, 32(r3)
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
label_80AA6A98:
    ctx->pc = 0x80AA6A98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6A98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80AA6A98: stfs     f27, 48(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA6A98u)) return;
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
label_80AA6A9C:
    ctx->pc = 0x80AA6A9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6A9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80AA6A9C: stfs     f28, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA6A9Cu)) return;
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
label_80AA6AA0:
    ctx->pc = 0x80AA6AA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6AA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80AA6AA0: stfs     f29, 32(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA6AA0u)) return;
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
label_80AA6AA4:
    ctx->pc = 0x80AA6AA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6AA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80AA6AA4: stfs     f30, 36(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA6AA4u)) return;
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
label_80AA6AA8:
    ctx->pc = 0x80AA6AA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6AA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80AA6AA8: stfs     f31, 40(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA6AA8u)) return;
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
label_80AA6AAC:
    ctx->pc = 0x80AA6AACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6AACu)) return;
    // 80AA6AAC: lis     r4, -27646
    ctx->gpr[4] = ((u32)(s32)(-27646) << 16);

label_80AA6AB0:
    ctx->pc = 0x80AA6AB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6AB0u)) return;
    // 80AA6AB0: addi    r4, r4, 31008
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(31008);

label_80AA6AB4:
    ctx->pc = 0x80AA6AB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6AB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80AA6AB4: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AA6AB4u)) return;
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
label_80AA6AB8:
    ctx->pc = 0x80AA6AB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6AB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80AA6AB8: stfs     f0, 52(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AA6AB8u)) return;
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
label_80AA6ABC:
    ctx->pc = 0x80AA6ABCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6ABCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80AA6ABC: psq_l   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80AA6ABCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80AA6ABCu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA6AC0:
    ctx->pc = 0x80AA6AC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6AC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80AA6AC0: lfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AA6AC0u)) return;
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
label_80AA6AC4:
    ctx->pc = 0x80AA6AC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6AC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80AA6AC4: psq_l   f30, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80AA6AC4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x80AA6AC4u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA6AC8:
    ctx->pc = 0x80AA6AC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6AC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80AA6AC8: lfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AA6AC8u)) return;
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
label_80AA6ACC:
    ctx->pc = 0x80AA6ACCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6ACCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80AA6ACC: psq_l   f29, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80AA6ACCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x80AA6ACCu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA6AD0:
    ctx->pc = 0x80AA6AD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6AD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80AA6AD0: lfd     f29, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AA6AD0u)) return;
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
label_80AA6AD4:
    ctx->pc = 0x80AA6AD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6AD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80AA6AD4: psq_l   f28, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80AA6AD4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x80AA6AD4u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA6AD8:
    ctx->pc = 0x80AA6AD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6AD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA6AD8: lfd     f28, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AA6AD8u)) return;
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
label_80AA6ADC:
    ctx->pc = 0x80AA6ADCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6ADCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA6ADC: psq_l   f27, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80AA6ADCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_load_inline(ctx, 27u, ea, false, 0u, false, 0x80AA6ADCu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA6AE0:
    ctx->pc = 0x80AA6AE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6AE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AA6AE0: lfd     f27, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AA6AE0u)) return;
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
label_80AA6AE4:
    ctx->pc = 0x80AA6AE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6AE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA6AE4: lwz     r0, 100(r1)
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
label_80AA6AE8:
    ctx->pc = 0x80AA6AE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80AA6AE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA6AE8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA6AEC:
    ctx->pc = 0x80AA6AECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6AECu)) return;
    // 80AA6AEC: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_80AA6AF0:
    ctx->pc = 0x80AA6AF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6AF0u)) return;
    // 80AA6AF0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AA5000;
        }
    }

label_80AA6AF4:
    ctx->pc = 0x80AA6AF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6AF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA6AF4: lwz     r3, 32(r3)
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
label_80AA6AF8:
    ctx->pc = 0x80AA6AF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6AF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA6AF8: stfs     f1, 48(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AA6AF8u)) return;
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
label_80AA6AFC:
    ctx->pc = 0x80AA6AFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6AFCu)) return;
    // 80AA6AFC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AA5000;
        }
    }

label_80AA6B00:
    ctx->pc = 0x80AA6B00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6B00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA6B00: lwz     r3, 32(r3)
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
label_80AA6B04:
    ctx->pc = 0x80AA6B04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6B04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA6B04: stfs     f1, 44(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AA6B04u)) return;
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
label_80AA6B08:
    ctx->pc = 0x80AA6B08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6B08u)) return;
    // 80AA6B08: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AA5000;
        }
    }

label_80AA6B0C:
    ctx->pc = 0x80AA6B0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6B0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA6B0C: lwz     r3, 32(r3)
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
label_80AA6B10:
    ctx->pc = 0x80AA6B10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6B10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AA6B10: stfs     f1, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AA6B10u)) return;
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
label_80AA6B14:
    ctx->pc = 0x80AA6B14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6B14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA6B14: stfs     f2, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AA6B14u)) return;
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
label_80AA6B18:
    ctx->pc = 0x80AA6B18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6B18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA6B18: stfs     f3, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AA6B18u)) return;
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
label_80AA6B1C:
    ctx->pc = 0x80AA6B1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6B1Cu)) return;
    // 80AA6B1C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AA5000;
        }
    }

label_80AA6B20:
    ctx->pc = 0x80AA6B20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6B20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA6B20: lwz     r3, 32(r3)
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
label_80AA6B24:
    ctx->pc = 0x80AA6B24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6B24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA6B24: stfs     f1, 52(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AA6B24u)) return;
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
label_80AA6B28:
    ctx->pc = 0x80AA6B28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6B28u)) return;
    // 80AA6B28: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AA5000;
        }
    }

label_80AA6B2C:
    ctx->pc = 0x80AA6B2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6B2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA6B2C: stwu     r1, -16(r1)
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
label_80AA6B30:
    ctx->pc = 0x80AA6B30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6B30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AA6B30: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA6B34:
    ctx->pc = 0x80AA6B34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6B34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA6B34: stw     r0, 20(r1)
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
label_80AA6B38:
    ctx->pc = 0x80AA6B38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6B38u)) return;
    // 80AA6B38: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80AA6B3C:
    ctx->pc = 0x80AA6B3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6B3Cu)) return;
    // 80AA6B3C: bl      0x80607948
    {
            ctx->lr = 0x80AA6B40u;
            ctx->pc = 0x80607948u;
            return;
    }

label_80AA6B40:
    ctx->pc = 0x80AA6B40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6B40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA6B40: lwz     r0, 20(r1)
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
label_80AA6B44:
    ctx->pc = 0x80AA6B44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80AA6B44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA6B44: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA6B48:
    ctx->pc = 0x80AA6B48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6B48u)) return;
    // 80AA6B48: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80AA6B4C:
    ctx->pc = 0x80AA6B4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6B4Cu)) return;
    // 80AA6B4C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AA5000;
        }
    }

label_80AA6B50:
    ctx->pc = 0x80AA6B50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6B50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AA6B50: stwu     r1, -16(r1)
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
label_80AA6B54:
    ctx->pc = 0x80AA6B54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6B54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA6B54: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA6B58:
    ctx->pc = 0x80AA6B58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6B58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AA6B58: stw     r0, 20(r1)
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
label_80AA6B5C:
    ctx->pc = 0x80AA6B5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6B5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA6B5C: lwz     r3, 32(r3)
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
label_80AA6B60:
    ctx->pc = 0x80AA6B60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6B60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA6B60: lwz     r3, 16(r3)
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
label_80AA6B64:
    ctx->pc = 0x80AA6B64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6B64u)) return;
    // 80AA6B64: bl      0x80509CF0
    {
            ctx->lr = 0x80AA6B68u;
            ctx->pc = 0x80509CF0u;
            return;
    }

label_80AA6B68:
    ctx->pc = 0x80AA6B68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6B68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA6B68: lwz     r0, 20(r1)
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
label_80AA6B6C:
    ctx->pc = 0x80AA6B6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80AA6B6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA6B6C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA6B70:
    ctx->pc = 0x80AA6B70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6B70u)) return;
    // 80AA6B70: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80AA6B74:
    ctx->pc = 0x80AA6B74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6B74u)) return;
    // 80AA6B74: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AA5000;
        }
    }

label_80AA6B78:
    ctx->pc = 0x80AA6B78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6B78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80AA6B78: stwu     r1, -32(r1)
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
label_80AA6B7C:
    ctx->pc = 0x80AA6B7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6B7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80AA6B7C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA6B80:
    ctx->pc = 0x80AA6B80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6B80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80AA6B80: stw     r0, 36(r1)
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
label_80AA6B84:
    ctx->pc = 0x80AA6B84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6B84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA6B84: stw     r31, 28(r1)
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
label_80AA6B88:
    ctx->pc = 0x80AA6B88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6B88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA6B88: stw     r30, 24(r1)
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
label_80AA6B8C:
    ctx->pc = 0x80AA6B8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6B8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AA6B8C: stw     r29, 20(r1)
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
label_80AA6B90:
    ctx->pc = 0x80AA6B90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6B90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA6B90: lwz     r31, 32(r3)
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
label_80AA6B94:
    ctx->pc = 0x80AA6B94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6B94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AA6B94: lwz     r30, 16(r31)
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
label_80AA6B98:
    ctx->pc = 0x80AA6B98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6B98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA6B98: lwz     r5, 28(r31)
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
label_80AA6B9C:
    ctx->pc = 0x80AA6B9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6B9Cu)) return;
    // 80AA6B9C: cmpwi   r5, 0
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

label_80AA6BA0:
    ctx->pc = 0x80AA6BA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6BA0u)) return;
    // 80AA6BA0: bc    4, 1, 0x80AA6BD8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AA6BD8;
        }
    }

label_80AA6BA4:
    ctx->pc = 0x80AA6BA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6BA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80AA6BA4: lwz     r4, 24(r31)
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
label_80AA6BA8:
    ctx->pc = 0x80AA6BA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6BA8u)) return;
    // 80AA6BA8: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80AA6BAC:
    ctx->pc = 0x80AA6BACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6BACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80AA6BAC: lwz     r0, 20(r31)
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
label_80AA6BB0:
    ctx->pc = 0x80AA6BB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80AA6BB0u)) return;
    // 80AA6BB0: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80AA6BB4:
    ctx->pc = 0x80AA6BB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6BB4u)) return;
    // 80AA6BB4: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80AA6BB8:
    ctx->pc = 0x80AA6BB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80AA6BB8u)) return;
    // 80AA6BB8: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80AA6BBC:
    ctx->pc = 0x80AA6BBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6BBCu)) return;
    // 80AA6BBC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80AA6BC0:
    ctx->pc = 0x80AA6BC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6BC0u)) return;
    // 80AA6BC0: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80AA6BC4:
    ctx->pc = 0x80AA6BC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6BC4u)) return;
    // 80AA6BC4: bl      0x80509C74
    {
            ctx->lr = 0x80AA6BC8u;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80AA6BC8:
    ctx->pc = 0x80AA6BC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6BC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AA6BC8: stw     r29, 20(r31)
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
label_80AA6BCC:
    ctx->pc = 0x80AA6BCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6BCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA6BCC: lwz     r3, 28(r31)
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
label_80AA6BD0:
    ctx->pc = 0x80AA6BD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6BD0u)) return;
    // 80AA6BD0: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80AA6BD4:
    ctx->pc = 0x80AA6BD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6BD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80AA6BD4: stw     r0, 28(r31)
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
label_80AA6BD8:
    ctx->pc = 0x80AA6BD8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6BD8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA6BD8: lwz     r5, 40(r31)
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
label_80AA6BDC:
    ctx->pc = 0x80AA6BDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6BDCu)) return;
    // 80AA6BDC: cmpwi   r5, 0
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

label_80AA6BE0:
    ctx->pc = 0x80AA6BE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6BE0u)) return;
    // 80AA6BE0: bc    4, 1, 0x80AA6C18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AA6C18;
        }
    }

label_80AA6BE4:
    ctx->pc = 0x80AA6BE4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6BE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80AA6BE4: lwz     r4, 36(r31)
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
label_80AA6BE8:
    ctx->pc = 0x80AA6BE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6BE8u)) return;
    // 80AA6BE8: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80AA6BEC:
    ctx->pc = 0x80AA6BECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6BECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80AA6BEC: lwz     r0, 32(r31)
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
label_80AA6BF0:
    ctx->pc = 0x80AA6BF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80AA6BF0u)) return;
    // 80AA6BF0: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80AA6BF4:
    ctx->pc = 0x80AA6BF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6BF4u)) return;
    // 80AA6BF4: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80AA6BF8:
    ctx->pc = 0x80AA6BF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80AA6BF8u)) return;
    // 80AA6BF8: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80AA6BFC:
    ctx->pc = 0x80AA6BFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6BFCu)) return;
    // 80AA6BFC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80AA6C00:
    ctx->pc = 0x80AA6C00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6C00u)) return;
    // 80AA6C00: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80AA6C04:
    ctx->pc = 0x80AA6C04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6C04u)) return;
    // 80AA6C04: bl      0x80509BF8
    {
            ctx->lr = 0x80AA6C08u;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80AA6C08:
    ctx->pc = 0x80AA6C08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6C08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AA6C08: stw     r29, 32(r31)
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
label_80AA6C0C:
    ctx->pc = 0x80AA6C0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6C0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA6C0C: lwz     r3, 40(r31)
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
label_80AA6C10:
    ctx->pc = 0x80AA6C10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6C10u)) return;
    // 80AA6C10: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80AA6C14:
    ctx->pc = 0x80AA6C14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6C14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80AA6C14: stw     r0, 40(r31)
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
label_80AA6C18:
    ctx->pc = 0x80AA6C18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6C18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA6C18: lwz     r5, 52(r31)
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
label_80AA6C1C:
    ctx->pc = 0x80AA6C1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6C1Cu)) return;
    // 80AA6C1C: cmpwi   r5, 0
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

label_80AA6C20:
    ctx->pc = 0x80AA6C20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6C20u)) return;
    // 80AA6C20: bc    4, 1, 0x80AA6C58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AA6C58;
        }
    }

label_80AA6C24:
    ctx->pc = 0x80AA6C24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6C24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80AA6C24: lwz     r4, 48(r31)
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
label_80AA6C28:
    ctx->pc = 0x80AA6C28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6C28u)) return;
    // 80AA6C28: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80AA6C2C:
    ctx->pc = 0x80AA6C2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6C2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80AA6C2C: lwz     r0, 44(r31)
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
label_80AA6C30:
    ctx->pc = 0x80AA6C30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80AA6C30u)) return;
    // 80AA6C30: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80AA6C34:
    ctx->pc = 0x80AA6C34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6C34u)) return;
    // 80AA6C34: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80AA6C38:
    ctx->pc = 0x80AA6C38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80AA6C38u)) return;
    // 80AA6C38: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80AA6C3C:
    ctx->pc = 0x80AA6C3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6C3Cu)) return;
    // 80AA6C3C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80AA6C40:
    ctx->pc = 0x80AA6C40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6C40u)) return;
    // 80AA6C40: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80AA6C44:
    ctx->pc = 0x80AA6C44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6C44u)) return;
    // 80AA6C44: bl      0x80509B94
    {
            ctx->lr = 0x80AA6C48u;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80AA6C48:
    ctx->pc = 0x80AA6C48u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6C48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AA6C48: stw     r29, 44(r31)
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
label_80AA6C4C:
    ctx->pc = 0x80AA6C4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6C4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA6C4C: lwz     r3, 52(r31)
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
label_80AA6C50:
    ctx->pc = 0x80AA6C50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6C50u)) return;
    // 80AA6C50: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80AA6C54:
    ctx->pc = 0x80AA6C54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6C54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80AA6C54: stw     r0, 52(r31)
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
label_80AA6C58:
    ctx->pc = 0x80AA6C58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6C58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA6C58: lwz     r31, 28(r1)
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
label_80AA6C5C:
    ctx->pc = 0x80AA6C5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6C5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA6C5C: lwz     r30, 24(r1)
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
label_80AA6C60:
    ctx->pc = 0x80AA6C60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6C60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AA6C60: lwz     r29, 20(r1)
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
label_80AA6C64:
    ctx->pc = 0x80AA6C64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6C64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA6C64: lwz     r0, 36(r1)
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
label_80AA6C68:
    ctx->pc = 0x80AA6C68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80AA6C68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA6C68: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA6C6C:
    ctx->pc = 0x80AA6C6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6C6Cu)) return;
    // 80AA6C6C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80AA6C70:
    ctx->pc = 0x80AA6C70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6C70u)) return;
    // 80AA6C70: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AA5000;
        }
    }

label_80AA6C74:
    ctx->pc = 0x80AA6C74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6C74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80AA6C74: stwu     r1, -32(r1)
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
label_80AA6C78:
    ctx->pc = 0x80AA6C78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6C78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80AA6C78: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA6C7C:
    ctx->pc = 0x80AA6C7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6C7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80AA6C7C: stw     r0, 36(r1)
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
label_80AA6C80:
    ctx->pc = 0x80AA6C80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6C80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80AA6C80: stw     r31, 28(r1)
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
label_80AA6C84:
    ctx->pc = 0x80AA6C84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6C84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA6C84: stw     r30, 24(r1)
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
label_80AA6C88:
    ctx->pc = 0x80AA6C88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6C88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA6C88: stw     r29, 20(r1)
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
label_80AA6C8C:
    ctx->pc = 0x80AA6C8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6C8Cu)) return;
    // 80AA6C8C: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80AA6C90:
    ctx->pc = 0x80AA6C90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6C90u)) return;
    // 80AA6C90: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80AA6C94:
    ctx->pc = 0x80AA6C94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6C94u)) return;
    // 80AA6C94: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80AA6C98:
    ctx->pc = 0x80AA6C98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6C98u)) return;
    // 80AA6C98: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80AA6C9C:
    ctx->pc = 0x80AA6C9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6C9Cu)) return;
    // 80AA6C9C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80AA6CA0:
    ctx->pc = 0x80AA6CA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6CA0u)) return;
    // 80AA6CA0: bl      0x8050FD60
    {
            ctx->lr = 0x80AA6CA4u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80AA6CA4:
    ctx->pc = 0x80AA6CA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6CA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AA6CA4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80AA6CA8:
    ctx->pc = 0x80AA6CA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6CA8u)) return;
    // 80AA6CA8: cmplwi  r31, 0x0000
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

label_80AA6CAC:
    ctx->pc = 0x80AA6CACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6CACu)) return;
    // 80AA6CAC: bc    12, 2, 0x80AA6D10
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80AA6D10;
        }
    }

label_80AA6CB0:
    ctx->pc = 0x80AA6CB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6CB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80AA6CB0: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80AA6CB4:
    ctx->pc = 0x80AA6CB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6CB4u)) return;
    // 80AA6CB4: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80AA6CB8:
    ctx->pc = 0x80AA6CB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6CB8u)) return;
    // 80AA6CB8: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80AA6CBC:
    ctx->pc = 0x80AA6CBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6CBCu)) return;
    // 80AA6CBC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80AA6CC0:
    ctx->pc = 0x80AA6CC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6CC0u)) return;
    // 80AA6CC0: or   r7, r30, r30
    {
        ctx->gpr[7] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80AA6CC4:
    ctx->pc = 0x80AA6CC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6CC4u)) return;
    // 80AA6CC4: bl      0x8050A0D4
    {
            ctx->lr = 0x80AA6CC8u;
            ctx->pc = 0x8050A0D4u;
            return;
    }

label_80AA6CC8:
    ctx->pc = 0x80AA6CC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 18u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6CC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 18u : 1u;
    // 80AA6CC8: lis     r3, -32598
    ctx->gpr[3] = ((u32)(s32)(-32598) << 16);

label_80AA6CCC:
    ctx->pc = 0x80AA6CCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6CCCu)) return;
    // 80AA6CCC: addi    r0, r3, 27512
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(27512);

label_80AA6CD0:
    ctx->pc = 0x80AA6CD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6CD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80AA6CD0: stw     r0, 16(r31)
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
label_80AA6CD4:
    ctx->pc = 0x80AA6CD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6CD4u)) return;
    // 80AA6CD4: lis     r3, -32598
    ctx->gpr[3] = ((u32)(s32)(-32598) << 16);

label_80AA6CD8:
    ctx->pc = 0x80AA6CD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6CD8u)) return;
    // 80AA6CD8: addi    r0, r3, 27472
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(27472);

label_80AA6CDC:
    ctx->pc = 0x80AA6CDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6CDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80AA6CDC: stw     r0, 24(r31)
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
label_80AA6CE0:
    ctx->pc = 0x80AA6CE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6CE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80AA6CE0: lwz     r3, 32(r31)
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
label_80AA6CE4:
    ctx->pc = 0x80AA6CE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6CE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80AA6CE4: stw     r31, 16(r3)
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
label_80AA6CE8:
    ctx->pc = 0x80AA6CE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6CE8u)) return;
    // 80AA6CE8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80AA6CEC:
    ctx->pc = 0x80AA6CECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6CECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80AA6CEC: stw     r0, 20(r3)
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
label_80AA6CF0:
    ctx->pc = 0x80AA6CF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6CF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA6CF0: stw     r0, 24(r3)
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
label_80AA6CF4:
    ctx->pc = 0x80AA6CF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6CF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA6CF4: stw     r0, 28(r3)
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
label_80AA6CF8:
    ctx->pc = 0x80AA6CF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6CF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AA6CF8: stw     r0, 32(r3)
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
label_80AA6CFC:
    ctx->pc = 0x80AA6CFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6CFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA6CFC: stw     r0, 36(r3)
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
label_80AA6D00:
    ctx->pc = 0x80AA6D00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6D00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AA6D00: stw     r0, 40(r3)
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
label_80AA6D04:
    ctx->pc = 0x80AA6D04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6D04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA6D04: stw     r0, 44(r3)
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
label_80AA6D08:
    ctx->pc = 0x80AA6D08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6D08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA6D08: stw     r0, 48(r3)
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
label_80AA6D0C:
    ctx->pc = 0x80AA6D0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6D0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80AA6D0C: stw     r0, 52(r3)
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
label_80AA6D10:
    ctx->pc = 0x80AA6D10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6D10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80AA6D10: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80AA6D14:
    ctx->pc = 0x80AA6D14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6D14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA6D14: lwz     r31, 28(r1)
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
label_80AA6D18:
    ctx->pc = 0x80AA6D18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6D18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA6D18: lwz     r30, 24(r1)
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
label_80AA6D1C:
    ctx->pc = 0x80AA6D1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6D1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AA6D1C: lwz     r29, 20(r1)
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
label_80AA6D20:
    ctx->pc = 0x80AA6D20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6D20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA6D20: lwz     r0, 36(r1)
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
label_80AA6D24:
    ctx->pc = 0x80AA6D24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80AA6D24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA6D24: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA6D28:
    ctx->pc = 0x80AA6D28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6D28u)) return;
    // 80AA6D28: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80AA6D2C:
    ctx->pc = 0x80AA6D2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6D2Cu)) return;
    // 80AA6D2C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AA5000;
        }
    }

label_80AA6D30:
    ctx->pc = 0x80AA6D30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6D30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80AA6D30: stwu     r1, -16(r1)
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
label_80AA6D34:
    ctx->pc = 0x80AA6D34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6D34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80AA6D34: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA6D38:
    ctx->pc = 0x80AA6D38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6D38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80AA6D38: stw     r0, 20(r1)
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
label_80AA6D3C:
    ctx->pc = 0x80AA6D3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6D3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA6D3C: stw     r31, 12(r1)
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
label_80AA6D40:
    ctx->pc = 0x80AA6D40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6D40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA6D40: stw     r30, 8(r1)
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
label_80AA6D44:
    ctx->pc = 0x80AA6D44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6D44u)) return;
    // 80AA6D44: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80AA6D48:
    ctx->pc = 0x80AA6D48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6D48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA6D48: lwz     r31, 32(r3)
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
label_80AA6D4C:
    ctx->pc = 0x80AA6D4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6D4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AA6D4C: stw     r30, 24(r31)
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
label_80AA6D50:
    ctx->pc = 0x80AA6D50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6D50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA6D50: stw     r5, 28(r31)
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
label_80AA6D54:
    ctx->pc = 0x80AA6D54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6D54u)) return;
    // 80AA6D54: cmpwi   r5, 0
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

label_80AA6D58:
    ctx->pc = 0x80AA6D58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6D58u)) return;
    // 80AA6D58: bc    12, 1, 0x80AA6D68
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80AA6D68;
        }
    }

label_80AA6D5C:
    ctx->pc = 0x80AA6D5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6D5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA6D5C: lwz     r3, 16(r31)
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
label_80AA6D60:
    ctx->pc = 0x80AA6D60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6D60u)) return;
    // 80AA6D60: bl      0x80509C74
    {
            ctx->lr = 0x80AA6D64u;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80AA6D64:
    ctx->pc = 0x80AA6D64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6D64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80AA6D64: stw     r30, 20(r31)
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
label_80AA6D68:
    ctx->pc = 0x80AA6D68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6D68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA6D68: lwz     r31, 12(r1)
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
label_80AA6D6C:
    ctx->pc = 0x80AA6D6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6D6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AA6D6C: lwz     r30, 8(r1)
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
label_80AA6D70:
    ctx->pc = 0x80AA6D70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6D70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA6D70: lwz     r0, 20(r1)
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
label_80AA6D74:
    ctx->pc = 0x80AA6D74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80AA6D74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA6D74: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA6D78:
    ctx->pc = 0x80AA6D78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6D78u)) return;
    // 80AA6D78: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80AA6D7C:
    ctx->pc = 0x80AA6D7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6D7Cu)) return;
    // 80AA6D7C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AA5000;
        }
    }

label_80AA6D80:
    ctx->pc = 0x80AA6D80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6D80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80AA6D80: stwu     r1, -16(r1)
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
label_80AA6D84:
    ctx->pc = 0x80AA6D84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6D84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80AA6D84: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA6D88:
    ctx->pc = 0x80AA6D88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6D88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80AA6D88: stw     r0, 20(r1)
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
label_80AA6D8C:
    ctx->pc = 0x80AA6D8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6D8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA6D8C: stw     r31, 12(r1)
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
label_80AA6D90:
    ctx->pc = 0x80AA6D90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6D90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA6D90: stw     r30, 8(r1)
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
label_80AA6D94:
    ctx->pc = 0x80AA6D94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6D94u)) return;
    // 80AA6D94: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80AA6D98:
    ctx->pc = 0x80AA6D98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6D98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA6D98: lwz     r31, 32(r3)
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
label_80AA6D9C:
    ctx->pc = 0x80AA6D9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6D9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AA6D9C: stw     r30, 36(r31)
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
label_80AA6DA0:
    ctx->pc = 0x80AA6DA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6DA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA6DA0: stw     r5, 40(r31)
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
label_80AA6DA4:
    ctx->pc = 0x80AA6DA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6DA4u)) return;
    // 80AA6DA4: cmpwi   r5, 0
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

label_80AA6DA8:
    ctx->pc = 0x80AA6DA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6DA8u)) return;
    // 80AA6DA8: bc    12, 1, 0x80AA6DB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80AA6DB8;
        }
    }

label_80AA6DAC:
    ctx->pc = 0x80AA6DACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6DACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA6DAC: lwz     r3, 16(r31)
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
label_80AA6DB0:
    ctx->pc = 0x80AA6DB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6DB0u)) return;
    // 80AA6DB0: bl      0x80509BF8
    {
            ctx->lr = 0x80AA6DB4u;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80AA6DB4:
    ctx->pc = 0x80AA6DB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6DB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80AA6DB4: stw     r30, 32(r31)
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
label_80AA6DB8:
    ctx->pc = 0x80AA6DB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6DB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA6DB8: lwz     r31, 12(r1)
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
label_80AA6DBC:
    ctx->pc = 0x80AA6DBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6DBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AA6DBC: lwz     r30, 8(r1)
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
label_80AA6DC0:
    ctx->pc = 0x80AA6DC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6DC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA6DC0: lwz     r0, 20(r1)
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
label_80AA6DC4:
    ctx->pc = 0x80AA6DC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80AA6DC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA6DC4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA6DC8:
    ctx->pc = 0x80AA6DC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6DC8u)) return;
    // 80AA6DC8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80AA6DCC:
    ctx->pc = 0x80AA6DCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6DCCu)) return;
    // 80AA6DCC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AA5000;
        }
    }

label_80AA6DD0:
    ctx->pc = 0x80AA6DD0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6DD0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80AA6DD0: stwu     r1, -16(r1)
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
label_80AA6DD4:
    ctx->pc = 0x80AA6DD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6DD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80AA6DD4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA6DD8:
    ctx->pc = 0x80AA6DD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6DD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80AA6DD8: stw     r0, 20(r1)
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
label_80AA6DDC:
    ctx->pc = 0x80AA6DDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6DDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA6DDC: stw     r31, 12(r1)
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
label_80AA6DE0:
    ctx->pc = 0x80AA6DE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6DE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA6DE0: stw     r30, 8(r1)
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
label_80AA6DE4:
    ctx->pc = 0x80AA6DE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6DE4u)) return;
    // 80AA6DE4: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80AA6DE8:
    ctx->pc = 0x80AA6DE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6DE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA6DE8: lwz     r31, 32(r3)
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
label_80AA6DEC:
    ctx->pc = 0x80AA6DECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6DECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AA6DEC: stw     r30, 48(r31)
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
label_80AA6DF0:
    ctx->pc = 0x80AA6DF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6DF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA6DF0: stw     r5, 52(r31)
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
label_80AA6DF4:
    ctx->pc = 0x80AA6DF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6DF4u)) return;
    // 80AA6DF4: cmpwi   r5, 0
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

label_80AA6DF8:
    ctx->pc = 0x80AA6DF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6DF8u)) return;
    // 80AA6DF8: bc    12, 1, 0x80AA6E08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80AA6E08;
        }
    }

label_80AA6DFC:
    ctx->pc = 0x80AA6DFCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6DFCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA6DFC: lwz     r3, 16(r31)
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
label_80AA6E00:
    ctx->pc = 0x80AA6E00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6E00u)) return;
    // 80AA6E00: bl      0x80509B94
    {
            ctx->lr = 0x80AA6E04u;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80AA6E04:
    ctx->pc = 0x80AA6E04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6E04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80AA6E04: stw     r30, 44(r31)
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
label_80AA6E08:
    ctx->pc = 0x80AA6E08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6E08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA6E08: lwz     r31, 12(r1)
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
label_80AA6E0C:
    ctx->pc = 0x80AA6E0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6E0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AA6E0C: lwz     r30, 8(r1)
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
label_80AA6E10:
    ctx->pc = 0x80AA6E10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6E10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA6E10: lwz     r0, 20(r1)
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
label_80AA6E14:
    ctx->pc = 0x80AA6E14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80AA6E14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA6E14: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA6E18:
    ctx->pc = 0x80AA6E18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6E18u)) return;
    // 80AA6E18: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80AA6E1C:
    ctx->pc = 0x80AA6E1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6E1Cu)) return;
    // 80AA6E1C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AA5000;
        }
    }

label_80AA6E20:
    ctx->pc = 0x80AA6E20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6E20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80AA6E20: stwu     r1, -16(r1)
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
label_80AA6E24:
    ctx->pc = 0x80AA6E24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6E24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80AA6E24: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA6E28:
    ctx->pc = 0x80AA6E28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6E28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA6E28: stw     r0, 20(r1)
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
label_80AA6E2C:
    ctx->pc = 0x80AA6E2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6E2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA6E2C: stw     r31, 12(r1)
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
label_80AA6E30:
    ctx->pc = 0x80AA6E30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6E30u)) return;
    // 80AA6E30: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80AA6E34:
    ctx->pc = 0x80AA6E34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6E34u)) return;
    // 80AA6E34: lis     r4, -27644
    ctx->gpr[4] = ((u32)(s32)(-27644) << 16);

label_80AA6E38:
    ctx->pc = 0x80AA6E38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6E38u)) return;
    // 80AA6E38: addi    r4, r4, -18452
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-18452);

label_80AA6E3C:
    ctx->pc = 0x80AA6E3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6E3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA6E3C: lwz     r0, 0(r4)
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
label_80AA6E40:
    ctx->pc = 0x80AA6E40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6E40u)) return;
    // 80AA6E40: cmplwi  r0, 0x0000
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

label_80AA6E44:
    ctx->pc = 0x80AA6E44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6E44u)) return;
    // 80AA6E44: bc    4, 2, 0x80AA6E68
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AA6E68;
        }
    }

label_80AA6E48:
    ctx->pc = 0x80AA6E48u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6E48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA6E48: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80AA6E4C:
    ctx->pc = 0x80AA6E4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6E4Cu)) return;
    // 80AA6E4C: bl      0x8050EEC0
    {
            ctx->lr = 0x80AA6E50u;
            ctx->pc = 0x8050EEC0u;
            return;
    }

label_80AA6E50:
    ctx->pc = 0x80AA6E50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6E50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80AA6E50: lis     r4, -27644
    ctx->gpr[4] = ((u32)(s32)(-27644) << 16);

label_80AA6E54:
    ctx->pc = 0x80AA6E54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6E54u)) return;
    // 80AA6E54: addi    r4, r4, -18452
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-18452);

label_80AA6E58:
    ctx->pc = 0x80AA6E58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6E58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AA6E58: stw     r3, 0(r4)
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
label_80AA6E5C:
    ctx->pc = 0x80AA6E5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6E5Cu)) return;
    // 80AA6E5C: lis     r3, -27644
    ctx->gpr[3] = ((u32)(s32)(-27644) << 16);

label_80AA6E60:
    ctx->pc = 0x80AA6E60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6E60u)) return;
    // 80AA6E60: addi    r3, r3, -18456
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-18456);

label_80AA6E64:
    ctx->pc = 0x80AA6E64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6E64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80AA6E64: stw     r31, 0(r3)
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
label_80AA6E68:
    ctx->pc = 0x80AA6E68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6E68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AA6E68: lwz     r31, 12(r1)
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
label_80AA6E6C:
    ctx->pc = 0x80AA6E6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6E6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA6E6C: lwz     r0, 20(r1)
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
label_80AA6E70:
    ctx->pc = 0x80AA6E70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80AA6E70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA6E70: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA6E74:
    ctx->pc = 0x80AA6E74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6E74u)) return;
    // 80AA6E74: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80AA6E78:
    ctx->pc = 0x80AA6E78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6E78u)) return;
    // 80AA6E78: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AA5000;
        }
    }

label_80AA6E7C:
    ctx->pc = 0x80AA6E7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6E7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80AA6E7C: stwu     r1, -32(r1)
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
label_80AA6E80:
    ctx->pc = 0x80AA6E80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6E80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80AA6E80: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA6E84:
    ctx->pc = 0x80AA6E84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6E84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80AA6E84: stw     r0, 36(r1)
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
label_80AA6E88:
    ctx->pc = 0x80AA6E88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6E88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80AA6E88: stw     r31, 28(r1)
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
label_80AA6E8C:
    ctx->pc = 0x80AA6E8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6E8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA6E8C: stw     r30, 24(r1)
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
label_80AA6E90:
    ctx->pc = 0x80AA6E90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6E90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA6E90: stw     r29, 20(r1)
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
label_80AA6E94:
    ctx->pc = 0x80AA6E94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6E94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AA6E94: stw     r28, 16(r1)
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
label_80AA6E98:
    ctx->pc = 0x80AA6E98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6E98u)) return;
    // 80AA6E98: lis     r3, -27644
    ctx->gpr[3] = ((u32)(s32)(-27644) << 16);

label_80AA6E9C:
    ctx->pc = 0x80AA6E9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6E9Cu)) return;
    // 80AA6E9C: addi    r30, r3, -18452
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(-18452);

label_80AA6EA0:
    ctx->pc = 0x80AA6EA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6EA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA6EA0: lwz     r0, 0(r30)
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
label_80AA6EA4:
    ctx->pc = 0x80AA6EA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6EA4u)) return;
    // 80AA6EA4: cmplwi  r0, 0x0000
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

label_80AA6EA8:
    ctx->pc = 0x80AA6EA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6EA8u)) return;
    // 80AA6EA8: bc    12, 2, 0x80AA6F08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80AA6F08;
        }
    }

label_80AA6EAC:
    ctx->pc = 0x80AA6EACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6EACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AA6EAC: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_80AA6EB0:
    ctx->pc = 0x80AA6EB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6EB0u)) return;
    // 80AA6EB0: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_80AA6EB4:
    ctx->pc = 0x80AA6EB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6EB4u)) return;
    // 80AA6EB4: lis     r3, -27644
    ctx->gpr[3] = ((u32)(s32)(-27644) << 16);

label_80AA6EB8:
    ctx->pc = 0x80AA6EB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6EB8u)) return;
    // 80AA6EB8: addi    r31, r3, -18456
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(-18456);

label_80AA6EBC:
    ctx->pc = 0x80AA6EBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6EBCu)) return;
    // 80AA6EBC: b       0x80AA6EDC
    {
            goto label_80AA6EDC;
    }

label_80AA6EC0:
    ctx->pc = 0x80AA6EC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6EC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AA6EC0: lwz     r3, 0(r30)
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
label_80AA6EC4:
    ctx->pc = 0x80AA6EC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6EC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA6EC4: lwzx    r3, r3, r29
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
label_80AA6EC8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6EC8u)) return;
    // 80AA6EC8: cmplwi  r3, 0x0000
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

label_80AA6ECC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6ECCu)) return;
    // 80AA6ECC: bc    12, 2, 0x80AA6ED4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80AA6ED4;
        }
    }

label_80AA6ED0:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6ED0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA6ED0: bl      0x8050F9E0
    {
            ctx->lr = 0x80AA6ED4u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80AA6ED4:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6ED4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AA6ED4: addi    r29, r29, 4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4);

label_80AA6ED8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6ED8u)) return;
    // 80AA6ED8: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_80AA6EDC:
    ctx->pc = 0x80AA6EDCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6EDCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA6EDC: lwz     r0, 0(r31)
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
label_80AA6EE0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6EE0u)) return;
    // 80AA6EE0: cmpw    r28, r0
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

label_80AA6EE4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6EE4u)) return;
    // 80AA6EE4: bc    12, 0, 0x80AA6EC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80AA6EC0u;
                return;
            }
            goto label_80AA6EC0;
        }
    }

label_80AA6EE8:
    ctx->pc = 0x80AA6EE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6EE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80AA6EE8: lis     r3, -27644
    ctx->gpr[3] = ((u32)(s32)(-27644) << 16);

label_80AA6EEC:
    ctx->pc = 0x80AA6EECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6EECu)) return;
    // 80AA6EEC: addi    r3, r3, -18452
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-18452);

label_80AA6EF0:
    ctx->pc = 0x80AA6EF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6EF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA6EF0: lwz     r3, 0(r3)
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
label_80AA6EF4:
    ctx->pc = 0x80AA6EF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6EF4u)) return;
    // 80AA6EF4: bl      0x8050ED40
    {
            ctx->lr = 0x80AA6EF8u;
            ctx->pc = 0x8050ED40u;
            return;
    }

label_80AA6EF8:
    ctx->pc = 0x80AA6EF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6EF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80AA6EF8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80AA6EFC:
    ctx->pc = 0x80AA6EFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6EFCu)) return;
    // 80AA6EFC: lis     r3, -27644
    ctx->gpr[3] = ((u32)(s32)(-27644) << 16);

label_80AA6F00:
    ctx->pc = 0x80AA6F00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6F00u)) return;
    // 80AA6F00: addi    r3, r3, -18452
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-18452);

label_80AA6F04:
    ctx->pc = 0x80AA6F04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6F04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80AA6F04: stw     r0, 0(r3)
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
label_80AA6F08:
    ctx->pc = 0x80AA6F08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6F08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80AA6F08: lwz     r31, 28(r1)
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
label_80AA6F0C:
    ctx->pc = 0x80AA6F0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6F0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA6F0C: lwz     r30, 24(r1)
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
label_80AA6F10:
    ctx->pc = 0x80AA6F10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6F10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA6F10: lwz     r29, 20(r1)
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
label_80AA6F14:
    ctx->pc = 0x80AA6F14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6F14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AA6F14: lwz     r28, 16(r1)
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
label_80AA6F18:
    ctx->pc = 0x80AA6F18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6F18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA6F18: lwz     r0, 36(r1)
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
label_80AA6F1C:
    ctx->pc = 0x80AA6F1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80AA6F1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA6F1C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA6F20:
    ctx->pc = 0x80AA6F20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6F20u)) return;
    // 80AA6F20: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80AA6F24:
    ctx->pc = 0x80AA6F24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6F24u)) return;
    // 80AA6F24: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AA5000;
        }
    }

label_80AA6F28:
    ctx->pc = 0x80AA6F28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6F28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80AA6F28: stwu     r1, -16(r1)
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
label_80AA6F2C:
    ctx->pc = 0x80AA6F2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6F2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA6F2C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA6F30:
    ctx->pc = 0x80AA6F30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6F30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA6F30: stw     r0, 20(r1)
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
label_80AA6F34:
    ctx->pc = 0x80AA6F34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6F34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AA6F34: stw     r31, 12(r1)
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
label_80AA6F38:
    ctx->pc = 0x80AA6F38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6F38u)) return;
    // 80AA6F38: lis     r6, -27644
    ctx->gpr[6] = ((u32)(s32)(-27644) << 16);

label_80AA6F3C:
    ctx->pc = 0x80AA6F3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6F3Cu)) return;
    // 80AA6F3C: addi    r6, r6, -18456
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-18456);

label_80AA6F40:
    ctx->pc = 0x80AA6F40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6F40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA6F40: lwz     r0, 0(r6)
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
label_80AA6F44:
    ctx->pc = 0x80AA6F44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6F44u)) return;
    // 80AA6F44: cmpw    r3, r0
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

label_80AA6F48:
    ctx->pc = 0x80AA6F48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6F48u)) return;
    // 80AA6F48: bc    4, 0, 0x80AA6F84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AA6F84;
        }
    }

label_80AA6F4C:
    ctx->pc = 0x80AA6F4Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6F4Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80AA6F4C: lis     r6, -27644
    ctx->gpr[6] = ((u32)(s32)(-27644) << 16);

label_80AA6F50:
    ctx->pc = 0x80AA6F50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6F50u)) return;
    // 80AA6F50: addi    r6, r6, -18452
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-18452);

label_80AA6F54:
    ctx->pc = 0x80AA6F54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6F54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA6F54: lwz     r6, 0(r6)
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
label_80AA6F58:
    ctx->pc = 0x80AA6F58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6F58u)) return;
    // 80AA6F58: rlwinm r31, r3, 2, 0, 29
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80AA6F5C:
    ctx->pc = 0x80AA6F5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6F5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA6F5C: lwzx    r0, r6, r31
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
label_80AA6F60:
    ctx->pc = 0x80AA6F60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6F60u)) return;
    // 80AA6F60: cmplwi  r0, 0x0000
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

label_80AA6F64:
    ctx->pc = 0x80AA6F64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6F64u)) return;
    // 80AA6F64: bc    4, 2, 0x80AA6F84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AA6F84;
        }
    }

label_80AA6F68:
    ctx->pc = 0x80AA6F68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6F68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AA6F68: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80AA6F6C:
    ctx->pc = 0x80AA6F6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6F6Cu)) return;
    // 80AA6F6C: or   r4, r5, r5
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80AA6F70:
    ctx->pc = 0x80AA6F70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6F70u)) return;
    // 80AA6F70: bl      0x80AA6C74
    {
            ctx->lr = 0x80AA6F74u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80AA6C74u;
                return;
            }
            goto label_80AA6C74;
    }

label_80AA6F74:
    ctx->pc = 0x80AA6F74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6F74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80AA6F74: lis     r4, -27644
    ctx->gpr[4] = ((u32)(s32)(-27644) << 16);

label_80AA6F78:
    ctx->pc = 0x80AA6F78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6F78u)) return;
    // 80AA6F78: addi    r4, r4, -18452
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-18452);

label_80AA6F7C:
    ctx->pc = 0x80AA6F7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6F7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA6F7C: lwz     r4, 0(r4)
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
label_80AA6F80:
    ctx->pc = 0x80AA6F80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6F80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80AA6F80: stwx    r3, r4, r31
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
label_80AA6F84:
    ctx->pc = 0x80AA6F84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6F84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AA6F84: lwz     r31, 12(r1)
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
label_80AA6F88:
    ctx->pc = 0x80AA6F88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6F88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA6F88: lwz     r0, 20(r1)
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
label_80AA6F8C:
    ctx->pc = 0x80AA6F8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80AA6F8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA6F8C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA6F90:
    ctx->pc = 0x80AA6F90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6F90u)) return;
    // 80AA6F90: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80AA6F94:
    ctx->pc = 0x80AA6F94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6F94u)) return;
    // 80AA6F94: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AA5000;
        }
    }

label_80AA6F98:
    ctx->pc = 0x80AA6F98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6F98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80AA6F98: stwu     r1, -16(r1)
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
label_80AA6F9C:
    ctx->pc = 0x80AA6F9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6F9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA6F9C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA6FA0:
    ctx->pc = 0x80AA6FA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6FA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA6FA0: stw     r0, 20(r1)
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
label_80AA6FA4:
    ctx->pc = 0x80AA6FA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6FA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AA6FA4: stw     r31, 12(r1)
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
label_80AA6FA8:
    ctx->pc = 0x80AA6FA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6FA8u)) return;
    // 80AA6FA8: lis     r4, -27644
    ctx->gpr[4] = ((u32)(s32)(-27644) << 16);

label_80AA6FAC:
    ctx->pc = 0x80AA6FACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6FACu)) return;
    // 80AA6FAC: addi    r4, r4, -18456
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-18456);

label_80AA6FB0:
    ctx->pc = 0x80AA6FB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6FB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA6FB0: lwz     r0, 0(r4)
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
label_80AA6FB4:
    ctx->pc = 0x80AA6FB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6FB4u)) return;
    // 80AA6FB4: cmpw    r3, r0
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

label_80AA6FB8:
    ctx->pc = 0x80AA6FB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6FB8u)) return;
    // 80AA6FB8: bc    4, 0, 0x80AA6FF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AA6FF0;
        }
    }

label_80AA6FBC:
    ctx->pc = 0x80AA6FBCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6FBCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80AA6FBC: lis     r4, -27644
    ctx->gpr[4] = ((u32)(s32)(-27644) << 16);

label_80AA6FC0:
    ctx->pc = 0x80AA6FC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6FC0u)) return;
    // 80AA6FC0: addi    r4, r4, -18452
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-18452);

label_80AA6FC4:
    ctx->pc = 0x80AA6FC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6FC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA6FC4: lwz     r4, 0(r4)
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
label_80AA6FC8:
    ctx->pc = 0x80AA6FC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6FC8u)) return;
    // 80AA6FC8: rlwinm r31, r3, 2, 0, 29
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80AA6FCC:
    ctx->pc = 0x80AA6FCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6FCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA6FCC: lwzx    r3, r4, r31
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
label_80AA6FD0:
    ctx->pc = 0x80AA6FD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6FD0u)) return;
    // 80AA6FD0: cmplwi  r3, 0x0000
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

label_80AA6FD4:
    ctx->pc = 0x80AA6FD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6FD4u)) return;
    // 80AA6FD4: bc    12, 2, 0x80AA6FF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80AA6FF0;
        }
    }

label_80AA6FD8:
    ctx->pc = 0x80AA6FD8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6FD8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA6FD8: bl      0x8050F9E0
    {
            ctx->lr = 0x80AA6FDCu;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80AA6FDC:
    ctx->pc = 0x80AA6FDCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6FDCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AA6FDC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80AA6FE0:
    ctx->pc = 0x80AA6FE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6FE0u)) return;
    // 80AA6FE0: lis     r3, -27644
    ctx->gpr[3] = ((u32)(s32)(-27644) << 16);

label_80AA6FE4:
    ctx->pc = 0x80AA6FE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6FE4u)) return;
    // 80AA6FE4: addi    r3, r3, -18452
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-18452);

label_80AA6FE8:
    ctx->pc = 0x80AA6FE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6FE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AA6FE8: lwz     r3, 0(r3)
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
label_80AA6FEC:
    ctx->pc = 0x80AA6FECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6FECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80AA6FEC: stwx    r0, r3, r31
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
label_80AA6FF0:
    ctx->pc = 0x80AA6FF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA6FF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AA6FF0: lwz     r31, 12(r1)
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
label_80AA6FF4:
    ctx->pc = 0x80AA6FF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6FF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA6FF4: lwz     r0, 20(r1)
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
label_80AA6FF8:
    ctx->pc = 0x80AA6FF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80AA6FF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA6FF8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA6FFC:
    ctx->pc = 0x80AA6FFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA6FFCu)) return;
    // 80AA6FFC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80AA7000:
    ctx->pc = 0x80AA7000u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7000u)) return;
    // 80AA7000: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AA5000;
        }
    }

label_80AA7004:
    ctx->pc = 0x80AA7004u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7004u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA7004: stwu     r1, -16(r1)
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
label_80AA7008:
    ctx->pc = 0x80AA7008u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7008u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA7008: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA700C:
    ctx->pc = 0x80AA700Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA700Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AA700C: stw     r0, 20(r1)
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
label_80AA7010:
    ctx->pc = 0x80AA7010u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7010u)) return;
    // 80AA7010: lis     r6, -27644
    ctx->gpr[6] = ((u32)(s32)(-27644) << 16);

label_80AA7014:
    ctx->pc = 0x80AA7014u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7014u)) return;
    // 80AA7014: addi    r6, r6, -18456
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-18456);

label_80AA7018:
    ctx->pc = 0x80AA7018u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7018u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA7018: lwz     r0, 0(r6)
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
label_80AA701C:
    ctx->pc = 0x80AA701Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA701Cu)) return;
    // 80AA701C: cmpw    r3, r0
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

label_80AA7020:
    ctx->pc = 0x80AA7020u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7020u)) return;
    // 80AA7020: bc    4, 0, 0x80AA7044
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AA7044;
        }
    }

label_80AA7024:
    ctx->pc = 0x80AA7024u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7024u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80AA7024: lis     r6, -27644
    ctx->gpr[6] = ((u32)(s32)(-27644) << 16);

label_80AA7028:
    ctx->pc = 0x80AA7028u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7028u)) return;
    // 80AA7028: addi    r6, r6, -18452
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-18452);

label_80AA702C:
    ctx->pc = 0x80AA702Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA702Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA702C: lwz     r6, 0(r6)
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
label_80AA7030:
    ctx->pc = 0x80AA7030u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7030u)) return;
    // 80AA7030: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80AA7034:
    ctx->pc = 0x80AA7034u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7034u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA7034: lwzx    r3, r6, r0
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
label_80AA7038:
    ctx->pc = 0x80AA7038u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7038u)) return;
    // 80AA7038: cmplwi  r3, 0x0000
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

label_80AA703C:
    ctx->pc = 0x80AA703Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA703Cu)) return;
    // 80AA703C: bc    12, 2, 0x80AA7044
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80AA7044;
        }
    }

label_80AA7040:
    ctx->pc = 0x80AA7040u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7040u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA7040: bl      0x80AA6D30
    {
            ctx->lr = 0x80AA7044u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80AA6D30u;
                return;
            }
            goto label_80AA6D30;
    }

label_80AA7044:
    ctx->pc = 0x80AA7044u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7044u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA7044: lwz     r0, 20(r1)
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
label_80AA7048:
    ctx->pc = 0x80AA7048u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80AA7048u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA7048: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA704C:
    ctx->pc = 0x80AA704Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA704Cu)) return;
    // 80AA704C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80AA7050:
    ctx->pc = 0x80AA7050u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7050u)) return;
    // 80AA7050: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AA5000;
        }
    }

label_80AA7054:
    ctx->pc = 0x80AA7054u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7054u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA7054: stwu     r1, -16(r1)
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
label_80AA7058:
    ctx->pc = 0x80AA7058u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7058u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA7058: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA705C:
    ctx->pc = 0x80AA705Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA705Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AA705C: stw     r0, 20(r1)
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
label_80AA7060:
    ctx->pc = 0x80AA7060u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7060u)) return;
    // 80AA7060: lis     r6, -27644
    ctx->gpr[6] = ((u32)(s32)(-27644) << 16);

label_80AA7064:
    ctx->pc = 0x80AA7064u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7064u)) return;
    // 80AA7064: addi    r6, r6, -18456
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-18456);

label_80AA7068:
    ctx->pc = 0x80AA7068u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7068u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA7068: lwz     r0, 0(r6)
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
label_80AA706C:
    ctx->pc = 0x80AA706Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA706Cu)) return;
    // 80AA706C: cmpw    r3, r0
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

label_80AA7070:
    ctx->pc = 0x80AA7070u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7070u)) return;
    // 80AA7070: bc    4, 0, 0x80AA7094
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AA7094;
        }
    }

label_80AA7074:
    ctx->pc = 0x80AA7074u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7074u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80AA7074: lis     r6, -27644
    ctx->gpr[6] = ((u32)(s32)(-27644) << 16);

label_80AA7078:
    ctx->pc = 0x80AA7078u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7078u)) return;
    // 80AA7078: addi    r6, r6, -18452
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-18452);

label_80AA707C:
    ctx->pc = 0x80AA707Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA707Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA707C: lwz     r6, 0(r6)
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
label_80AA7080:
    ctx->pc = 0x80AA7080u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7080u)) return;
    // 80AA7080: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80AA7084:
    ctx->pc = 0x80AA7084u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7084u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA7084: lwzx    r3, r6, r0
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
label_80AA7088:
    ctx->pc = 0x80AA7088u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7088u)) return;
    // 80AA7088: cmplwi  r3, 0x0000
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

label_80AA708C:
    ctx->pc = 0x80AA708Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA708Cu)) return;
    // 80AA708C: bc    12, 2, 0x80AA7094
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80AA7094;
        }
    }

label_80AA7090:
    ctx->pc = 0x80AA7090u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7090u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA7090: bl      0x80AA6D80
    {
            ctx->lr = 0x80AA7094u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80AA6D80u;
                return;
            }
            goto label_80AA6D80;
    }

label_80AA7094:
    ctx->pc = 0x80AA7094u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7094u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA7094: lwz     r0, 20(r1)
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
label_80AA7098:
    ctx->pc = 0x80AA7098u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80AA7098u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA7098: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA709C:
    ctx->pc = 0x80AA709Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA709Cu)) return;
    // 80AA709C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80AA70A0:
    ctx->pc = 0x80AA70A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA70A0u)) return;
    // 80AA70A0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AA5000;
        }
    }

label_80AA70A4:
    ctx->pc = 0x80AA70A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA70A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA70A4: stwu     r1, -16(r1)
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
label_80AA70A8:
    ctx->pc = 0x80AA70A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA70A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA70A8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA70AC:
    ctx->pc = 0x80AA70ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA70ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AA70AC: stw     r0, 20(r1)
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
label_80AA70B0:
    ctx->pc = 0x80AA70B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA70B0u)) return;
    // 80AA70B0: lis     r6, -27644
    ctx->gpr[6] = ((u32)(s32)(-27644) << 16);

label_80AA70B4:
    ctx->pc = 0x80AA70B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA70B4u)) return;
    // 80AA70B4: addi    r6, r6, -18456
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-18456);

label_80AA70B8:
    ctx->pc = 0x80AA70B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA70B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA70B8: lwz     r0, 0(r6)
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
label_80AA70BC:
    ctx->pc = 0x80AA70BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA70BCu)) return;
    // 80AA70BC: cmpw    r3, r0
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

label_80AA70C0:
    ctx->pc = 0x80AA70C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA70C0u)) return;
    // 80AA70C0: bc    4, 0, 0x80AA70E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AA70E4;
        }
    }

label_80AA70C4:
    ctx->pc = 0x80AA70C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA70C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80AA70C4: lis     r6, -27644
    ctx->gpr[6] = ((u32)(s32)(-27644) << 16);

label_80AA70C8:
    ctx->pc = 0x80AA70C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA70C8u)) return;
    // 80AA70C8: addi    r6, r6, -18452
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-18452);

label_80AA70CC:
    ctx->pc = 0x80AA70CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA70CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA70CC: lwz     r6, 0(r6)
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
label_80AA70D0:
    ctx->pc = 0x80AA70D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA70D0u)) return;
    // 80AA70D0: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80AA70D4:
    ctx->pc = 0x80AA70D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA70D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA70D4: lwzx    r3, r6, r0
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
label_80AA70D8:
    ctx->pc = 0x80AA70D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA70D8u)) return;
    // 80AA70D8: cmplwi  r3, 0x0000
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

label_80AA70DC:
    ctx->pc = 0x80AA70DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA70DCu)) return;
    // 80AA70DC: bc    12, 2, 0x80AA70E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80AA70E4;
        }
    }

label_80AA70E0:
    ctx->pc = 0x80AA70E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA70E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AA70E0: bl      0x80AA6DD0
    {
            ctx->lr = 0x80AA70E4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80AA6DD0u;
                return;
            }
            goto label_80AA6DD0;
    }

label_80AA70E4:
    ctx->pc = 0x80AA70E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA70E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA70E4: lwz     r0, 20(r1)
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
label_80AA70E8:
    ctx->pc = 0x80AA70E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80AA70E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA70E8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA70EC:
    ctx->pc = 0x80AA70ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA70ECu)) return;
    // 80AA70EC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80AA70F0:
    ctx->pc = 0x80AA70F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA70F0u)) return;
    // 80AA70F0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AA5000;
        }
    }

label_80AA70F4:
    ctx->pc = 0x80AA70F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA70F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80AA70F4: stwu     r1, -32(r1)
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
label_80AA70F8:
    ctx->pc = 0x80AA70F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA70F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80AA70F8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA70FC:
    ctx->pc = 0x80AA70FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA70FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80AA70FC: stw     r0, 36(r1)
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
label_80AA7100:
    ctx->pc = 0x80AA7100u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7100u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80AA7100: stw     r31, 28(r1)
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
label_80AA7104:
    ctx->pc = 0x80AA7104u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7104u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80AA7104: stw     r30, 24(r1)
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
label_80AA7108:
    ctx->pc = 0x80AA7108u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7108u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA7108: stw     r29, 20(r1)
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
label_80AA710C:
    ctx->pc = 0x80AA710Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA710Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA710C: stw     r28, 16(r1)
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
label_80AA7110:
    ctx->pc = 0x80AA7110u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7110u)) return;
    // 80AA7110: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80AA7114:
    ctx->pc = 0x80AA7114u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7114u)) return;
    // 80AA7114: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80AA7118:
    ctx->pc = 0x80AA7118u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7118u)) return;
    // 80AA7118: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80AA711C:
    ctx->pc = 0x80AA711Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA711Cu)) return;
    // 80AA711C: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_80AA7120:
    ctx->pc = 0x80AA7120u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7120u)) return;
    // 80AA7120: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AA7124:
    ctx->pc = 0x80AA7124u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7124u)) return;
    // 80AA7124: bl      0x80401DB0
    {
            ctx->lr = 0x80AA7128u;
            ctx->pc = 0x80401DB0u;
            return;
    }

label_80AA7128:
    ctx->pc = 0x80AA7128u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7128u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80AA7128: lis     r4, -27644
    ctx->gpr[4] = ((u32)(s32)(-27644) << 16);

label_80AA712C:
    ctx->pc = 0x80AA712Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA712Cu)) return;
    // 80AA712C: addi    r4, r4, -18448
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-18448);

label_80AA7130:
    ctx->pc = 0x80AA7130u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7130u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA7130: lwz     r0, 0(r4)
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
label_80AA7134:
    ctx->pc = 0x80AA7134u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7134u)) return;
    // 80AA7134: add   r4, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80AA7138:
    ctx->pc = 0x80AA7138u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7138u)) return;
    // 80AA7138: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80AA713C:
    ctx->pc = 0x80AA713Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA713Cu)) return;
    // 80AA713C: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80AA7140:
    ctx->pc = 0x80AA7140u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7140u)) return;
    // 80AA7140: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80AA7144:
    ctx->pc = 0x80AA7144u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7144u)) return;
    // 80AA7144: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80AA7148:
    ctx->pc = 0x80AA7148u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7148u)) return;
    // 80AA7148: li      r7, 120
    ctx->gpr[7] = (u32)(s32)(120);

label_80AA714C:
    ctx->pc = 0x80AA714Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA714Cu)) return;
    // 80AA714C: bl      0x8050A0D4
    {
            ctx->lr = 0x80AA7150u;
            ctx->pc = 0x8050A0D4u;
            return;
    }

label_80AA7150:
    ctx->pc = 0x80AA7150u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7150u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AA7150: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80AA7154:
    ctx->pc = 0x80AA7154u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7154u)) return;
    // 80AA7154: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80AA7158:
    ctx->pc = 0x80AA7158u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7158u)) return;
    // 80AA7158: bl      0x80509C74
    {
            ctx->lr = 0x80AA715Cu;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80AA715C:
    ctx->pc = 0x80AA715Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA715Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AA715C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80AA7160:
    ctx->pc = 0x80AA7160u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7160u)) return;
    // 80AA7160: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80AA7164:
    ctx->pc = 0x80AA7164u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7164u)) return;
    // 80AA7164: bl      0x80509BF8
    {
            ctx->lr = 0x80AA7168u;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80AA7168:
    ctx->pc = 0x80AA7168u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7168u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AA7168: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80AA716C:
    ctx->pc = 0x80AA716Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA716Cu)) return;
    // 80AA716C: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80AA7170:
    ctx->pc = 0x80AA7170u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7170u)) return;
    // 80AA7170: bl      0x80509B94
    {
            ctx->lr = 0x80AA7174u;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80AA7174:
    ctx->pc = 0x80AA7174u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AA7174u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80AA7174: lis     r3, -27644
    ctx->gpr[3] = ((u32)(s32)(-27644) << 16);

label_80AA7178:
    ctx->pc = 0x80AA7178u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7178u)) return;
    // 80AA7178: addi    r4, r3, -18448
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-18448);

label_80AA717C:
    ctx->pc = 0x80AA717Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA717Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80AA717C: lwz     r3, 0(r4)
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
label_80AA7180:
    ctx->pc = 0x80AA7180u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7180u)) return;
    // 80AA7180: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_80AA7184:
    ctx->pc = 0x80AA7184u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7184u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80AA7184: stw     r0, 0(r4)
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
label_80AA7188:
    ctx->pc = 0x80AA7188u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7188u)) return;
    // 80AA7188: rlwinm r0, r0, 0, 27, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000001Fu;
    }

label_80AA718C:
    ctx->pc = 0x80AA718Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA718Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80AA718C: stw     r0, 0(r4)
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
label_80AA7190:
    ctx->pc = 0x80AA7190u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7190u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80AA7190: lwz     r31, 28(r1)
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
label_80AA7194:
    ctx->pc = 0x80AA7194u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7194u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AA7194: lwz     r30, 24(r1)
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
label_80AA7198:
    ctx->pc = 0x80AA7198u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA7198u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AA7198: lwz     r29, 20(r1)
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
label_80AA719C:
    ctx->pc = 0x80AA719Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA719Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AA719C: lwz     r28, 16(r1)
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
label_80AA71A0:
    ctx->pc = 0x80AA71A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA71A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AA71A0: lwz     r0, 36(r1)
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
label_80AA71A4:
    ctx->pc = 0x80AA71A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80AA71A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AA71A4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AA71A8:
    ctx->pc = 0x80AA71A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA71A8u)) return;
    // 80AA71A8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80AA71AC:
    ctx->pc = 0x80AA71ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AA71ACu)) return;
    // 80AA71AC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AA5000;
        }
    }

    ctx->pc = 0x80AA71B0u;
    return;
return_dispatch_80AA5000:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80AA50B8u: goto label_80AA50B8;
    case 0x80AA50F4u: goto label_80AA50F4;
    case 0x80AA5290u: goto label_80AA5290;
    case 0x80AA529Cu: goto label_80AA529C;
    case 0x80AA52B4u: goto label_80AA52B4;
    case 0x80AA52CCu: goto label_80AA52CC;
    case 0x80AA52E4u: goto label_80AA52E4;
    case 0x80AA52F0u: goto label_80AA52F0;
    case 0x80AA5310u: goto label_80AA5310;
    case 0x80AA533Cu: goto label_80AA533C;
    case 0x80AA5348u: goto label_80AA5348;
    case 0x80AA5354u: goto label_80AA5354;
    case 0x80AA5370u: goto label_80AA5370;
    case 0x80AA5378u: goto label_80AA5378;
    case 0x80AA54BCu: goto label_80AA54BC;
    case 0x80AA54F8u: goto label_80AA54F8;
    case 0x80AA5504u: goto label_80AA5504;
    case 0x80AA5518u: goto label_80AA5518;
    case 0x80AA55E4u: goto label_80AA55E4;
    case 0x80AA5684u: goto label_80AA5684;
    case 0x80AA5748u: goto label_80AA5748;
    case 0x80AA5790u: goto label_80AA5790;
    case 0x80AA57D8u: goto label_80AA57D8;
    case 0x80AA582Cu: goto label_80AA582C;
    case 0x80AA5830u: goto label_80AA5830;
    case 0x80AA5834u: goto label_80AA5834;
    case 0x80AA583Cu: goto label_80AA583C;
    case 0x80AA5848u: goto label_80AA5848;
    case 0x80AA5850u: goto label_80AA5850;
    case 0x80AA5858u: goto label_80AA5858;
    case 0x80AA5888u: goto label_80AA5888;
    case 0x80AA589Cu: goto label_80AA589C;
    case 0x80AA58A0u: goto label_80AA58A0;
    case 0x80AA58B0u: goto label_80AA58B0;
    case 0x80AA58B8u: goto label_80AA58B8;
    case 0x80AA58E0u: goto label_80AA58E0;
    case 0x80AA58E8u: goto label_80AA58E8;
    case 0x80AA58F8u: goto label_80AA58F8;
    case 0x80AA5900u: goto label_80AA5900;
    case 0x80AA5928u: goto label_80AA5928;
    case 0x80AA5944u: goto label_80AA5944;
    case 0x80AA5974u: goto label_80AA5974;
    case 0x80AA597Cu: goto label_80AA597C;
    case 0x80AA59A0u: goto label_80AA59A0;
    case 0x80AA59A8u: goto label_80AA59A8;
    case 0x80AA59C4u: goto label_80AA59C4;
    case 0x80AA59F4u: goto label_80AA59F4;
    case 0x80AA59FCu: goto label_80AA59FC;
    case 0x80AA5A18u: goto label_80AA5A18;
    case 0x80AA5A48u: goto label_80AA5A48;
    case 0x80AA5A50u: goto label_80AA5A50;
    case 0x80AA5A58u: goto label_80AA5A58;
    case 0x80AA5A64u: goto label_80AA5A64;
    case 0x80AA5A6Cu: goto label_80AA5A6C;
    case 0x80AA5A88u: goto label_80AA5A88;
    case 0x80AA5AB8u: goto label_80AA5AB8;
    case 0x80AA5AC0u: goto label_80AA5AC0;
    case 0x80AA5ADCu: goto label_80AA5ADC;
    case 0x80AA5B0Cu: goto label_80AA5B0C;
    case 0x80AA5B3Cu: goto label_80AA5B3C;
    case 0x80AA5B44u: goto label_80AA5B44;
    case 0x80AA5B48u: goto label_80AA5B48;
    case 0x80AA5B58u: goto label_80AA5B58;
    case 0x80AA5B68u: goto label_80AA5B68;
    case 0x80AA5B70u: goto label_80AA5B70;
    case 0x80AA5B7Cu: goto label_80AA5B7C;
    case 0x80AA5B84u: goto label_80AA5B84;
    case 0x80AA5B94u: goto label_80AA5B94;
    case 0x80AA5B9Cu: goto label_80AA5B9C;
    case 0x80AA5BA4u: goto label_80AA5BA4;
    case 0x80AA5BCCu: goto label_80AA5BCC;
    case 0x80AA5BD4u: goto label_80AA5BD4;
    case 0x80AA5BDCu: goto label_80AA5BDC;
    case 0x80AA5BE0u: goto label_80AA5BE0;
    case 0x80AA5BE8u: goto label_80AA5BE8;
    case 0x80AA5C10u: goto label_80AA5C10;
    case 0x80AA5C18u: goto label_80AA5C18;
    case 0x80AA5C24u: goto label_80AA5C24;
    case 0x80AA5C2Cu: goto label_80AA5C2C;
    case 0x80AA5C34u: goto label_80AA5C34;
    case 0x80AA5C5Cu: goto label_80AA5C5C;
    case 0x80AA5C60u: goto label_80AA5C60;
    case 0x80AA5C84u: goto label_80AA5C84;
    case 0x80AA5C8Cu: goto label_80AA5C8C;
    case 0x80AA5C94u: goto label_80AA5C94;
    case 0x80AA5C98u: goto label_80AA5C98;
    case 0x80AA5CA0u: goto label_80AA5CA0;
    case 0x80AA5CC8u: goto label_80AA5CC8;
    case 0x80AA5CD0u: goto label_80AA5CD0;
    case 0x80AA5CF8u: goto label_80AA5CF8;
    case 0x80AA5D00u: goto label_80AA5D00;
    case 0x80AA5D10u: goto label_80AA5D10;
    case 0x80AA5D18u: goto label_80AA5D18;
    case 0x80AA5D40u: goto label_80AA5D40;
    case 0x80AA5D50u: goto label_80AA5D50;
    case 0x80AA5D58u: goto label_80AA5D58;
    case 0x80AA5D74u: goto label_80AA5D74;
    case 0x80AA5DA4u: goto label_80AA5DA4;
    case 0x80AA5DB4u: goto label_80AA5DB4;
    case 0x80AA5DD0u: goto label_80AA5DD0;
    case 0x80AA5E00u: goto label_80AA5E00;
    case 0x80AA5E08u: goto label_80AA5E08;
    case 0x80AA5E18u: goto label_80AA5E18;
    case 0x80AA5E20u: goto label_80AA5E20;
    case 0x80AA5E50u: goto label_80AA5E50;
    case 0x80AA5E58u: goto label_80AA5E58;
    case 0x80AA5E60u: goto label_80AA5E60;
    case 0x80AA5E68u: goto label_80AA5E68;
    case 0x80AA5E98u: goto label_80AA5E98;
    case 0x80AA5ED0u: goto label_80AA5ED0;
    case 0x80AA5EE0u: goto label_80AA5EE0;
    case 0x80AA5EE8u: goto label_80AA5EE8;
    case 0x80AA5EECu: goto label_80AA5EEC;
    case 0x80AA5EF4u: goto label_80AA5EF4;
    case 0x80AA5F1Cu: goto label_80AA5F1C;
    case 0x80AA5F24u: goto label_80AA5F24;
    case 0x80AA5F30u: goto label_80AA5F30;
    case 0x80AA5F40u: goto label_80AA5F40;
    case 0x80AA5F48u: goto label_80AA5F48;
    case 0x80AA5F6Cu: goto label_80AA5F6C;
    case 0x80AA5F74u: goto label_80AA5F74;
    case 0x80AA5F78u: goto label_80AA5F78;
    case 0x80AA5F80u: goto label_80AA5F80;
    case 0x80AA5FA8u: goto label_80AA5FA8;
    case 0x80AA5FB0u: goto label_80AA5FB0;
    case 0x80AA5FC4u: goto label_80AA5FC4;
    case 0x80AA5FCCu: goto label_80AA5FCC;
    case 0x80AA5FD0u: goto label_80AA5FD0;
    case 0x80AA5FE8u: goto label_80AA5FE8;
    case 0x80AA5FF0u: goto label_80AA5FF0;
    case 0x80AA5FF4u: goto label_80AA5FF4;
    case 0x80AA5FF8u: goto label_80AA5FF8;
    case 0x80AA6008u: goto label_80AA6008;
    case 0x80AA6024u: goto label_80AA6024;
    case 0x80AA6054u: goto label_80AA6054;
    case 0x80AA6070u: goto label_80AA6070;
    case 0x80AA60A0u: goto label_80AA60A0;
    case 0x80AA60A8u: goto label_80AA60A8;
    case 0x80AA60ACu: goto label_80AA60AC;
    case 0x80AA60B4u: goto label_80AA60B4;
    case 0x80AA60D0u: goto label_80AA60D0;
    case 0x80AA60DCu: goto label_80AA60DC;
    case 0x80AA6100u: goto label_80AA6100;
    case 0x80AA611Cu: goto label_80AA611C;
    case 0x80AA6128u: goto label_80AA6128;
    case 0x80AA612Cu: goto label_80AA612C;
    case 0x80AA6130u: goto label_80AA6130;
    case 0x80AA614Cu: goto label_80AA614C;
    case 0x80AA6150u: goto label_80AA6150;
    case 0x80AA616Cu: goto label_80AA616C;
    case 0x80AA6170u: goto label_80AA6170;
    case 0x80AA6188u: goto label_80AA6188;
    case 0x80AA61B8u: goto label_80AA61B8;
    case 0x80AA61C8u: goto label_80AA61C8;
    case 0x80AA61E0u: goto label_80AA61E0;
    case 0x80AA6210u: goto label_80AA6210;
    case 0x80AA6218u: goto label_80AA6218;
    case 0x80AA6220u: goto label_80AA6220;
    case 0x80AA6224u: goto label_80AA6224;
    case 0x80AA622Cu: goto label_80AA622C;
    case 0x80AA6254u: goto label_80AA6254;
    case 0x80AA625Cu: goto label_80AA625C;
    case 0x80AA6260u: goto label_80AA6260;
    case 0x80AA6268u: goto label_80AA6268;
    case 0x80AA6270u: goto label_80AA6270;
    case 0x80AA627Cu: goto label_80AA627C;
    case 0x80AA6294u: goto label_80AA6294;
    case 0x80AA62A4u: goto label_80AA62A4;
    case 0x80AA62B4u: goto label_80AA62B4;
    case 0x80AA62BCu: goto label_80AA62BC;
    case 0x80AA62C4u: goto label_80AA62C4;
    case 0x80AA62D0u: goto label_80AA62D0;
    case 0x80AA62E8u: goto label_80AA62E8;
    case 0x80AA62F0u: goto label_80AA62F0;
    case 0x80AA6308u: goto label_80AA6308;
    case 0x80AA6310u: goto label_80AA6310;
    case 0x80AA6328u: goto label_80AA6328;
    case 0x80AA6330u: goto label_80AA6330;
    case 0x80AA6348u: goto label_80AA6348;
    case 0x80AA6350u: goto label_80AA6350;
    case 0x80AA6368u: goto label_80AA6368;
    case 0x80AA6374u: goto label_80AA6374;
    case 0x80AA637Cu: goto label_80AA637C;
    case 0x80AA6394u: goto label_80AA6394;
    case 0x80AA639Cu: goto label_80AA639C;
    case 0x80AA63B4u: goto label_80AA63B4;
    case 0x80AA63BCu: goto label_80AA63BC;
    case 0x80AA63C4u: goto label_80AA63C4;
    case 0x80AA63C8u: goto label_80AA63C8;
    case 0x80AA63E0u: goto label_80AA63E0;
    case 0x80AA63E8u: goto label_80AA63E8;
    case 0x80AA6400u: goto label_80AA6400;
    case 0x80AA6408u: goto label_80AA6408;
    case 0x80AA6410u: goto label_80AA6410;
    case 0x80AA6434u: goto label_80AA6434;
    case 0x80AA643Cu: goto label_80AA643C;
    case 0x80AA6458u: goto label_80AA6458;
    case 0x80AA6464u: goto label_80AA6464;
    case 0x80AA6480u: goto label_80AA6480;
    case 0x80AA648Cu: goto label_80AA648C;
    case 0x80AA6494u: goto label_80AA6494;
    case 0x80AA649Cu: goto label_80AA649C;
    case 0x80AA64A0u: goto label_80AA64A0;
    case 0x80AA64A8u: goto label_80AA64A8;
    case 0x80AA64D0u: goto label_80AA64D0;
    case 0x80AA64ECu: goto label_80AA64EC;
    case 0x80AA651Cu: goto label_80AA651C;
    case 0x80AA6540u: goto label_80AA6540;
    case 0x80AA655Cu: goto label_80AA655C;
    case 0x80AA658Cu: goto label_80AA658C;
    case 0x80AA6594u: goto label_80AA6594;
    case 0x80AA659Cu: goto label_80AA659C;
    case 0x80AA65C4u: goto label_80AA65C4;
    case 0x80AA65CCu: goto label_80AA65CC;
    case 0x80AA65D0u: goto label_80AA65D0;
    case 0x80AA65D8u: goto label_80AA65D8;
    case 0x80AA6600u: goto label_80AA6600;
    case 0x80AA6604u: goto label_80AA6604;
    case 0x80AA6620u: goto label_80AA6620;
    case 0x80AA6624u: goto label_80AA6624;
    case 0x80AA6640u: goto label_80AA6640;
    case 0x80AA6644u: goto label_80AA6644;
    case 0x80AA6648u: goto label_80AA6648;
    case 0x80AA6664u: goto label_80AA6664;
    case 0x80AA6694u: goto label_80AA6694;
    case 0x80AA669Cu: goto label_80AA669C;
    case 0x80AA66A0u: goto label_80AA66A0;
    case 0x80AA66A8u: goto label_80AA66A8;
    case 0x80AA66D0u: goto label_80AA66D0;
    case 0x80AA66E0u: goto label_80AA66E0;
    case 0x80AA66E8u: goto label_80AA66E8;
    case 0x80AA66F4u: goto label_80AA66F4;
    case 0x80AA671Cu: goto label_80AA671C;
    case 0x80AA6724u: goto label_80AA6724;
    case 0x80AA6738u: goto label_80AA6738;
    case 0x80AA6740u: goto label_80AA6740;
    case 0x80AA6744u: goto label_80AA6744;
    case 0x80AA6748u: goto label_80AA6748;
    case 0x80AA674Cu: goto label_80AA674C;
    case 0x80AA6750u: goto label_80AA6750;
    case 0x80AA6768u: goto label_80AA6768;
    case 0x80AA6820u: goto label_80AA6820;
    case 0x80AA6848u: goto label_80AA6848;
    case 0x80AA68D4u: goto label_80AA68D4;
    case 0x80AA68E0u: goto label_80AA68E0;
    case 0x80AA6970u: goto label_80AA6970;
    case 0x80AA6978u: goto label_80AA6978;
    case 0x80AA69E0u: goto label_80AA69E0;
    case 0x80AA6A28u: goto label_80AA6A28;
    case 0x80AA6A94u: goto label_80AA6A94;
    case 0x80AA6B40u: goto label_80AA6B40;
    case 0x80AA6B68u: goto label_80AA6B68;
    case 0x80AA6BC8u: goto label_80AA6BC8;
    case 0x80AA6C08u: goto label_80AA6C08;
    case 0x80AA6C48u: goto label_80AA6C48;
    case 0x80AA6CA4u: goto label_80AA6CA4;
    case 0x80AA6CC8u: goto label_80AA6CC8;
    case 0x80AA6D64u: goto label_80AA6D64;
    case 0x80AA6DB4u: goto label_80AA6DB4;
    case 0x80AA6E04u: goto label_80AA6E04;
    case 0x80AA6E50u: goto label_80AA6E50;
    case 0x80AA6ED4u: goto label_80AA6ED4;
    case 0x80AA6EF8u: goto label_80AA6EF8;
    case 0x80AA6F74u: goto label_80AA6F74;
    case 0x80AA6FDCu: goto label_80AA6FDC;
    case 0x80AA7044u: goto label_80AA7044;
    case 0x80AA7094u: goto label_80AA7094;
    case 0x80AA70E4u: goto label_80AA70E4;
    case 0x80AA7128u: goto label_80AA7128;
    case 0x80AA7150u: goto label_80AA7150;
    case 0x80AA715Cu: goto label_80AA715C;
    case 0x80AA7168u: goto label_80AA7168;
    case 0x80AA7174u: goto label_80AA7174;
    default: return;
    }
}

