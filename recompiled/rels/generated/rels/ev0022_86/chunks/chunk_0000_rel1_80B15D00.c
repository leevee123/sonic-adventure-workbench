// DolRecomp output
#include "../generated.h"

void func_80B15D00(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80B15D00[1898] = {
        &&label_80B15D00,
        &&label_80B15D04,
        &&label_80B15D08,
        &&label_80B15D0C,
        &&label_80B15D10,
        &&label_80B15D14,
        &&label_80B15D18,
        &&label_80B15D1C,
        &&label_80B15D20,
        &&label_80B15D24,
        &&label_80B15D28,
        &&label_80B15D2C,
        &&label_80B15D30,
        &&label_80B15D34,
        &&label_80B15D38,
        &&label_80B15D3C,
        &&label_80B15D40,
        &&label_80B15D44,
        &&label_80B15D48,
        &&label_80B15D4C,
        &&label_80B15D50,
        &&label_80B15D54,
        &&label_80B15D58,
        &&label_80B15D5C,
        &&label_80B15D60,
        &&label_80B15D64,
        &&label_80B15D68,
        &&label_80B15D6C,
        &&label_80B15D70,
        &&label_80B15D74,
        &&label_80B15D78,
        &&label_80B15D7C,
        &&label_80B15D80,
        &&label_80B15D84,
        &&label_80B15D88,
        &&label_80B15D8C,
        &&label_80B15D90,
        &&label_80B15D94,
        &&label_80B15D98,
        &&label_80B15D9C,
        &&label_80B15DA0,
        &&label_80B15DA4,
        &&label_80B15DA8,
        &&label_80B15DAC,
        &&label_80B15DB0,
        &&label_80B15DB4,
        &&label_80B15DB8,
        &&label_80B15DBC,
        &&label_80B15DC0,
        &&label_80B15DC4,
        &&label_80B15DC8,
        &&label_80B15DCC,
        &&label_80B15DD0,
        &&label_80B15DD4,
        &&label_80B15DD8,
        &&label_80B15DDC,
        &&label_80B15DE0,
        &&label_80B15DE4,
        &&label_80B15DE8,
        &&label_80B15DEC,
        &&label_80B15DF0,
        &&label_80B15DF4,
        &&label_80B15DF8,
        &&label_80B15DFC,
        &&label_80B15E00,
        &&label_80B15E04,
        &&label_80B15E08,
        &&label_80B15E0C,
        &&label_80B15E10,
        &&label_80B15E14,
        &&label_80B15E18,
        &&label_80B15E1C,
        &&label_80B15E20,
        &&label_80B15E24,
        &&label_80B15E28,
        &&label_80B15E2C,
        &&label_80B15E30,
        &&label_80B15E34,
        &&label_80B15E38,
        &&label_80B15E3C,
        &&label_80B15E40,
        &&label_80B15E44,
        &&label_80B15E48,
        &&label_80B15E4C,
        &&label_80B15E50,
        &&label_80B15E54,
        &&label_80B15E58,
        &&label_80B15E5C,
        &&label_80B15E60,
        &&label_80B15E64,
        &&label_80B15E68,
        &&label_80B15E6C,
        &&label_80B15E70,
        &&label_80B15E74,
        &&label_80B15E78,
        &&label_80B15E7C,
        &&label_80B15E80,
        &&label_80B15E84,
        &&label_80B15E88,
        &&label_80B15E8C,
        &&label_80B15E90,
        &&label_80B15E94,
        &&label_80B15E98,
        &&label_80B15E9C,
        &&label_80B15EA0,
        &&label_80B15EA4,
        &&label_80B15EA8,
        &&label_80B15EAC,
        &&label_80B15EB0,
        &&label_80B15EB4,
        &&label_80B15EB8,
        &&label_80B15EBC,
        &&label_80B15EC0,
        &&label_80B15EC4,
        &&label_80B15EC8,
        &&label_80B15ECC,
        &&label_80B15ED0,
        &&label_80B15ED4,
        &&label_80B15ED8,
        &&label_80B15EDC,
        &&label_80B15EE0,
        &&label_80B15EE4,
        &&label_80B15EE8,
        &&label_80B15EEC,
        &&label_80B15EF0,
        &&label_80B15EF4,
        &&label_80B15EF8,
        &&label_80B15EFC,
        &&label_80B15F00,
        &&label_80B15F04,
        &&label_80B15F08,
        &&label_80B15F0C,
        &&label_80B15F10,
        &&label_80B15F14,
        &&label_80B15F18,
        &&label_80B15F1C,
        &&label_80B15F20,
        &&label_80B15F24,
        &&label_80B15F28,
        &&label_80B15F2C,
        &&label_80B15F30,
        &&label_80B15F34,
        &&label_80B15F38,
        &&label_80B15F3C,
        &&label_80B15F40,
        &&label_80B15F44,
        &&label_80B15F48,
        &&label_80B15F4C,
        &&label_80B15F50,
        &&label_80B15F54,
        &&label_80B15F58,
        &&label_80B15F5C,
        &&label_80B15F60,
        &&label_80B15F64,
        &&label_80B15F68,
        &&label_80B15F6C,
        &&label_80B15F70,
        &&label_80B15F74,
        &&label_80B15F78,
        &&label_80B15F7C,
        &&label_80B15F80,
        &&label_80B15F84,
        &&label_80B15F88,
        &&label_80B15F8C,
        &&label_80B15F90,
        &&label_80B15F94,
        &&label_80B15F98,
        &&label_80B15F9C,
        &&label_80B15FA0,
        &&label_80B15FA4,
        &&label_80B15FA8,
        &&label_80B15FAC,
        &&label_80B15FB0,
        &&label_80B15FB4,
        &&label_80B15FB8,
        &&label_80B15FBC,
        &&label_80B15FC0,
        &&label_80B15FC4,
        &&label_80B15FC8,
        &&label_80B15FCC,
        &&label_80B15FD0,
        &&label_80B15FD4,
        &&label_80B15FD8,
        &&label_80B15FDC,
        &&label_80B15FE0,
        &&label_80B15FE4,
        &&label_80B15FE8,
        &&label_80B15FEC,
        &&label_80B15FF0,
        &&label_80B15FF4,
        &&label_80B15FF8,
        &&label_80B15FFC,
        &&label_80B16000,
        &&label_80B16004,
        &&label_80B16008,
        &&label_80B1600C,
        &&label_80B16010,
        &&label_80B16014,
        &&label_80B16018,
        &&label_80B1601C,
        &&label_80B16020,
        &&label_80B16024,
        &&label_80B16028,
        &&label_80B1602C,
        &&label_80B16030,
        &&label_80B16034,
        &&label_80B16038,
        &&label_80B1603C,
        &&label_80B16040,
        &&label_80B16044,
        &&label_80B16048,
        &&label_80B1604C,
        &&label_80B16050,
        &&label_80B16054,
        &&label_80B16058,
        &&label_80B1605C,
        &&label_80B16060,
        &&label_80B16064,
        &&label_80B16068,
        &&label_80B1606C,
        &&label_80B16070,
        &&label_80B16074,
        &&label_80B16078,
        &&label_80B1607C,
        &&label_80B16080,
        &&label_80B16084,
        &&label_80B16088,
        &&label_80B1608C,
        &&label_80B16090,
        &&label_80B16094,
        &&label_80B16098,
        &&label_80B1609C,
        &&label_80B160A0,
        &&label_80B160A4,
        &&label_80B160A8,
        &&label_80B160AC,
        &&label_80B160B0,
        &&label_80B160B4,
        &&label_80B160B8,
        &&label_80B160BC,
        &&label_80B160C0,
        &&label_80B160C4,
        &&label_80B160C8,
        &&label_80B160CC,
        &&label_80B160D0,
        &&label_80B160D4,
        &&label_80B160D8,
        &&label_80B160DC,
        &&label_80B160E0,
        &&label_80B160E4,
        &&label_80B160E8,
        &&label_80B160EC,
        &&label_80B160F0,
        &&label_80B160F4,
        &&label_80B160F8,
        &&label_80B160FC,
        &&label_80B16100,
        &&label_80B16104,
        &&label_80B16108,
        &&label_80B1610C,
        &&label_80B16110,
        &&label_80B16114,
        &&label_80B16118,
        &&label_80B1611C,
        &&label_80B16120,
        &&label_80B16124,
        &&label_80B16128,
        &&label_80B1612C,
        &&label_80B16130,
        &&label_80B16134,
        &&label_80B16138,
        &&label_80B1613C,
        &&label_80B16140,
        &&label_80B16144,
        &&label_80B16148,
        &&label_80B1614C,
        &&label_80B16150,
        &&label_80B16154,
        &&label_80B16158,
        &&label_80B1615C,
        &&label_80B16160,
        &&label_80B16164,
        &&label_80B16168,
        &&label_80B1616C,
        &&label_80B16170,
        &&label_80B16174,
        &&label_80B16178,
        &&label_80B1617C,
        &&label_80B16180,
        &&label_80B16184,
        &&label_80B16188,
        &&label_80B1618C,
        &&label_80B16190,
        &&label_80B16194,
        &&label_80B16198,
        &&label_80B1619C,
        &&label_80B161A0,
        &&label_80B161A4,
        &&label_80B161A8,
        &&label_80B161AC,
        &&label_80B161B0,
        &&label_80B161B4,
        &&label_80B161B8,
        &&label_80B161BC,
        &&label_80B161C0,
        &&label_80B161C4,
        &&label_80B161C8,
        &&label_80B161CC,
        &&label_80B161D0,
        &&label_80B161D4,
        &&label_80B161D8,
        &&label_80B161DC,
        &&label_80B161E0,
        &&label_80B161E4,
        &&label_80B161E8,
        &&label_80B161EC,
        &&label_80B161F0,
        &&label_80B161F4,
        &&label_80B161F8,
        &&label_80B161FC,
        &&label_80B16200,
        &&label_80B16204,
        &&label_80B16208,
        &&label_80B1620C,
        &&label_80B16210,
        &&label_80B16214,
        &&label_80B16218,
        &&label_80B1621C,
        &&label_80B16220,
        &&label_80B16224,
        &&label_80B16228,
        &&label_80B1622C,
        &&label_80B16230,
        &&label_80B16234,
        &&label_80B16238,
        &&label_80B1623C,
        &&label_80B16240,
        &&label_80B16244,
        &&label_80B16248,
        &&label_80B1624C,
        &&label_80B16250,
        &&label_80B16254,
        &&label_80B16258,
        &&label_80B1625C,
        &&label_80B16260,
        &&label_80B16264,
        &&label_80B16268,
        &&label_80B1626C,
        &&label_80B16270,
        &&label_80B16274,
        &&label_80B16278,
        &&label_80B1627C,
        &&label_80B16280,
        &&label_80B16284,
        &&label_80B16288,
        &&label_80B1628C,
        &&label_80B16290,
        &&label_80B16294,
        &&label_80B16298,
        &&label_80B1629C,
        &&label_80B162A0,
        &&label_80B162A4,
        &&label_80B162A8,
        &&label_80B162AC,
        &&label_80B162B0,
        &&label_80B162B4,
        &&label_80B162B8,
        &&label_80B162BC,
        &&label_80B162C0,
        &&label_80B162C4,
        &&label_80B162C8,
        &&label_80B162CC,
        &&label_80B162D0,
        &&label_80B162D4,
        &&label_80B162D8,
        &&label_80B162DC,
        &&label_80B162E0,
        &&label_80B162E4,
        &&label_80B162E8,
        &&label_80B162EC,
        &&label_80B162F0,
        &&label_80B162F4,
        &&label_80B162F8,
        &&label_80B162FC,
        &&label_80B16300,
        &&label_80B16304,
        &&label_80B16308,
        &&label_80B1630C,
        &&label_80B16310,
        &&label_80B16314,
        &&label_80B16318,
        &&label_80B1631C,
        &&label_80B16320,
        &&label_80B16324,
        &&label_80B16328,
        &&label_80B1632C,
        &&label_80B16330,
        &&label_80B16334,
        &&label_80B16338,
        &&label_80B1633C,
        &&label_80B16340,
        &&label_80B16344,
        &&label_80B16348,
        &&label_80B1634C,
        &&label_80B16350,
        &&label_80B16354,
        &&label_80B16358,
        &&label_80B1635C,
        &&label_80B16360,
        &&label_80B16364,
        &&label_80B16368,
        &&label_80B1636C,
        &&label_80B16370,
        &&label_80B16374,
        &&label_80B16378,
        &&label_80B1637C,
        &&label_80B16380,
        &&label_80B16384,
        &&label_80B16388,
        &&label_80B1638C,
        &&label_80B16390,
        &&label_80B16394,
        &&label_80B16398,
        &&label_80B1639C,
        &&label_80B163A0,
        &&label_80B163A4,
        &&label_80B163A8,
        &&label_80B163AC,
        &&label_80B163B0,
        &&label_80B163B4,
        &&label_80B163B8,
        &&label_80B163BC,
        &&label_80B163C0,
        &&label_80B163C4,
        &&label_80B163C8,
        &&label_80B163CC,
        &&label_80B163D0,
        &&label_80B163D4,
        &&label_80B163D8,
        &&label_80B163DC,
        &&label_80B163E0,
        &&label_80B163E4,
        &&label_80B163E8,
        &&label_80B163EC,
        &&label_80B163F0,
        &&label_80B163F4,
        &&label_80B163F8,
        &&label_80B163FC,
        &&label_80B16400,
        &&label_80B16404,
        &&label_80B16408,
        &&label_80B1640C,
        &&label_80B16410,
        &&label_80B16414,
        &&label_80B16418,
        &&label_80B1641C,
        &&label_80B16420,
        &&label_80B16424,
        &&label_80B16428,
        &&label_80B1642C,
        &&label_80B16430,
        &&label_80B16434,
        &&label_80B16438,
        &&label_80B1643C,
        &&label_80B16440,
        &&label_80B16444,
        &&label_80B16448,
        &&label_80B1644C,
        &&label_80B16450,
        &&label_80B16454,
        &&label_80B16458,
        &&label_80B1645C,
        &&label_80B16460,
        &&label_80B16464,
        &&label_80B16468,
        &&label_80B1646C,
        &&label_80B16470,
        &&label_80B16474,
        &&label_80B16478,
        &&label_80B1647C,
        &&label_80B16480,
        &&label_80B16484,
        &&label_80B16488,
        &&label_80B1648C,
        &&label_80B16490,
        &&label_80B16494,
        &&label_80B16498,
        &&label_80B1649C,
        &&label_80B164A0,
        &&label_80B164A4,
        &&label_80B164A8,
        &&label_80B164AC,
        &&label_80B164B0,
        &&label_80B164B4,
        &&label_80B164B8,
        &&label_80B164BC,
        &&label_80B164C0,
        &&label_80B164C4,
        &&label_80B164C8,
        &&label_80B164CC,
        &&label_80B164D0,
        &&label_80B164D4,
        &&label_80B164D8,
        &&label_80B164DC,
        &&label_80B164E0,
        &&label_80B164E4,
        &&label_80B164E8,
        &&label_80B164EC,
        &&label_80B164F0,
        &&label_80B164F4,
        &&label_80B164F8,
        &&label_80B164FC,
        &&label_80B16500,
        &&label_80B16504,
        &&label_80B16508,
        &&label_80B1650C,
        &&label_80B16510,
        &&label_80B16514,
        &&label_80B16518,
        &&label_80B1651C,
        &&label_80B16520,
        &&label_80B16524,
        &&label_80B16528,
        &&label_80B1652C,
        &&label_80B16530,
        &&label_80B16534,
        &&label_80B16538,
        &&label_80B1653C,
        &&label_80B16540,
        &&label_80B16544,
        &&label_80B16548,
        &&label_80B1654C,
        &&label_80B16550,
        &&label_80B16554,
        &&label_80B16558,
        &&label_80B1655C,
        &&label_80B16560,
        &&label_80B16564,
        &&label_80B16568,
        &&label_80B1656C,
        &&label_80B16570,
        &&label_80B16574,
        &&label_80B16578,
        &&label_80B1657C,
        &&label_80B16580,
        &&label_80B16584,
        &&label_80B16588,
        &&label_80B1658C,
        &&label_80B16590,
        &&label_80B16594,
        &&label_80B16598,
        &&label_80B1659C,
        &&label_80B165A0,
        &&label_80B165A4,
        &&label_80B165A8,
        &&label_80B165AC,
        &&label_80B165B0,
        &&label_80B165B4,
        &&label_80B165B8,
        &&label_80B165BC,
        &&label_80B165C0,
        &&label_80B165C4,
        &&label_80B165C8,
        &&label_80B165CC,
        &&label_80B165D0,
        &&label_80B165D4,
        &&label_80B165D8,
        &&label_80B165DC,
        &&label_80B165E0,
        &&label_80B165E4,
        &&label_80B165E8,
        &&label_80B165EC,
        &&label_80B165F0,
        &&label_80B165F4,
        &&label_80B165F8,
        &&label_80B165FC,
        &&label_80B16600,
        &&label_80B16604,
        &&label_80B16608,
        &&label_80B1660C,
        &&label_80B16610,
        &&label_80B16614,
        &&label_80B16618,
        &&label_80B1661C,
        &&label_80B16620,
        &&label_80B16624,
        &&label_80B16628,
        &&label_80B1662C,
        &&label_80B16630,
        &&label_80B16634,
        &&label_80B16638,
        &&label_80B1663C,
        &&label_80B16640,
        &&label_80B16644,
        &&label_80B16648,
        &&label_80B1664C,
        &&label_80B16650,
        &&label_80B16654,
        &&label_80B16658,
        &&label_80B1665C,
        &&label_80B16660,
        &&label_80B16664,
        &&label_80B16668,
        &&label_80B1666C,
        &&label_80B16670,
        &&label_80B16674,
        &&label_80B16678,
        &&label_80B1667C,
        &&label_80B16680,
        &&label_80B16684,
        &&label_80B16688,
        &&label_80B1668C,
        &&label_80B16690,
        &&label_80B16694,
        &&label_80B16698,
        &&label_80B1669C,
        &&label_80B166A0,
        &&label_80B166A4,
        &&label_80B166A8,
        &&label_80B166AC,
        &&label_80B166B0,
        &&label_80B166B4,
        &&label_80B166B8,
        &&label_80B166BC,
        &&label_80B166C0,
        &&label_80B166C4,
        &&label_80B166C8,
        &&label_80B166CC,
        &&label_80B166D0,
        &&label_80B166D4,
        &&label_80B166D8,
        &&label_80B166DC,
        &&label_80B166E0,
        &&label_80B166E4,
        &&label_80B166E8,
        &&label_80B166EC,
        &&label_80B166F0,
        &&label_80B166F4,
        &&label_80B166F8,
        &&label_80B166FC,
        &&label_80B16700,
        &&label_80B16704,
        &&label_80B16708,
        &&label_80B1670C,
        &&label_80B16710,
        &&label_80B16714,
        &&label_80B16718,
        &&label_80B1671C,
        &&label_80B16720,
        &&label_80B16724,
        &&label_80B16728,
        &&label_80B1672C,
        &&label_80B16730,
        &&label_80B16734,
        &&label_80B16738,
        &&label_80B1673C,
        &&label_80B16740,
        &&label_80B16744,
        &&label_80B16748,
        &&label_80B1674C,
        &&label_80B16750,
        &&label_80B16754,
        &&label_80B16758,
        &&label_80B1675C,
        &&label_80B16760,
        &&label_80B16764,
        &&label_80B16768,
        &&label_80B1676C,
        &&label_80B16770,
        &&label_80B16774,
        &&label_80B16778,
        &&label_80B1677C,
        &&label_80B16780,
        &&label_80B16784,
        &&label_80B16788,
        &&label_80B1678C,
        &&label_80B16790,
        &&label_80B16794,
        &&label_80B16798,
        &&label_80B1679C,
        &&label_80B167A0,
        &&label_80B167A4,
        &&label_80B167A8,
        &&label_80B167AC,
        &&label_80B167B0,
        &&label_80B167B4,
        &&label_80B167B8,
        &&label_80B167BC,
        &&label_80B167C0,
        &&label_80B167C4,
        &&label_80B167C8,
        &&label_80B167CC,
        &&label_80B167D0,
        &&label_80B167D4,
        &&label_80B167D8,
        &&label_80B167DC,
        &&label_80B167E0,
        &&label_80B167E4,
        &&label_80B167E8,
        &&label_80B167EC,
        &&label_80B167F0,
        &&label_80B167F4,
        &&label_80B167F8,
        &&label_80B167FC,
        &&label_80B16800,
        &&label_80B16804,
        &&label_80B16808,
        &&label_80B1680C,
        &&label_80B16810,
        &&label_80B16814,
        &&label_80B16818,
        &&label_80B1681C,
        &&label_80B16820,
        &&label_80B16824,
        &&label_80B16828,
        &&label_80B1682C,
        &&label_80B16830,
        &&label_80B16834,
        &&label_80B16838,
        &&label_80B1683C,
        &&label_80B16840,
        &&label_80B16844,
        &&label_80B16848,
        &&label_80B1684C,
        &&label_80B16850,
        &&label_80B16854,
        &&label_80B16858,
        &&label_80B1685C,
        &&label_80B16860,
        &&label_80B16864,
        &&label_80B16868,
        &&label_80B1686C,
        &&label_80B16870,
        &&label_80B16874,
        &&label_80B16878,
        &&label_80B1687C,
        &&label_80B16880,
        &&label_80B16884,
        &&label_80B16888,
        &&label_80B1688C,
        &&label_80B16890,
        &&label_80B16894,
        &&label_80B16898,
        &&label_80B1689C,
        &&label_80B168A0,
        &&label_80B168A4,
        &&label_80B168A8,
        &&label_80B168AC,
        &&label_80B168B0,
        &&label_80B168B4,
        &&label_80B168B8,
        &&label_80B168BC,
        &&label_80B168C0,
        &&label_80B168C4,
        &&label_80B168C8,
        &&label_80B168CC,
        &&label_80B168D0,
        &&label_80B168D4,
        &&label_80B168D8,
        &&label_80B168DC,
        &&label_80B168E0,
        &&label_80B168E4,
        &&label_80B168E8,
        &&label_80B168EC,
        &&label_80B168F0,
        &&label_80B168F4,
        &&label_80B168F8,
        &&label_80B168FC,
        &&label_80B16900,
        &&label_80B16904,
        &&label_80B16908,
        &&label_80B1690C,
        &&label_80B16910,
        &&label_80B16914,
        &&label_80B16918,
        &&label_80B1691C,
        &&label_80B16920,
        &&label_80B16924,
        &&label_80B16928,
        &&label_80B1692C,
        &&label_80B16930,
        &&label_80B16934,
        &&label_80B16938,
        &&label_80B1693C,
        &&label_80B16940,
        &&label_80B16944,
        &&label_80B16948,
        &&label_80B1694C,
        &&label_80B16950,
        &&label_80B16954,
        &&label_80B16958,
        &&label_80B1695C,
        &&label_80B16960,
        &&label_80B16964,
        &&label_80B16968,
        &&label_80B1696C,
        &&label_80B16970,
        &&label_80B16974,
        &&label_80B16978,
        &&label_80B1697C,
        &&label_80B16980,
        &&label_80B16984,
        &&label_80B16988,
        &&label_80B1698C,
        &&label_80B16990,
        &&label_80B16994,
        &&label_80B16998,
        &&label_80B1699C,
        &&label_80B169A0,
        &&label_80B169A4,
        &&label_80B169A8,
        &&label_80B169AC,
        &&label_80B169B0,
        &&label_80B169B4,
        &&label_80B169B8,
        &&label_80B169BC,
        &&label_80B169C0,
        &&label_80B169C4,
        &&label_80B169C8,
        &&label_80B169CC,
        &&label_80B169D0,
        &&label_80B169D4,
        &&label_80B169D8,
        &&label_80B169DC,
        &&label_80B169E0,
        &&label_80B169E4,
        &&label_80B169E8,
        &&label_80B169EC,
        &&label_80B169F0,
        &&label_80B169F4,
        &&label_80B169F8,
        &&label_80B169FC,
        &&label_80B16A00,
        &&label_80B16A04,
        &&label_80B16A08,
        &&label_80B16A0C,
        &&label_80B16A10,
        &&label_80B16A14,
        &&label_80B16A18,
        &&label_80B16A1C,
        &&label_80B16A20,
        &&label_80B16A24,
        &&label_80B16A28,
        &&label_80B16A2C,
        &&label_80B16A30,
        &&label_80B16A34,
        &&label_80B16A38,
        &&label_80B16A3C,
        &&label_80B16A40,
        &&label_80B16A44,
        &&label_80B16A48,
        &&label_80B16A4C,
        &&label_80B16A50,
        &&label_80B16A54,
        &&label_80B16A58,
        &&label_80B16A5C,
        &&label_80B16A60,
        &&label_80B16A64,
        &&label_80B16A68,
        &&label_80B16A6C,
        &&label_80B16A70,
        &&label_80B16A74,
        &&label_80B16A78,
        &&label_80B16A7C,
        &&label_80B16A80,
        &&label_80B16A84,
        &&label_80B16A88,
        &&label_80B16A8C,
        &&label_80B16A90,
        &&label_80B16A94,
        &&label_80B16A98,
        &&label_80B16A9C,
        &&label_80B16AA0,
        &&label_80B16AA4,
        &&label_80B16AA8,
        &&label_80B16AAC,
        &&label_80B16AB0,
        &&label_80B16AB4,
        &&label_80B16AB8,
        &&label_80B16ABC,
        &&label_80B16AC0,
        &&label_80B16AC4,
        &&label_80B16AC8,
        &&label_80B16ACC,
        &&label_80B16AD0,
        &&label_80B16AD4,
        &&label_80B16AD8,
        &&label_80B16ADC,
        &&label_80B16AE0,
        &&label_80B16AE4,
        &&label_80B16AE8,
        &&label_80B16AEC,
        &&label_80B16AF0,
        &&label_80B16AF4,
        &&label_80B16AF8,
        &&label_80B16AFC,
        &&label_80B16B00,
        &&label_80B16B04,
        &&label_80B16B08,
        &&label_80B16B0C,
        &&label_80B16B10,
        &&label_80B16B14,
        &&label_80B16B18,
        &&label_80B16B1C,
        &&label_80B16B20,
        &&label_80B16B24,
        &&label_80B16B28,
        &&label_80B16B2C,
        &&label_80B16B30,
        &&label_80B16B34,
        &&label_80B16B38,
        &&label_80B16B3C,
        &&label_80B16B40,
        &&label_80B16B44,
        &&label_80B16B48,
        &&label_80B16B4C,
        &&label_80B16B50,
        &&label_80B16B54,
        &&label_80B16B58,
        &&label_80B16B5C,
        &&label_80B16B60,
        &&label_80B16B64,
        &&label_80B16B68,
        &&label_80B16B6C,
        &&label_80B16B70,
        &&label_80B16B74,
        &&label_80B16B78,
        &&label_80B16B7C,
        &&label_80B16B80,
        &&label_80B16B84,
        &&label_80B16B88,
        &&label_80B16B8C,
        &&label_80B16B90,
        &&label_80B16B94,
        &&label_80B16B98,
        &&label_80B16B9C,
        &&label_80B16BA0,
        &&label_80B16BA4,
        &&label_80B16BA8,
        &&label_80B16BAC,
        &&label_80B16BB0,
        &&label_80B16BB4,
        &&label_80B16BB8,
        &&label_80B16BBC,
        &&label_80B16BC0,
        &&label_80B16BC4,
        &&label_80B16BC8,
        &&label_80B16BCC,
        &&label_80B16BD0,
        &&label_80B16BD4,
        &&label_80B16BD8,
        &&label_80B16BDC,
        &&label_80B16BE0,
        &&label_80B16BE4,
        &&label_80B16BE8,
        &&label_80B16BEC,
        &&label_80B16BF0,
        &&label_80B16BF4,
        &&label_80B16BF8,
        &&label_80B16BFC,
        &&label_80B16C00,
        &&label_80B16C04,
        &&label_80B16C08,
        &&label_80B16C0C,
        &&label_80B16C10,
        &&label_80B16C14,
        &&label_80B16C18,
        &&label_80B16C1C,
        &&label_80B16C20,
        &&label_80B16C24,
        &&label_80B16C28,
        &&label_80B16C2C,
        &&label_80B16C30,
        &&label_80B16C34,
        &&label_80B16C38,
        &&label_80B16C3C,
        &&label_80B16C40,
        &&label_80B16C44,
        &&label_80B16C48,
        &&label_80B16C4C,
        &&label_80B16C50,
        &&label_80B16C54,
        &&label_80B16C58,
        &&label_80B16C5C,
        &&label_80B16C60,
        &&label_80B16C64,
        &&label_80B16C68,
        &&label_80B16C6C,
        &&label_80B16C70,
        &&label_80B16C74,
        &&label_80B16C78,
        &&label_80B16C7C,
        &&label_80B16C80,
        &&label_80B16C84,
        &&label_80B16C88,
        &&label_80B16C8C,
        &&label_80B16C90,
        &&label_80B16C94,
        &&label_80B16C98,
        &&label_80B16C9C,
        &&label_80B16CA0,
        &&label_80B16CA4,
        &&label_80B16CA8,
        &&label_80B16CAC,
        &&label_80B16CB0,
        &&label_80B16CB4,
        &&label_80B16CB8,
        &&label_80B16CBC,
        &&label_80B16CC0,
        &&label_80B16CC4,
        &&label_80B16CC8,
        &&label_80B16CCC,
        &&label_80B16CD0,
        &&label_80B16CD4,
        &&label_80B16CD8,
        &&label_80B16CDC,
        &&label_80B16CE0,
        &&label_80B16CE4,
        &&label_80B16CE8,
        &&label_80B16CEC,
        &&label_80B16CF0,
        &&label_80B16CF4,
        &&label_80B16CF8,
        &&label_80B16CFC,
        &&label_80B16D00,
        &&label_80B16D04,
        &&label_80B16D08,
        &&label_80B16D0C,
        &&label_80B16D10,
        &&label_80B16D14,
        &&label_80B16D18,
        &&label_80B16D1C,
        &&label_80B16D20,
        &&label_80B16D24,
        &&label_80B16D28,
        &&label_80B16D2C,
        &&label_80B16D30,
        &&label_80B16D34,
        &&label_80B16D38,
        &&label_80B16D3C,
        &&label_80B16D40,
        &&label_80B16D44,
        &&label_80B16D48,
        &&label_80B16D4C,
        &&label_80B16D50,
        &&label_80B16D54,
        &&label_80B16D58,
        &&label_80B16D5C,
        &&label_80B16D60,
        &&label_80B16D64,
        &&label_80B16D68,
        &&label_80B16D6C,
        &&label_80B16D70,
        &&label_80B16D74,
        &&label_80B16D78,
        &&label_80B16D7C,
        &&label_80B16D80,
        &&label_80B16D84,
        &&label_80B16D88,
        &&label_80B16D8C,
        &&label_80B16D90,
        &&label_80B16D94,
        &&label_80B16D98,
        &&label_80B16D9C,
        &&label_80B16DA0,
        &&label_80B16DA4,
        &&label_80B16DA8,
        &&label_80B16DAC,
        &&label_80B16DB0,
        &&label_80B16DB4,
        &&label_80B16DB8,
        &&label_80B16DBC,
        &&label_80B16DC0,
        &&label_80B16DC4,
        &&label_80B16DC8,
        &&label_80B16DCC,
        &&label_80B16DD0,
        &&label_80B16DD4,
        &&label_80B16DD8,
        &&label_80B16DDC,
        &&label_80B16DE0,
        &&label_80B16DE4,
        &&label_80B16DE8,
        &&label_80B16DEC,
        &&label_80B16DF0,
        &&label_80B16DF4,
        &&label_80B16DF8,
        &&label_80B16DFC,
        &&label_80B16E00,
        &&label_80B16E04,
        &&label_80B16E08,
        &&label_80B16E0C,
        &&label_80B16E10,
        &&label_80B16E14,
        &&label_80B16E18,
        &&label_80B16E1C,
        &&label_80B16E20,
        &&label_80B16E24,
        &&label_80B16E28,
        &&label_80B16E2C,
        &&label_80B16E30,
        &&label_80B16E34,
        &&label_80B16E38,
        &&label_80B16E3C,
        &&label_80B16E40,
        &&label_80B16E44,
        &&label_80B16E48,
        &&label_80B16E4C,
        &&label_80B16E50,
        &&label_80B16E54,
        &&label_80B16E58,
        &&label_80B16E5C,
        &&label_80B16E60,
        &&label_80B16E64,
        &&label_80B16E68,
        &&label_80B16E6C,
        &&label_80B16E70,
        &&label_80B16E74,
        &&label_80B16E78,
        &&label_80B16E7C,
        &&label_80B16E80,
        &&label_80B16E84,
        &&label_80B16E88,
        &&label_80B16E8C,
        &&label_80B16E90,
        &&label_80B16E94,
        &&label_80B16E98,
        &&label_80B16E9C,
        &&label_80B16EA0,
        &&label_80B16EA4,
        &&label_80B16EA8,
        &&label_80B16EAC,
        &&label_80B16EB0,
        &&label_80B16EB4,
        &&label_80B16EB8,
        &&label_80B16EBC,
        &&label_80B16EC0,
        &&label_80B16EC4,
        &&label_80B16EC8,
        &&label_80B16ECC,
        &&label_80B16ED0,
        &&label_80B16ED4,
        &&label_80B16ED8,
        &&label_80B16EDC,
        &&label_80B16EE0,
        &&label_80B16EE4,
        &&label_80B16EE8,
        &&label_80B16EEC,
        &&label_80B16EF0,
        &&label_80B16EF4,
        &&label_80B16EF8,
        &&label_80B16EFC,
        &&label_80B16F00,
        &&label_80B16F04,
        &&label_80B16F08,
        &&label_80B16F0C,
        &&label_80B16F10,
        &&label_80B16F14,
        &&label_80B16F18,
        &&label_80B16F1C,
        &&label_80B16F20,
        &&label_80B16F24,
        &&label_80B16F28,
        &&label_80B16F2C,
        &&label_80B16F30,
        &&label_80B16F34,
        &&label_80B16F38,
        &&label_80B16F3C,
        &&label_80B16F40,
        &&label_80B16F44,
        &&label_80B16F48,
        &&label_80B16F4C,
        &&label_80B16F50,
        &&label_80B16F54,
        &&label_80B16F58,
        &&label_80B16F5C,
        &&label_80B16F60,
        &&label_80B16F64,
        &&label_80B16F68,
        &&label_80B16F6C,
        &&label_80B16F70,
        &&label_80B16F74,
        &&label_80B16F78,
        &&label_80B16F7C,
        &&label_80B16F80,
        &&label_80B16F84,
        &&label_80B16F88,
        &&label_80B16F8C,
        &&label_80B16F90,
        &&label_80B16F94,
        &&label_80B16F98,
        &&label_80B16F9C,
        &&label_80B16FA0,
        &&label_80B16FA4,
        &&label_80B16FA8,
        &&label_80B16FAC,
        &&label_80B16FB0,
        &&label_80B16FB4,
        &&label_80B16FB8,
        &&label_80B16FBC,
        &&label_80B16FC0,
        &&label_80B16FC4,
        &&label_80B16FC8,
        &&label_80B16FCC,
        &&label_80B16FD0,
        &&label_80B16FD4,
        &&label_80B16FD8,
        &&label_80B16FDC,
        &&label_80B16FE0,
        &&label_80B16FE4,
        &&label_80B16FE8,
        &&label_80B16FEC,
        &&label_80B16FF0,
        &&label_80B16FF4,
        &&label_80B16FF8,
        &&label_80B16FFC,
        &&label_80B17000,
        &&label_80B17004,
        &&label_80B17008,
        &&label_80B1700C,
        &&label_80B17010,
        &&label_80B17014,
        &&label_80B17018,
        &&label_80B1701C,
        &&label_80B17020,
        &&label_80B17024,
        &&label_80B17028,
        &&label_80B1702C,
        &&label_80B17030,
        &&label_80B17034,
        &&label_80B17038,
        &&label_80B1703C,
        &&label_80B17040,
        &&label_80B17044,
        &&label_80B17048,
        &&label_80B1704C,
        &&label_80B17050,
        &&label_80B17054,
        &&label_80B17058,
        &&label_80B1705C,
        &&label_80B17060,
        &&label_80B17064,
        &&label_80B17068,
        &&label_80B1706C,
        &&label_80B17070,
        &&label_80B17074,
        &&label_80B17078,
        &&label_80B1707C,
        &&label_80B17080,
        &&label_80B17084,
        &&label_80B17088,
        &&label_80B1708C,
        &&label_80B17090,
        &&label_80B17094,
        &&label_80B17098,
        &&label_80B1709C,
        &&label_80B170A0,
        &&label_80B170A4,
        &&label_80B170A8,
        &&label_80B170AC,
        &&label_80B170B0,
        &&label_80B170B4,
        &&label_80B170B8,
        &&label_80B170BC,
        &&label_80B170C0,
        &&label_80B170C4,
        &&label_80B170C8,
        &&label_80B170CC,
        &&label_80B170D0,
        &&label_80B170D4,
        &&label_80B170D8,
        &&label_80B170DC,
        &&label_80B170E0,
        &&label_80B170E4,
        &&label_80B170E8,
        &&label_80B170EC,
        &&label_80B170F0,
        &&label_80B170F4,
        &&label_80B170F8,
        &&label_80B170FC,
        &&label_80B17100,
        &&label_80B17104,
        &&label_80B17108,
        &&label_80B1710C,
        &&label_80B17110,
        &&label_80B17114,
        &&label_80B17118,
        &&label_80B1711C,
        &&label_80B17120,
        &&label_80B17124,
        &&label_80B17128,
        &&label_80B1712C,
        &&label_80B17130,
        &&label_80B17134,
        &&label_80B17138,
        &&label_80B1713C,
        &&label_80B17140,
        &&label_80B17144,
        &&label_80B17148,
        &&label_80B1714C,
        &&label_80B17150,
        &&label_80B17154,
        &&label_80B17158,
        &&label_80B1715C,
        &&label_80B17160,
        &&label_80B17164,
        &&label_80B17168,
        &&label_80B1716C,
        &&label_80B17170,
        &&label_80B17174,
        &&label_80B17178,
        &&label_80B1717C,
        &&label_80B17180,
        &&label_80B17184,
        &&label_80B17188,
        &&label_80B1718C,
        &&label_80B17190,
        &&label_80B17194,
        &&label_80B17198,
        &&label_80B1719C,
        &&label_80B171A0,
        &&label_80B171A4,
        &&label_80B171A8,
        &&label_80B171AC,
        &&label_80B171B0,
        &&label_80B171B4,
        &&label_80B171B8,
        &&label_80B171BC,
        &&label_80B171C0,
        &&label_80B171C4,
        &&label_80B171C8,
        &&label_80B171CC,
        &&label_80B171D0,
        &&label_80B171D4,
        &&label_80B171D8,
        &&label_80B171DC,
        &&label_80B171E0,
        &&label_80B171E4,
        &&label_80B171E8,
        &&label_80B171EC,
        &&label_80B171F0,
        &&label_80B171F4,
        &&label_80B171F8,
        &&label_80B171FC,
        &&label_80B17200,
        &&label_80B17204,
        &&label_80B17208,
        &&label_80B1720C,
        &&label_80B17210,
        &&label_80B17214,
        &&label_80B17218,
        &&label_80B1721C,
        &&label_80B17220,
        &&label_80B17224,
        &&label_80B17228,
        &&label_80B1722C,
        &&label_80B17230,
        &&label_80B17234,
        &&label_80B17238,
        &&label_80B1723C,
        &&label_80B17240,
        &&label_80B17244,
        &&label_80B17248,
        &&label_80B1724C,
        &&label_80B17250,
        &&label_80B17254,
        &&label_80B17258,
        &&label_80B1725C,
        &&label_80B17260,
        &&label_80B17264,
        &&label_80B17268,
        &&label_80B1726C,
        &&label_80B17270,
        &&label_80B17274,
        &&label_80B17278,
        &&label_80B1727C,
        &&label_80B17280,
        &&label_80B17284,
        &&label_80B17288,
        &&label_80B1728C,
        &&label_80B17290,
        &&label_80B17294,
        &&label_80B17298,
        &&label_80B1729C,
        &&label_80B172A0,
        &&label_80B172A4,
        &&label_80B172A8,
        &&label_80B172AC,
        &&label_80B172B0,
        &&label_80B172B4,
        &&label_80B172B8,
        &&label_80B172BC,
        &&label_80B172C0,
        &&label_80B172C4,
        &&label_80B172C8,
        &&label_80B172CC,
        &&label_80B172D0,
        &&label_80B172D4,
        &&label_80B172D8,
        &&label_80B172DC,
        &&label_80B172E0,
        &&label_80B172E4,
        &&label_80B172E8,
        &&label_80B172EC,
        &&label_80B172F0,
        &&label_80B172F4,
        &&label_80B172F8,
        &&label_80B172FC,
        &&label_80B17300,
        &&label_80B17304,
        &&label_80B17308,
        &&label_80B1730C,
        &&label_80B17310,
        &&label_80B17314,
        &&label_80B17318,
        &&label_80B1731C,
        &&label_80B17320,
        &&label_80B17324,
        &&label_80B17328,
        &&label_80B1732C,
        &&label_80B17330,
        &&label_80B17334,
        &&label_80B17338,
        &&label_80B1733C,
        &&label_80B17340,
        &&label_80B17344,
        &&label_80B17348,
        &&label_80B1734C,
        &&label_80B17350,
        &&label_80B17354,
        &&label_80B17358,
        &&label_80B1735C,
        &&label_80B17360,
        &&label_80B17364,
        &&label_80B17368,
        &&label_80B1736C,
        &&label_80B17370,
        &&label_80B17374,
        &&label_80B17378,
        &&label_80B1737C,
        &&label_80B17380,
        &&label_80B17384,
        &&label_80B17388,
        &&label_80B1738C,
        &&label_80B17390,
        &&label_80B17394,
        &&label_80B17398,
        &&label_80B1739C,
        &&label_80B173A0,
        &&label_80B173A4,
        &&label_80B173A8,
        &&label_80B173AC,
        &&label_80B173B0,
        &&label_80B173B4,
        &&label_80B173B8,
        &&label_80B173BC,
        &&label_80B173C0,
        &&label_80B173C4,
        &&label_80B173C8,
        &&label_80B173CC,
        &&label_80B173D0,
        &&label_80B173D4,
        &&label_80B173D8,
        &&label_80B173DC,
        &&label_80B173E0,
        &&label_80B173E4,
        &&label_80B173E8,
        &&label_80B173EC,
        &&label_80B173F0,
        &&label_80B173F4,
        &&label_80B173F8,
        &&label_80B173FC,
        &&label_80B17400,
        &&label_80B17404,
        &&label_80B17408,
        &&label_80B1740C,
        &&label_80B17410,
        &&label_80B17414,
        &&label_80B17418,
        &&label_80B1741C,
        &&label_80B17420,
        &&label_80B17424,
        &&label_80B17428,
        &&label_80B1742C,
        &&label_80B17430,
        &&label_80B17434,
        &&label_80B17438,
        &&label_80B1743C,
        &&label_80B17440,
        &&label_80B17444,
        &&label_80B17448,
        &&label_80B1744C,
        &&label_80B17450,
        &&label_80B17454,
        &&label_80B17458,
        &&label_80B1745C,
        &&label_80B17460,
        &&label_80B17464,
        &&label_80B17468,
        &&label_80B1746C,
        &&label_80B17470,
        &&label_80B17474,
        &&label_80B17478,
        &&label_80B1747C,
        &&label_80B17480,
        &&label_80B17484,
        &&label_80B17488,
        &&label_80B1748C,
        &&label_80B17490,
        &&label_80B17494,
        &&label_80B17498,
        &&label_80B1749C,
        &&label_80B174A0,
        &&label_80B174A4,
        &&label_80B174A8,
        &&label_80B174AC,
        &&label_80B174B0,
        &&label_80B174B4,
        &&label_80B174B8,
        &&label_80B174BC,
        &&label_80B174C0,
        &&label_80B174C4,
        &&label_80B174C8,
        &&label_80B174CC,
        &&label_80B174D0,
        &&label_80B174D4,
        &&label_80B174D8,
        &&label_80B174DC,
        &&label_80B174E0,
        &&label_80B174E4,
        &&label_80B174E8,
        &&label_80B174EC,
        &&label_80B174F0,
        &&label_80B174F4,
        &&label_80B174F8,
        &&label_80B174FC,
        &&label_80B17500,
        &&label_80B17504,
        &&label_80B17508,
        &&label_80B1750C,
        &&label_80B17510,
        &&label_80B17514,
        &&label_80B17518,
        &&label_80B1751C,
        &&label_80B17520,
        &&label_80B17524,
        &&label_80B17528,
        &&label_80B1752C,
        &&label_80B17530,
        &&label_80B17534,
        &&label_80B17538,
        &&label_80B1753C,
        &&label_80B17540,
        &&label_80B17544,
        &&label_80B17548,
        &&label_80B1754C,
        &&label_80B17550,
        &&label_80B17554,
        &&label_80B17558,
        &&label_80B1755C,
        &&label_80B17560,
        &&label_80B17564,
        &&label_80B17568,
        &&label_80B1756C,
        &&label_80B17570,
        &&label_80B17574,
        &&label_80B17578,
        &&label_80B1757C,
        &&label_80B17580,
        &&label_80B17584,
        &&label_80B17588,
        &&label_80B1758C,
        &&label_80B17590,
        &&label_80B17594,
        &&label_80B17598,
        &&label_80B1759C,
        &&label_80B175A0,
        &&label_80B175A4,
        &&label_80B175A8,
        &&label_80B175AC,
        &&label_80B175B0,
        &&label_80B175B4,
        &&label_80B175B8,
        &&label_80B175BC,
        &&label_80B175C0,
        &&label_80B175C4,
        &&label_80B175C8,
        &&label_80B175CC,
        &&label_80B175D0,
        &&label_80B175D4,
        &&label_80B175D8,
        &&label_80B175DC,
        &&label_80B175E0,
        &&label_80B175E4,
        &&label_80B175E8,
        &&label_80B175EC,
        &&label_80B175F0,
        &&label_80B175F4,
        &&label_80B175F8,
        &&label_80B175FC,
        &&label_80B17600,
        &&label_80B17604,
        &&label_80B17608,
        &&label_80B1760C,
        &&label_80B17610,
        &&label_80B17614,
        &&label_80B17618,
        &&label_80B1761C,
        &&label_80B17620,
        &&label_80B17624,
        &&label_80B17628,
        &&label_80B1762C,
        &&label_80B17630,
        &&label_80B17634,
        &&label_80B17638,
        &&label_80B1763C,
        &&label_80B17640,
        &&label_80B17644,
        &&label_80B17648,
        &&label_80B1764C,
        &&label_80B17650,
        &&label_80B17654,
        &&label_80B17658,
        &&label_80B1765C,
        &&label_80B17660,
        &&label_80B17664,
        &&label_80B17668,
        &&label_80B1766C,
        &&label_80B17670,
        &&label_80B17674,
        &&label_80B17678,
        &&label_80B1767C,
        &&label_80B17680,
        &&label_80B17684,
        &&label_80B17688,
        &&label_80B1768C,
        &&label_80B17690,
        &&label_80B17694,
        &&label_80B17698,
        &&label_80B1769C,
        &&label_80B176A0,
        &&label_80B176A4,
        &&label_80B176A8,
        &&label_80B176AC,
        &&label_80B176B0,
        &&label_80B176B4,
        &&label_80B176B8,
        &&label_80B176BC,
        &&label_80B176C0,
        &&label_80B176C4,
        &&label_80B176C8,
        &&label_80B176CC,
        &&label_80B176D0,
        &&label_80B176D4,
        &&label_80B176D8,
        &&label_80B176DC,
        &&label_80B176E0,
        &&label_80B176E4,
        &&label_80B176E8,
        &&label_80B176EC,
        &&label_80B176F0,
        &&label_80B176F4,
        &&label_80B176F8,
        &&label_80B176FC,
        &&label_80B17700,
        &&label_80B17704,
        &&label_80B17708,
        &&label_80B1770C,
        &&label_80B17710,
        &&label_80B17714,
        &&label_80B17718,
        &&label_80B1771C,
        &&label_80B17720,
        &&label_80B17724,
        &&label_80B17728,
        &&label_80B1772C,
        &&label_80B17730,
        &&label_80B17734,
        &&label_80B17738,
        &&label_80B1773C,
        &&label_80B17740,
        &&label_80B17744,
        &&label_80B17748,
        &&label_80B1774C,
        &&label_80B17750,
        &&label_80B17754,
        &&label_80B17758,
        &&label_80B1775C,
        &&label_80B17760,
        &&label_80B17764,
        &&label_80B17768,
        &&label_80B1776C,
        &&label_80B17770,
        &&label_80B17774,
        &&label_80B17778,
        &&label_80B1777C,
        &&label_80B17780,
        &&label_80B17784,
        &&label_80B17788,
        &&label_80B1778C,
        &&label_80B17790,
        &&label_80B17794,
        &&label_80B17798,
        &&label_80B1779C,
        &&label_80B177A0,
        &&label_80B177A4,
        &&label_80B177A8,
        &&label_80B177AC,
        &&label_80B177B0,
        &&label_80B177B4,
        &&label_80B177B8,
        &&label_80B177BC,
        &&label_80B177C0,
        &&label_80B177C4,
        &&label_80B177C8,
        &&label_80B177CC,
        &&label_80B177D0,
        &&label_80B177D4,
        &&label_80B177D8,
        &&label_80B177DC,
        &&label_80B177E0,
        &&label_80B177E4,
        &&label_80B177E8,
        &&label_80B177EC,
        &&label_80B177F0,
        &&label_80B177F4,
        &&label_80B177F8,
        &&label_80B177FC,
        &&label_80B17800,
        &&label_80B17804,
        &&label_80B17808,
        &&label_80B1780C,
        &&label_80B17810,
        &&label_80B17814,
        &&label_80B17818,
        &&label_80B1781C,
        &&label_80B17820,
        &&label_80B17824,
        &&label_80B17828,
        &&label_80B1782C,
        &&label_80B17830,
        &&label_80B17834,
        &&label_80B17838,
        &&label_80B1783C,
        &&label_80B17840,
        &&label_80B17844,
        &&label_80B17848,
        &&label_80B1784C,
        &&label_80B17850,
        &&label_80B17854,
        &&label_80B17858,
        &&label_80B1785C,
        &&label_80B17860,
        &&label_80B17864,
        &&label_80B17868,
        &&label_80B1786C,
        &&label_80B17870,
        &&label_80B17874,
        &&label_80B17878,
        &&label_80B1787C,
        &&label_80B17880,
        &&label_80B17884,
        &&label_80B17888,
        &&label_80B1788C,
        &&label_80B17890,
        &&label_80B17894,
        &&label_80B17898,
        &&label_80B1789C,
        &&label_80B178A0,
        &&label_80B178A4,
        &&label_80B178A8,
        &&label_80B178AC,
        &&label_80B178B0,
        &&label_80B178B4,
        &&label_80B178B8,
        &&label_80B178BC,
        &&label_80B178C0,
        &&label_80B178C4,
        &&label_80B178C8,
        &&label_80B178CC,
        &&label_80B178D0,
        &&label_80B178D4,
        &&label_80B178D8,
        &&label_80B178DC,
        &&label_80B178E0,
        &&label_80B178E4,
        &&label_80B178E8,
        &&label_80B178EC,
        &&label_80B178F0,
        &&label_80B178F4,
        &&label_80B178F8,
        &&label_80B178FC,
        &&label_80B17900,
        &&label_80B17904,
        &&label_80B17908,
        &&label_80B1790C,
        &&label_80B17910,
        &&label_80B17914,
        &&label_80B17918,
        &&label_80B1791C,
        &&label_80B17920,
        &&label_80B17924,
        &&label_80B17928,
        &&label_80B1792C,
        &&label_80B17930,
        &&label_80B17934,
        &&label_80B17938,
        &&label_80B1793C,
        &&label_80B17940,
        &&label_80B17944,
        &&label_80B17948,
        &&label_80B1794C,
        &&label_80B17950,
        &&label_80B17954,
        &&label_80B17958,
        &&label_80B1795C,
        &&label_80B17960,
        &&label_80B17964,
        &&label_80B17968,
        &&label_80B1796C,
        &&label_80B17970,
        &&label_80B17974,
        &&label_80B17978,
        &&label_80B1797C,
        &&label_80B17980,
        &&label_80B17984,
        &&label_80B17988,
        &&label_80B1798C,
        &&label_80B17990,
        &&label_80B17994,
        &&label_80B17998,
        &&label_80B1799C,
        &&label_80B179A0,
        &&label_80B179A4,
        &&label_80B179A8,
        &&label_80B179AC,
        &&label_80B179B0,
        &&label_80B179B4,
        &&label_80B179B8,
        &&label_80B179BC,
        &&label_80B179C0,
        &&label_80B179C4,
        &&label_80B179C8,
        &&label_80B179CC,
        &&label_80B179D0,
        &&label_80B179D4,
        &&label_80B179D8,
        &&label_80B179DC,
        &&label_80B179E0,
        &&label_80B179E4,
        &&label_80B179E8,
        &&label_80B179EC,
        &&label_80B179F0,
        &&label_80B179F4,
        &&label_80B179F8,
        &&label_80B179FC,
        &&label_80B17A00,
        &&label_80B17A04,
        &&label_80B17A08,
        &&label_80B17A0C,
        &&label_80B17A10,
        &&label_80B17A14,
        &&label_80B17A18,
        &&label_80B17A1C,
        &&label_80B17A20,
        &&label_80B17A24,
        &&label_80B17A28,
        &&label_80B17A2C,
        &&label_80B17A30,
        &&label_80B17A34,
        &&label_80B17A38,
        &&label_80B17A3C,
        &&label_80B17A40,
        &&label_80B17A44,
        &&label_80B17A48,
        &&label_80B17A4C,
        &&label_80B17A50,
        &&label_80B17A54,
        &&label_80B17A58,
        &&label_80B17A5C,
        &&label_80B17A60,
        &&label_80B17A64,
        &&label_80B17A68,
        &&label_80B17A6C,
        &&label_80B17A70,
        &&label_80B17A74,
        &&label_80B17A78,
        &&label_80B17A7C,
        &&label_80B17A80,
        &&label_80B17A84,
        &&label_80B17A88,
        &&label_80B17A8C,
        &&label_80B17A90,
        &&label_80B17A94,
        &&label_80B17A98,
        &&label_80B17A9C,
        &&label_80B17AA0,
        &&label_80B17AA4
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80B15D00u && pc <= 0x80B17AA4u && ((pc - 0x80B15D00u) & 3u) == 0u)
            goto *pc_table_80B15D00[(pc - 0x80B15D00u) >> 2];
    }
    return;
label_80B15D00:
    ctx->pc = 0x80B15D00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15D00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B15D00: stwu     r1, -16(r1)
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
label_80B15D04:
    ctx->pc = 0x80B15D04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15D04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B15D04: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B15D08:
    ctx->pc = 0x80B15D08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15D08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B15D08: stw     r0, 20(r1)
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
label_80B15D0C:
    ctx->pc = 0x80B15D0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15D0Cu)) return;
    // 80B15D0C: cmpwi   r3, 2
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

label_80B15D10:
    ctx->pc = 0x80B15D10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15D10u)) return;
    // 80B15D10: bc    12, 2, 0x80B16C74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B16C74;
        }
    }

label_80B15D14:
    ctx->pc = 0x80B15D14u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15D14u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B15D14: bc    4, 0, 0x80B15D28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B15D28;
        }
    }

label_80B15D18:
    ctx->pc = 0x80B15D18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15D18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B15D18: cmpwi   r3, 0
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

label_80B15D1C:
    ctx->pc = 0x80B15D1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15D1Cu)) return;
    // 80B15D1C: bc    12, 2, 0x80B16D34
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B16D34;
        }
    }

label_80B15D20:
    ctx->pc = 0x80B15D20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15D20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B15D20: bc    4, 0, 0x80B15D30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B15D30;
        }
    }

label_80B15D24:
    ctx->pc = 0x80B15D24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15D24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B15D24: b       0x80B16D34
    {
            goto label_80B16D34;
    }

label_80B15D28:
    ctx->pc = 0x80B15D28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15D28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B15D28: cmpwi   r3, 4
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

label_80B15D2C:
    ctx->pc = 0x80B15D2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15D2Cu)) return;
    // 80B15D2C: b       0x80B16D34
    {
            goto label_80B16D34;
    }

label_80B15D30:
    ctx->pc = 0x80B15D30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15D30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B15D30: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B15D34:
    ctx->pc = 0x80B15D34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15D34u)) return;
    // 80B15D34: bl      0x8045EC10
    {
            ctx->lr = 0x80B15D38u;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80B15D38:
    ctx->pc = 0x80B15D38u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15D38u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B15D38: lis     r3, -27591
    ctx->gpr[3] = ((u32)(s32)(-27591) << 16);

label_80B15D3C:
    ctx->pc = 0x80B15D3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15D3Cu)) return;
    // 80B15D3C: addi    r3, r3, -11304
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-11304);

label_80B15D40:
    ctx->pc = 0x80B15D40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15D40u)) return;
    // 80B15D40: bl      0x8050AF58
    {
            ctx->lr = 0x80B15D44u;
            ctx->pc = 0x8050AF58u;
            return;
    }

label_80B15D44:
    ctx->pc = 0x80B15D44u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15D44u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B15D44: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_80B15D48:
    ctx->pc = 0x80B15D48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15D48u)) return;
    // 80B15D48: bl      0x80B17330
    {
            ctx->lr = 0x80B15D4Cu;
            goto label_80B17330;
    }

label_80B15D4C:
    ctx->pc = 0x80B15D4Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15D4Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B15D4C: bl      0x8045DE7C
    {
            ctx->lr = 0x80B15D50u;
            ctx->pc = 0x8045DE7Cu;
            return;
    }

label_80B15D50:
    ctx->pc = 0x80B15D50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15D50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B15D50: bl      0x80460A60
    {
            ctx->lr = 0x80B15D54u;
            ctx->pc = 0x80460A60u;
            return;
    }

label_80B15D54:
    ctx->pc = 0x80B15D54u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15D54u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B15D54: bl      0x80460A24
    {
            ctx->lr = 0x80B15D58u;
            ctx->pc = 0x80460A24u;
            return;
    }

label_80B15D58:
    ctx->pc = 0x80B15D58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 17u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15D58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 17u : 1u;
    // 80B15D58: lis     r3, -27589
    ctx->gpr[3] = ((u32)(s32)(-27589) << 16);

label_80B15D5C:
    ctx->pc = 0x80B15D5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15D5Cu)) return;
    // 80B15D5C: addi    r3, r3, 24032
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24032);

label_80B15D60:
    ctx->pc = 0x80B15D60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15D60u)) return;
    // 80B15D60: lis     r4, -32591
    ctx->gpr[4] = ((u32)(s32)(-32591) << 16);

label_80B15D64:
    ctx->pc = 0x80B15D64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15D64u)) return;
    // 80B15D64: addi    r4, r4, 31148
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(31148);

label_80B15D68:
    ctx->pc = 0x80B15D68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15D68u)) return;
    // 80B15D68: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B15D6C:
    ctx->pc = 0x80B15D6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15D6Cu)) return;
    // 80B15D6C: addi    r5, r5, -12304
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12304);

label_80B15D70:
    ctx->pc = 0x80B15D70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15D70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B15D70: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B15D70u)) return;
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
label_80B15D74:
    ctx->pc = 0x80B15D74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15D74u)) return;
    // 80B15D74: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B15D78:
    ctx->pc = 0x80B15D78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15D78u)) return;
    // 80B15D78: addi    r5, r5, -12300
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12300);

label_80B15D7C:
    ctx->pc = 0x80B15D7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15D7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B15D7C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B15D7Cu)) return;
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
label_80B15D80:
    ctx->pc = 0x80B15D80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15D80u)) return;
    // 80B15D80: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B15D84:
    ctx->pc = 0x80B15D84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15D84u)) return;
    // 80B15D84: addi    r5, r5, -12296
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12296);

label_80B15D88:
    ctx->pc = 0x80B15D88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15D88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B15D88: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B15D88u)) return;
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
label_80B15D8C:
    ctx->pc = 0x80B15D8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15D8Cu)) return;
    // 80B15D8C: li      r5, 8192
    ctx->gpr[5] = (u32)(s32)(8192);

label_80B15D90:
    ctx->pc = 0x80B15D90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15D90u)) return;
    // 80B15D90: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B15D94:
    ctx->pc = 0x80B15D94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15D94u)) return;
    // 80B15D94: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B15D98:
    ctx->pc = 0x80B15D98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15D98u)) return;
    // 80B15D98: bl      0x8045F0B0
    {
            ctx->lr = 0x80B15D9Cu;
            ctx->pc = 0x8045F0B0u;
            return;
    }

label_80B15D9C:
    ctx->pc = 0x80B15D9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 17u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15D9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 17u : 1u;
    // 80B15D9C: lis     r3, -27589
    ctx->gpr[3] = ((u32)(s32)(-27589) << 16);

label_80B15DA0:
    ctx->pc = 0x80B15DA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15DA0u)) return;
    // 80B15DA0: addi    r3, r3, 24036
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24036);

label_80B15DA4:
    ctx->pc = 0x80B15DA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15DA4u)) return;
    // 80B15DA4: lis     r4, -32591
    ctx->gpr[4] = ((u32)(s32)(-32591) << 16);

label_80B15DA8:
    ctx->pc = 0x80B15DA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15DA8u)) return;
    // 80B15DA8: addi    r4, r4, 31148
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(31148);

label_80B15DAC:
    ctx->pc = 0x80B15DACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15DACu)) return;
    // 80B15DAC: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B15DB0:
    ctx->pc = 0x80B15DB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15DB0u)) return;
    // 80B15DB0: addi    r5, r5, -12292
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12292);

label_80B15DB4:
    ctx->pc = 0x80B15DB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15DB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B15DB4: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B15DB4u)) return;
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
label_80B15DB8:
    ctx->pc = 0x80B15DB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15DB8u)) return;
    // 80B15DB8: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B15DBC:
    ctx->pc = 0x80B15DBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15DBCu)) return;
    // 80B15DBC: addi    r5, r5, -12288
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12288);

label_80B15DC0:
    ctx->pc = 0x80B15DC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15DC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B15DC0: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B15DC0u)) return;
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
label_80B15DC4:
    ctx->pc = 0x80B15DC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15DC4u)) return;
    // 80B15DC4: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B15DC8:
    ctx->pc = 0x80B15DC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15DC8u)) return;
    // 80B15DC8: addi    r5, r5, -12284
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12284);

label_80B15DCC:
    ctx->pc = 0x80B15DCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15DCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B15DCC: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B15DCCu)) return;
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
label_80B15DD0:
    ctx->pc = 0x80B15DD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15DD0u)) return;
    // 80B15DD0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80B15DD4:
    ctx->pc = 0x80B15DD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15DD4u)) return;
    // 80B15DD4: li      r6, 16384
    ctx->gpr[6] = (u32)(s32)(16384);

label_80B15DD8:
    ctx->pc = 0x80B15DD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15DD8u)) return;
    // 80B15DD8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B15DDC:
    ctx->pc = 0x80B15DDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15DDCu)) return;
    // 80B15DDC: bl      0x8045F0B0
    {
            ctx->lr = 0x80B15DE0u;
            ctx->pc = 0x8045F0B0u;
            return;
    }

label_80B15DE0:
    ctx->pc = 0x80B15DE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 17u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15DE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 17u : 1u;
    // 80B15DE0: lis     r3, -27589
    ctx->gpr[3] = ((u32)(s32)(-27589) << 16);

label_80B15DE4:
    ctx->pc = 0x80B15DE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15DE4u)) return;
    // 80B15DE4: addi    r3, r3, 24040
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24040);

label_80B15DE8:
    ctx->pc = 0x80B15DE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15DE8u)) return;
    // 80B15DE8: lis     r4, -32591
    ctx->gpr[4] = ((u32)(s32)(-32591) << 16);

label_80B15DEC:
    ctx->pc = 0x80B15DECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15DECu)) return;
    // 80B15DEC: addi    r4, r4, 31148
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(31148);

label_80B15DF0:
    ctx->pc = 0x80B15DF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15DF0u)) return;
    // 80B15DF0: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B15DF4:
    ctx->pc = 0x80B15DF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15DF4u)) return;
    // 80B15DF4: addi    r5, r5, -12280
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12280);

label_80B15DF8:
    ctx->pc = 0x80B15DF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15DF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B15DF8: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B15DF8u)) return;
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
label_80B15DFC:
    ctx->pc = 0x80B15DFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15DFCu)) return;
    // 80B15DFC: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B15E00:
    ctx->pc = 0x80B15E00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15E00u)) return;
    // 80B15E00: addi    r5, r5, -12288
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12288);

label_80B15E04:
    ctx->pc = 0x80B15E04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15E04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B15E04: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B15E04u)) return;
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
label_80B15E08:
    ctx->pc = 0x80B15E08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15E08u)) return;
    // 80B15E08: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B15E0C:
    ctx->pc = 0x80B15E0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15E0Cu)) return;
    // 80B15E0C: addi    r5, r5, -12276
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12276);

label_80B15E10:
    ctx->pc = 0x80B15E10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15E10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B15E10: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B15E10u)) return;
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
label_80B15E14:
    ctx->pc = 0x80B15E14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15E14u)) return;
    // 80B15E14: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80B15E18:
    ctx->pc = 0x80B15E18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15E18u)) return;
    // 80B15E18: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B15E1C:
    ctx->pc = 0x80B15E1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15E1Cu)) return;
    // 80B15E1C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B15E20:
    ctx->pc = 0x80B15E20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15E20u)) return;
    // 80B15E20: bl      0x8045F0B0
    {
            ctx->lr = 0x80B15E24u;
            ctx->pc = 0x8045F0B0u;
            return;
    }

label_80B15E24:
    ctx->pc = 0x80B15E24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 18u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15E24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 18u : 1u;
    // 80B15E24: lis     r3, -27589
    ctx->gpr[3] = ((u32)(s32)(-27589) << 16);

label_80B15E28:
    ctx->pc = 0x80B15E28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15E28u)) return;
    // 80B15E28: addi    r3, r3, 24044
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24044);

label_80B15E2C:
    ctx->pc = 0x80B15E2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15E2Cu)) return;
    // 80B15E2C: lis     r4, -32591
    ctx->gpr[4] = ((u32)(s32)(-32591) << 16);

label_80B15E30:
    ctx->pc = 0x80B15E30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15E30u)) return;
    // 80B15E30: addi    r4, r4, 31148
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(31148);

label_80B15E34:
    ctx->pc = 0x80B15E34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15E34u)) return;
    // 80B15E34: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B15E38:
    ctx->pc = 0x80B15E38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15E38u)) return;
    // 80B15E38: addi    r5, r5, -12272
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12272);

label_80B15E3C:
    ctx->pc = 0x80B15E3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15E3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B15E3C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B15E3Cu)) return;
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
label_80B15E40:
    ctx->pc = 0x80B15E40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15E40u)) return;
    // 80B15E40: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B15E44:
    ctx->pc = 0x80B15E44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15E44u)) return;
    // 80B15E44: addi    r5, r5, -12300
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12300);

label_80B15E48:
    ctx->pc = 0x80B15E48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15E48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B15E48: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B15E48u)) return;
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
label_80B15E4C:
    ctx->pc = 0x80B15E4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15E4Cu)) return;
    // 80B15E4C: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B15E50:
    ctx->pc = 0x80B15E50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15E50u)) return;
    // 80B15E50: addi    r5, r5, -12268
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12268);

label_80B15E54:
    ctx->pc = 0x80B15E54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15E54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B15E54: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B15E54u)) return;
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
label_80B15E58:
    ctx->pc = 0x80B15E58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15E58u)) return;
    // 80B15E58: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80B15E5C:
    ctx->pc = 0x80B15E5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15E5Cu)) return;
    // 80B15E5C: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80B15E60:
    ctx->pc = 0x80B15E60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15E60u)) return;
    // 80B15E60: addi    r6, r6, -16384
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-16384);

label_80B15E64:
    ctx->pc = 0x80B15E64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15E64u)) return;
    // 80B15E64: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B15E68:
    ctx->pc = 0x80B15E68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15E68u)) return;
    // 80B15E68: bl      0x8045F0B0
    {
            ctx->lr = 0x80B15E6Cu;
            ctx->pc = 0x8045F0B0u;
            return;
    }

label_80B15E6C:
    ctx->pc = 0x80B15E6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 17u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15E6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 17u : 1u;
    // 80B15E6C: lis     r3, -27589
    ctx->gpr[3] = ((u32)(s32)(-27589) << 16);

label_80B15E70:
    ctx->pc = 0x80B15E70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15E70u)) return;
    // 80B15E70: addi    r3, r3, 24048
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24048);

label_80B15E74:
    ctx->pc = 0x80B15E74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15E74u)) return;
    // 80B15E74: lis     r4, -32591
    ctx->gpr[4] = ((u32)(s32)(-32591) << 16);

label_80B15E78:
    ctx->pc = 0x80B15E78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15E78u)) return;
    // 80B15E78: addi    r4, r4, 31148
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(31148);

label_80B15E7C:
    ctx->pc = 0x80B15E7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15E7Cu)) return;
    // 80B15E7C: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B15E80:
    ctx->pc = 0x80B15E80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15E80u)) return;
    // 80B15E80: addi    r5, r5, -12264
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12264);

label_80B15E84:
    ctx->pc = 0x80B15E84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15E84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B15E84: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B15E84u)) return;
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
label_80B15E88:
    ctx->pc = 0x80B15E88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15E88u)) return;
    // 80B15E88: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B15E8C:
    ctx->pc = 0x80B15E8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15E8Cu)) return;
    // 80B15E8C: addi    r5, r5, -12288
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12288);

label_80B15E90:
    ctx->pc = 0x80B15E90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15E90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B15E90: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B15E90u)) return;
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
label_80B15E94:
    ctx->pc = 0x80B15E94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15E94u)) return;
    // 80B15E94: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B15E98:
    ctx->pc = 0x80B15E98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15E98u)) return;
    // 80B15E98: addi    r5, r5, -12260
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12260);

label_80B15E9C:
    ctx->pc = 0x80B15E9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15E9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B15E9C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B15E9Cu)) return;
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
label_80B15EA0:
    ctx->pc = 0x80B15EA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15EA0u)) return;
    // 80B15EA0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80B15EA4:
    ctx->pc = 0x80B15EA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15EA4u)) return;
    // 80B15EA4: li      r6, 5632
    ctx->gpr[6] = (u32)(s32)(5632);

label_80B15EA8:
    ctx->pc = 0x80B15EA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15EA8u)) return;
    // 80B15EA8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B15EAC:
    ctx->pc = 0x80B15EACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15EACu)) return;
    // 80B15EAC: bl      0x8045F0B0
    {
            ctx->lr = 0x80B15EB0u;
            ctx->pc = 0x8045F0B0u;
            return;
    }

label_80B15EB0:
    ctx->pc = 0x80B15EB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 17u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15EB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 17u : 1u;
    // 80B15EB0: lis     r3, -27589
    ctx->gpr[3] = ((u32)(s32)(-27589) << 16);

label_80B15EB4:
    ctx->pc = 0x80B15EB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15EB4u)) return;
    // 80B15EB4: addi    r3, r3, 24052
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24052);

label_80B15EB8:
    ctx->pc = 0x80B15EB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15EB8u)) return;
    // 80B15EB8: lis     r4, -32591
    ctx->gpr[4] = ((u32)(s32)(-32591) << 16);

label_80B15EBC:
    ctx->pc = 0x80B15EBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15EBCu)) return;
    // 80B15EBC: addi    r4, r4, 31148
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(31148);

label_80B15EC0:
    ctx->pc = 0x80B15EC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15EC0u)) return;
    // 80B15EC0: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B15EC4:
    ctx->pc = 0x80B15EC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15EC4u)) return;
    // 80B15EC4: addi    r5, r5, -12256
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12256);

label_80B15EC8:
    ctx->pc = 0x80B15EC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15EC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B15EC8: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B15EC8u)) return;
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
label_80B15ECC:
    ctx->pc = 0x80B15ECCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15ECCu)) return;
    // 80B15ECC: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B15ED0:
    ctx->pc = 0x80B15ED0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15ED0u)) return;
    // 80B15ED0: addi    r5, r5, -12288
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12288);

label_80B15ED4:
    ctx->pc = 0x80B15ED4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15ED4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B15ED4: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B15ED4u)) return;
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
label_80B15ED8:
    ctx->pc = 0x80B15ED8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15ED8u)) return;
    // 80B15ED8: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B15EDC:
    ctx->pc = 0x80B15EDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15EDCu)) return;
    // 80B15EDC: addi    r5, r5, -12252
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12252);

label_80B15EE0:
    ctx->pc = 0x80B15EE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15EE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B15EE0: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B15EE0u)) return;
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
label_80B15EE4:
    ctx->pc = 0x80B15EE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15EE4u)) return;
    // 80B15EE4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80B15EE8:
    ctx->pc = 0x80B15EE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15EE8u)) return;
    // 80B15EE8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B15EEC:
    ctx->pc = 0x80B15EECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15EECu)) return;
    // 80B15EEC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B15EF0:
    ctx->pc = 0x80B15EF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15EF0u)) return;
    // 80B15EF0: bl      0x8045F0B0
    {
            ctx->lr = 0x80B15EF4u;
            ctx->pc = 0x8045F0B0u;
            return;
    }

label_80B15EF4:
    ctx->pc = 0x80B15EF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 17u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15EF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 17u : 1u;
    // 80B15EF4: lis     r3, -27589
    ctx->gpr[3] = ((u32)(s32)(-27589) << 16);

label_80B15EF8:
    ctx->pc = 0x80B15EF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15EF8u)) return;
    // 80B15EF8: addi    r3, r3, 24056
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24056);

label_80B15EFC:
    ctx->pc = 0x80B15EFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15EFCu)) return;
    // 80B15EFC: lis     r4, -32591
    ctx->gpr[4] = ((u32)(s32)(-32591) << 16);

label_80B15F00:
    ctx->pc = 0x80B15F00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15F00u)) return;
    // 80B15F00: addi    r4, r4, 31148
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(31148);

label_80B15F04:
    ctx->pc = 0x80B15F04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15F04u)) return;
    // 80B15F04: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B15F08:
    ctx->pc = 0x80B15F08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15F08u)) return;
    // 80B15F08: addi    r5, r5, -12248
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12248);

label_80B15F0C:
    ctx->pc = 0x80B15F0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15F0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B15F0C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B15F0Cu)) return;
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
label_80B15F10:
    ctx->pc = 0x80B15F10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15F10u)) return;
    // 80B15F10: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B15F14:
    ctx->pc = 0x80B15F14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15F14u)) return;
    // 80B15F14: addi    r5, r5, -12300
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12300);

label_80B15F18:
    ctx->pc = 0x80B15F18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15F18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B15F18: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B15F18u)) return;
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
label_80B15F1C:
    ctx->pc = 0x80B15F1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15F1Cu)) return;
    // 80B15F1C: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B15F20:
    ctx->pc = 0x80B15F20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15F20u)) return;
    // 80B15F20: addi    r5, r5, -12244
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12244);

label_80B15F24:
    ctx->pc = 0x80B15F24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15F24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B15F24: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B15F24u)) return;
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
label_80B15F28:
    ctx->pc = 0x80B15F28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15F28u)) return;
    // 80B15F28: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80B15F2C:
    ctx->pc = 0x80B15F2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15F2Cu)) return;
    // 80B15F2C: li      r6, 12288
    ctx->gpr[6] = (u32)(s32)(12288);

label_80B15F30:
    ctx->pc = 0x80B15F30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15F30u)) return;
    // 80B15F30: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B15F34:
    ctx->pc = 0x80B15F34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15F34u)) return;
    // 80B15F34: bl      0x8045F0B0
    {
            ctx->lr = 0x80B15F38u;
            ctx->pc = 0x8045F0B0u;
            return;
    }

label_80B15F38:
    ctx->pc = 0x80B15F38u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 18u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15F38u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 18u : 1u;
    // 80B15F38: lis     r3, -27589
    ctx->gpr[3] = ((u32)(s32)(-27589) << 16);

label_80B15F3C:
    ctx->pc = 0x80B15F3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15F3Cu)) return;
    // 80B15F3C: addi    r3, r3, 24060
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24060);

label_80B15F40:
    ctx->pc = 0x80B15F40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15F40u)) return;
    // 80B15F40: lis     r4, -32591
    ctx->gpr[4] = ((u32)(s32)(-32591) << 16);

label_80B15F44:
    ctx->pc = 0x80B15F44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15F44u)) return;
    // 80B15F44: addi    r4, r4, 31148
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(31148);

label_80B15F48:
    ctx->pc = 0x80B15F48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15F48u)) return;
    // 80B15F48: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B15F4C:
    ctx->pc = 0x80B15F4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15F4Cu)) return;
    // 80B15F4C: addi    r5, r5, -12240
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12240);

label_80B15F50:
    ctx->pc = 0x80B15F50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15F50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B15F50: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B15F50u)) return;
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
label_80B15F54:
    ctx->pc = 0x80B15F54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15F54u)) return;
    // 80B15F54: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B15F58:
    ctx->pc = 0x80B15F58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15F58u)) return;
    // 80B15F58: addi    r5, r5, -12288
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12288);

label_80B15F5C:
    ctx->pc = 0x80B15F5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15F5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B15F5C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B15F5Cu)) return;
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
label_80B15F60:
    ctx->pc = 0x80B15F60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15F60u)) return;
    // 80B15F60: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B15F64:
    ctx->pc = 0x80B15F64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15F64u)) return;
    // 80B15F64: addi    r5, r5, -12236
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12236);

label_80B15F68:
    ctx->pc = 0x80B15F68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15F68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B15F68: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B15F68u)) return;
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
label_80B15F6C:
    ctx->pc = 0x80B15F6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15F6Cu)) return;
    // 80B15F6C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80B15F70:
    ctx->pc = 0x80B15F70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15F70u)) return;
    // 80B15F70: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80B15F74:
    ctx->pc = 0x80B15F74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15F74u)) return;
    // 80B15F74: addi    r6, r6, -4096
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-4096);

label_80B15F78:
    ctx->pc = 0x80B15F78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15F78u)) return;
    // 80B15F78: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B15F7C:
    ctx->pc = 0x80B15F7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15F7Cu)) return;
    // 80B15F7C: bl      0x8045F0B0
    {
            ctx->lr = 0x80B15F80u;
            ctx->pc = 0x8045F0B0u;
            return;
    }

label_80B15F80:
    ctx->pc = 0x80B15F80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 18u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15F80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 18u : 1u;
    // 80B15F80: lis     r3, -27589
    ctx->gpr[3] = ((u32)(s32)(-27589) << 16);

label_80B15F84:
    ctx->pc = 0x80B15F84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15F84u)) return;
    // 80B15F84: addi    r3, r3, 24064
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24064);

label_80B15F88:
    ctx->pc = 0x80B15F88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15F88u)) return;
    // 80B15F88: lis     r4, -32591
    ctx->gpr[4] = ((u32)(s32)(-32591) << 16);

label_80B15F8C:
    ctx->pc = 0x80B15F8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15F8Cu)) return;
    // 80B15F8C: addi    r4, r4, 31148
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(31148);

label_80B15F90:
    ctx->pc = 0x80B15F90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15F90u)) return;
    // 80B15F90: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B15F94:
    ctx->pc = 0x80B15F94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15F94u)) return;
    // 80B15F94: addi    r5, r5, -12232
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12232);

label_80B15F98:
    ctx->pc = 0x80B15F98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15F98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B15F98: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B15F98u)) return;
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
label_80B15F9C:
    ctx->pc = 0x80B15F9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15F9Cu)) return;
    // 80B15F9C: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B15FA0:
    ctx->pc = 0x80B15FA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15FA0u)) return;
    // 80B15FA0: addi    r5, r5, -12288
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12288);

label_80B15FA4:
    ctx->pc = 0x80B15FA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15FA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B15FA4: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B15FA4u)) return;
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
label_80B15FA8:
    ctx->pc = 0x80B15FA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15FA8u)) return;
    // 80B15FA8: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B15FAC:
    ctx->pc = 0x80B15FACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15FACu)) return;
    // 80B15FAC: addi    r5, r5, -12228
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12228);

label_80B15FB0:
    ctx->pc = 0x80B15FB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15FB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B15FB0: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B15FB0u)) return;
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
label_80B15FB4:
    ctx->pc = 0x80B15FB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15FB4u)) return;
    // 80B15FB4: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80B15FB8:
    ctx->pc = 0x80B15FB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15FB8u)) return;
    // 80B15FB8: addi    r5, r5, -24576
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24576);

label_80B15FBC:
    ctx->pc = 0x80B15FBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15FBCu)) return;
    // 80B15FBC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B15FC0:
    ctx->pc = 0x80B15FC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15FC0u)) return;
    // 80B15FC0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B15FC4:
    ctx->pc = 0x80B15FC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15FC4u)) return;
    // 80B15FC4: bl      0x8045F0B0
    {
            ctx->lr = 0x80B15FC8u;
            ctx->pc = 0x8045F0B0u;
            return;
    }

label_80B15FC8:
    ctx->pc = 0x80B15FC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 17u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15FC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 17u : 1u;
    // 80B15FC8: lis     r3, -27589
    ctx->gpr[3] = ((u32)(s32)(-27589) << 16);

label_80B15FCC:
    ctx->pc = 0x80B15FCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15FCCu)) return;
    // 80B15FCC: addi    r3, r3, 24068
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24068);

label_80B15FD0:
    ctx->pc = 0x80B15FD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15FD0u)) return;
    // 80B15FD0: lis     r4, -32591
    ctx->gpr[4] = ((u32)(s32)(-32591) << 16);

label_80B15FD4:
    ctx->pc = 0x80B15FD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15FD4u)) return;
    // 80B15FD4: addi    r4, r4, 31148
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(31148);

label_80B15FD8:
    ctx->pc = 0x80B15FD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15FD8u)) return;
    // 80B15FD8: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B15FDC:
    ctx->pc = 0x80B15FDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15FDCu)) return;
    // 80B15FDC: addi    r5, r5, -12224
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12224);

label_80B15FE0:
    ctx->pc = 0x80B15FE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15FE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B15FE0: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B15FE0u)) return;
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
label_80B15FE4:
    ctx->pc = 0x80B15FE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15FE4u)) return;
    // 80B15FE4: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B15FE8:
    ctx->pc = 0x80B15FE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15FE8u)) return;
    // 80B15FE8: addi    r5, r5, -12300
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12300);

label_80B15FEC:
    ctx->pc = 0x80B15FECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15FECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B15FEC: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B15FECu)) return;
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
label_80B15FF0:
    ctx->pc = 0x80B15FF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15FF0u)) return;
    // 80B15FF0: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B15FF4:
    ctx->pc = 0x80B15FF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15FF4u)) return;
    // 80B15FF4: addi    r5, r5, -12220
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12220);

label_80B15FF8:
    ctx->pc = 0x80B15FF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15FF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B15FF8: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B15FF8u)) return;
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
label_80B15FFC:
    ctx->pc = 0x80B15FFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15FFCu)) return;
    // 80B15FFC: li      r5, 12288
    ctx->gpr[5] = (u32)(s32)(12288);

label_80B16000:
    ctx->pc = 0x80B16000u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16000u)) return;
    // 80B16000: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B16004:
    ctx->pc = 0x80B16004u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16004u)) return;
    // 80B16004: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B16008:
    ctx->pc = 0x80B16008u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16008u)) return;
    // 80B16008: bl      0x8045F0B0
    {
            ctx->lr = 0x80B1600Cu;
            ctx->pc = 0x8045F0B0u;
            return;
    }

label_80B1600C:
    ctx->pc = 0x80B1600Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B1600Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B1600C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B16010:
    ctx->pc = 0x80B16010u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16010u)) return;
    // 80B16010: bl      0x8045F7C8
    {
            ctx->lr = 0x80B16014u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B16014:
    ctx->pc = 0x80B16014u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16014u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80B16014: lis     r3, -27589
    ctx->gpr[3] = ((u32)(s32)(-27589) << 16);

label_80B16018:
    ctx->pc = 0x80B16018u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16018u)) return;
    // 80B16018: addi    r3, r3, 24032
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24032);

label_80B1601C:
    ctx->pc = 0x80B1601Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1601Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B1601C: lwz     r3, 0(r3)
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
label_80B16020:
    ctx->pc = 0x80B16020u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16020u)) return;
    // 80B16020: lis     r4, -27589
    ctx->gpr[4] = ((u32)(s32)(-27589) << 16);

label_80B16024:
    ctx->pc = 0x80B16024u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16024u)) return;
    // 80B16024: addi    r4, r4, 5172
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(5172);

label_80B16028:
    ctx->pc = 0x80B16028u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16028u)) return;
    // 80B16028: lis     r5, -27589
    ctx->gpr[5] = ((u32)(s32)(-27589) << 16);

label_80B1602C:
    ctx->pc = 0x80B1602Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1602Cu)) return;
    // 80B1602C: addi    r5, r5, 13080
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13080);

label_80B16030:
    ctx->pc = 0x80B16030u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16030u)) return;
    // 80B16030: lis     r6, -27591
    ctx->gpr[6] = ((u32)(s32)(-27591) << 16);

label_80B16034:
    ctx->pc = 0x80B16034u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16034u)) return;
    // 80B16034: addi    r6, r6, -12216
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-12216);

label_80B16038:
    ctx->pc = 0x80B16038u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16038u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B16038: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B16038u)) return;
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
label_80B1603C:
    ctx->pc = 0x80B1603Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1603Cu)) return;
    // 80B1603C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80B16040:
    ctx->pc = 0x80B16040u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16040u)) return;
    // 80B16040: li      r7, 4
    ctx->gpr[7] = (u32)(s32)(4);

label_80B16044:
    ctx->pc = 0x80B16044u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16044u)) return;
    // 80B16044: bl      0x8045EBE4
    {
            ctx->lr = 0x80B16048u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80B16048:
    ctx->pc = 0x80B16048u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16048u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80B16048: lis     r3, -27589
    ctx->gpr[3] = ((u32)(s32)(-27589) << 16);

label_80B1604C:
    ctx->pc = 0x80B1604Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1604Cu)) return;
    // 80B1604C: addi    r3, r3, 24036
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24036);

label_80B16050:
    ctx->pc = 0x80B16050u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16050u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B16050: lwz     r3, 0(r3)
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
label_80B16054:
    ctx->pc = 0x80B16054u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16054u)) return;
    // 80B16054: lis     r4, -27589
    ctx->gpr[4] = ((u32)(s32)(-27589) << 16);

label_80B16058:
    ctx->pc = 0x80B16058u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16058u)) return;
    // 80B16058: addi    r4, r4, 9272
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9272);

label_80B1605C:
    ctx->pc = 0x80B1605Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1605Cu)) return;
    // 80B1605C: lis     r5, -27589
    ctx->gpr[5] = ((u32)(s32)(-27589) << 16);

label_80B16060:
    ctx->pc = 0x80B16060u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16060u)) return;
    // 80B16060: addi    r5, r5, 13080
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13080);

label_80B16064:
    ctx->pc = 0x80B16064u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16064u)) return;
    // 80B16064: lis     r6, -27591
    ctx->gpr[6] = ((u32)(s32)(-27591) << 16);

label_80B16068:
    ctx->pc = 0x80B16068u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16068u)) return;
    // 80B16068: addi    r6, r6, -12216
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-12216);

label_80B1606C:
    ctx->pc = 0x80B1606Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1606Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B1606C: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B1606Cu)) return;
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
label_80B16070:
    ctx->pc = 0x80B16070u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16070u)) return;
    // 80B16070: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80B16074:
    ctx->pc = 0x80B16074u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16074u)) return;
    // 80B16074: li      r7, 4
    ctx->gpr[7] = (u32)(s32)(4);

label_80B16078:
    ctx->pc = 0x80B16078u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16078u)) return;
    // 80B16078: bl      0x8045EBE4
    {
            ctx->lr = 0x80B1607Cu;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80B1607C:
    ctx->pc = 0x80B1607Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B1607Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80B1607C: lis     r3, -27589
    ctx->gpr[3] = ((u32)(s32)(-27589) << 16);

label_80B16080:
    ctx->pc = 0x80B16080u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16080u)) return;
    // 80B16080: addi    r3, r3, 24040
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24040);

label_80B16084:
    ctx->pc = 0x80B16084u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16084u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B16084: lwz     r3, 0(r3)
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
label_80B16088:
    ctx->pc = 0x80B16088u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16088u)) return;
    // 80B16088: lis     r4, -27589
    ctx->gpr[4] = ((u32)(s32)(-27589) << 16);

label_80B1608C:
    ctx->pc = 0x80B1608Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1608Cu)) return;
    // 80B1608C: addi    r4, r4, 12828
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12828);

label_80B16090:
    ctx->pc = 0x80B16090u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16090u)) return;
    // 80B16090: lis     r5, -27589
    ctx->gpr[5] = ((u32)(s32)(-27589) << 16);

label_80B16094:
    ctx->pc = 0x80B16094u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16094u)) return;
    // 80B16094: addi    r5, r5, 13080
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13080);

label_80B16098:
    ctx->pc = 0x80B16098u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16098u)) return;
    // 80B16098: lis     r6, -27591
    ctx->gpr[6] = ((u32)(s32)(-27591) << 16);

label_80B1609C:
    ctx->pc = 0x80B1609Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1609Cu)) return;
    // 80B1609C: addi    r6, r6, -12216
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-12216);

label_80B160A0:
    ctx->pc = 0x80B160A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B160A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B160A0: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B160A0u)) return;
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
label_80B160A4:
    ctx->pc = 0x80B160A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B160A4u)) return;
    // 80B160A4: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80B160A8:
    ctx->pc = 0x80B160A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B160A8u)) return;
    // 80B160A8: li      r7, 4
    ctx->gpr[7] = (u32)(s32)(4);

label_80B160AC:
    ctx->pc = 0x80B160ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B160ACu)) return;
    // 80B160AC: bl      0x8045EBE4
    {
            ctx->lr = 0x80B160B0u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80B160B0:
    ctx->pc = 0x80B160B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B160B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80B160B0: lis     r3, -27589
    ctx->gpr[3] = ((u32)(s32)(-27589) << 16);

label_80B160B4:
    ctx->pc = 0x80B160B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B160B4u)) return;
    // 80B160B4: addi    r3, r3, 24044
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24044);

label_80B160B8:
    ctx->pc = 0x80B160B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B160B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B160B8: lwz     r3, 0(r3)
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
label_80B160BC:
    ctx->pc = 0x80B160BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B160BCu)) return;
    // 80B160BC: lis     r4, -27589
    ctx->gpr[4] = ((u32)(s32)(-27589) << 16);

label_80B160C0:
    ctx->pc = 0x80B160C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B160C0u)) return;
    // 80B160C0: addi    r4, r4, 9272
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9272);

label_80B160C4:
    ctx->pc = 0x80B160C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B160C4u)) return;
    // 80B160C4: lis     r5, -27589
    ctx->gpr[5] = ((u32)(s32)(-27589) << 16);

label_80B160C8:
    ctx->pc = 0x80B160C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B160C8u)) return;
    // 80B160C8: addi    r5, r5, 13080
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13080);

label_80B160CC:
    ctx->pc = 0x80B160CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B160CCu)) return;
    // 80B160CC: lis     r6, -27591
    ctx->gpr[6] = ((u32)(s32)(-27591) << 16);

label_80B160D0:
    ctx->pc = 0x80B160D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B160D0u)) return;
    // 80B160D0: addi    r6, r6, -12216
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-12216);

label_80B160D4:
    ctx->pc = 0x80B160D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B160D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B160D4: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B160D4u)) return;
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
label_80B160D8:
    ctx->pc = 0x80B160D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B160D8u)) return;
    // 80B160D8: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80B160DC:
    ctx->pc = 0x80B160DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B160DCu)) return;
    // 80B160DC: li      r7, 4
    ctx->gpr[7] = (u32)(s32)(4);

label_80B160E0:
    ctx->pc = 0x80B160E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B160E0u)) return;
    // 80B160E0: bl      0x8045EBE4
    {
            ctx->lr = 0x80B160E4u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80B160E4:
    ctx->pc = 0x80B160E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B160E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80B160E4: lis     r3, -27589
    ctx->gpr[3] = ((u32)(s32)(-27589) << 16);

label_80B160E8:
    ctx->pc = 0x80B160E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B160E8u)) return;
    // 80B160E8: addi    r3, r3, 24048
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24048);

label_80B160EC:
    ctx->pc = 0x80B160ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B160ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B160EC: lwz     r3, 0(r3)
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
label_80B160F0:
    ctx->pc = 0x80B160F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B160F0u)) return;
    // 80B160F0: lis     r4, -27589
    ctx->gpr[4] = ((u32)(s32)(-27589) << 16);

label_80B160F4:
    ctx->pc = 0x80B160F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B160F4u)) return;
    // 80B160F4: addi    r4, r4, 5172
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(5172);

label_80B160F8:
    ctx->pc = 0x80B160F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B160F8u)) return;
    // 80B160F8: lis     r5, -27589
    ctx->gpr[5] = ((u32)(s32)(-27589) << 16);

label_80B160FC:
    ctx->pc = 0x80B160FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B160FCu)) return;
    // 80B160FC: addi    r5, r5, 13080
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13080);

label_80B16100:
    ctx->pc = 0x80B16100u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16100u)) return;
    // 80B16100: lis     r6, -27591
    ctx->gpr[6] = ((u32)(s32)(-27591) << 16);

label_80B16104:
    ctx->pc = 0x80B16104u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16104u)) return;
    // 80B16104: addi    r6, r6, -12216
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-12216);

label_80B16108:
    ctx->pc = 0x80B16108u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16108u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B16108: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B16108u)) return;
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
label_80B1610C:
    ctx->pc = 0x80B1610Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1610Cu)) return;
    // 80B1610C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80B16110:
    ctx->pc = 0x80B16110u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16110u)) return;
    // 80B16110: li      r7, 4
    ctx->gpr[7] = (u32)(s32)(4);

label_80B16114:
    ctx->pc = 0x80B16114u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16114u)) return;
    // 80B16114: bl      0x8045EBE4
    {
            ctx->lr = 0x80B16118u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80B16118:
    ctx->pc = 0x80B16118u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16118u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80B16118: lis     r3, -27589
    ctx->gpr[3] = ((u32)(s32)(-27589) << 16);

label_80B1611C:
    ctx->pc = 0x80B1611Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1611Cu)) return;
    // 80B1611C: addi    r3, r3, 24052
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24052);

label_80B16120:
    ctx->pc = 0x80B16120u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16120u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B16120: lwz     r3, 0(r3)
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
label_80B16124:
    ctx->pc = 0x80B16124u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16124u)) return;
    // 80B16124: lis     r4, -27589
    ctx->gpr[4] = ((u32)(s32)(-27589) << 16);

label_80B16128:
    ctx->pc = 0x80B16128u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16128u)) return;
    // 80B16128: addi    r4, r4, 9272
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9272);

label_80B1612C:
    ctx->pc = 0x80B1612Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1612Cu)) return;
    // 80B1612C: lis     r5, -27589
    ctx->gpr[5] = ((u32)(s32)(-27589) << 16);

label_80B16130:
    ctx->pc = 0x80B16130u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16130u)) return;
    // 80B16130: addi    r5, r5, 13080
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13080);

label_80B16134:
    ctx->pc = 0x80B16134u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16134u)) return;
    // 80B16134: lis     r6, -27591
    ctx->gpr[6] = ((u32)(s32)(-27591) << 16);

label_80B16138:
    ctx->pc = 0x80B16138u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16138u)) return;
    // 80B16138: addi    r6, r6, -12216
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-12216);

label_80B1613C:
    ctx->pc = 0x80B1613Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1613Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B1613C: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B1613Cu)) return;
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
label_80B16140:
    ctx->pc = 0x80B16140u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16140u)) return;
    // 80B16140: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80B16144:
    ctx->pc = 0x80B16144u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16144u)) return;
    // 80B16144: li      r7, 4
    ctx->gpr[7] = (u32)(s32)(4);

label_80B16148:
    ctx->pc = 0x80B16148u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16148u)) return;
    // 80B16148: bl      0x8045EBE4
    {
            ctx->lr = 0x80B1614Cu;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80B1614C:
    ctx->pc = 0x80B1614Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B1614Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80B1614C: lis     r3, -27589
    ctx->gpr[3] = ((u32)(s32)(-27589) << 16);

label_80B16150:
    ctx->pc = 0x80B16150u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16150u)) return;
    // 80B16150: addi    r3, r3, 24056
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24056);

label_80B16154:
    ctx->pc = 0x80B16154u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16154u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B16154: lwz     r3, 0(r3)
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
label_80B16158:
    ctx->pc = 0x80B16158u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16158u)) return;
    // 80B16158: lis     r4, -27589
    ctx->gpr[4] = ((u32)(s32)(-27589) << 16);

label_80B1615C:
    ctx->pc = 0x80B1615Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1615Cu)) return;
    // 80B1615C: addi    r4, r4, 5172
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(5172);

label_80B16160:
    ctx->pc = 0x80B16160u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16160u)) return;
    // 80B16160: lis     r5, -27589
    ctx->gpr[5] = ((u32)(s32)(-27589) << 16);

label_80B16164:
    ctx->pc = 0x80B16164u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16164u)) return;
    // 80B16164: addi    r5, r5, 13080
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13080);

label_80B16168:
    ctx->pc = 0x80B16168u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16168u)) return;
    // 80B16168: lis     r6, -27591
    ctx->gpr[6] = ((u32)(s32)(-27591) << 16);

label_80B1616C:
    ctx->pc = 0x80B1616Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1616Cu)) return;
    // 80B1616C: addi    r6, r6, -12216
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-12216);

label_80B16170:
    ctx->pc = 0x80B16170u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16170u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B16170: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B16170u)) return;
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
label_80B16174:
    ctx->pc = 0x80B16174u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16174u)) return;
    // 80B16174: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80B16178:
    ctx->pc = 0x80B16178u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16178u)) return;
    // 80B16178: li      r7, 4
    ctx->gpr[7] = (u32)(s32)(4);

label_80B1617C:
    ctx->pc = 0x80B1617Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1617Cu)) return;
    // 80B1617C: bl      0x8045EBE4
    {
            ctx->lr = 0x80B16180u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80B16180:
    ctx->pc = 0x80B16180u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16180u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80B16180: lis     r3, -27589
    ctx->gpr[3] = ((u32)(s32)(-27589) << 16);

label_80B16184:
    ctx->pc = 0x80B16184u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16184u)) return;
    // 80B16184: addi    r3, r3, 24060
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24060);

label_80B16188:
    ctx->pc = 0x80B16188u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16188u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B16188: lwz     r3, 0(r3)
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
label_80B1618C:
    ctx->pc = 0x80B1618Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1618Cu)) return;
    // 80B1618C: lis     r4, -27589
    ctx->gpr[4] = ((u32)(s32)(-27589) << 16);

label_80B16190:
    ctx->pc = 0x80B16190u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16190u)) return;
    // 80B16190: addi    r4, r4, 9272
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9272);

label_80B16194:
    ctx->pc = 0x80B16194u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16194u)) return;
    // 80B16194: lis     r5, -27589
    ctx->gpr[5] = ((u32)(s32)(-27589) << 16);

label_80B16198:
    ctx->pc = 0x80B16198u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16198u)) return;
    // 80B16198: addi    r5, r5, 13080
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13080);

label_80B1619C:
    ctx->pc = 0x80B1619Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1619Cu)) return;
    // 80B1619C: lis     r6, -27591
    ctx->gpr[6] = ((u32)(s32)(-27591) << 16);

label_80B161A0:
    ctx->pc = 0x80B161A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B161A0u)) return;
    // 80B161A0: addi    r6, r6, -12216
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-12216);

label_80B161A4:
    ctx->pc = 0x80B161A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B161A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B161A4: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B161A4u)) return;
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
label_80B161A8:
    ctx->pc = 0x80B161A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B161A8u)) return;
    // 80B161A8: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80B161AC:
    ctx->pc = 0x80B161ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B161ACu)) return;
    // 80B161AC: li      r7, 4
    ctx->gpr[7] = (u32)(s32)(4);

label_80B161B0:
    ctx->pc = 0x80B161B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B161B0u)) return;
    // 80B161B0: bl      0x8045EBE4
    {
            ctx->lr = 0x80B161B4u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80B161B4:
    ctx->pc = 0x80B161B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B161B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80B161B4: lis     r3, -27589
    ctx->gpr[3] = ((u32)(s32)(-27589) << 16);

label_80B161B8:
    ctx->pc = 0x80B161B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B161B8u)) return;
    // 80B161B8: addi    r3, r3, 24064
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24064);

label_80B161BC:
    ctx->pc = 0x80B161BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B161BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B161BC: lwz     r3, 0(r3)
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
label_80B161C0:
    ctx->pc = 0x80B161C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B161C0u)) return;
    // 80B161C0: lis     r4, -27589
    ctx->gpr[4] = ((u32)(s32)(-27589) << 16);

label_80B161C4:
    ctx->pc = 0x80B161C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B161C4u)) return;
    // 80B161C4: addi    r4, r4, 5172
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(5172);

label_80B161C8:
    ctx->pc = 0x80B161C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B161C8u)) return;
    // 80B161C8: lis     r5, -27589
    ctx->gpr[5] = ((u32)(s32)(-27589) << 16);

label_80B161CC:
    ctx->pc = 0x80B161CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B161CCu)) return;
    // 80B161CC: addi    r5, r5, 13080
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13080);

label_80B161D0:
    ctx->pc = 0x80B161D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B161D0u)) return;
    // 80B161D0: lis     r6, -27591
    ctx->gpr[6] = ((u32)(s32)(-27591) << 16);

label_80B161D4:
    ctx->pc = 0x80B161D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B161D4u)) return;
    // 80B161D4: addi    r6, r6, -12216
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-12216);

label_80B161D8:
    ctx->pc = 0x80B161D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B161D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B161D8: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B161D8u)) return;
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
label_80B161DC:
    ctx->pc = 0x80B161DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B161DCu)) return;
    // 80B161DC: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80B161E0:
    ctx->pc = 0x80B161E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B161E0u)) return;
    // 80B161E0: li      r7, 4
    ctx->gpr[7] = (u32)(s32)(4);

label_80B161E4:
    ctx->pc = 0x80B161E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B161E4u)) return;
    // 80B161E4: bl      0x8045EBE4
    {
            ctx->lr = 0x80B161E8u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80B161E8:
    ctx->pc = 0x80B161E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B161E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80B161E8: lis     r3, -27589
    ctx->gpr[3] = ((u32)(s32)(-27589) << 16);

label_80B161EC:
    ctx->pc = 0x80B161ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B161ECu)) return;
    // 80B161EC: addi    r3, r3, 24068
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24068);

label_80B161F0:
    ctx->pc = 0x80B161F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B161F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B161F0: lwz     r3, 0(r3)
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
label_80B161F4:
    ctx->pc = 0x80B161F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B161F4u)) return;
    // 80B161F4: lis     r4, -27589
    ctx->gpr[4] = ((u32)(s32)(-27589) << 16);

label_80B161F8:
    ctx->pc = 0x80B161F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B161F8u)) return;
    // 80B161F8: addi    r4, r4, 5172
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(5172);

label_80B161FC:
    ctx->pc = 0x80B161FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B161FCu)) return;
    // 80B161FC: lis     r5, -27589
    ctx->gpr[5] = ((u32)(s32)(-27589) << 16);

label_80B16200:
    ctx->pc = 0x80B16200u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16200u)) return;
    // 80B16200: addi    r5, r5, 13080
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13080);

label_80B16204:
    ctx->pc = 0x80B16204u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16204u)) return;
    // 80B16204: lis     r6, -27591
    ctx->gpr[6] = ((u32)(s32)(-27591) << 16);

label_80B16208:
    ctx->pc = 0x80B16208u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16208u)) return;
    // 80B16208: addi    r6, r6, -12216
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-12216);

label_80B1620C:
    ctx->pc = 0x80B1620Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1620Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B1620C: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B1620Cu)) return;
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
label_80B16210:
    ctx->pc = 0x80B16210u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16210u)) return;
    // 80B16210: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80B16214:
    ctx->pc = 0x80B16214u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16214u)) return;
    // 80B16214: li      r7, 4
    ctx->gpr[7] = (u32)(s32)(4);

label_80B16218:
    ctx->pc = 0x80B16218u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16218u)) return;
    // 80B16218: bl      0x8045EBE4
    {
            ctx->lr = 0x80B1621Cu;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80B1621C:
    ctx->pc = 0x80B1621Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B1621Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B1621C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B16220:
    ctx->pc = 0x80B16220u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16220u)) return;
    // 80B16220: bl      0x8045F220
    {
            ctx->lr = 0x80B16224u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B16224:
    ctx->pc = 0x80B16224u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16224u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B16224: lis     r4, -27591
    ctx->gpr[4] = ((u32)(s32)(-27591) << 16);

label_80B16228:
    ctx->pc = 0x80B16228u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16228u)) return;
    // 80B16228: addi    r4, r4, -12212
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-12212);

label_80B1622C:
    ctx->pc = 0x80B1622Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1622Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B1622C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B1622Cu)) return;
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
label_80B16230:
    ctx->pc = 0x80B16230u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16230u)) return;
    // 80B16230: lis     r4, -27591
    ctx->gpr[4] = ((u32)(s32)(-27591) << 16);

label_80B16234:
    ctx->pc = 0x80B16234u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16234u)) return;
    // 80B16234: addi    r4, r4, -12208
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-12208);

label_80B16238:
    ctx->pc = 0x80B16238u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16238u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B16238: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B16238u)) return;
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
label_80B1623C:
    ctx->pc = 0x80B1623Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1623Cu)) return;
    // 80B1623C: lis     r4, -27591
    ctx->gpr[4] = ((u32)(s32)(-27591) << 16);

label_80B16240:
    ctx->pc = 0x80B16240u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16240u)) return;
    // 80B16240: addi    r4, r4, -12204
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-12204);

label_80B16244:
    ctx->pc = 0x80B16244u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16244u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B16244: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B16244u)) return;
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
label_80B16248:
    ctx->pc = 0x80B16248u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16248u)) return;
    // 80B16248: bl      0x8045EF2C
    {
            ctx->lr = 0x80B1624Cu;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80B1624C:
    ctx->pc = 0x80B1624Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B1624Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B1624C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B16250:
    ctx->pc = 0x80B16250u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16250u)) return;
    // 80B16250: bl      0x8045F220
    {
            ctx->lr = 0x80B16254u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B16254:
    ctx->pc = 0x80B16254u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16254u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B16254: li      r4, 1280
    ctx->gpr[4] = (u32)(s32)(1280);

label_80B16258:
    ctx->pc = 0x80B16258u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16258u)) return;
    // 80B16258: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80B1625C:
    ctx->pc = 0x80B1625Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1625Cu)) return;
    // 80B1625C: addi    r5, r6, -25984
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-25984);

label_80B16260:
    ctx->pc = 0x80B16260u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16260u)) return;
    // 80B16260: addi    r6, r6, -112
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-112);

label_80B16264:
    ctx->pc = 0x80B16264u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16264u)) return;
    // 80B16264: bl      0x8045EEA8
    {
            ctx->lr = 0x80B16268u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80B16268:
    ctx->pc = 0x80B16268u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 17u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16268u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 17u : 1u;
    // 80B16268: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B1626C:
    ctx->pc = 0x80B1626Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1626Cu)) return;
    // 80B1626C: lis     r4, -32625
    ctx->gpr[4] = ((u32)(s32)(-32625) << 16);

label_80B16270:
    ctx->pc = 0x80B16270u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16270u)) return;
    // 80B16270: addi    r4, r4, 18200
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(18200);

label_80B16274:
    ctx->pc = 0x80B16274u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16274u)) return;
    // 80B16274: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B16278:
    ctx->pc = 0x80B16278u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16278u)) return;
    // 80B16278: addi    r5, r5, -12200
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12200);

label_80B1627C:
    ctx->pc = 0x80B1627Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1627Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B1627C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B1627Cu)) return;
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
label_80B16280:
    ctx->pc = 0x80B16280u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16280u)) return;
    // 80B16280: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B16284:
    ctx->pc = 0x80B16284u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16284u)) return;
    // 80B16284: addi    r5, r5, -12196
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12196);

label_80B16288:
    ctx->pc = 0x80B16288u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16288u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B16288: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B16288u)) return;
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
label_80B1628C:
    ctx->pc = 0x80B1628Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1628Cu)) return;
    // 80B1628C: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B16290:
    ctx->pc = 0x80B16290u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16290u)) return;
    // 80B16290: addi    r5, r5, -12192
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12192);

label_80B16294:
    ctx->pc = 0x80B16294u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16294u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B16294: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B16294u)) return;
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
label_80B16298:
    ctx->pc = 0x80B16298u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16298u)) return;
    // 80B16298: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80B1629C:
    ctx->pc = 0x80B1629Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1629Cu)) return;
    // 80B1629C: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80B162A0:
    ctx->pc = 0x80B162A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B162A0u)) return;
    // 80B162A0: addi    r6, r6, -32768
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-32768);

label_80B162A4:
    ctx->pc = 0x80B162A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B162A4u)) return;
    // 80B162A4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B162A8:
    ctx->pc = 0x80B162A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B162A8u)) return;
    // 80B162A8: bl      0x8045ED84
    {
            ctx->lr = 0x80B162ACu;
            ctx->pc = 0x8045ED84u;
            return;
    }

label_80B162AC:
    ctx->pc = 0x80B162ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B162ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B162AC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B162B0:
    ctx->pc = 0x80B162B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B162B0u)) return;
    // 80B162B0: bl      0x8045F7C8
    {
            ctx->lr = 0x80B162B4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B162B4:
    ctx->pc = 0x80B162B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B162B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B162B4: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B162B8:
    ctx->pc = 0x80B162B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B162B8u)) return;
    // 80B162B8: bl      0x8045F220
    {
            ctx->lr = 0x80B162BCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B162BC:
    ctx->pc = 0x80B162BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B162BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B162BC: lis     r4, -27591
    ctx->gpr[4] = ((u32)(s32)(-27591) << 16);

label_80B162C0:
    ctx->pc = 0x80B162C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B162C0u)) return;
    // 80B162C0: addi    r4, r4, -12200
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-12200);

label_80B162C4:
    ctx->pc = 0x80B162C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B162C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B162C4: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B162C4u)) return;
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
label_80B162C8:
    ctx->pc = 0x80B162C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B162C8u)) return;
    // 80B162C8: lis     r4, -27591
    ctx->gpr[4] = ((u32)(s32)(-27591) << 16);

label_80B162CC:
    ctx->pc = 0x80B162CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B162CCu)) return;
    // 80B162CC: addi    r4, r4, -12196
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-12196);

label_80B162D0:
    ctx->pc = 0x80B162D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B162D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B162D0: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B162D0u)) return;
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
label_80B162D4:
    ctx->pc = 0x80B162D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B162D4u)) return;
    // 80B162D4: lis     r4, -27591
    ctx->gpr[4] = ((u32)(s32)(-27591) << 16);

label_80B162D8:
    ctx->pc = 0x80B162D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B162D8u)) return;
    // 80B162D8: addi    r4, r4, -12192
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-12192);

label_80B162DC:
    ctx->pc = 0x80B162DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B162DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B162DC: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B162DCu)) return;
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
label_80B162E0:
    ctx->pc = 0x80B162E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B162E0u)) return;
    // 80B162E0: bl      0x8045EF2C
    {
            ctx->lr = 0x80B162E4u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80B162E4:
    ctx->pc = 0x80B162E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B162E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B162E4: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B162E8:
    ctx->pc = 0x80B162E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B162E8u)) return;
    // 80B162E8: bl      0x8045F220
    {
            ctx->lr = 0x80B162ECu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B162EC:
    ctx->pc = 0x80B162ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B162ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B162EC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B162F0:
    ctx->pc = 0x80B162F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B162F0u)) return;
    // 80B162F0: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80B162F4:
    ctx->pc = 0x80B162F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B162F4u)) return;
    // 80B162F4: addi    r5, r5, -32768
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-32768);

label_80B162F8:
    ctx->pc = 0x80B162F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B162F8u)) return;
    // 80B162F8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B162FC:
    ctx->pc = 0x80B162FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B162FCu)) return;
    // 80B162FC: bl      0x8045EEA8
    {
            ctx->lr = 0x80B16300u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80B16300:
    ctx->pc = 0x80B16300u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16300u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B16300: li      r3, 40
    ctx->gpr[3] = (u32)(s32)(40);

label_80B16304:
    ctx->pc = 0x80B16304u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16304u)) return;
    // 80B16304: bl      0x80406090
    {
            ctx->lr = 0x80B16308u;
            ctx->pc = 0x80406090u;
            return;
    }

label_80B16308:
    ctx->pc = 0x80B16308u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16308u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B16308: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B1630C:
    ctx->pc = 0x80B1630Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1630Cu)) return;
    // 80B1630C: li      r4, 1333
    ctx->gpr[4] = (u32)(s32)(1333);

label_80B16310:
    ctx->pc = 0x80B16310u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16310u)) return;
    // 80B16310: li      r5, 1800
    ctx->gpr[5] = (u32)(s32)(1800);

label_80B16314:
    ctx->pc = 0x80B16314u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16314u)) return;
    // 80B16314: bl      0x80B17438
    {
            ctx->lr = 0x80B16318u;
            goto label_80B17438;
    }

label_80B16318:
    ctx->pc = 0x80B16318u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16318u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B16318: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B1631C:
    ctx->pc = 0x80B1631Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1631Cu)) return;
    // 80B1631C: li      r4, -16
    ctx->gpr[4] = (u32)(s32)(-16);

label_80B16320:
    ctx->pc = 0x80B16320u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16320u)) return;
    // 80B16320: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80B16324:
    ctx->pc = 0x80B16324u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16324u)) return;
    // 80B16324: bl      0x80B17514
    {
            ctx->lr = 0x80B16328u;
            goto label_80B17514;
    }

label_80B16328:
    ctx->pc = 0x80B16328u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16328u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B16328: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B1632C:
    ctx->pc = 0x80B1632Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1632Cu)) return;
    // 80B1632C: li      r4, 1334
    ctx->gpr[4] = (u32)(s32)(1334);

label_80B16330:
    ctx->pc = 0x80B16330u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16330u)) return;
    // 80B16330: li      r5, 1800
    ctx->gpr[5] = (u32)(s32)(1800);

label_80B16334:
    ctx->pc = 0x80B16334u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16334u)) return;
    // 80B16334: bl      0x80B17438
    {
            ctx->lr = 0x80B16338u;
            goto label_80B17438;
    }

label_80B16338:
    ctx->pc = 0x80B16338u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16338u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B16338: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B1633C:
    ctx->pc = 0x80B1633Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1633Cu)) return;
    // 80B1633C: bl      0x8045F220
    {
            ctx->lr = 0x80B16340u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B16340:
    ctx->pc = 0x80B16340u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16340u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B16340: lis     r4, -27591
    ctx->gpr[4] = ((u32)(s32)(-27591) << 16);

label_80B16344:
    ctx->pc = 0x80B16344u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16344u)) return;
    // 80B16344: addi    r4, r4, 3528
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(3528);

label_80B16348:
    ctx->pc = 0x80B16348u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16348u)) return;
    // 80B16348: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80B1634C:
    ctx->pc = 0x80B1634Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1634Cu)) return;
    // 80B1634C: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80B16350:
    ctx->pc = 0x80B16350u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16350u)) return;
    // 80B16350: lis     r6, -27591
    ctx->gpr[6] = ((u32)(s32)(-27591) << 16);

label_80B16354:
    ctx->pc = 0x80B16354u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16354u)) return;
    // 80B16354: addi    r6, r6, -12300
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-12300);

label_80B16358:
    ctx->pc = 0x80B16358u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16358u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B16358: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B16358u)) return;
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
label_80B1635C:
    ctx->pc = 0x80B1635Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1635Cu)) return;
    // 80B1635C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80B16360:
    ctx->pc = 0x80B16360u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16360u)) return;
    // 80B16360: li      r7, 4
    ctx->gpr[7] = (u32)(s32)(4);

label_80B16364:
    ctx->pc = 0x80B16364u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16364u)) return;
    // 80B16364: bl      0x8045EBE4
    {
            ctx->lr = 0x80B16368u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80B16368:
    ctx->pc = 0x80B16368u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16368u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B16368: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B1636C:
    ctx->pc = 0x80B1636Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1636Cu)) return;
    // 80B1636C: bl      0x8045F220
    {
            ctx->lr = 0x80B16370u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B16370:
    ctx->pc = 0x80B16370u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16370u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B16370: lis     r4, -27590
    ctx->gpr[4] = ((u32)(s32)(-27590) << 16);

label_80B16374:
    ctx->pc = 0x80B16374u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16374u)) return;
    // 80B16374: addi    r4, r4, -9096
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-9096);

label_80B16378:
    ctx->pc = 0x80B16378u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16378u)) return;
    // 80B16378: lis     r5, -27864
    ctx->gpr[5] = ((u32)(s32)(-27864) << 16);

label_80B1637C:
    ctx->pc = 0x80B1637Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1637Cu)) return;
    // 80B1637C: addi    r5, r5, -24080
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24080);

label_80B16380:
    ctx->pc = 0x80B16380u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16380u)) return;
    // 80B16380: lis     r6, -27591
    ctx->gpr[6] = ((u32)(s32)(-27591) << 16);

label_80B16384:
    ctx->pc = 0x80B16384u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16384u)) return;
    // 80B16384: addi    r6, r6, -12300
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-12300);

label_80B16388:
    ctx->pc = 0x80B16388u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16388u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B16388: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B16388u)) return;
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
label_80B1638C:
    ctx->pc = 0x80B1638Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1638Cu)) return;
    // 80B1638C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80B16390:
    ctx->pc = 0x80B16390u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16390u)) return;
    // 80B16390: li      r7, 4
    ctx->gpr[7] = (u32)(s32)(4);

label_80B16394:
    ctx->pc = 0x80B16394u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16394u)) return;
    // 80B16394: bl      0x8045EBE4
    {
            ctx->lr = 0x80B16398u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80B16398:
    ctx->pc = 0x80B16398u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16398u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B16398: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B1639C:
    ctx->pc = 0x80B1639Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1639Cu)) return;
    // 80B1639C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B163A0:
    ctx->pc = 0x80B163A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B163A0u)) return;
    // 80B163A0: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B163A4:
    ctx->pc = 0x80B163A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B163A4u)) return;
    // 80B163A4: addi    r5, r5, -12188
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12188);

label_80B163A8:
    ctx->pc = 0x80B163A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B163A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B163A8: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B163A8u)) return;
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
label_80B163AC:
    ctx->pc = 0x80B163ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B163ACu)) return;
    // 80B163AC: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B163B0:
    ctx->pc = 0x80B163B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B163B0u)) return;
    // 80B163B0: addi    r5, r5, -12184
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12184);

label_80B163B4:
    ctx->pc = 0x80B163B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B163B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B163B4: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B163B4u)) return;
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
label_80B163B8:
    ctx->pc = 0x80B163B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B163B8u)) return;
    // 80B163B8: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B163BC:
    ctx->pc = 0x80B163BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B163BCu)) return;
    // 80B163BC: addi    r5, r5, -12180
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12180);

label_80B163C0:
    ctx->pc = 0x80B163C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B163C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B163C0: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B163C0u)) return;
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
label_80B163C4:
    ctx->pc = 0x80B163C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B163C4u)) return;
    // 80B163C4: bl      0x8045C750
    {
            ctx->lr = 0x80B163C8u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B163C8:
    ctx->pc = 0x80B163C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B163C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B163C8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B163CC:
    ctx->pc = 0x80B163CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B163CCu)) return;
    // 80B163CC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B163D0:
    ctx->pc = 0x80B163D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B163D0u)) return;
    // 80B163D0: li      r5, 1280
    ctx->gpr[5] = (u32)(s32)(1280);

label_80B163D4:
    ctx->pc = 0x80B163D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B163D4u)) return;
    // 80B163D4: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80B163D8:
    ctx->pc = 0x80B163D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B163D8u)) return;
    // 80B163D8: addi    r6, r6, -20992
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-20992);

label_80B163DC:
    ctx->pc = 0x80B163DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B163DCu)) return;
    // 80B163DC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B163E0:
    ctx->pc = 0x80B163E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B163E0u)) return;
    // 80B163E0: bl      0x8045C7B4
    {
            ctx->lr = 0x80B163E4u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B163E4:
    ctx->pc = 0x80B163E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B163E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B163E4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B163E8:
    ctx->pc = 0x80B163E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B163E8u)) return;
    // 80B163E8: li      r4, 200
    ctx->gpr[4] = (u32)(s32)(200);

label_80B163EC:
    ctx->pc = 0x80B163ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B163ECu)) return;
    // 80B163EC: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B163F0:
    ctx->pc = 0x80B163F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B163F0u)) return;
    // 80B163F0: addi    r5, r5, -12176
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12176);

label_80B163F4:
    ctx->pc = 0x80B163F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B163F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B163F4: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B163F4u)) return;
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
label_80B163F8:
    ctx->pc = 0x80B163F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B163F8u)) return;
    // 80B163F8: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B163FC:
    ctx->pc = 0x80B163FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B163FCu)) return;
    // 80B163FC: addi    r5, r5, -12172
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12172);

label_80B16400:
    ctx->pc = 0x80B16400u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16400u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B16400: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B16400u)) return;
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
label_80B16404:
    ctx->pc = 0x80B16404u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16404u)) return;
    // 80B16404: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B16408:
    ctx->pc = 0x80B16408u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16408u)) return;
    // 80B16408: addi    r5, r5, -12168
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12168);

label_80B1640C:
    ctx->pc = 0x80B1640Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1640Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B1640C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B1640Cu)) return;
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
label_80B16410:
    ctx->pc = 0x80B16410u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16410u)) return;
    // 80B16410: bl      0x8045C750
    {
            ctx->lr = 0x80B16414u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B16414:
    ctx->pc = 0x80B16414u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16414u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B16414: li      r3, 160
    ctx->gpr[3] = (u32)(s32)(160);

label_80B16418:
    ctx->pc = 0x80B16418u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16418u)) return;
    // 80B16418: bl      0x8045F7C8
    {
            ctx->lr = 0x80B1641Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B1641C:
    ctx->pc = 0x80B1641Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B1641Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B1641C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B16420:
    ctx->pc = 0x80B16420u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16420u)) return;
    // 80B16420: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B16424:
    ctx->pc = 0x80B16424u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16424u)) return;
    // 80B16424: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B16428:
    ctx->pc = 0x80B16428u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16428u)) return;
    // 80B16428: addi    r5, r5, -12164
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12164);

label_80B1642C:
    ctx->pc = 0x80B1642Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1642Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B1642C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B1642Cu)) return;
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
label_80B16430:
    ctx->pc = 0x80B16430u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16430u)) return;
    // 80B16430: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B16434:
    ctx->pc = 0x80B16434u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16434u)) return;
    // 80B16434: addi    r5, r5, -12160
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12160);

label_80B16438:
    ctx->pc = 0x80B16438u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16438u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B16438: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B16438u)) return;
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
label_80B1643C:
    ctx->pc = 0x80B1643Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1643Cu)) return;
    // 80B1643C: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B16440:
    ctx->pc = 0x80B16440u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16440u)) return;
    // 80B16440: addi    r5, r5, -12156
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12156);

label_80B16444:
    ctx->pc = 0x80B16444u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16444u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B16444: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B16444u)) return;
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
label_80B16448:
    ctx->pc = 0x80B16448u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16448u)) return;
    // 80B16448: bl      0x8045C750
    {
            ctx->lr = 0x80B1644Cu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B1644C:
    ctx->pc = 0x80B1644Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B1644Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B1644C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B16450:
    ctx->pc = 0x80B16450u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16450u)) return;
    // 80B16450: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B16454:
    ctx->pc = 0x80B16454u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16454u)) return;
    // 80B16454: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80B16458:
    ctx->pc = 0x80B16458u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16458u)) return;
    // 80B16458: addi    r5, r5, -512
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-512);

label_80B1645C:
    ctx->pc = 0x80B1645Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1645Cu)) return;
    // 80B1645C: li      r6, 2560
    ctx->gpr[6] = (u32)(s32)(2560);

label_80B16460:
    ctx->pc = 0x80B16460u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16460u)) return;
    // 80B16460: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B16464:
    ctx->pc = 0x80B16464u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16464u)) return;
    // 80B16464: bl      0x8045C7B4
    {
            ctx->lr = 0x80B16468u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B16468:
    ctx->pc = 0x80B16468u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16468u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B16468: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B1646C:
    ctx->pc = 0x80B1646Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1646Cu)) return;
    // 80B1646C: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_80B16470:
    ctx->pc = 0x80B16470u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16470u)) return;
    // 80B16470: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B16474:
    ctx->pc = 0x80B16474u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16474u)) return;
    // 80B16474: addi    r5, r5, -12152
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12152);

label_80B16478:
    ctx->pc = 0x80B16478u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16478u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B16478: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B16478u)) return;
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
label_80B1647C:
    ctx->pc = 0x80B1647Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1647Cu)) return;
    // 80B1647C: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B16480:
    ctx->pc = 0x80B16480u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16480u)) return;
    // 80B16480: addi    r5, r5, -12148
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12148);

label_80B16484:
    ctx->pc = 0x80B16484u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16484u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B16484: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B16484u)) return;
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
label_80B16488:
    ctx->pc = 0x80B16488u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16488u)) return;
    // 80B16488: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B1648C:
    ctx->pc = 0x80B1648Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1648Cu)) return;
    // 80B1648C: addi    r5, r5, -12144
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12144);

label_80B16490:
    ctx->pc = 0x80B16490u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16490u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B16490: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B16490u)) return;
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
label_80B16494:
    ctx->pc = 0x80B16494u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16494u)) return;
    // 80B16494: bl      0x8045C750
    {
            ctx->lr = 0x80B16498u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B16498:
    ctx->pc = 0x80B16498u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16498u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B16498: li      r3, 80
    ctx->gpr[3] = (u32)(s32)(80);

label_80B1649C:
    ctx->pc = 0x80B1649Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1649Cu)) return;
    // 80B1649C: bl      0x8045F7C8
    {
            ctx->lr = 0x80B164A0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B164A0:
    ctx->pc = 0x80B164A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B164A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B164A0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B164A4:
    ctx->pc = 0x80B164A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B164A4u)) return;
    // 80B164A4: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_80B164A8:
    ctx->pc = 0x80B164A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B164A8u)) return;
    // 80B164A8: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B164AC:
    ctx->pc = 0x80B164ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B164ACu)) return;
    // 80B164AC: addi    r5, r5, -12140
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12140);

label_80B164B0:
    ctx->pc = 0x80B164B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B164B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B164B0: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B164B0u)) return;
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
label_80B164B4:
    ctx->pc = 0x80B164B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B164B4u)) return;
    // 80B164B4: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B164B8:
    ctx->pc = 0x80B164B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B164B8u)) return;
    // 80B164B8: addi    r5, r5, -12136
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12136);

label_80B164BC:
    ctx->pc = 0x80B164BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B164BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B164BC: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B164BCu)) return;
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
label_80B164C0:
    ctx->pc = 0x80B164C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B164C0u)) return;
    // 80B164C0: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B164C4:
    ctx->pc = 0x80B164C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B164C4u)) return;
    // 80B164C4: addi    r5, r5, -12132
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12132);

label_80B164C8:
    ctx->pc = 0x80B164C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B164C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B164C8: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B164C8u)) return;
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
label_80B164CC:
    ctx->pc = 0x80B164CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B164CCu)) return;
    // 80B164CC: bl      0x8045C750
    {
            ctx->lr = 0x80B164D0u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B164D0:
    ctx->pc = 0x80B164D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B164D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B164D0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B164D4:
    ctx->pc = 0x80B164D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B164D4u)) return;
    // 80B164D4: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_80B164D8:
    ctx->pc = 0x80B164D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B164D8u)) return;
    // 80B164D8: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80B164DC:
    ctx->pc = 0x80B164DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B164DCu)) return;
    // 80B164DC: addi    r5, r6, -512
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-512);

label_80B164E0:
    ctx->pc = 0x80B164E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B164E0u)) return;
    // 80B164E0: addi    r6, r6, -1536
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-1536);

label_80B164E4:
    ctx->pc = 0x80B164E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B164E4u)) return;
    // 80B164E4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B164E8:
    ctx->pc = 0x80B164E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B164E8u)) return;
    // 80B164E8: bl      0x8045C7B4
    {
            ctx->lr = 0x80B164ECu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B164EC:
    ctx->pc = 0x80B164ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B164ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B164EC: li      r3, 80
    ctx->gpr[3] = (u32)(s32)(80);

label_80B164F0:
    ctx->pc = 0x80B164F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B164F0u)) return;
    // 80B164F0: bl      0x8045F7C8
    {
            ctx->lr = 0x80B164F4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B164F4:
    ctx->pc = 0x80B164F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B164F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B164F4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B164F8:
    ctx->pc = 0x80B164F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B164F8u)) return;
    // 80B164F8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B164FC:
    ctx->pc = 0x80B164FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B164FCu)) return;
    // 80B164FC: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B16500:
    ctx->pc = 0x80B16500u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16500u)) return;
    // 80B16500: addi    r5, r5, -12128
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12128);

label_80B16504:
    ctx->pc = 0x80B16504u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16504u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B16504: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B16504u)) return;
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
label_80B16508:
    ctx->pc = 0x80B16508u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16508u)) return;
    // 80B16508: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B1650C:
    ctx->pc = 0x80B1650Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1650Cu)) return;
    // 80B1650C: addi    r5, r5, -12124
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12124);

label_80B16510:
    ctx->pc = 0x80B16510u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16510u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B16510: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B16510u)) return;
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
label_80B16514:
    ctx->pc = 0x80B16514u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16514u)) return;
    // 80B16514: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B16518:
    ctx->pc = 0x80B16518u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16518u)) return;
    // 80B16518: addi    r5, r5, -12120
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12120);

label_80B1651C:
    ctx->pc = 0x80B1651Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1651Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B1651C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B1651Cu)) return;
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
label_80B16520:
    ctx->pc = 0x80B16520u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16520u)) return;
    // 80B16520: bl      0x8045C750
    {
            ctx->lr = 0x80B16524u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B16524:
    ctx->pc = 0x80B16524u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16524u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80B16524: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B16528:
    ctx->pc = 0x80B16528u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16528u)) return;
    // 80B16528: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B1652C:
    ctx->pc = 0x80B1652Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1652Cu)) return;
    // 80B1652C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80B16530:
    ctx->pc = 0x80B16530u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16530u)) return;
    // 80B16530: li      r6, 3072
    ctx->gpr[6] = (u32)(s32)(3072);

label_80B16534:
    ctx->pc = 0x80B16534u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16534u)) return;
    // 80B16534: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B16538:
    ctx->pc = 0x80B16538u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16538u)) return;
    // 80B16538: bl      0x8045C7B4
    {
            ctx->lr = 0x80B1653Cu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B1653C:
    ctx->pc = 0x80B1653Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B1653Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B1653C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B16540:
    ctx->pc = 0x80B16540u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16540u)) return;
    // 80B16540: li      r4, 180
    ctx->gpr[4] = (u32)(s32)(180);

label_80B16544:
    ctx->pc = 0x80B16544u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16544u)) return;
    // 80B16544: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B16548:
    ctx->pc = 0x80B16548u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16548u)) return;
    // 80B16548: addi    r5, r5, -12116
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12116);

label_80B1654C:
    ctx->pc = 0x80B1654Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1654Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B1654C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B1654Cu)) return;
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
label_80B16550:
    ctx->pc = 0x80B16550u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16550u)) return;
    // 80B16550: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B16554:
    ctx->pc = 0x80B16554u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16554u)) return;
    // 80B16554: addi    r5, r5, -12124
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12124);

label_80B16558:
    ctx->pc = 0x80B16558u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16558u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B16558: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B16558u)) return;
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
label_80B1655C:
    ctx->pc = 0x80B1655Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1655Cu)) return;
    // 80B1655C: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B16560:
    ctx->pc = 0x80B16560u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16560u)) return;
    // 80B16560: addi    r5, r5, -12112
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12112);

label_80B16564:
    ctx->pc = 0x80B16564u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16564u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B16564: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B16564u)) return;
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
label_80B16568:
    ctx->pc = 0x80B16568u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16568u)) return;
    // 80B16568: bl      0x8045C750
    {
            ctx->lr = 0x80B1656Cu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B1656C:
    ctx->pc = 0x80B1656Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B1656Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B1656C: li      r3, 160
    ctx->gpr[3] = (u32)(s32)(160);

label_80B16570:
    ctx->pc = 0x80B16570u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16570u)) return;
    // 80B16570: bl      0x8045F7C8
    {
            ctx->lr = 0x80B16574u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B16574:
    ctx->pc = 0x80B16574u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16574u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B16574: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B16578:
    ctx->pc = 0x80B16578u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16578u)) return;
    // 80B16578: li      r4, 160
    ctx->gpr[4] = (u32)(s32)(160);

label_80B1657C:
    ctx->pc = 0x80B1657Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1657Cu)) return;
    // 80B1657C: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B16580:
    ctx->pc = 0x80B16580u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16580u)) return;
    // 80B16580: addi    r5, r5, -12108
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12108);

label_80B16584:
    ctx->pc = 0x80B16584u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16584u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B16584: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B16584u)) return;
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
label_80B16588:
    ctx->pc = 0x80B16588u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16588u)) return;
    // 80B16588: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B1658C:
    ctx->pc = 0x80B1658Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1658Cu)) return;
    // 80B1658C: addi    r5, r5, -12104
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12104);

label_80B16590:
    ctx->pc = 0x80B16590u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16590u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B16590: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B16590u)) return;
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
label_80B16594:
    ctx->pc = 0x80B16594u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16594u)) return;
    // 80B16594: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B16598:
    ctx->pc = 0x80B16598u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16598u)) return;
    // 80B16598: addi    r5, r5, -12100
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12100);

label_80B1659C:
    ctx->pc = 0x80B1659Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1659Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B1659C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B1659Cu)) return;
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
label_80B165A0:
    ctx->pc = 0x80B165A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B165A0u)) return;
    // 80B165A0: bl      0x8045C750
    {
            ctx->lr = 0x80B165A4u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B165A4:
    ctx->pc = 0x80B165A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B165A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80B165A4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B165A8:
    ctx->pc = 0x80B165A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B165A8u)) return;
    // 80B165A8: li      r4, 160
    ctx->gpr[4] = (u32)(s32)(160);

label_80B165AC:
    ctx->pc = 0x80B165ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B165ACu)) return;
    // 80B165AC: li      r5, 768
    ctx->gpr[5] = (u32)(s32)(768);

label_80B165B0:
    ctx->pc = 0x80B165B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B165B0u)) return;
    // 80B165B0: li      r6, 1280
    ctx->gpr[6] = (u32)(s32)(1280);

label_80B165B4:
    ctx->pc = 0x80B165B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B165B4u)) return;
    // 80B165B4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B165B8:
    ctx->pc = 0x80B165B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B165B8u)) return;
    // 80B165B8: bl      0x8045C7B4
    {
            ctx->lr = 0x80B165BCu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B165BC:
    ctx->pc = 0x80B165BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B165BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B165BC: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80B165C0:
    ctx->pc = 0x80B165C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B165C0u)) return;
    // 80B165C0: bl      0x8045F7C8
    {
            ctx->lr = 0x80B165C4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B165C4:
    ctx->pc = 0x80B165C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B165C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B165C4: li      r3, 589
    ctx->gpr[3] = (u32)(s32)(589);

label_80B165C8:
    ctx->pc = 0x80B165C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B165C8u)) return;
    // 80B165C8: bl      0x8045BFA0
    {
            ctx->lr = 0x80B165CCu;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80B165CC:
    ctx->pc = 0x80B165CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B165CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80B165CC: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80B165D0:
    ctx->pc = 0x80B165D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B165D0u)) return;
    // 80B165D0: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80B165D4:
    ctx->pc = 0x80B165D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B165D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B165D4: lwz     r0, 0(r3)
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
label_80B165D8:
    ctx->pc = 0x80B165D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B165D8u)) return;
    // 80B165D8: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80B165DC:
    ctx->pc = 0x80B165DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B165DCu)) return;
    // 80B165DC: lis     r3, -27591
    ctx->gpr[3] = ((u32)(s32)(-27591) << 16);

label_80B165E0:
    ctx->pc = 0x80B165E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B165E0u)) return;
    // 80B165E0: addi    r3, r3, -11368
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-11368);

label_80B165E4:
    ctx->pc = 0x80B165E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B165E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B165E4: lwzx    r3, r3, r0
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
label_80B165E8:
    ctx->pc = 0x80B165E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B165E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B165E8: lwz     r3, 0(r3)
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
label_80B165EC:
    ctx->pc = 0x80B165ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B165ECu)) return;
    // 80B165EC: bl      0x8045F6FC
    {
            ctx->lr = 0x80B165F0u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80B165F0:
    ctx->pc = 0x80B165F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B165F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B165F0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B165F4:
    ctx->pc = 0x80B165F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B165F4u)) return;
    // 80B165F4: bl      0x8045F7C8
    {
            ctx->lr = 0x80B165F8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B165F8:
    ctx->pc = 0x80B165F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B165F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B165F8: bl      0x8045BFF4
    {
            ctx->lr = 0x80B165FCu;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80B165FC:
    ctx->pc = 0x80B165FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B165FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B165FC: bl      0x8045F32C
    {
            ctx->lr = 0x80B16600u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80B16600:
    ctx->pc = 0x80B16600u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16600u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B16600: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80B16604:
    ctx->pc = 0x80B16604u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16604u)) return;
    // 80B16604: bl      0x8045F7C8
    {
            ctx->lr = 0x80B16608u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B16608:
    ctx->pc = 0x80B16608u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16608u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B16608: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B1660C:
    ctx->pc = 0x80B1660Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1660Cu)) return;
    // 80B1660C: bl      0x8045F220
    {
            ctx->lr = 0x80B16610u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B16610:
    ctx->pc = 0x80B16610u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16610u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B16610: lis     r4, -27589
    ctx->gpr[4] = ((u32)(s32)(-27589) << 16);

label_80B16614:
    ctx->pc = 0x80B16614u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16614u)) return;
    // 80B16614: addi    r4, r4, -27604
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-27604);

label_80B16618:
    ctx->pc = 0x80B16618u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16618u)) return;
    // 80B16618: lis     r5, -27864
    ctx->gpr[5] = ((u32)(s32)(-27864) << 16);

label_80B1661C:
    ctx->pc = 0x80B1661Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1661Cu)) return;
    // 80B1661C: addi    r5, r5, -24080
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24080);

label_80B16620:
    ctx->pc = 0x80B16620u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16620u)) return;
    // 80B16620: lis     r6, -27591
    ctx->gpr[6] = ((u32)(s32)(-27591) << 16);

label_80B16624:
    ctx->pc = 0x80B16624u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16624u)) return;
    // 80B16624: addi    r6, r6, -12096
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-12096);

label_80B16628:
    ctx->pc = 0x80B16628u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16628u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B16628: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B16628u)) return;
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
label_80B1662C:
    ctx->pc = 0x80B1662Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1662Cu)) return;
    // 80B1662C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B16630:
    ctx->pc = 0x80B16630u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16630u)) return;
    // 80B16630: li      r7, 4
    ctx->gpr[7] = (u32)(s32)(4);

label_80B16634:
    ctx->pc = 0x80B16634u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16634u)) return;
    // 80B16634: bl      0x8045EBE4
    {
            ctx->lr = 0x80B16638u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80B16638:
    ctx->pc = 0x80B16638u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16638u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B16638: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_80B1663C:
    ctx->pc = 0x80B1663Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1663Cu)) return;
    // 80B1663C: bl      0x8045F7C8
    {
            ctx->lr = 0x80B16640u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B16640:
    ctx->pc = 0x80B16640u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16640u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B16640: li      r3, 590
    ctx->gpr[3] = (u32)(s32)(590);

label_80B16644:
    ctx->pc = 0x80B16644u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16644u)) return;
    // 80B16644: bl      0x8045BFA0
    {
            ctx->lr = 0x80B16648u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80B16648:
    ctx->pc = 0x80B16648u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16648u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B16648: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B1664C:
    ctx->pc = 0x80B1664Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1664Cu)) return;
    // 80B1664C: bl      0x8045F220
    {
            ctx->lr = 0x80B16650u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B16650:
    ctx->pc = 0x80B16650u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16650u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B16650: lis     r4, -27591
    ctx->gpr[4] = ((u32)(s32)(-27591) << 16);

label_80B16654:
    ctx->pc = 0x80B16654u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16654u)) return;
    // 80B16654: addi    r4, r4, -11292
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-11292);

label_80B16658:
    ctx->pc = 0x80B16658u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16658u)) return;
    // 80B16658: bl      0x8045C060
    {
            ctx->lr = 0x80B1665Cu;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80B1665C:
    ctx->pc = 0x80B1665Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B1665Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80B1665C: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80B16660:
    ctx->pc = 0x80B16660u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16660u)) return;
    // 80B16660: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80B16664:
    ctx->pc = 0x80B16664u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16664u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B16664: lwz     r0, 0(r3)
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
label_80B16668:
    ctx->pc = 0x80B16668u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16668u)) return;
    // 80B16668: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80B1666C:
    ctx->pc = 0x80B1666Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1666Cu)) return;
    // 80B1666C: lis     r3, -27591
    ctx->gpr[3] = ((u32)(s32)(-27591) << 16);

label_80B16670:
    ctx->pc = 0x80B16670u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16670u)) return;
    // 80B16670: addi    r3, r3, -11368
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-11368);

label_80B16674:
    ctx->pc = 0x80B16674u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16674u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B16674: lwzx    r3, r3, r0
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
label_80B16678:
    ctx->pc = 0x80B16678u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16678u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B16678: lwz     r3, 4(r3)
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
label_80B1667C:
    ctx->pc = 0x80B1667Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1667Cu)) return;
    // 80B1667C: bl      0x8045F6FC
    {
            ctx->lr = 0x80B16680u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80B16680:
    ctx->pc = 0x80B16680u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16680u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B16680: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B16684:
    ctx->pc = 0x80B16684u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16684u)) return;
    // 80B16684: bl      0x8045F7C8
    {
            ctx->lr = 0x80B16688u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B16688:
    ctx->pc = 0x80B16688u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16688u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B16688: bl      0x8045BFF4
    {
            ctx->lr = 0x80B1668Cu;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80B1668C:
    ctx->pc = 0x80B1668Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B1668Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B1668C: bl      0x8045F32C
    {
            ctx->lr = 0x80B16690u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80B16690:
    ctx->pc = 0x80B16690u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16690u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B16690: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B16694:
    ctx->pc = 0x80B16694u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16694u)) return;
    // 80B16694: bl      0x8045F220
    {
            ctx->lr = 0x80B16698u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B16698:
    ctx->pc = 0x80B16698u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16698u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B16698: bl      0x8045C034
    {
            ctx->lr = 0x80B1669Cu;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80B1669C:
    ctx->pc = 0x80B1669Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B1669Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B1669C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B166A0:
    ctx->pc = 0x80B166A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B166A0u)) return;
    // 80B166A0: li      r4, -100
    ctx->gpr[4] = (u32)(s32)(-100);

label_80B166A4:
    ctx->pc = 0x80B166A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B166A4u)) return;
    // 80B166A4: li      r5, 80
    ctx->gpr[5] = (u32)(s32)(80);

label_80B166A8:
    ctx->pc = 0x80B166A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B166A8u)) return;
    // 80B166A8: bl      0x80B17514
    {
            ctx->lr = 0x80B166ACu;
            goto label_80B17514;
    }

label_80B166AC:
    ctx->pc = 0x80B166ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B166ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B166AC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B166B0:
    ctx->pc = 0x80B166B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B166B0u)) return;
    // 80B166B0: li      r4, -100
    ctx->gpr[4] = (u32)(s32)(-100);

label_80B166B4:
    ctx->pc = 0x80B166B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B166B4u)) return;
    // 80B166B4: li      r5, 80
    ctx->gpr[5] = (u32)(s32)(80);

label_80B166B8:
    ctx->pc = 0x80B166B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B166B8u)) return;
    // 80B166B8: bl      0x80B17514
    {
            ctx->lr = 0x80B166BCu;
            goto label_80B17514;
    }

label_80B166BC:
    ctx->pc = 0x80B166BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B166BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B166BC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B166C0:
    ctx->pc = 0x80B166C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B166C0u)) return;
    // 80B166C0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B166C4:
    ctx->pc = 0x80B166C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B166C4u)) return;
    // 80B166C4: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B166C8:
    ctx->pc = 0x80B166C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B166C8u)) return;
    // 80B166C8: addi    r5, r5, -12092
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12092);

label_80B166CC:
    ctx->pc = 0x80B166CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B166CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B166CC: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B166CCu)) return;
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
label_80B166D0:
    ctx->pc = 0x80B166D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B166D0u)) return;
    // 80B166D0: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B166D4:
    ctx->pc = 0x80B166D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B166D4u)) return;
    // 80B166D4: addi    r5, r5, -12088
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12088);

label_80B166D8:
    ctx->pc = 0x80B166D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B166D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B166D8: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B166D8u)) return;
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
label_80B166DC:
    ctx->pc = 0x80B166DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B166DCu)) return;
    // 80B166DC: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B166E0:
    ctx->pc = 0x80B166E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B166E0u)) return;
    // 80B166E0: addi    r5, r5, -12084
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12084);

label_80B166E4:
    ctx->pc = 0x80B166E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B166E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B166E4: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B166E4u)) return;
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
label_80B166E8:
    ctx->pc = 0x80B166E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B166E8u)) return;
    // 80B166E8: bl      0x8045C750
    {
            ctx->lr = 0x80B166ECu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B166EC:
    ctx->pc = 0x80B166ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B166ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B166EC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B166F0:
    ctx->pc = 0x80B166F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B166F0u)) return;
    // 80B166F0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B166F4:
    ctx->pc = 0x80B166F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B166F4u)) return;
    // 80B166F4: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80B166F8:
    ctx->pc = 0x80B166F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B166F8u)) return;
    // 80B166F8: addi    r5, r6, -1792
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-1792);

label_80B166FC:
    ctx->pc = 0x80B166FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B166FCu)) return;
    // 80B166FC: addi    r6, r6, -21760
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-21760);

label_80B16700:
    ctx->pc = 0x80B16700u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16700u)) return;
    // 80B16700: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B16704:
    ctx->pc = 0x80B16704u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16704u)) return;
    // 80B16704: bl      0x8045C7B4
    {
            ctx->lr = 0x80B16708u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B16708:
    ctx->pc = 0x80B16708u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16708u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B16708: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B1670C:
    ctx->pc = 0x80B1670Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1670Cu)) return;
    // 80B1670C: bl      0x8045F220
    {
            ctx->lr = 0x80B16710u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B16710:
    ctx->pc = 0x80B16710u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16710u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B16710: bl      0x8045EB8C
    {
            ctx->lr = 0x80B16714u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80B16714:
    ctx->pc = 0x80B16714u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16714u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B16714: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B16718:
    ctx->pc = 0x80B16718u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16718u)) return;
    // 80B16718: li      r4, 160
    ctx->gpr[4] = (u32)(s32)(160);

label_80B1671C:
    ctx->pc = 0x80B1671Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1671Cu)) return;
    // 80B1671C: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B16720:
    ctx->pc = 0x80B16720u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16720u)) return;
    // 80B16720: addi    r5, r5, -12080
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12080);

label_80B16724:
    ctx->pc = 0x80B16724u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16724u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B16724: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B16724u)) return;
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
label_80B16728:
    ctx->pc = 0x80B16728u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16728u)) return;
    // 80B16728: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B1672C:
    ctx->pc = 0x80B1672Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1672Cu)) return;
    // 80B1672C: addi    r5, r5, -12076
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12076);

label_80B16730:
    ctx->pc = 0x80B16730u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16730u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B16730: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B16730u)) return;
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
label_80B16734:
    ctx->pc = 0x80B16734u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16734u)) return;
    // 80B16734: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B16738:
    ctx->pc = 0x80B16738u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16738u)) return;
    // 80B16738: addi    r5, r5, -12072
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12072);

label_80B1673C:
    ctx->pc = 0x80B1673Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1673Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B1673C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B1673Cu)) return;
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
label_80B16740:
    ctx->pc = 0x80B16740u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16740u)) return;
    // 80B16740: bl      0x8045C750
    {
            ctx->lr = 0x80B16744u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B16744:
    ctx->pc = 0x80B16744u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16744u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B16744: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B16748:
    ctx->pc = 0x80B16748u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16748u)) return;
    // 80B16748: bl      0x8045F220
    {
            ctx->lr = 0x80B1674Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B1674C:
    ctx->pc = 0x80B1674Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B1674Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B1674C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B16750:
    ctx->pc = 0x80B16750u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16750u)) return;
    // 80B16750: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80B16754:
    ctx->pc = 0x80B16754u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16754u)) return;
    // 80B16754: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B16758:
    ctx->pc = 0x80B16758u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16758u)) return;
    // 80B16758: bl      0x8045EEA8
    {
            ctx->lr = 0x80B1675Cu;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80B1675C:
    ctx->pc = 0x80B1675Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B1675Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B1675C: li      r3, 100
    ctx->gpr[3] = (u32)(s32)(100);

label_80B16760:
    ctx->pc = 0x80B16760u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16760u)) return;
    // 80B16760: bl      0x8045F7C8
    {
            ctx->lr = 0x80B16764u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B16764:
    ctx->pc = 0x80B16764u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16764u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B16764: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B16768:
    ctx->pc = 0x80B16768u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16768u)) return;
    // 80B16768: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B1676C:
    ctx->pc = 0x80B1676Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1676Cu)) return;
    // 80B1676C: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B16770:
    ctx->pc = 0x80B16770u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16770u)) return;
    // 80B16770: addi    r5, r5, -12068
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12068);

label_80B16774:
    ctx->pc = 0x80B16774u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16774u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B16774: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B16774u)) return;
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
label_80B16778:
    ctx->pc = 0x80B16778u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16778u)) return;
    // 80B16778: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B1677C:
    ctx->pc = 0x80B1677Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1677Cu)) return;
    // 80B1677C: addi    r5, r5, -12064
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12064);

label_80B16780:
    ctx->pc = 0x80B16780u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16780u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B16780: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B16780u)) return;
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
label_80B16784:
    ctx->pc = 0x80B16784u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16784u)) return;
    // 80B16784: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B16788:
    ctx->pc = 0x80B16788u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16788u)) return;
    // 80B16788: addi    r5, r5, -12060
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12060);

label_80B1678C:
    ctx->pc = 0x80B1678Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1678Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B1678C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B1678Cu)) return;
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
label_80B16790:
    ctx->pc = 0x80B16790u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16790u)) return;
    // 80B16790: bl      0x8045C750
    {
            ctx->lr = 0x80B16794u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B16794:
    ctx->pc = 0x80B16794u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16794u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B16794: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B16798:
    ctx->pc = 0x80B16798u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16798u)) return;
    // 80B16798: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B1679C:
    ctx->pc = 0x80B1679Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1679Cu)) return;
    // 80B1679C: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80B167A0:
    ctx->pc = 0x80B167A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B167A0u)) return;
    // 80B167A0: addi    r5, r6, -1536
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-1536);

label_80B167A4:
    ctx->pc = 0x80B167A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B167A4u)) return;
    // 80B167A4: addi    r6, r6, -1792
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-1792);

label_80B167A8:
    ctx->pc = 0x80B167A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B167A8u)) return;
    // 80B167A8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B167AC:
    ctx->pc = 0x80B167ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B167ACu)) return;
    // 80B167AC: bl      0x8045C7B4
    {
            ctx->lr = 0x80B167B0u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B167B0:
    ctx->pc = 0x80B167B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B167B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B167B0: li      r3, 591
    ctx->gpr[3] = (u32)(s32)(591);

label_80B167B4:
    ctx->pc = 0x80B167B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B167B4u)) return;
    // 80B167B4: bl      0x8045BFA0
    {
            ctx->lr = 0x80B167B8u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80B167B8:
    ctx->pc = 0x80B167B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B167B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B167B8: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B167BC:
    ctx->pc = 0x80B167BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B167BCu)) return;
    // 80B167BC: bl      0x8045F220
    {
            ctx->lr = 0x80B167C0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B167C0:
    ctx->pc = 0x80B167C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B167C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B167C0: lis     r4, -27591
    ctx->gpr[4] = ((u32)(s32)(-27591) << 16);

label_80B167C4:
    ctx->pc = 0x80B167C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B167C4u)) return;
    // 80B167C4: addi    r4, r4, -11288
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-11288);

label_80B167C8:
    ctx->pc = 0x80B167C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B167C8u)) return;
    // 80B167C8: bl      0x8045C060
    {
            ctx->lr = 0x80B167CCu;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80B167CC:
    ctx->pc = 0x80B167CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B167CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80B167CC: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80B167D0:
    ctx->pc = 0x80B167D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B167D0u)) return;
    // 80B167D0: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80B167D4:
    ctx->pc = 0x80B167D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B167D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B167D4: lwz     r0, 0(r3)
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
label_80B167D8:
    ctx->pc = 0x80B167D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B167D8u)) return;
    // 80B167D8: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80B167DC:
    ctx->pc = 0x80B167DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B167DCu)) return;
    // 80B167DC: lis     r3, -27591
    ctx->gpr[3] = ((u32)(s32)(-27591) << 16);

label_80B167E0:
    ctx->pc = 0x80B167E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B167E0u)) return;
    // 80B167E0: addi    r3, r3, -11368
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-11368);

label_80B167E4:
    ctx->pc = 0x80B167E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B167E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B167E4: lwzx    r3, r3, r0
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
label_80B167E8:
    ctx->pc = 0x80B167E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B167E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B167E8: lwz     r3, 8(r3)
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
label_80B167EC:
    ctx->pc = 0x80B167ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B167ECu)) return;
    // 80B167EC: bl      0x8045F6FC
    {
            ctx->lr = 0x80B167F0u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80B167F0:
    ctx->pc = 0x80B167F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B167F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B167F0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B167F4:
    ctx->pc = 0x80B167F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B167F4u)) return;
    // 80B167F4: bl      0x8045F7C8
    {
            ctx->lr = 0x80B167F8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B167F8:
    ctx->pc = 0x80B167F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B167F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B167F8: bl      0x8045BFF4
    {
            ctx->lr = 0x80B167FCu;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80B167FC:
    ctx->pc = 0x80B167FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B167FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B167FC: bl      0x8045F32C
    {
            ctx->lr = 0x80B16800u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80B16800:
    ctx->pc = 0x80B16800u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16800u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B16800: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B16804:
    ctx->pc = 0x80B16804u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16804u)) return;
    // 80B16804: bl      0x8045F220
    {
            ctx->lr = 0x80B16808u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B16808:
    ctx->pc = 0x80B16808u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16808u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B16808: bl      0x8045C034
    {
            ctx->lr = 0x80B1680Cu;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80B1680C:
    ctx->pc = 0x80B1680Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B1680Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B1680C: li      r3, 1335
    ctx->gpr[3] = (u32)(s32)(1335);

label_80B16810:
    ctx->pc = 0x80B16810u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16810u)) return;
    // 80B16810: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B16814:
    ctx->pc = 0x80B16814u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16814u)) return;
    // 80B16814: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80B16818:
    ctx->pc = 0x80B16818u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16818u)) return;
    // 80B16818: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B1681C:
    ctx->pc = 0x80B1681Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1681Cu)) return;
    // 80B1681C: bl      0x80B17604
    {
            ctx->lr = 0x80B16820u;
            goto label_80B17604;
    }

label_80B16820:
    ctx->pc = 0x80B16820u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16820u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B16820: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80B16824:
    ctx->pc = 0x80B16824u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16824u)) return;
    // 80B16824: bl      0x8045F7C8
    {
            ctx->lr = 0x80B16828u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B16828:
    ctx->pc = 0x80B16828u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16828u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B16828: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B1682C:
    ctx->pc = 0x80B1682Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1682Cu)) return;
    // 80B1682C: bl      0x8045F220
    {
            ctx->lr = 0x80B16830u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B16830:
    ctx->pc = 0x80B16830u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16830u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B16830: lis     r4, -27589
    ctx->gpr[4] = ((u32)(s32)(-27589) << 16);

label_80B16834:
    ctx->pc = 0x80B16834u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16834u)) return;
    // 80B16834: addi    r4, r4, -288
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-288);

label_80B16838:
    ctx->pc = 0x80B16838u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16838u)) return;
    // 80B16838: lis     r5, -27864
    ctx->gpr[5] = ((u32)(s32)(-27864) << 16);

label_80B1683C:
    ctx->pc = 0x80B1683Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1683Cu)) return;
    // 80B1683C: addi    r5, r5, -24080
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24080);

label_80B16840:
    ctx->pc = 0x80B16840u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16840u)) return;
    // 80B16840: lis     r6, -27591
    ctx->gpr[6] = ((u32)(s32)(-27591) << 16);

label_80B16844:
    ctx->pc = 0x80B16844u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16844u)) return;
    // 80B16844: addi    r6, r6, -12056
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-12056);

label_80B16848:
    ctx->pc = 0x80B16848u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16848u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B16848: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B16848u)) return;
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
label_80B1684C:
    ctx->pc = 0x80B1684Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1684Cu)) return;
    // 80B1684C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B16850:
    ctx->pc = 0x80B16850u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16850u)) return;
    // 80B16850: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_80B16854:
    ctx->pc = 0x80B16854u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16854u)) return;
    // 80B16854: bl      0x8045EBE4
    {
            ctx->lr = 0x80B16858u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80B16858:
    ctx->pc = 0x80B16858u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16858u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B16858: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B1685C:
    ctx->pc = 0x80B1685Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1685Cu)) return;
    // 80B1685C: bl      0x8045F220
    {
            ctx->lr = 0x80B16860u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B16860:
    ctx->pc = 0x80B16860u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16860u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B16860: lis     r4, -27591
    ctx->gpr[4] = ((u32)(s32)(-27591) << 16);

label_80B16864:
    ctx->pc = 0x80B16864u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16864u)) return;
    // 80B16864: addi    r4, r4, -11284
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-11284);

label_80B16868:
    ctx->pc = 0x80B16868u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16868u)) return;
    // 80B16868: bl      0x8045C060
    {
            ctx->lr = 0x80B1686Cu;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80B1686C:
    ctx->pc = 0x80B1686Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B1686Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B1686C: li      r3, 592
    ctx->gpr[3] = (u32)(s32)(592);

label_80B16870:
    ctx->pc = 0x80B16870u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16870u)) return;
    // 80B16870: bl      0x8045BFA0
    {
            ctx->lr = 0x80B16874u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80B16874:
    ctx->pc = 0x80B16874u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16874u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80B16874: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80B16878:
    ctx->pc = 0x80B16878u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16878u)) return;
    // 80B16878: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80B1687C:
    ctx->pc = 0x80B1687Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1687Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B1687C: lwz     r0, 0(r3)
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
label_80B16880:
    ctx->pc = 0x80B16880u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16880u)) return;
    // 80B16880: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80B16884:
    ctx->pc = 0x80B16884u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16884u)) return;
    // 80B16884: lis     r3, -27591
    ctx->gpr[3] = ((u32)(s32)(-27591) << 16);

label_80B16888:
    ctx->pc = 0x80B16888u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16888u)) return;
    // 80B16888: addi    r3, r3, -11368
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-11368);

label_80B1688C:
    ctx->pc = 0x80B1688Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1688Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B1688C: lwzx    r3, r3, r0
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
label_80B16890:
    ctx->pc = 0x80B16890u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16890u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B16890: lwz     r3, 12(r3)
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
label_80B16894:
    ctx->pc = 0x80B16894u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16894u)) return;
    // 80B16894: bl      0x8045F6FC
    {
            ctx->lr = 0x80B16898u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80B16898:
    ctx->pc = 0x80B16898u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16898u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B16898: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B1689C:
    ctx->pc = 0x80B1689Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1689Cu)) return;
    // 80B1689C: li      r4, 30
    ctx->gpr[4] = (u32)(s32)(30);

label_80B168A0:
    ctx->pc = 0x80B168A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B168A0u)) return;
    // 80B168A0: li      r5, 1280
    ctx->gpr[5] = (u32)(s32)(1280);

label_80B168A4:
    ctx->pc = 0x80B168A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B168A4u)) return;
    // 80B168A4: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80B168A8:
    ctx->pc = 0x80B168A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B168A8u)) return;
    // 80B168A8: addi    r6, r6, -1792
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-1792);

label_80B168AC:
    ctx->pc = 0x80B168ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B168ACu)) return;
    // 80B168AC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B168B0:
    ctx->pc = 0x80B168B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B168B0u)) return;
    // 80B168B0: bl      0x8045C7B4
    {
            ctx->lr = 0x80B168B4u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B168B4:
    ctx->pc = 0x80B168B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B168B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B168B4: li      r3, 16
    ctx->gpr[3] = (u32)(s32)(16);

label_80B168B8:
    ctx->pc = 0x80B168B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B168B8u)) return;
    // 80B168B8: bl      0x8045F7C8
    {
            ctx->lr = 0x80B168BCu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B168BC:
    ctx->pc = 0x80B168BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B168BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B168BC: bl      0x8045BFF4
    {
            ctx->lr = 0x80B168C0u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80B168C0:
    ctx->pc = 0x80B168C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B168C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B168C0: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B168C4:
    ctx->pc = 0x80B168C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B168C4u)) return;
    // 80B168C4: bl      0x8045F220
    {
            ctx->lr = 0x80B168C8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B168C8:
    ctx->pc = 0x80B168C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B168C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B168C8: bl      0x8045C034
    {
            ctx->lr = 0x80B168CCu;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80B168CC:
    ctx->pc = 0x80B168CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B168CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B168CC: bl      0x8045F32C
    {
            ctx->lr = 0x80B168D0u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80B168D0:
    ctx->pc = 0x80B168D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B168D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B168D0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B168D4:
    ctx->pc = 0x80B168D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B168D4u)) return;
    // 80B168D4: bl      0x8045F220
    {
            ctx->lr = 0x80B168D8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B168D8:
    ctx->pc = 0x80B168D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B168D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B168D8: bl      0x8045EB8C
    {
            ctx->lr = 0x80B168DCu;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80B168DC:
    ctx->pc = 0x80B168DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B168DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B168DC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B168E0:
    ctx->pc = 0x80B168E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B168E0u)) return;
    // 80B168E0: bl      0x8045F7C8
    {
            ctx->lr = 0x80B168E4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B168E4:
    ctx->pc = 0x80B168E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B168E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B168E4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B168E8:
    ctx->pc = 0x80B168E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B168E8u)) return;
    // 80B168E8: bl      0x8045F220
    {
            ctx->lr = 0x80B168ECu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B168EC:
    ctx->pc = 0x80B168ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B168ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B168EC: lis     r4, -27591
    ctx->gpr[4] = ((u32)(s32)(-27591) << 16);

label_80B168F0:
    ctx->pc = 0x80B168F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B168F0u)) return;
    // 80B168F0: addi    r4, r4, -3164
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-3164);

label_80B168F4:
    ctx->pc = 0x80B168F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B168F4u)) return;
    // 80B168F4: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80B168F8:
    ctx->pc = 0x80B168F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B168F8u)) return;
    // 80B168F8: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80B168FC:
    ctx->pc = 0x80B168FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B168FCu)) return;
    // 80B168FC: lis     r6, -27591
    ctx->gpr[6] = ((u32)(s32)(-27591) << 16);

label_80B16900:
    ctx->pc = 0x80B16900u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16900u)) return;
    // 80B16900: addi    r6, r6, -12052
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-12052);

label_80B16904:
    ctx->pc = 0x80B16904u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16904u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B16904: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B16904u)) return;
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
label_80B16908:
    ctx->pc = 0x80B16908u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16908u)) return;
    // 80B16908: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80B1690C:
    ctx->pc = 0x80B1690Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1690Cu)) return;
    // 80B1690C: li      r7, 4
    ctx->gpr[7] = (u32)(s32)(4);

label_80B16910:
    ctx->pc = 0x80B16910u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16910u)) return;
    // 80B16910: bl      0x8045EBE4
    {
            ctx->lr = 0x80B16914u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80B16914:
    ctx->pc = 0x80B16914u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16914u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B16914: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B16918:
    ctx->pc = 0x80B16918u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16918u)) return;
    // 80B16918: bl      0x8045F220
    {
            ctx->lr = 0x80B1691Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B1691C:
    ctx->pc = 0x80B1691Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B1691Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B1691C: bl      0x8045EB8C
    {
            ctx->lr = 0x80B16920u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80B16920:
    ctx->pc = 0x80B16920u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16920u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B16920: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B16924:
    ctx->pc = 0x80B16924u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16924u)) return;
    // 80B16924: bl      0x8045F220
    {
            ctx->lr = 0x80B16928u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B16928:
    ctx->pc = 0x80B16928u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16928u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B16928: lis     r4, -27590
    ctx->gpr[4] = ((u32)(s32)(-27590) << 16);

label_80B1692C:
    ctx->pc = 0x80B1692Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1692Cu)) return;
    // 80B1692C: addi    r4, r4, -29532
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-29532);

label_80B16930:
    ctx->pc = 0x80B16930u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16930u)) return;
    // 80B16930: lis     r5, -27864
    ctx->gpr[5] = ((u32)(s32)(-27864) << 16);

label_80B16934:
    ctx->pc = 0x80B16934u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16934u)) return;
    // 80B16934: addi    r5, r5, -24080
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24080);

label_80B16938:
    ctx->pc = 0x80B16938u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16938u)) return;
    // 80B16938: lis     r6, -27591
    ctx->gpr[6] = ((u32)(s32)(-27591) << 16);

label_80B1693C:
    ctx->pc = 0x80B1693Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1693Cu)) return;
    // 80B1693C: addi    r6, r6, -12096
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-12096);

label_80B16940:
    ctx->pc = 0x80B16940u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16940u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B16940: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B16940u)) return;
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
label_80B16944:
    ctx->pc = 0x80B16944u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16944u)) return;
    // 80B16944: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B16948:
    ctx->pc = 0x80B16948u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16948u)) return;
    // 80B16948: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B1694C:
    ctx->pc = 0x80B1694Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1694Cu)) return;
    // 80B1694C: bl      0x8045EBE4
    {
            ctx->lr = 0x80B16950u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80B16950:
    ctx->pc = 0x80B16950u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16950u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B16950: li      r3, 20
    ctx->gpr[3] = (u32)(s32)(20);

label_80B16954:
    ctx->pc = 0x80B16954u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16954u)) return;
    // 80B16954: bl      0x8045F7C8
    {
            ctx->lr = 0x80B16958u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B16958:
    ctx->pc = 0x80B16958u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16958u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B16958: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B1695C:
    ctx->pc = 0x80B1695Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1695Cu)) return;
    // 80B1695C: bl      0x8045F220
    {
            ctx->lr = 0x80B16960u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B16960:
    ctx->pc = 0x80B16960u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16960u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B16960: bl      0x8045EB8C
    {
            ctx->lr = 0x80B16964u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80B16964:
    ctx->pc = 0x80B16964u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16964u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B16964: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B16968:
    ctx->pc = 0x80B16968u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16968u)) return;
    // 80B16968: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B1696C:
    ctx->pc = 0x80B1696Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1696Cu)) return;
    // 80B1696C: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B16970:
    ctx->pc = 0x80B16970u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16970u)) return;
    // 80B16970: addi    r5, r5, -12048
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12048);

label_80B16974:
    ctx->pc = 0x80B16974u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16974u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B16974: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B16974u)) return;
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
label_80B16978:
    ctx->pc = 0x80B16978u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16978u)) return;
    // 80B16978: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B1697C:
    ctx->pc = 0x80B1697Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1697Cu)) return;
    // 80B1697C: addi    r5, r5, -12044
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12044);

label_80B16980:
    ctx->pc = 0x80B16980u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16980u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B16980: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B16980u)) return;
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
label_80B16984:
    ctx->pc = 0x80B16984u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16984u)) return;
    // 80B16984: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B16988:
    ctx->pc = 0x80B16988u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16988u)) return;
    // 80B16988: addi    r5, r5, -12040
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12040);

label_80B1698C:
    ctx->pc = 0x80B1698Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1698Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B1698C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B1698Cu)) return;
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
label_80B16990:
    ctx->pc = 0x80B16990u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16990u)) return;
    // 80B16990: bl      0x8045C750
    {
            ctx->lr = 0x80B16994u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B16994:
    ctx->pc = 0x80B16994u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16994u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B16994: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B16998:
    ctx->pc = 0x80B16998u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16998u)) return;
    // 80B16998: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B1699C:
    ctx->pc = 0x80B1699Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1699Cu)) return;
    // 80B1699C: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80B169A0:
    ctx->pc = 0x80B169A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B169A0u)) return;
    // 80B169A0: addi    r5, r5, -2560
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-2560);

label_80B169A4:
    ctx->pc = 0x80B169A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B169A4u)) return;
    // 80B169A4: li      r6, 25600
    ctx->gpr[6] = (u32)(s32)(25600);

label_80B169A8:
    ctx->pc = 0x80B169A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B169A8u)) return;
    // 80B169A8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B169AC:
    ctx->pc = 0x80B169ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B169ACu)) return;
    // 80B169AC: bl      0x8045C7B4
    {
            ctx->lr = 0x80B169B0u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B169B0:
    ctx->pc = 0x80B169B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B169B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B169B0: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B169B4:
    ctx->pc = 0x80B169B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B169B4u)) return;
    // 80B169B4: bl      0x8045F220
    {
            ctx->lr = 0x80B169B8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B169B8:
    ctx->pc = 0x80B169B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B169B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B169B8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B169BC:
    ctx->pc = 0x80B169BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B169BCu)) return;
    // 80B169BC: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80B169C0:
    ctx->pc = 0x80B169C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B169C0u)) return;
    // 80B169C0: addi    r5, r5, -32768
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-32768);

label_80B169C4:
    ctx->pc = 0x80B169C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B169C4u)) return;
    // 80B169C4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B169C8:
    ctx->pc = 0x80B169C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B169C8u)) return;
    // 80B169C8: bl      0x8045EEA8
    {
            ctx->lr = 0x80B169CCu;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80B169CC:
    ctx->pc = 0x80B169CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B169CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B169CC: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80B169D0:
    ctx->pc = 0x80B169D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B169D0u)) return;
    // 80B169D0: bl      0x8045F7C8
    {
            ctx->lr = 0x80B169D4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B169D4:
    ctx->pc = 0x80B169D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B169D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B169D4: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B169D8:
    ctx->pc = 0x80B169D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B169D8u)) return;
    // 80B169D8: bl      0x8045F220
    {
            ctx->lr = 0x80B169DCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B169DC:
    ctx->pc = 0x80B169DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B169DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B169DC: lis     r4, -27591
    ctx->gpr[4] = ((u32)(s32)(-27591) << 16);

label_80B169E0:
    ctx->pc = 0x80B169E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B169E0u)) return;
    // 80B169E0: addi    r4, r4, -12036
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-12036);

label_80B169E4:
    ctx->pc = 0x80B169E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B169E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B169E4: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B169E4u)) return;
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
label_80B169E8:
    ctx->pc = 0x80B169E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B169E8u)) return;
    // 80B169E8: lis     r4, -27591
    ctx->gpr[4] = ((u32)(s32)(-27591) << 16);

label_80B169EC:
    ctx->pc = 0x80B169ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B169ECu)) return;
    // 80B169EC: addi    r4, r4, -12032
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-12032);

label_80B169F0:
    ctx->pc = 0x80B169F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B169F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B169F0: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B169F0u)) return;
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
label_80B169F4:
    ctx->pc = 0x80B169F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B169F4u)) return;
    // 80B169F4: lis     r4, -27591
    ctx->gpr[4] = ((u32)(s32)(-27591) << 16);

label_80B169F8:
    ctx->pc = 0x80B169F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B169F8u)) return;
    // 80B169F8: addi    r4, r4, -12028
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-12028);

label_80B169FC:
    ctx->pc = 0x80B169FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B169FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B169FC: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B169FCu)) return;
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
label_80B16A00:
    ctx->pc = 0x80B16A00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16A00u)) return;
    // 80B16A00: bl      0x8045E604
    {
            ctx->lr = 0x80B16A04u;
            ctx->pc = 0x8045E604u;
            return;
    }

label_80B16A04:
    ctx->pc = 0x80B16A04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16A04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B16A04: li      r3, 20
    ctx->gpr[3] = (u32)(s32)(20);

label_80B16A08:
    ctx->pc = 0x80B16A08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16A08u)) return;
    // 80B16A08: bl      0x8045F7C8
    {
            ctx->lr = 0x80B16A0Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B16A0C:
    ctx->pc = 0x80B16A0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16A0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B16A0C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B16A10:
    ctx->pc = 0x80B16A10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16A10u)) return;
    // 80B16A10: bl      0x8045F220
    {
            ctx->lr = 0x80B16A14u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B16A14:
    ctx->pc = 0x80B16A14u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16A14u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B16A14: lis     r4, -27591
    ctx->gpr[4] = ((u32)(s32)(-27591) << 16);

label_80B16A18:
    ctx->pc = 0x80B16A18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16A18u)) return;
    // 80B16A18: addi    r4, r4, -12024
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-12024);

label_80B16A1C:
    ctx->pc = 0x80B16A1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16A1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B16A1C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B16A1Cu)) return;
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
label_80B16A20:
    ctx->pc = 0x80B16A20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16A20u)) return;
    // 80B16A20: lis     r4, -27591
    ctx->gpr[4] = ((u32)(s32)(-27591) << 16);

label_80B16A24:
    ctx->pc = 0x80B16A24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16A24u)) return;
    // 80B16A24: addi    r4, r4, -12020
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-12020);

label_80B16A28:
    ctx->pc = 0x80B16A28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16A28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B16A28: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B16A28u)) return;
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
label_80B16A2C:
    ctx->pc = 0x80B16A2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16A2Cu)) return;
    // 80B16A2C: lis     r4, -27591
    ctx->gpr[4] = ((u32)(s32)(-27591) << 16);

label_80B16A30:
    ctx->pc = 0x80B16A30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16A30u)) return;
    // 80B16A30: addi    r4, r4, -12016
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-12016);

label_80B16A34:
    ctx->pc = 0x80B16A34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16A34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B16A34: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B16A34u)) return;
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
label_80B16A38:
    ctx->pc = 0x80B16A38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16A38u)) return;
    // 80B16A38: bl      0x8045EF2C
    {
            ctx->lr = 0x80B16A3Cu;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80B16A3C:
    ctx->pc = 0x80B16A3Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16A3Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B16A3C: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_80B16A40:
    ctx->pc = 0x80B16A40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16A40u)) return;
    // 80B16A40: bl      0x8045F7C8
    {
            ctx->lr = 0x80B16A44u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B16A44:
    ctx->pc = 0x80B16A44u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16A44u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B16A44: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B16A48:
    ctx->pc = 0x80B16A48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16A48u)) return;
    // 80B16A48: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B16A4C:
    ctx->pc = 0x80B16A4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16A4Cu)) return;
    // 80B16A4C: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B16A50:
    ctx->pc = 0x80B16A50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16A50u)) return;
    // 80B16A50: addi    r5, r5, -12012
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12012);

label_80B16A54:
    ctx->pc = 0x80B16A54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16A54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B16A54: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B16A54u)) return;
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
label_80B16A58:
    ctx->pc = 0x80B16A58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16A58u)) return;
    // 80B16A58: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B16A5C:
    ctx->pc = 0x80B16A5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16A5Cu)) return;
    // 80B16A5C: addi    r5, r5, -12008
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12008);

label_80B16A60:
    ctx->pc = 0x80B16A60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16A60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B16A60: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B16A60u)) return;
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
label_80B16A64:
    ctx->pc = 0x80B16A64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16A64u)) return;
    // 80B16A64: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B16A68:
    ctx->pc = 0x80B16A68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16A68u)) return;
    // 80B16A68: addi    r5, r5, -12004
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12004);

label_80B16A6C:
    ctx->pc = 0x80B16A6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16A6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B16A6C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B16A6Cu)) return;
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
label_80B16A70:
    ctx->pc = 0x80B16A70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16A70u)) return;
    // 80B16A70: bl      0x8045C750
    {
            ctx->lr = 0x80B16A74u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B16A74:
    ctx->pc = 0x80B16A74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16A74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B16A74: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B16A78:
    ctx->pc = 0x80B16A78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16A78u)) return;
    // 80B16A78: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B16A7C:
    ctx->pc = 0x80B16A7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16A7Cu)) return;
    // 80B16A7C: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80B16A80:
    ctx->pc = 0x80B16A80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16A80u)) return;
    // 80B16A80: addi    r5, r5, -4608
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-4608);

label_80B16A84:
    ctx->pc = 0x80B16A84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16A84u)) return;
    // 80B16A84: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B16A88:
    ctx->pc = 0x80B16A88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16A88u)) return;
    // 80B16A88: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B16A8C:
    ctx->pc = 0x80B16A8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16A8Cu)) return;
    // 80B16A8C: bl      0x8045C7B4
    {
            ctx->lr = 0x80B16A90u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B16A90:
    ctx->pc = 0x80B16A90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16A90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B16A90: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B16A94:
    ctx->pc = 0x80B16A94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16A94u)) return;
    // 80B16A94: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_80B16A98:
    ctx->pc = 0x80B16A98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16A98u)) return;
    // 80B16A98: li      r5, 18204
    ctx->gpr[5] = (u32)(s32)(18204);

label_80B16A9C:
    ctx->pc = 0x80B16A9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16A9Cu)) return;
    // 80B16A9C: bl      0x8045C0F8
    {
            ctx->lr = 0x80B16AA0u;
            ctx->pc = 0x8045C0F8u;
            return;
    }

label_80B16AA0:
    ctx->pc = 0x80B16AA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16AA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B16AA0: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B16AA4:
    ctx->pc = 0x80B16AA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16AA4u)) return;
    // 80B16AA4: bl      0x8045F220
    {
            ctx->lr = 0x80B16AA8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B16AA8:
    ctx->pc = 0x80B16AA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16AA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B16AA8: lis     r4, -27591
    ctx->gpr[4] = ((u32)(s32)(-27591) << 16);

label_80B16AAC:
    ctx->pc = 0x80B16AACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16AACu)) return;
    // 80B16AAC: addi    r4, r4, -12000
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-12000);

label_80B16AB0:
    ctx->pc = 0x80B16AB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16AB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B16AB0: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B16AB0u)) return;
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
label_80B16AB4:
    ctx->pc = 0x80B16AB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16AB4u)) return;
    // 80B16AB4: lis     r4, -27591
    ctx->gpr[4] = ((u32)(s32)(-27591) << 16);

label_80B16AB8:
    ctx->pc = 0x80B16AB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16AB8u)) return;
    // 80B16AB8: addi    r4, r4, -12032
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-12032);

label_80B16ABC:
    ctx->pc = 0x80B16ABCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16ABCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B16ABC: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B16ABCu)) return;
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
label_80B16AC0:
    ctx->pc = 0x80B16AC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16AC0u)) return;
    // 80B16AC0: lis     r4, -27591
    ctx->gpr[4] = ((u32)(s32)(-27591) << 16);

label_80B16AC4:
    ctx->pc = 0x80B16AC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16AC4u)) return;
    // 80B16AC4: addi    r4, r4, -11996
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-11996);

label_80B16AC8:
    ctx->pc = 0x80B16AC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16AC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B16AC8: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B16AC8u)) return;
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
label_80B16ACC:
    ctx->pc = 0x80B16ACCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16ACCu)) return;
    // 80B16ACC: bl      0x8045EF2C
    {
            ctx->lr = 0x80B16AD0u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80B16AD0:
    ctx->pc = 0x80B16AD0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16AD0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B16AD0: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B16AD4:
    ctx->pc = 0x80B16AD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16AD4u)) return;
    // 80B16AD4: bl      0x8045F220
    {
            ctx->lr = 0x80B16AD8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B16AD8:
    ctx->pc = 0x80B16AD8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16AD8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B16AD8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B16ADC:
    ctx->pc = 0x80B16ADCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16ADCu)) return;
    // 80B16ADC: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80B16AE0:
    ctx->pc = 0x80B16AE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16AE0u)) return;
    // 80B16AE0: addi    r5, r5, -32768
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-32768);

label_80B16AE4:
    ctx->pc = 0x80B16AE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16AE4u)) return;
    // 80B16AE4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B16AE8:
    ctx->pc = 0x80B16AE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16AE8u)) return;
    // 80B16AE8: bl      0x8045EEA8
    {
            ctx->lr = 0x80B16AECu;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80B16AEC:
    ctx->pc = 0x80B16AECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16AECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B16AEC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B16AF0:
    ctx->pc = 0x80B16AF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16AF0u)) return;
    // 80B16AF0: bl      0x8045F220
    {
            ctx->lr = 0x80B16AF4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B16AF4:
    ctx->pc = 0x80B16AF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16AF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B16AF4: bl      0x8045C360
    {
            ctx->lr = 0x80B16AF8u;
            ctx->pc = 0x8045C360u;
            return;
    }

label_80B16AF8:
    ctx->pc = 0x80B16AF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16AF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B16AF8: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B16AFC:
    ctx->pc = 0x80B16AFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16AFCu)) return;
    // 80B16AFC: bl      0x8045F220
    {
            ctx->lr = 0x80B16B00u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B16B00:
    ctx->pc = 0x80B16B00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16B00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B16B00: bl      0x8045E4DC
    {
            ctx->lr = 0x80B16B04u;
            ctx->pc = 0x8045E4DCu;
            return;
    }

label_80B16B04:
    ctx->pc = 0x80B16B04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16B04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B16B04: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B16B08:
    ctx->pc = 0x80B16B08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16B08u)) return;
    // 80B16B08: bl      0x8045F220
    {
            ctx->lr = 0x80B16B0Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B16B0C:
    ctx->pc = 0x80B16B0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16B0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B16B0C: bl      0x8045EB8C
    {
            ctx->lr = 0x80B16B10u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80B16B10:
    ctx->pc = 0x80B16B10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16B10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B16B10: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80B16B14:
    ctx->pc = 0x80B16B14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16B14u)) return;
    // 80B16B14: bl      0x8045F7C8
    {
            ctx->lr = 0x80B16B18u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B16B18:
    ctx->pc = 0x80B16B18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16B18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B16B18: bl      0x8045C3AC
    {
            ctx->lr = 0x80B16B1Cu;
            ctx->pc = 0x8045C3ACu;
            return;
    }

label_80B16B1C:
    ctx->pc = 0x80B16B1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16B1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B16B1C: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80B16B20:
    ctx->pc = 0x80B16B20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16B20u)) return;
    // 80B16B20: bl      0x8045F7C8
    {
            ctx->lr = 0x80B16B24u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B16B24:
    ctx->pc = 0x80B16B24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16B24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B16B24: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B16B28:
    ctx->pc = 0x80B16B28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16B28u)) return;
    // 80B16B28: bl      0x8045F220
    {
            ctx->lr = 0x80B16B2Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B16B2C:
    ctx->pc = 0x80B16B2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16B2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B16B2C: lis     r4, -27591
    ctx->gpr[4] = ((u32)(s32)(-27591) << 16);

label_80B16B30:
    ctx->pc = 0x80B16B30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16B30u)) return;
    // 80B16B30: addi    r4, r4, -12212
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-12212);

label_80B16B34:
    ctx->pc = 0x80B16B34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16B34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B16B34: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B16B34u)) return;
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
label_80B16B38:
    ctx->pc = 0x80B16B38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16B38u)) return;
    // 80B16B38: lis     r4, -27591
    ctx->gpr[4] = ((u32)(s32)(-27591) << 16);

label_80B16B3C:
    ctx->pc = 0x80B16B3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16B3Cu)) return;
    // 80B16B3C: addi    r4, r4, -12208
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-12208);

label_80B16B40:
    ctx->pc = 0x80B16B40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16B40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B16B40: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B16B40u)) return;
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
label_80B16B44:
    ctx->pc = 0x80B16B44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16B44u)) return;
    // 80B16B44: lis     r4, -27591
    ctx->gpr[4] = ((u32)(s32)(-27591) << 16);

label_80B16B48:
    ctx->pc = 0x80B16B48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16B48u)) return;
    // 80B16B48: addi    r4, r4, -12204
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-12204);

label_80B16B4C:
    ctx->pc = 0x80B16B4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16B4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B16B4C: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B16B4Cu)) return;
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
label_80B16B50:
    ctx->pc = 0x80B16B50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16B50u)) return;
    // 80B16B50: bl      0x8045EF2C
    {
            ctx->lr = 0x80B16B54u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80B16B54:
    ctx->pc = 0x80B16B54u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16B54u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B16B54: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B16B58:
    ctx->pc = 0x80B16B58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16B58u)) return;
    // 80B16B58: bl      0x8045F220
    {
            ctx->lr = 0x80B16B5Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B16B5C:
    ctx->pc = 0x80B16B5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16B5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B16B5C: li      r4, 1280
    ctx->gpr[4] = (u32)(s32)(1280);

label_80B16B60:
    ctx->pc = 0x80B16B60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16B60u)) return;
    // 80B16B60: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80B16B64:
    ctx->pc = 0x80B16B64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16B64u)) return;
    // 80B16B64: addi    r5, r6, -25984
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-25984);

label_80B16B68:
    ctx->pc = 0x80B16B68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16B68u)) return;
    // 80B16B68: addi    r6, r6, -112
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-112);

label_80B16B6C:
    ctx->pc = 0x80B16B6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16B6Cu)) return;
    // 80B16B6C: bl      0x8045EEA8
    {
            ctx->lr = 0x80B16B70u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80B16B70:
    ctx->pc = 0x80B16B70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16B70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B16B70: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B16B74:
    ctx->pc = 0x80B16B74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16B74u)) return;
    // 80B16B74: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B16B78:
    ctx->pc = 0x80B16B78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16B78u)) return;
    // 80B16B78: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B16B7C:
    ctx->pc = 0x80B16B7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16B7Cu)) return;
    // 80B16B7C: addi    r5, r5, -11992
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-11992);

label_80B16B80:
    ctx->pc = 0x80B16B80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16B80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B16B80: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B16B80u)) return;
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
label_80B16B84:
    ctx->pc = 0x80B16B84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16B84u)) return;
    // 80B16B84: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B16B88:
    ctx->pc = 0x80B16B88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16B88u)) return;
    // 80B16B88: addi    r5, r5, -11988
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-11988);

label_80B16B8C:
    ctx->pc = 0x80B16B8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16B8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B16B8C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B16B8Cu)) return;
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
label_80B16B90:
    ctx->pc = 0x80B16B90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16B90u)) return;
    // 80B16B90: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B16B94:
    ctx->pc = 0x80B16B94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16B94u)) return;
    // 80B16B94: addi    r5, r5, -11984
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-11984);

label_80B16B98:
    ctx->pc = 0x80B16B98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16B98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B16B98: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B16B98u)) return;
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
label_80B16B9C:
    ctx->pc = 0x80B16B9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16B9Cu)) return;
    // 80B16B9C: bl      0x8045C750
    {
            ctx->lr = 0x80B16BA0u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B16BA0:
    ctx->pc = 0x80B16BA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16BA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B16BA0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B16BA4:
    ctx->pc = 0x80B16BA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16BA4u)) return;
    // 80B16BA4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B16BA8:
    ctx->pc = 0x80B16BA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16BA8u)) return;
    // 80B16BA8: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80B16BAC:
    ctx->pc = 0x80B16BACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16BACu)) return;
    // 80B16BAC: addi    r5, r6, -2560
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-2560);

label_80B16BB0:
    ctx->pc = 0x80B16BB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16BB0u)) return;
    // 80B16BB0: addi    r6, r6, -24064
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-24064);

label_80B16BB4:
    ctx->pc = 0x80B16BB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16BB4u)) return;
    // 80B16BB4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B16BB8:
    ctx->pc = 0x80B16BB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16BB8u)) return;
    // 80B16BB8: bl      0x8045C7B4
    {
            ctx->lr = 0x80B16BBCu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B16BBC:
    ctx->pc = 0x80B16BBCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16BBCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B16BBC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B16BC0:
    ctx->pc = 0x80B16BC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16BC0u)) return;
    // 80B16BC0: li      r4, 120
    ctx->gpr[4] = (u32)(s32)(120);

label_80B16BC4:
    ctx->pc = 0x80B16BC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16BC4u)) return;
    // 80B16BC4: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B16BC8:
    ctx->pc = 0x80B16BC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16BC8u)) return;
    // 80B16BC8: addi    r5, r5, -11980
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-11980);

label_80B16BCC:
    ctx->pc = 0x80B16BCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16BCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B16BCC: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B16BCCu)) return;
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
label_80B16BD0:
    ctx->pc = 0x80B16BD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16BD0u)) return;
    // 80B16BD0: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B16BD4:
    ctx->pc = 0x80B16BD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16BD4u)) return;
    // 80B16BD4: addi    r5, r5, -11976
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-11976);

label_80B16BD8:
    ctx->pc = 0x80B16BD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16BD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B16BD8: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B16BD8u)) return;
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
label_80B16BDC:
    ctx->pc = 0x80B16BDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16BDCu)) return;
    // 80B16BDC: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B16BE0:
    ctx->pc = 0x80B16BE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16BE0u)) return;
    // 80B16BE0: addi    r5, r5, -11972
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-11972);

label_80B16BE4:
    ctx->pc = 0x80B16BE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16BE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B16BE4: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B16BE4u)) return;
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
label_80B16BE8:
    ctx->pc = 0x80B16BE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16BE8u)) return;
    // 80B16BE8: bl      0x8045C750
    {
            ctx->lr = 0x80B16BECu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B16BEC:
    ctx->pc = 0x80B16BECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16BECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B16BEC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B16BF0:
    ctx->pc = 0x80B16BF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16BF0u)) return;
    // 80B16BF0: li      r4, 110
    ctx->gpr[4] = (u32)(s32)(110);

label_80B16BF4:
    ctx->pc = 0x80B16BF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16BF4u)) return;
    // 80B16BF4: li      r5, 12743
    ctx->gpr[5] = (u32)(s32)(12743);

label_80B16BF8:
    ctx->pc = 0x80B16BF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16BF8u)) return;
    // 80B16BF8: bl      0x8045C0F8
    {
            ctx->lr = 0x80B16BFCu;
            ctx->pc = 0x8045C0F8u;
            return;
    }

label_80B16BFC:
    ctx->pc = 0x80B16BFCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16BFCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B16BFC: li      r3, 50
    ctx->gpr[3] = (u32)(s32)(50);

label_80B16C00:
    ctx->pc = 0x80B16C00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16C00u)) return;
    // 80B16C00: bl      0x8045F7C8
    {
            ctx->lr = 0x80B16C04u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B16C04:
    ctx->pc = 0x80B16C04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16C04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B16C04: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B16C08:
    ctx->pc = 0x80B16C08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16C08u)) return;
    // 80B16C08: bl      0x80B174A8
    {
            ctx->lr = 0x80B16C0Cu;
            goto label_80B174A8;
    }

label_80B16C0C:
    ctx->pc = 0x80B16C0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16C0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B16C0C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B16C10:
    ctx->pc = 0x80B16C10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16C10u)) return;
    // 80B16C10: bl      0x80B174A8
    {
            ctx->lr = 0x80B16C14u;
            goto label_80B174A8;
    }

label_80B16C14:
    ctx->pc = 0x80B16C14u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16C14u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B16C14: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B16C18:
    ctx->pc = 0x80B16C18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16C18u)) return;
    // 80B16C18: li      r4, 760
    ctx->gpr[4] = (u32)(s32)(760);

label_80B16C1C:
    ctx->pc = 0x80B16C1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16C1Cu)) return;
    // 80B16C1C: li      r5, 88
    ctx->gpr[5] = (u32)(s32)(88);

label_80B16C20:
    ctx->pc = 0x80B16C20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16C20u)) return;
    // 80B16C20: bl      0x80B17438
    {
            ctx->lr = 0x80B16C24u;
            goto label_80B17438;
    }

label_80B16C24:
    ctx->pc = 0x80B16C24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16C24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B16C24: lis     r3, -27591
    ctx->gpr[3] = ((u32)(s32)(-27591) << 16);

label_80B16C28:
    ctx->pc = 0x80B16C28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16C28u)) return;
    // 80B16C28: addi    r3, r3, -11968
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-11968);

label_80B16C2C:
    ctx->pc = 0x80B16C2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16C2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B16C2C: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B16C2Cu)) return;
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
label_80B16C30:
    ctx->pc = 0x80B16C30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16C30u)) return;
    // 80B16C30: lis     r3, -27591
    ctx->gpr[3] = ((u32)(s32)(-27591) << 16);

label_80B16C34:
    ctx->pc = 0x80B16C34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16C34u)) return;
    // 80B16C34: addi    r3, r3, -12036
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-12036);

label_80B16C38:
    ctx->pc = 0x80B16C38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16C38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B16C38: lfs     f2, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B16C38u)) return;
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
label_80B16C3C:
    ctx->pc = 0x80B16C3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16C3Cu)) return;
    // 80B16C3C: lis     r3, -27591
    ctx->gpr[3] = ((u32)(s32)(-27591) << 16);

label_80B16C40:
    ctx->pc = 0x80B16C40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16C40u)) return;
    // 80B16C40: addi    r3, r3, -12300
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-12300);

label_80B16C44:
    ctx->pc = 0x80B16C44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16C44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B16C44: lfs     f3, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B16C44u)) return;
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
label_80B16C48:
    ctx->pc = 0x80B16C48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16C48u)) return;
    // 80B16C48: fmr    f4, f3
    if (!ppc_fp_available_inline(ctx, 0x80B16C48u)) return;
    ctx->fpr[4] = ctx->fpr[3];

label_80B16C4C:
    ctx->pc = 0x80B16C4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16C4Cu)) return;
    // 80B16C4C: fmr    f5, f3
    if (!ppc_fp_available_inline(ctx, 0x80B16C4Cu)) return;
    ctx->fpr[5] = ctx->fpr[3];

label_80B16C50:
    ctx->pc = 0x80B16C50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16C50u)) return;
    // 80B16C50: bl      0x80B16F48
    {
            ctx->lr = 0x80B16C54u;
            goto label_80B16F48;
    }

label_80B16C54:
    ctx->pc = 0x80B16C54u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16C54u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B16C54: lis     r4, -27589
    ctx->gpr[4] = ((u32)(s32)(-27589) << 16);

label_80B16C58:
    ctx->pc = 0x80B16C58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16C58u)) return;
    // 80B16C58: addi    r4, r4, 24072
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(24072);

label_80B16C5C:
    ctx->pc = 0x80B16C5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16C5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B16C5C: stw     r3, 0(r4)
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
label_80B16C60:
    ctx->pc = 0x80B16C60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16C60u)) return;
    // 80B16C60: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B16C64:
    ctx->pc = 0x80B16C64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16C64u)) return;
    // 80B16C64: bl      0x8045ED54
    {
            ctx->lr = 0x80B16C68u;
            ctx->pc = 0x8045ED54u;
            return;
    }

label_80B16C68:
    ctx->pc = 0x80B16C68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16C68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B16C68: li      r3, 90
    ctx->gpr[3] = (u32)(s32)(90);

label_80B16C6C:
    ctx->pc = 0x80B16C6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16C6Cu)) return;
    // 80B16C6C: bl      0x8045F7C8
    {
            ctx->lr = 0x80B16C70u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B16C70:
    ctx->pc = 0x80B16C70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16C70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B16C70: b       0x80B16D34
    {
            goto label_80B16D34;
    }

label_80B16C74:
    ctx->pc = 0x80B16C74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16C74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B16C74: bl      0x805097D8
    {
            ctx->lr = 0x80B16C78u;
            ctx->pc = 0x805097D8u;
            return;
    }

label_80B16C78:
    ctx->pc = 0x80B16C78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16C78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B16C78: bl      0x8045DE34
    {
            ctx->lr = 0x80B16C7Cu;
            ctx->pc = 0x8045DE34u;
            return;
    }

label_80B16C7C:
    ctx->pc = 0x80B16C7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16C7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B16C7C: bl      0x80460A80
    {
            ctx->lr = 0x80B16C80u;
            ctx->pc = 0x80460A80u;
            return;
    }

label_80B16C80:
    ctx->pc = 0x80B16C80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16C80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B16C80: bl      0x80B1738C
    {
            ctx->lr = 0x80B16C84u;
            goto label_80B1738C;
    }

label_80B16C84:
    ctx->pc = 0x80B16C84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16C84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B16C84: lis     r3, -27589
    ctx->gpr[3] = ((u32)(s32)(-27589) << 16);

label_80B16C88:
    ctx->pc = 0x80B16C88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16C88u)) return;
    // 80B16C88: addi    r3, r3, 24032
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24032);

label_80B16C8C:
    ctx->pc = 0x80B16C8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16C8Cu)) return;
    // 80B16C8C: bl      0x8045F070
    {
            ctx->lr = 0x80B16C90u;
            ctx->pc = 0x8045F070u;
            return;
    }

label_80B16C90:
    ctx->pc = 0x80B16C90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16C90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B16C90: lis     r3, -27589
    ctx->gpr[3] = ((u32)(s32)(-27589) << 16);

label_80B16C94:
    ctx->pc = 0x80B16C94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16C94u)) return;
    // 80B16C94: addi    r3, r3, 24036
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24036);

label_80B16C98:
    ctx->pc = 0x80B16C98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16C98u)) return;
    // 80B16C98: bl      0x8045F070
    {
            ctx->lr = 0x80B16C9Cu;
            ctx->pc = 0x8045F070u;
            return;
    }

label_80B16C9C:
    ctx->pc = 0x80B16C9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16C9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B16C9C: lis     r3, -27589
    ctx->gpr[3] = ((u32)(s32)(-27589) << 16);

label_80B16CA0:
    ctx->pc = 0x80B16CA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16CA0u)) return;
    // 80B16CA0: addi    r3, r3, 24040
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24040);

label_80B16CA4:
    ctx->pc = 0x80B16CA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16CA4u)) return;
    // 80B16CA4: bl      0x8045F070
    {
            ctx->lr = 0x80B16CA8u;
            ctx->pc = 0x8045F070u;
            return;
    }

label_80B16CA8:
    ctx->pc = 0x80B16CA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16CA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B16CA8: lis     r3, -27589
    ctx->gpr[3] = ((u32)(s32)(-27589) << 16);

label_80B16CAC:
    ctx->pc = 0x80B16CACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16CACu)) return;
    // 80B16CAC: addi    r3, r3, 24044
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24044);

label_80B16CB0:
    ctx->pc = 0x80B16CB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16CB0u)) return;
    // 80B16CB0: bl      0x8045F070
    {
            ctx->lr = 0x80B16CB4u;
            ctx->pc = 0x8045F070u;
            return;
    }

label_80B16CB4:
    ctx->pc = 0x80B16CB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16CB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B16CB4: lis     r3, -27589
    ctx->gpr[3] = ((u32)(s32)(-27589) << 16);

label_80B16CB8:
    ctx->pc = 0x80B16CB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16CB8u)) return;
    // 80B16CB8: addi    r3, r3, 24048
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24048);

label_80B16CBC:
    ctx->pc = 0x80B16CBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16CBCu)) return;
    // 80B16CBC: bl      0x8045F070
    {
            ctx->lr = 0x80B16CC0u;
            ctx->pc = 0x8045F070u;
            return;
    }

label_80B16CC0:
    ctx->pc = 0x80B16CC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16CC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B16CC0: lis     r3, -27589
    ctx->gpr[3] = ((u32)(s32)(-27589) << 16);

label_80B16CC4:
    ctx->pc = 0x80B16CC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16CC4u)) return;
    // 80B16CC4: addi    r3, r3, 24052
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24052);

label_80B16CC8:
    ctx->pc = 0x80B16CC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16CC8u)) return;
    // 80B16CC8: bl      0x8045F070
    {
            ctx->lr = 0x80B16CCCu;
            ctx->pc = 0x8045F070u;
            return;
    }

label_80B16CCC:
    ctx->pc = 0x80B16CCCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16CCCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B16CCC: lis     r3, -27589
    ctx->gpr[3] = ((u32)(s32)(-27589) << 16);

label_80B16CD0:
    ctx->pc = 0x80B16CD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16CD0u)) return;
    // 80B16CD0: addi    r3, r3, 24056
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24056);

label_80B16CD4:
    ctx->pc = 0x80B16CD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16CD4u)) return;
    // 80B16CD4: bl      0x8045F070
    {
            ctx->lr = 0x80B16CD8u;
            ctx->pc = 0x8045F070u;
            return;
    }

label_80B16CD8:
    ctx->pc = 0x80B16CD8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16CD8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B16CD8: lis     r3, -27589
    ctx->gpr[3] = ((u32)(s32)(-27589) << 16);

label_80B16CDC:
    ctx->pc = 0x80B16CDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16CDCu)) return;
    // 80B16CDC: addi    r3, r3, 24060
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24060);

label_80B16CE0:
    ctx->pc = 0x80B16CE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16CE0u)) return;
    // 80B16CE0: bl      0x8045F070
    {
            ctx->lr = 0x80B16CE4u;
            ctx->pc = 0x8045F070u;
            return;
    }

label_80B16CE4:
    ctx->pc = 0x80B16CE4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16CE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B16CE4: lis     r3, -27589
    ctx->gpr[3] = ((u32)(s32)(-27589) << 16);

label_80B16CE8:
    ctx->pc = 0x80B16CE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16CE8u)) return;
    // 80B16CE8: addi    r3, r3, 24064
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24064);

label_80B16CEC:
    ctx->pc = 0x80B16CECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16CECu)) return;
    // 80B16CEC: bl      0x8045F070
    {
            ctx->lr = 0x80B16CF0u;
            ctx->pc = 0x8045F070u;
            return;
    }

label_80B16CF0:
    ctx->pc = 0x80B16CF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16CF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B16CF0: lis     r3, -27589
    ctx->gpr[3] = ((u32)(s32)(-27589) << 16);

label_80B16CF4:
    ctx->pc = 0x80B16CF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16CF4u)) return;
    // 80B16CF4: addi    r3, r3, 24068
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24068);

label_80B16CF8:
    ctx->pc = 0x80B16CF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16CF8u)) return;
    // 80B16CF8: bl      0x8045F070
    {
            ctx->lr = 0x80B16CFCu;
            ctx->pc = 0x8045F070u;
            return;
    }

label_80B16CFC:
    ctx->pc = 0x80B16CFCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16CFCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B16CFC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B16D00:
    ctx->pc = 0x80B16D00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16D00u)) return;
    // 80B16D00: bl      0x8045EC10
    {
            ctx->lr = 0x80B16D04u;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80B16D04:
    ctx->pc = 0x80B16D04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16D04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B16D04: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B16D08:
    ctx->pc = 0x80B16D08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16D08u)) return;
    // 80B16D08: bl      0x8045ED54
    {
            ctx->lr = 0x80B16D0Cu;
            ctx->pc = 0x8045ED54u;
            return;
    }

label_80B16D0C:
    ctx->pc = 0x80B16D0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16D0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B16D0C: lis     r3, -27589
    ctx->gpr[3] = ((u32)(s32)(-27589) << 16);

label_80B16D10:
    ctx->pc = 0x80B16D10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16D10u)) return;
    // 80B16D10: addi    r3, r3, 24072
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24072);

label_80B16D14:
    ctx->pc = 0x80B16D14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16D14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B16D14: lwz     r3, 0(r3)
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
label_80B16D18:
    ctx->pc = 0x80B16D18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16D18u)) return;
    // 80B16D18: cmplwi  r3, 0x0000
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

label_80B16D1C:
    ctx->pc = 0x80B16D1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16D1Cu)) return;
    // 80B16D1C: bc    12, 2, 0x80B16D34
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B16D34;
        }
    }

label_80B16D20:
    ctx->pc = 0x80B16D20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16D20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B16D20: bl      0x8050F9E0
    {
            ctx->lr = 0x80B16D24u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80B16D24:
    ctx->pc = 0x80B16D24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16D24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B16D24: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80B16D28:
    ctx->pc = 0x80B16D28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16D28u)) return;
    // 80B16D28: lis     r3, -27589
    ctx->gpr[3] = ((u32)(s32)(-27589) << 16);

label_80B16D2C:
    ctx->pc = 0x80B16D2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16D2Cu)) return;
    // 80B16D2C: addi    r3, r3, 24072
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24072);

label_80B16D30:
    ctx->pc = 0x80B16D30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16D30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B16D30: stw     r0, 0(r3)
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
label_80B16D34:
    ctx->pc = 0x80B16D34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16D34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B16D34: lwz     r0, 20(r1)
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
label_80B16D38:
    ctx->pc = 0x80B16D38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B16D38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B16D38: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B16D3C:
    ctx->pc = 0x80B16D3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16D3Cu)) return;
    // 80B16D3C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B16D40:
    ctx->pc = 0x80B16D40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16D40u)) return;
    // 80B16D40: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B15D00;
        }
    }

label_80B16D44:
    ctx->pc = 0x80B16D44u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16D44u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B16D44: stwu     r1, -64(r1)
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
label_80B16D48:
    ctx->pc = 0x80B16D48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16D48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B16D48: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B16D4C:
    ctx->pc = 0x80B16D4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16D4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B16D4C: stw     r0, 68(r1)
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
label_80B16D50:
    ctx->pc = 0x80B16D50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16D50u)) return;
    // 80B16D50: addi    r11, r1, 64
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(64);

label_80B16D54:
    ctx->pc = 0x80B16D54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16D54u)) return;
    // 80B16D54: bl      0x80006DD4
    {
            ctx->lr = 0x80B16D58u;
            ctx->pc = 0x80006DD4u;
            return;
    }

label_80B16D58:
    ctx->pc = 0x80B16D58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 29u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16D58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 29u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80B16D58: lwz     r27, 32(r3)
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
label_80B16D5C:
    ctx->pc = 0x80B16D5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16D5Cu)) return;
    // 80B16D5C: lis     r3, -27591
    ctx->gpr[3] = ((u32)(s32)(-27591) << 16);

label_80B16D60:
    ctx->pc = 0x80B16D60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16D60u)) return;
    // 80B16D60: addi    r3, r3, -11960
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-11960);

label_80B16D64:
    ctx->pc = 0x80B16D64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16D64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80B16D64: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B16D64u)) return;
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
label_80B16D68:
    ctx->pc = 0x80B16D68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16D68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80B16D68: lfs     f0, 44(r27)
    if (!ppc_fp_available_inline(ctx, 0x80B16D68u)) return;
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
label_80B16D6C:
    ctx->pc = 0x80B16D6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16D6Cu)) return;
    // 80B16D6C: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80B16D6Cu)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80B16D70:
    ctx->pc = 0x80B16D70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16D70u)) return;
    // 80B16D70: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80B16D70u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80B16D74:
    ctx->pc = 0x80B16D74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16D74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80B16D74: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B16D74u)) return;
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
label_80B16D78:
    ctx->pc = 0x80B16D78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16D78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80B16D78: lwz     r31, 12(r1)
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
label_80B16D7C:
    ctx->pc = 0x80B16D7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16D7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80B16D7C: lfs     f0, 32(r27)
    if (!ppc_fp_available_inline(ctx, 0x80B16D7Cu)) return;
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
label_80B16D80:
    ctx->pc = 0x80B16D80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16D80u)) return;
    // 80B16D80: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80B16D80u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80B16D84:
    ctx->pc = 0x80B16D84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16D84u)) return;
    // 80B16D84: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80B16D84u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80B16D88:
    ctx->pc = 0x80B16D88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16D88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80B16D88: stfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B16D88u)) return;
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
label_80B16D8C:
    ctx->pc = 0x80B16D8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16D8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80B16D8C: lwz     r30, 20(r1)
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
label_80B16D90:
    ctx->pc = 0x80B16D90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16D90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80B16D90: lfs     f0, 36(r27)
    if (!ppc_fp_available_inline(ctx, 0x80B16D90u)) return;
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
label_80B16D94:
    ctx->pc = 0x80B16D94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16D94u)) return;
    // 80B16D94: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80B16D94u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80B16D98:
    ctx->pc = 0x80B16D98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16D98u)) return;
    // 80B16D98: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80B16D98u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80B16D9C:
    ctx->pc = 0x80B16D9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16D9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B16D9C: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B16D9Cu)) return;
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
label_80B16DA0:
    ctx->pc = 0x80B16DA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16DA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B16DA0: lwz     r29, 28(r1)
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
label_80B16DA4:
    ctx->pc = 0x80B16DA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16DA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B16DA4: lfs     f0, 40(r27)
    if (!ppc_fp_available_inline(ctx, 0x80B16DA4u)) return;
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
label_80B16DA8:
    ctx->pc = 0x80B16DA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16DA8u)) return;
    // 80B16DA8: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80B16DA8u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80B16DAC:
    ctx->pc = 0x80B16DACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16DACu)) return;
    // 80B16DAC: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80B16DACu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80B16DB0:
    ctx->pc = 0x80B16DB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16DB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B16DB0: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B16DB0u)) return;
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
label_80B16DB4:
    ctx->pc = 0x80B16DB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16DB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B16DB4: lwz     r28, 36(r1)
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
label_80B16DB8:
    ctx->pc = 0x80B16DB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16DB8u)) return;
    // 80B16DB8: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80B16DBC:
    ctx->pc = 0x80B16DBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16DBCu)) return;
    // 80B16DBC: addi    r3, r3, 4120
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4120);

label_80B16DC0:
    ctx->pc = 0x80B16DC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16DC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B16DC0: lwz     r0, 0(r3)
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
label_80B16DC4:
    ctx->pc = 0x80B16DC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16DC4u)) return;
    // 80B16DC4: cmpwi   r0, 0
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

label_80B16DC8:
    ctx->pc = 0x80B16DC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16DC8u)) return;
    // 80B16DC8: bc    4, 2, 0x80B16E80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B16E80;
        }
    }

label_80B16DCC:
    ctx->pc = 0x80B16DCCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16DCCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B16DCC: rlwinm r0, r31, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_80B16DD0:
    ctx->pc = 0x80B16DD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16DD0u)) return;
    // 80B16DD0: cmplwi  r0, 0x0000
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

label_80B16DD4:
    ctx->pc = 0x80B16DD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16DD4u)) return;
    // 80B16DD4: bc    12, 2, 0x80B16E80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B16E80;
        }
    }

label_80B16DD8:
    ctx->pc = 0x80B16DD8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16DD8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B16DD8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B16DDC:
    ctx->pc = 0x80B16DDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16DDCu)) return;
    // 80B16DDC: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_80B16DE0:
    ctx->pc = 0x80B16DE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16DE0u)) return;
    // 80B16DE0: bl      0x8060F4F8
    {
            ctx->lr = 0x80B16DE4u;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80B16DE4:
    ctx->pc = 0x80B16DE4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16DE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B16DE4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B16DE8:
    ctx->pc = 0x80B16DE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16DE8u)) return;
    // 80B16DE8: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80B16DEC:
    ctx->pc = 0x80B16DECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16DECu)) return;
    // 80B16DEC: bl      0x8060F4F8
    {
            ctx->lr = 0x80B16DF0u;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80B16DF0:
    ctx->pc = 0x80B16DF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16DF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B16DF0: lfs     f5, 52(r27)
    if (!ppc_fp_available_inline(ctx, 0x80B16DF0u)) return;
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
label_80B16DF4:
    ctx->pc = 0x80B16DF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16DF4u)) return;
    // 80B16DF4: lis     r3, -27591
    ctx->gpr[3] = ((u32)(s32)(-27591) << 16);

label_80B16DF8:
    ctx->pc = 0x80B16DF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16DF8u)) return;
    // 80B16DF8: addi    r3, r3, -11952
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-11952);

label_80B16DFC:
    ctx->pc = 0x80B16DFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16DFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B16DFC: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B16DFCu)) return;
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
label_80B16E00:
    ctx->pc = 0x80B16E00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16E00u)) return;
    // 80B16E00: fcmpo   cr0, f5, f0
    if (!ppc_fp_available_inline(ctx, 0x80B16E00u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[5], ctx->fpr[0], true);

label_80B16E04:
    ctx->pc = 0x80B16E04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16E04u)) return;
    // 80B16E04: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80B16E08:
    ctx->pc = 0x80B16E08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16E08u)) return;
    // 80B16E08: bc    4, 2, 0x80B16E1C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B16E1C;
        }
    }

label_80B16E0C:
    ctx->pc = 0x80B16E0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16E0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B16E0C: lis     r3, -27591
    ctx->gpr[3] = ((u32)(s32)(-27591) << 16);

label_80B16E10:
    ctx->pc = 0x80B16E10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16E10u)) return;
    // 80B16E10: addi    r3, r3, -11956
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-11956);

label_80B16E14:
    ctx->pc = 0x80B16E14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16E14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B16E14: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B16E14u)) return;
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
label_80B16E18:
    ctx->pc = 0x80B16E18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16E18u)) return;
    // 80B16E18: fadds   f5, f5, f0
    if (!ppc_fp_available_inline(ctx, 0x80B16E18u)) return;
    ppc_fadds(ctx, 5, 5, 0);

label_80B16E1C:
    ctx->pc = 0x80B16E1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16E1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B16E1C: rlwinm r0, r31, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_80B16E20:
    ctx->pc = 0x80B16E20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16E20u)) return;
    // 80B16E20: cmplwi  r0, 0x00FF
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

label_80B16E24:
    ctx->pc = 0x80B16E24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16E24u)) return;
    // 80B16E24: bc    4, 1, 0x80B16E2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B16E2C;
        }
    }

label_80B16E28:
    ctx->pc = 0x80B16E28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16E28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B16E28: li      r31, 255
    ctx->gpr[31] = (u32)(s32)(255);

label_80B16E2C:
    ctx->pc = 0x80B16E2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 21u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16E2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 21u : 1u;
    // 80B16E2C: lis     r3, -27591
    ctx->gpr[3] = ((u32)(s32)(-27591) << 16);

label_80B16E30:
    ctx->pc = 0x80B16E30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16E30u)) return;
    // 80B16E30: addi    r3, r3, -11948
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-11948);

label_80B16E34:
    ctx->pc = 0x80B16E34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16E34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80B16E34: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B16E34u)) return;
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
label_80B16E38:
    ctx->pc = 0x80B16E38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16E38u)) return;
    // 80B16E38: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80B16E38u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_80B16E3C:
    ctx->pc = 0x80B16E3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16E3Cu)) return;
    // 80B16E3C: lis     r3, -27591
    ctx->gpr[3] = ((u32)(s32)(-27591) << 16);

label_80B16E40:
    ctx->pc = 0x80B16E40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16E40u)) return;
    // 80B16E40: addi    r3, r3, -11944
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-11944);

label_80B16E44:
    ctx->pc = 0x80B16E44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16E44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80B16E44: lfs     f3, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B16E44u)) return;
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
label_80B16E48:
    ctx->pc = 0x80B16E48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16E48u)) return;
    // 80B16E48: lis     r3, -27591
    ctx->gpr[3] = ((u32)(s32)(-27591) << 16);

label_80B16E4C:
    ctx->pc = 0x80B16E4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16E4Cu)) return;
    // 80B16E4C: addi    r3, r3, -11940
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-11940);

label_80B16E50:
    ctx->pc = 0x80B16E50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16E50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B16E50: lfs     f4, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B16E50u)) return;
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
label_80B16E54:
    ctx->pc = 0x80B16E54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16E54u)) return;
    // 80B16E54: rlwinm r5, r28, 0, 24, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[28], 0u) & 0x000000FFu;
    }

label_80B16E58:
    ctx->pc = 0x80B16E58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16E58u)) return;
    // 80B16E58: rlwinm r0, r29, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[29], 0u) & 0x000000FFu;
    }

label_80B16E5C:
    ctx->pc = 0x80B16E5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16E5Cu)) return;
    // 80B16E5C: rlwinm r4, r0, 8, 0, 23
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 8u) & 0xFFFFFF00u;
    }

label_80B16E60:
    ctx->pc = 0x80B16E60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16E60u)) return;
    // 80B16E60: rlwinm r0, r31, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_80B16E64:
    ctx->pc = 0x80B16E64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16E64u)) return;
    // 80B16E64: rlwinm r3, r0, 24, 0, 7
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 24u) & 0xFF000000u;
    }

label_80B16E68:
    ctx->pc = 0x80B16E68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16E68u)) return;
    // 80B16E68: rlwinm r0, r30, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0x000000FFu;
    }

label_80B16E6C:
    ctx->pc = 0x80B16E6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16E6Cu)) return;
    // 80B16E6C: rlwinm r0, r0, 16, 0, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 16u) & 0xFFFF0000u;
    }

label_80B16E70:
    ctx->pc = 0x80B16E70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16E70u)) return;
    // 80B16E70: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80B16E74:
    ctx->pc = 0x80B16E74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16E74u)) return;
    // 80B16E74: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_80B16E78:
    ctx->pc = 0x80B16E78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16E78u)) return;
    // 80B16E78: or   r3, r5, r0
    {
        ctx->gpr[3] = ctx->gpr[5] | ctx->gpr[0];
    }

label_80B16E7C:
    ctx->pc = 0x80B16E7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16E7Cu)) return;
    // 80B16E7C: bl      0x80B1703C
    {
            ctx->lr = 0x80B16E80u;
            goto label_80B1703C;
    }

label_80B16E80:
    ctx->pc = 0x80B16E80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16E80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B16E80: addi    r11, r1, 64
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(64);

label_80B16E84:
    ctx->pc = 0x80B16E84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16E84u)) return;
    // 80B16E84: bl      0x80006E20
    {
            ctx->lr = 0x80B16E88u;
            ctx->pc = 0x80006E20u;
            return;
    }

label_80B16E88:
    ctx->pc = 0x80B16E88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16E88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B16E88: lwz     r0, 68(r1)
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
label_80B16E8C:
    ctx->pc = 0x80B16E8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B16E8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B16E8C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B16E90:
    ctx->pc = 0x80B16E90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16E90u)) return;
    // 80B16E90: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_80B16E94:
    ctx->pc = 0x80B16E94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16E94u)) return;
    // 80B16E94: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B15D00;
        }
    }

label_80B16E98:
    ctx->pc = 0x80B16E98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16E98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B16E98: stwu     r1, -16(r1)
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
label_80B16E9C:
    ctx->pc = 0x80B16E9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16E9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B16E9C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B16EA0:
    ctx->pc = 0x80B16EA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16EA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B16EA0: stw     r0, 20(r1)
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
label_80B16EA4:
    ctx->pc = 0x80B16EA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16EA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B16EA4: lwz     r5, 32(r3)
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
label_80B16EA8:
    ctx->pc = 0x80B16EA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16EA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B16EA8: lfs     f1, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B16EA8u)) return;
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
label_80B16EAC:
    ctx->pc = 0x80B16EACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16EACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B16EAC: lfs     f0, 48(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B16EACu)) return;
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
label_80B16EB0:
    ctx->pc = 0x80B16EB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16EB0u)) return;
    // 80B16EB0: fadds   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80B16EB0u)) return;
    ppc_fadds(ctx, 1, 1, 0);

label_80B16EB4:
    ctx->pc = 0x80B16EB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16EB4u)) return;
    // 80B16EB4: lis     r4, -27591
    ctx->gpr[4] = ((u32)(s32)(-27591) << 16);

label_80B16EB8:
    ctx->pc = 0x80B16EB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16EB8u)) return;
    // 80B16EB8: addi    r4, r4, -11936
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-11936);

label_80B16EBC:
    ctx->pc = 0x80B16EBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16EBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B16EBC: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B16EBCu)) return;
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
label_80B16EC0:
    ctx->pc = 0x80B16EC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16EC0u)) return;
    // 80B16EC0: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80B16EC0u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80B16EC4:
    ctx->pc = 0x80B16EC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16EC4u)) return;
    // 80B16EC4: bc    4, 1, 0x80B16ED0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B16ED0;
        }
    }

label_80B16EC8:
    ctx->pc = 0x80B16EC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16EC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B16EC8: fmr    f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80B16EC8u)) return;
    ctx->fpr[1] = ctx->fpr[0];

label_80B16ECC:
    ctx->pc = 0x80B16ECCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16ECCu)) return;
    // 80B16ECC: b       0x80B16EE8
    {
            goto label_80B16EE8;
    }

label_80B16ED0:
    ctx->pc = 0x80B16ED0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16ED0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B16ED0: lis     r4, -27591
    ctx->gpr[4] = ((u32)(s32)(-27591) << 16);

label_80B16ED4:
    ctx->pc = 0x80B16ED4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16ED4u)) return;
    // 80B16ED4: addi    r4, r4, -11948
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-11948);

label_80B16ED8:
    ctx->pc = 0x80B16ED8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16ED8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B16ED8: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B16ED8u)) return;
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
label_80B16EDC:
    ctx->pc = 0x80B16EDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16EDCu)) return;
    // 80B16EDC: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80B16EDCu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80B16EE0:
    ctx->pc = 0x80B16EE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16EE0u)) return;
    // 80B16EE0: bc    4, 0, 0x80B16EE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B16EE8;
        }
    }

label_80B16EE4:
    ctx->pc = 0x80B16EE4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16EE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B16EE4: fmr    f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80B16EE4u)) return;
    ctx->fpr[1] = ctx->fpr[0];

label_80B16EE8:
    ctx->pc = 0x80B16EE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16EE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B16EE8: stfs     f1, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B16EE8u)) return;
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
label_80B16EEC:
    ctx->pc = 0x80B16EECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16EECu)) return;
    // 80B16EEC: bl      0x80B16D44
    {
            ctx->lr = 0x80B16EF0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80B16D44u;
                return;
            }
            goto label_80B16D44;
    }

label_80B16EF0:
    ctx->pc = 0x80B16EF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16EF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B16EF0: lwz     r0, 20(r1)
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
label_80B16EF4:
    ctx->pc = 0x80B16EF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B16EF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B16EF4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B16EF8:
    ctx->pc = 0x80B16EF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16EF8u)) return;
    // 80B16EF8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B16EFC:
    ctx->pc = 0x80B16EFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16EFCu)) return;
    // 80B16EFC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B15D00;
        }
    }

label_80B16F00:
    ctx->pc = 0x80B16F00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16F00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B16F00: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B15D00;
        }
    }

label_80B16F04:
    ctx->pc = 0x80B16F04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16F04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80B16F04: stwu     r1, -16(r1)
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
label_80B16F08:
    ctx->pc = 0x80B16F08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16F08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B16F08: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B16F0C:
    ctx->pc = 0x80B16F0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16F0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B16F0C: stw     r0, 20(r1)
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
label_80B16F10:
    ctx->pc = 0x80B16F10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16F10u)) return;
    // 80B16F10: lis     r4, -32591
    ctx->gpr[4] = ((u32)(s32)(-32591) << 16);

label_80B16F14:
    ctx->pc = 0x80B16F14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16F14u)) return;
    // 80B16F14: addi    r0, r4, 28312
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(28312);

label_80B16F18:
    ctx->pc = 0x80B16F18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16F18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B16F18: stw     r0, 16(r3)
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
label_80B16F1C:
    ctx->pc = 0x80B16F1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16F1Cu)) return;
    // 80B16F1C: lis     r4, -32591
    ctx->gpr[4] = ((u32)(s32)(-32591) << 16);

label_80B16F20:
    ctx->pc = 0x80B16F20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16F20u)) return;
    // 80B16F20: addi    r0, r4, 27972
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(27972);

label_80B16F24:
    ctx->pc = 0x80B16F24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16F24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B16F24: stw     r0, 20(r3)
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
label_80B16F28:
    ctx->pc = 0x80B16F28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16F28u)) return;
    // 80B16F28: lis     r4, -32591
    ctx->gpr[4] = ((u32)(s32)(-32591) << 16);

label_80B16F2C:
    ctx->pc = 0x80B16F2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16F2Cu)) return;
    // 80B16F2C: addi    r0, r4, 28416
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(28416);

label_80B16F30:
    ctx->pc = 0x80B16F30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16F30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B16F30: stw     r0, 24(r3)
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
label_80B16F34:
    ctx->pc = 0x80B16F34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16F34u)) return;
    // 80B16F34: bl      0x80B16E98
    {
            ctx->lr = 0x80B16F38u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80B16E98u;
                return;
            }
            goto label_80B16E98;
    }

label_80B16F38:
    ctx->pc = 0x80B16F38u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16F38u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B16F38: lwz     r0, 20(r1)
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
label_80B16F3C:
    ctx->pc = 0x80B16F3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B16F3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B16F3C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B16F40:
    ctx->pc = 0x80B16F40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16F40u)) return;
    // 80B16F40: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B16F44:
    ctx->pc = 0x80B16F44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16F44u)) return;
    // 80B16F44: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B15D00;
        }
    }

label_80B16F48:
    ctx->pc = 0x80B16F48u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 23u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16F48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 23u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80B16F48: stwu     r1, -96(r1)
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
label_80B16F4C:
    ctx->pc = 0x80B16F4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16F4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80B16F4C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B16F50:
    ctx->pc = 0x80B16F50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16F50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80B16F50: stw     r0, 100(r1)
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
label_80B16F54:
    ctx->pc = 0x80B16F54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16F54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80B16F54: stfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B16F54u)) return;
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
label_80B16F58:
    ctx->pc = 0x80B16F58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16F58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80B16F58: psq_st   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80B16F58u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80B16F58u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B16F5C:
    ctx->pc = 0x80B16F5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16F5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80B16F5C: stfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B16F5Cu)) return;
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
label_80B16F60:
    ctx->pc = 0x80B16F60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16F60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80B16F60: psq_st   f30, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80B16F60u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x80B16F60u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B16F64:
    ctx->pc = 0x80B16F64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16F64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80B16F64: stfd     f29, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B16F64u)) return;
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
label_80B16F68:
    ctx->pc = 0x80B16F68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16F68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80B16F68: psq_st   f29, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80B16F68u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x80B16F68u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B16F6C:
    ctx->pc = 0x80B16F6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16F6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80B16F6C: stfd     f28, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B16F6Cu)) return;
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
label_80B16F70:
    ctx->pc = 0x80B16F70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16F70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80B16F70: psq_st   f28, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80B16F70u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x80B16F70u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B16F74:
    ctx->pc = 0x80B16F74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16F74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B16F74: stfd     f27, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B16F74u)) return;
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
label_80B16F78:
    ctx->pc = 0x80B16F78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16F78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B16F78: psq_st   f27, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80B16F78u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_store_inline(ctx, 27u, ea, false, 0u, false, 0x80B16F78u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B16F7C:
    ctx->pc = 0x80B16F7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16F7Cu)) return;
    // 80B16F7C: fmr    f27, f1
    if (!ppc_fp_available_inline(ctx, 0x80B16F7Cu)) return;
    ctx->fpr[27] = ctx->fpr[1];

label_80B16F80:
    ctx->pc = 0x80B16F80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16F80u)) return;
    // 80B16F80: fmr    f28, f2
    if (!ppc_fp_available_inline(ctx, 0x80B16F80u)) return;
    ctx->fpr[28] = ctx->fpr[2];

label_80B16F84:
    ctx->pc = 0x80B16F84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16F84u)) return;
    // 80B16F84: fmr    f29, f3
    if (!ppc_fp_available_inline(ctx, 0x80B16F84u)) return;
    ctx->fpr[29] = ctx->fpr[3];

label_80B16F88:
    ctx->pc = 0x80B16F88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16F88u)) return;
    // 80B16F88: fmr    f30, f4
    if (!ppc_fp_available_inline(ctx, 0x80B16F88u)) return;
    ctx->fpr[30] = ctx->fpr[4];

label_80B16F8C:
    ctx->pc = 0x80B16F8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16F8Cu)) return;
    // 80B16F8C: fmr    f31, f5
    if (!ppc_fp_available_inline(ctx, 0x80B16F8Cu)) return;
    ctx->fpr[31] = ctx->fpr[5];

label_80B16F90:
    ctx->pc = 0x80B16F90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16F90u)) return;
    // 80B16F90: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B16F94:
    ctx->pc = 0x80B16F94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16F94u)) return;
    // 80B16F94: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80B16F98:
    ctx->pc = 0x80B16F98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16F98u)) return;
    // 80B16F98: lis     r5, -32591
    ctx->gpr[5] = ((u32)(s32)(-32591) << 16);

label_80B16F9C:
    ctx->pc = 0x80B16F9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16F9Cu)) return;
    // 80B16F9C: addi    r5, r5, 28420
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(28420);

label_80B16FA0:
    ctx->pc = 0x80B16FA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16FA0u)) return;
    // 80B16FA0: bl      0x8050FD60
    {
            ctx->lr = 0x80B16FA4u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80B16FA4:
    ctx->pc = 0x80B16FA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 25u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B16FA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 25u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80B16FA4: lwz     r5, 32(r3)
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
label_80B16FA8:
    ctx->pc = 0x80B16FA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16FA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80B16FA8: stfs     f27, 48(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B16FA8u)) return;
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
label_80B16FAC:
    ctx->pc = 0x80B16FACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16FACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80B16FAC: stfs     f28, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B16FACu)) return;
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
label_80B16FB0:
    ctx->pc = 0x80B16FB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16FB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80B16FB0: stfs     f29, 32(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B16FB0u)) return;
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
label_80B16FB4:
    ctx->pc = 0x80B16FB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16FB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80B16FB4: stfs     f30, 36(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B16FB4u)) return;
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
label_80B16FB8:
    ctx->pc = 0x80B16FB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16FB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80B16FB8: stfs     f31, 40(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B16FB8u)) return;
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
label_80B16FBC:
    ctx->pc = 0x80B16FBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16FBCu)) return;
    // 80B16FBC: lis     r4, -27591
    ctx->gpr[4] = ((u32)(s32)(-27591) << 16);

label_80B16FC0:
    ctx->pc = 0x80B16FC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16FC0u)) return;
    // 80B16FC0: addi    r4, r4, -11952
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-11952);

label_80B16FC4:
    ctx->pc = 0x80B16FC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16FC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80B16FC4: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B16FC4u)) return;
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
label_80B16FC8:
    ctx->pc = 0x80B16FC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16FC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80B16FC8: stfs     f0, 52(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B16FC8u)) return;
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
label_80B16FCC:
    ctx->pc = 0x80B16FCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16FCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80B16FCC: psq_l   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80B16FCCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80B16FCCu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B16FD0:
    ctx->pc = 0x80B16FD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16FD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80B16FD0: lfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B16FD0u)) return;
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
label_80B16FD4:
    ctx->pc = 0x80B16FD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16FD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80B16FD4: psq_l   f30, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80B16FD4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x80B16FD4u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B16FD8:
    ctx->pc = 0x80B16FD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16FD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B16FD8: lfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B16FD8u)) return;
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
label_80B16FDC:
    ctx->pc = 0x80B16FDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16FDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B16FDC: psq_l   f29, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80B16FDCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x80B16FDCu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B16FE0:
    ctx->pc = 0x80B16FE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16FE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B16FE0: lfd     f29, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B16FE0u)) return;
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
label_80B16FE4:
    ctx->pc = 0x80B16FE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16FE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B16FE4: psq_l   f28, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80B16FE4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x80B16FE4u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B16FE8:
    ctx->pc = 0x80B16FE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16FE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B16FE8: lfd     f28, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B16FE8u)) return;
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
label_80B16FEC:
    ctx->pc = 0x80B16FECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16FECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B16FEC: psq_l   f27, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80B16FECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_load_inline(ctx, 27u, ea, false, 0u, false, 0x80B16FECu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B16FF0:
    ctx->pc = 0x80B16FF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16FF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B16FF0: lfd     f27, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B16FF0u)) return;
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
label_80B16FF4:
    ctx->pc = 0x80B16FF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16FF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B16FF4: lwz     r0, 100(r1)
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
label_80B16FF8:
    ctx->pc = 0x80B16FF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B16FF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B16FF8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B16FFC:
    ctx->pc = 0x80B16FFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B16FFCu)) return;
    // 80B16FFC: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_80B17000:
    ctx->pc = 0x80B17000u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17000u)) return;
    // 80B17000: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B15D00;
        }
    }

label_80B17004:
    ctx->pc = 0x80B17004u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B17004u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B17004: lwz     r3, 32(r3)
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
label_80B17008:
    ctx->pc = 0x80B17008u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17008u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B17008: stfs     f1, 48(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B17008u)) return;
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
label_80B1700C:
    ctx->pc = 0x80B1700Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1700Cu)) return;
    // 80B1700C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B15D00;
        }
    }

label_80B17010:
    ctx->pc = 0x80B17010u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B17010u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B17010: lwz     r3, 32(r3)
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
label_80B17014:
    ctx->pc = 0x80B17014u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17014u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B17014: stfs     f1, 44(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B17014u)) return;
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
label_80B17018:
    ctx->pc = 0x80B17018u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17018u)) return;
    // 80B17018: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B15D00;
        }
    }

label_80B1701C:
    ctx->pc = 0x80B1701Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B1701Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B1701C: lwz     r3, 32(r3)
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
label_80B17020:
    ctx->pc = 0x80B17020u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17020u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B17020: stfs     f1, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B17020u)) return;
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
label_80B17024:
    ctx->pc = 0x80B17024u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17024u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B17024: stfs     f2, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B17024u)) return;
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
label_80B17028:
    ctx->pc = 0x80B17028u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17028u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B17028: stfs     f3, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B17028u)) return;
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
label_80B1702C:
    ctx->pc = 0x80B1702Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1702Cu)) return;
    // 80B1702C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B15D00;
        }
    }

label_80B17030:
    ctx->pc = 0x80B17030u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B17030u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B17030: lwz     r3, 32(r3)
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
label_80B17034:
    ctx->pc = 0x80B17034u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17034u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B17034: stfs     f1, 52(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B17034u)) return;
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
label_80B17038:
    ctx->pc = 0x80B17038u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17038u)) return;
    // 80B17038: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B15D00;
        }
    }

label_80B1703C:
    ctx->pc = 0x80B1703Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B1703Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B1703C: stwu     r1, -16(r1)
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
label_80B17040:
    ctx->pc = 0x80B17040u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17040u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B17040: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B17044:
    ctx->pc = 0x80B17044u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17044u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B17044: stw     r0, 20(r1)
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
label_80B17048:
    ctx->pc = 0x80B17048u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17048u)) return;
    // 80B17048: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80B1704C:
    ctx->pc = 0x80B1704Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1704Cu)) return;
    // 80B1704C: bl      0x80607948
    {
            ctx->lr = 0x80B17050u;
            ctx->pc = 0x80607948u;
            return;
    }

label_80B17050:
    ctx->pc = 0x80B17050u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B17050u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B17050: lwz     r0, 20(r1)
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
label_80B17054:
    ctx->pc = 0x80B17054u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B17054u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B17054: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B17058:
    ctx->pc = 0x80B17058u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17058u)) return;
    // 80B17058: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B1705C:
    ctx->pc = 0x80B1705Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1705Cu)) return;
    // 80B1705C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B15D00;
        }
    }

label_80B17060:
    ctx->pc = 0x80B17060u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B17060u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B17060: stwu     r1, -16(r1)
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
label_80B17064:
    ctx->pc = 0x80B17064u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17064u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B17064: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B17068:
    ctx->pc = 0x80B17068u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17068u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B17068: stw     r0, 20(r1)
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
label_80B1706C:
    ctx->pc = 0x80B1706Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1706Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B1706C: lwz     r3, 32(r3)
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
label_80B17070:
    ctx->pc = 0x80B17070u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17070u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B17070: lwz     r3, 16(r3)
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
label_80B17074:
    ctx->pc = 0x80B17074u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17074u)) return;
    // 80B17074: bl      0x80509CF0
    {
            ctx->lr = 0x80B17078u;
            ctx->pc = 0x80509CF0u;
            return;
    }

label_80B17078:
    ctx->pc = 0x80B17078u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B17078u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B17078: lwz     r0, 20(r1)
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
label_80B1707C:
    ctx->pc = 0x80B1707Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B1707Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B1707C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B17080:
    ctx->pc = 0x80B17080u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17080u)) return;
    // 80B17080: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B17084:
    ctx->pc = 0x80B17084u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17084u)) return;
    // 80B17084: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B15D00;
        }
    }

label_80B17088:
    ctx->pc = 0x80B17088u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B17088u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B17088: stwu     r1, -32(r1)
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
label_80B1708C:
    ctx->pc = 0x80B1708Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1708Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B1708C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B17090:
    ctx->pc = 0x80B17090u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17090u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B17090: stw     r0, 36(r1)
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
label_80B17094:
    ctx->pc = 0x80B17094u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17094u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B17094: stw     r31, 28(r1)
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
label_80B17098:
    ctx->pc = 0x80B17098u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17098u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B17098: stw     r30, 24(r1)
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
label_80B1709C:
    ctx->pc = 0x80B1709Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1709Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B1709C: stw     r29, 20(r1)
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
label_80B170A0:
    ctx->pc = 0x80B170A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B170A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B170A0: lwz     r31, 32(r3)
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
label_80B170A4:
    ctx->pc = 0x80B170A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B170A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B170A4: lwz     r30, 16(r31)
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
label_80B170A8:
    ctx->pc = 0x80B170A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B170A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B170A8: lwz     r5, 28(r31)
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
label_80B170AC:
    ctx->pc = 0x80B170ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B170ACu)) return;
    // 80B170AC: cmpwi   r5, 0
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

label_80B170B0:
    ctx->pc = 0x80B170B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B170B0u)) return;
    // 80B170B0: bc    4, 1, 0x80B170E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B170E8;
        }
    }

label_80B170B4:
    ctx->pc = 0x80B170B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B170B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80B170B4: lwz     r4, 24(r31)
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
label_80B170B8:
    ctx->pc = 0x80B170B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B170B8u)) return;
    // 80B170B8: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80B170BC:
    ctx->pc = 0x80B170BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B170BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80B170BC: lwz     r0, 20(r31)
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
label_80B170C0:
    ctx->pc = 0x80B170C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80B170C0u)) return;
    // 80B170C0: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80B170C4:
    ctx->pc = 0x80B170C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B170C4u)) return;
    // 80B170C4: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80B170C8:
    ctx->pc = 0x80B170C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80B170C8u)) return;
    // 80B170C8: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80B170CC:
    ctx->pc = 0x80B170CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B170CCu)) return;
    // 80B170CC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80B170D0:
    ctx->pc = 0x80B170D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B170D0u)) return;
    // 80B170D0: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80B170D4:
    ctx->pc = 0x80B170D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B170D4u)) return;
    // 80B170D4: bl      0x80509C74
    {
            ctx->lr = 0x80B170D8u;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80B170D8:
    ctx->pc = 0x80B170D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B170D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B170D8: stw     r29, 20(r31)
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
label_80B170DC:
    ctx->pc = 0x80B170DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B170DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B170DC: lwz     r3, 28(r31)
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
label_80B170E0:
    ctx->pc = 0x80B170E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B170E0u)) return;
    // 80B170E0: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80B170E4:
    ctx->pc = 0x80B170E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B170E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B170E4: stw     r0, 28(r31)
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
label_80B170E8:
    ctx->pc = 0x80B170E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B170E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B170E8: lwz     r5, 40(r31)
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
label_80B170EC:
    ctx->pc = 0x80B170ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B170ECu)) return;
    // 80B170EC: cmpwi   r5, 0
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

label_80B170F0:
    ctx->pc = 0x80B170F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B170F0u)) return;
    // 80B170F0: bc    4, 1, 0x80B17128
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B17128;
        }
    }

label_80B170F4:
    ctx->pc = 0x80B170F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B170F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80B170F4: lwz     r4, 36(r31)
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
label_80B170F8:
    ctx->pc = 0x80B170F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B170F8u)) return;
    // 80B170F8: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80B170FC:
    ctx->pc = 0x80B170FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B170FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80B170FC: lwz     r0, 32(r31)
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
label_80B17100:
    ctx->pc = 0x80B17100u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80B17100u)) return;
    // 80B17100: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80B17104:
    ctx->pc = 0x80B17104u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17104u)) return;
    // 80B17104: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80B17108:
    ctx->pc = 0x80B17108u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80B17108u)) return;
    // 80B17108: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80B1710C:
    ctx->pc = 0x80B1710Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1710Cu)) return;
    // 80B1710C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80B17110:
    ctx->pc = 0x80B17110u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17110u)) return;
    // 80B17110: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80B17114:
    ctx->pc = 0x80B17114u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17114u)) return;
    // 80B17114: bl      0x80509BF8
    {
            ctx->lr = 0x80B17118u;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80B17118:
    ctx->pc = 0x80B17118u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B17118u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B17118: stw     r29, 32(r31)
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
label_80B1711C:
    ctx->pc = 0x80B1711Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1711Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B1711C: lwz     r3, 40(r31)
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
label_80B17120:
    ctx->pc = 0x80B17120u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17120u)) return;
    // 80B17120: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80B17124:
    ctx->pc = 0x80B17124u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17124u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B17124: stw     r0, 40(r31)
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
label_80B17128:
    ctx->pc = 0x80B17128u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B17128u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B17128: lwz     r5, 52(r31)
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
label_80B1712C:
    ctx->pc = 0x80B1712Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1712Cu)) return;
    // 80B1712C: cmpwi   r5, 0
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

label_80B17130:
    ctx->pc = 0x80B17130u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17130u)) return;
    // 80B17130: bc    4, 1, 0x80B17168
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B17168;
        }
    }

label_80B17134:
    ctx->pc = 0x80B17134u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B17134u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80B17134: lwz     r4, 48(r31)
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
label_80B17138:
    ctx->pc = 0x80B17138u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17138u)) return;
    // 80B17138: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80B1713C:
    ctx->pc = 0x80B1713Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1713Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80B1713C: lwz     r0, 44(r31)
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
label_80B17140:
    ctx->pc = 0x80B17140u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80B17140u)) return;
    // 80B17140: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80B17144:
    ctx->pc = 0x80B17144u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17144u)) return;
    // 80B17144: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80B17148:
    ctx->pc = 0x80B17148u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80B17148u)) return;
    // 80B17148: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80B1714C:
    ctx->pc = 0x80B1714Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1714Cu)) return;
    // 80B1714C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80B17150:
    ctx->pc = 0x80B17150u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17150u)) return;
    // 80B17150: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80B17154:
    ctx->pc = 0x80B17154u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17154u)) return;
    // 80B17154: bl      0x80509B94
    {
            ctx->lr = 0x80B17158u;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80B17158:
    ctx->pc = 0x80B17158u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B17158u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B17158: stw     r29, 44(r31)
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
label_80B1715C:
    ctx->pc = 0x80B1715Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1715Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B1715C: lwz     r3, 52(r31)
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
label_80B17160:
    ctx->pc = 0x80B17160u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17160u)) return;
    // 80B17160: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80B17164:
    ctx->pc = 0x80B17164u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17164u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B17164: stw     r0, 52(r31)
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
label_80B17168:
    ctx->pc = 0x80B17168u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B17168u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B17168: lwz     r31, 28(r1)
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
label_80B1716C:
    ctx->pc = 0x80B1716Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1716Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B1716C: lwz     r30, 24(r1)
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
label_80B17170:
    ctx->pc = 0x80B17170u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17170u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B17170: lwz     r29, 20(r1)
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
label_80B17174:
    ctx->pc = 0x80B17174u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17174u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B17174: lwz     r0, 36(r1)
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
label_80B17178:
    ctx->pc = 0x80B17178u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B17178u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B17178: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B1717C:
    ctx->pc = 0x80B1717Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1717Cu)) return;
    // 80B1717C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80B17180:
    ctx->pc = 0x80B17180u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17180u)) return;
    // 80B17180: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B15D00;
        }
    }

label_80B17184:
    ctx->pc = 0x80B17184u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B17184u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B17184: stwu     r1, -32(r1)
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
label_80B17188:
    ctx->pc = 0x80B17188u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17188u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B17188: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B1718C:
    ctx->pc = 0x80B1718Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1718Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B1718C: stw     r0, 36(r1)
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
label_80B17190:
    ctx->pc = 0x80B17190u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17190u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B17190: stw     r31, 28(r1)
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
label_80B17194:
    ctx->pc = 0x80B17194u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17194u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B17194: stw     r30, 24(r1)
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
label_80B17198:
    ctx->pc = 0x80B17198u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17198u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B17198: stw     r29, 20(r1)
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
label_80B1719C:
    ctx->pc = 0x80B1719Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1719Cu)) return;
    // 80B1719C: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80B171A0:
    ctx->pc = 0x80B171A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B171A0u)) return;
    // 80B171A0: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80B171A4:
    ctx->pc = 0x80B171A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B171A4u)) return;
    // 80B171A4: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B171A8:
    ctx->pc = 0x80B171A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B171A8u)) return;
    // 80B171A8: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80B171AC:
    ctx->pc = 0x80B171ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B171ACu)) return;
    // 80B171AC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80B171B0:
    ctx->pc = 0x80B171B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B171B0u)) return;
    // 80B171B0: bl      0x8050FD60
    {
            ctx->lr = 0x80B171B4u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80B171B4:
    ctx->pc = 0x80B171B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B171B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B171B4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80B171B8:
    ctx->pc = 0x80B171B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B171B8u)) return;
    // 80B171B8: cmplwi  r31, 0x0000
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

label_80B171BC:
    ctx->pc = 0x80B171BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B171BCu)) return;
    // 80B171BC: bc    12, 2, 0x80B17220
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B17220;
        }
    }

label_80B171C0:
    ctx->pc = 0x80B171C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B171C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80B171C0: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80B171C4:
    ctx->pc = 0x80B171C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B171C4u)) return;
    // 80B171C4: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80B171C8:
    ctx->pc = 0x80B171C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B171C8u)) return;
    // 80B171C8: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80B171CC:
    ctx->pc = 0x80B171CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B171CCu)) return;
    // 80B171CC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B171D0:
    ctx->pc = 0x80B171D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B171D0u)) return;
    // 80B171D0: or   r7, r30, r30
    {
        ctx->gpr[7] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80B171D4:
    ctx->pc = 0x80B171D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B171D4u)) return;
    // 80B171D4: bl      0x8050A0D4
    {
            ctx->lr = 0x80B171D8u;
            ctx->pc = 0x8050A0D4u;
            return;
    }

label_80B171D8:
    ctx->pc = 0x80B171D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 18u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B171D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 18u : 1u;
    // 80B171D8: lis     r3, -32591
    ctx->gpr[3] = ((u32)(s32)(-32591) << 16);

label_80B171DC:
    ctx->pc = 0x80B171DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B171DCu)) return;
    // 80B171DC: addi    r0, r3, 28808
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(28808);

label_80B171E0:
    ctx->pc = 0x80B171E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B171E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80B171E0: stw     r0, 16(r31)
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
label_80B171E4:
    ctx->pc = 0x80B171E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B171E4u)) return;
    // 80B171E4: lis     r3, -32591
    ctx->gpr[3] = ((u32)(s32)(-32591) << 16);

label_80B171E8:
    ctx->pc = 0x80B171E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B171E8u)) return;
    // 80B171E8: addi    r0, r3, 28768
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(28768);

label_80B171EC:
    ctx->pc = 0x80B171ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B171ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80B171EC: stw     r0, 24(r31)
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
label_80B171F0:
    ctx->pc = 0x80B171F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B171F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B171F0: lwz     r3, 32(r31)
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
label_80B171F4:
    ctx->pc = 0x80B171F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B171F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B171F4: stw     r31, 16(r3)
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
label_80B171F8:
    ctx->pc = 0x80B171F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B171F8u)) return;
    // 80B171F8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80B171FC:
    ctx->pc = 0x80B171FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B171FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B171FC: stw     r0, 20(r3)
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
label_80B17200:
    ctx->pc = 0x80B17200u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17200u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B17200: stw     r0, 24(r3)
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
label_80B17204:
    ctx->pc = 0x80B17204u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17204u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B17204: stw     r0, 28(r3)
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
label_80B17208:
    ctx->pc = 0x80B17208u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17208u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B17208: stw     r0, 32(r3)
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
label_80B1720C:
    ctx->pc = 0x80B1720Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1720Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B1720C: stw     r0, 36(r3)
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
label_80B17210:
    ctx->pc = 0x80B17210u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17210u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B17210: stw     r0, 40(r3)
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
label_80B17214:
    ctx->pc = 0x80B17214u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17214u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B17214: stw     r0, 44(r3)
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
label_80B17218:
    ctx->pc = 0x80B17218u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17218u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B17218: stw     r0, 48(r3)
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
label_80B1721C:
    ctx->pc = 0x80B1721Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1721Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B1721C: stw     r0, 52(r3)
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
label_80B17220:
    ctx->pc = 0x80B17220u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B17220u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80B17220: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80B17224:
    ctx->pc = 0x80B17224u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17224u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B17224: lwz     r31, 28(r1)
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
label_80B17228:
    ctx->pc = 0x80B17228u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17228u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B17228: lwz     r30, 24(r1)
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
label_80B1722C:
    ctx->pc = 0x80B1722Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1722Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B1722C: lwz     r29, 20(r1)
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
label_80B17230:
    ctx->pc = 0x80B17230u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17230u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B17230: lwz     r0, 36(r1)
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
label_80B17234:
    ctx->pc = 0x80B17234u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B17234u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B17234: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B17238:
    ctx->pc = 0x80B17238u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17238u)) return;
    // 80B17238: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80B1723C:
    ctx->pc = 0x80B1723Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1723Cu)) return;
    // 80B1723C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B15D00;
        }
    }

label_80B17240:
    ctx->pc = 0x80B17240u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B17240u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B17240: stwu     r1, -16(r1)
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
label_80B17244:
    ctx->pc = 0x80B17244u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17244u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B17244: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B17248:
    ctx->pc = 0x80B17248u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17248u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B17248: stw     r0, 20(r1)
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
label_80B1724C:
    ctx->pc = 0x80B1724Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1724Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B1724C: stw     r31, 12(r1)
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
label_80B17250:
    ctx->pc = 0x80B17250u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17250u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B17250: stw     r30, 8(r1)
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
label_80B17254:
    ctx->pc = 0x80B17254u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17254u)) return;
    // 80B17254: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80B17258:
    ctx->pc = 0x80B17258u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17258u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B17258: lwz     r31, 32(r3)
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
label_80B1725C:
    ctx->pc = 0x80B1725Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1725Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B1725C: stw     r30, 24(r31)
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
label_80B17260:
    ctx->pc = 0x80B17260u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17260u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B17260: stw     r5, 28(r31)
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
label_80B17264:
    ctx->pc = 0x80B17264u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17264u)) return;
    // 80B17264: cmpwi   r5, 0
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

label_80B17268:
    ctx->pc = 0x80B17268u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17268u)) return;
    // 80B17268: bc    12, 1, 0x80B17278
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B17278;
        }
    }

label_80B1726C:
    ctx->pc = 0x80B1726Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B1726Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B1726C: lwz     r3, 16(r31)
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
label_80B17270:
    ctx->pc = 0x80B17270u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17270u)) return;
    // 80B17270: bl      0x80509C74
    {
            ctx->lr = 0x80B17274u;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80B17274:
    ctx->pc = 0x80B17274u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B17274u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B17274: stw     r30, 20(r31)
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
label_80B17278:
    ctx->pc = 0x80B17278u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B17278u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B17278: lwz     r31, 12(r1)
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
label_80B1727C:
    ctx->pc = 0x80B1727Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1727Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B1727C: lwz     r30, 8(r1)
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
label_80B17280:
    ctx->pc = 0x80B17280u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17280u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B17280: lwz     r0, 20(r1)
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
label_80B17284:
    ctx->pc = 0x80B17284u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B17284u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B17284: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B17288:
    ctx->pc = 0x80B17288u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17288u)) return;
    // 80B17288: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B1728C:
    ctx->pc = 0x80B1728Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1728Cu)) return;
    // 80B1728C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B15D00;
        }
    }

label_80B17290:
    ctx->pc = 0x80B17290u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B17290u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B17290: stwu     r1, -16(r1)
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
label_80B17294:
    ctx->pc = 0x80B17294u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17294u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B17294: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B17298:
    ctx->pc = 0x80B17298u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17298u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B17298: stw     r0, 20(r1)
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
label_80B1729C:
    ctx->pc = 0x80B1729Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1729Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B1729C: stw     r31, 12(r1)
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
label_80B172A0:
    ctx->pc = 0x80B172A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B172A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B172A0: stw     r30, 8(r1)
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
label_80B172A4:
    ctx->pc = 0x80B172A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B172A4u)) return;
    // 80B172A4: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80B172A8:
    ctx->pc = 0x80B172A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B172A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B172A8: lwz     r31, 32(r3)
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
label_80B172AC:
    ctx->pc = 0x80B172ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B172ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B172AC: stw     r30, 36(r31)
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
label_80B172B0:
    ctx->pc = 0x80B172B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B172B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B172B0: stw     r5, 40(r31)
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
label_80B172B4:
    ctx->pc = 0x80B172B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B172B4u)) return;
    // 80B172B4: cmpwi   r5, 0
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

label_80B172B8:
    ctx->pc = 0x80B172B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B172B8u)) return;
    // 80B172B8: bc    12, 1, 0x80B172C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B172C8;
        }
    }

label_80B172BC:
    ctx->pc = 0x80B172BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B172BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B172BC: lwz     r3, 16(r31)
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
label_80B172C0:
    ctx->pc = 0x80B172C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B172C0u)) return;
    // 80B172C0: bl      0x80509BF8
    {
            ctx->lr = 0x80B172C4u;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80B172C4:
    ctx->pc = 0x80B172C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B172C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B172C4: stw     r30, 32(r31)
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
label_80B172C8:
    ctx->pc = 0x80B172C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B172C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B172C8: lwz     r31, 12(r1)
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
label_80B172CC:
    ctx->pc = 0x80B172CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B172CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B172CC: lwz     r30, 8(r1)
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
label_80B172D0:
    ctx->pc = 0x80B172D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B172D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B172D0: lwz     r0, 20(r1)
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
label_80B172D4:
    ctx->pc = 0x80B172D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B172D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B172D4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B172D8:
    ctx->pc = 0x80B172D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B172D8u)) return;
    // 80B172D8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B172DC:
    ctx->pc = 0x80B172DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B172DCu)) return;
    // 80B172DC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B15D00;
        }
    }

label_80B172E0:
    ctx->pc = 0x80B172E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B172E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B172E0: stwu     r1, -16(r1)
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
label_80B172E4:
    ctx->pc = 0x80B172E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B172E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B172E4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B172E8:
    ctx->pc = 0x80B172E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B172E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B172E8: stw     r0, 20(r1)
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
label_80B172EC:
    ctx->pc = 0x80B172ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B172ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B172EC: stw     r31, 12(r1)
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
label_80B172F0:
    ctx->pc = 0x80B172F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B172F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B172F0: stw     r30, 8(r1)
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
label_80B172F4:
    ctx->pc = 0x80B172F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B172F4u)) return;
    // 80B172F4: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80B172F8:
    ctx->pc = 0x80B172F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B172F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B172F8: lwz     r31, 32(r3)
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
label_80B172FC:
    ctx->pc = 0x80B172FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B172FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B172FC: stw     r30, 48(r31)
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
label_80B17300:
    ctx->pc = 0x80B17300u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17300u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B17300: stw     r5, 52(r31)
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
label_80B17304:
    ctx->pc = 0x80B17304u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17304u)) return;
    // 80B17304: cmpwi   r5, 0
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

label_80B17308:
    ctx->pc = 0x80B17308u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17308u)) return;
    // 80B17308: bc    12, 1, 0x80B17318
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B17318;
        }
    }

label_80B1730C:
    ctx->pc = 0x80B1730Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B1730Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B1730C: lwz     r3, 16(r31)
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
label_80B17310:
    ctx->pc = 0x80B17310u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17310u)) return;
    // 80B17310: bl      0x80509B94
    {
            ctx->lr = 0x80B17314u;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80B17314:
    ctx->pc = 0x80B17314u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B17314u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B17314: stw     r30, 44(r31)
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
label_80B17318:
    ctx->pc = 0x80B17318u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B17318u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B17318: lwz     r31, 12(r1)
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
label_80B1731C:
    ctx->pc = 0x80B1731Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1731Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B1731C: lwz     r30, 8(r1)
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
label_80B17320:
    ctx->pc = 0x80B17320u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17320u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B17320: lwz     r0, 20(r1)
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
label_80B17324:
    ctx->pc = 0x80B17324u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B17324u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B17324: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B17328:
    ctx->pc = 0x80B17328u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17328u)) return;
    // 80B17328: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B1732C:
    ctx->pc = 0x80B1732Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1732Cu)) return;
    // 80B1732C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B15D00;
        }
    }

label_80B17330:
    ctx->pc = 0x80B17330u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B17330u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B17330: stwu     r1, -16(r1)
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
label_80B17334:
    ctx->pc = 0x80B17334u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17334u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B17334: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B17338:
    ctx->pc = 0x80B17338u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17338u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B17338: stw     r0, 20(r1)
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
label_80B1733C:
    ctx->pc = 0x80B1733Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1733Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B1733C: stw     r31, 12(r1)
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
label_80B17340:
    ctx->pc = 0x80B17340u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17340u)) return;
    // 80B17340: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80B17344:
    ctx->pc = 0x80B17344u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17344u)) return;
    // 80B17344: lis     r4, -27589
    ctx->gpr[4] = ((u32)(s32)(-27589) << 16);

label_80B17348:
    ctx->pc = 0x80B17348u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17348u)) return;
    // 80B17348: addi    r4, r4, 24084
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(24084);

label_80B1734C:
    ctx->pc = 0x80B1734Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1734Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B1734C: lwz     r0, 0(r4)
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
label_80B17350:
    ctx->pc = 0x80B17350u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17350u)) return;
    // 80B17350: cmplwi  r0, 0x0000
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

label_80B17354:
    ctx->pc = 0x80B17354u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17354u)) return;
    // 80B17354: bc    4, 2, 0x80B17378
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B17378;
        }
    }

label_80B17358:
    ctx->pc = 0x80B17358u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B17358u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B17358: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80B1735C:
    ctx->pc = 0x80B1735Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1735Cu)) return;
    // 80B1735C: bl      0x8050EEC0
    {
            ctx->lr = 0x80B17360u;
            ctx->pc = 0x8050EEC0u;
            return;
    }

label_80B17360:
    ctx->pc = 0x80B17360u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B17360u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80B17360: lis     r4, -27589
    ctx->gpr[4] = ((u32)(s32)(-27589) << 16);

label_80B17364:
    ctx->pc = 0x80B17364u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17364u)) return;
    // 80B17364: addi    r4, r4, 24084
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(24084);

label_80B17368:
    ctx->pc = 0x80B17368u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17368u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B17368: stw     r3, 0(r4)
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
label_80B1736C:
    ctx->pc = 0x80B1736Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1736Cu)) return;
    // 80B1736C: lis     r3, -27589
    ctx->gpr[3] = ((u32)(s32)(-27589) << 16);

label_80B17370:
    ctx->pc = 0x80B17370u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17370u)) return;
    // 80B17370: addi    r3, r3, 24080
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24080);

label_80B17374:
    ctx->pc = 0x80B17374u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17374u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B17374: stw     r31, 0(r3)
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
label_80B17378:
    ctx->pc = 0x80B17378u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B17378u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B17378: lwz     r31, 12(r1)
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
label_80B1737C:
    ctx->pc = 0x80B1737Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1737Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B1737C: lwz     r0, 20(r1)
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
label_80B17380:
    ctx->pc = 0x80B17380u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B17380u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B17380: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B17384:
    ctx->pc = 0x80B17384u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17384u)) return;
    // 80B17384: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B17388:
    ctx->pc = 0x80B17388u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17388u)) return;
    // 80B17388: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B15D00;
        }
    }

label_80B1738C:
    ctx->pc = 0x80B1738Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B1738Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B1738C: stwu     r1, -32(r1)
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
label_80B17390:
    ctx->pc = 0x80B17390u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17390u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B17390: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B17394:
    ctx->pc = 0x80B17394u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17394u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B17394: stw     r0, 36(r1)
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
label_80B17398:
    ctx->pc = 0x80B17398u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17398u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B17398: stw     r31, 28(r1)
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
label_80B1739C:
    ctx->pc = 0x80B1739Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1739Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B1739C: stw     r30, 24(r1)
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
label_80B173A0:
    ctx->pc = 0x80B173A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B173A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B173A0: stw     r29, 20(r1)
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
label_80B173A4:
    ctx->pc = 0x80B173A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B173A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B173A4: stw     r28, 16(r1)
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
label_80B173A8:
    ctx->pc = 0x80B173A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B173A8u)) return;
    // 80B173A8: lis     r3, -27589
    ctx->gpr[3] = ((u32)(s32)(-27589) << 16);

label_80B173AC:
    ctx->pc = 0x80B173ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B173ACu)) return;
    // 80B173AC: addi    r30, r3, 24084
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(24084);

label_80B173B0:
    ctx->pc = 0x80B173B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B173B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B173B0: lwz     r0, 0(r30)
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
label_80B173B4:
    ctx->pc = 0x80B173B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B173B4u)) return;
    // 80B173B4: cmplwi  r0, 0x0000
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

label_80B173B8:
    ctx->pc = 0x80B173B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B173B8u)) return;
    // 80B173B8: bc    12, 2, 0x80B17418
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B17418;
        }
    }

label_80B173BC:
    ctx->pc = 0x80B173BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B173BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B173BC: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_80B173C0:
    ctx->pc = 0x80B173C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B173C0u)) return;
    // 80B173C0: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_80B173C4:
    ctx->pc = 0x80B173C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B173C4u)) return;
    // 80B173C4: lis     r3, -27589
    ctx->gpr[3] = ((u32)(s32)(-27589) << 16);

label_80B173C8:
    ctx->pc = 0x80B173C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B173C8u)) return;
    // 80B173C8: addi    r31, r3, 24080
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(24080);

label_80B173CC:
    ctx->pc = 0x80B173CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B173CCu)) return;
    // 80B173CC: b       0x80B173EC
    {
            goto label_80B173EC;
    }

label_80B173D0:
    ctx->pc = 0x80B173D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B173D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B173D0: lwz     r3, 0(r30)
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
label_80B173D4:
    ctx->pc = 0x80B173D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B173D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B173D4: lwzx    r3, r3, r29
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
label_80B173D8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B173D8u)) return;
    // 80B173D8: cmplwi  r3, 0x0000
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

label_80B173DC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B173DCu)) return;
    // 80B173DC: bc    12, 2, 0x80B173E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B173E4;
        }
    }

label_80B173E0:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B173E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B173E0: bl      0x8050F9E0
    {
            ctx->lr = 0x80B173E4u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80B173E4:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B173E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B173E4: addi    r29, r29, 4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4);

label_80B173E8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B173E8u)) return;
    // 80B173E8: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_80B173EC:
    ctx->pc = 0x80B173ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B173ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B173EC: lwz     r0, 0(r31)
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
label_80B173F0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B173F0u)) return;
    // 80B173F0: cmpw    r28, r0
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

label_80B173F4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B173F4u)) return;
    // 80B173F4: bc    12, 0, 0x80B173D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80B173D0u;
                return;
            }
            goto label_80B173D0;
        }
    }

label_80B173F8:
    ctx->pc = 0x80B173F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B173F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B173F8: lis     r3, -27589
    ctx->gpr[3] = ((u32)(s32)(-27589) << 16);

label_80B173FC:
    ctx->pc = 0x80B173FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B173FCu)) return;
    // 80B173FC: addi    r3, r3, 24084
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24084);

label_80B17400:
    ctx->pc = 0x80B17400u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17400u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B17400: lwz     r3, 0(r3)
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
label_80B17404:
    ctx->pc = 0x80B17404u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17404u)) return;
    // 80B17404: bl      0x8050ED40
    {
            ctx->lr = 0x80B17408u;
            ctx->pc = 0x8050ED40u;
            return;
    }

label_80B17408:
    ctx->pc = 0x80B17408u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B17408u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B17408: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80B1740C:
    ctx->pc = 0x80B1740Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1740Cu)) return;
    // 80B1740C: lis     r3, -27589
    ctx->gpr[3] = ((u32)(s32)(-27589) << 16);

label_80B17410:
    ctx->pc = 0x80B17410u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17410u)) return;
    // 80B17410: addi    r3, r3, 24084
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24084);

label_80B17414:
    ctx->pc = 0x80B17414u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17414u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B17414: stw     r0, 0(r3)
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
label_80B17418:
    ctx->pc = 0x80B17418u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B17418u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B17418: lwz     r31, 28(r1)
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
label_80B1741C:
    ctx->pc = 0x80B1741Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1741Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B1741C: lwz     r30, 24(r1)
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
label_80B17420:
    ctx->pc = 0x80B17420u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17420u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B17420: lwz     r29, 20(r1)
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
label_80B17424:
    ctx->pc = 0x80B17424u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17424u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B17424: lwz     r28, 16(r1)
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
label_80B17428:
    ctx->pc = 0x80B17428u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17428u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B17428: lwz     r0, 36(r1)
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
label_80B1742C:
    ctx->pc = 0x80B1742Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B1742Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B1742C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B17430:
    ctx->pc = 0x80B17430u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17430u)) return;
    // 80B17430: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80B17434:
    ctx->pc = 0x80B17434u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17434u)) return;
    // 80B17434: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B15D00;
        }
    }

label_80B17438:
    ctx->pc = 0x80B17438u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B17438u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B17438: stwu     r1, -16(r1)
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
label_80B1743C:
    ctx->pc = 0x80B1743Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1743Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B1743C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B17440:
    ctx->pc = 0x80B17440u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17440u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B17440: stw     r0, 20(r1)
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
label_80B17444:
    ctx->pc = 0x80B17444u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17444u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B17444: stw     r31, 12(r1)
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
label_80B17448:
    ctx->pc = 0x80B17448u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17448u)) return;
    // 80B17448: lis     r6, -27589
    ctx->gpr[6] = ((u32)(s32)(-27589) << 16);

label_80B1744C:
    ctx->pc = 0x80B1744Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1744Cu)) return;
    // 80B1744C: addi    r6, r6, 24080
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(24080);

label_80B17450:
    ctx->pc = 0x80B17450u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17450u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B17450: lwz     r0, 0(r6)
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
label_80B17454:
    ctx->pc = 0x80B17454u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17454u)) return;
    // 80B17454: cmpw    r3, r0
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

label_80B17458:
    ctx->pc = 0x80B17458u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17458u)) return;
    // 80B17458: bc    4, 0, 0x80B17494
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B17494;
        }
    }

label_80B1745C:
    ctx->pc = 0x80B1745Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B1745Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B1745C: lis     r6, -27589
    ctx->gpr[6] = ((u32)(s32)(-27589) << 16);

label_80B17460:
    ctx->pc = 0x80B17460u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17460u)) return;
    // 80B17460: addi    r6, r6, 24084
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(24084);

label_80B17464:
    ctx->pc = 0x80B17464u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17464u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B17464: lwz     r6, 0(r6)
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
label_80B17468:
    ctx->pc = 0x80B17468u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17468u)) return;
    // 80B17468: rlwinm r31, r3, 2, 0, 29
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80B1746C:
    ctx->pc = 0x80B1746Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1746Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B1746C: lwzx    r0, r6, r31
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
label_80B17470:
    ctx->pc = 0x80B17470u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17470u)) return;
    // 80B17470: cmplwi  r0, 0x0000
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

label_80B17474:
    ctx->pc = 0x80B17474u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17474u)) return;
    // 80B17474: bc    4, 2, 0x80B17494
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B17494;
        }
    }

label_80B17478:
    ctx->pc = 0x80B17478u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B17478u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B17478: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80B1747C:
    ctx->pc = 0x80B1747Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1747Cu)) return;
    // 80B1747C: or   r4, r5, r5
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80B17480:
    ctx->pc = 0x80B17480u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17480u)) return;
    // 80B17480: bl      0x80B17184
    {
            ctx->lr = 0x80B17484u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80B17184u;
                return;
            }
            goto label_80B17184;
    }

label_80B17484:
    ctx->pc = 0x80B17484u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B17484u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B17484: lis     r4, -27589
    ctx->gpr[4] = ((u32)(s32)(-27589) << 16);

label_80B17488:
    ctx->pc = 0x80B17488u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17488u)) return;
    // 80B17488: addi    r4, r4, 24084
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(24084);

label_80B1748C:
    ctx->pc = 0x80B1748Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1748Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B1748C: lwz     r4, 0(r4)
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
label_80B17490:
    ctx->pc = 0x80B17490u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17490u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B17490: stwx    r3, r4, r31
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
label_80B17494:
    ctx->pc = 0x80B17494u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B17494u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B17494: lwz     r31, 12(r1)
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
label_80B17498:
    ctx->pc = 0x80B17498u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17498u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B17498: lwz     r0, 20(r1)
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
label_80B1749C:
    ctx->pc = 0x80B1749Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B1749Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B1749C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B174A0:
    ctx->pc = 0x80B174A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B174A0u)) return;
    // 80B174A0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B174A4:
    ctx->pc = 0x80B174A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B174A4u)) return;
    // 80B174A4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B15D00;
        }
    }

label_80B174A8:
    ctx->pc = 0x80B174A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B174A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B174A8: stwu     r1, -16(r1)
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
label_80B174AC:
    ctx->pc = 0x80B174ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B174ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B174AC: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B174B0:
    ctx->pc = 0x80B174B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B174B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B174B0: stw     r0, 20(r1)
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
label_80B174B4:
    ctx->pc = 0x80B174B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B174B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B174B4: stw     r31, 12(r1)
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
label_80B174B8:
    ctx->pc = 0x80B174B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B174B8u)) return;
    // 80B174B8: lis     r4, -27589
    ctx->gpr[4] = ((u32)(s32)(-27589) << 16);

label_80B174BC:
    ctx->pc = 0x80B174BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B174BCu)) return;
    // 80B174BC: addi    r4, r4, 24080
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(24080);

label_80B174C0:
    ctx->pc = 0x80B174C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B174C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B174C0: lwz     r0, 0(r4)
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
label_80B174C4:
    ctx->pc = 0x80B174C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B174C4u)) return;
    // 80B174C4: cmpw    r3, r0
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

label_80B174C8:
    ctx->pc = 0x80B174C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B174C8u)) return;
    // 80B174C8: bc    4, 0, 0x80B17500
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B17500;
        }
    }

label_80B174CC:
    ctx->pc = 0x80B174CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B174CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B174CC: lis     r4, -27589
    ctx->gpr[4] = ((u32)(s32)(-27589) << 16);

label_80B174D0:
    ctx->pc = 0x80B174D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B174D0u)) return;
    // 80B174D0: addi    r4, r4, 24084
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(24084);

label_80B174D4:
    ctx->pc = 0x80B174D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B174D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B174D4: lwz     r4, 0(r4)
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
label_80B174D8:
    ctx->pc = 0x80B174D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B174D8u)) return;
    // 80B174D8: rlwinm r31, r3, 2, 0, 29
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80B174DC:
    ctx->pc = 0x80B174DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B174DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B174DC: lwzx    r3, r4, r31
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
label_80B174E0:
    ctx->pc = 0x80B174E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B174E0u)) return;
    // 80B174E0: cmplwi  r3, 0x0000
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

label_80B174E4:
    ctx->pc = 0x80B174E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B174E4u)) return;
    // 80B174E4: bc    12, 2, 0x80B17500
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B17500;
        }
    }

label_80B174E8:
    ctx->pc = 0x80B174E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B174E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B174E8: bl      0x8050F9E0
    {
            ctx->lr = 0x80B174ECu;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80B174EC:
    ctx->pc = 0x80B174ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B174ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B174EC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80B174F0:
    ctx->pc = 0x80B174F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B174F0u)) return;
    // 80B174F0: lis     r3, -27589
    ctx->gpr[3] = ((u32)(s32)(-27589) << 16);

label_80B174F4:
    ctx->pc = 0x80B174F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B174F4u)) return;
    // 80B174F4: addi    r3, r3, 24084
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24084);

label_80B174F8:
    ctx->pc = 0x80B174F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B174F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B174F8: lwz     r3, 0(r3)
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
label_80B174FC:
    ctx->pc = 0x80B174FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B174FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B174FC: stwx    r0, r3, r31
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
label_80B17500:
    ctx->pc = 0x80B17500u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B17500u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B17500: lwz     r31, 12(r1)
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
label_80B17504:
    ctx->pc = 0x80B17504u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17504u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B17504: lwz     r0, 20(r1)
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
label_80B17508:
    ctx->pc = 0x80B17508u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B17508u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B17508: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B1750C:
    ctx->pc = 0x80B1750Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1750Cu)) return;
    // 80B1750C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B17510:
    ctx->pc = 0x80B17510u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17510u)) return;
    // 80B17510: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B15D00;
        }
    }

label_80B17514:
    ctx->pc = 0x80B17514u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B17514u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B17514: stwu     r1, -16(r1)
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
label_80B17518:
    ctx->pc = 0x80B17518u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17518u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B17518: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B1751C:
    ctx->pc = 0x80B1751Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1751Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B1751C: stw     r0, 20(r1)
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
label_80B17520:
    ctx->pc = 0x80B17520u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17520u)) return;
    // 80B17520: lis     r6, -27589
    ctx->gpr[6] = ((u32)(s32)(-27589) << 16);

label_80B17524:
    ctx->pc = 0x80B17524u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17524u)) return;
    // 80B17524: addi    r6, r6, 24080
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(24080);

label_80B17528:
    ctx->pc = 0x80B17528u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17528u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B17528: lwz     r0, 0(r6)
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
label_80B1752C:
    ctx->pc = 0x80B1752Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1752Cu)) return;
    // 80B1752C: cmpw    r3, r0
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

label_80B17530:
    ctx->pc = 0x80B17530u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17530u)) return;
    // 80B17530: bc    4, 0, 0x80B17554
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B17554;
        }
    }

label_80B17534:
    ctx->pc = 0x80B17534u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B17534u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B17534: lis     r6, -27589
    ctx->gpr[6] = ((u32)(s32)(-27589) << 16);

label_80B17538:
    ctx->pc = 0x80B17538u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17538u)) return;
    // 80B17538: addi    r6, r6, 24084
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(24084);

label_80B1753C:
    ctx->pc = 0x80B1753Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1753Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B1753C: lwz     r6, 0(r6)
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
label_80B17540:
    ctx->pc = 0x80B17540u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17540u)) return;
    // 80B17540: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80B17544:
    ctx->pc = 0x80B17544u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17544u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B17544: lwzx    r3, r6, r0
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
label_80B17548:
    ctx->pc = 0x80B17548u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17548u)) return;
    // 80B17548: cmplwi  r3, 0x0000
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

label_80B1754C:
    ctx->pc = 0x80B1754Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1754Cu)) return;
    // 80B1754C: bc    12, 2, 0x80B17554
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B17554;
        }
    }

label_80B17550:
    ctx->pc = 0x80B17550u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B17550u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B17550: bl      0x80B17240
    {
            ctx->lr = 0x80B17554u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80B17240u;
                return;
            }
            goto label_80B17240;
    }

label_80B17554:
    ctx->pc = 0x80B17554u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B17554u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B17554: lwz     r0, 20(r1)
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
label_80B17558:
    ctx->pc = 0x80B17558u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B17558u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B17558: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B1755C:
    ctx->pc = 0x80B1755Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1755Cu)) return;
    // 80B1755C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B17560:
    ctx->pc = 0x80B17560u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17560u)) return;
    // 80B17560: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B15D00;
        }
    }

label_80B17564:
    ctx->pc = 0x80B17564u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B17564u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B17564: stwu     r1, -16(r1)
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
label_80B17568:
    ctx->pc = 0x80B17568u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17568u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B17568: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B1756C:
    ctx->pc = 0x80B1756Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1756Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B1756C: stw     r0, 20(r1)
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
label_80B17570:
    ctx->pc = 0x80B17570u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17570u)) return;
    // 80B17570: lis     r6, -27589
    ctx->gpr[6] = ((u32)(s32)(-27589) << 16);

label_80B17574:
    ctx->pc = 0x80B17574u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17574u)) return;
    // 80B17574: addi    r6, r6, 24080
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(24080);

label_80B17578:
    ctx->pc = 0x80B17578u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17578u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B17578: lwz     r0, 0(r6)
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
label_80B1757C:
    ctx->pc = 0x80B1757Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1757Cu)) return;
    // 80B1757C: cmpw    r3, r0
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

label_80B17580:
    ctx->pc = 0x80B17580u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17580u)) return;
    // 80B17580: bc    4, 0, 0x80B175A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B175A4;
        }
    }

label_80B17584:
    ctx->pc = 0x80B17584u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B17584u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B17584: lis     r6, -27589
    ctx->gpr[6] = ((u32)(s32)(-27589) << 16);

label_80B17588:
    ctx->pc = 0x80B17588u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17588u)) return;
    // 80B17588: addi    r6, r6, 24084
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(24084);

label_80B1758C:
    ctx->pc = 0x80B1758Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1758Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B1758C: lwz     r6, 0(r6)
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
label_80B17590:
    ctx->pc = 0x80B17590u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17590u)) return;
    // 80B17590: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80B17594:
    ctx->pc = 0x80B17594u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17594u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B17594: lwzx    r3, r6, r0
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
label_80B17598:
    ctx->pc = 0x80B17598u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17598u)) return;
    // 80B17598: cmplwi  r3, 0x0000
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

label_80B1759C:
    ctx->pc = 0x80B1759Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1759Cu)) return;
    // 80B1759C: bc    12, 2, 0x80B175A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B175A4;
        }
    }

label_80B175A0:
    ctx->pc = 0x80B175A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B175A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B175A0: bl      0x80B17290
    {
            ctx->lr = 0x80B175A4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80B17290u;
                return;
            }
            goto label_80B17290;
    }

label_80B175A4:
    ctx->pc = 0x80B175A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B175A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B175A4: lwz     r0, 20(r1)
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
label_80B175A8:
    ctx->pc = 0x80B175A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B175A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B175A8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B175AC:
    ctx->pc = 0x80B175ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B175ACu)) return;
    // 80B175AC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B175B0:
    ctx->pc = 0x80B175B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B175B0u)) return;
    // 80B175B0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B15D00;
        }
    }

label_80B175B4:
    ctx->pc = 0x80B175B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B175B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B175B4: stwu     r1, -16(r1)
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
label_80B175B8:
    ctx->pc = 0x80B175B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B175B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B175B8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B175BC:
    ctx->pc = 0x80B175BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B175BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B175BC: stw     r0, 20(r1)
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
label_80B175C0:
    ctx->pc = 0x80B175C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B175C0u)) return;
    // 80B175C0: lis     r6, -27589
    ctx->gpr[6] = ((u32)(s32)(-27589) << 16);

label_80B175C4:
    ctx->pc = 0x80B175C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B175C4u)) return;
    // 80B175C4: addi    r6, r6, 24080
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(24080);

label_80B175C8:
    ctx->pc = 0x80B175C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B175C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B175C8: lwz     r0, 0(r6)
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
label_80B175CC:
    ctx->pc = 0x80B175CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B175CCu)) return;
    // 80B175CC: cmpw    r3, r0
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

label_80B175D0:
    ctx->pc = 0x80B175D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B175D0u)) return;
    // 80B175D0: bc    4, 0, 0x80B175F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B175F4;
        }
    }

label_80B175D4:
    ctx->pc = 0x80B175D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B175D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B175D4: lis     r6, -27589
    ctx->gpr[6] = ((u32)(s32)(-27589) << 16);

label_80B175D8:
    ctx->pc = 0x80B175D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B175D8u)) return;
    // 80B175D8: addi    r6, r6, 24084
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(24084);

label_80B175DC:
    ctx->pc = 0x80B175DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B175DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B175DC: lwz     r6, 0(r6)
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
label_80B175E0:
    ctx->pc = 0x80B175E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B175E0u)) return;
    // 80B175E0: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80B175E4:
    ctx->pc = 0x80B175E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B175E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B175E4: lwzx    r3, r6, r0
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
label_80B175E8:
    ctx->pc = 0x80B175E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B175E8u)) return;
    // 80B175E8: cmplwi  r3, 0x0000
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

label_80B175EC:
    ctx->pc = 0x80B175ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B175ECu)) return;
    // 80B175EC: bc    12, 2, 0x80B175F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B175F4;
        }
    }

label_80B175F0:
    ctx->pc = 0x80B175F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B175F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B175F0: bl      0x80B172E0
    {
            ctx->lr = 0x80B175F4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80B172E0u;
                return;
            }
            goto label_80B172E0;
    }

label_80B175F4:
    ctx->pc = 0x80B175F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B175F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B175F4: lwz     r0, 20(r1)
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
label_80B175F8:
    ctx->pc = 0x80B175F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B175F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B175F8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B175FC:
    ctx->pc = 0x80B175FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B175FCu)) return;
    // 80B175FC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B17600:
    ctx->pc = 0x80B17600u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17600u)) return;
    // 80B17600: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B15D00;
        }
    }

label_80B17604:
    ctx->pc = 0x80B17604u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B17604u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80B17604: stwu     r1, -32(r1)
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
label_80B17608:
    ctx->pc = 0x80B17608u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17608u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B17608: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B1760C:
    ctx->pc = 0x80B1760Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1760Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B1760C: stw     r0, 36(r1)
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
label_80B17610:
    ctx->pc = 0x80B17610u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17610u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B17610: stw     r31, 28(r1)
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
label_80B17614:
    ctx->pc = 0x80B17614u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17614u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B17614: stw     r30, 24(r1)
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
label_80B17618:
    ctx->pc = 0x80B17618u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17618u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B17618: stw     r29, 20(r1)
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
label_80B1761C:
    ctx->pc = 0x80B1761Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1761Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B1761C: stw     r28, 16(r1)
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
label_80B17620:
    ctx->pc = 0x80B17620u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17620u)) return;
    // 80B17620: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80B17624:
    ctx->pc = 0x80B17624u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17624u)) return;
    // 80B17624: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80B17628:
    ctx->pc = 0x80B17628u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17628u)) return;
    // 80B17628: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80B1762C:
    ctx->pc = 0x80B1762Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1762Cu)) return;
    // 80B1762C: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_80B17630:
    ctx->pc = 0x80B17630u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17630u)) return;
    // 80B17630: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B17634:
    ctx->pc = 0x80B17634u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17634u)) return;
    // 80B17634: bl      0x80401DB0
    {
            ctx->lr = 0x80B17638u;
            ctx->pc = 0x80401DB0u;
            return;
    }

label_80B17638:
    ctx->pc = 0x80B17638u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B17638u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B17638: lis     r4, -27589
    ctx->gpr[4] = ((u32)(s32)(-27589) << 16);

label_80B1763C:
    ctx->pc = 0x80B1763Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1763Cu)) return;
    // 80B1763C: addi    r4, r4, 24088
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(24088);

label_80B17640:
    ctx->pc = 0x80B17640u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17640u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B17640: lwz     r0, 0(r4)
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
label_80B17644:
    ctx->pc = 0x80B17644u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17644u)) return;
    // 80B17644: add   r4, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80B17648:
    ctx->pc = 0x80B17648u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17648u)) return;
    // 80B17648: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80B1764C:
    ctx->pc = 0x80B1764Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1764Cu)) return;
    // 80B1764C: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80B17650:
    ctx->pc = 0x80B17650u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17650u)) return;
    // 80B17650: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80B17654:
    ctx->pc = 0x80B17654u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17654u)) return;
    // 80B17654: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B17658:
    ctx->pc = 0x80B17658u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17658u)) return;
    // 80B17658: li      r7, 120
    ctx->gpr[7] = (u32)(s32)(120);

label_80B1765C:
    ctx->pc = 0x80B1765Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1765Cu)) return;
    // 80B1765C: bl      0x8050A0D4
    {
            ctx->lr = 0x80B17660u;
            ctx->pc = 0x8050A0D4u;
            return;
    }

label_80B17660:
    ctx->pc = 0x80B17660u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B17660u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B17660: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80B17664:
    ctx->pc = 0x80B17664u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17664u)) return;
    // 80B17664: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80B17668:
    ctx->pc = 0x80B17668u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17668u)) return;
    // 80B17668: bl      0x80509C74
    {
            ctx->lr = 0x80B1766Cu;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80B1766C:
    ctx->pc = 0x80B1766Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B1766Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B1766C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80B17670:
    ctx->pc = 0x80B17670u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17670u)) return;
    // 80B17670: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80B17674:
    ctx->pc = 0x80B17674u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17674u)) return;
    // 80B17674: bl      0x80509BF8
    {
            ctx->lr = 0x80B17678u;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80B17678:
    ctx->pc = 0x80B17678u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B17678u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B17678: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80B1767C:
    ctx->pc = 0x80B1767Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1767Cu)) return;
    // 80B1767C: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80B17680:
    ctx->pc = 0x80B17680u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17680u)) return;
    // 80B17680: bl      0x80509B94
    {
            ctx->lr = 0x80B17684u;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80B17684:
    ctx->pc = 0x80B17684u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B17684u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80B17684: lis     r3, -27589
    ctx->gpr[3] = ((u32)(s32)(-27589) << 16);

label_80B17688:
    ctx->pc = 0x80B17688u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17688u)) return;
    // 80B17688: addi    r4, r3, 24088
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(24088);

label_80B1768C:
    ctx->pc = 0x80B1768Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1768Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80B1768C: lwz     r3, 0(r4)
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
label_80B17690:
    ctx->pc = 0x80B17690u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17690u)) return;
    // 80B17690: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_80B17694:
    ctx->pc = 0x80B17694u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17694u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B17694: stw     r0, 0(r4)
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
label_80B17698:
    ctx->pc = 0x80B17698u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17698u)) return;
    // 80B17698: rlwinm r0, r0, 0, 27, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000001Fu;
    }

label_80B1769C:
    ctx->pc = 0x80B1769Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1769Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B1769C: stw     r0, 0(r4)
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
label_80B176A0:
    ctx->pc = 0x80B176A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B176A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B176A0: lwz     r31, 28(r1)
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
label_80B176A4:
    ctx->pc = 0x80B176A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B176A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B176A4: lwz     r30, 24(r1)
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
label_80B176A8:
    ctx->pc = 0x80B176A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B176A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B176A8: lwz     r29, 20(r1)
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
label_80B176AC:
    ctx->pc = 0x80B176ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B176ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B176AC: lwz     r28, 16(r1)
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
label_80B176B0:
    ctx->pc = 0x80B176B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B176B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B176B0: lwz     r0, 36(r1)
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
label_80B176B4:
    ctx->pc = 0x80B176B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B176B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B176B4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B176B8:
    ctx->pc = 0x80B176B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B176B8u)) return;
    // 80B176B8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80B176BC:
    ctx->pc = 0x80B176BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B176BCu)) return;
    // 80B176BC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B15D00;
        }
    }

label_80B176C0:
    ctx->pc = 0x80B176C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B176C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B176C0: stwu     r1, -16(r1)
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
label_80B176C4:
    ctx->pc = 0x80B176C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B176C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B176C4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B176C8:
    ctx->pc = 0x80B176C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B176C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B176C8: stw     r0, 20(r1)
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
label_80B176CC:
    ctx->pc = 0x80B176CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B176CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B176CC: lwz     r3, 32(r3)
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
label_80B176D0:
    ctx->pc = 0x80B176D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B176D0u)) return;
    // 80B176D0: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_80B176D4:
    ctx->pc = 0x80B176D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B176D4u)) return;
    // 80B176D4: bl      0x80B17A7C
    {
            ctx->lr = 0x80B176D8u;
            goto label_80B17A7C;
    }

label_80B176D8:
    ctx->pc = 0x80B176D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B176D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B176D8: lwz     r0, 20(r1)
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
label_80B176DC:
    ctx->pc = 0x80B176DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B176DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B176DC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B176E0:
    ctx->pc = 0x80B176E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B176E0u)) return;
    // 80B176E0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B176E4:
    ctx->pc = 0x80B176E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B176E4u)) return;
    // 80B176E4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B15D00;
        }
    }

label_80B176E8:
    ctx->pc = 0x80B176E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B176E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B176E8: stwu     r1, -16(r1)
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
label_80B176EC:
    ctx->pc = 0x80B176ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B176ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B176EC: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B176F0:
    ctx->pc = 0x80B176F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B176F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B176F0: stw     r0, 20(r1)
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
label_80B176F4:
    ctx->pc = 0x80B176F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B176F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B176F4: stw     r31, 12(r1)
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
label_80B176F8:
    ctx->pc = 0x80B176F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B176F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B176F8: lwz     r31, 32(r3)
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
label_80B176FC:
    ctx->pc = 0x80B176FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B176FCu)) return;
    // 80B176FC: lis     r3, -32591
    ctx->gpr[3] = ((u32)(s32)(-32591) << 16);

label_80B17700:
    ctx->pc = 0x80B17700u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17700u)) return;
    // 80B17700: addi    r3, r3, 31248
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(31248);

label_80B17704:
    ctx->pc = 0x80B17704u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17704u)) return;
    // 80B17704: bl      0x800494F4
    {
            ctx->lr = 0x80B17708u;
            ctx->pc = 0x800494F4u;
            return;
    }

label_80B17708:
    ctx->pc = 0x80B17708u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B17708u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B17708: lwz     r3, 60(r31)
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
label_80B1770C:
    ctx->pc = 0x80B1770Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1770Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B1770C: lwz     r0, 64(r3)
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
label_80B17710:
    ctx->pc = 0x80B17710u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17710u)) return;
    // 80B17710: cmplwi  r0, 0x0000
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

label_80B17714:
    ctx->pc = 0x80B17714u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17714u)) return;
    // 80B17714: bc    12, 2, 0x80B17788
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B17788;
        }
    }

label_80B17718:
    ctx->pc = 0x80B17718u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B17718u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B17718: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B1771C:
    ctx->pc = 0x80B1771Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1771Cu)) return;
    // 80B1771C: bl      0x8004B49C
    {
            ctx->lr = 0x80B17720u;
            ctx->pc = 0x8004B49Cu;
            return;
    }

label_80B17720:
    ctx->pc = 0x80B17720u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B17720u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B17720: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B17724:
    ctx->pc = 0x80B17724u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17724u)) return;
    // 80B17724: addi    r4, r31, 32
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(32);

label_80B17728:
    ctx->pc = 0x80B17728u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17728u)) return;
    // 80B17728: bl      0x8004AA9C
    {
            ctx->lr = 0x80B1772Cu;
            ctx->pc = 0x8004AA9Cu;
            return;
    }

label_80B1772C:
    ctx->pc = 0x80B1772Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B1772Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B1772C: lwz     r0, 28(r31)
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
label_80B17730:
    ctx->pc = 0x80B17730u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17730u)) return;
    // 80B17730: cmpwi   r0, 0
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

label_80B17734:
    ctx->pc = 0x80B17734u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17734u)) return;
    // 80B17734: bc    12, 2, 0x80B17744
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B17744;
        }
    }

label_80B17738:
    ctx->pc = 0x80B17738u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B17738u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B17738: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B1773C:
    ctx->pc = 0x80B1773Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1773Cu)) return;
    // 80B1773C: rlwinm r4, r0, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_80B17740:
    ctx->pc = 0x80B17740u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17740u)) return;
    // 80B17740: bl      0x8004AFDC
    {
            ctx->lr = 0x80B17744u;
            ctx->pc = 0x8004AFDCu;
            return;
    }

label_80B17744:
    ctx->pc = 0x80B17744u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B17744u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B17744: lwz     r0, 20(r31)
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
label_80B17748:
    ctx->pc = 0x80B17748u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17748u)) return;
    // 80B17748: cmpwi   r0, 0
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

label_80B1774C:
    ctx->pc = 0x80B1774Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1774Cu)) return;
    // 80B1774C: bc    12, 2, 0x80B1775C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B1775C;
        }
    }

label_80B17750:
    ctx->pc = 0x80B17750u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B17750u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B17750: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B17754:
    ctx->pc = 0x80B17754u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17754u)) return;
    // 80B17754: rlwinm r4, r0, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_80B17758:
    ctx->pc = 0x80B17758u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17758u)) return;
    // 80B17758: bl      0x8004B3E0
    {
            ctx->lr = 0x80B1775Cu;
            ctx->pc = 0x8004B3E0u;
            return;
    }

label_80B1775C:
    ctx->pc = 0x80B1775Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B1775Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B1775C: lwz     r0, 24(r31)
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
label_80B17760:
    ctx->pc = 0x80B17760u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17760u)) return;
    // 80B17760: cmpwi   r0, 0
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

label_80B17764:
    ctx->pc = 0x80B17764u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17764u)) return;
    // 80B17764: bc    12, 2, 0x80B17774
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B17774;
        }
    }

label_80B17768:
    ctx->pc = 0x80B17768u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B17768u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B17768: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B1776C:
    ctx->pc = 0x80B1776Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1776Cu)) return;
    // 80B1776C: rlwinm r4, r0, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_80B17770:
    ctx->pc = 0x80B17770u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17770u)) return;
    // 80B17770: bl      0x8004AF5C
    {
            ctx->lr = 0x80B17774u;
            ctx->pc = 0x8004AF5Cu;
            return;
    }

label_80B17774:
    ctx->pc = 0x80B17774u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B17774u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B17774: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80B17778:
    ctx->pc = 0x80B17778u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17778u)) return;
    // 80B17778: bl      0x80461ED8
    {
            ctx->lr = 0x80B1777Cu;
            ctx->pc = 0x80461ED8u;
            return;
    }

label_80B1777C:
    ctx->pc = 0x80B1777Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B1777Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B1777C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B17780:
    ctx->pc = 0x80B17780u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17780u)) return;
    // 80B17780: bl      0x8004B504
    {
            ctx->lr = 0x80B17784u;
            ctx->pc = 0x8004B504u;
            return;
    }

label_80B17784:
    ctx->pc = 0x80B17784u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B17784u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B17784: b       0x80B17820
    {
            goto label_80B17820;
    }

label_80B17788:
    ctx->pc = 0x80B17788u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B17788u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B17788: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B1778C:
    ctx->pc = 0x80B1778Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1778Cu)) return;
    // 80B1778C: bl      0x8004B49C
    {
            ctx->lr = 0x80B17790u;
            ctx->pc = 0x8004B49Cu;
            return;
    }

label_80B17790:
    ctx->pc = 0x80B17790u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B17790u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B17790: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B17794:
    ctx->pc = 0x80B17794u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17794u)) return;
    // 80B17794: addi    r4, r31, 32
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(32);

label_80B17798:
    ctx->pc = 0x80B17798u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17798u)) return;
    // 80B17798: bl      0x8004AA9C
    {
            ctx->lr = 0x80B1779Cu;
            ctx->pc = 0x8004AA9Cu;
            return;
    }

label_80B1779C:
    ctx->pc = 0x80B1779Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B1779Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B1779C: lwz     r0, 28(r31)
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
label_80B177A0:
    ctx->pc = 0x80B177A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B177A0u)) return;
    // 80B177A0: cmpwi   r0, 0
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

label_80B177A4:
    ctx->pc = 0x80B177A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B177A4u)) return;
    // 80B177A4: bc    12, 2, 0x80B177B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B177B4;
        }
    }

label_80B177A8:
    ctx->pc = 0x80B177A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B177A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B177A8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B177AC:
    ctx->pc = 0x80B177ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B177ACu)) return;
    // 80B177AC: rlwinm r4, r0, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_80B177B0:
    ctx->pc = 0x80B177B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B177B0u)) return;
    // 80B177B0: bl      0x8004AFDC
    {
            ctx->lr = 0x80B177B4u;
            ctx->pc = 0x8004AFDCu;
            return;
    }

label_80B177B4:
    ctx->pc = 0x80B177B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B177B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B177B4: lwz     r0, 20(r31)
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
label_80B177B8:
    ctx->pc = 0x80B177B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B177B8u)) return;
    // 80B177B8: cmpwi   r0, 0
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

label_80B177BC:
    ctx->pc = 0x80B177BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B177BCu)) return;
    // 80B177BC: bc    12, 2, 0x80B177CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B177CC;
        }
    }

label_80B177C0:
    ctx->pc = 0x80B177C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B177C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B177C0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B177C4:
    ctx->pc = 0x80B177C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B177C4u)) return;
    // 80B177C4: rlwinm r4, r0, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_80B177C8:
    ctx->pc = 0x80B177C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B177C8u)) return;
    // 80B177C8: bl      0x8004B3E0
    {
            ctx->lr = 0x80B177CCu;
            ctx->pc = 0x8004B3E0u;
            return;
    }

label_80B177CC:
    ctx->pc = 0x80B177CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B177CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B177CC: lwz     r0, 24(r31)
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
label_80B177D0:
    ctx->pc = 0x80B177D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B177D0u)) return;
    // 80B177D0: cmpwi   r0, 0
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

label_80B177D4:
    ctx->pc = 0x80B177D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B177D4u)) return;
    // 80B177D4: bc    12, 2, 0x80B177E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B177E4;
        }
    }

label_80B177D8:
    ctx->pc = 0x80B177D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B177D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B177D8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B177DC:
    ctx->pc = 0x80B177DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B177DCu)) return;
    // 80B177DC: rlwinm r4, r0, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_80B177E0:
    ctx->pc = 0x80B177E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B177E0u)) return;
    // 80B177E0: bl      0x8004AF5C
    {
            ctx->lr = 0x80B177E4u;
            ctx->pc = 0x8004AF5Cu;
            return;
    }

label_80B177E4:
    ctx->pc = 0x80B177E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B177E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B177E4: lis     r3, -27589
    ctx->gpr[3] = ((u32)(s32)(-27589) << 16);

label_80B177E8:
    ctx->pc = 0x80B177E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B177E8u)) return;
    // 80B177E8: addi    r3, r3, 13080
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13080);

label_80B177EC:
    ctx->pc = 0x80B177ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B177ECu)) return;
    // 80B177EC: bl      0x8060F594
    {
            ctx->lr = 0x80B177F0u;
            ctx->pc = 0x8060F594u;
            return;
    }

label_80B177F0:
    ctx->pc = 0x80B177F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B177F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B177F0: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B177F4:
    ctx->pc = 0x80B177F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B177F4u)) return;
    // 80B177F4: bl      0x80612BEC
    {
            ctx->lr = 0x80B177F8u;
            ctx->pc = 0x80612BECu;
            return;
    }

label_80B177F8:
    ctx->pc = 0x80B177F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B177F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80B177F8: lis     r3, -27589
    ctx->gpr[3] = ((u32)(s32)(-27589) << 16);

label_80B177FC:
    ctx->pc = 0x80B177FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B177FCu)) return;
    // 80B177FC: addi    r3, r3, 23964
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(23964);

label_80B17800:
    ctx->pc = 0x80B17800u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17800u)) return;
    // 80B17800: lis     r4, -27591
    ctx->gpr[4] = ((u32)(s32)(-27591) << 16);

label_80B17804:
    ctx->pc = 0x80B17804u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17804u)) return;
    // 80B17804: addi    r4, r4, -11928
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-11928);

label_80B17808:
    ctx->pc = 0x80B17808u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17808u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B17808: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B17808u)) return;
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
label_80B1780C:
    ctx->pc = 0x80B1780Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1780Cu)) return;
    // 80B1780C: bl      0x8060DB00
    {
            ctx->lr = 0x80B17810u;
            ctx->pc = 0x8060DB00u;
            return;
    }

label_80B17810:
    ctx->pc = 0x80B17810u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B17810u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B17810: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B17814:
    ctx->pc = 0x80B17814u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17814u)) return;
    // 80B17814: bl      0x80612BEC
    {
            ctx->lr = 0x80B17818u;
            ctx->pc = 0x80612BECu;
            return;
    }

label_80B17818:
    ctx->pc = 0x80B17818u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B17818u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B17818: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B1781C:
    ctx->pc = 0x80B1781Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1781Cu)) return;
    // 80B1781C: bl      0x8004B504
    {
            ctx->lr = 0x80B17820u;
            ctx->pc = 0x8004B504u;
            return;
    }

label_80B17820:
    ctx->pc = 0x80B17820u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B17820u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B17820: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B17824:
    ctx->pc = 0x80B17824u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17824u)) return;
    // 80B17824: bl      0x800494F4
    {
            ctx->lr = 0x80B17828u;
            ctx->pc = 0x800494F4u;
            return;
    }

label_80B17828:
    ctx->pc = 0x80B17828u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B17828u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B17828: lwz     r31, 12(r1)
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
label_80B1782C:
    ctx->pc = 0x80B1782Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1782Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B1782C: lwz     r0, 20(r1)
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
label_80B17830:
    ctx->pc = 0x80B17830u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B17830u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B17830: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B17834:
    ctx->pc = 0x80B17834u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17834u)) return;
    // 80B17834: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B17838:
    ctx->pc = 0x80B17838u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17838u)) return;
    // 80B17838: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B15D00;
        }
    }

label_80B1783C:
    ctx->pc = 0x80B1783Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B1783Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80B1783C: stwu     r1, -80(r1)
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
label_80B17840:
    ctx->pc = 0x80B17840u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17840u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80B17840: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B17844:
    ctx->pc = 0x80B17844u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17844u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80B17844: stw     r0, 84(r1)
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
label_80B17848:
    ctx->pc = 0x80B17848u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17848u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80B17848: stfd     f31, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B17848u)) return;
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
label_80B1784C:
    ctx->pc = 0x80B1784Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1784Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B1784C: psq_st   f31, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80B1784Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80B1784Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B17850:
    ctx->pc = 0x80B17850u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17850u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B17850: stfd     f30, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B17850u)) return;
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
label_80B17854:
    ctx->pc = 0x80B17854u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17854u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B17854: psq_st   f30, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80B17854u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x80B17854u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B17858:
    ctx->pc = 0x80B17858u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17858u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B17858: stw     r31, 44(r1)
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
label_80B1785C:
    ctx->pc = 0x80B1785Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1785Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B1785C: stw     r30, 40(r1)
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
label_80B17860:
    ctx->pc = 0x80B17860u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17860u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B17860: stw     r29, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B17864:
    ctx->pc = 0x80B17864u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17864u)) return;
    // 80B17864: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80B17868:
    ctx->pc = 0x80B17868u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17868u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B17868: lwz     r30, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B1786C:
    ctx->pc = 0x80B1786Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1786Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B1786C: lwz     r31, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B17870:
    ctx->pc = 0x80B17870u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17870u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B17870: lwz     r0, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B17874:
    ctx->pc = 0x80B17874u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17874u)) return;
    // 80B17874: cmplwi  r0, 0x0000
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

label_80B17878:
    ctx->pc = 0x80B17878u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17878u)) return;
    // 80B17878: bc    12, 2, 0x80B17884
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B17884;
        }
    }

label_80B1787C:
    ctx->pc = 0x80B1787Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B1787Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B1787C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80B17880:
    ctx->pc = 0x80B17880u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17880u)) return;
    // 80B17880: bl      0x80461320
    {
            ctx->lr = 0x80B17884u;
            ctx->pc = 0x80461320u;
            return;
    }

label_80B17884:
    ctx->pc = 0x80B17884u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B17884u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B17884: lfs     f31, 32(r30)
    if (!ppc_fp_available_inline(ctx, 0x80B17884u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
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
label_80B17888:
    ctx->pc = 0x80B17888u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17888u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B17888: lfs     f30, 40(r30)
    if (!ppc_fp_available_inline(ctx, 0x80B17888u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
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
label_80B1788C:
    ctx->pc = 0x80B1788Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1788Cu)) return;
    // 80B1788C: fmr    f1, f31
    if (!ppc_fp_available_inline(ctx, 0x80B1788Cu)) return;
    ctx->fpr[1] = ctx->fpr[31];

label_80B17890:
    ctx->pc = 0x80B17890u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17890u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B17890: lfs     f2, 36(r30)
    if (!ppc_fp_available_inline(ctx, 0x80B17890u)) return;
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
label_80B17894:
    ctx->pc = 0x80B17894u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17894u)) return;
    // 80B17894: fmr    f3, f30
    if (!ppc_fp_available_inline(ctx, 0x80B17894u)) return;
    ctx->fpr[3] = ctx->fpr[30];

label_80B17898:
    ctx->pc = 0x80B17898u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17898u)) return;
    // 80B17898: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80B1789C:
    ctx->pc = 0x80B1789Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1789Cu)) return;
    // 80B1789C: bl      0x80401580
    {
            ctx->lr = 0x80B178A0u;
            ctx->pc = 0x80401580u;
            return;
    }

label_80B178A0:
    ctx->pc = 0x80B178A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B178A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B178A0: stfs     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B178A0u)) return;
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
label_80B178A4:
    ctx->pc = 0x80B178A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B178A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B178A4: lbz     r0, 0(r31)
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
label_80B178A8:
    ctx->pc = 0x80B178A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B178A8u)) return;
    // 80B178A8: rlwinm r0, r0, 0, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000001u;
    }

label_80B178AC:
    ctx->pc = 0x80B178ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B178ACu)) return;
    // 80B178AC: cmpwi   r0, 0
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

label_80B178B0:
    ctx->pc = 0x80B178B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B178B0u)) return;
    // 80B178B0: bc    12, 2, 0x80B178CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B178CC;
        }
    }

label_80B178B4:
    ctx->pc = 0x80B178B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B178B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80B178B4: lis     r3, -27591
    ctx->gpr[3] = ((u32)(s32)(-27591) << 16);

label_80B178B8:
    ctx->pc = 0x80B178B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B178B8u)) return;
    // 80B178B8: addi    r3, r3, -11924
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-11924);

label_80B178BC:
    ctx->pc = 0x80B178BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B178BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B178BC: lfs     f2, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B178BCu)) return;
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
label_80B178C0:
    ctx->pc = 0x80B178C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B178C0u)) return;
    // 80B178C0: frsp    f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80B178C0u)) return;
    ppc_frsp(ctx, 0, 1);

label_80B178C4:
    ctx->pc = 0x80B178C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B178C4u)) return;
    // 80B178C4: fadds   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80B178C4u)) return;
    ppc_fadds(ctx, 0, 2, 0);

label_80B178C8:
    ctx->pc = 0x80B178C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B178C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B178C8: stfs     f0, 36(r30)
    if (!ppc_fp_available_inline(ctx, 0x80B178C8u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B178CC:
    ctx->pc = 0x80B178CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B178CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B178CC: lbz     r0, 0(r31)
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
label_80B178D0:
    ctx->pc = 0x80B178D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B178D0u)) return;
    // 80B178D0: rlwinm r0, r0, 0, 30, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000002u;
    }

label_80B178D4:
    ctx->pc = 0x80B178D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B178D4u)) return;
    // 80B178D4: cmpwi   r0, 0
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

label_80B178D8:
    ctx->pc = 0x80B178D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B178D8u)) return;
    // 80B178D8: bc    12, 2, 0x80B178EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B178EC;
        }
    }

label_80B178DC:
    ctx->pc = 0x80B178DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B178DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B178DC: lwz     r0, 8(r1)
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
label_80B178E0:
    ctx->pc = 0x80B178E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B178E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B178E0: stw     r0, 20(r30)
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
label_80B178E4:
    ctx->pc = 0x80B178E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B178E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B178E4: lwz     r0, 16(r1)
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
label_80B178E8:
    ctx->pc = 0x80B178E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B178E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B178E8: stw     r0, 28(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B178EC:
    ctx->pc = 0x80B178ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B178ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B178EC: lfs     f1, 120(r31)
    if (!ppc_fp_available_inline(ctx, 0x80B178ECu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(120);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B178F0:
    ctx->pc = 0x80B178F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B178F0u)) return;
    // 80B178F0: lis     r3, -27591
    ctx->gpr[3] = ((u32)(s32)(-27591) << 16);

label_80B178F4:
    ctx->pc = 0x80B178F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B178F4u)) return;
    // 80B178F4: addi    r3, r3, -11920
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-11920);

label_80B178F8:
    ctx->pc = 0x80B178F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B178F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B178F8: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B178F8u)) return;
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
label_80B178FC:
    ctx->pc = 0x80B178FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B178FCu)) return;
    // 80B178FC: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80B178FCu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80B17900:
    ctx->pc = 0x80B17900u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17900u)) return;
    // 80B17900: bc    4, 1, 0x80B17938
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B17938;
        }
    }

label_80B17904:
    ctx->pc = 0x80B17904u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B17904u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80B17904: stfs     f31, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B17904u)) return;
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
label_80B17908:
    ctx->pc = 0x80B17908u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17908u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B17908: lfs     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B17908u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B1790C:
    ctx->pc = 0x80B1790Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1790Cu)) return;
    // 80B1790C: lis     r3, -27591
    ctx->gpr[3] = ((u32)(s32)(-27591) << 16);

label_80B17910:
    ctx->pc = 0x80B17910u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17910u)) return;
    // 80B17910: addi    r3, r3, -11916
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-11916);

label_80B17914:
    ctx->pc = 0x80B17914u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17914u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B17914: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B17914u)) return;
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
label_80B17918:
    ctx->pc = 0x80B17918u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17918u)) return;
    // 80B17918: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80B17918u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80B1791C:
    ctx->pc = 0x80B1791Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1791Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B1791C: stfs     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B1791Cu)) return;
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
label_80B17920:
    ctx->pc = 0x80B17920u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17920u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B17920: stfs     f30, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B17920u)) return;
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
label_80B17924:
    ctx->pc = 0x80B17924u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17924u)) return;
    // 80B17924: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80B17928:
    ctx->pc = 0x80B17928u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17928u)) return;
    // 80B17928: addi    r4, r1, 20
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(20);

label_80B1792C:
    ctx->pc = 0x80B1792Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1792Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B1792C: lwz     r5, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B17930:
    ctx->pc = 0x80B17930u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17930u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B17930: lfs     f1, 120(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B17930u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(120);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B17934:
    ctx->pc = 0x80B17934u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17934u)) return;
    // 80B17934: bl      0x80400F3C
    {
            ctx->lr = 0x80B17938u;
            ctx->pc = 0x80400F3Cu;
            return;
    }

label_80B17938:
    ctx->pc = 0x80B17938u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B17938u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B17938: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80B1793C:
    ctx->pc = 0x80B1793Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1793Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B1793C: lwz     r4, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B17940:
    ctx->pc = 0x80B17940u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17940u)) return;
    // 80B17940: bl      0x80B17A7C
    {
            ctx->lr = 0x80B17944u;
            goto label_80B17A7C;
    }

label_80B17944:
    ctx->pc = 0x80B17944u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B17944u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B17944: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80B17948:
    ctx->pc = 0x80B17948u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17948u)) return;
    // 80B17948: bl      0x80B176E8
    {
            ctx->lr = 0x80B1794Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80B176E8u;
                return;
            }
            goto label_80B176E8;
    }

label_80B1794C:
    ctx->pc = 0x80B1794Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B1794Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B1794C: psq_l   f31, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80B1794Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80B1794Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B17950:
    ctx->pc = 0x80B17950u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17950u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B17950: lfd     f31, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B17950u)) return;
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
label_80B17954:
    ctx->pc = 0x80B17954u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17954u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B17954: psq_l   f30, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80B17954u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x80B17954u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B17958:
    ctx->pc = 0x80B17958u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17958u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B17958: lfd     f30, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B17958u)) return;
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
label_80B1795C:
    ctx->pc = 0x80B1795Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1795Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B1795C: lwz     r31, 44(r1)
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
label_80B17960:
    ctx->pc = 0x80B17960u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17960u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B17960: lwz     r30, 40(r1)
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
label_80B17964:
    ctx->pc = 0x80B17964u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17964u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B17964: lwz     r29, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B17968:
    ctx->pc = 0x80B17968u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17968u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B17968: lwz     r0, 84(r1)
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
label_80B1796C:
    ctx->pc = 0x80B1796Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B1796Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B1796C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B17970:
    ctx->pc = 0x80B17970u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17970u)) return;
    // 80B17970: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_80B17974:
    ctx->pc = 0x80B17974u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17974u)) return;
    // 80B17974: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B15D00;
        }
    }

label_80B17978:
    ctx->pc = 0x80B17978u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B17978u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80B17978: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_80B1797C:
    ctx->pc = 0x80B1797Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1797Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B1797C: lwz     r4, 32(r3)
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
label_80B17980:
    ctx->pc = 0x80B17980u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17980u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B17980: stw     r0, 8(r4)
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
label_80B17984:
    ctx->pc = 0x80B17984u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17984u)) return;
    // 80B17984: lis     r4, -32591
    ctx->gpr[4] = ((u32)(s32)(-32591) << 16);

label_80B17988:
    ctx->pc = 0x80B17988u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17988u)) return;
    // 80B17988: addi    r0, r4, 30780
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(30780);

label_80B1798C:
    ctx->pc = 0x80B1798Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1798Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B1798C: stw     r0, 16(r3)
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
label_80B17990:
    ctx->pc = 0x80B17990u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17990u)) return;
    // 80B17990: lis     r4, -32591
    ctx->gpr[4] = ((u32)(s32)(-32591) << 16);

label_80B17994:
    ctx->pc = 0x80B17994u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17994u)) return;
    // 80B17994: addi    r0, r4, 30440
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(30440);

label_80B17998:
    ctx->pc = 0x80B17998u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17998u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B17998: stw     r0, 20(r3)
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
label_80B1799C:
    ctx->pc = 0x80B1799Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1799Cu)) return;
    // 80B1799C: lis     r4, -32591
    ctx->gpr[4] = ((u32)(s32)(-32591) << 16);

label_80B179A0:
    ctx->pc = 0x80B179A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B179A0u)) return;
    // 80B179A0: addi    r0, r4, 30400
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(30400);

label_80B179A4:
    ctx->pc = 0x80B179A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B179A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B179A4: stw     r0, 24(r3)
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
label_80B179A8:
    ctx->pc = 0x80B179A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B179A8u)) return;
    // 80B179A8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B15D00;
        }
    }

label_80B179AC:
    ctx->pc = 0x80B179ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B179ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B179AC: stwu     r1, -16(r1)
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
label_80B179B0:
    ctx->pc = 0x80B179B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B179B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B179B0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B179B4:
    ctx->pc = 0x80B179B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B179B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B179B4: stw     r0, 20(r1)
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
label_80B179B8:
    ctx->pc = 0x80B179B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B179B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B179B8: stw     r31, 12(r1)
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
label_80B179BC:
    ctx->pc = 0x80B179BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B179BCu)) return;
    // 80B179BC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B179C0:
    ctx->pc = 0x80B179C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B179C0u)) return;
    // 80B179C0: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80B179C4:
    ctx->pc = 0x80B179C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B179C4u)) return;
    // 80B179C4: lis     r5, -32591
    ctx->gpr[5] = ((u32)(s32)(-32591) << 16);

label_80B179C8:
    ctx->pc = 0x80B179C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B179C8u)) return;
    // 80B179C8: addi    r5, r5, 31096
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(31096);

label_80B179CC:
    ctx->pc = 0x80B179CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B179CCu)) return;
    // 80B179CC: bl      0x8050FD60
    {
            ctx->lr = 0x80B179D0u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80B179D0:
    ctx->pc = 0x80B179D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B179D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B179D0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80B179D4:
    ctx->pc = 0x80B179D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B179D4u)) return;
    // 80B179D4: cmplwi  r31, 0x0000
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

label_80B179D8:
    ctx->pc = 0x80B179D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B179D8u)) return;
    // 80B179D8: bc    12, 2, 0x80B179E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B179E4;
        }
    }

label_80B179DC:
    ctx->pc = 0x80B179DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B179DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B179DC: lwz     r3, 32(r31)
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
label_80B179E0:
    ctx->pc = 0x80B179E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B179E0u)) return;
    // 80B179E0: bl      0x80462174
    {
            ctx->lr = 0x80B179E4u;
            ctx->pc = 0x80462174u;
            return;
    }

label_80B179E4:
    ctx->pc = 0x80B179E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B179E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B179E4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80B179E8:
    ctx->pc = 0x80B179E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B179E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B179E8: lwz     r31, 12(r1)
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
label_80B179EC:
    ctx->pc = 0x80B179ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B179ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B179EC: lwz     r0, 20(r1)
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
label_80B179F0:
    ctx->pc = 0x80B179F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B179F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B179F0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B179F4:
    ctx->pc = 0x80B179F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B179F4u)) return;
    // 80B179F4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B179F8:
    ctx->pc = 0x80B179F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B179F8u)) return;
    // 80B179F8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B15D00;
        }
    }

label_80B179FC:
    ctx->pc = 0x80B179FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B179FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B179FC: cmplwi  r3, 0x0000
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

label_80B17A00:
    ctx->pc = 0x80B17A00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17A00u)) return;
    // 80B17A00: bclr  12, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B15D00;
        }
    }

label_80B17A04:
    ctx->pc = 0x80B17A04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B17A04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B17A04: lwz     r3, 32(r3)
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
label_80B17A08:
    ctx->pc = 0x80B17A08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17A08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B17A08: stw     r4, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B17A0C:
    ctx->pc = 0x80B17A0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17A0Cu)) return;
    // 80B17A0C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B15D00;
        }
    }

label_80B17A10:
    ctx->pc = 0x80B17A10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B17A10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B17A10: stwu     r1, -16(r1)
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
label_80B17A14:
    ctx->pc = 0x80B17A14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17A14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B17A14: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B17A18:
    ctx->pc = 0x80B17A18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17A18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B17A18: stw     r0, 20(r1)
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
label_80B17A1C:
    ctx->pc = 0x80B17A1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17A1Cu)) return;
    // 80B17A1C: lis     r4, -27589
    ctx->gpr[4] = ((u32)(s32)(-27589) << 16);

label_80B17A20:
    ctx->pc = 0x80B17A20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17A20u)) return;
    // 80B17A20: addi    r0, r4, 23908
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(23908);

label_80B17A24:
    ctx->pc = 0x80B17A24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17A24u)) return;
    // 80B17A24: cmplw   r3, r0
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

label_80B17A28:
    ctx->pc = 0x80B17A28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17A28u)) return;
    // 80B17A28: bc    4, 2, 0x80B17A6C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B17A6C;
        }
    }

label_80B17A2C:
    ctx->pc = 0x80B17A2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B17A2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B17A2C: lis     r3, -28635
    ctx->gpr[3] = ((u32)(s32)(-28635) << 16);

label_80B17A30:
    ctx->pc = 0x80B17A30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17A30u)) return;
    // 80B17A30: addi    r3, r3, 18520
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(18520);

label_80B17A34:
    ctx->pc = 0x80B17A34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17A34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B17A34: lwz     r0, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B17A38:
    ctx->pc = 0x80B17A38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17A38u)) return;
    // 80B17A38: cmpwi   r0, 0
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

label_80B17A3C:
    ctx->pc = 0x80B17A3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17A3Cu)) return;
    // 80B17A3C: bc    12, 2, 0x80B17A4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B17A4C;
        }
    }

label_80B17A40:
    ctx->pc = 0x80B17A40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B17A40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B17A40: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B17A44:
    ctx->pc = 0x80B17A44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17A44u)) return;
    // 80B17A44: rlwinm r4, r0, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_80B17A48:
    ctx->pc = 0x80B17A48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17A48u)) return;
    // 80B17A48: bl      0x8004AF5C
    {
            ctx->lr = 0x80B17A4Cu;
            ctx->pc = 0x8004AF5Cu;
            return;
    }

label_80B17A4C:
    ctx->pc = 0x80B17A4Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B17A4Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B17A4C: lis     r3, -28635
    ctx->gpr[3] = ((u32)(s32)(-28635) << 16);

label_80B17A50:
    ctx->pc = 0x80B17A50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17A50u)) return;
    // 80B17A50: addi    r3, r3, 18520
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(18520);

label_80B17A54:
    ctx->pc = 0x80B17A54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17A54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B17A54: lwz     r0, 24(r3)
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
label_80B17A58:
    ctx->pc = 0x80B17A58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17A58u)) return;
    // 80B17A58: cmpwi   r0, 0
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

label_80B17A5C:
    ctx->pc = 0x80B17A5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17A5Cu)) return;
    // 80B17A5C: bc    12, 2, 0x80B17A6C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B17A6C;
        }
    }

label_80B17A60:
    ctx->pc = 0x80B17A60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B17A60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B17A60: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B17A64:
    ctx->pc = 0x80B17A64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17A64u)) return;
    // 80B17A64: rlwinm r4, r0, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_80B17A68:
    ctx->pc = 0x80B17A68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17A68u)) return;
    // 80B17A68: bl      0x8004B3E0
    {
            ctx->lr = 0x80B17A6Cu;
            ctx->pc = 0x8004B3E0u;
            return;
    }

label_80B17A6C:
    ctx->pc = 0x80B17A6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B17A6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B17A6C: lwz     r0, 20(r1)
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
label_80B17A70:
    ctx->pc = 0x80B17A70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B17A70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B17A70: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B17A74:
    ctx->pc = 0x80B17A74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17A74u)) return;
    // 80B17A74: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B17A78:
    ctx->pc = 0x80B17A78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17A78u)) return;
    // 80B17A78: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B15D00;
        }
    }

label_80B17A7C:
    ctx->pc = 0x80B17A7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B17A7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    // 80B17A7C: lis     r3, -27589
    ctx->gpr[3] = ((u32)(s32)(-27589) << 16);

label_80B17A80:
    ctx->pc = 0x80B17A80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17A80u)) return;
    // 80B17A80: addi    r3, r3, 16440
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(16440);

label_80B17A84:
    ctx->pc = 0x80B17A84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17A84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B17A84: lwz     r3, 4(r3)
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
label_80B17A88:
    ctx->pc = 0x80B17A88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17A88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B17A88: lwz     r3, 16(r3)
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
label_80B17A8C:
    ctx->pc = 0x80B17A8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17A8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B17A8C: stw     r4, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B17A90:
    ctx->pc = 0x80B17A90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17A90u)) return;
    // 80B17A90: lis     r3, -27589
    ctx->gpr[3] = ((u32)(s32)(-27589) << 16);

label_80B17A94:
    ctx->pc = 0x80B17A94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17A94u)) return;
    // 80B17A94: addi    r3, r3, 17348
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(17348);

label_80B17A98:
    ctx->pc = 0x80B17A98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17A98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B17A98: lwz     r3, 4(r3)
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
label_80B17A9C:
    ctx->pc = 0x80B17A9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17A9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B17A9C: lwz     r3, 16(r3)
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
label_80B17AA0:
    ctx->pc = 0x80B17AA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17AA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B17AA0: stw     r4, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B17AA4:
    ctx->pc = 0x80B17AA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B17AA4u)) return;
    // 80B17AA4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B15D00;
        }
    }

    ctx->pc = 0x80B17AA8u;
    return;
return_dispatch_80B15D00:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80B15D38u: goto label_80B15D38;
    case 0x80B15D44u: goto label_80B15D44;
    case 0x80B15D4Cu: goto label_80B15D4C;
    case 0x80B15D50u: goto label_80B15D50;
    case 0x80B15D54u: goto label_80B15D54;
    case 0x80B15D58u: goto label_80B15D58;
    case 0x80B15D9Cu: goto label_80B15D9C;
    case 0x80B15DE0u: goto label_80B15DE0;
    case 0x80B15E24u: goto label_80B15E24;
    case 0x80B15E6Cu: goto label_80B15E6C;
    case 0x80B15EB0u: goto label_80B15EB0;
    case 0x80B15EF4u: goto label_80B15EF4;
    case 0x80B15F38u: goto label_80B15F38;
    case 0x80B15F80u: goto label_80B15F80;
    case 0x80B15FC8u: goto label_80B15FC8;
    case 0x80B1600Cu: goto label_80B1600C;
    case 0x80B16014u: goto label_80B16014;
    case 0x80B16048u: goto label_80B16048;
    case 0x80B1607Cu: goto label_80B1607C;
    case 0x80B160B0u: goto label_80B160B0;
    case 0x80B160E4u: goto label_80B160E4;
    case 0x80B16118u: goto label_80B16118;
    case 0x80B1614Cu: goto label_80B1614C;
    case 0x80B16180u: goto label_80B16180;
    case 0x80B161B4u: goto label_80B161B4;
    case 0x80B161E8u: goto label_80B161E8;
    case 0x80B1621Cu: goto label_80B1621C;
    case 0x80B16224u: goto label_80B16224;
    case 0x80B1624Cu: goto label_80B1624C;
    case 0x80B16254u: goto label_80B16254;
    case 0x80B16268u: goto label_80B16268;
    case 0x80B162ACu: goto label_80B162AC;
    case 0x80B162B4u: goto label_80B162B4;
    case 0x80B162BCu: goto label_80B162BC;
    case 0x80B162E4u: goto label_80B162E4;
    case 0x80B162ECu: goto label_80B162EC;
    case 0x80B16300u: goto label_80B16300;
    case 0x80B16308u: goto label_80B16308;
    case 0x80B16318u: goto label_80B16318;
    case 0x80B16328u: goto label_80B16328;
    case 0x80B16338u: goto label_80B16338;
    case 0x80B16340u: goto label_80B16340;
    case 0x80B16368u: goto label_80B16368;
    case 0x80B16370u: goto label_80B16370;
    case 0x80B16398u: goto label_80B16398;
    case 0x80B163C8u: goto label_80B163C8;
    case 0x80B163E4u: goto label_80B163E4;
    case 0x80B16414u: goto label_80B16414;
    case 0x80B1641Cu: goto label_80B1641C;
    case 0x80B1644Cu: goto label_80B1644C;
    case 0x80B16468u: goto label_80B16468;
    case 0x80B16498u: goto label_80B16498;
    case 0x80B164A0u: goto label_80B164A0;
    case 0x80B164D0u: goto label_80B164D0;
    case 0x80B164ECu: goto label_80B164EC;
    case 0x80B164F4u: goto label_80B164F4;
    case 0x80B16524u: goto label_80B16524;
    case 0x80B1653Cu: goto label_80B1653C;
    case 0x80B1656Cu: goto label_80B1656C;
    case 0x80B16574u: goto label_80B16574;
    case 0x80B165A4u: goto label_80B165A4;
    case 0x80B165BCu: goto label_80B165BC;
    case 0x80B165C4u: goto label_80B165C4;
    case 0x80B165CCu: goto label_80B165CC;
    case 0x80B165F0u: goto label_80B165F0;
    case 0x80B165F8u: goto label_80B165F8;
    case 0x80B165FCu: goto label_80B165FC;
    case 0x80B16600u: goto label_80B16600;
    case 0x80B16608u: goto label_80B16608;
    case 0x80B16610u: goto label_80B16610;
    case 0x80B16638u: goto label_80B16638;
    case 0x80B16640u: goto label_80B16640;
    case 0x80B16648u: goto label_80B16648;
    case 0x80B16650u: goto label_80B16650;
    case 0x80B1665Cu: goto label_80B1665C;
    case 0x80B16680u: goto label_80B16680;
    case 0x80B16688u: goto label_80B16688;
    case 0x80B1668Cu: goto label_80B1668C;
    case 0x80B16690u: goto label_80B16690;
    case 0x80B16698u: goto label_80B16698;
    case 0x80B1669Cu: goto label_80B1669C;
    case 0x80B166ACu: goto label_80B166AC;
    case 0x80B166BCu: goto label_80B166BC;
    case 0x80B166ECu: goto label_80B166EC;
    case 0x80B16708u: goto label_80B16708;
    case 0x80B16710u: goto label_80B16710;
    case 0x80B16714u: goto label_80B16714;
    case 0x80B16744u: goto label_80B16744;
    case 0x80B1674Cu: goto label_80B1674C;
    case 0x80B1675Cu: goto label_80B1675C;
    case 0x80B16764u: goto label_80B16764;
    case 0x80B16794u: goto label_80B16794;
    case 0x80B167B0u: goto label_80B167B0;
    case 0x80B167B8u: goto label_80B167B8;
    case 0x80B167C0u: goto label_80B167C0;
    case 0x80B167CCu: goto label_80B167CC;
    case 0x80B167F0u: goto label_80B167F0;
    case 0x80B167F8u: goto label_80B167F8;
    case 0x80B167FCu: goto label_80B167FC;
    case 0x80B16800u: goto label_80B16800;
    case 0x80B16808u: goto label_80B16808;
    case 0x80B1680Cu: goto label_80B1680C;
    case 0x80B16820u: goto label_80B16820;
    case 0x80B16828u: goto label_80B16828;
    case 0x80B16830u: goto label_80B16830;
    case 0x80B16858u: goto label_80B16858;
    case 0x80B16860u: goto label_80B16860;
    case 0x80B1686Cu: goto label_80B1686C;
    case 0x80B16874u: goto label_80B16874;
    case 0x80B16898u: goto label_80B16898;
    case 0x80B168B4u: goto label_80B168B4;
    case 0x80B168BCu: goto label_80B168BC;
    case 0x80B168C0u: goto label_80B168C0;
    case 0x80B168C8u: goto label_80B168C8;
    case 0x80B168CCu: goto label_80B168CC;
    case 0x80B168D0u: goto label_80B168D0;
    case 0x80B168D8u: goto label_80B168D8;
    case 0x80B168DCu: goto label_80B168DC;
    case 0x80B168E4u: goto label_80B168E4;
    case 0x80B168ECu: goto label_80B168EC;
    case 0x80B16914u: goto label_80B16914;
    case 0x80B1691Cu: goto label_80B1691C;
    case 0x80B16920u: goto label_80B16920;
    case 0x80B16928u: goto label_80B16928;
    case 0x80B16950u: goto label_80B16950;
    case 0x80B16958u: goto label_80B16958;
    case 0x80B16960u: goto label_80B16960;
    case 0x80B16964u: goto label_80B16964;
    case 0x80B16994u: goto label_80B16994;
    case 0x80B169B0u: goto label_80B169B0;
    case 0x80B169B8u: goto label_80B169B8;
    case 0x80B169CCu: goto label_80B169CC;
    case 0x80B169D4u: goto label_80B169D4;
    case 0x80B169DCu: goto label_80B169DC;
    case 0x80B16A04u: goto label_80B16A04;
    case 0x80B16A0Cu: goto label_80B16A0C;
    case 0x80B16A14u: goto label_80B16A14;
    case 0x80B16A3Cu: goto label_80B16A3C;
    case 0x80B16A44u: goto label_80B16A44;
    case 0x80B16A74u: goto label_80B16A74;
    case 0x80B16A90u: goto label_80B16A90;
    case 0x80B16AA0u: goto label_80B16AA0;
    case 0x80B16AA8u: goto label_80B16AA8;
    case 0x80B16AD0u: goto label_80B16AD0;
    case 0x80B16AD8u: goto label_80B16AD8;
    case 0x80B16AECu: goto label_80B16AEC;
    case 0x80B16AF4u: goto label_80B16AF4;
    case 0x80B16AF8u: goto label_80B16AF8;
    case 0x80B16B00u: goto label_80B16B00;
    case 0x80B16B04u: goto label_80B16B04;
    case 0x80B16B0Cu: goto label_80B16B0C;
    case 0x80B16B10u: goto label_80B16B10;
    case 0x80B16B18u: goto label_80B16B18;
    case 0x80B16B1Cu: goto label_80B16B1C;
    case 0x80B16B24u: goto label_80B16B24;
    case 0x80B16B2Cu: goto label_80B16B2C;
    case 0x80B16B54u: goto label_80B16B54;
    case 0x80B16B5Cu: goto label_80B16B5C;
    case 0x80B16B70u: goto label_80B16B70;
    case 0x80B16BA0u: goto label_80B16BA0;
    case 0x80B16BBCu: goto label_80B16BBC;
    case 0x80B16BECu: goto label_80B16BEC;
    case 0x80B16BFCu: goto label_80B16BFC;
    case 0x80B16C04u: goto label_80B16C04;
    case 0x80B16C0Cu: goto label_80B16C0C;
    case 0x80B16C14u: goto label_80B16C14;
    case 0x80B16C24u: goto label_80B16C24;
    case 0x80B16C54u: goto label_80B16C54;
    case 0x80B16C68u: goto label_80B16C68;
    case 0x80B16C70u: goto label_80B16C70;
    case 0x80B16C78u: goto label_80B16C78;
    case 0x80B16C7Cu: goto label_80B16C7C;
    case 0x80B16C80u: goto label_80B16C80;
    case 0x80B16C84u: goto label_80B16C84;
    case 0x80B16C90u: goto label_80B16C90;
    case 0x80B16C9Cu: goto label_80B16C9C;
    case 0x80B16CA8u: goto label_80B16CA8;
    case 0x80B16CB4u: goto label_80B16CB4;
    case 0x80B16CC0u: goto label_80B16CC0;
    case 0x80B16CCCu: goto label_80B16CCC;
    case 0x80B16CD8u: goto label_80B16CD8;
    case 0x80B16CE4u: goto label_80B16CE4;
    case 0x80B16CF0u: goto label_80B16CF0;
    case 0x80B16CFCu: goto label_80B16CFC;
    case 0x80B16D04u: goto label_80B16D04;
    case 0x80B16D0Cu: goto label_80B16D0C;
    case 0x80B16D24u: goto label_80B16D24;
    case 0x80B16D58u: goto label_80B16D58;
    case 0x80B16DE4u: goto label_80B16DE4;
    case 0x80B16DF0u: goto label_80B16DF0;
    case 0x80B16E80u: goto label_80B16E80;
    case 0x80B16E88u: goto label_80B16E88;
    case 0x80B16EF0u: goto label_80B16EF0;
    case 0x80B16F38u: goto label_80B16F38;
    case 0x80B16FA4u: goto label_80B16FA4;
    case 0x80B17050u: goto label_80B17050;
    case 0x80B17078u: goto label_80B17078;
    case 0x80B170D8u: goto label_80B170D8;
    case 0x80B17118u: goto label_80B17118;
    case 0x80B17158u: goto label_80B17158;
    case 0x80B171B4u: goto label_80B171B4;
    case 0x80B171D8u: goto label_80B171D8;
    case 0x80B17274u: goto label_80B17274;
    case 0x80B172C4u: goto label_80B172C4;
    case 0x80B17314u: goto label_80B17314;
    case 0x80B17360u: goto label_80B17360;
    case 0x80B173E4u: goto label_80B173E4;
    case 0x80B17408u: goto label_80B17408;
    case 0x80B17484u: goto label_80B17484;
    case 0x80B174ECu: goto label_80B174EC;
    case 0x80B17554u: goto label_80B17554;
    case 0x80B175A4u: goto label_80B175A4;
    case 0x80B175F4u: goto label_80B175F4;
    case 0x80B17638u: goto label_80B17638;
    case 0x80B17660u: goto label_80B17660;
    case 0x80B1766Cu: goto label_80B1766C;
    case 0x80B17678u: goto label_80B17678;
    case 0x80B17684u: goto label_80B17684;
    case 0x80B176D8u: goto label_80B176D8;
    case 0x80B17708u: goto label_80B17708;
    case 0x80B17720u: goto label_80B17720;
    case 0x80B1772Cu: goto label_80B1772C;
    case 0x80B17744u: goto label_80B17744;
    case 0x80B1775Cu: goto label_80B1775C;
    case 0x80B17774u: goto label_80B17774;
    case 0x80B1777Cu: goto label_80B1777C;
    case 0x80B17784u: goto label_80B17784;
    case 0x80B17790u: goto label_80B17790;
    case 0x80B1779Cu: goto label_80B1779C;
    case 0x80B177B4u: goto label_80B177B4;
    case 0x80B177CCu: goto label_80B177CC;
    case 0x80B177E4u: goto label_80B177E4;
    case 0x80B177F0u: goto label_80B177F0;
    case 0x80B177F8u: goto label_80B177F8;
    case 0x80B17810u: goto label_80B17810;
    case 0x80B17818u: goto label_80B17818;
    case 0x80B17820u: goto label_80B17820;
    case 0x80B17828u: goto label_80B17828;
    case 0x80B17884u: goto label_80B17884;
    case 0x80B178A0u: goto label_80B178A0;
    case 0x80B17938u: goto label_80B17938;
    case 0x80B17944u: goto label_80B17944;
    case 0x80B1794Cu: goto label_80B1794C;
    case 0x80B179D0u: goto label_80B179D0;
    case 0x80B179E4u: goto label_80B179E4;
    case 0x80B17A4Cu: goto label_80B17A4C;
    case 0x80B17A6Cu: goto label_80B17A6C;
    default: return;
    }
}

