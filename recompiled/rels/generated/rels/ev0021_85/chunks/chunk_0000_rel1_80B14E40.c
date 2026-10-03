// DolRecomp output
#include "../generated.h"

void func_80B14E40(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80B14E40[941] = {
        &&label_80B14E40,
        &&label_80B14E44,
        &&label_80B14E48,
        &&label_80B14E4C,
        &&label_80B14E50,
        &&label_80B14E54,
        &&label_80B14E58,
        &&label_80B14E5C,
        &&label_80B14E60,
        &&label_80B14E64,
        &&label_80B14E68,
        &&label_80B14E6C,
        &&label_80B14E70,
        &&label_80B14E74,
        &&label_80B14E78,
        &&label_80B14E7C,
        &&label_80B14E80,
        &&label_80B14E84,
        &&label_80B14E88,
        &&label_80B14E8C,
        &&label_80B14E90,
        &&label_80B14E94,
        &&label_80B14E98,
        &&label_80B14E9C,
        &&label_80B14EA0,
        &&label_80B14EA4,
        &&label_80B14EA8,
        &&label_80B14EAC,
        &&label_80B14EB0,
        &&label_80B14EB4,
        &&label_80B14EB8,
        &&label_80B14EBC,
        &&label_80B14EC0,
        &&label_80B14EC4,
        &&label_80B14EC8,
        &&label_80B14ECC,
        &&label_80B14ED0,
        &&label_80B14ED4,
        &&label_80B14ED8,
        &&label_80B14EDC,
        &&label_80B14EE0,
        &&label_80B14EE4,
        &&label_80B14EE8,
        &&label_80B14EEC,
        &&label_80B14EF0,
        &&label_80B14EF4,
        &&label_80B14EF8,
        &&label_80B14EFC,
        &&label_80B14F00,
        &&label_80B14F04,
        &&label_80B14F08,
        &&label_80B14F0C,
        &&label_80B14F10,
        &&label_80B14F14,
        &&label_80B14F18,
        &&label_80B14F1C,
        &&label_80B14F20,
        &&label_80B14F24,
        &&label_80B14F28,
        &&label_80B14F2C,
        &&label_80B14F30,
        &&label_80B14F34,
        &&label_80B14F38,
        &&label_80B14F3C,
        &&label_80B14F40,
        &&label_80B14F44,
        &&label_80B14F48,
        &&label_80B14F4C,
        &&label_80B14F50,
        &&label_80B14F54,
        &&label_80B14F58,
        &&label_80B14F5C,
        &&label_80B14F60,
        &&label_80B14F64,
        &&label_80B14F68,
        &&label_80B14F6C,
        &&label_80B14F70,
        &&label_80B14F74,
        &&label_80B14F78,
        &&label_80B14F7C,
        &&label_80B14F80,
        &&label_80B14F84,
        &&label_80B14F88,
        &&label_80B14F8C,
        &&label_80B14F90,
        &&label_80B14F94,
        &&label_80B14F98,
        &&label_80B14F9C,
        &&label_80B14FA0,
        &&label_80B14FA4,
        &&label_80B14FA8,
        &&label_80B14FAC,
        &&label_80B14FB0,
        &&label_80B14FB4,
        &&label_80B14FB8,
        &&label_80B14FBC,
        &&label_80B14FC0,
        &&label_80B14FC4,
        &&label_80B14FC8,
        &&label_80B14FCC,
        &&label_80B14FD0,
        &&label_80B14FD4,
        &&label_80B14FD8,
        &&label_80B14FDC,
        &&label_80B14FE0,
        &&label_80B14FE4,
        &&label_80B14FE8,
        &&label_80B14FEC,
        &&label_80B14FF0,
        &&label_80B14FF4,
        &&label_80B14FF8,
        &&label_80B14FFC,
        &&label_80B15000,
        &&label_80B15004,
        &&label_80B15008,
        &&label_80B1500C,
        &&label_80B15010,
        &&label_80B15014,
        &&label_80B15018,
        &&label_80B1501C,
        &&label_80B15020,
        &&label_80B15024,
        &&label_80B15028,
        &&label_80B1502C,
        &&label_80B15030,
        &&label_80B15034,
        &&label_80B15038,
        &&label_80B1503C,
        &&label_80B15040,
        &&label_80B15044,
        &&label_80B15048,
        &&label_80B1504C,
        &&label_80B15050,
        &&label_80B15054,
        &&label_80B15058,
        &&label_80B1505C,
        &&label_80B15060,
        &&label_80B15064,
        &&label_80B15068,
        &&label_80B1506C,
        &&label_80B15070,
        &&label_80B15074,
        &&label_80B15078,
        &&label_80B1507C,
        &&label_80B15080,
        &&label_80B15084,
        &&label_80B15088,
        &&label_80B1508C,
        &&label_80B15090,
        &&label_80B15094,
        &&label_80B15098,
        &&label_80B1509C,
        &&label_80B150A0,
        &&label_80B150A4,
        &&label_80B150A8,
        &&label_80B150AC,
        &&label_80B150B0,
        &&label_80B150B4,
        &&label_80B150B8,
        &&label_80B150BC,
        &&label_80B150C0,
        &&label_80B150C4,
        &&label_80B150C8,
        &&label_80B150CC,
        &&label_80B150D0,
        &&label_80B150D4,
        &&label_80B150D8,
        &&label_80B150DC,
        &&label_80B150E0,
        &&label_80B150E4,
        &&label_80B150E8,
        &&label_80B150EC,
        &&label_80B150F0,
        &&label_80B150F4,
        &&label_80B150F8,
        &&label_80B150FC,
        &&label_80B15100,
        &&label_80B15104,
        &&label_80B15108,
        &&label_80B1510C,
        &&label_80B15110,
        &&label_80B15114,
        &&label_80B15118,
        &&label_80B1511C,
        &&label_80B15120,
        &&label_80B15124,
        &&label_80B15128,
        &&label_80B1512C,
        &&label_80B15130,
        &&label_80B15134,
        &&label_80B15138,
        &&label_80B1513C,
        &&label_80B15140,
        &&label_80B15144,
        &&label_80B15148,
        &&label_80B1514C,
        &&label_80B15150,
        &&label_80B15154,
        &&label_80B15158,
        &&label_80B1515C,
        &&label_80B15160,
        &&label_80B15164,
        &&label_80B15168,
        &&label_80B1516C,
        &&label_80B15170,
        &&label_80B15174,
        &&label_80B15178,
        &&label_80B1517C,
        &&label_80B15180,
        &&label_80B15184,
        &&label_80B15188,
        &&label_80B1518C,
        &&label_80B15190,
        &&label_80B15194,
        &&label_80B15198,
        &&label_80B1519C,
        &&label_80B151A0,
        &&label_80B151A4,
        &&label_80B151A8,
        &&label_80B151AC,
        &&label_80B151B0,
        &&label_80B151B4,
        &&label_80B151B8,
        &&label_80B151BC,
        &&label_80B151C0,
        &&label_80B151C4,
        &&label_80B151C8,
        &&label_80B151CC,
        &&label_80B151D0,
        &&label_80B151D4,
        &&label_80B151D8,
        &&label_80B151DC,
        &&label_80B151E0,
        &&label_80B151E4,
        &&label_80B151E8,
        &&label_80B151EC,
        &&label_80B151F0,
        &&label_80B151F4,
        &&label_80B151F8,
        &&label_80B151FC,
        &&label_80B15200,
        &&label_80B15204,
        &&label_80B15208,
        &&label_80B1520C,
        &&label_80B15210,
        &&label_80B15214,
        &&label_80B15218,
        &&label_80B1521C,
        &&label_80B15220,
        &&label_80B15224,
        &&label_80B15228,
        &&label_80B1522C,
        &&label_80B15230,
        &&label_80B15234,
        &&label_80B15238,
        &&label_80B1523C,
        &&label_80B15240,
        &&label_80B15244,
        &&label_80B15248,
        &&label_80B1524C,
        &&label_80B15250,
        &&label_80B15254,
        &&label_80B15258,
        &&label_80B1525C,
        &&label_80B15260,
        &&label_80B15264,
        &&label_80B15268,
        &&label_80B1526C,
        &&label_80B15270,
        &&label_80B15274,
        &&label_80B15278,
        &&label_80B1527C,
        &&label_80B15280,
        &&label_80B15284,
        &&label_80B15288,
        &&label_80B1528C,
        &&label_80B15290,
        &&label_80B15294,
        &&label_80B15298,
        &&label_80B1529C,
        &&label_80B152A0,
        &&label_80B152A4,
        &&label_80B152A8,
        &&label_80B152AC,
        &&label_80B152B0,
        &&label_80B152B4,
        &&label_80B152B8,
        &&label_80B152BC,
        &&label_80B152C0,
        &&label_80B152C4,
        &&label_80B152C8,
        &&label_80B152CC,
        &&label_80B152D0,
        &&label_80B152D4,
        &&label_80B152D8,
        &&label_80B152DC,
        &&label_80B152E0,
        &&label_80B152E4,
        &&label_80B152E8,
        &&label_80B152EC,
        &&label_80B152F0,
        &&label_80B152F4,
        &&label_80B152F8,
        &&label_80B152FC,
        &&label_80B15300,
        &&label_80B15304,
        &&label_80B15308,
        &&label_80B1530C,
        &&label_80B15310,
        &&label_80B15314,
        &&label_80B15318,
        &&label_80B1531C,
        &&label_80B15320,
        &&label_80B15324,
        &&label_80B15328,
        &&label_80B1532C,
        &&label_80B15330,
        &&label_80B15334,
        &&label_80B15338,
        &&label_80B1533C,
        &&label_80B15340,
        &&label_80B15344,
        &&label_80B15348,
        &&label_80B1534C,
        &&label_80B15350,
        &&label_80B15354,
        &&label_80B15358,
        &&label_80B1535C,
        &&label_80B15360,
        &&label_80B15364,
        &&label_80B15368,
        &&label_80B1536C,
        &&label_80B15370,
        &&label_80B15374,
        &&label_80B15378,
        &&label_80B1537C,
        &&label_80B15380,
        &&label_80B15384,
        &&label_80B15388,
        &&label_80B1538C,
        &&label_80B15390,
        &&label_80B15394,
        &&label_80B15398,
        &&label_80B1539C,
        &&label_80B153A0,
        &&label_80B153A4,
        &&label_80B153A8,
        &&label_80B153AC,
        &&label_80B153B0,
        &&label_80B153B4,
        &&label_80B153B8,
        &&label_80B153BC,
        &&label_80B153C0,
        &&label_80B153C4,
        &&label_80B153C8,
        &&label_80B153CC,
        &&label_80B153D0,
        &&label_80B153D4,
        &&label_80B153D8,
        &&label_80B153DC,
        &&label_80B153E0,
        &&label_80B153E4,
        &&label_80B153E8,
        &&label_80B153EC,
        &&label_80B153F0,
        &&label_80B153F4,
        &&label_80B153F8,
        &&label_80B153FC,
        &&label_80B15400,
        &&label_80B15404,
        &&label_80B15408,
        &&label_80B1540C,
        &&label_80B15410,
        &&label_80B15414,
        &&label_80B15418,
        &&label_80B1541C,
        &&label_80B15420,
        &&label_80B15424,
        &&label_80B15428,
        &&label_80B1542C,
        &&label_80B15430,
        &&label_80B15434,
        &&label_80B15438,
        &&label_80B1543C,
        &&label_80B15440,
        &&label_80B15444,
        &&label_80B15448,
        &&label_80B1544C,
        &&label_80B15450,
        &&label_80B15454,
        &&label_80B15458,
        &&label_80B1545C,
        &&label_80B15460,
        &&label_80B15464,
        &&label_80B15468,
        &&label_80B1546C,
        &&label_80B15470,
        &&label_80B15474,
        &&label_80B15478,
        &&label_80B1547C,
        &&label_80B15480,
        &&label_80B15484,
        &&label_80B15488,
        &&label_80B1548C,
        &&label_80B15490,
        &&label_80B15494,
        &&label_80B15498,
        &&label_80B1549C,
        &&label_80B154A0,
        &&label_80B154A4,
        &&label_80B154A8,
        &&label_80B154AC,
        &&label_80B154B0,
        &&label_80B154B4,
        &&label_80B154B8,
        &&label_80B154BC,
        &&label_80B154C0,
        &&label_80B154C4,
        &&label_80B154C8,
        &&label_80B154CC,
        &&label_80B154D0,
        &&label_80B154D4,
        &&label_80B154D8,
        &&label_80B154DC,
        &&label_80B154E0,
        &&label_80B154E4,
        &&label_80B154E8,
        &&label_80B154EC,
        &&label_80B154F0,
        &&label_80B154F4,
        &&label_80B154F8,
        &&label_80B154FC,
        &&label_80B15500,
        &&label_80B15504,
        &&label_80B15508,
        &&label_80B1550C,
        &&label_80B15510,
        &&label_80B15514,
        &&label_80B15518,
        &&label_80B1551C,
        &&label_80B15520,
        &&label_80B15524,
        &&label_80B15528,
        &&label_80B1552C,
        &&label_80B15530,
        &&label_80B15534,
        &&label_80B15538,
        &&label_80B1553C,
        &&label_80B15540,
        &&label_80B15544,
        &&label_80B15548,
        &&label_80B1554C,
        &&label_80B15550,
        &&label_80B15554,
        &&label_80B15558,
        &&label_80B1555C,
        &&label_80B15560,
        &&label_80B15564,
        &&label_80B15568,
        &&label_80B1556C,
        &&label_80B15570,
        &&label_80B15574,
        &&label_80B15578,
        &&label_80B1557C,
        &&label_80B15580,
        &&label_80B15584,
        &&label_80B15588,
        &&label_80B1558C,
        &&label_80B15590,
        &&label_80B15594,
        &&label_80B15598,
        &&label_80B1559C,
        &&label_80B155A0,
        &&label_80B155A4,
        &&label_80B155A8,
        &&label_80B155AC,
        &&label_80B155B0,
        &&label_80B155B4,
        &&label_80B155B8,
        &&label_80B155BC,
        &&label_80B155C0,
        &&label_80B155C4,
        &&label_80B155C8,
        &&label_80B155CC,
        &&label_80B155D0,
        &&label_80B155D4,
        &&label_80B155D8,
        &&label_80B155DC,
        &&label_80B155E0,
        &&label_80B155E4,
        &&label_80B155E8,
        &&label_80B155EC,
        &&label_80B155F0,
        &&label_80B155F4,
        &&label_80B155F8,
        &&label_80B155FC,
        &&label_80B15600,
        &&label_80B15604,
        &&label_80B15608,
        &&label_80B1560C,
        &&label_80B15610,
        &&label_80B15614,
        &&label_80B15618,
        &&label_80B1561C,
        &&label_80B15620,
        &&label_80B15624,
        &&label_80B15628,
        &&label_80B1562C,
        &&label_80B15630,
        &&label_80B15634,
        &&label_80B15638,
        &&label_80B1563C,
        &&label_80B15640,
        &&label_80B15644,
        &&label_80B15648,
        &&label_80B1564C,
        &&label_80B15650,
        &&label_80B15654,
        &&label_80B15658,
        &&label_80B1565C,
        &&label_80B15660,
        &&label_80B15664,
        &&label_80B15668,
        &&label_80B1566C,
        &&label_80B15670,
        &&label_80B15674,
        &&label_80B15678,
        &&label_80B1567C,
        &&label_80B15680,
        &&label_80B15684,
        &&label_80B15688,
        &&label_80B1568C,
        &&label_80B15690,
        &&label_80B15694,
        &&label_80B15698,
        &&label_80B1569C,
        &&label_80B156A0,
        &&label_80B156A4,
        &&label_80B156A8,
        &&label_80B156AC,
        &&label_80B156B0,
        &&label_80B156B4,
        &&label_80B156B8,
        &&label_80B156BC,
        &&label_80B156C0,
        &&label_80B156C4,
        &&label_80B156C8,
        &&label_80B156CC,
        &&label_80B156D0,
        &&label_80B156D4,
        &&label_80B156D8,
        &&label_80B156DC,
        &&label_80B156E0,
        &&label_80B156E4,
        &&label_80B156E8,
        &&label_80B156EC,
        &&label_80B156F0,
        &&label_80B156F4,
        &&label_80B156F8,
        &&label_80B156FC,
        &&label_80B15700,
        &&label_80B15704,
        &&label_80B15708,
        &&label_80B1570C,
        &&label_80B15710,
        &&label_80B15714,
        &&label_80B15718,
        &&label_80B1571C,
        &&label_80B15720,
        &&label_80B15724,
        &&label_80B15728,
        &&label_80B1572C,
        &&label_80B15730,
        &&label_80B15734,
        &&label_80B15738,
        &&label_80B1573C,
        &&label_80B15740,
        &&label_80B15744,
        &&label_80B15748,
        &&label_80B1574C,
        &&label_80B15750,
        &&label_80B15754,
        &&label_80B15758,
        &&label_80B1575C,
        &&label_80B15760,
        &&label_80B15764,
        &&label_80B15768,
        &&label_80B1576C,
        &&label_80B15770,
        &&label_80B15774,
        &&label_80B15778,
        &&label_80B1577C,
        &&label_80B15780,
        &&label_80B15784,
        &&label_80B15788,
        &&label_80B1578C,
        &&label_80B15790,
        &&label_80B15794,
        &&label_80B15798,
        &&label_80B1579C,
        &&label_80B157A0,
        &&label_80B157A4,
        &&label_80B157A8,
        &&label_80B157AC,
        &&label_80B157B0,
        &&label_80B157B4,
        &&label_80B157B8,
        &&label_80B157BC,
        &&label_80B157C0,
        &&label_80B157C4,
        &&label_80B157C8,
        &&label_80B157CC,
        &&label_80B157D0,
        &&label_80B157D4,
        &&label_80B157D8,
        &&label_80B157DC,
        &&label_80B157E0,
        &&label_80B157E4,
        &&label_80B157E8,
        &&label_80B157EC,
        &&label_80B157F0,
        &&label_80B157F4,
        &&label_80B157F8,
        &&label_80B157FC,
        &&label_80B15800,
        &&label_80B15804,
        &&label_80B15808,
        &&label_80B1580C,
        &&label_80B15810,
        &&label_80B15814,
        &&label_80B15818,
        &&label_80B1581C,
        &&label_80B15820,
        &&label_80B15824,
        &&label_80B15828,
        &&label_80B1582C,
        &&label_80B15830,
        &&label_80B15834,
        &&label_80B15838,
        &&label_80B1583C,
        &&label_80B15840,
        &&label_80B15844,
        &&label_80B15848,
        &&label_80B1584C,
        &&label_80B15850,
        &&label_80B15854,
        &&label_80B15858,
        &&label_80B1585C,
        &&label_80B15860,
        &&label_80B15864,
        &&label_80B15868,
        &&label_80B1586C,
        &&label_80B15870,
        &&label_80B15874,
        &&label_80B15878,
        &&label_80B1587C,
        &&label_80B15880,
        &&label_80B15884,
        &&label_80B15888,
        &&label_80B1588C,
        &&label_80B15890,
        &&label_80B15894,
        &&label_80B15898,
        &&label_80B1589C,
        &&label_80B158A0,
        &&label_80B158A4,
        &&label_80B158A8,
        &&label_80B158AC,
        &&label_80B158B0,
        &&label_80B158B4,
        &&label_80B158B8,
        &&label_80B158BC,
        &&label_80B158C0,
        &&label_80B158C4,
        &&label_80B158C8,
        &&label_80B158CC,
        &&label_80B158D0,
        &&label_80B158D4,
        &&label_80B158D8,
        &&label_80B158DC,
        &&label_80B158E0,
        &&label_80B158E4,
        &&label_80B158E8,
        &&label_80B158EC,
        &&label_80B158F0,
        &&label_80B158F4,
        &&label_80B158F8,
        &&label_80B158FC,
        &&label_80B15900,
        &&label_80B15904,
        &&label_80B15908,
        &&label_80B1590C,
        &&label_80B15910,
        &&label_80B15914,
        &&label_80B15918,
        &&label_80B1591C,
        &&label_80B15920,
        &&label_80B15924,
        &&label_80B15928,
        &&label_80B1592C,
        &&label_80B15930,
        &&label_80B15934,
        &&label_80B15938,
        &&label_80B1593C,
        &&label_80B15940,
        &&label_80B15944,
        &&label_80B15948,
        &&label_80B1594C,
        &&label_80B15950,
        &&label_80B15954,
        &&label_80B15958,
        &&label_80B1595C,
        &&label_80B15960,
        &&label_80B15964,
        &&label_80B15968,
        &&label_80B1596C,
        &&label_80B15970,
        &&label_80B15974,
        &&label_80B15978,
        &&label_80B1597C,
        &&label_80B15980,
        &&label_80B15984,
        &&label_80B15988,
        &&label_80B1598C,
        &&label_80B15990,
        &&label_80B15994,
        &&label_80B15998,
        &&label_80B1599C,
        &&label_80B159A0,
        &&label_80B159A4,
        &&label_80B159A8,
        &&label_80B159AC,
        &&label_80B159B0,
        &&label_80B159B4,
        &&label_80B159B8,
        &&label_80B159BC,
        &&label_80B159C0,
        &&label_80B159C4,
        &&label_80B159C8,
        &&label_80B159CC,
        &&label_80B159D0,
        &&label_80B159D4,
        &&label_80B159D8,
        &&label_80B159DC,
        &&label_80B159E0,
        &&label_80B159E4,
        &&label_80B159E8,
        &&label_80B159EC,
        &&label_80B159F0,
        &&label_80B159F4,
        &&label_80B159F8,
        &&label_80B159FC,
        &&label_80B15A00,
        &&label_80B15A04,
        &&label_80B15A08,
        &&label_80B15A0C,
        &&label_80B15A10,
        &&label_80B15A14,
        &&label_80B15A18,
        &&label_80B15A1C,
        &&label_80B15A20,
        &&label_80B15A24,
        &&label_80B15A28,
        &&label_80B15A2C,
        &&label_80B15A30,
        &&label_80B15A34,
        &&label_80B15A38,
        &&label_80B15A3C,
        &&label_80B15A40,
        &&label_80B15A44,
        &&label_80B15A48,
        &&label_80B15A4C,
        &&label_80B15A50,
        &&label_80B15A54,
        &&label_80B15A58,
        &&label_80B15A5C,
        &&label_80B15A60,
        &&label_80B15A64,
        &&label_80B15A68,
        &&label_80B15A6C,
        &&label_80B15A70,
        &&label_80B15A74,
        &&label_80B15A78,
        &&label_80B15A7C,
        &&label_80B15A80,
        &&label_80B15A84,
        &&label_80B15A88,
        &&label_80B15A8C,
        &&label_80B15A90,
        &&label_80B15A94,
        &&label_80B15A98,
        &&label_80B15A9C,
        &&label_80B15AA0,
        &&label_80B15AA4,
        &&label_80B15AA8,
        &&label_80B15AAC,
        &&label_80B15AB0,
        &&label_80B15AB4,
        &&label_80B15AB8,
        &&label_80B15ABC,
        &&label_80B15AC0,
        &&label_80B15AC4,
        &&label_80B15AC8,
        &&label_80B15ACC,
        &&label_80B15AD0,
        &&label_80B15AD4,
        &&label_80B15AD8,
        &&label_80B15ADC,
        &&label_80B15AE0,
        &&label_80B15AE4,
        &&label_80B15AE8,
        &&label_80B15AEC,
        &&label_80B15AF0,
        &&label_80B15AF4,
        &&label_80B15AF8,
        &&label_80B15AFC,
        &&label_80B15B00,
        &&label_80B15B04,
        &&label_80B15B08,
        &&label_80B15B0C,
        &&label_80B15B10,
        &&label_80B15B14,
        &&label_80B15B18,
        &&label_80B15B1C,
        &&label_80B15B20,
        &&label_80B15B24,
        &&label_80B15B28,
        &&label_80B15B2C,
        &&label_80B15B30,
        &&label_80B15B34,
        &&label_80B15B38,
        &&label_80B15B3C,
        &&label_80B15B40,
        &&label_80B15B44,
        &&label_80B15B48,
        &&label_80B15B4C,
        &&label_80B15B50,
        &&label_80B15B54,
        &&label_80B15B58,
        &&label_80B15B5C,
        &&label_80B15B60,
        &&label_80B15B64,
        &&label_80B15B68,
        &&label_80B15B6C,
        &&label_80B15B70,
        &&label_80B15B74,
        &&label_80B15B78,
        &&label_80B15B7C,
        &&label_80B15B80,
        &&label_80B15B84,
        &&label_80B15B88,
        &&label_80B15B8C,
        &&label_80B15B90,
        &&label_80B15B94,
        &&label_80B15B98,
        &&label_80B15B9C,
        &&label_80B15BA0,
        &&label_80B15BA4,
        &&label_80B15BA8,
        &&label_80B15BAC,
        &&label_80B15BB0,
        &&label_80B15BB4,
        &&label_80B15BB8,
        &&label_80B15BBC,
        &&label_80B15BC0,
        &&label_80B15BC4,
        &&label_80B15BC8,
        &&label_80B15BCC,
        &&label_80B15BD0,
        &&label_80B15BD4,
        &&label_80B15BD8,
        &&label_80B15BDC,
        &&label_80B15BE0,
        &&label_80B15BE4,
        &&label_80B15BE8,
        &&label_80B15BEC,
        &&label_80B15BF0,
        &&label_80B15BF4,
        &&label_80B15BF8,
        &&label_80B15BFC,
        &&label_80B15C00,
        &&label_80B15C04,
        &&label_80B15C08,
        &&label_80B15C0C,
        &&label_80B15C10,
        &&label_80B15C14,
        &&label_80B15C18,
        &&label_80B15C1C,
        &&label_80B15C20,
        &&label_80B15C24,
        &&label_80B15C28,
        &&label_80B15C2C,
        &&label_80B15C30,
        &&label_80B15C34,
        &&label_80B15C38,
        &&label_80B15C3C,
        &&label_80B15C40,
        &&label_80B15C44,
        &&label_80B15C48,
        &&label_80B15C4C,
        &&label_80B15C50,
        &&label_80B15C54,
        &&label_80B15C58,
        &&label_80B15C5C,
        &&label_80B15C60,
        &&label_80B15C64,
        &&label_80B15C68,
        &&label_80B15C6C,
        &&label_80B15C70,
        &&label_80B15C74,
        &&label_80B15C78,
        &&label_80B15C7C,
        &&label_80B15C80,
        &&label_80B15C84,
        &&label_80B15C88,
        &&label_80B15C8C,
        &&label_80B15C90,
        &&label_80B15C94,
        &&label_80B15C98,
        &&label_80B15C9C,
        &&label_80B15CA0,
        &&label_80B15CA4,
        &&label_80B15CA8,
        &&label_80B15CAC,
        &&label_80B15CB0,
        &&label_80B15CB4,
        &&label_80B15CB8,
        &&label_80B15CBC,
        &&label_80B15CC0,
        &&label_80B15CC4,
        &&label_80B15CC8,
        &&label_80B15CCC,
        &&label_80B15CD0,
        &&label_80B15CD4,
        &&label_80B15CD8,
        &&label_80B15CDC,
        &&label_80B15CE0,
        &&label_80B15CE4,
        &&label_80B15CE8,
        &&label_80B15CEC,
        &&label_80B15CF0
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80B14E40u && pc <= 0x80B15CF0u && ((pc - 0x80B14E40u) & 3u) == 0u)
            goto *pc_table_80B14E40[(pc - 0x80B14E40u) >> 2];
    }
    return;
label_80B14E40:
    ctx->pc = 0x80B14E40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B14E40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B14E40: stwu     r1, -16(r1)
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
label_80B14E44:
    ctx->pc = 0x80B14E44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14E44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B14E44: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B14E48:
    ctx->pc = 0x80B14E48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14E48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B14E48: stw     r0, 20(r1)
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
label_80B14E4C:
    ctx->pc = 0x80B14E4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14E4Cu)) return;
    // 80B14E4C: cmpwi   r3, 2
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

label_80B14E50:
    ctx->pc = 0x80B14E50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14E50u)) return;
    // 80B14E50: bc    12, 2, 0x80B152E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B152E4;
        }
    }

label_80B14E54:
    ctx->pc = 0x80B14E54u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B14E54u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B14E54: bc    4, 0, 0x80B14E68
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B14E68;
        }
    }

label_80B14E58:
    ctx->pc = 0x80B14E58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B14E58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B14E58: cmpwi   r3, 0
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

label_80B14E5C:
    ctx->pc = 0x80B14E5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14E5Cu)) return;
    // 80B14E5C: bc    12, 2, 0x80B15368
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B15368;
        }
    }

label_80B14E60:
    ctx->pc = 0x80B14E60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B14E60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B14E60: bc    4, 0, 0x80B14E70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B14E70;
        }
    }

label_80B14E64:
    ctx->pc = 0x80B14E64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B14E64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B14E64: b       0x80B15368
    {
            goto label_80B15368;
    }

label_80B14E68:
    ctx->pc = 0x80B14E68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B14E68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B14E68: cmpwi   r3, 4
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

label_80B14E6C:
    ctx->pc = 0x80B14E6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14E6Cu)) return;
    // 80B14E6C: b       0x80B15368
    {
            goto label_80B15368;
    }

label_80B14E70:
    ctx->pc = 0x80B14E70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B14E70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B14E70: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B14E74:
    ctx->pc = 0x80B14E74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14E74u)) return;
    // 80B14E74: bl      0x8045EC10
    {
            ctx->lr = 0x80B14E78u;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80B14E78:
    ctx->pc = 0x80B14E78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B14E78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B14E78: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B14E7C:
    ctx->pc = 0x80B14E7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14E7Cu)) return;
    // 80B14E7C: bl      0x80B15964
    {
            ctx->lr = 0x80B14E80u;
            goto label_80B15964;
    }

label_80B14E80:
    ctx->pc = 0x80B14E80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B14E80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B14E80: bl      0x8045DE7C
    {
            ctx->lr = 0x80B14E84u;
            ctx->pc = 0x8045DE7Cu;
            return;
    }

label_80B14E84:
    ctx->pc = 0x80B14E84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B14E84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B14E84: bl      0x80460A60
    {
            ctx->lr = 0x80B14E88u;
            ctx->pc = 0x80460A60u;
            return;
    }

label_80B14E88:
    ctx->pc = 0x80B14E88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B14E88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B14E88: bl      0x80460A24
    {
            ctx->lr = 0x80B14E8Cu;
            ctx->pc = 0x80460A24u;
            return;
    }

label_80B14E8C:
    ctx->pc = 0x80B14E8Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B14E8Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B14E8C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B14E90:
    ctx->pc = 0x80B14E90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14E90u)) return;
    // 80B14E90: li      r4, 760
    ctx->gpr[4] = (u32)(s32)(760);

label_80B14E94:
    ctx->pc = 0x80B14E94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14E94u)) return;
    // 80B14E94: li      r5, 90
    ctx->gpr[5] = (u32)(s32)(90);

label_80B14E98:
    ctx->pc = 0x80B14E98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14E98u)) return;
    // 80B14E98: bl      0x80B15A6C
    {
            ctx->lr = 0x80B14E9Cu;
            goto label_80B15A6C;
    }

label_80B14E9C:
    ctx->pc = 0x80B14E9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B14E9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B14E9C: lis     r3, -27591
    ctx->gpr[3] = ((u32)(s32)(-27591) << 16);

label_80B14EA0:
    ctx->pc = 0x80B14EA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14EA0u)) return;
    // 80B14EA0: addi    r3, r3, -24784
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24784);

label_80B14EA4:
    ctx->pc = 0x80B14EA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14EA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B14EA4: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B14EA4u)) return;
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
label_80B14EA8:
    ctx->pc = 0x80B14EA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14EA8u)) return;
    // 80B14EA8: lis     r3, -27591
    ctx->gpr[3] = ((u32)(s32)(-27591) << 16);

label_80B14EAC:
    ctx->pc = 0x80B14EACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14EACu)) return;
    // 80B14EAC: addi    r3, r3, -24780
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24780);

label_80B14EB0:
    ctx->pc = 0x80B14EB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14EB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B14EB0: lfs     f2, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B14EB0u)) return;
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
label_80B14EB4:
    ctx->pc = 0x80B14EB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14EB4u)) return;
    // 80B14EB4: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80B14EB4u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80B14EB8:
    ctx->pc = 0x80B14EB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14EB8u)) return;
    // 80B14EB8: fmr    f4, f1
    if (!ppc_fp_available_inline(ctx, 0x80B14EB8u)) return;
    ctx->fpr[4] = ctx->fpr[1];

label_80B14EBC:
    ctx->pc = 0x80B14EBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14EBCu)) return;
    // 80B14EBC: fmr    f5, f1
    if (!ppc_fp_available_inline(ctx, 0x80B14EBCu)) return;
    ctx->fpr[5] = ctx->fpr[1];

label_80B14EC0:
    ctx->pc = 0x80B14EC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14EC0u)) return;
    // 80B14EC0: bl      0x80B1557C
    {
            ctx->lr = 0x80B14EC4u;
            goto label_80B1557C;
    }

label_80B14EC4:
    ctx->pc = 0x80B14EC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 15u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B14EC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 15u : 1u;
    // 80B14EC4: lis     r4, -27591
    ctx->gpr[4] = ((u32)(s32)(-27591) << 16);

label_80B14EC8:
    ctx->pc = 0x80B14EC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14EC8u)) return;
    // 80B14EC8: addi    r4, r4, -12352
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-12352);

label_80B14ECC:
    ctx->pc = 0x80B14ECCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14ECCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80B14ECC: stw     r3, 0(r4)
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
label_80B14ED0:
    ctx->pc = 0x80B14ED0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14ED0u)) return;
    // 80B14ED0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B14ED4:
    ctx->pc = 0x80B14ED4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14ED4u)) return;
    // 80B14ED4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B14ED8:
    ctx->pc = 0x80B14ED8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14ED8u)) return;
    // 80B14ED8: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B14EDC:
    ctx->pc = 0x80B14EDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14EDCu)) return;
    // 80B14EDC: addi    r5, r5, -24780
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24780);

label_80B14EE0:
    ctx->pc = 0x80B14EE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14EE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B14EE0: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B14EE0u)) return;
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
label_80B14EE4:
    ctx->pc = 0x80B14EE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14EE4u)) return;
    // 80B14EE4: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B14EE8:
    ctx->pc = 0x80B14EE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14EE8u)) return;
    // 80B14EE8: addi    r5, r5, -24776
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24776);

label_80B14EEC:
    ctx->pc = 0x80B14EECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14EECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B14EEC: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B14EECu)) return;
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
label_80B14EF0:
    ctx->pc = 0x80B14EF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14EF0u)) return;
    // 80B14EF0: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B14EF4:
    ctx->pc = 0x80B14EF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14EF4u)) return;
    // 80B14EF4: addi    r5, r5, -24772
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24772);

label_80B14EF8:
    ctx->pc = 0x80B14EF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14EF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B14EF8: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B14EF8u)) return;
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
label_80B14EFC:
    ctx->pc = 0x80B14EFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14EFCu)) return;
    // 80B14EFC: bl      0x8045C750
    {
            ctx->lr = 0x80B14F00u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B14F00:
    ctx->pc = 0x80B14F00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B14F00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80B14F00: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B14F04:
    ctx->pc = 0x80B14F04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14F04u)) return;
    // 80B14F04: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B14F08:
    ctx->pc = 0x80B14F08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14F08u)) return;
    // 80B14F08: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80B14F0C:
    ctx->pc = 0x80B14F0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14F0Cu)) return;
    // 80B14F0C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B14F10:
    ctx->pc = 0x80B14F10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14F10u)) return;
    // 80B14F10: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B14F14:
    ctx->pc = 0x80B14F14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14F14u)) return;
    // 80B14F14: bl      0x8045C7B4
    {
            ctx->lr = 0x80B14F18u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B14F18:
    ctx->pc = 0x80B14F18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B14F18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B14F18: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B14F1C:
    ctx->pc = 0x80B14F1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14F1Cu)) return;
    // 80B14F1C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80B14F20:
    ctx->pc = 0x80B14F20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14F20u)) return;
    // 80B14F20: li      r5, 7282
    ctx->gpr[5] = (u32)(s32)(7282);

label_80B14F24:
    ctx->pc = 0x80B14F24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14F24u)) return;
    // 80B14F24: bl      0x8045C0F8
    {
            ctx->lr = 0x80B14F28u;
            ctx->pc = 0x8045C0F8u;
            return;
    }

label_80B14F28:
    ctx->pc = 0x80B14F28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B14F28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B14F28: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B14F2C:
    ctx->pc = 0x80B14F2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14F2Cu)) return;
    // 80B14F2C: bl      0x8045F7C8
    {
            ctx->lr = 0x80B14F30u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B14F30:
    ctx->pc = 0x80B14F30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B14F30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B14F30: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B14F34:
    ctx->pc = 0x80B14F34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14F34u)) return;
    // 80B14F34: li      r4, 90
    ctx->gpr[4] = (u32)(s32)(90);

label_80B14F38:
    ctx->pc = 0x80B14F38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14F38u)) return;
    // 80B14F38: li      r5, 12743
    ctx->gpr[5] = (u32)(s32)(12743);

label_80B14F3C:
    ctx->pc = 0x80B14F3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14F3Cu)) return;
    // 80B14F3C: bl      0x8045C0F8
    {
            ctx->lr = 0x80B14F40u;
            ctx->pc = 0x8045C0F8u;
            return;
    }

label_80B14F40:
    ctx->pc = 0x80B14F40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B14F40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B14F40: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B14F44:
    ctx->pc = 0x80B14F44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14F44u)) return;
    // 80B14F44: bl      0x8045F220
    {
            ctx->lr = 0x80B14F48u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B14F48:
    ctx->pc = 0x80B14F48u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B14F48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B14F48: lis     r4, -27591
    ctx->gpr[4] = ((u32)(s32)(-27591) << 16);

label_80B14F4C:
    ctx->pc = 0x80B14F4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14F4Cu)) return;
    // 80B14F4C: addi    r4, r4, -24768
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24768);

label_80B14F50:
    ctx->pc = 0x80B14F50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14F50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B14F50: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B14F50u)) return;
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
label_80B14F54:
    ctx->pc = 0x80B14F54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14F54u)) return;
    // 80B14F54: lis     r4, -27591
    ctx->gpr[4] = ((u32)(s32)(-27591) << 16);

label_80B14F58:
    ctx->pc = 0x80B14F58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14F58u)) return;
    // 80B14F58: addi    r4, r4, -24764
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24764);

label_80B14F5C:
    ctx->pc = 0x80B14F5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14F5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B14F5C: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B14F5Cu)) return;
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
label_80B14F60:
    ctx->pc = 0x80B14F60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14F60u)) return;
    // 80B14F60: lis     r4, -27591
    ctx->gpr[4] = ((u32)(s32)(-27591) << 16);

label_80B14F64:
    ctx->pc = 0x80B14F64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14F64u)) return;
    // 80B14F64: addi    r4, r4, -24760
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24760);

label_80B14F68:
    ctx->pc = 0x80B14F68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14F68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B14F68: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B14F68u)) return;
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
label_80B14F6C:
    ctx->pc = 0x80B14F6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14F6Cu)) return;
    // 80B14F6C: bl      0x8045EF2C
    {
            ctx->lr = 0x80B14F70u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80B14F70:
    ctx->pc = 0x80B14F70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B14F70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B14F70: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B14F74:
    ctx->pc = 0x80B14F74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14F74u)) return;
    // 80B14F74: bl      0x8045F220
    {
            ctx->lr = 0x80B14F78u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B14F78:
    ctx->pc = 0x80B14F78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B14F78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B14F78: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B14F7C:
    ctx->pc = 0x80B14F7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14F7Cu)) return;
    // 80B14F7C: li      r5, 31840
    ctx->gpr[5] = (u32)(s32)(31840);

label_80B14F80:
    ctx->pc = 0x80B14F80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14F80u)) return;
    // 80B14F80: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B14F84:
    ctx->pc = 0x80B14F84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14F84u)) return;
    // 80B14F84: bl      0x8045EEA8
    {
            ctx->lr = 0x80B14F88u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80B14F88:
    ctx->pc = 0x80B14F88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B14F88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B14F88: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B14F8C:
    ctx->pc = 0x80B14F8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14F8Cu)) return;
    // 80B14F8C: bl      0x8045F220
    {
            ctx->lr = 0x80B14F90u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B14F90:
    ctx->pc = 0x80B14F90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B14F90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B14F90: lis     r4, -27591
    ctx->gpr[4] = ((u32)(s32)(-27591) << 16);

label_80B14F94:
    ctx->pc = 0x80B14F94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14F94u)) return;
    // 80B14F94: addi    r4, r4, -17540
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-17540);

label_80B14F98:
    ctx->pc = 0x80B14F98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14F98u)) return;
    // 80B14F98: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80B14F9C:
    ctx->pc = 0x80B14F9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14F9Cu)) return;
    // 80B14F9C: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80B14FA0:
    ctx->pc = 0x80B14FA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14FA0u)) return;
    // 80B14FA0: lis     r6, -27591
    ctx->gpr[6] = ((u32)(s32)(-27591) << 16);

label_80B14FA4:
    ctx->pc = 0x80B14FA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14FA4u)) return;
    // 80B14FA4: addi    r6, r6, -24756
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-24756);

label_80B14FA8:
    ctx->pc = 0x80B14FA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14FA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B14FA8: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B14FA8u)) return;
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
label_80B14FAC:
    ctx->pc = 0x80B14FACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14FACu)) return;
    // 80B14FAC: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80B14FB0:
    ctx->pc = 0x80B14FB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14FB0u)) return;
    // 80B14FB0: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_80B14FB4:
    ctx->pc = 0x80B14FB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14FB4u)) return;
    // 80B14FB4: bl      0x8045EBE4
    {
            ctx->lr = 0x80B14FB8u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80B14FB8:
    ctx->pc = 0x80B14FB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B14FB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B14FB8: lis     r3, -27591
    ctx->gpr[3] = ((u32)(s32)(-27591) << 16);

label_80B14FBC:
    ctx->pc = 0x80B14FBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14FBCu)) return;
    // 80B14FBC: addi    r3, r3, -12352
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-12352);

label_80B14FC0:
    ctx->pc = 0x80B14FC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14FC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B14FC0: lwz     r3, 0(r3)
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
label_80B14FC4:
    ctx->pc = 0x80B14FC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14FC4u)) return;
    // 80B14FC4: cmplwi  r3, 0x0000
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

label_80B14FC8:
    ctx->pc = 0x80B14FC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14FC8u)) return;
    // 80B14FC8: bc    12, 2, 0x80B14FDC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B14FDC;
        }
    }

label_80B14FCC:
    ctx->pc = 0x80B14FCCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B14FCCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B14FCC: lis     r4, -27591
    ctx->gpr[4] = ((u32)(s32)(-27591) << 16);

label_80B14FD0:
    ctx->pc = 0x80B14FD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14FD0u)) return;
    // 80B14FD0: addi    r4, r4, -24752
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24752);

label_80B14FD4:
    ctx->pc = 0x80B14FD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14FD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B14FD4: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B14FD4u)) return;
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
label_80B14FD8:
    ctx->pc = 0x80B14FD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14FD8u)) return;
    // 80B14FD8: bl      0x80B15638
    {
            ctx->lr = 0x80B14FDCu;
            goto label_80B15638;
    }

label_80B14FDC:
    ctx->pc = 0x80B14FDCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B14FDCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B14FDC: li      r3, 90
    ctx->gpr[3] = (u32)(s32)(90);

label_80B14FE0:
    ctx->pc = 0x80B14FE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14FE0u)) return;
    // 80B14FE0: bl      0x8045F7C8
    {
            ctx->lr = 0x80B14FE4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B14FE4:
    ctx->pc = 0x80B14FE4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B14FE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B14FE4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B14FE8:
    ctx->pc = 0x80B14FE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14FE8u)) return;
    // 80B14FE8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B14FEC:
    ctx->pc = 0x80B14FECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14FECu)) return;
    // 80B14FEC: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B14FF0:
    ctx->pc = 0x80B14FF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14FF0u)) return;
    // 80B14FF0: addi    r5, r5, -24748
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24748);

label_80B14FF4:
    ctx->pc = 0x80B14FF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14FF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B14FF4: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B14FF4u)) return;
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
label_80B14FF8:
    ctx->pc = 0x80B14FF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14FF8u)) return;
    // 80B14FF8: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B14FFC:
    ctx->pc = 0x80B14FFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B14FFCu)) return;
    // 80B14FFC: addi    r5, r5, -24744
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24744);

label_80B15000:
    ctx->pc = 0x80B15000u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15000u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B15000: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B15000u)) return;
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
label_80B15004:
    ctx->pc = 0x80B15004u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15004u)) return;
    // 80B15004: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B15008:
    ctx->pc = 0x80B15008u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15008u)) return;
    // 80B15008: addi    r5, r5, -24740
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24740);

label_80B1500C:
    ctx->pc = 0x80B1500Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1500Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B1500C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B1500Cu)) return;
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
label_80B15010:
    ctx->pc = 0x80B15010u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15010u)) return;
    // 80B15010: bl      0x8045C750
    {
            ctx->lr = 0x80B15014u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B15014:
    ctx->pc = 0x80B15014u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15014u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B15014: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B15018:
    ctx->pc = 0x80B15018u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15018u)) return;
    // 80B15018: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B1501C:
    ctx->pc = 0x80B1501Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1501Cu)) return;
    // 80B1501C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80B15020:
    ctx->pc = 0x80B15020u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15020u)) return;
    // 80B15020: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80B15024:
    ctx->pc = 0x80B15024u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15024u)) return;
    // 80B15024: addi    r6, r6, -32768
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-32768);

label_80B15028:
    ctx->pc = 0x80B15028u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15028u)) return;
    // 80B15028: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B1502C:
    ctx->pc = 0x80B1502Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1502Cu)) return;
    // 80B1502C: bl      0x8045C7B4
    {
            ctx->lr = 0x80B15030u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B15030:
    ctx->pc = 0x80B15030u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15030u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B15030: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B15034:
    ctx->pc = 0x80B15034u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15034u)) return;
    // 80B15034: li      r4, 60
    ctx->gpr[4] = (u32)(s32)(60);

label_80B15038:
    ctx->pc = 0x80B15038u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15038u)) return;
    // 80B15038: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B1503C:
    ctx->pc = 0x80B1503Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1503Cu)) return;
    // 80B1503C: addi    r5, r5, -24748
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24748);

label_80B15040:
    ctx->pc = 0x80B15040u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15040u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B15040: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B15040u)) return;
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
label_80B15044:
    ctx->pc = 0x80B15044u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15044u)) return;
    // 80B15044: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B15048:
    ctx->pc = 0x80B15048u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15048u)) return;
    // 80B15048: addi    r5, r5, -24744
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24744);

label_80B1504C:
    ctx->pc = 0x80B1504Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1504Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B1504C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B1504Cu)) return;
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
label_80B15050:
    ctx->pc = 0x80B15050u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15050u)) return;
    // 80B15050: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B15054:
    ctx->pc = 0x80B15054u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15054u)) return;
    // 80B15054: addi    r5, r5, -24736
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24736);

label_80B15058:
    ctx->pc = 0x80B15058u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15058u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B15058: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B15058u)) return;
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
label_80B1505C:
    ctx->pc = 0x80B1505Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1505Cu)) return;
    // 80B1505C: bl      0x8045C750
    {
            ctx->lr = 0x80B15060u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B15060:
    ctx->pc = 0x80B15060u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15060u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B15060: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B15064:
    ctx->pc = 0x80B15064u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15064u)) return;
    // 80B15064: li      r4, 60
    ctx->gpr[4] = (u32)(s32)(60);

label_80B15068:
    ctx->pc = 0x80B15068u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15068u)) return;
    // 80B15068: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80B1506C:
    ctx->pc = 0x80B1506Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1506Cu)) return;
    // 80B1506C: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80B15070:
    ctx->pc = 0x80B15070u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15070u)) return;
    // 80B15070: addi    r6, r6, -32768
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-32768);

label_80B15074:
    ctx->pc = 0x80B15074u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15074u)) return;
    // 80B15074: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B15078:
    ctx->pc = 0x80B15078u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15078u)) return;
    // 80B15078: bl      0x8045C7B4
    {
            ctx->lr = 0x80B1507Cu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B1507C:
    ctx->pc = 0x80B1507Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B1507Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B1507C: li      r3, 50
    ctx->gpr[3] = (u32)(s32)(50);

label_80B15080:
    ctx->pc = 0x80B15080u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15080u)) return;
    // 80B15080: bl      0x8045F7C8
    {
            ctx->lr = 0x80B15084u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B15084:
    ctx->pc = 0x80B15084u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15084u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B15084: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B15088:
    ctx->pc = 0x80B15088u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15088u)) return;
    // 80B15088: li      r4, 60
    ctx->gpr[4] = (u32)(s32)(60);

label_80B1508C:
    ctx->pc = 0x80B1508Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1508Cu)) return;
    // 80B1508C: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B15090:
    ctx->pc = 0x80B15090u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15090u)) return;
    // 80B15090: addi    r5, r5, -24732
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24732);

label_80B15094:
    ctx->pc = 0x80B15094u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15094u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B15094: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B15094u)) return;
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
label_80B15098:
    ctx->pc = 0x80B15098u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15098u)) return;
    // 80B15098: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B1509C:
    ctx->pc = 0x80B1509Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1509Cu)) return;
    // 80B1509C: addi    r5, r5, -24744
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24744);

label_80B150A0:
    ctx->pc = 0x80B150A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B150A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B150A0: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B150A0u)) return;
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
label_80B150A4:
    ctx->pc = 0x80B150A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B150A4u)) return;
    // 80B150A4: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B150A8:
    ctx->pc = 0x80B150A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B150A8u)) return;
    // 80B150A8: addi    r5, r5, -24728
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24728);

label_80B150AC:
    ctx->pc = 0x80B150ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B150ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B150AC: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B150ACu)) return;
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
label_80B150B0:
    ctx->pc = 0x80B150B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B150B0u)) return;
    // 80B150B0: bl      0x8045C750
    {
            ctx->lr = 0x80B150B4u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B150B4:
    ctx->pc = 0x80B150B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B150B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B150B4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B150B8:
    ctx->pc = 0x80B150B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B150B8u)) return;
    // 80B150B8: li      r4, 60
    ctx->gpr[4] = (u32)(s32)(60);

label_80B150BC:
    ctx->pc = 0x80B150BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B150BCu)) return;
    // 80B150BC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80B150C0:
    ctx->pc = 0x80B150C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B150C0u)) return;
    // 80B150C0: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80B150C4:
    ctx->pc = 0x80B150C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B150C4u)) return;
    // 80B150C4: addi    r6, r6, -32768
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-32768);

label_80B150C8:
    ctx->pc = 0x80B150C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B150C8u)) return;
    // 80B150C8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B150CC:
    ctx->pc = 0x80B150CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B150CCu)) return;
    // 80B150CC: bl      0x8045C7B4
    {
            ctx->lr = 0x80B150D0u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B150D0:
    ctx->pc = 0x80B150D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B150D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B150D0: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80B150D4:
    ctx->pc = 0x80B150D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B150D4u)) return;
    // 80B150D4: bl      0x8045F7C8
    {
            ctx->lr = 0x80B150D8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B150D8:
    ctx->pc = 0x80B150D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B150D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B150D8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B150DC:
    ctx->pc = 0x80B150DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B150DCu)) return;
    // 80B150DC: bl      0x8045F220
    {
            ctx->lr = 0x80B150E0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B150E0:
    ctx->pc = 0x80B150E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B150E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B150E0: lis     r4, -27591
    ctx->gpr[4] = ((u32)(s32)(-27591) << 16);

label_80B150E4:
    ctx->pc = 0x80B150E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B150E4u)) return;
    // 80B150E4: addi    r4, r4, -24248
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24248);

label_80B150E8:
    ctx->pc = 0x80B150E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B150E8u)) return;
    // 80B150E8: bl      0x8045C060
    {
            ctx->lr = 0x80B150ECu;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80B150EC:
    ctx->pc = 0x80B150ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B150ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B150EC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B150F0:
    ctx->pc = 0x80B150F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B150F0u)) return;
    // 80B150F0: bl      0x8045F220
    {
            ctx->lr = 0x80B150F4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B150F4:
    ctx->pc = 0x80B150F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B150F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B150F4: lis     r4, -28587
    ctx->gpr[4] = ((u32)(s32)(-28587) << 16);

label_80B150F8:
    ctx->pc = 0x80B150F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B150F8u)) return;
    // 80B150F8: addi    r4, r4, 8236
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8236);

label_80B150FC:
    ctx->pc = 0x80B150FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B150FCu)) return;
    // 80B150FC: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80B15100:
    ctx->pc = 0x80B15100u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15100u)) return;
    // 80B15100: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80B15104:
    ctx->pc = 0x80B15104u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15104u)) return;
    // 80B15104: lis     r6, -27591
    ctx->gpr[6] = ((u32)(s32)(-27591) << 16);

label_80B15108:
    ctx->pc = 0x80B15108u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15108u)) return;
    // 80B15108: addi    r6, r6, -24724
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-24724);

label_80B1510C:
    ctx->pc = 0x80B1510Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1510Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B1510C: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B1510Cu)) return;
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
label_80B15110:
    ctx->pc = 0x80B15110u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15110u)) return;
    // 80B15110: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80B15114:
    ctx->pc = 0x80B15114u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15114u)) return;
    // 80B15114: li      r7, 16
    ctx->gpr[7] = (u32)(s32)(16);

label_80B15118:
    ctx->pc = 0x80B15118u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15118u)) return;
    // 80B15118: bl      0x8045EBE4
    {
            ctx->lr = 0x80B1511Cu;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80B1511C:
    ctx->pc = 0x80B1511Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B1511Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B1511C: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80B15120:
    ctx->pc = 0x80B15120u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15120u)) return;
    // 80B15120: bl      0x8045F7C8
    {
            ctx->lr = 0x80B15124u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B15124:
    ctx->pc = 0x80B15124u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15124u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B15124: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B15128:
    ctx->pc = 0x80B15128u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15128u)) return;
    // 80B15128: bl      0x8045F220
    {
            ctx->lr = 0x80B1512Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B1512C:
    ctx->pc = 0x80B1512Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B1512Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B1512C: bl      0x8045C034
    {
            ctx->lr = 0x80B15130u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80B15130:
    ctx->pc = 0x80B15130u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15130u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B15130: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B15134:
    ctx->pc = 0x80B15134u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15134u)) return;
    // 80B15134: bl      0x8045F220
    {
            ctx->lr = 0x80B15138u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B15138:
    ctx->pc = 0x80B15138u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15138u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B15138: lis     r4, -27591
    ctx->gpr[4] = ((u32)(s32)(-27591) << 16);

label_80B1513C:
    ctx->pc = 0x80B1513Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1513Cu)) return;
    // 80B1513C: addi    r4, r4, -24244
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24244);

label_80B15140:
    ctx->pc = 0x80B15140u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15140u)) return;
    // 80B15140: bl      0x8045C060
    {
            ctx->lr = 0x80B15144u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80B15144:
    ctx->pc = 0x80B15144u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15144u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B15144: li      r3, 593
    ctx->gpr[3] = (u32)(s32)(593);

label_80B15148:
    ctx->pc = 0x80B15148u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15148u)) return;
    // 80B15148: bl      0x8045BFA0
    {
            ctx->lr = 0x80B1514Cu;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80B1514C:
    ctx->pc = 0x80B1514Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B1514Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80B1514C: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80B15150:
    ctx->pc = 0x80B15150u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15150u)) return;
    // 80B15150: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80B15154:
    ctx->pc = 0x80B15154u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15154u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B15154: lwz     r0, 0(r3)
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
label_80B15158:
    ctx->pc = 0x80B15158u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15158u)) return;
    // 80B15158: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80B1515C:
    ctx->pc = 0x80B1515Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1515Cu)) return;
    // 80B1515C: lis     r3, -27591
    ctx->gpr[3] = ((u32)(s32)(-27591) << 16);

label_80B15160:
    ctx->pc = 0x80B15160u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15160u)) return;
    // 80B15160: addi    r3, r3, -24276
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24276);

label_80B15164:
    ctx->pc = 0x80B15164u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15164u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B15164: lwzx    r3, r3, r0
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
label_80B15168:
    ctx->pc = 0x80B15168u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15168u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B15168: lwz     r3, 0(r3)
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
label_80B1516C:
    ctx->pc = 0x80B1516Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1516Cu)) return;
    // 80B1516C: bl      0x8045F6FC
    {
            ctx->lr = 0x80B15170u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80B15170:
    ctx->pc = 0x80B15170u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15170u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B15170: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B15174:
    ctx->pc = 0x80B15174u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15174u)) return;
    // 80B15174: bl      0x8045F220
    {
            ctx->lr = 0x80B15178u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B15178:
    ctx->pc = 0x80B15178u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15178u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B15178: lis     r4, -27591
    ctx->gpr[4] = ((u32)(s32)(-27591) << 16);

label_80B1517C:
    ctx->pc = 0x80B1517Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1517Cu)) return;
    // 80B1517C: addi    r4, r4, -12384
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-12384);

label_80B15180:
    ctx->pc = 0x80B15180u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15180u)) return;
    // 80B15180: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80B15184:
    ctx->pc = 0x80B15184u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15184u)) return;
    // 80B15184: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80B15188:
    ctx->pc = 0x80B15188u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15188u)) return;
    // 80B15188: lis     r6, -27591
    ctx->gpr[6] = ((u32)(s32)(-27591) << 16);

label_80B1518C:
    ctx->pc = 0x80B1518Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1518Cu)) return;
    // 80B1518C: addi    r6, r6, -24720
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-24720);

label_80B15190:
    ctx->pc = 0x80B15190u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15190u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B15190: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B15190u)) return;
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
label_80B15194:
    ctx->pc = 0x80B15194u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15194u)) return;
    // 80B15194: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B15198:
    ctx->pc = 0x80B15198u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15198u)) return;
    // 80B15198: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_80B1519C:
    ctx->pc = 0x80B1519Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1519Cu)) return;
    // 80B1519C: bl      0x8045EBE4
    {
            ctx->lr = 0x80B151A0u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80B151A0:
    ctx->pc = 0x80B151A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B151A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B151A0: bl      0x8045BFF4
    {
            ctx->lr = 0x80B151A4u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80B151A4:
    ctx->pc = 0x80B151A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B151A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B151A4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B151A8:
    ctx->pc = 0x80B151A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B151A8u)) return;
    // 80B151A8: bl      0x8045F220
    {
            ctx->lr = 0x80B151ACu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B151AC:
    ctx->pc = 0x80B151ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B151ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B151AC: bl      0x8045C034
    {
            ctx->lr = 0x80B151B0u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80B151B0:
    ctx->pc = 0x80B151B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B151B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B151B0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B151B4:
    ctx->pc = 0x80B151B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B151B4u)) return;
    // 80B151B4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B151B8:
    ctx->pc = 0x80B151B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B151B8u)) return;
    // 80B151B8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80B151BC:
    ctx->pc = 0x80B151BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B151BCu)) return;
    // 80B151BC: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80B151C0:
    ctx->pc = 0x80B151C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B151C0u)) return;
    // 80B151C0: addi    r6, r6, -14336
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-14336);

label_80B151C4:
    ctx->pc = 0x80B151C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B151C4u)) return;
    // 80B151C4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B151C8:
    ctx->pc = 0x80B151C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B151C8u)) return;
    // 80B151C8: bl      0x8045C7B4
    {
            ctx->lr = 0x80B151CCu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B151CC:
    ctx->pc = 0x80B151CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B151CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80B151CC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B151D0:
    ctx->pc = 0x80B151D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B151D0u)) return;
    // 80B151D0: li      r4, 200
    ctx->gpr[4] = (u32)(s32)(200);

label_80B151D4:
    ctx->pc = 0x80B151D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B151D4u)) return;
    // 80B151D4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80B151D8:
    ctx->pc = 0x80B151D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B151D8u)) return;
    // 80B151D8: li      r6, 14848
    ctx->gpr[6] = (u32)(s32)(14848);

label_80B151DC:
    ctx->pc = 0x80B151DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B151DCu)) return;
    // 80B151DC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B151E0:
    ctx->pc = 0x80B151E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B151E0u)) return;
    // 80B151E0: bl      0x8045C7B4
    {
            ctx->lr = 0x80B151E4u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B151E4:
    ctx->pc = 0x80B151E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B151E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B151E4: li      r3, 40
    ctx->gpr[3] = (u32)(s32)(40);

label_80B151E8:
    ctx->pc = 0x80B151E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B151E8u)) return;
    // 80B151E8: bl      0x8045F7C8
    {
            ctx->lr = 0x80B151ECu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B151EC:
    ctx->pc = 0x80B151ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B151ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B151EC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B151F0:
    ctx->pc = 0x80B151F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B151F0u)) return;
    // 80B151F0: bl      0x8045F220
    {
            ctx->lr = 0x80B151F4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B151F4:
    ctx->pc = 0x80B151F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B151F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B151F4: lis     r4, -27591
    ctx->gpr[4] = ((u32)(s32)(-27591) << 16);

label_80B151F8:
    ctx->pc = 0x80B151F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B151F8u)) return;
    // 80B151F8: addi    r4, r4, -24236
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24236);

label_80B151FC:
    ctx->pc = 0x80B151FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B151FCu)) return;
    // 80B151FC: bl      0x8045C060
    {
            ctx->lr = 0x80B15200u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80B15200:
    ctx->pc = 0x80B15200u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15200u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B15200: li      r3, 594
    ctx->gpr[3] = (u32)(s32)(594);

label_80B15204:
    ctx->pc = 0x80B15204u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15204u)) return;
    // 80B15204: bl      0x8045BFA0
    {
            ctx->lr = 0x80B15208u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80B15208:
    ctx->pc = 0x80B15208u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15208u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80B15208: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80B1520C:
    ctx->pc = 0x80B1520Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1520Cu)) return;
    // 80B1520C: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80B15210:
    ctx->pc = 0x80B15210u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15210u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B15210: lwz     r0, 0(r3)
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
label_80B15214:
    ctx->pc = 0x80B15214u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15214u)) return;
    // 80B15214: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80B15218:
    ctx->pc = 0x80B15218u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15218u)) return;
    // 80B15218: lis     r3, -27591
    ctx->gpr[3] = ((u32)(s32)(-27591) << 16);

label_80B1521C:
    ctx->pc = 0x80B1521Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1521Cu)) return;
    // 80B1521C: addi    r3, r3, -24276
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24276);

label_80B15220:
    ctx->pc = 0x80B15220u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15220u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B15220: lwzx    r3, r3, r0
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
label_80B15224:
    ctx->pc = 0x80B15224u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15224u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B15224: lwz     r3, 4(r3)
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
label_80B15228:
    ctx->pc = 0x80B15228u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15228u)) return;
    // 80B15228: bl      0x8045F6FC
    {
            ctx->lr = 0x80B1522Cu;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80B1522C:
    ctx->pc = 0x80B1522Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B1522Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B1522C: li      r3, 50
    ctx->gpr[3] = (u32)(s32)(50);

label_80B15230:
    ctx->pc = 0x80B15230u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15230u)) return;
    // 80B15230: bl      0x8045F7C8
    {
            ctx->lr = 0x80B15234u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B15234:
    ctx->pc = 0x80B15234u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15234u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B15234: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B15238:
    ctx->pc = 0x80B15238u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15238u)) return;
    // 80B15238: bl      0x8045F220
    {
            ctx->lr = 0x80B1523Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B1523C:
    ctx->pc = 0x80B1523Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B1523Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B1523C: bl      0x8045C034
    {
            ctx->lr = 0x80B15240u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80B15240:
    ctx->pc = 0x80B15240u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15240u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B15240: bl      0x8045F32C
    {
            ctx->lr = 0x80B15244u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80B15244:
    ctx->pc = 0x80B15244u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15244u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B15244: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B15248:
    ctx->pc = 0x80B15248u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15248u)) return;
    // 80B15248: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B1524C:
    ctx->pc = 0x80B1524Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1524Cu)) return;
    // 80B1524C: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B15250:
    ctx->pc = 0x80B15250u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15250u)) return;
    // 80B15250: addi    r5, r5, -24716
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24716);

label_80B15254:
    ctx->pc = 0x80B15254u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15254u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B15254: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B15254u)) return;
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
label_80B15258:
    ctx->pc = 0x80B15258u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15258u)) return;
    // 80B15258: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B1525C:
    ctx->pc = 0x80B1525Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1525Cu)) return;
    // 80B1525C: addi    r5, r5, -24712
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24712);

label_80B15260:
    ctx->pc = 0x80B15260u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15260u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B15260: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B15260u)) return;
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
label_80B15264:
    ctx->pc = 0x80B15264u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15264u)) return;
    // 80B15264: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B15268:
    ctx->pc = 0x80B15268u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15268u)) return;
    // 80B15268: addi    r5, r5, -24708
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24708);

label_80B1526C:
    ctx->pc = 0x80B1526Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1526Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B1526C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B1526Cu)) return;
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
label_80B15270:
    ctx->pc = 0x80B15270u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15270u)) return;
    // 80B15270: bl      0x8045C750
    {
            ctx->lr = 0x80B15274u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B15274:
    ctx->pc = 0x80B15274u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15274u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80B15274: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B15278:
    ctx->pc = 0x80B15278u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15278u)) return;
    // 80B15278: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B1527C:
    ctx->pc = 0x80B1527Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1527Cu)) return;
    // 80B1527C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80B15280:
    ctx->pc = 0x80B15280u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15280u)) return;
    // 80B15280: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B15284:
    ctx->pc = 0x80B15284u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15284u)) return;
    // 80B15284: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B15288:
    ctx->pc = 0x80B15288u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15288u)) return;
    // 80B15288: bl      0x8045C7B4
    {
            ctx->lr = 0x80B1528Cu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B1528C:
    ctx->pc = 0x80B1528Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B1528Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B1528C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B15290:
    ctx->pc = 0x80B15290u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15290u)) return;
    // 80B15290: li      r4, 90
    ctx->gpr[4] = (u32)(s32)(90);

label_80B15294:
    ctx->pc = 0x80B15294u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15294u)) return;
    // 80B15294: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B15298:
    ctx->pc = 0x80B15298u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15298u)) return;
    // 80B15298: addi    r5, r5, -24716
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24716);

label_80B1529C:
    ctx->pc = 0x80B1529Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1529Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B1529C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B1529Cu)) return;
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
label_80B152A0:
    ctx->pc = 0x80B152A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B152A0u)) return;
    // 80B152A0: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B152A4:
    ctx->pc = 0x80B152A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B152A4u)) return;
    // 80B152A4: addi    r5, r5, -24704
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24704);

label_80B152A8:
    ctx->pc = 0x80B152A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B152A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B152A8: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B152A8u)) return;
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
label_80B152AC:
    ctx->pc = 0x80B152ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B152ACu)) return;
    // 80B152AC: lis     r5, -27591
    ctx->gpr[5] = ((u32)(s32)(-27591) << 16);

label_80B152B0:
    ctx->pc = 0x80B152B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B152B0u)) return;
    // 80B152B0: addi    r5, r5, -24700
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24700);

label_80B152B4:
    ctx->pc = 0x80B152B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B152B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B152B4: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B152B4u)) return;
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
label_80B152B8:
    ctx->pc = 0x80B152B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B152B8u)) return;
    // 80B152B8: bl      0x8045C750
    {
            ctx->lr = 0x80B152BCu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B152BC:
    ctx->pc = 0x80B152BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B152BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B152BC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B152C0:
    ctx->pc = 0x80B152C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B152C0u)) return;
    // 80B152C0: li      r4, 90
    ctx->gpr[4] = (u32)(s32)(90);

label_80B152C4:
    ctx->pc = 0x80B152C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B152C4u)) return;
    // 80B152C4: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80B152C8:
    ctx->pc = 0x80B152C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B152C8u)) return;
    // 80B152C8: addi    r5, r5, -1536
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-1536);

label_80B152CC:
    ctx->pc = 0x80B152CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B152CCu)) return;
    // 80B152CC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B152D0:
    ctx->pc = 0x80B152D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B152D0u)) return;
    // 80B152D0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B152D4:
    ctx->pc = 0x80B152D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B152D4u)) return;
    // 80B152D4: bl      0x8045C7B4
    {
            ctx->lr = 0x80B152D8u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B152D8:
    ctx->pc = 0x80B152D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B152D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B152D8: li      r3, 100
    ctx->gpr[3] = (u32)(s32)(100);

label_80B152DC:
    ctx->pc = 0x80B152DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B152DCu)) return;
    // 80B152DC: bl      0x8045F7C8
    {
            ctx->lr = 0x80B152E0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B152E0:
    ctx->pc = 0x80B152E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B152E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B152E0: b       0x80B15368
    {
            goto label_80B15368;
    }

label_80B152E4:
    ctx->pc = 0x80B152E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B152E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B152E4: bl      0x80B159C0
    {
            ctx->lr = 0x80B152E8u;
            goto label_80B159C0;
    }

label_80B152E8:
    ctx->pc = 0x80B152E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B152E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B152E8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B152EC:
    ctx->pc = 0x80B152ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B152ECu)) return;
    // 80B152EC: bl      0x8045F220
    {
            ctx->lr = 0x80B152F0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B152F0:
    ctx->pc = 0x80B152F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B152F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B152F0: lis     r4, -27591
    ctx->gpr[4] = ((u32)(s32)(-27591) << 16);

label_80B152F4:
    ctx->pc = 0x80B152F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B152F4u)) return;
    // 80B152F4: addi    r4, r4, -24768
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24768);

label_80B152F8:
    ctx->pc = 0x80B152F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B152F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B152F8: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B152F8u)) return;
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
label_80B152FC:
    ctx->pc = 0x80B152FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B152FCu)) return;
    // 80B152FC: lis     r4, -27591
    ctx->gpr[4] = ((u32)(s32)(-27591) << 16);

label_80B15300:
    ctx->pc = 0x80B15300u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15300u)) return;
    // 80B15300: addi    r4, r4, -24764
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24764);

label_80B15304:
    ctx->pc = 0x80B15304u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15304u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B15304: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B15304u)) return;
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
label_80B15308:
    ctx->pc = 0x80B15308u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15308u)) return;
    // 80B15308: lis     r4, -27591
    ctx->gpr[4] = ((u32)(s32)(-27591) << 16);

label_80B1530C:
    ctx->pc = 0x80B1530Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1530Cu)) return;
    // 80B1530C: addi    r4, r4, -24760
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24760);

label_80B15310:
    ctx->pc = 0x80B15310u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15310u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B15310: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B15310u)) return;
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
label_80B15314:
    ctx->pc = 0x80B15314u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15314u)) return;
    // 80B15314: bl      0x8045EF2C
    {
            ctx->lr = 0x80B15318u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80B15318:
    ctx->pc = 0x80B15318u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15318u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B15318: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B1531C:
    ctx->pc = 0x80B1531Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1531Cu)) return;
    // 80B1531C: bl      0x8045F220
    {
            ctx->lr = 0x80B15320u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B15320:
    ctx->pc = 0x80B15320u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15320u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B15320: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B15324:
    ctx->pc = 0x80B15324u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15324u)) return;
    // 80B15324: li      r5, 31840
    ctx->gpr[5] = (u32)(s32)(31840);

label_80B15328:
    ctx->pc = 0x80B15328u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15328u)) return;
    // 80B15328: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B1532C:
    ctx->pc = 0x80B1532Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1532Cu)) return;
    // 80B1532C: bl      0x8045EEA8
    {
            ctx->lr = 0x80B15330u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80B15330:
    ctx->pc = 0x80B15330u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15330u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B15330: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B15334:
    ctx->pc = 0x80B15334u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15334u)) return;
    // 80B15334: bl      0x8045EC10
    {
            ctx->lr = 0x80B15338u;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80B15338:
    ctx->pc = 0x80B15338u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15338u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B15338: lis     r3, -27591
    ctx->gpr[3] = ((u32)(s32)(-27591) << 16);

label_80B1533C:
    ctx->pc = 0x80B1533Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1533Cu)) return;
    // 80B1533C: addi    r3, r3, -12352
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-12352);

label_80B15340:
    ctx->pc = 0x80B15340u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15340u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B15340: lwz     r3, 0(r3)
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
label_80B15344:
    ctx->pc = 0x80B15344u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15344u)) return;
    // 80B15344: cmplwi  r3, 0x0000
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

label_80B15348:
    ctx->pc = 0x80B15348u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15348u)) return;
    // 80B15348: bc    12, 2, 0x80B15360
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B15360;
        }
    }

label_80B1534C:
    ctx->pc = 0x80B1534Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B1534Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B1534C: bl      0x8050F9E0
    {
            ctx->lr = 0x80B15350u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80B15350:
    ctx->pc = 0x80B15350u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15350u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B15350: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80B15354:
    ctx->pc = 0x80B15354u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15354u)) return;
    // 80B15354: lis     r3, -27591
    ctx->gpr[3] = ((u32)(s32)(-27591) << 16);

label_80B15358:
    ctx->pc = 0x80B15358u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15358u)) return;
    // 80B15358: addi    r3, r3, -12352
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-12352);

label_80B1535C:
    ctx->pc = 0x80B1535Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1535Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B1535C: stw     r0, 0(r3)
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
label_80B15360:
    ctx->pc = 0x80B15360u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15360u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B15360: bl      0x8045DE34
    {
            ctx->lr = 0x80B15364u;
            ctx->pc = 0x8045DE34u;
            return;
    }

label_80B15364:
    ctx->pc = 0x80B15364u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15364u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B15364: bl      0x80460A80
    {
            ctx->lr = 0x80B15368u;
            ctx->pc = 0x80460A80u;
            return;
    }

label_80B15368:
    ctx->pc = 0x80B15368u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15368u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B15368: lwz     r0, 20(r1)
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
label_80B1536C:
    ctx->pc = 0x80B1536Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B1536Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B1536C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B15370:
    ctx->pc = 0x80B15370u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15370u)) return;
    // 80B15370: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B15374:
    ctx->pc = 0x80B15374u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15374u)) return;
    // 80B15374: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B14E40;
        }
    }

label_80B15378:
    ctx->pc = 0x80B15378u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15378u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B15378: stwu     r1, -64(r1)
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
label_80B1537C:
    ctx->pc = 0x80B1537Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1537Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B1537C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B15380:
    ctx->pc = 0x80B15380u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15380u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B15380: stw     r0, 68(r1)
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
label_80B15384:
    ctx->pc = 0x80B15384u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15384u)) return;
    // 80B15384: addi    r11, r1, 64
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(64);

label_80B15388:
    ctx->pc = 0x80B15388u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15388u)) return;
    // 80B15388: bl      0x80006DD4
    {
            ctx->lr = 0x80B1538Cu;
            ctx->pc = 0x80006DD4u;
            return;
    }

label_80B1538C:
    ctx->pc = 0x80B1538Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 29u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B1538Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 29u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80B1538C: lwz     r27, 32(r3)
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
label_80B15390:
    ctx->pc = 0x80B15390u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15390u)) return;
    // 80B15390: lis     r3, -27591
    ctx->gpr[3] = ((u32)(s32)(-27591) << 16);

label_80B15394:
    ctx->pc = 0x80B15394u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15394u)) return;
    // 80B15394: addi    r3, r3, -24696
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24696);

label_80B15398:
    ctx->pc = 0x80B15398u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15398u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80B15398: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B15398u)) return;
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
label_80B1539C:
    ctx->pc = 0x80B1539Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1539Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80B1539C: lfs     f0, 44(r27)
    if (!ppc_fp_available_inline(ctx, 0x80B1539Cu)) return;
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
label_80B153A0:
    ctx->pc = 0x80B153A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B153A0u)) return;
    // 80B153A0: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80B153A0u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80B153A4:
    ctx->pc = 0x80B153A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B153A4u)) return;
    // 80B153A4: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80B153A4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80B153A8:
    ctx->pc = 0x80B153A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B153A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80B153A8: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B153A8u)) return;
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
label_80B153AC:
    ctx->pc = 0x80B153ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B153ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80B153AC: lwz     r31, 12(r1)
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
label_80B153B0:
    ctx->pc = 0x80B153B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B153B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80B153B0: lfs     f0, 32(r27)
    if (!ppc_fp_available_inline(ctx, 0x80B153B0u)) return;
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
label_80B153B4:
    ctx->pc = 0x80B153B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B153B4u)) return;
    // 80B153B4: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80B153B4u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80B153B8:
    ctx->pc = 0x80B153B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B153B8u)) return;
    // 80B153B8: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80B153B8u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80B153BC:
    ctx->pc = 0x80B153BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B153BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80B153BC: stfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B153BCu)) return;
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
label_80B153C0:
    ctx->pc = 0x80B153C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B153C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80B153C0: lwz     r30, 20(r1)
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
label_80B153C4:
    ctx->pc = 0x80B153C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B153C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80B153C4: lfs     f0, 36(r27)
    if (!ppc_fp_available_inline(ctx, 0x80B153C4u)) return;
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
label_80B153C8:
    ctx->pc = 0x80B153C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B153C8u)) return;
    // 80B153C8: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80B153C8u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80B153CC:
    ctx->pc = 0x80B153CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B153CCu)) return;
    // 80B153CC: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80B153CCu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80B153D0:
    ctx->pc = 0x80B153D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B153D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B153D0: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B153D0u)) return;
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
label_80B153D4:
    ctx->pc = 0x80B153D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B153D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B153D4: lwz     r29, 28(r1)
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
label_80B153D8:
    ctx->pc = 0x80B153D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B153D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B153D8: lfs     f0, 40(r27)
    if (!ppc_fp_available_inline(ctx, 0x80B153D8u)) return;
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
label_80B153DC:
    ctx->pc = 0x80B153DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B153DCu)) return;
    // 80B153DC: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80B153DCu)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80B153E0:
    ctx->pc = 0x80B153E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B153E0u)) return;
    // 80B153E0: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80B153E0u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80B153E4:
    ctx->pc = 0x80B153E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B153E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B153E4: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B153E4u)) return;
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
label_80B153E8:
    ctx->pc = 0x80B153E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B153E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B153E8: lwz     r28, 36(r1)
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
label_80B153EC:
    ctx->pc = 0x80B153ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B153ECu)) return;
    // 80B153EC: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80B153F0:
    ctx->pc = 0x80B153F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B153F0u)) return;
    // 80B153F0: addi    r3, r3, 4120
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4120);

label_80B153F4:
    ctx->pc = 0x80B153F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B153F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B153F4: lwz     r0, 0(r3)
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
label_80B153F8:
    ctx->pc = 0x80B153F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B153F8u)) return;
    // 80B153F8: cmpwi   r0, 0
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

label_80B153FC:
    ctx->pc = 0x80B153FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B153FCu)) return;
    // 80B153FC: bc    4, 2, 0x80B154B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B154B4;
        }
    }

label_80B15400:
    ctx->pc = 0x80B15400u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15400u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B15400: rlwinm r0, r31, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_80B15404:
    ctx->pc = 0x80B15404u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15404u)) return;
    // 80B15404: cmplwi  r0, 0x0000
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

label_80B15408:
    ctx->pc = 0x80B15408u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15408u)) return;
    // 80B15408: bc    12, 2, 0x80B154B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B154B4;
        }
    }

label_80B1540C:
    ctx->pc = 0x80B1540Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B1540Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B1540C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B15410:
    ctx->pc = 0x80B15410u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15410u)) return;
    // 80B15410: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_80B15414:
    ctx->pc = 0x80B15414u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15414u)) return;
    // 80B15414: bl      0x8060F4F8
    {
            ctx->lr = 0x80B15418u;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80B15418:
    ctx->pc = 0x80B15418u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15418u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B15418: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B1541C:
    ctx->pc = 0x80B1541Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1541Cu)) return;
    // 80B1541C: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80B15420:
    ctx->pc = 0x80B15420u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15420u)) return;
    // 80B15420: bl      0x8060F4F8
    {
            ctx->lr = 0x80B15424u;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80B15424:
    ctx->pc = 0x80B15424u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15424u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B15424: lfs     f5, 52(r27)
    if (!ppc_fp_available_inline(ctx, 0x80B15424u)) return;
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
label_80B15428:
    ctx->pc = 0x80B15428u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15428u)) return;
    // 80B15428: lis     r3, -27591
    ctx->gpr[3] = ((u32)(s32)(-27591) << 16);

label_80B1542C:
    ctx->pc = 0x80B1542Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1542Cu)) return;
    // 80B1542C: addi    r3, r3, -24688
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24688);

label_80B15430:
    ctx->pc = 0x80B15430u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15430u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B15430: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B15430u)) return;
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
label_80B15434:
    ctx->pc = 0x80B15434u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15434u)) return;
    // 80B15434: fcmpo   cr0, f5, f0
    if (!ppc_fp_available_inline(ctx, 0x80B15434u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[5], ctx->fpr[0], true);

label_80B15438:
    ctx->pc = 0x80B15438u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15438u)) return;
    // 80B15438: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80B1543C:
    ctx->pc = 0x80B1543Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1543Cu)) return;
    // 80B1543C: bc    4, 2, 0x80B15450
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B15450;
        }
    }

label_80B15440:
    ctx->pc = 0x80B15440u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15440u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B15440: lis     r3, -27591
    ctx->gpr[3] = ((u32)(s32)(-27591) << 16);

label_80B15444:
    ctx->pc = 0x80B15444u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15444u)) return;
    // 80B15444: addi    r3, r3, -24692
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24692);

label_80B15448:
    ctx->pc = 0x80B15448u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15448u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B15448: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B15448u)) return;
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
label_80B1544C:
    ctx->pc = 0x80B1544Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1544Cu)) return;
    // 80B1544C: fadds   f5, f5, f0
    if (!ppc_fp_available_inline(ctx, 0x80B1544Cu)) return;
    ppc_fadds(ctx, 5, 5, 0);

label_80B15450:
    ctx->pc = 0x80B15450u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15450u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B15450: rlwinm r0, r31, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_80B15454:
    ctx->pc = 0x80B15454u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15454u)) return;
    // 80B15454: cmplwi  r0, 0x00FF
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

label_80B15458:
    ctx->pc = 0x80B15458u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15458u)) return;
    // 80B15458: bc    4, 1, 0x80B15460
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B15460;
        }
    }

label_80B1545C:
    ctx->pc = 0x80B1545Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B1545Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B1545C: li      r31, 255
    ctx->gpr[31] = (u32)(s32)(255);

label_80B15460:
    ctx->pc = 0x80B15460u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 21u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15460u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 21u : 1u;
    // 80B15460: lis     r3, -27591
    ctx->gpr[3] = ((u32)(s32)(-27591) << 16);

label_80B15464:
    ctx->pc = 0x80B15464u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15464u)) return;
    // 80B15464: addi    r3, r3, -24684
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24684);

label_80B15468:
    ctx->pc = 0x80B15468u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15468u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80B15468: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B15468u)) return;
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
label_80B1546C:
    ctx->pc = 0x80B1546Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1546Cu)) return;
    // 80B1546C: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80B1546Cu)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_80B15470:
    ctx->pc = 0x80B15470u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15470u)) return;
    // 80B15470: lis     r3, -27591
    ctx->gpr[3] = ((u32)(s32)(-27591) << 16);

label_80B15474:
    ctx->pc = 0x80B15474u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15474u)) return;
    // 80B15474: addi    r3, r3, -24680
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24680);

label_80B15478:
    ctx->pc = 0x80B15478u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15478u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80B15478: lfs     f3, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B15478u)) return;
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
label_80B1547C:
    ctx->pc = 0x80B1547Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1547Cu)) return;
    // 80B1547C: lis     r3, -27591
    ctx->gpr[3] = ((u32)(s32)(-27591) << 16);

label_80B15480:
    ctx->pc = 0x80B15480u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15480u)) return;
    // 80B15480: addi    r3, r3, -24676
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24676);

label_80B15484:
    ctx->pc = 0x80B15484u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15484u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B15484: lfs     f4, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B15484u)) return;
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
label_80B15488:
    ctx->pc = 0x80B15488u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15488u)) return;
    // 80B15488: rlwinm r5, r28, 0, 24, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[28], 0u) & 0x000000FFu;
    }

label_80B1548C:
    ctx->pc = 0x80B1548Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1548Cu)) return;
    // 80B1548C: rlwinm r0, r29, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[29], 0u) & 0x000000FFu;
    }

label_80B15490:
    ctx->pc = 0x80B15490u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15490u)) return;
    // 80B15490: rlwinm r4, r0, 8, 0, 23
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 8u) & 0xFFFFFF00u;
    }

label_80B15494:
    ctx->pc = 0x80B15494u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15494u)) return;
    // 80B15494: rlwinm r0, r31, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_80B15498:
    ctx->pc = 0x80B15498u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15498u)) return;
    // 80B15498: rlwinm r3, r0, 24, 0, 7
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 24u) & 0xFF000000u;
    }

label_80B1549C:
    ctx->pc = 0x80B1549Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1549Cu)) return;
    // 80B1549C: rlwinm r0, r30, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0x000000FFu;
    }

label_80B154A0:
    ctx->pc = 0x80B154A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B154A0u)) return;
    // 80B154A0: rlwinm r0, r0, 16, 0, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 16u) & 0xFFFF0000u;
    }

label_80B154A4:
    ctx->pc = 0x80B154A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B154A4u)) return;
    // 80B154A4: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80B154A8:
    ctx->pc = 0x80B154A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B154A8u)) return;
    // 80B154A8: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_80B154AC:
    ctx->pc = 0x80B154ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B154ACu)) return;
    // 80B154AC: or   r3, r5, r0
    {
        ctx->gpr[3] = ctx->gpr[5] | ctx->gpr[0];
    }

label_80B154B0:
    ctx->pc = 0x80B154B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B154B0u)) return;
    // 80B154B0: bl      0x80B15670
    {
            ctx->lr = 0x80B154B4u;
            goto label_80B15670;
    }

label_80B154B4:
    ctx->pc = 0x80B154B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B154B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B154B4: addi    r11, r1, 64
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(64);

label_80B154B8:
    ctx->pc = 0x80B154B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B154B8u)) return;
    // 80B154B8: bl      0x80006E20
    {
            ctx->lr = 0x80B154BCu;
            ctx->pc = 0x80006E20u;
            return;
    }

label_80B154BC:
    ctx->pc = 0x80B154BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B154BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B154BC: lwz     r0, 68(r1)
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
label_80B154C0:
    ctx->pc = 0x80B154C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B154C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B154C0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B154C4:
    ctx->pc = 0x80B154C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B154C4u)) return;
    // 80B154C4: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_80B154C8:
    ctx->pc = 0x80B154C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B154C8u)) return;
    // 80B154C8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B14E40;
        }
    }

label_80B154CC:
    ctx->pc = 0x80B154CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B154CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B154CC: stwu     r1, -16(r1)
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
label_80B154D0:
    ctx->pc = 0x80B154D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B154D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B154D0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B154D4:
    ctx->pc = 0x80B154D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B154D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B154D4: stw     r0, 20(r1)
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
label_80B154D8:
    ctx->pc = 0x80B154D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B154D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B154D8: lwz     r5, 32(r3)
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
label_80B154DC:
    ctx->pc = 0x80B154DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B154DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B154DC: lfs     f1, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B154DCu)) return;
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
label_80B154E0:
    ctx->pc = 0x80B154E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B154E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B154E0: lfs     f0, 48(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B154E0u)) return;
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
label_80B154E4:
    ctx->pc = 0x80B154E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B154E4u)) return;
    // 80B154E4: fadds   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80B154E4u)) return;
    ppc_fadds(ctx, 1, 1, 0);

label_80B154E8:
    ctx->pc = 0x80B154E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B154E8u)) return;
    // 80B154E8: lis     r4, -27591
    ctx->gpr[4] = ((u32)(s32)(-27591) << 16);

label_80B154EC:
    ctx->pc = 0x80B154ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B154ECu)) return;
    // 80B154EC: addi    r4, r4, -24672
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24672);

label_80B154F0:
    ctx->pc = 0x80B154F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B154F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B154F0: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B154F0u)) return;
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
label_80B154F4:
    ctx->pc = 0x80B154F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B154F4u)) return;
    // 80B154F4: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80B154F4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80B154F8:
    ctx->pc = 0x80B154F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B154F8u)) return;
    // 80B154F8: bc    4, 1, 0x80B15504
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B15504;
        }
    }

label_80B154FC:
    ctx->pc = 0x80B154FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B154FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B154FC: fmr    f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80B154FCu)) return;
    ctx->fpr[1] = ctx->fpr[0];

label_80B15500:
    ctx->pc = 0x80B15500u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15500u)) return;
    // 80B15500: b       0x80B1551C
    {
            goto label_80B1551C;
    }

label_80B15504:
    ctx->pc = 0x80B15504u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15504u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B15504: lis     r4, -27591
    ctx->gpr[4] = ((u32)(s32)(-27591) << 16);

label_80B15508:
    ctx->pc = 0x80B15508u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15508u)) return;
    // 80B15508: addi    r4, r4, -24684
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24684);

label_80B1550C:
    ctx->pc = 0x80B1550Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1550Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B1550C: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B1550Cu)) return;
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
label_80B15510:
    ctx->pc = 0x80B15510u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15510u)) return;
    // 80B15510: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80B15510u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80B15514:
    ctx->pc = 0x80B15514u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15514u)) return;
    // 80B15514: bc    4, 0, 0x80B1551C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B1551C;
        }
    }

label_80B15518:
    ctx->pc = 0x80B15518u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15518u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B15518: fmr    f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80B15518u)) return;
    ctx->fpr[1] = ctx->fpr[0];

label_80B1551C:
    ctx->pc = 0x80B1551Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B1551Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B1551C: stfs     f1, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B1551Cu)) return;
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
label_80B15520:
    ctx->pc = 0x80B15520u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15520u)) return;
    // 80B15520: bl      0x80B15378
    {
            ctx->lr = 0x80B15524u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80B15378u;
                return;
            }
            goto label_80B15378;
    }

label_80B15524:
    ctx->pc = 0x80B15524u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15524u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B15524: lwz     r0, 20(r1)
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
label_80B15528:
    ctx->pc = 0x80B15528u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B15528u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B15528: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B1552C:
    ctx->pc = 0x80B1552Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1552Cu)) return;
    // 80B1552C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B15530:
    ctx->pc = 0x80B15530u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15530u)) return;
    // 80B15530: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B14E40;
        }
    }

label_80B15534:
    ctx->pc = 0x80B15534u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15534u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B15534: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B14E40;
        }
    }

label_80B15538:
    ctx->pc = 0x80B15538u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15538u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80B15538: stwu     r1, -16(r1)
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
label_80B1553C:
    ctx->pc = 0x80B1553Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1553Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B1553C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B15540:
    ctx->pc = 0x80B15540u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15540u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B15540: stw     r0, 20(r1)
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
label_80B15544:
    ctx->pc = 0x80B15544u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15544u)) return;
    // 80B15544: lis     r4, -32591
    ctx->gpr[4] = ((u32)(s32)(-32591) << 16);

label_80B15548:
    ctx->pc = 0x80B15548u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15548u)) return;
    // 80B15548: addi    r0, r4, 21708
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(21708);

label_80B1554C:
    ctx->pc = 0x80B1554Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1554Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B1554C: stw     r0, 16(r3)
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
label_80B15550:
    ctx->pc = 0x80B15550u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15550u)) return;
    // 80B15550: lis     r4, -32591
    ctx->gpr[4] = ((u32)(s32)(-32591) << 16);

label_80B15554:
    ctx->pc = 0x80B15554u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15554u)) return;
    // 80B15554: addi    r0, r4, 21368
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(21368);

label_80B15558:
    ctx->pc = 0x80B15558u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15558u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B15558: stw     r0, 20(r3)
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
label_80B1555C:
    ctx->pc = 0x80B1555Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1555Cu)) return;
    // 80B1555C: lis     r4, -32591
    ctx->gpr[4] = ((u32)(s32)(-32591) << 16);

label_80B15560:
    ctx->pc = 0x80B15560u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15560u)) return;
    // 80B15560: addi    r0, r4, 21812
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(21812);

label_80B15564:
    ctx->pc = 0x80B15564u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15564u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B15564: stw     r0, 24(r3)
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
label_80B15568:
    ctx->pc = 0x80B15568u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15568u)) return;
    // 80B15568: bl      0x80B154CC
    {
            ctx->lr = 0x80B1556Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80B154CCu;
                return;
            }
            goto label_80B154CC;
    }

label_80B1556C:
    ctx->pc = 0x80B1556Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B1556Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B1556C: lwz     r0, 20(r1)
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
label_80B15570:
    ctx->pc = 0x80B15570u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B15570u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B15570: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B15574:
    ctx->pc = 0x80B15574u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15574u)) return;
    // 80B15574: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B15578:
    ctx->pc = 0x80B15578u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15578u)) return;
    // 80B15578: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B14E40;
        }
    }

label_80B1557C:
    ctx->pc = 0x80B1557Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 23u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B1557Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 23u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80B1557C: stwu     r1, -96(r1)
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
label_80B15580:
    ctx->pc = 0x80B15580u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15580u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80B15580: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B15584:
    ctx->pc = 0x80B15584u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15584u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80B15584: stw     r0, 100(r1)
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
label_80B15588:
    ctx->pc = 0x80B15588u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15588u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80B15588: stfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B15588u)) return;
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
label_80B1558C:
    ctx->pc = 0x80B1558Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1558Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80B1558C: psq_st   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80B1558Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80B1558Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B15590:
    ctx->pc = 0x80B15590u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15590u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80B15590: stfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B15590u)) return;
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
label_80B15594:
    ctx->pc = 0x80B15594u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15594u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80B15594: psq_st   f30, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80B15594u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x80B15594u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B15598:
    ctx->pc = 0x80B15598u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15598u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80B15598: stfd     f29, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B15598u)) return;
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
label_80B1559C:
    ctx->pc = 0x80B1559Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1559Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80B1559C: psq_st   f29, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80B1559Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x80B1559Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B155A0:
    ctx->pc = 0x80B155A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B155A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80B155A0: stfd     f28, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B155A0u)) return;
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
label_80B155A4:
    ctx->pc = 0x80B155A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B155A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80B155A4: psq_st   f28, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80B155A4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x80B155A4u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B155A8:
    ctx->pc = 0x80B155A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B155A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B155A8: stfd     f27, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B155A8u)) return;
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
label_80B155AC:
    ctx->pc = 0x80B155ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B155ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B155AC: psq_st   f27, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80B155ACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_store_inline(ctx, 27u, ea, false, 0u, false, 0x80B155ACu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B155B0:
    ctx->pc = 0x80B155B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B155B0u)) return;
    // 80B155B0: fmr    f27, f1
    if (!ppc_fp_available_inline(ctx, 0x80B155B0u)) return;
    ctx->fpr[27] = ctx->fpr[1];

label_80B155B4:
    ctx->pc = 0x80B155B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B155B4u)) return;
    // 80B155B4: fmr    f28, f2
    if (!ppc_fp_available_inline(ctx, 0x80B155B4u)) return;
    ctx->fpr[28] = ctx->fpr[2];

label_80B155B8:
    ctx->pc = 0x80B155B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B155B8u)) return;
    // 80B155B8: fmr    f29, f3
    if (!ppc_fp_available_inline(ctx, 0x80B155B8u)) return;
    ctx->fpr[29] = ctx->fpr[3];

label_80B155BC:
    ctx->pc = 0x80B155BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B155BCu)) return;
    // 80B155BC: fmr    f30, f4
    if (!ppc_fp_available_inline(ctx, 0x80B155BCu)) return;
    ctx->fpr[30] = ctx->fpr[4];

label_80B155C0:
    ctx->pc = 0x80B155C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B155C0u)) return;
    // 80B155C0: fmr    f31, f5
    if (!ppc_fp_available_inline(ctx, 0x80B155C0u)) return;
    ctx->fpr[31] = ctx->fpr[5];

label_80B155C4:
    ctx->pc = 0x80B155C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B155C4u)) return;
    // 80B155C4: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B155C8:
    ctx->pc = 0x80B155C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B155C8u)) return;
    // 80B155C8: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80B155CC:
    ctx->pc = 0x80B155CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B155CCu)) return;
    // 80B155CC: lis     r5, -32591
    ctx->gpr[5] = ((u32)(s32)(-32591) << 16);

label_80B155D0:
    ctx->pc = 0x80B155D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B155D0u)) return;
    // 80B155D0: addi    r5, r5, 21816
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(21816);

label_80B155D4:
    ctx->pc = 0x80B155D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B155D4u)) return;
    // 80B155D4: bl      0x8050FD60
    {
            ctx->lr = 0x80B155D8u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80B155D8:
    ctx->pc = 0x80B155D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 25u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B155D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 25u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80B155D8: lwz     r5, 32(r3)
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
label_80B155DC:
    ctx->pc = 0x80B155DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B155DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80B155DC: stfs     f27, 48(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B155DCu)) return;
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
label_80B155E0:
    ctx->pc = 0x80B155E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B155E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80B155E0: stfs     f28, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B155E0u)) return;
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
label_80B155E4:
    ctx->pc = 0x80B155E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B155E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80B155E4: stfs     f29, 32(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B155E4u)) return;
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
label_80B155E8:
    ctx->pc = 0x80B155E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B155E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80B155E8: stfs     f30, 36(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B155E8u)) return;
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
label_80B155EC:
    ctx->pc = 0x80B155ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B155ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80B155EC: stfs     f31, 40(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B155ECu)) return;
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
label_80B155F0:
    ctx->pc = 0x80B155F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B155F0u)) return;
    // 80B155F0: lis     r4, -27591
    ctx->gpr[4] = ((u32)(s32)(-27591) << 16);

label_80B155F4:
    ctx->pc = 0x80B155F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B155F4u)) return;
    // 80B155F4: addi    r4, r4, -24688
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24688);

label_80B155F8:
    ctx->pc = 0x80B155F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B155F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80B155F8: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B155F8u)) return;
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
label_80B155FC:
    ctx->pc = 0x80B155FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B155FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80B155FC: stfs     f0, 52(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B155FCu)) return;
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
label_80B15600:
    ctx->pc = 0x80B15600u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15600u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80B15600: psq_l   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80B15600u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80B15600u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B15604:
    ctx->pc = 0x80B15604u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15604u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80B15604: lfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B15604u)) return;
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
label_80B15608:
    ctx->pc = 0x80B15608u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15608u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80B15608: psq_l   f30, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80B15608u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x80B15608u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B1560C:
    ctx->pc = 0x80B1560Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1560Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B1560C: lfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B1560Cu)) return;
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
label_80B15610:
    ctx->pc = 0x80B15610u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15610u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B15610: psq_l   f29, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80B15610u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x80B15610u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B15614:
    ctx->pc = 0x80B15614u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15614u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B15614: lfd     f29, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B15614u)) return;
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
label_80B15618:
    ctx->pc = 0x80B15618u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15618u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B15618: psq_l   f28, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80B15618u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x80B15618u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B1561C:
    ctx->pc = 0x80B1561Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1561Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B1561C: lfd     f28, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B1561Cu)) return;
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
label_80B15620:
    ctx->pc = 0x80B15620u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15620u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B15620: psq_l   f27, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80B15620u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_load_inline(ctx, 27u, ea, false, 0u, false, 0x80B15620u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B15624:
    ctx->pc = 0x80B15624u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15624u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B15624: lfd     f27, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B15624u)) return;
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
label_80B15628:
    ctx->pc = 0x80B15628u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15628u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B15628: lwz     r0, 100(r1)
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
label_80B1562C:
    ctx->pc = 0x80B1562Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B1562Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B1562C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B15630:
    ctx->pc = 0x80B15630u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15630u)) return;
    // 80B15630: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_80B15634:
    ctx->pc = 0x80B15634u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15634u)) return;
    // 80B15634: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B14E40;
        }
    }

label_80B15638:
    ctx->pc = 0x80B15638u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15638u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B15638: lwz     r3, 32(r3)
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
label_80B1563C:
    ctx->pc = 0x80B1563Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1563Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B1563C: stfs     f1, 48(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B1563Cu)) return;
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
label_80B15640:
    ctx->pc = 0x80B15640u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15640u)) return;
    // 80B15640: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B14E40;
        }
    }

label_80B15644:
    ctx->pc = 0x80B15644u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15644u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B15644: lwz     r3, 32(r3)
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
label_80B15648:
    ctx->pc = 0x80B15648u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15648u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B15648: stfs     f1, 44(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B15648u)) return;
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
label_80B1564C:
    ctx->pc = 0x80B1564Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1564Cu)) return;
    // 80B1564C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B14E40;
        }
    }

label_80B15650:
    ctx->pc = 0x80B15650u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15650u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B15650: lwz     r3, 32(r3)
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
label_80B15654:
    ctx->pc = 0x80B15654u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15654u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B15654: stfs     f1, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B15654u)) return;
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
label_80B15658:
    ctx->pc = 0x80B15658u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15658u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B15658: stfs     f2, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B15658u)) return;
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
label_80B1565C:
    ctx->pc = 0x80B1565Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1565Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B1565C: stfs     f3, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B1565Cu)) return;
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
label_80B15660:
    ctx->pc = 0x80B15660u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15660u)) return;
    // 80B15660: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B14E40;
        }
    }

label_80B15664:
    ctx->pc = 0x80B15664u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15664u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B15664: lwz     r3, 32(r3)
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
label_80B15668:
    ctx->pc = 0x80B15668u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15668u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B15668: stfs     f1, 52(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B15668u)) return;
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
label_80B1566C:
    ctx->pc = 0x80B1566Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1566Cu)) return;
    // 80B1566C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B14E40;
        }
    }

label_80B15670:
    ctx->pc = 0x80B15670u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15670u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B15670: stwu     r1, -16(r1)
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
label_80B15674:
    ctx->pc = 0x80B15674u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15674u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B15674: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B15678:
    ctx->pc = 0x80B15678u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15678u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B15678: stw     r0, 20(r1)
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
label_80B1567C:
    ctx->pc = 0x80B1567Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1567Cu)) return;
    // 80B1567C: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80B15680:
    ctx->pc = 0x80B15680u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15680u)) return;
    // 80B15680: bl      0x80607948
    {
            ctx->lr = 0x80B15684u;
            ctx->pc = 0x80607948u;
            return;
    }

label_80B15684:
    ctx->pc = 0x80B15684u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15684u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B15684: lwz     r0, 20(r1)
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
label_80B15688:
    ctx->pc = 0x80B15688u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B15688u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B15688: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B1568C:
    ctx->pc = 0x80B1568Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1568Cu)) return;
    // 80B1568C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B15690:
    ctx->pc = 0x80B15690u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15690u)) return;
    // 80B15690: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B14E40;
        }
    }

label_80B15694:
    ctx->pc = 0x80B15694u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15694u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B15694: stwu     r1, -16(r1)
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
label_80B15698:
    ctx->pc = 0x80B15698u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15698u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B15698: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B1569C:
    ctx->pc = 0x80B1569Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1569Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B1569C: stw     r0, 20(r1)
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
label_80B156A0:
    ctx->pc = 0x80B156A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B156A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B156A0: lwz     r3, 32(r3)
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
label_80B156A4:
    ctx->pc = 0x80B156A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B156A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B156A4: lwz     r3, 16(r3)
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
label_80B156A8:
    ctx->pc = 0x80B156A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B156A8u)) return;
    // 80B156A8: bl      0x80509CF0
    {
            ctx->lr = 0x80B156ACu;
            ctx->pc = 0x80509CF0u;
            return;
    }

label_80B156AC:
    ctx->pc = 0x80B156ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B156ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B156AC: lwz     r0, 20(r1)
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
label_80B156B0:
    ctx->pc = 0x80B156B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B156B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B156B0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B156B4:
    ctx->pc = 0x80B156B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B156B4u)) return;
    // 80B156B4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B156B8:
    ctx->pc = 0x80B156B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B156B8u)) return;
    // 80B156B8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B14E40;
        }
    }

label_80B156BC:
    ctx->pc = 0x80B156BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B156BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B156BC: stwu     r1, -32(r1)
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
label_80B156C0:
    ctx->pc = 0x80B156C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B156C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B156C0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B156C4:
    ctx->pc = 0x80B156C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B156C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B156C4: stw     r0, 36(r1)
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
label_80B156C8:
    ctx->pc = 0x80B156C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B156C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B156C8: stw     r31, 28(r1)
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
label_80B156CC:
    ctx->pc = 0x80B156CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B156CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B156CC: stw     r30, 24(r1)
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
label_80B156D0:
    ctx->pc = 0x80B156D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B156D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B156D0: stw     r29, 20(r1)
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
label_80B156D4:
    ctx->pc = 0x80B156D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B156D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B156D4: lwz     r31, 32(r3)
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
label_80B156D8:
    ctx->pc = 0x80B156D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B156D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B156D8: lwz     r30, 16(r31)
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
label_80B156DC:
    ctx->pc = 0x80B156DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B156DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B156DC: lwz     r5, 28(r31)
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
label_80B156E0:
    ctx->pc = 0x80B156E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B156E0u)) return;
    // 80B156E0: cmpwi   r5, 0
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

label_80B156E4:
    ctx->pc = 0x80B156E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B156E4u)) return;
    // 80B156E4: bc    4, 1, 0x80B1571C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B1571C;
        }
    }

label_80B156E8:
    ctx->pc = 0x80B156E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B156E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80B156E8: lwz     r4, 24(r31)
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
label_80B156EC:
    ctx->pc = 0x80B156ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B156ECu)) return;
    // 80B156EC: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80B156F0:
    ctx->pc = 0x80B156F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B156F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80B156F0: lwz     r0, 20(r31)
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
label_80B156F4:
    ctx->pc = 0x80B156F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80B156F4u)) return;
    // 80B156F4: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80B156F8:
    ctx->pc = 0x80B156F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B156F8u)) return;
    // 80B156F8: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80B156FC:
    ctx->pc = 0x80B156FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80B156FCu)) return;
    // 80B156FC: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80B15700:
    ctx->pc = 0x80B15700u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15700u)) return;
    // 80B15700: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80B15704:
    ctx->pc = 0x80B15704u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15704u)) return;
    // 80B15704: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80B15708:
    ctx->pc = 0x80B15708u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15708u)) return;
    // 80B15708: bl      0x80509C74
    {
            ctx->lr = 0x80B1570Cu;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80B1570C:
    ctx->pc = 0x80B1570Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B1570Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B1570C: stw     r29, 20(r31)
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
label_80B15710:
    ctx->pc = 0x80B15710u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15710u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B15710: lwz     r3, 28(r31)
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
label_80B15714:
    ctx->pc = 0x80B15714u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15714u)) return;
    // 80B15714: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80B15718:
    ctx->pc = 0x80B15718u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15718u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B15718: stw     r0, 28(r31)
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
label_80B1571C:
    ctx->pc = 0x80B1571Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B1571Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B1571C: lwz     r5, 40(r31)
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
label_80B15720:
    ctx->pc = 0x80B15720u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15720u)) return;
    // 80B15720: cmpwi   r5, 0
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

label_80B15724:
    ctx->pc = 0x80B15724u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15724u)) return;
    // 80B15724: bc    4, 1, 0x80B1575C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B1575C;
        }
    }

label_80B15728:
    ctx->pc = 0x80B15728u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15728u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80B15728: lwz     r4, 36(r31)
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
label_80B1572C:
    ctx->pc = 0x80B1572Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1572Cu)) return;
    // 80B1572C: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80B15730:
    ctx->pc = 0x80B15730u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15730u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80B15730: lwz     r0, 32(r31)
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
label_80B15734:
    ctx->pc = 0x80B15734u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80B15734u)) return;
    // 80B15734: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80B15738:
    ctx->pc = 0x80B15738u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15738u)) return;
    // 80B15738: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80B1573C:
    ctx->pc = 0x80B1573Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80B1573Cu)) return;
    // 80B1573C: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80B15740:
    ctx->pc = 0x80B15740u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15740u)) return;
    // 80B15740: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80B15744:
    ctx->pc = 0x80B15744u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15744u)) return;
    // 80B15744: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80B15748:
    ctx->pc = 0x80B15748u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15748u)) return;
    // 80B15748: bl      0x80509BF8
    {
            ctx->lr = 0x80B1574Cu;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80B1574C:
    ctx->pc = 0x80B1574Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B1574Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B1574C: stw     r29, 32(r31)
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
label_80B15750:
    ctx->pc = 0x80B15750u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15750u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B15750: lwz     r3, 40(r31)
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
label_80B15754:
    ctx->pc = 0x80B15754u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15754u)) return;
    // 80B15754: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80B15758:
    ctx->pc = 0x80B15758u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15758u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B15758: stw     r0, 40(r31)
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
label_80B1575C:
    ctx->pc = 0x80B1575Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B1575Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B1575C: lwz     r5, 52(r31)
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
label_80B15760:
    ctx->pc = 0x80B15760u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15760u)) return;
    // 80B15760: cmpwi   r5, 0
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

label_80B15764:
    ctx->pc = 0x80B15764u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15764u)) return;
    // 80B15764: bc    4, 1, 0x80B1579C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B1579C;
        }
    }

label_80B15768:
    ctx->pc = 0x80B15768u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15768u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80B15768: lwz     r4, 48(r31)
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
label_80B1576C:
    ctx->pc = 0x80B1576Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1576Cu)) return;
    // 80B1576C: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80B15770:
    ctx->pc = 0x80B15770u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15770u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80B15770: lwz     r0, 44(r31)
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
label_80B15774:
    ctx->pc = 0x80B15774u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80B15774u)) return;
    // 80B15774: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80B15778:
    ctx->pc = 0x80B15778u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15778u)) return;
    // 80B15778: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80B1577C:
    ctx->pc = 0x80B1577Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80B1577Cu)) return;
    // 80B1577C: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80B15780:
    ctx->pc = 0x80B15780u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15780u)) return;
    // 80B15780: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80B15784:
    ctx->pc = 0x80B15784u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15784u)) return;
    // 80B15784: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80B15788:
    ctx->pc = 0x80B15788u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15788u)) return;
    // 80B15788: bl      0x80509B94
    {
            ctx->lr = 0x80B1578Cu;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80B1578C:
    ctx->pc = 0x80B1578Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B1578Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B1578C: stw     r29, 44(r31)
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
label_80B15790:
    ctx->pc = 0x80B15790u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15790u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B15790: lwz     r3, 52(r31)
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
label_80B15794:
    ctx->pc = 0x80B15794u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15794u)) return;
    // 80B15794: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80B15798:
    ctx->pc = 0x80B15798u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15798u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B15798: stw     r0, 52(r31)
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
label_80B1579C:
    ctx->pc = 0x80B1579Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B1579Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B1579C: lwz     r31, 28(r1)
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
label_80B157A0:
    ctx->pc = 0x80B157A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B157A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B157A0: lwz     r30, 24(r1)
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
label_80B157A4:
    ctx->pc = 0x80B157A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B157A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B157A4: lwz     r29, 20(r1)
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
label_80B157A8:
    ctx->pc = 0x80B157A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B157A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B157A8: lwz     r0, 36(r1)
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
label_80B157AC:
    ctx->pc = 0x80B157ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B157ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B157AC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B157B0:
    ctx->pc = 0x80B157B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B157B0u)) return;
    // 80B157B0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80B157B4:
    ctx->pc = 0x80B157B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B157B4u)) return;
    // 80B157B4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B14E40;
        }
    }

label_80B157B8:
    ctx->pc = 0x80B157B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B157B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B157B8: stwu     r1, -32(r1)
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
label_80B157BC:
    ctx->pc = 0x80B157BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B157BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B157BC: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B157C0:
    ctx->pc = 0x80B157C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B157C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B157C0: stw     r0, 36(r1)
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
label_80B157C4:
    ctx->pc = 0x80B157C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B157C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B157C4: stw     r31, 28(r1)
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
label_80B157C8:
    ctx->pc = 0x80B157C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B157C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B157C8: stw     r30, 24(r1)
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
label_80B157CC:
    ctx->pc = 0x80B157CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B157CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B157CC: stw     r29, 20(r1)
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
label_80B157D0:
    ctx->pc = 0x80B157D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B157D0u)) return;
    // 80B157D0: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80B157D4:
    ctx->pc = 0x80B157D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B157D4u)) return;
    // 80B157D4: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80B157D8:
    ctx->pc = 0x80B157D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B157D8u)) return;
    // 80B157D8: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B157DC:
    ctx->pc = 0x80B157DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B157DCu)) return;
    // 80B157DC: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80B157E0:
    ctx->pc = 0x80B157E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B157E0u)) return;
    // 80B157E0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80B157E4:
    ctx->pc = 0x80B157E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B157E4u)) return;
    // 80B157E4: bl      0x8050FD60
    {
            ctx->lr = 0x80B157E8u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80B157E8:
    ctx->pc = 0x80B157E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B157E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B157E8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80B157EC:
    ctx->pc = 0x80B157ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B157ECu)) return;
    // 80B157EC: cmplwi  r31, 0x0000
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

label_80B157F0:
    ctx->pc = 0x80B157F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B157F0u)) return;
    // 80B157F0: bc    12, 2, 0x80B15854
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B15854;
        }
    }

label_80B157F4:
    ctx->pc = 0x80B157F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B157F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80B157F4: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80B157F8:
    ctx->pc = 0x80B157F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B157F8u)) return;
    // 80B157F8: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80B157FC:
    ctx->pc = 0x80B157FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B157FCu)) return;
    // 80B157FC: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80B15800:
    ctx->pc = 0x80B15800u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15800u)) return;
    // 80B15800: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B15804:
    ctx->pc = 0x80B15804u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15804u)) return;
    // 80B15804: or   r7, r30, r30
    {
        ctx->gpr[7] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80B15808:
    ctx->pc = 0x80B15808u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15808u)) return;
    // 80B15808: bl      0x8050A0D4
    {
            ctx->lr = 0x80B1580Cu;
            ctx->pc = 0x8050A0D4u;
            return;
    }

label_80B1580C:
    ctx->pc = 0x80B1580Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 18u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B1580Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 18u : 1u;
    // 80B1580C: lis     r3, -32591
    ctx->gpr[3] = ((u32)(s32)(-32591) << 16);

label_80B15810:
    ctx->pc = 0x80B15810u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15810u)) return;
    // 80B15810: addi    r0, r3, 22204
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(22204);

label_80B15814:
    ctx->pc = 0x80B15814u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15814u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80B15814: stw     r0, 16(r31)
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
label_80B15818:
    ctx->pc = 0x80B15818u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15818u)) return;
    // 80B15818: lis     r3, -32591
    ctx->gpr[3] = ((u32)(s32)(-32591) << 16);

label_80B1581C:
    ctx->pc = 0x80B1581Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1581Cu)) return;
    // 80B1581C: addi    r0, r3, 22164
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(22164);

label_80B15820:
    ctx->pc = 0x80B15820u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15820u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80B15820: stw     r0, 24(r31)
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
label_80B15824:
    ctx->pc = 0x80B15824u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15824u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B15824: lwz     r3, 32(r31)
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
label_80B15828:
    ctx->pc = 0x80B15828u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15828u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B15828: stw     r31, 16(r3)
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
label_80B1582C:
    ctx->pc = 0x80B1582Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1582Cu)) return;
    // 80B1582C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80B15830:
    ctx->pc = 0x80B15830u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15830u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B15830: stw     r0, 20(r3)
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
label_80B15834:
    ctx->pc = 0x80B15834u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15834u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B15834: stw     r0, 24(r3)
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
label_80B15838:
    ctx->pc = 0x80B15838u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15838u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B15838: stw     r0, 28(r3)
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
label_80B1583C:
    ctx->pc = 0x80B1583Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1583Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B1583C: stw     r0, 32(r3)
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
label_80B15840:
    ctx->pc = 0x80B15840u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15840u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B15840: stw     r0, 36(r3)
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
label_80B15844:
    ctx->pc = 0x80B15844u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15844u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B15844: stw     r0, 40(r3)
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
label_80B15848:
    ctx->pc = 0x80B15848u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15848u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B15848: stw     r0, 44(r3)
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
label_80B1584C:
    ctx->pc = 0x80B1584Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1584Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B1584C: stw     r0, 48(r3)
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
label_80B15850:
    ctx->pc = 0x80B15850u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15850u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B15850: stw     r0, 52(r3)
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
label_80B15854:
    ctx->pc = 0x80B15854u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15854u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80B15854: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80B15858:
    ctx->pc = 0x80B15858u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15858u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B15858: lwz     r31, 28(r1)
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
label_80B1585C:
    ctx->pc = 0x80B1585Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1585Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B1585C: lwz     r30, 24(r1)
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
label_80B15860:
    ctx->pc = 0x80B15860u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15860u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B15860: lwz     r29, 20(r1)
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
label_80B15864:
    ctx->pc = 0x80B15864u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15864u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B15864: lwz     r0, 36(r1)
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
label_80B15868:
    ctx->pc = 0x80B15868u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B15868u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B15868: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B1586C:
    ctx->pc = 0x80B1586Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1586Cu)) return;
    // 80B1586C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80B15870:
    ctx->pc = 0x80B15870u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15870u)) return;
    // 80B15870: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B14E40;
        }
    }

label_80B15874:
    ctx->pc = 0x80B15874u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15874u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B15874: stwu     r1, -16(r1)
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
label_80B15878:
    ctx->pc = 0x80B15878u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15878u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B15878: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B1587C:
    ctx->pc = 0x80B1587Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1587Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B1587C: stw     r0, 20(r1)
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
label_80B15880:
    ctx->pc = 0x80B15880u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15880u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B15880: stw     r31, 12(r1)
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
label_80B15884:
    ctx->pc = 0x80B15884u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15884u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B15884: stw     r30, 8(r1)
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
label_80B15888:
    ctx->pc = 0x80B15888u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15888u)) return;
    // 80B15888: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80B1588C:
    ctx->pc = 0x80B1588Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1588Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B1588C: lwz     r31, 32(r3)
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
label_80B15890:
    ctx->pc = 0x80B15890u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15890u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B15890: stw     r30, 24(r31)
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
label_80B15894:
    ctx->pc = 0x80B15894u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15894u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B15894: stw     r5, 28(r31)
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
label_80B15898:
    ctx->pc = 0x80B15898u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15898u)) return;
    // 80B15898: cmpwi   r5, 0
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

label_80B1589C:
    ctx->pc = 0x80B1589Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1589Cu)) return;
    // 80B1589C: bc    12, 1, 0x80B158AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B158AC;
        }
    }

label_80B158A0:
    ctx->pc = 0x80B158A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B158A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B158A0: lwz     r3, 16(r31)
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
label_80B158A4:
    ctx->pc = 0x80B158A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B158A4u)) return;
    // 80B158A4: bl      0x80509C74
    {
            ctx->lr = 0x80B158A8u;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80B158A8:
    ctx->pc = 0x80B158A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B158A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B158A8: stw     r30, 20(r31)
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
label_80B158AC:
    ctx->pc = 0x80B158ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B158ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B158AC: lwz     r31, 12(r1)
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
label_80B158B0:
    ctx->pc = 0x80B158B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B158B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B158B0: lwz     r30, 8(r1)
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
label_80B158B4:
    ctx->pc = 0x80B158B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B158B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B158B4: lwz     r0, 20(r1)
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
label_80B158B8:
    ctx->pc = 0x80B158B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B158B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B158B8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B158BC:
    ctx->pc = 0x80B158BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B158BCu)) return;
    // 80B158BC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B158C0:
    ctx->pc = 0x80B158C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B158C0u)) return;
    // 80B158C0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B14E40;
        }
    }

label_80B158C4:
    ctx->pc = 0x80B158C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B158C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B158C4: stwu     r1, -16(r1)
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
label_80B158C8:
    ctx->pc = 0x80B158C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B158C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B158C8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B158CC:
    ctx->pc = 0x80B158CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B158CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B158CC: stw     r0, 20(r1)
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
label_80B158D0:
    ctx->pc = 0x80B158D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B158D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B158D0: stw     r31, 12(r1)
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
label_80B158D4:
    ctx->pc = 0x80B158D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B158D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B158D4: stw     r30, 8(r1)
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
label_80B158D8:
    ctx->pc = 0x80B158D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B158D8u)) return;
    // 80B158D8: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80B158DC:
    ctx->pc = 0x80B158DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B158DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B158DC: lwz     r31, 32(r3)
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
label_80B158E0:
    ctx->pc = 0x80B158E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B158E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B158E0: stw     r30, 36(r31)
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
label_80B158E4:
    ctx->pc = 0x80B158E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B158E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B158E4: stw     r5, 40(r31)
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
label_80B158E8:
    ctx->pc = 0x80B158E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B158E8u)) return;
    // 80B158E8: cmpwi   r5, 0
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

label_80B158EC:
    ctx->pc = 0x80B158ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B158ECu)) return;
    // 80B158EC: bc    12, 1, 0x80B158FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B158FC;
        }
    }

label_80B158F0:
    ctx->pc = 0x80B158F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B158F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B158F0: lwz     r3, 16(r31)
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
label_80B158F4:
    ctx->pc = 0x80B158F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B158F4u)) return;
    // 80B158F4: bl      0x80509BF8
    {
            ctx->lr = 0x80B158F8u;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80B158F8:
    ctx->pc = 0x80B158F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B158F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B158F8: stw     r30, 32(r31)
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
label_80B158FC:
    ctx->pc = 0x80B158FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B158FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B158FC: lwz     r31, 12(r1)
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
label_80B15900:
    ctx->pc = 0x80B15900u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15900u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B15900: lwz     r30, 8(r1)
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
label_80B15904:
    ctx->pc = 0x80B15904u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15904u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B15904: lwz     r0, 20(r1)
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
label_80B15908:
    ctx->pc = 0x80B15908u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B15908u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B15908: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B1590C:
    ctx->pc = 0x80B1590Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1590Cu)) return;
    // 80B1590C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B15910:
    ctx->pc = 0x80B15910u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15910u)) return;
    // 80B15910: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B14E40;
        }
    }

label_80B15914:
    ctx->pc = 0x80B15914u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15914u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B15914: stwu     r1, -16(r1)
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
label_80B15918:
    ctx->pc = 0x80B15918u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15918u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B15918: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B1591C:
    ctx->pc = 0x80B1591Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1591Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B1591C: stw     r0, 20(r1)
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
label_80B15920:
    ctx->pc = 0x80B15920u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15920u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B15920: stw     r31, 12(r1)
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
label_80B15924:
    ctx->pc = 0x80B15924u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15924u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B15924: stw     r30, 8(r1)
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
label_80B15928:
    ctx->pc = 0x80B15928u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15928u)) return;
    // 80B15928: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80B1592C:
    ctx->pc = 0x80B1592Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1592Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B1592C: lwz     r31, 32(r3)
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
label_80B15930:
    ctx->pc = 0x80B15930u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15930u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B15930: stw     r30, 48(r31)
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
label_80B15934:
    ctx->pc = 0x80B15934u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15934u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B15934: stw     r5, 52(r31)
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
label_80B15938:
    ctx->pc = 0x80B15938u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15938u)) return;
    // 80B15938: cmpwi   r5, 0
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

label_80B1593C:
    ctx->pc = 0x80B1593Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1593Cu)) return;
    // 80B1593C: bc    12, 1, 0x80B1594C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B1594C;
        }
    }

label_80B15940:
    ctx->pc = 0x80B15940u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15940u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B15940: lwz     r3, 16(r31)
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
label_80B15944:
    ctx->pc = 0x80B15944u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15944u)) return;
    // 80B15944: bl      0x80509B94
    {
            ctx->lr = 0x80B15948u;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80B15948:
    ctx->pc = 0x80B15948u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15948u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B15948: stw     r30, 44(r31)
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
label_80B1594C:
    ctx->pc = 0x80B1594Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B1594Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B1594C: lwz     r31, 12(r1)
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
label_80B15950:
    ctx->pc = 0x80B15950u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15950u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B15950: lwz     r30, 8(r1)
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
label_80B15954:
    ctx->pc = 0x80B15954u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15954u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B15954: lwz     r0, 20(r1)
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
label_80B15958:
    ctx->pc = 0x80B15958u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B15958u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B15958: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B1595C:
    ctx->pc = 0x80B1595Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1595Cu)) return;
    // 80B1595C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B15960:
    ctx->pc = 0x80B15960u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15960u)) return;
    // 80B15960: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B14E40;
        }
    }

label_80B15964:
    ctx->pc = 0x80B15964u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15964u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B15964: stwu     r1, -16(r1)
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
label_80B15968:
    ctx->pc = 0x80B15968u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15968u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B15968: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B1596C:
    ctx->pc = 0x80B1596Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1596Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B1596C: stw     r0, 20(r1)
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
label_80B15970:
    ctx->pc = 0x80B15970u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15970u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B15970: stw     r31, 12(r1)
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
label_80B15974:
    ctx->pc = 0x80B15974u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15974u)) return;
    // 80B15974: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80B15978:
    ctx->pc = 0x80B15978u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15978u)) return;
    // 80B15978: lis     r4, -27591
    ctx->gpr[4] = ((u32)(s32)(-27591) << 16);

label_80B1597C:
    ctx->pc = 0x80B1597Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1597Cu)) return;
    // 80B1597C: addi    r4, r4, -12340
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-12340);

label_80B15980:
    ctx->pc = 0x80B15980u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15980u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B15980: lwz     r0, 0(r4)
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
label_80B15984:
    ctx->pc = 0x80B15984u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15984u)) return;
    // 80B15984: cmplwi  r0, 0x0000
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

label_80B15988:
    ctx->pc = 0x80B15988u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15988u)) return;
    // 80B15988: bc    4, 2, 0x80B159AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B159AC;
        }
    }

label_80B1598C:
    ctx->pc = 0x80B1598Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B1598Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B1598C: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80B15990:
    ctx->pc = 0x80B15990u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15990u)) return;
    // 80B15990: bl      0x8050EEC0
    {
            ctx->lr = 0x80B15994u;
            ctx->pc = 0x8050EEC0u;
            return;
    }

label_80B15994:
    ctx->pc = 0x80B15994u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15994u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80B15994: lis     r4, -27591
    ctx->gpr[4] = ((u32)(s32)(-27591) << 16);

label_80B15998:
    ctx->pc = 0x80B15998u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15998u)) return;
    // 80B15998: addi    r4, r4, -12340
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-12340);

label_80B1599C:
    ctx->pc = 0x80B1599Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B1599Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B1599C: stw     r3, 0(r4)
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
label_80B159A0:
    ctx->pc = 0x80B159A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B159A0u)) return;
    // 80B159A0: lis     r3, -27591
    ctx->gpr[3] = ((u32)(s32)(-27591) << 16);

label_80B159A4:
    ctx->pc = 0x80B159A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B159A4u)) return;
    // 80B159A4: addi    r3, r3, -12344
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-12344);

label_80B159A8:
    ctx->pc = 0x80B159A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B159A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B159A8: stw     r31, 0(r3)
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
label_80B159AC:
    ctx->pc = 0x80B159ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B159ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B159AC: lwz     r31, 12(r1)
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
label_80B159B0:
    ctx->pc = 0x80B159B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B159B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B159B0: lwz     r0, 20(r1)
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
label_80B159B4:
    ctx->pc = 0x80B159B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B159B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B159B4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B159B8:
    ctx->pc = 0x80B159B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B159B8u)) return;
    // 80B159B8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B159BC:
    ctx->pc = 0x80B159BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B159BCu)) return;
    // 80B159BC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B14E40;
        }
    }

label_80B159C0:
    ctx->pc = 0x80B159C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B159C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B159C0: stwu     r1, -32(r1)
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
label_80B159C4:
    ctx->pc = 0x80B159C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B159C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B159C4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B159C8:
    ctx->pc = 0x80B159C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B159C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B159C8: stw     r0, 36(r1)
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
label_80B159CC:
    ctx->pc = 0x80B159CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B159CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B159CC: stw     r31, 28(r1)
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
label_80B159D0:
    ctx->pc = 0x80B159D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B159D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B159D0: stw     r30, 24(r1)
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
label_80B159D4:
    ctx->pc = 0x80B159D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B159D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B159D4: stw     r29, 20(r1)
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
label_80B159D8:
    ctx->pc = 0x80B159D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B159D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B159D8: stw     r28, 16(r1)
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
label_80B159DC:
    ctx->pc = 0x80B159DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B159DCu)) return;
    // 80B159DC: lis     r3, -27591
    ctx->gpr[3] = ((u32)(s32)(-27591) << 16);

label_80B159E0:
    ctx->pc = 0x80B159E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B159E0u)) return;
    // 80B159E0: addi    r30, r3, -12340
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(-12340);

label_80B159E4:
    ctx->pc = 0x80B159E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B159E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B159E4: lwz     r0, 0(r30)
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
label_80B159E8:
    ctx->pc = 0x80B159E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B159E8u)) return;
    // 80B159E8: cmplwi  r0, 0x0000
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

label_80B159EC:
    ctx->pc = 0x80B159ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B159ECu)) return;
    // 80B159EC: bc    12, 2, 0x80B15A4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B15A4C;
        }
    }

label_80B159F0:
    ctx->pc = 0x80B159F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B159F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B159F0: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_80B159F4:
    ctx->pc = 0x80B159F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B159F4u)) return;
    // 80B159F4: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_80B159F8:
    ctx->pc = 0x80B159F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B159F8u)) return;
    // 80B159F8: lis     r3, -27591
    ctx->gpr[3] = ((u32)(s32)(-27591) << 16);

label_80B159FC:
    ctx->pc = 0x80B159FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B159FCu)) return;
    // 80B159FC: addi    r31, r3, -12344
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(-12344);

label_80B15A00:
    ctx->pc = 0x80B15A00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15A00u)) return;
    // 80B15A00: b       0x80B15A20
    {
            goto label_80B15A20;
    }

label_80B15A04:
    ctx->pc = 0x80B15A04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15A04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B15A04: lwz     r3, 0(r30)
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
label_80B15A08:
    ctx->pc = 0x80B15A08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15A08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B15A08: lwzx    r3, r3, r29
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
label_80B15A0C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15A0Cu)) return;
    // 80B15A0C: cmplwi  r3, 0x0000
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

label_80B15A10:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15A10u)) return;
    // 80B15A10: bc    12, 2, 0x80B15A18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B15A18;
        }
    }

label_80B15A14:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15A14u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B15A14: bl      0x8050F9E0
    {
            ctx->lr = 0x80B15A18u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80B15A18:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15A18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B15A18: addi    r29, r29, 4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4);

label_80B15A1C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15A1Cu)) return;
    // 80B15A1C: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_80B15A20:
    ctx->pc = 0x80B15A20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15A20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B15A20: lwz     r0, 0(r31)
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
label_80B15A24:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15A24u)) return;
    // 80B15A24: cmpw    r28, r0
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

label_80B15A28:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15A28u)) return;
    // 80B15A28: bc    12, 0, 0x80B15A04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80B15A04u;
                return;
            }
            goto label_80B15A04;
        }
    }

label_80B15A2C:
    ctx->pc = 0x80B15A2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15A2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B15A2C: lis     r3, -27591
    ctx->gpr[3] = ((u32)(s32)(-27591) << 16);

label_80B15A30:
    ctx->pc = 0x80B15A30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15A30u)) return;
    // 80B15A30: addi    r3, r3, -12340
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-12340);

label_80B15A34:
    ctx->pc = 0x80B15A34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15A34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B15A34: lwz     r3, 0(r3)
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
label_80B15A38:
    ctx->pc = 0x80B15A38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15A38u)) return;
    // 80B15A38: bl      0x8050ED40
    {
            ctx->lr = 0x80B15A3Cu;
            ctx->pc = 0x8050ED40u;
            return;
    }

label_80B15A3C:
    ctx->pc = 0x80B15A3Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15A3Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B15A3C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80B15A40:
    ctx->pc = 0x80B15A40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15A40u)) return;
    // 80B15A40: lis     r3, -27591
    ctx->gpr[3] = ((u32)(s32)(-27591) << 16);

label_80B15A44:
    ctx->pc = 0x80B15A44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15A44u)) return;
    // 80B15A44: addi    r3, r3, -12340
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-12340);

label_80B15A48:
    ctx->pc = 0x80B15A48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15A48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B15A48: stw     r0, 0(r3)
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
label_80B15A4C:
    ctx->pc = 0x80B15A4Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15A4Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B15A4C: lwz     r31, 28(r1)
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
label_80B15A50:
    ctx->pc = 0x80B15A50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15A50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B15A50: lwz     r30, 24(r1)
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
label_80B15A54:
    ctx->pc = 0x80B15A54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15A54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B15A54: lwz     r29, 20(r1)
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
label_80B15A58:
    ctx->pc = 0x80B15A58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15A58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B15A58: lwz     r28, 16(r1)
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
label_80B15A5C:
    ctx->pc = 0x80B15A5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15A5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B15A5C: lwz     r0, 36(r1)
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
label_80B15A60:
    ctx->pc = 0x80B15A60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B15A60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B15A60: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B15A64:
    ctx->pc = 0x80B15A64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15A64u)) return;
    // 80B15A64: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80B15A68:
    ctx->pc = 0x80B15A68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15A68u)) return;
    // 80B15A68: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B14E40;
        }
    }

label_80B15A6C:
    ctx->pc = 0x80B15A6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15A6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B15A6C: stwu     r1, -16(r1)
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
label_80B15A70:
    ctx->pc = 0x80B15A70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15A70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B15A70: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B15A74:
    ctx->pc = 0x80B15A74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15A74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B15A74: stw     r0, 20(r1)
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
label_80B15A78:
    ctx->pc = 0x80B15A78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15A78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B15A78: stw     r31, 12(r1)
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
label_80B15A7C:
    ctx->pc = 0x80B15A7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15A7Cu)) return;
    // 80B15A7C: lis     r6, -27591
    ctx->gpr[6] = ((u32)(s32)(-27591) << 16);

label_80B15A80:
    ctx->pc = 0x80B15A80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15A80u)) return;
    // 80B15A80: addi    r6, r6, -12344
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-12344);

label_80B15A84:
    ctx->pc = 0x80B15A84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15A84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B15A84: lwz     r0, 0(r6)
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
label_80B15A88:
    ctx->pc = 0x80B15A88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15A88u)) return;
    // 80B15A88: cmpw    r3, r0
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

label_80B15A8C:
    ctx->pc = 0x80B15A8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15A8Cu)) return;
    // 80B15A8C: bc    4, 0, 0x80B15AC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B15AC8;
        }
    }

label_80B15A90:
    ctx->pc = 0x80B15A90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15A90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B15A90: lis     r6, -27591
    ctx->gpr[6] = ((u32)(s32)(-27591) << 16);

label_80B15A94:
    ctx->pc = 0x80B15A94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15A94u)) return;
    // 80B15A94: addi    r6, r6, -12340
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-12340);

label_80B15A98:
    ctx->pc = 0x80B15A98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15A98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B15A98: lwz     r6, 0(r6)
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
label_80B15A9C:
    ctx->pc = 0x80B15A9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15A9Cu)) return;
    // 80B15A9C: rlwinm r31, r3, 2, 0, 29
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80B15AA0:
    ctx->pc = 0x80B15AA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15AA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B15AA0: lwzx    r0, r6, r31
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
label_80B15AA4:
    ctx->pc = 0x80B15AA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15AA4u)) return;
    // 80B15AA4: cmplwi  r0, 0x0000
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

label_80B15AA8:
    ctx->pc = 0x80B15AA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15AA8u)) return;
    // 80B15AA8: bc    4, 2, 0x80B15AC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B15AC8;
        }
    }

label_80B15AAC:
    ctx->pc = 0x80B15AACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15AACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B15AAC: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80B15AB0:
    ctx->pc = 0x80B15AB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15AB0u)) return;
    // 80B15AB0: or   r4, r5, r5
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80B15AB4:
    ctx->pc = 0x80B15AB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15AB4u)) return;
    // 80B15AB4: bl      0x80B157B8
    {
            ctx->lr = 0x80B15AB8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80B157B8u;
                return;
            }
            goto label_80B157B8;
    }

label_80B15AB8:
    ctx->pc = 0x80B15AB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15AB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B15AB8: lis     r4, -27591
    ctx->gpr[4] = ((u32)(s32)(-27591) << 16);

label_80B15ABC:
    ctx->pc = 0x80B15ABCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15ABCu)) return;
    // 80B15ABC: addi    r4, r4, -12340
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-12340);

label_80B15AC0:
    ctx->pc = 0x80B15AC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15AC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B15AC0: lwz     r4, 0(r4)
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
label_80B15AC4:
    ctx->pc = 0x80B15AC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15AC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B15AC4: stwx    r3, r4, r31
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
label_80B15AC8:
    ctx->pc = 0x80B15AC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15AC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B15AC8: lwz     r31, 12(r1)
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
label_80B15ACC:
    ctx->pc = 0x80B15ACCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15ACCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B15ACC: lwz     r0, 20(r1)
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
label_80B15AD0:
    ctx->pc = 0x80B15AD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B15AD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B15AD0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B15AD4:
    ctx->pc = 0x80B15AD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15AD4u)) return;
    // 80B15AD4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B15AD8:
    ctx->pc = 0x80B15AD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15AD8u)) return;
    // 80B15AD8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B14E40;
        }
    }

label_80B15ADC:
    ctx->pc = 0x80B15ADCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15ADCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B15ADC: stwu     r1, -16(r1)
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
label_80B15AE0:
    ctx->pc = 0x80B15AE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15AE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B15AE0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B15AE4:
    ctx->pc = 0x80B15AE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15AE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B15AE4: stw     r0, 20(r1)
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
label_80B15AE8:
    ctx->pc = 0x80B15AE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15AE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B15AE8: stw     r31, 12(r1)
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
label_80B15AEC:
    ctx->pc = 0x80B15AECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15AECu)) return;
    // 80B15AEC: lis     r4, -27591
    ctx->gpr[4] = ((u32)(s32)(-27591) << 16);

label_80B15AF0:
    ctx->pc = 0x80B15AF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15AF0u)) return;
    // 80B15AF0: addi    r4, r4, -12344
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-12344);

label_80B15AF4:
    ctx->pc = 0x80B15AF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15AF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B15AF4: lwz     r0, 0(r4)
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
label_80B15AF8:
    ctx->pc = 0x80B15AF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15AF8u)) return;
    // 80B15AF8: cmpw    r3, r0
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

label_80B15AFC:
    ctx->pc = 0x80B15AFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15AFCu)) return;
    // 80B15AFC: bc    4, 0, 0x80B15B34
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B15B34;
        }
    }

label_80B15B00:
    ctx->pc = 0x80B15B00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15B00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B15B00: lis     r4, -27591
    ctx->gpr[4] = ((u32)(s32)(-27591) << 16);

label_80B15B04:
    ctx->pc = 0x80B15B04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15B04u)) return;
    // 80B15B04: addi    r4, r4, -12340
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-12340);

label_80B15B08:
    ctx->pc = 0x80B15B08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15B08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B15B08: lwz     r4, 0(r4)
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
label_80B15B0C:
    ctx->pc = 0x80B15B0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15B0Cu)) return;
    // 80B15B0C: rlwinm r31, r3, 2, 0, 29
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80B15B10:
    ctx->pc = 0x80B15B10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15B10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B15B10: lwzx    r3, r4, r31
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
label_80B15B14:
    ctx->pc = 0x80B15B14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15B14u)) return;
    // 80B15B14: cmplwi  r3, 0x0000
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

label_80B15B18:
    ctx->pc = 0x80B15B18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15B18u)) return;
    // 80B15B18: bc    12, 2, 0x80B15B34
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B15B34;
        }
    }

label_80B15B1C:
    ctx->pc = 0x80B15B1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15B1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B15B1C: bl      0x8050F9E0
    {
            ctx->lr = 0x80B15B20u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80B15B20:
    ctx->pc = 0x80B15B20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15B20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B15B20: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80B15B24:
    ctx->pc = 0x80B15B24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15B24u)) return;
    // 80B15B24: lis     r3, -27591
    ctx->gpr[3] = ((u32)(s32)(-27591) << 16);

label_80B15B28:
    ctx->pc = 0x80B15B28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15B28u)) return;
    // 80B15B28: addi    r3, r3, -12340
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-12340);

label_80B15B2C:
    ctx->pc = 0x80B15B2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15B2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B15B2C: lwz     r3, 0(r3)
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
label_80B15B30:
    ctx->pc = 0x80B15B30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15B30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B15B30: stwx    r0, r3, r31
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
label_80B15B34:
    ctx->pc = 0x80B15B34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15B34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B15B34: lwz     r31, 12(r1)
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
label_80B15B38:
    ctx->pc = 0x80B15B38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15B38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B15B38: lwz     r0, 20(r1)
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
label_80B15B3C:
    ctx->pc = 0x80B15B3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B15B3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B15B3C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B15B40:
    ctx->pc = 0x80B15B40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15B40u)) return;
    // 80B15B40: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B15B44:
    ctx->pc = 0x80B15B44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15B44u)) return;
    // 80B15B44: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B14E40;
        }
    }

label_80B15B48:
    ctx->pc = 0x80B15B48u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15B48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B15B48: stwu     r1, -16(r1)
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
label_80B15B4C:
    ctx->pc = 0x80B15B4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15B4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B15B4C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B15B50:
    ctx->pc = 0x80B15B50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15B50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B15B50: stw     r0, 20(r1)
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
label_80B15B54:
    ctx->pc = 0x80B15B54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15B54u)) return;
    // 80B15B54: lis     r6, -27591
    ctx->gpr[6] = ((u32)(s32)(-27591) << 16);

label_80B15B58:
    ctx->pc = 0x80B15B58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15B58u)) return;
    // 80B15B58: addi    r6, r6, -12344
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-12344);

label_80B15B5C:
    ctx->pc = 0x80B15B5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15B5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B15B5C: lwz     r0, 0(r6)
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
label_80B15B60:
    ctx->pc = 0x80B15B60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15B60u)) return;
    // 80B15B60: cmpw    r3, r0
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

label_80B15B64:
    ctx->pc = 0x80B15B64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15B64u)) return;
    // 80B15B64: bc    4, 0, 0x80B15B88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B15B88;
        }
    }

label_80B15B68:
    ctx->pc = 0x80B15B68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15B68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B15B68: lis     r6, -27591
    ctx->gpr[6] = ((u32)(s32)(-27591) << 16);

label_80B15B6C:
    ctx->pc = 0x80B15B6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15B6Cu)) return;
    // 80B15B6C: addi    r6, r6, -12340
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-12340);

label_80B15B70:
    ctx->pc = 0x80B15B70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15B70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B15B70: lwz     r6, 0(r6)
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
label_80B15B74:
    ctx->pc = 0x80B15B74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15B74u)) return;
    // 80B15B74: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80B15B78:
    ctx->pc = 0x80B15B78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15B78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B15B78: lwzx    r3, r6, r0
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
label_80B15B7C:
    ctx->pc = 0x80B15B7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15B7Cu)) return;
    // 80B15B7C: cmplwi  r3, 0x0000
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

label_80B15B80:
    ctx->pc = 0x80B15B80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15B80u)) return;
    // 80B15B80: bc    12, 2, 0x80B15B88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B15B88;
        }
    }

label_80B15B84:
    ctx->pc = 0x80B15B84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15B84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B15B84: bl      0x80B15874
    {
            ctx->lr = 0x80B15B88u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80B15874u;
                return;
            }
            goto label_80B15874;
    }

label_80B15B88:
    ctx->pc = 0x80B15B88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15B88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B15B88: lwz     r0, 20(r1)
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
label_80B15B8C:
    ctx->pc = 0x80B15B8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B15B8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B15B8C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B15B90:
    ctx->pc = 0x80B15B90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15B90u)) return;
    // 80B15B90: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B15B94:
    ctx->pc = 0x80B15B94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15B94u)) return;
    // 80B15B94: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B14E40;
        }
    }

label_80B15B98:
    ctx->pc = 0x80B15B98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15B98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B15B98: stwu     r1, -16(r1)
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
label_80B15B9C:
    ctx->pc = 0x80B15B9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15B9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B15B9C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B15BA0:
    ctx->pc = 0x80B15BA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15BA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B15BA0: stw     r0, 20(r1)
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
label_80B15BA4:
    ctx->pc = 0x80B15BA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15BA4u)) return;
    // 80B15BA4: lis     r6, -27591
    ctx->gpr[6] = ((u32)(s32)(-27591) << 16);

label_80B15BA8:
    ctx->pc = 0x80B15BA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15BA8u)) return;
    // 80B15BA8: addi    r6, r6, -12344
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-12344);

label_80B15BAC:
    ctx->pc = 0x80B15BACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15BACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B15BAC: lwz     r0, 0(r6)
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
label_80B15BB0:
    ctx->pc = 0x80B15BB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15BB0u)) return;
    // 80B15BB0: cmpw    r3, r0
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

label_80B15BB4:
    ctx->pc = 0x80B15BB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15BB4u)) return;
    // 80B15BB4: bc    4, 0, 0x80B15BD8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B15BD8;
        }
    }

label_80B15BB8:
    ctx->pc = 0x80B15BB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15BB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B15BB8: lis     r6, -27591
    ctx->gpr[6] = ((u32)(s32)(-27591) << 16);

label_80B15BBC:
    ctx->pc = 0x80B15BBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15BBCu)) return;
    // 80B15BBC: addi    r6, r6, -12340
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-12340);

label_80B15BC0:
    ctx->pc = 0x80B15BC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15BC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B15BC0: lwz     r6, 0(r6)
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
label_80B15BC4:
    ctx->pc = 0x80B15BC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15BC4u)) return;
    // 80B15BC4: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80B15BC8:
    ctx->pc = 0x80B15BC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15BC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B15BC8: lwzx    r3, r6, r0
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
label_80B15BCC:
    ctx->pc = 0x80B15BCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15BCCu)) return;
    // 80B15BCC: cmplwi  r3, 0x0000
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

label_80B15BD0:
    ctx->pc = 0x80B15BD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15BD0u)) return;
    // 80B15BD0: bc    12, 2, 0x80B15BD8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B15BD8;
        }
    }

label_80B15BD4:
    ctx->pc = 0x80B15BD4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15BD4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B15BD4: bl      0x80B158C4
    {
            ctx->lr = 0x80B15BD8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80B158C4u;
                return;
            }
            goto label_80B158C4;
    }

label_80B15BD8:
    ctx->pc = 0x80B15BD8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15BD8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B15BD8: lwz     r0, 20(r1)
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
label_80B15BDC:
    ctx->pc = 0x80B15BDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B15BDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B15BDC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B15BE0:
    ctx->pc = 0x80B15BE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15BE0u)) return;
    // 80B15BE0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B15BE4:
    ctx->pc = 0x80B15BE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15BE4u)) return;
    // 80B15BE4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B14E40;
        }
    }

label_80B15BE8:
    ctx->pc = 0x80B15BE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15BE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B15BE8: stwu     r1, -16(r1)
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
label_80B15BEC:
    ctx->pc = 0x80B15BECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15BECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B15BEC: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B15BF0:
    ctx->pc = 0x80B15BF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15BF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B15BF0: stw     r0, 20(r1)
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
label_80B15BF4:
    ctx->pc = 0x80B15BF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15BF4u)) return;
    // 80B15BF4: lis     r6, -27591
    ctx->gpr[6] = ((u32)(s32)(-27591) << 16);

label_80B15BF8:
    ctx->pc = 0x80B15BF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15BF8u)) return;
    // 80B15BF8: addi    r6, r6, -12344
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-12344);

label_80B15BFC:
    ctx->pc = 0x80B15BFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15BFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B15BFC: lwz     r0, 0(r6)
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
label_80B15C00:
    ctx->pc = 0x80B15C00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15C00u)) return;
    // 80B15C00: cmpw    r3, r0
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

label_80B15C04:
    ctx->pc = 0x80B15C04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15C04u)) return;
    // 80B15C04: bc    4, 0, 0x80B15C28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B15C28;
        }
    }

label_80B15C08:
    ctx->pc = 0x80B15C08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15C08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B15C08: lis     r6, -27591
    ctx->gpr[6] = ((u32)(s32)(-27591) << 16);

label_80B15C0C:
    ctx->pc = 0x80B15C0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15C0Cu)) return;
    // 80B15C0C: addi    r6, r6, -12340
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-12340);

label_80B15C10:
    ctx->pc = 0x80B15C10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15C10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B15C10: lwz     r6, 0(r6)
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
label_80B15C14:
    ctx->pc = 0x80B15C14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15C14u)) return;
    // 80B15C14: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80B15C18:
    ctx->pc = 0x80B15C18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15C18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B15C18: lwzx    r3, r6, r0
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
label_80B15C1C:
    ctx->pc = 0x80B15C1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15C1Cu)) return;
    // 80B15C1C: cmplwi  r3, 0x0000
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

label_80B15C20:
    ctx->pc = 0x80B15C20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15C20u)) return;
    // 80B15C20: bc    12, 2, 0x80B15C28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B15C28;
        }
    }

label_80B15C24:
    ctx->pc = 0x80B15C24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15C24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B15C24: bl      0x80B15914
    {
            ctx->lr = 0x80B15C28u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80B15914u;
                return;
            }
            goto label_80B15914;
    }

label_80B15C28:
    ctx->pc = 0x80B15C28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15C28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B15C28: lwz     r0, 20(r1)
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
label_80B15C2C:
    ctx->pc = 0x80B15C2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B15C2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B15C2C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B15C30:
    ctx->pc = 0x80B15C30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15C30u)) return;
    // 80B15C30: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B15C34:
    ctx->pc = 0x80B15C34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15C34u)) return;
    // 80B15C34: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B14E40;
        }
    }

label_80B15C38:
    ctx->pc = 0x80B15C38u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15C38u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80B15C38: stwu     r1, -32(r1)
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
label_80B15C3C:
    ctx->pc = 0x80B15C3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15C3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B15C3C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B15C40:
    ctx->pc = 0x80B15C40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15C40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B15C40: stw     r0, 36(r1)
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
label_80B15C44:
    ctx->pc = 0x80B15C44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15C44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B15C44: stw     r31, 28(r1)
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
label_80B15C48:
    ctx->pc = 0x80B15C48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15C48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B15C48: stw     r30, 24(r1)
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
label_80B15C4C:
    ctx->pc = 0x80B15C4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15C4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B15C4C: stw     r29, 20(r1)
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
label_80B15C50:
    ctx->pc = 0x80B15C50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15C50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B15C50: stw     r28, 16(r1)
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
label_80B15C54:
    ctx->pc = 0x80B15C54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15C54u)) return;
    // 80B15C54: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80B15C58:
    ctx->pc = 0x80B15C58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15C58u)) return;
    // 80B15C58: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80B15C5C:
    ctx->pc = 0x80B15C5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15C5Cu)) return;
    // 80B15C5C: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80B15C60:
    ctx->pc = 0x80B15C60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15C60u)) return;
    // 80B15C60: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_80B15C64:
    ctx->pc = 0x80B15C64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15C64u)) return;
    // 80B15C64: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B15C68:
    ctx->pc = 0x80B15C68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15C68u)) return;
    // 80B15C68: bl      0x80401DB0
    {
            ctx->lr = 0x80B15C6Cu;
            ctx->pc = 0x80401DB0u;
            return;
    }

label_80B15C6C:
    ctx->pc = 0x80B15C6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15C6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B15C6C: lis     r4, -27591
    ctx->gpr[4] = ((u32)(s32)(-27591) << 16);

label_80B15C70:
    ctx->pc = 0x80B15C70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15C70u)) return;
    // 80B15C70: addi    r4, r4, -12336
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-12336);

label_80B15C74:
    ctx->pc = 0x80B15C74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15C74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B15C74: lwz     r0, 0(r4)
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
label_80B15C78:
    ctx->pc = 0x80B15C78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15C78u)) return;
    // 80B15C78: add   r4, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80B15C7C:
    ctx->pc = 0x80B15C7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15C7Cu)) return;
    // 80B15C7C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80B15C80:
    ctx->pc = 0x80B15C80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15C80u)) return;
    // 80B15C80: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80B15C84:
    ctx->pc = 0x80B15C84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15C84u)) return;
    // 80B15C84: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80B15C88:
    ctx->pc = 0x80B15C88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15C88u)) return;
    // 80B15C88: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B15C8C:
    ctx->pc = 0x80B15C8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15C8Cu)) return;
    // 80B15C8C: li      r7, 120
    ctx->gpr[7] = (u32)(s32)(120);

label_80B15C90:
    ctx->pc = 0x80B15C90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15C90u)) return;
    // 80B15C90: bl      0x8050A0D4
    {
            ctx->lr = 0x80B15C94u;
            ctx->pc = 0x8050A0D4u;
            return;
    }

label_80B15C94:
    ctx->pc = 0x80B15C94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15C94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B15C94: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80B15C98:
    ctx->pc = 0x80B15C98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15C98u)) return;
    // 80B15C98: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80B15C9C:
    ctx->pc = 0x80B15C9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15C9Cu)) return;
    // 80B15C9C: bl      0x80509C74
    {
            ctx->lr = 0x80B15CA0u;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80B15CA0:
    ctx->pc = 0x80B15CA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15CA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B15CA0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80B15CA4:
    ctx->pc = 0x80B15CA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15CA4u)) return;
    // 80B15CA4: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80B15CA8:
    ctx->pc = 0x80B15CA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15CA8u)) return;
    // 80B15CA8: bl      0x80509BF8
    {
            ctx->lr = 0x80B15CACu;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80B15CAC:
    ctx->pc = 0x80B15CACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15CACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B15CAC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80B15CB0:
    ctx->pc = 0x80B15CB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15CB0u)) return;
    // 80B15CB0: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80B15CB4:
    ctx->pc = 0x80B15CB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15CB4u)) return;
    // 80B15CB4: bl      0x80509B94
    {
            ctx->lr = 0x80B15CB8u;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80B15CB8:
    ctx->pc = 0x80B15CB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B15CB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80B15CB8: lis     r3, -27591
    ctx->gpr[3] = ((u32)(s32)(-27591) << 16);

label_80B15CBC:
    ctx->pc = 0x80B15CBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15CBCu)) return;
    // 80B15CBC: addi    r4, r3, -12336
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-12336);

label_80B15CC0:
    ctx->pc = 0x80B15CC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15CC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80B15CC0: lwz     r3, 0(r4)
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
label_80B15CC4:
    ctx->pc = 0x80B15CC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15CC4u)) return;
    // 80B15CC4: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_80B15CC8:
    ctx->pc = 0x80B15CC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15CC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B15CC8: stw     r0, 0(r4)
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
label_80B15CCC:
    ctx->pc = 0x80B15CCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15CCCu)) return;
    // 80B15CCC: rlwinm r0, r0, 0, 27, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000001Fu;
    }

label_80B15CD0:
    ctx->pc = 0x80B15CD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15CD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B15CD0: stw     r0, 0(r4)
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
label_80B15CD4:
    ctx->pc = 0x80B15CD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15CD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B15CD4: lwz     r31, 28(r1)
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
label_80B15CD8:
    ctx->pc = 0x80B15CD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15CD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B15CD8: lwz     r30, 24(r1)
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
label_80B15CDC:
    ctx->pc = 0x80B15CDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15CDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B15CDC: lwz     r29, 20(r1)
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
label_80B15CE0:
    ctx->pc = 0x80B15CE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15CE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B15CE0: lwz     r28, 16(r1)
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
label_80B15CE4:
    ctx->pc = 0x80B15CE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15CE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B15CE4: lwz     r0, 36(r1)
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
label_80B15CE8:
    ctx->pc = 0x80B15CE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B15CE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B15CE8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B15CEC:
    ctx->pc = 0x80B15CECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15CECu)) return;
    // 80B15CEC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80B15CF0:
    ctx->pc = 0x80B15CF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B15CF0u)) return;
    // 80B15CF0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B14E40;
        }
    }

    ctx->pc = 0x80B15CF4u;
    return;
return_dispatch_80B14E40:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80B14E78u: goto label_80B14E78;
    case 0x80B14E80u: goto label_80B14E80;
    case 0x80B14E84u: goto label_80B14E84;
    case 0x80B14E88u: goto label_80B14E88;
    case 0x80B14E8Cu: goto label_80B14E8C;
    case 0x80B14E9Cu: goto label_80B14E9C;
    case 0x80B14EC4u: goto label_80B14EC4;
    case 0x80B14F00u: goto label_80B14F00;
    case 0x80B14F18u: goto label_80B14F18;
    case 0x80B14F28u: goto label_80B14F28;
    case 0x80B14F30u: goto label_80B14F30;
    case 0x80B14F40u: goto label_80B14F40;
    case 0x80B14F48u: goto label_80B14F48;
    case 0x80B14F70u: goto label_80B14F70;
    case 0x80B14F78u: goto label_80B14F78;
    case 0x80B14F88u: goto label_80B14F88;
    case 0x80B14F90u: goto label_80B14F90;
    case 0x80B14FB8u: goto label_80B14FB8;
    case 0x80B14FDCu: goto label_80B14FDC;
    case 0x80B14FE4u: goto label_80B14FE4;
    case 0x80B15014u: goto label_80B15014;
    case 0x80B15030u: goto label_80B15030;
    case 0x80B15060u: goto label_80B15060;
    case 0x80B1507Cu: goto label_80B1507C;
    case 0x80B15084u: goto label_80B15084;
    case 0x80B150B4u: goto label_80B150B4;
    case 0x80B150D0u: goto label_80B150D0;
    case 0x80B150D8u: goto label_80B150D8;
    case 0x80B150E0u: goto label_80B150E0;
    case 0x80B150ECu: goto label_80B150EC;
    case 0x80B150F4u: goto label_80B150F4;
    case 0x80B1511Cu: goto label_80B1511C;
    case 0x80B15124u: goto label_80B15124;
    case 0x80B1512Cu: goto label_80B1512C;
    case 0x80B15130u: goto label_80B15130;
    case 0x80B15138u: goto label_80B15138;
    case 0x80B15144u: goto label_80B15144;
    case 0x80B1514Cu: goto label_80B1514C;
    case 0x80B15170u: goto label_80B15170;
    case 0x80B15178u: goto label_80B15178;
    case 0x80B151A0u: goto label_80B151A0;
    case 0x80B151A4u: goto label_80B151A4;
    case 0x80B151ACu: goto label_80B151AC;
    case 0x80B151B0u: goto label_80B151B0;
    case 0x80B151CCu: goto label_80B151CC;
    case 0x80B151E4u: goto label_80B151E4;
    case 0x80B151ECu: goto label_80B151EC;
    case 0x80B151F4u: goto label_80B151F4;
    case 0x80B15200u: goto label_80B15200;
    case 0x80B15208u: goto label_80B15208;
    case 0x80B1522Cu: goto label_80B1522C;
    case 0x80B15234u: goto label_80B15234;
    case 0x80B1523Cu: goto label_80B1523C;
    case 0x80B15240u: goto label_80B15240;
    case 0x80B15244u: goto label_80B15244;
    case 0x80B15274u: goto label_80B15274;
    case 0x80B1528Cu: goto label_80B1528C;
    case 0x80B152BCu: goto label_80B152BC;
    case 0x80B152D8u: goto label_80B152D8;
    case 0x80B152E0u: goto label_80B152E0;
    case 0x80B152E8u: goto label_80B152E8;
    case 0x80B152F0u: goto label_80B152F0;
    case 0x80B15318u: goto label_80B15318;
    case 0x80B15320u: goto label_80B15320;
    case 0x80B15330u: goto label_80B15330;
    case 0x80B15338u: goto label_80B15338;
    case 0x80B15350u: goto label_80B15350;
    case 0x80B15364u: goto label_80B15364;
    case 0x80B15368u: goto label_80B15368;
    case 0x80B1538Cu: goto label_80B1538C;
    case 0x80B15418u: goto label_80B15418;
    case 0x80B15424u: goto label_80B15424;
    case 0x80B154B4u: goto label_80B154B4;
    case 0x80B154BCu: goto label_80B154BC;
    case 0x80B15524u: goto label_80B15524;
    case 0x80B1556Cu: goto label_80B1556C;
    case 0x80B155D8u: goto label_80B155D8;
    case 0x80B15684u: goto label_80B15684;
    case 0x80B156ACu: goto label_80B156AC;
    case 0x80B1570Cu: goto label_80B1570C;
    case 0x80B1574Cu: goto label_80B1574C;
    case 0x80B1578Cu: goto label_80B1578C;
    case 0x80B157E8u: goto label_80B157E8;
    case 0x80B1580Cu: goto label_80B1580C;
    case 0x80B158A8u: goto label_80B158A8;
    case 0x80B158F8u: goto label_80B158F8;
    case 0x80B15948u: goto label_80B15948;
    case 0x80B15994u: goto label_80B15994;
    case 0x80B15A18u: goto label_80B15A18;
    case 0x80B15A3Cu: goto label_80B15A3C;
    case 0x80B15AB8u: goto label_80B15AB8;
    case 0x80B15B20u: goto label_80B15B20;
    case 0x80B15B88u: goto label_80B15B88;
    case 0x80B15BD8u: goto label_80B15BD8;
    case 0x80B15C28u: goto label_80B15C28;
    case 0x80B15C6Cu: goto label_80B15C6C;
    case 0x80B15C94u: goto label_80B15C94;
    case 0x80B15CA0u: goto label_80B15CA0;
    case 0x80B15CACu: goto label_80B15CAC;
    case 0x80B15CB8u: goto label_80B15CB8;
    default: return;
    }
}

