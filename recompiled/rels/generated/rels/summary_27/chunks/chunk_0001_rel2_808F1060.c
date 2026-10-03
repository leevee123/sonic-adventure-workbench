// DolRecomp output
#include "../generated.h"

void func_808F1060(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_808F1060[1829] = {
        &&label_808F1060,
        &&label_808F1064,
        &&label_808F1068,
        &&label_808F106C,
        &&label_808F1070,
        &&label_808F1074,
        &&label_808F1078,
        &&label_808F107C,
        &&label_808F1080,
        &&label_808F1084,
        &&label_808F1088,
        &&label_808F108C,
        &&label_808F1090,
        &&label_808F1094,
        &&label_808F1098,
        &&label_808F109C,
        &&label_808F10A0,
        &&label_808F10A4,
        &&label_808F10A8,
        &&label_808F10AC,
        &&label_808F10B0,
        &&label_808F10B4,
        &&label_808F10B8,
        &&label_808F10BC,
        &&label_808F10C0,
        &&label_808F10C4,
        &&label_808F10C8,
        &&label_808F10CC,
        &&label_808F10D0,
        &&label_808F10D4,
        &&label_808F10D8,
        &&label_808F10DC,
        &&label_808F10E0,
        &&label_808F10E4,
        &&label_808F10E8,
        &&label_808F10EC,
        &&label_808F10F0,
        &&label_808F10F4,
        &&label_808F10F8,
        &&label_808F10FC,
        &&label_808F1100,
        &&label_808F1104,
        &&label_808F1108,
        &&label_808F110C,
        &&label_808F1110,
        &&label_808F1114,
        &&label_808F1118,
        &&label_808F111C,
        &&label_808F1120,
        &&label_808F1124,
        &&label_808F1128,
        &&label_808F112C,
        &&label_808F1130,
        &&label_808F1134,
        &&label_808F1138,
        &&label_808F113C,
        &&label_808F1140,
        &&label_808F1144,
        &&label_808F1148,
        &&label_808F114C,
        &&label_808F1150,
        &&label_808F1154,
        &&label_808F1158,
        &&label_808F115C,
        &&label_808F1160,
        &&label_808F1164,
        &&label_808F1168,
        &&label_808F116C,
        &&label_808F1170,
        &&label_808F1174,
        &&label_808F1178,
        &&label_808F117C,
        &&label_808F1180,
        &&label_808F1184,
        &&label_808F1188,
        &&label_808F118C,
        &&label_808F1190,
        &&label_808F1194,
        &&label_808F1198,
        &&label_808F119C,
        &&label_808F11A0,
        &&label_808F11A4,
        &&label_808F11A8,
        &&label_808F11AC,
        &&label_808F11B0,
        &&label_808F11B4,
        &&label_808F11B8,
        &&label_808F11BC,
        &&label_808F11C0,
        &&label_808F11C4,
        &&label_808F11C8,
        &&label_808F11CC,
        &&label_808F11D0,
        &&label_808F11D4,
        &&label_808F11D8,
        &&label_808F11DC,
        &&label_808F11E0,
        &&label_808F11E4,
        &&label_808F11E8,
        &&label_808F11EC,
        &&label_808F11F0,
        &&label_808F11F4,
        &&label_808F11F8,
        &&label_808F11FC,
        &&label_808F1200,
        &&label_808F1204,
        &&label_808F1208,
        &&label_808F120C,
        &&label_808F1210,
        &&label_808F1214,
        &&label_808F1218,
        &&label_808F121C,
        &&label_808F1220,
        &&label_808F1224,
        &&label_808F1228,
        &&label_808F122C,
        &&label_808F1230,
        &&label_808F1234,
        &&label_808F1238,
        &&label_808F123C,
        &&label_808F1240,
        &&label_808F1244,
        &&label_808F1248,
        &&label_808F124C,
        &&label_808F1250,
        &&label_808F1254,
        &&label_808F1258,
        &&label_808F125C,
        &&label_808F1260,
        &&label_808F1264,
        &&label_808F1268,
        &&label_808F126C,
        &&label_808F1270,
        &&label_808F1274,
        &&label_808F1278,
        &&label_808F127C,
        &&label_808F1280,
        &&label_808F1284,
        &&label_808F1288,
        &&label_808F128C,
        &&label_808F1290,
        &&label_808F1294,
        &&label_808F1298,
        &&label_808F129C,
        &&label_808F12A0,
        &&label_808F12A4,
        &&label_808F12A8,
        &&label_808F12AC,
        &&label_808F12B0,
        &&label_808F12B4,
        &&label_808F12B8,
        &&label_808F12BC,
        &&label_808F12C0,
        &&label_808F12C4,
        &&label_808F12C8,
        &&label_808F12CC,
        &&label_808F12D0,
        &&label_808F12D4,
        &&label_808F12D8,
        &&label_808F12DC,
        &&label_808F12E0,
        &&label_808F12E4,
        &&label_808F12E8,
        &&label_808F12EC,
        &&label_808F12F0,
        &&label_808F12F4,
        &&label_808F12F8,
        &&label_808F12FC,
        &&label_808F1300,
        &&label_808F1304,
        &&label_808F1308,
        &&label_808F130C,
        &&label_808F1310,
        &&label_808F1314,
        &&label_808F1318,
        &&label_808F131C,
        &&label_808F1320,
        &&label_808F1324,
        &&label_808F1328,
        &&label_808F132C,
        &&label_808F1330,
        &&label_808F1334,
        &&label_808F1338,
        &&label_808F133C,
        &&label_808F1340,
        &&label_808F1344,
        &&label_808F1348,
        &&label_808F134C,
        &&label_808F1350,
        &&label_808F1354,
        &&label_808F1358,
        &&label_808F135C,
        &&label_808F1360,
        &&label_808F1364,
        &&label_808F1368,
        &&label_808F136C,
        &&label_808F1370,
        &&label_808F1374,
        &&label_808F1378,
        &&label_808F137C,
        &&label_808F1380,
        &&label_808F1384,
        &&label_808F1388,
        &&label_808F138C,
        &&label_808F1390,
        &&label_808F1394,
        &&label_808F1398,
        &&label_808F139C,
        &&label_808F13A0,
        &&label_808F13A4,
        &&label_808F13A8,
        &&label_808F13AC,
        &&label_808F13B0,
        &&label_808F13B4,
        &&label_808F13B8,
        &&label_808F13BC,
        &&label_808F13C0,
        &&label_808F13C4,
        &&label_808F13C8,
        &&label_808F13CC,
        &&label_808F13D0,
        &&label_808F13D4,
        &&label_808F13D8,
        &&label_808F13DC,
        &&label_808F13E0,
        &&label_808F13E4,
        &&label_808F13E8,
        &&label_808F13EC,
        &&label_808F13F0,
        &&label_808F13F4,
        &&label_808F13F8,
        &&label_808F13FC,
        &&label_808F1400,
        &&label_808F1404,
        &&label_808F1408,
        &&label_808F140C,
        &&label_808F1410,
        &&label_808F1414,
        &&label_808F1418,
        &&label_808F141C,
        &&label_808F1420,
        &&label_808F1424,
        &&label_808F1428,
        &&label_808F142C,
        &&label_808F1430,
        &&label_808F1434,
        &&label_808F1438,
        &&label_808F143C,
        &&label_808F1440,
        &&label_808F1444,
        &&label_808F1448,
        &&label_808F144C,
        &&label_808F1450,
        &&label_808F1454,
        &&label_808F1458,
        &&label_808F145C,
        &&label_808F1460,
        &&label_808F1464,
        &&label_808F1468,
        &&label_808F146C,
        &&label_808F1470,
        &&label_808F1474,
        &&label_808F1478,
        &&label_808F147C,
        &&label_808F1480,
        &&label_808F1484,
        &&label_808F1488,
        &&label_808F148C,
        &&label_808F1490,
        &&label_808F1494,
        &&label_808F1498,
        &&label_808F149C,
        &&label_808F14A0,
        &&label_808F14A4,
        &&label_808F14A8,
        &&label_808F14AC,
        &&label_808F14B0,
        &&label_808F14B4,
        &&label_808F14B8,
        &&label_808F14BC,
        &&label_808F14C0,
        &&label_808F14C4,
        &&label_808F14C8,
        &&label_808F14CC,
        &&label_808F14D0,
        &&label_808F14D4,
        &&label_808F14D8,
        &&label_808F14DC,
        &&label_808F14E0,
        &&label_808F14E4,
        &&label_808F14E8,
        &&label_808F14EC,
        &&label_808F14F0,
        &&label_808F14F4,
        &&label_808F14F8,
        &&label_808F14FC,
        &&label_808F1500,
        &&label_808F1504,
        &&label_808F1508,
        &&label_808F150C,
        &&label_808F1510,
        &&label_808F1514,
        &&label_808F1518,
        &&label_808F151C,
        &&label_808F1520,
        &&label_808F1524,
        &&label_808F1528,
        &&label_808F152C,
        &&label_808F1530,
        &&label_808F1534,
        &&label_808F1538,
        &&label_808F153C,
        &&label_808F1540,
        &&label_808F1544,
        &&label_808F1548,
        &&label_808F154C,
        &&label_808F1550,
        &&label_808F1554,
        &&label_808F1558,
        &&label_808F155C,
        &&label_808F1560,
        &&label_808F1564,
        &&label_808F1568,
        &&label_808F156C,
        &&label_808F1570,
        &&label_808F1574,
        &&label_808F1578,
        &&label_808F157C,
        &&label_808F1580,
        &&label_808F1584,
        &&label_808F1588,
        &&label_808F158C,
        &&label_808F1590,
        &&label_808F1594,
        &&label_808F1598,
        &&label_808F159C,
        &&label_808F15A0,
        &&label_808F15A4,
        &&label_808F15A8,
        &&label_808F15AC,
        &&label_808F15B0,
        &&label_808F15B4,
        &&label_808F15B8,
        &&label_808F15BC,
        &&label_808F15C0,
        &&label_808F15C4,
        &&label_808F15C8,
        &&label_808F15CC,
        &&label_808F15D0,
        &&label_808F15D4,
        &&label_808F15D8,
        &&label_808F15DC,
        &&label_808F15E0,
        &&label_808F15E4,
        &&label_808F15E8,
        &&label_808F15EC,
        &&label_808F15F0,
        &&label_808F15F4,
        &&label_808F15F8,
        &&label_808F15FC,
        &&label_808F1600,
        &&label_808F1604,
        &&label_808F1608,
        &&label_808F160C,
        &&label_808F1610,
        &&label_808F1614,
        &&label_808F1618,
        &&label_808F161C,
        &&label_808F1620,
        &&label_808F1624,
        &&label_808F1628,
        &&label_808F162C,
        &&label_808F1630,
        &&label_808F1634,
        &&label_808F1638,
        &&label_808F163C,
        &&label_808F1640,
        &&label_808F1644,
        &&label_808F1648,
        &&label_808F164C,
        &&label_808F1650,
        &&label_808F1654,
        &&label_808F1658,
        &&label_808F165C,
        &&label_808F1660,
        &&label_808F1664,
        &&label_808F1668,
        &&label_808F166C,
        &&label_808F1670,
        &&label_808F1674,
        &&label_808F1678,
        &&label_808F167C,
        &&label_808F1680,
        &&label_808F1684,
        &&label_808F1688,
        &&label_808F168C,
        &&label_808F1690,
        &&label_808F1694,
        &&label_808F1698,
        &&label_808F169C,
        &&label_808F16A0,
        &&label_808F16A4,
        &&label_808F16A8,
        &&label_808F16AC,
        &&label_808F16B0,
        &&label_808F16B4,
        &&label_808F16B8,
        &&label_808F16BC,
        &&label_808F16C0,
        &&label_808F16C4,
        &&label_808F16C8,
        &&label_808F16CC,
        &&label_808F16D0,
        &&label_808F16D4,
        &&label_808F16D8,
        &&label_808F16DC,
        &&label_808F16E0,
        &&label_808F16E4,
        &&label_808F16E8,
        &&label_808F16EC,
        &&label_808F16F0,
        &&label_808F16F4,
        &&label_808F16F8,
        &&label_808F16FC,
        &&label_808F1700,
        &&label_808F1704,
        &&label_808F1708,
        &&label_808F170C,
        &&label_808F1710,
        &&label_808F1714,
        &&label_808F1718,
        &&label_808F171C,
        &&label_808F1720,
        &&label_808F1724,
        &&label_808F1728,
        &&label_808F172C,
        &&label_808F1730,
        &&label_808F1734,
        &&label_808F1738,
        &&label_808F173C,
        &&label_808F1740,
        &&label_808F1744,
        &&label_808F1748,
        &&label_808F174C,
        &&label_808F1750,
        &&label_808F1754,
        &&label_808F1758,
        &&label_808F175C,
        &&label_808F1760,
        &&label_808F1764,
        &&label_808F1768,
        &&label_808F176C,
        &&label_808F1770,
        &&label_808F1774,
        &&label_808F1778,
        &&label_808F177C,
        &&label_808F1780,
        &&label_808F1784,
        &&label_808F1788,
        &&label_808F178C,
        &&label_808F1790,
        &&label_808F1794,
        &&label_808F1798,
        &&label_808F179C,
        &&label_808F17A0,
        &&label_808F17A4,
        &&label_808F17A8,
        &&label_808F17AC,
        &&label_808F17B0,
        &&label_808F17B4,
        &&label_808F17B8,
        &&label_808F17BC,
        &&label_808F17C0,
        &&label_808F17C4,
        &&label_808F17C8,
        &&label_808F17CC,
        &&label_808F17D0,
        &&label_808F17D4,
        &&label_808F17D8,
        &&label_808F17DC,
        &&label_808F17E0,
        &&label_808F17E4,
        &&label_808F17E8,
        &&label_808F17EC,
        &&label_808F17F0,
        &&label_808F17F4,
        &&label_808F17F8,
        &&label_808F17FC,
        &&label_808F1800,
        &&label_808F1804,
        &&label_808F1808,
        &&label_808F180C,
        &&label_808F1810,
        &&label_808F1814,
        &&label_808F1818,
        &&label_808F181C,
        &&label_808F1820,
        &&label_808F1824,
        &&label_808F1828,
        &&label_808F182C,
        &&label_808F1830,
        &&label_808F1834,
        &&label_808F1838,
        &&label_808F183C,
        &&label_808F1840,
        &&label_808F1844,
        &&label_808F1848,
        &&label_808F184C,
        &&label_808F1850,
        &&label_808F1854,
        &&label_808F1858,
        &&label_808F185C,
        &&label_808F1860,
        &&label_808F1864,
        &&label_808F1868,
        &&label_808F186C,
        &&label_808F1870,
        &&label_808F1874,
        &&label_808F1878,
        &&label_808F187C,
        &&label_808F1880,
        &&label_808F1884,
        &&label_808F1888,
        &&label_808F188C,
        &&label_808F1890,
        &&label_808F1894,
        &&label_808F1898,
        &&label_808F189C,
        &&label_808F18A0,
        &&label_808F18A4,
        &&label_808F18A8,
        &&label_808F18AC,
        &&label_808F18B0,
        &&label_808F18B4,
        &&label_808F18B8,
        &&label_808F18BC,
        &&label_808F18C0,
        &&label_808F18C4,
        &&label_808F18C8,
        &&label_808F18CC,
        &&label_808F18D0,
        &&label_808F18D4,
        &&label_808F18D8,
        &&label_808F18DC,
        &&label_808F18E0,
        &&label_808F18E4,
        &&label_808F18E8,
        &&label_808F18EC,
        &&label_808F18F0,
        &&label_808F18F4,
        &&label_808F18F8,
        &&label_808F18FC,
        &&label_808F1900,
        &&label_808F1904,
        &&label_808F1908,
        &&label_808F190C,
        &&label_808F1910,
        &&label_808F1914,
        &&label_808F1918,
        &&label_808F191C,
        &&label_808F1920,
        &&label_808F1924,
        &&label_808F1928,
        &&label_808F192C,
        &&label_808F1930,
        &&label_808F1934,
        &&label_808F1938,
        &&label_808F193C,
        &&label_808F1940,
        &&label_808F1944,
        &&label_808F1948,
        &&label_808F194C,
        &&label_808F1950,
        &&label_808F1954,
        &&label_808F1958,
        &&label_808F195C,
        &&label_808F1960,
        &&label_808F1964,
        &&label_808F1968,
        &&label_808F196C,
        &&label_808F1970,
        &&label_808F1974,
        &&label_808F1978,
        &&label_808F197C,
        &&label_808F1980,
        &&label_808F1984,
        &&label_808F1988,
        &&label_808F198C,
        &&label_808F1990,
        &&label_808F1994,
        &&label_808F1998,
        &&label_808F199C,
        &&label_808F19A0,
        &&label_808F19A4,
        &&label_808F19A8,
        &&label_808F19AC,
        &&label_808F19B0,
        &&label_808F19B4,
        &&label_808F19B8,
        &&label_808F19BC,
        &&label_808F19C0,
        &&label_808F19C4,
        &&label_808F19C8,
        &&label_808F19CC,
        &&label_808F19D0,
        &&label_808F19D4,
        &&label_808F19D8,
        &&label_808F19DC,
        &&label_808F19E0,
        &&label_808F19E4,
        &&label_808F19E8,
        &&label_808F19EC,
        &&label_808F19F0,
        &&label_808F19F4,
        &&label_808F19F8,
        &&label_808F19FC,
        &&label_808F1A00,
        &&label_808F1A04,
        &&label_808F1A08,
        &&label_808F1A0C,
        &&label_808F1A10,
        &&label_808F1A14,
        &&label_808F1A18,
        &&label_808F1A1C,
        &&label_808F1A20,
        &&label_808F1A24,
        &&label_808F1A28,
        &&label_808F1A2C,
        &&label_808F1A30,
        &&label_808F1A34,
        &&label_808F1A38,
        &&label_808F1A3C,
        &&label_808F1A40,
        &&label_808F1A44,
        &&label_808F1A48,
        &&label_808F1A4C,
        &&label_808F1A50,
        &&label_808F1A54,
        &&label_808F1A58,
        &&label_808F1A5C,
        &&label_808F1A60,
        &&label_808F1A64,
        &&label_808F1A68,
        &&label_808F1A6C,
        &&label_808F1A70,
        &&label_808F1A74,
        &&label_808F1A78,
        &&label_808F1A7C,
        &&label_808F1A80,
        &&label_808F1A84,
        &&label_808F1A88,
        &&label_808F1A8C,
        &&label_808F1A90,
        &&label_808F1A94,
        &&label_808F1A98,
        &&label_808F1A9C,
        &&label_808F1AA0,
        &&label_808F1AA4,
        &&label_808F1AA8,
        &&label_808F1AAC,
        &&label_808F1AB0,
        &&label_808F1AB4,
        &&label_808F1AB8,
        &&label_808F1ABC,
        &&label_808F1AC0,
        &&label_808F1AC4,
        &&label_808F1AC8,
        &&label_808F1ACC,
        &&label_808F1AD0,
        &&label_808F1AD4,
        &&label_808F1AD8,
        &&label_808F1ADC,
        &&label_808F1AE0,
        &&label_808F1AE4,
        &&label_808F1AE8,
        &&label_808F1AEC,
        &&label_808F1AF0,
        &&label_808F1AF4,
        &&label_808F1AF8,
        &&label_808F1AFC,
        &&label_808F1B00,
        &&label_808F1B04,
        &&label_808F1B08,
        &&label_808F1B0C,
        &&label_808F1B10,
        &&label_808F1B14,
        &&label_808F1B18,
        &&label_808F1B1C,
        &&label_808F1B20,
        &&label_808F1B24,
        &&label_808F1B28,
        &&label_808F1B2C,
        &&label_808F1B30,
        &&label_808F1B34,
        &&label_808F1B38,
        &&label_808F1B3C,
        &&label_808F1B40,
        &&label_808F1B44,
        &&label_808F1B48,
        &&label_808F1B4C,
        &&label_808F1B50,
        &&label_808F1B54,
        &&label_808F1B58,
        &&label_808F1B5C,
        &&label_808F1B60,
        &&label_808F1B64,
        &&label_808F1B68,
        &&label_808F1B6C,
        &&label_808F1B70,
        &&label_808F1B74,
        &&label_808F1B78,
        &&label_808F1B7C,
        &&label_808F1B80,
        &&label_808F1B84,
        &&label_808F1B88,
        &&label_808F1B8C,
        &&label_808F1B90,
        &&label_808F1B94,
        &&label_808F1B98,
        &&label_808F1B9C,
        &&label_808F1BA0,
        &&label_808F1BA4,
        &&label_808F1BA8,
        &&label_808F1BAC,
        &&label_808F1BB0,
        &&label_808F1BB4,
        &&label_808F1BB8,
        &&label_808F1BBC,
        &&label_808F1BC0,
        &&label_808F1BC4,
        &&label_808F1BC8,
        &&label_808F1BCC,
        &&label_808F1BD0,
        &&label_808F1BD4,
        &&label_808F1BD8,
        &&label_808F1BDC,
        &&label_808F1BE0,
        &&label_808F1BE4,
        &&label_808F1BE8,
        &&label_808F1BEC,
        &&label_808F1BF0,
        &&label_808F1BF4,
        &&label_808F1BF8,
        &&label_808F1BFC,
        &&label_808F1C00,
        &&label_808F1C04,
        &&label_808F1C08,
        &&label_808F1C0C,
        &&label_808F1C10,
        &&label_808F1C14,
        &&label_808F1C18,
        &&label_808F1C1C,
        &&label_808F1C20,
        &&label_808F1C24,
        &&label_808F1C28,
        &&label_808F1C2C,
        &&label_808F1C30,
        &&label_808F1C34,
        &&label_808F1C38,
        &&label_808F1C3C,
        &&label_808F1C40,
        &&label_808F1C44,
        &&label_808F1C48,
        &&label_808F1C4C,
        &&label_808F1C50,
        &&label_808F1C54,
        &&label_808F1C58,
        &&label_808F1C5C,
        &&label_808F1C60,
        &&label_808F1C64,
        &&label_808F1C68,
        &&label_808F1C6C,
        &&label_808F1C70,
        &&label_808F1C74,
        &&label_808F1C78,
        &&label_808F1C7C,
        &&label_808F1C80,
        &&label_808F1C84,
        &&label_808F1C88,
        &&label_808F1C8C,
        &&label_808F1C90,
        &&label_808F1C94,
        &&label_808F1C98,
        &&label_808F1C9C,
        &&label_808F1CA0,
        &&label_808F1CA4,
        &&label_808F1CA8,
        &&label_808F1CAC,
        &&label_808F1CB0,
        &&label_808F1CB4,
        &&label_808F1CB8,
        &&label_808F1CBC,
        &&label_808F1CC0,
        &&label_808F1CC4,
        &&label_808F1CC8,
        &&label_808F1CCC,
        &&label_808F1CD0,
        &&label_808F1CD4,
        &&label_808F1CD8,
        &&label_808F1CDC,
        &&label_808F1CE0,
        &&label_808F1CE4,
        &&label_808F1CE8,
        &&label_808F1CEC,
        &&label_808F1CF0,
        &&label_808F1CF4,
        &&label_808F1CF8,
        &&label_808F1CFC,
        &&label_808F1D00,
        &&label_808F1D04,
        &&label_808F1D08,
        &&label_808F1D0C,
        &&label_808F1D10,
        &&label_808F1D14,
        &&label_808F1D18,
        &&label_808F1D1C,
        &&label_808F1D20,
        &&label_808F1D24,
        &&label_808F1D28,
        &&label_808F1D2C,
        &&label_808F1D30,
        &&label_808F1D34,
        &&label_808F1D38,
        &&label_808F1D3C,
        &&label_808F1D40,
        &&label_808F1D44,
        &&label_808F1D48,
        &&label_808F1D4C,
        &&label_808F1D50,
        &&label_808F1D54,
        &&label_808F1D58,
        &&label_808F1D5C,
        &&label_808F1D60,
        &&label_808F1D64,
        &&label_808F1D68,
        &&label_808F1D6C,
        &&label_808F1D70,
        &&label_808F1D74,
        &&label_808F1D78,
        &&label_808F1D7C,
        &&label_808F1D80,
        &&label_808F1D84,
        &&label_808F1D88,
        &&label_808F1D8C,
        &&label_808F1D90,
        &&label_808F1D94,
        &&label_808F1D98,
        &&label_808F1D9C,
        &&label_808F1DA0,
        &&label_808F1DA4,
        &&label_808F1DA8,
        &&label_808F1DAC,
        &&label_808F1DB0,
        &&label_808F1DB4,
        &&label_808F1DB8,
        &&label_808F1DBC,
        &&label_808F1DC0,
        &&label_808F1DC4,
        &&label_808F1DC8,
        &&label_808F1DCC,
        &&label_808F1DD0,
        &&label_808F1DD4,
        &&label_808F1DD8,
        &&label_808F1DDC,
        &&label_808F1DE0,
        &&label_808F1DE4,
        &&label_808F1DE8,
        &&label_808F1DEC,
        &&label_808F1DF0,
        &&label_808F1DF4,
        &&label_808F1DF8,
        &&label_808F1DFC,
        &&label_808F1E00,
        &&label_808F1E04,
        &&label_808F1E08,
        &&label_808F1E0C,
        &&label_808F1E10,
        &&label_808F1E14,
        &&label_808F1E18,
        &&label_808F1E1C,
        &&label_808F1E20,
        &&label_808F1E24,
        &&label_808F1E28,
        &&label_808F1E2C,
        &&label_808F1E30,
        &&label_808F1E34,
        &&label_808F1E38,
        &&label_808F1E3C,
        &&label_808F1E40,
        &&label_808F1E44,
        &&label_808F1E48,
        &&label_808F1E4C,
        &&label_808F1E50,
        &&label_808F1E54,
        &&label_808F1E58,
        &&label_808F1E5C,
        &&label_808F1E60,
        &&label_808F1E64,
        &&label_808F1E68,
        &&label_808F1E6C,
        &&label_808F1E70,
        &&label_808F1E74,
        &&label_808F1E78,
        &&label_808F1E7C,
        &&label_808F1E80,
        &&label_808F1E84,
        &&label_808F1E88,
        &&label_808F1E8C,
        &&label_808F1E90,
        &&label_808F1E94,
        &&label_808F1E98,
        &&label_808F1E9C,
        &&label_808F1EA0,
        &&label_808F1EA4,
        &&label_808F1EA8,
        &&label_808F1EAC,
        &&label_808F1EB0,
        &&label_808F1EB4,
        &&label_808F1EB8,
        &&label_808F1EBC,
        &&label_808F1EC0,
        &&label_808F1EC4,
        &&label_808F1EC8,
        &&label_808F1ECC,
        &&label_808F1ED0,
        &&label_808F1ED4,
        &&label_808F1ED8,
        &&label_808F1EDC,
        &&label_808F1EE0,
        &&label_808F1EE4,
        &&label_808F1EE8,
        &&label_808F1EEC,
        &&label_808F1EF0,
        &&label_808F1EF4,
        &&label_808F1EF8,
        &&label_808F1EFC,
        &&label_808F1F00,
        &&label_808F1F04,
        &&label_808F1F08,
        &&label_808F1F0C,
        &&label_808F1F10,
        &&label_808F1F14,
        &&label_808F1F18,
        &&label_808F1F1C,
        &&label_808F1F20,
        &&label_808F1F24,
        &&label_808F1F28,
        &&label_808F1F2C,
        &&label_808F1F30,
        &&label_808F1F34,
        &&label_808F1F38,
        &&label_808F1F3C,
        &&label_808F1F40,
        &&label_808F1F44,
        &&label_808F1F48,
        &&label_808F1F4C,
        &&label_808F1F50,
        &&label_808F1F54,
        &&label_808F1F58,
        &&label_808F1F5C,
        &&label_808F1F60,
        &&label_808F1F64,
        &&label_808F1F68,
        &&label_808F1F6C,
        &&label_808F1F70,
        &&label_808F1F74,
        &&label_808F1F78,
        &&label_808F1F7C,
        &&label_808F1F80,
        &&label_808F1F84,
        &&label_808F1F88,
        &&label_808F1F8C,
        &&label_808F1F90,
        &&label_808F1F94,
        &&label_808F1F98,
        &&label_808F1F9C,
        &&label_808F1FA0,
        &&label_808F1FA4,
        &&label_808F1FA8,
        &&label_808F1FAC,
        &&label_808F1FB0,
        &&label_808F1FB4,
        &&label_808F1FB8,
        &&label_808F1FBC,
        &&label_808F1FC0,
        &&label_808F1FC4,
        &&label_808F1FC8,
        &&label_808F1FCC,
        &&label_808F1FD0,
        &&label_808F1FD4,
        &&label_808F1FD8,
        &&label_808F1FDC,
        &&label_808F1FE0,
        &&label_808F1FE4,
        &&label_808F1FE8,
        &&label_808F1FEC,
        &&label_808F1FF0,
        &&label_808F1FF4,
        &&label_808F1FF8,
        &&label_808F1FFC,
        &&label_808F2000,
        &&label_808F2004,
        &&label_808F2008,
        &&label_808F200C,
        &&label_808F2010,
        &&label_808F2014,
        &&label_808F2018,
        &&label_808F201C,
        &&label_808F2020,
        &&label_808F2024,
        &&label_808F2028,
        &&label_808F202C,
        &&label_808F2030,
        &&label_808F2034,
        &&label_808F2038,
        &&label_808F203C,
        &&label_808F2040,
        &&label_808F2044,
        &&label_808F2048,
        &&label_808F204C,
        &&label_808F2050,
        &&label_808F2054,
        &&label_808F2058,
        &&label_808F205C,
        &&label_808F2060,
        &&label_808F2064,
        &&label_808F2068,
        &&label_808F206C,
        &&label_808F2070,
        &&label_808F2074,
        &&label_808F2078,
        &&label_808F207C,
        &&label_808F2080,
        &&label_808F2084,
        &&label_808F2088,
        &&label_808F208C,
        &&label_808F2090,
        &&label_808F2094,
        &&label_808F2098,
        &&label_808F209C,
        &&label_808F20A0,
        &&label_808F20A4,
        &&label_808F20A8,
        &&label_808F20AC,
        &&label_808F20B0,
        &&label_808F20B4,
        &&label_808F20B8,
        &&label_808F20BC,
        &&label_808F20C0,
        &&label_808F20C4,
        &&label_808F20C8,
        &&label_808F20CC,
        &&label_808F20D0,
        &&label_808F20D4,
        &&label_808F20D8,
        &&label_808F20DC,
        &&label_808F20E0,
        &&label_808F20E4,
        &&label_808F20E8,
        &&label_808F20EC,
        &&label_808F20F0,
        &&label_808F20F4,
        &&label_808F20F8,
        &&label_808F20FC,
        &&label_808F2100,
        &&label_808F2104,
        &&label_808F2108,
        &&label_808F210C,
        &&label_808F2110,
        &&label_808F2114,
        &&label_808F2118,
        &&label_808F211C,
        &&label_808F2120,
        &&label_808F2124,
        &&label_808F2128,
        &&label_808F212C,
        &&label_808F2130,
        &&label_808F2134,
        &&label_808F2138,
        &&label_808F213C,
        &&label_808F2140,
        &&label_808F2144,
        &&label_808F2148,
        &&label_808F214C,
        &&label_808F2150,
        &&label_808F2154,
        &&label_808F2158,
        &&label_808F215C,
        &&label_808F2160,
        &&label_808F2164,
        &&label_808F2168,
        &&label_808F216C,
        &&label_808F2170,
        &&label_808F2174,
        &&label_808F2178,
        &&label_808F217C,
        &&label_808F2180,
        &&label_808F2184,
        &&label_808F2188,
        &&label_808F218C,
        &&label_808F2190,
        &&label_808F2194,
        &&label_808F2198,
        &&label_808F219C,
        &&label_808F21A0,
        &&label_808F21A4,
        &&label_808F21A8,
        &&label_808F21AC,
        &&label_808F21B0,
        &&label_808F21B4,
        &&label_808F21B8,
        &&label_808F21BC,
        &&label_808F21C0,
        &&label_808F21C4,
        &&label_808F21C8,
        &&label_808F21CC,
        &&label_808F21D0,
        &&label_808F21D4,
        &&label_808F21D8,
        &&label_808F21DC,
        &&label_808F21E0,
        &&label_808F21E4,
        &&label_808F21E8,
        &&label_808F21EC,
        &&label_808F21F0,
        &&label_808F21F4,
        &&label_808F21F8,
        &&label_808F21FC,
        &&label_808F2200,
        &&label_808F2204,
        &&label_808F2208,
        &&label_808F220C,
        &&label_808F2210,
        &&label_808F2214,
        &&label_808F2218,
        &&label_808F221C,
        &&label_808F2220,
        &&label_808F2224,
        &&label_808F2228,
        &&label_808F222C,
        &&label_808F2230,
        &&label_808F2234,
        &&label_808F2238,
        &&label_808F223C,
        &&label_808F2240,
        &&label_808F2244,
        &&label_808F2248,
        &&label_808F224C,
        &&label_808F2250,
        &&label_808F2254,
        &&label_808F2258,
        &&label_808F225C,
        &&label_808F2260,
        &&label_808F2264,
        &&label_808F2268,
        &&label_808F226C,
        &&label_808F2270,
        &&label_808F2274,
        &&label_808F2278,
        &&label_808F227C,
        &&label_808F2280,
        &&label_808F2284,
        &&label_808F2288,
        &&label_808F228C,
        &&label_808F2290,
        &&label_808F2294,
        &&label_808F2298,
        &&label_808F229C,
        &&label_808F22A0,
        &&label_808F22A4,
        &&label_808F22A8,
        &&label_808F22AC,
        &&label_808F22B0,
        &&label_808F22B4,
        &&label_808F22B8,
        &&label_808F22BC,
        &&label_808F22C0,
        &&label_808F22C4,
        &&label_808F22C8,
        &&label_808F22CC,
        &&label_808F22D0,
        &&label_808F22D4,
        &&label_808F22D8,
        &&label_808F22DC,
        &&label_808F22E0,
        &&label_808F22E4,
        &&label_808F22E8,
        &&label_808F22EC,
        &&label_808F22F0,
        &&label_808F22F4,
        &&label_808F22F8,
        &&label_808F22FC,
        &&label_808F2300,
        &&label_808F2304,
        &&label_808F2308,
        &&label_808F230C,
        &&label_808F2310,
        &&label_808F2314,
        &&label_808F2318,
        &&label_808F231C,
        &&label_808F2320,
        &&label_808F2324,
        &&label_808F2328,
        &&label_808F232C,
        &&label_808F2330,
        &&label_808F2334,
        &&label_808F2338,
        &&label_808F233C,
        &&label_808F2340,
        &&label_808F2344,
        &&label_808F2348,
        &&label_808F234C,
        &&label_808F2350,
        &&label_808F2354,
        &&label_808F2358,
        &&label_808F235C,
        &&label_808F2360,
        &&label_808F2364,
        &&label_808F2368,
        &&label_808F236C,
        &&label_808F2370,
        &&label_808F2374,
        &&label_808F2378,
        &&label_808F237C,
        &&label_808F2380,
        &&label_808F2384,
        &&label_808F2388,
        &&label_808F238C,
        &&label_808F2390,
        &&label_808F2394,
        &&label_808F2398,
        &&label_808F239C,
        &&label_808F23A0,
        &&label_808F23A4,
        &&label_808F23A8,
        &&label_808F23AC,
        &&label_808F23B0,
        &&label_808F23B4,
        &&label_808F23B8,
        &&label_808F23BC,
        &&label_808F23C0,
        &&label_808F23C4,
        &&label_808F23C8,
        &&label_808F23CC,
        &&label_808F23D0,
        &&label_808F23D4,
        &&label_808F23D8,
        &&label_808F23DC,
        &&label_808F23E0,
        &&label_808F23E4,
        &&label_808F23E8,
        &&label_808F23EC,
        &&label_808F23F0,
        &&label_808F23F4,
        &&label_808F23F8,
        &&label_808F23FC,
        &&label_808F2400,
        &&label_808F2404,
        &&label_808F2408,
        &&label_808F240C,
        &&label_808F2410,
        &&label_808F2414,
        &&label_808F2418,
        &&label_808F241C,
        &&label_808F2420,
        &&label_808F2424,
        &&label_808F2428,
        &&label_808F242C,
        &&label_808F2430,
        &&label_808F2434,
        &&label_808F2438,
        &&label_808F243C,
        &&label_808F2440,
        &&label_808F2444,
        &&label_808F2448,
        &&label_808F244C,
        &&label_808F2450,
        &&label_808F2454,
        &&label_808F2458,
        &&label_808F245C,
        &&label_808F2460,
        &&label_808F2464,
        &&label_808F2468,
        &&label_808F246C,
        &&label_808F2470,
        &&label_808F2474,
        &&label_808F2478,
        &&label_808F247C,
        &&label_808F2480,
        &&label_808F2484,
        &&label_808F2488,
        &&label_808F248C,
        &&label_808F2490,
        &&label_808F2494,
        &&label_808F2498,
        &&label_808F249C,
        &&label_808F24A0,
        &&label_808F24A4,
        &&label_808F24A8,
        &&label_808F24AC,
        &&label_808F24B0,
        &&label_808F24B4,
        &&label_808F24B8,
        &&label_808F24BC,
        &&label_808F24C0,
        &&label_808F24C4,
        &&label_808F24C8,
        &&label_808F24CC,
        &&label_808F24D0,
        &&label_808F24D4,
        &&label_808F24D8,
        &&label_808F24DC,
        &&label_808F24E0,
        &&label_808F24E4,
        &&label_808F24E8,
        &&label_808F24EC,
        &&label_808F24F0,
        &&label_808F24F4,
        &&label_808F24F8,
        &&label_808F24FC,
        &&label_808F2500,
        &&label_808F2504,
        &&label_808F2508,
        &&label_808F250C,
        &&label_808F2510,
        &&label_808F2514,
        &&label_808F2518,
        &&label_808F251C,
        &&label_808F2520,
        &&label_808F2524,
        &&label_808F2528,
        &&label_808F252C,
        &&label_808F2530,
        &&label_808F2534,
        &&label_808F2538,
        &&label_808F253C,
        &&label_808F2540,
        &&label_808F2544,
        &&label_808F2548,
        &&label_808F254C,
        &&label_808F2550,
        &&label_808F2554,
        &&label_808F2558,
        &&label_808F255C,
        &&label_808F2560,
        &&label_808F2564,
        &&label_808F2568,
        &&label_808F256C,
        &&label_808F2570,
        &&label_808F2574,
        &&label_808F2578,
        &&label_808F257C,
        &&label_808F2580,
        &&label_808F2584,
        &&label_808F2588,
        &&label_808F258C,
        &&label_808F2590,
        &&label_808F2594,
        &&label_808F2598,
        &&label_808F259C,
        &&label_808F25A0,
        &&label_808F25A4,
        &&label_808F25A8,
        &&label_808F25AC,
        &&label_808F25B0,
        &&label_808F25B4,
        &&label_808F25B8,
        &&label_808F25BC,
        &&label_808F25C0,
        &&label_808F25C4,
        &&label_808F25C8,
        &&label_808F25CC,
        &&label_808F25D0,
        &&label_808F25D4,
        &&label_808F25D8,
        &&label_808F25DC,
        &&label_808F25E0,
        &&label_808F25E4,
        &&label_808F25E8,
        &&label_808F25EC,
        &&label_808F25F0,
        &&label_808F25F4,
        &&label_808F25F8,
        &&label_808F25FC,
        &&label_808F2600,
        &&label_808F2604,
        &&label_808F2608,
        &&label_808F260C,
        &&label_808F2610,
        &&label_808F2614,
        &&label_808F2618,
        &&label_808F261C,
        &&label_808F2620,
        &&label_808F2624,
        &&label_808F2628,
        &&label_808F262C,
        &&label_808F2630,
        &&label_808F2634,
        &&label_808F2638,
        &&label_808F263C,
        &&label_808F2640,
        &&label_808F2644,
        &&label_808F2648,
        &&label_808F264C,
        &&label_808F2650,
        &&label_808F2654,
        &&label_808F2658,
        &&label_808F265C,
        &&label_808F2660,
        &&label_808F2664,
        &&label_808F2668,
        &&label_808F266C,
        &&label_808F2670,
        &&label_808F2674,
        &&label_808F2678,
        &&label_808F267C,
        &&label_808F2680,
        &&label_808F2684,
        &&label_808F2688,
        &&label_808F268C,
        &&label_808F2690,
        &&label_808F2694,
        &&label_808F2698,
        &&label_808F269C,
        &&label_808F26A0,
        &&label_808F26A4,
        &&label_808F26A8,
        &&label_808F26AC,
        &&label_808F26B0,
        &&label_808F26B4,
        &&label_808F26B8,
        &&label_808F26BC,
        &&label_808F26C0,
        &&label_808F26C4,
        &&label_808F26C8,
        &&label_808F26CC,
        &&label_808F26D0,
        &&label_808F26D4,
        &&label_808F26D8,
        &&label_808F26DC,
        &&label_808F26E0,
        &&label_808F26E4,
        &&label_808F26E8,
        &&label_808F26EC,
        &&label_808F26F0,
        &&label_808F26F4,
        &&label_808F26F8,
        &&label_808F26FC,
        &&label_808F2700,
        &&label_808F2704,
        &&label_808F2708,
        &&label_808F270C,
        &&label_808F2710,
        &&label_808F2714,
        &&label_808F2718,
        &&label_808F271C,
        &&label_808F2720,
        &&label_808F2724,
        &&label_808F2728,
        &&label_808F272C,
        &&label_808F2730,
        &&label_808F2734,
        &&label_808F2738,
        &&label_808F273C,
        &&label_808F2740,
        &&label_808F2744,
        &&label_808F2748,
        &&label_808F274C,
        &&label_808F2750,
        &&label_808F2754,
        &&label_808F2758,
        &&label_808F275C,
        &&label_808F2760,
        &&label_808F2764,
        &&label_808F2768,
        &&label_808F276C,
        &&label_808F2770,
        &&label_808F2774,
        &&label_808F2778,
        &&label_808F277C,
        &&label_808F2780,
        &&label_808F2784,
        &&label_808F2788,
        &&label_808F278C,
        &&label_808F2790,
        &&label_808F2794,
        &&label_808F2798,
        &&label_808F279C,
        &&label_808F27A0,
        &&label_808F27A4,
        &&label_808F27A8,
        &&label_808F27AC,
        &&label_808F27B0,
        &&label_808F27B4,
        &&label_808F27B8,
        &&label_808F27BC,
        &&label_808F27C0,
        &&label_808F27C4,
        &&label_808F27C8,
        &&label_808F27CC,
        &&label_808F27D0,
        &&label_808F27D4,
        &&label_808F27D8,
        &&label_808F27DC,
        &&label_808F27E0,
        &&label_808F27E4,
        &&label_808F27E8,
        &&label_808F27EC,
        &&label_808F27F0,
        &&label_808F27F4,
        &&label_808F27F8,
        &&label_808F27FC,
        &&label_808F2800,
        &&label_808F2804,
        &&label_808F2808,
        &&label_808F280C,
        &&label_808F2810,
        &&label_808F2814,
        &&label_808F2818,
        &&label_808F281C,
        &&label_808F2820,
        &&label_808F2824,
        &&label_808F2828,
        &&label_808F282C,
        &&label_808F2830,
        &&label_808F2834,
        &&label_808F2838,
        &&label_808F283C,
        &&label_808F2840,
        &&label_808F2844,
        &&label_808F2848,
        &&label_808F284C,
        &&label_808F2850,
        &&label_808F2854,
        &&label_808F2858,
        &&label_808F285C,
        &&label_808F2860,
        &&label_808F2864,
        &&label_808F2868,
        &&label_808F286C,
        &&label_808F2870,
        &&label_808F2874,
        &&label_808F2878,
        &&label_808F287C,
        &&label_808F2880,
        &&label_808F2884,
        &&label_808F2888,
        &&label_808F288C,
        &&label_808F2890,
        &&label_808F2894,
        &&label_808F2898,
        &&label_808F289C,
        &&label_808F28A0,
        &&label_808F28A4,
        &&label_808F28A8,
        &&label_808F28AC,
        &&label_808F28B0,
        &&label_808F28B4,
        &&label_808F28B8,
        &&label_808F28BC,
        &&label_808F28C0,
        &&label_808F28C4,
        &&label_808F28C8,
        &&label_808F28CC,
        &&label_808F28D0,
        &&label_808F28D4,
        &&label_808F28D8,
        &&label_808F28DC,
        &&label_808F28E0,
        &&label_808F28E4,
        &&label_808F28E8,
        &&label_808F28EC,
        &&label_808F28F0,
        &&label_808F28F4,
        &&label_808F28F8,
        &&label_808F28FC,
        &&label_808F2900,
        &&label_808F2904,
        &&label_808F2908,
        &&label_808F290C,
        &&label_808F2910,
        &&label_808F2914,
        &&label_808F2918,
        &&label_808F291C,
        &&label_808F2920,
        &&label_808F2924,
        &&label_808F2928,
        &&label_808F292C,
        &&label_808F2930,
        &&label_808F2934,
        &&label_808F2938,
        &&label_808F293C,
        &&label_808F2940,
        &&label_808F2944,
        &&label_808F2948,
        &&label_808F294C,
        &&label_808F2950,
        &&label_808F2954,
        &&label_808F2958,
        &&label_808F295C,
        &&label_808F2960,
        &&label_808F2964,
        &&label_808F2968,
        &&label_808F296C,
        &&label_808F2970,
        &&label_808F2974,
        &&label_808F2978,
        &&label_808F297C,
        &&label_808F2980,
        &&label_808F2984,
        &&label_808F2988,
        &&label_808F298C,
        &&label_808F2990,
        &&label_808F2994,
        &&label_808F2998,
        &&label_808F299C,
        &&label_808F29A0,
        &&label_808F29A4,
        &&label_808F29A8,
        &&label_808F29AC,
        &&label_808F29B0,
        &&label_808F29B4,
        &&label_808F29B8,
        &&label_808F29BC,
        &&label_808F29C0,
        &&label_808F29C4,
        &&label_808F29C8,
        &&label_808F29CC,
        &&label_808F29D0,
        &&label_808F29D4,
        &&label_808F29D8,
        &&label_808F29DC,
        &&label_808F29E0,
        &&label_808F29E4,
        &&label_808F29E8,
        &&label_808F29EC,
        &&label_808F29F0,
        &&label_808F29F4,
        &&label_808F29F8,
        &&label_808F29FC,
        &&label_808F2A00,
        &&label_808F2A04,
        &&label_808F2A08,
        &&label_808F2A0C,
        &&label_808F2A10,
        &&label_808F2A14,
        &&label_808F2A18,
        &&label_808F2A1C,
        &&label_808F2A20,
        &&label_808F2A24,
        &&label_808F2A28,
        &&label_808F2A2C,
        &&label_808F2A30,
        &&label_808F2A34,
        &&label_808F2A38,
        &&label_808F2A3C,
        &&label_808F2A40,
        &&label_808F2A44,
        &&label_808F2A48,
        &&label_808F2A4C,
        &&label_808F2A50,
        &&label_808F2A54,
        &&label_808F2A58,
        &&label_808F2A5C,
        &&label_808F2A60,
        &&label_808F2A64,
        &&label_808F2A68,
        &&label_808F2A6C,
        &&label_808F2A70,
        &&label_808F2A74,
        &&label_808F2A78,
        &&label_808F2A7C,
        &&label_808F2A80,
        &&label_808F2A84,
        &&label_808F2A88,
        &&label_808F2A8C,
        &&label_808F2A90,
        &&label_808F2A94,
        &&label_808F2A98,
        &&label_808F2A9C,
        &&label_808F2AA0,
        &&label_808F2AA4,
        &&label_808F2AA8,
        &&label_808F2AAC,
        &&label_808F2AB0,
        &&label_808F2AB4,
        &&label_808F2AB8,
        &&label_808F2ABC,
        &&label_808F2AC0,
        &&label_808F2AC4,
        &&label_808F2AC8,
        &&label_808F2ACC,
        &&label_808F2AD0,
        &&label_808F2AD4,
        &&label_808F2AD8,
        &&label_808F2ADC,
        &&label_808F2AE0,
        &&label_808F2AE4,
        &&label_808F2AE8,
        &&label_808F2AEC,
        &&label_808F2AF0,
        &&label_808F2AF4,
        &&label_808F2AF8,
        &&label_808F2AFC,
        &&label_808F2B00,
        &&label_808F2B04,
        &&label_808F2B08,
        &&label_808F2B0C,
        &&label_808F2B10,
        &&label_808F2B14,
        &&label_808F2B18,
        &&label_808F2B1C,
        &&label_808F2B20,
        &&label_808F2B24,
        &&label_808F2B28,
        &&label_808F2B2C,
        &&label_808F2B30,
        &&label_808F2B34,
        &&label_808F2B38,
        &&label_808F2B3C,
        &&label_808F2B40,
        &&label_808F2B44,
        &&label_808F2B48,
        &&label_808F2B4C,
        &&label_808F2B50,
        &&label_808F2B54,
        &&label_808F2B58,
        &&label_808F2B5C,
        &&label_808F2B60,
        &&label_808F2B64,
        &&label_808F2B68,
        &&label_808F2B6C,
        &&label_808F2B70,
        &&label_808F2B74,
        &&label_808F2B78,
        &&label_808F2B7C,
        &&label_808F2B80,
        &&label_808F2B84,
        &&label_808F2B88,
        &&label_808F2B8C,
        &&label_808F2B90,
        &&label_808F2B94,
        &&label_808F2B98,
        &&label_808F2B9C,
        &&label_808F2BA0,
        &&label_808F2BA4,
        &&label_808F2BA8,
        &&label_808F2BAC,
        &&label_808F2BB0,
        &&label_808F2BB4,
        &&label_808F2BB8,
        &&label_808F2BBC,
        &&label_808F2BC0,
        &&label_808F2BC4,
        &&label_808F2BC8,
        &&label_808F2BCC,
        &&label_808F2BD0,
        &&label_808F2BD4,
        &&label_808F2BD8,
        &&label_808F2BDC,
        &&label_808F2BE0,
        &&label_808F2BE4,
        &&label_808F2BE8,
        &&label_808F2BEC,
        &&label_808F2BF0,
        &&label_808F2BF4,
        &&label_808F2BF8,
        &&label_808F2BFC,
        &&label_808F2C00,
        &&label_808F2C04,
        &&label_808F2C08,
        &&label_808F2C0C,
        &&label_808F2C10,
        &&label_808F2C14,
        &&label_808F2C18,
        &&label_808F2C1C,
        &&label_808F2C20,
        &&label_808F2C24,
        &&label_808F2C28,
        &&label_808F2C2C,
        &&label_808F2C30,
        &&label_808F2C34,
        &&label_808F2C38,
        &&label_808F2C3C,
        &&label_808F2C40,
        &&label_808F2C44,
        &&label_808F2C48,
        &&label_808F2C4C,
        &&label_808F2C50,
        &&label_808F2C54,
        &&label_808F2C58,
        &&label_808F2C5C,
        &&label_808F2C60,
        &&label_808F2C64,
        &&label_808F2C68,
        &&label_808F2C6C,
        &&label_808F2C70,
        &&label_808F2C74,
        &&label_808F2C78,
        &&label_808F2C7C,
        &&label_808F2C80,
        &&label_808F2C84,
        &&label_808F2C88,
        &&label_808F2C8C,
        &&label_808F2C90,
        &&label_808F2C94,
        &&label_808F2C98,
        &&label_808F2C9C,
        &&label_808F2CA0,
        &&label_808F2CA4,
        &&label_808F2CA8,
        &&label_808F2CAC,
        &&label_808F2CB0,
        &&label_808F2CB4,
        &&label_808F2CB8,
        &&label_808F2CBC,
        &&label_808F2CC0,
        &&label_808F2CC4,
        &&label_808F2CC8,
        &&label_808F2CCC,
        &&label_808F2CD0,
        &&label_808F2CD4,
        &&label_808F2CD8,
        &&label_808F2CDC,
        &&label_808F2CE0,
        &&label_808F2CE4,
        &&label_808F2CE8,
        &&label_808F2CEC,
        &&label_808F2CF0
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x808F1060u && pc <= 0x808F2CF0u && ((pc - 0x808F1060u) & 3u) == 0u)
            goto *pc_table_808F1060[(pc - 0x808F1060u) >> 2];
    }
    return;
label_808F1060:
    ctx->pc = 0x808F1060u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 30u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1060u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 30u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 808F1060: stwu     r1, -240(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-240);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1064:
    ctx->pc = 0x808F1064u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1064u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 808F1064: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1068:
    ctx->pc = 0x808F1068u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1068u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 808F1068: stw     r0, 244(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(244);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F106C:
    ctx->pc = 0x808F106Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F106Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 808F106C: stfd     f31, 224(r1)
    if (!ppc_fp_available_inline(ctx, 0x808F106Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(224);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1070:
    ctx->pc = 0x808F1070u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1070u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 808F1070: psq_st   f31, 232(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x808F1070u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(232);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x808F1070u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1074:
    ctx->pc = 0x808F1074u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1074u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 808F1074: stfd     f30, 208(r1)
    if (!ppc_fp_available_inline(ctx, 0x808F1074u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1078:
    ctx->pc = 0x808F1078u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1078u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 808F1078: psq_st   f30, 216(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x808F1078u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x808F1078u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F107C:
    ctx->pc = 0x808F107Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F107Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 808F107C: stfd     f29, 192(r1)
    if (!ppc_fp_available_inline(ctx, 0x808F107Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(192);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1080:
    ctx->pc = 0x808F1080u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1080u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 808F1080: psq_st   f29, 200(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x808F1080u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x808F1080u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1084:
    ctx->pc = 0x808F1084u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1084u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 808F1084: stfd     f28, 176(r1)
    if (!ppc_fp_available_inline(ctx, 0x808F1084u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[28]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1088:
    ctx->pc = 0x808F1088u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1088u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 808F1088: psq_st   f28, 184(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x808F1088u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x808F1088u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F108C:
    ctx->pc = 0x808F108Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F108Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 808F108C: stfd     f27, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x808F108Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[27]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1090:
    ctx->pc = 0x808F1090u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1090u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 808F1090: psq_st   f27, 168(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x808F1090u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        ppc_psq_store_inline(ctx, 27u, ea, false, 0u, false, 0x808F1090u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1094:
    ctx->pc = 0x808F1094u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 11u, 0x808F1094u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 808F1094: stmw     r22, 120(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        for (u32 r = 22; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1098:
    ctx->pc = 0x808F1098u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1098u)) return;
    // 808F1098: lis     r4, -27900
    ctx->gpr[4] = ((u32)(s32)(-27900) << 16);

label_808F109C:
    ctx->pc = 0x808F109Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F109Cu)) return;
    // 808F109C: fmr    f28, f1
    if (!ppc_fp_available_inline(ctx, 0x808F109Cu)) return;
    ctx->fpr[28] = ctx->fpr[1];

label_808F10A0:
    ctx->pc = 0x808F10A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F10A0u)) return;
    // 808F10A0: addi    r30, r4, -2784
    ctx->gpr[30] = ctx->gpr[4] + (u32)(s32)(-2784);

label_808F10A4:
    ctx->pc = 0x808F10A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F10A4u)) return;
    // 808F10A4: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_808F10A8:
    ctx->pc = 0x808F10A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F10A8u)) return;
    // 808F10A8: addi    r29, r30, 100
    ctx->gpr[29] = ctx->gpr[30] + (u32)(s32)(100);

label_808F10AC:
    ctx->pc = 0x808F10ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F10ACu)) return;
    // 808F10AC: bl      0x808F2250
    {
            ctx->lr = 0x808F10B0u;
            goto label_808F2250;
    }

label_808F10B0:
    ctx->pc = 0x808F10B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F10B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 808F10B0: addi    r3, r30, 308
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(308);

label_808F10B4:
    ctx->pc = 0x808F10B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F10B4u)) return;
    // 808F10B4: rlwinm r0, r26, 3, 21, 28
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[26], 3u) & 0x000007F8u;
    }

label_808F10B8:
    ctx->pc = 0x808F10B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F10B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 808F10B8: lwz     r4, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F10BC:
    ctx->pc = 0x808F10BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F10BCu)) return;
    // 808F10BC: fmr    f27, f1
    if (!ppc_fp_available_inline(ctx, 0x808F10BCu)) return;
    ctx->fpr[27] = ctx->fpr[1];

label_808F10C0:
    ctx->pc = 0x808F10C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F10C0u)) return;
    // 808F10C0: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_808F10C4:
    ctx->pc = 0x808F10C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F10C4u)) return;
    // 808F10C4: add   r24, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[24] = res;
    }

label_808F10C8:
    ctx->pc = 0x808F10C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F10C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 808F10C8: lwz     r25, 4(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(4);
        ctx->gpr[25] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F10CC:
    ctx->pc = 0x808F10CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F10CCu)) return;
    // 808F10CC: bl      0x80485AA8
    {
            ctx->lr = 0x808F10D0u;
            ctx->pc = 0x80485AA8u;
            return;
    }

label_808F10D0:
    ctx->pc = 0x808F10D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F10D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F10D0: li      r23, 0
    ctx->gpr[23] = (u32)(s32)(0);

label_808F10D4:
    ctx->pc = 0x808F10D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F10D4u)) return;
    // 808F10D4: b       0x808F10F4
    {
            goto label_808F10F4;
    }

label_808F10D8:
    ctx->pc = 0x808F10D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F10D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F10D8: lwz     r4, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F10DC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F10DCu)) return;
    // 808F10DC: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_808F10E0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F10E0u)) return;
    // 808F10E0: bl      0x804850C4
    {
            ctx->lr = 0x808F10E4u;
            ctx->pc = 0x804850C4u;
            return;
    }

label_808F10E4:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F10E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F10E4: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_808F10E8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F10E8u)) return;
    // 808F10E8: bl      0x80485928
    {
            ctx->lr = 0x808F10ECu;
            ctx->pc = 0x80485928u;
            return;
    }

label_808F10EC:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F10ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F10EC: addi    r25, r25, 4
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(4);

label_808F10F0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F10F0u)) return;
    // 808F10F0: addi    r23, r23, 1
    ctx->gpr[23] = ctx->gpr[23] + (u32)(s32)(1);

label_808F10F4:
    ctx->pc = 0x808F10F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F10F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F10F4: lwz     r0, 0(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F10F8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F10F8u)) return;
    // 808F10F8: cmpw    r23, r0
    {
        s32 val_a = (s32)(ctx->gpr[23]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_808F10FC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F10FCu)) return;
    // 808F10FC: bc    12, 0, 0x808F10D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x808F10D8u;
                return;
            }
            goto label_808F10D8;
        }
    }

label_808F1100:
    ctx->pc = 0x808F1100u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1100u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F1100: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_808F1104:
    ctx->pc = 0x808F1104u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1104u)) return;
    // 808F1104: bl      0x804860C4
    {
            ctx->lr = 0x808F1108u;
            ctx->pc = 0x804860C4u;
            return;
    }

label_808F1108:
    ctx->pc = 0x808F1108u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1108u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F1108: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_808F110C:
    ctx->pc = 0x808F110Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F110Cu)) return;
    // 808F110C: bl      0x8004D264
    {
            ctx->lr = 0x808F1110u;
            ctx->pc = 0x8004D264u;
            return;
    }

label_808F1110:
    ctx->pc = 0x808F1110u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1110u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 808F1110: lis     r3, 2
    ctx->gpr[3] = ((u32)(s32)(2) << 16);

label_808F1114:
    ctx->pc = 0x808F1114u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1114u)) return;
    // 808F1114: addi    r3, r3, -32768
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32768);

label_808F1118:
    ctx->pc = 0x808F1118u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1118u)) return;
    // 808F1118: bl      0x8004D234
    {
            ctx->lr = 0x808F111Cu;
            ctx->pc = 0x8004D234u;
            return;
    }

label_808F111C:
    ctx->pc = 0x808F111Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F111Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F111C: lwz     r0, 104(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(104);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1120:
    ctx->pc = 0x808F1120u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1120u)) return;
    // 808F1120: cmplwi  r0, 0x0000
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

label_808F1124:
    ctx->pc = 0x808F1124u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1124u)) return;
    // 808F1124: bc    12, 2, 0x808F1440
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_808F1440;
        }
    }

label_808F1128:
    ctx->pc = 0x808F1128u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1128u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F1128: lwz     r0, 108(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(108);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F112C:
    ctx->pc = 0x808F112Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F112Cu)) return;
    // 808F112C: cmplwi  r0, 0x0000
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

label_808F1130:
    ctx->pc = 0x808F1130u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1130u)) return;
    // 808F1130: bc    12, 2, 0x808F1440
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_808F1440;
        }
    }

label_808F1134:
    ctx->pc = 0x808F1134u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 14u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1134u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 14u : 1u;
    // 808F1134: lis     r3, -27903
    ctx->gpr[3] = ((u32)(s32)(-27903) << 16);

label_808F1138:
    ctx->pc = 0x808F1138u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1138u)) return;
    // 808F1138: lis     r4, -27903
    ctx->gpr[4] = ((u32)(s32)(-27903) << 16);

label_808F113C:
    ctx->pc = 0x808F113Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F113Cu)) return;
    // 808F113C: addi    r6, r4, 31284
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(31284);

label_808F1140:
    ctx->pc = 0x808F1140u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1140u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 808F1140: lfs     f0, 31300(r3)
    if (!ppc_fp_available_inline(ctx, 0x808F1140u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(31300);
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
label_808F1144:
    ctx->pc = 0x808F1144u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1144u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 808F1144: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1148:
    ctx->pc = 0x808F1148u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1148u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 808F1148: lwz     r4, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F114C:
    ctx->pc = 0x808F114Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F114Cu)) return;
    // 808F114C: fcmpo   cr0, f27, f0
    if (!ppc_fp_available_inline(ctx, 0x808F114Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[27], ctx->fpr[0], true);

label_808F1150:
    ctx->pc = 0x808F1150u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1150u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 808F1150: lwz     r3, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1154:
    ctx->pc = 0x808F1154u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1154u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 808F1154: lwz     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1158:
    ctx->pc = 0x808F1158u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1158u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 808F1158: stw     r5, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F115C:
    ctx->pc = 0x808F115Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F115Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 808F115C: stw     r4, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1160:
    ctx->pc = 0x808F1160u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1160u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F1160: stw     r3, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1164:
    ctx->pc = 0x808F1164u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1164u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 808F1164: stw     r0, 52(r1)
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
label_808F1168:
    ctx->pc = 0x808F1168u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1168u)) return;
    // 808F1168: bc    12, 1, 0x808F1444
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_808F1444;
        }
    }

label_808F116C:
    ctx->pc = 0x808F116Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F116Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 808F116C: lis     r3, -27903
    ctx->gpr[3] = ((u32)(s32)(-27903) << 16);

label_808F1170:
    ctx->pc = 0x808F1170u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1170u)) return;
    // 808F1170: lis     r4, -27903
    ctx->gpr[4] = ((u32)(s32)(-27903) << 16);

label_808F1174:
    ctx->pc = 0x808F1174u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1174u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 808F1174: lfs     f0, 31308(r3)
    if (!ppc_fp_available_inline(ctx, 0x808F1174u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(31308);
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
label_808F1178:
    ctx->pc = 0x808F1178u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1178u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 808F1178: lfs     f1, 31304(r4)
    if (!ppc_fp_available_inline(ctx, 0x808F1178u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(31304);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F117C:
    ctx->pc = 0x808F117Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F117Cu)) return;
    // 808F117C: fsubs   f0, f0, f27
    if (!ppc_fp_available_inline(ctx, 0x808F117Cu)) return;
    ppc_fsubs(ctx, 0, 0, 27);

label_808F1180:
    ctx->pc = 0x808F1180u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1180u)) return;
    // 808F1180: fmuls   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x808F1180u)) return;
    ppc_fmuls(ctx, 1, 1, 0);

label_808F1184:
    ctx->pc = 0x808F1184u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1184u)) return;
    // 808F1184: bl      0x80006CAC
    {
            ctx->lr = 0x808F1188u;
            ctx->pc = 0x80006CACu;
            return;
    }

label_808F1188:
    ctx->pc = 0x808F1188u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1188u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F1188: cmplwi  r3, 0x00FF
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x00FFu);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_808F118C:
    ctx->pc = 0x808F118Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F118Cu)) return;
    // 808F118C: bc    4, 0, 0x808F1230
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_808F1230;
        }
    }

label_808F1190:
    ctx->pc = 0x808F1190u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 64u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1190u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 64u : 1u;
    // 808F1190: rlwinm r0, r3, 24, 0, 7
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 24u) & 0xFF000000u;
    }

label_808F1194:
    ctx->pc = 0x808F1194u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1194u)) return;
    // 808F1194: lis     r4, -32639
    ctx->gpr[4] = ((u32)(s32)(-32639) << 16);

label_808F1198:
    ctx->pc = 0x808F1198u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1198u)) return;
    // 808F1198: oris    r7, r0, 0x00FF
    ctx->gpr[7] = ctx->gpr[0] | (0x00FFu << 16);

label_808F119C:
    ctx->pc = 0x808F119Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F119Cu)) return;
    // 808F119C: ori     r7, r7, 0xFFFF
    ctx->gpr[7] = ctx->gpr[7] | 0xFFFFu;

label_808F11A0:
    ctx->pc = 0x808F11A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F11A0u)) return;
    // 808F11A0: addi    r10, r4, -32639
    ctx->gpr[10] = ctx->gpr[4] + (u32)(s32)(-32639);

label_808F11A4:
    ctx->pc = 0x808F11A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F11A4u)) return;
    // 808F11A4: rlwinm r0, r7, 8, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[7], 8u) & 0x000000FFu;
    }

label_808F11A8:
    ctx->pc = 0x808F11A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x808F11A8u)) return;
    // 808F11A8: mulli   r6, r0, 255
    ctx->gpr[6] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)255);

label_808F11AC:
    ctx->pc = 0x808F11ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F11ACu)) return;
    // 808F11AC: rlwinm r5, r7, 16, 24, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[7], 16u) & 0x000000FFu;
    }

label_808F11B0:
    ctx->pc = 0x808F11B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F11B0u)) return;
    // 808F11B0: rlwinm r0, r7, 24, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[7], 24u) & 0x000000FFu;
    }

label_808F11B4:
    ctx->pc = 0x808F11B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F11B4u)) return;
    // 808F11B4: rlwinm r4, r7, 0, 24, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[7], 0u) & 0x000000FFu;
    }

label_808F11B8:
    ctx->pc = 0x808F11B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x808F11B8u)) return;
    // 808F11B8: mulli   r7, r5, 255
    ctx->gpr[7] = (u32)((s64)(s32)ctx->gpr[5] * (s64)(s32)255);

label_808F11BC:
    ctx->pc = 0x808F11BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x808F11BCu)) return;
    // 808F11BC: mulli   r5, r4, 255
    ctx->gpr[5] = (u32)((s64)(s32)ctx->gpr[4] * (s64)(s32)255);

label_808F11C0:
    ctx->pc = 0x808F11C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x808F11C0u)) return;
    // 808F11C0: mulhw   r4, r10, r6
    {
        s64 product = (s64)(s32)ctx->gpr[10] * (s64)(s32)ctx->gpr[6];
        ctx->gpr[4] = (u32)(product >> 32);
    }

label_808F11C4:
    ctx->pc = 0x808F11C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F11C4u)) return;
    // 808F11C4: add   r6, r4, r6
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_808F11C8:
    ctx->pc = 0x808F11C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x808F11C8u)) return;
    // 808F11C8: mulhw   r4, r10, r7
    {
        s64 product = (s64)(s32)ctx->gpr[10] * (s64)(s32)ctx->gpr[7];
        ctx->gpr[4] = (u32)(product >> 32);
    }

label_808F11CC:
    ctx->pc = 0x808F11CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F11CCu)) return;
    // 808F11CC: srawi r6, r6, 7
    {
        u32 sh = 7u;
        u32 value = ctx->gpr[6];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[6] = value;
        } else if (sh > 31) {
            ctx->gpr[6] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[6] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_808F11D0:
    ctx->pc = 0x808F11D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F11D0u)) return;
    // 808F11D0: rlwinm r8, r6, 1, 31, 31
    {
        ctx->gpr[8] = dolrecomp_rotl32(ctx->gpr[6], 1u) & 0x00000001u;
    }

label_808F11D4:
    ctx->pc = 0x808F11D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F11D4u)) return;
    // 808F11D4: add   r8, r6, r8
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[8];
        u32 res = a + b;
        ctx->gpr[8] = res;
    }

label_808F11D8:
    ctx->pc = 0x808F11D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x808F11D8u)) return;
    // 808F11D8: mulhw   r6, r10, r5
    {
        s64 product = (s64)(s32)ctx->gpr[10] * (s64)(s32)ctx->gpr[5];
        ctx->gpr[6] = (u32)(product >> 32);
    }

label_808F11DC:
    ctx->pc = 0x808F11DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F11DCu)) return;
    // 808F11DC: add   r4, r4, r7
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[7];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_808F11E0:
    ctx->pc = 0x808F11E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F11E0u)) return;
    // 808F11E0: rlwinm r9, r8, 24, 0, 7
    {
        ctx->gpr[9] = dolrecomp_rotl32(ctx->gpr[8], 24u) & 0xFF000000u;
    }

label_808F11E4:
    ctx->pc = 0x808F11E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F11E4u)) return;
    // 808F11E4: srawi r7, r4, 7
    {
        u32 sh = 7u;
        u32 value = ctx->gpr[4];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[7] = value;
        } else if (sh > 31) {
            ctx->gpr[7] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[7] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_808F11E8:
    ctx->pc = 0x808F11E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F11E8u)) return;
    // 808F11E8: rlwinm r8, r7, 1, 31, 31
    {
        ctx->gpr[8] = dolrecomp_rotl32(ctx->gpr[7], 1u) & 0x00000001u;
    }

label_808F11EC:
    ctx->pc = 0x808F11ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F11ECu)) return;
    // 808F11EC: add   r5, r6, r5
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_808F11F0:
    ctx->pc = 0x808F11F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x808F11F0u)) return;
    // 808F11F0: mulli   r0, r0, 255
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)255);

label_808F11F4:
    ctx->pc = 0x808F11F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F11F4u)) return;
    // 808F11F4: add   r6, r7, r8
    {
        u32 a = ctx->gpr[7];
        u32 b = ctx->gpr[8];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_808F11F8:
    ctx->pc = 0x808F11F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F11F8u)) return;
    // 808F11F8: srawi r5, r5, 7
    {
        u32 sh = 7u;
        u32 value = ctx->gpr[5];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[5] = value;
        } else if (sh > 31) {
            ctx->gpr[5] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[5] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_808F11FC:
    ctx->pc = 0x808F11FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F11FCu)) return;
    // 808F11FC: rlwinm r7, r6, 16, 0, 15
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[6], 16u) & 0xFFFF0000u;
    }

label_808F1200:
    ctx->pc = 0x808F1200u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x808F1200u)) return;
    // 808F1200: mulhw   r4, r10, r0
    {
        s64 product = (s64)(s32)ctx->gpr[10] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[4] = (u32)(product >> 32);
    }

label_808F1204:
    ctx->pc = 0x808F1204u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1204u)) return;
    // 808F1204: rlwinm r6, r5, 1, 31, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[5], 1u) & 0x00000001u;
    }

label_808F1208:
    ctx->pc = 0x808F1208u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1208u)) return;
    // 808F1208: add   r5, r5, r6
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_808F120C:
    ctx->pc = 0x808F120Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F120Cu)) return;
    // 808F120C: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_808F1210:
    ctx->pc = 0x808F1210u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1210u)) return;
    // 808F1210: srawi r0, r0, 7
    {
        u32 sh = 7u;
        u32 value = ctx->gpr[0];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[0] = value;
        } else if (sh > 31) {
            ctx->gpr[0] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[0] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_808F1214:
    ctx->pc = 0x808F1214u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1214u)) return;
    // 808F1214: rlwinm r4, r0, 1, 31, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0x00000001u;
    }

label_808F1218:
    ctx->pc = 0x808F1218u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1218u)) return;
    // 808F1218: add   r0, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_808F121C:
    ctx->pc = 0x808F121Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F121Cu)) return;
    // 808F121C: rlwinm r0, r0, 8, 0, 23
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 8u) & 0xFFFFFF00u;
    }

label_808F1220:
    ctx->pc = 0x808F1220u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1220u)) return;
    // 808F1220: or   r0, r5, r0
    {
        ctx->gpr[0] = ctx->gpr[5] | ctx->gpr[0];
    }

label_808F1224:
    ctx->pc = 0x808F1224u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1224u)) return;
    // 808F1224: or   r0, r7, r0
    {
        ctx->gpr[0] = ctx->gpr[7] | ctx->gpr[0];
    }

label_808F1228:
    ctx->pc = 0x808F1228u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1228u)) return;
    // 808F1228: or   r0, r9, r0
    {
        ctx->gpr[0] = ctx->gpr[9] | ctx->gpr[0];
    }

label_808F122C:
    ctx->pc = 0x808F122Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F122Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 808F122C: stw     r0, 24(r1)
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
label_808F1230:
    ctx->pc = 0x808F1230u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1230u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 808F1230: li      r4, 255
    ctx->gpr[4] = (u32)(s32)(255);

label_808F1234:
    ctx->pc = 0x808F1234u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1234u)) return;
    // 808F1234: xor   r0, r4, r3
    {
        ctx->gpr[0] = ctx->gpr[4] ^ ctx->gpr[3];
    }

label_808F1238:
    ctx->pc = 0x808F1238u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1238u)) return;
    // 808F1238: cntlzw r0, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_808F123C:
    ctx->pc = 0x808F123Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F123Cu)) return;
    // 808F123C: slw   r0, r4, r0
    {
        u32 sh = ctx->gpr[0] & 0x3Fu;
        ctx->gpr[0] = sh > 31 ? 0u : (ctx->gpr[4] << sh);
    }

label_808F1240:
    ctx->pc = 0x808F1240u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1240u)) return;
    // 808F1240: rlwinm. r0, r0, 1, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0x00000001u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_808F1244:
    ctx->pc = 0x808F1244u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1244u)) return;
    // 808F1244: bc    4, 2, 0x808F1250
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_808F1250;
        }
    }

label_808F1248:
    ctx->pc = 0x808F1248u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1248u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 808F1248: lwz     r0, 28(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F124C:
    ctx->pc = 0x808F124Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F124Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 808F124C: stw     r0, 24(r1)
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
label_808F1250:
    ctx->pc = 0x808F1250u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 14u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1250u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 14u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 808F1250: lwz     r7, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1254:
    ctx->pc = 0x808F1254u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1254u)) return;
    // 808F1254: addi    r6, r1, 56
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(56);

label_808F1258:
    ctx->pc = 0x808F1258u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1258u)) return;
    // 808F1258: addi    r5, r1, 24
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(24);

label_808F125C:
    ctx->pc = 0x808F125Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F125Cu)) return;
    // 808F125C: addi    r4, r1, 40
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(40);

label_808F1260:
    ctx->pc = 0x808F1260u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1260u)) return;
    // 808F1260: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_808F1264:
    ctx->pc = 0x808F1264u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1264u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 808F1264: stw     r7, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1268:
    ctx->pc = 0x808F1268u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1268u)) return;
    // 808F1268: addi    r3, r29, 104
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(104);

label_808F126C:
    ctx->pc = 0x808F126Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F126Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 808F126C: stw     r7, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1270:
    ctx->pc = 0x808F1270u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1270u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 808F1270: stw     r7, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1274:
    ctx->pc = 0x808F1274u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1274u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 808F1274: stw     r6, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1278:
    ctx->pc = 0x808F1278u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1278u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 808F1278: stw     r5, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F127C:
    ctx->pc = 0x808F127Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F127Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F127C: stw     r4, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1280:
    ctx->pc = 0x808F1280u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1280u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 808F1280: stw     r0, 20(r1)
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
label_808F1284:
    ctx->pc = 0x808F1284u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1284u)) return;
    // 808F1284: bl      0x8060F594
    {
            ctx->lr = 0x808F1288u;
            ctx->pc = 0x8060F594u;
            return;
    }

label_808F1288:
    ctx->pc = 0x808F1288u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 19u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1288u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 19u : 1u;
    // 808F1288: lis     r3, -27903
    ctx->gpr[3] = ((u32)(s32)(-27903) << 16);

label_808F128C:
    ctx->pc = 0x808F128Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F128Cu)) return;
    // 808F128C: lis     r5, -27903
    ctx->gpr[5] = ((u32)(s32)(-27903) << 16);

label_808F1290:
    ctx->pc = 0x808F1290u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1290u)) return;
    // 808F1290: addi    r4, r3, 31316
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(31316);

label_808F1294:
    ctx->pc = 0x808F1294u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1294u)) return;
    // 808F1294: lis     r3, -27903
    ctx->gpr[3] = ((u32)(s32)(-27903) << 16);

label_808F1298:
    ctx->pc = 0x808F1298u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1298u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 808F1298: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x808F1298u)) return;
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
label_808F129C:
    ctx->pc = 0x808F129Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F129Cu)) return;
    // 808F129C: addi    r6, r5, 31312
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(31312);

label_808F12A0:
    ctx->pc = 0x808F12A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F12A0u)) return;
    // 808F12A0: addi    r4, r3, 31328
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(31328);

label_808F12A4:
    ctx->pc = 0x808F12A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F12A4u)) return;
    // 808F12A4: lis     r3, -27903
    ctx->gpr[3] = ((u32)(s32)(-27903) << 16);

label_808F12A8:
    ctx->pc = 0x808F12A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F12A8u)) return;
    // 808F12A8: fmuls   f31, f0, f28
    if (!ppc_fp_available_inline(ctx, 0x808F12A8u)) return;
    ppc_fmuls(ctx, 31, 0, 28);

label_808F12AC:
    ctx->pc = 0x808F12ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F12ACu)) return;
    // 808F12AC: lis     r5, -27903
    ctx->gpr[5] = ((u32)(s32)(-27903) << 16);

label_808F12B0:
    ctx->pc = 0x808F12B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F12B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 808F12B0: lfs     f29, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x808F12B0u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
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
label_808F12B4:
    ctx->pc = 0x808F12B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F12B4u)) return;
    // 808F12B4: addi    r24, r3, 31324
    ctx->gpr[24] = ctx->gpr[3] + (u32)(s32)(31324);

label_808F12B8:
    ctx->pc = 0x808F12B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F12B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 808F12B8: lhz     r27, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[27] = mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F12BC:
    ctx->pc = 0x808F12BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F12BCu)) return;
    // 808F12BC: addi    r31, r5, 31320
    ctx->gpr[31] = ctx->gpr[5] + (u32)(s32)(31320);

label_808F12C0:
    ctx->pc = 0x808F12C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F12C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 808F12C0: lfd     f27, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x808F12C0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->fpr[27] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F12C4:
    ctx->pc = 0x808F12C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F12C4u)) return;
    // 808F12C4: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_808F12C8:
    ctx->pc = 0x808F12C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F12C8u)) return;
    // 808F12C8: lis     r23, 17200
    ctx->gpr[23] = ((u32)(s32)(17200) << 16);

label_808F12CC:
    ctx->pc = 0x808F12CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F12CCu)) return;
    // 808F12CC: lis     r25, -32768
    ctx->gpr[25] = ((u32)(s32)(-32768) << 16);

label_808F12D0:
    ctx->pc = 0x808F12D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F12D0u)) return;
    // 808F12D0: b       0x808F1438
    {
            goto label_808F1438;
    }

label_808F12D4:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F12D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 808F12D4: cmpwi   r27, 256
    {
        s32 val_a = (s32)(ctx->gpr[27]);
        s32 val_b = (s32)(256);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_808F12D8:
    ctx->pc = 0x808F12D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F12D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 808F12D8: lfs     f30, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x808F12D8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
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
label_808F12DC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F12DCu)) return;
    // 808F12DC: bc    12, 0, 0x808F1300
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_808F1300;
        }
    }

label_808F12E0:
    ctx->pc = 0x808F12E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F12E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 808F12E0: fctiwz    f0, f31
    if (!ppc_fp_available_inline(ctx, 0x808F12E0u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[31], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_808F12E4:
    ctx->pc = 0x808F12E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F12E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 808F12E4: stfd     f0, 88(r1)
    if (!ppc_fp_available_inline(ctx, 0x808F12E4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F12E8:
    ctx->pc = 0x808F12E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F12E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 808F12E8: stfd     f0, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x808F12E8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F12EC:
    ctx->pc = 0x808F12ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F12ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 808F12EC: lwz     r3, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F12F0:
    ctx->pc = 0x808F12F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F12F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 808F12F0: lwz     r0, 100(r1)
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
label_808F12F4:
    ctx->pc = 0x808F12F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F12F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F12F4: sth     r3, 46(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(46);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F12F8:
    ctx->pc = 0x808F12F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F12F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 808F12F8: sth     r0, 54(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(54);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F12FC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F12FCu)) return;
    // 808F12FC: b       0x808F1340
    {
            goto label_808F1340;
    }

label_808F1300:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1300u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 808F1300: xoris   r3, r27, 0x8000
    ctx->gpr[3] = ctx->gpr[27] ^ (0x8000u << 16);

label_808F1304:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1304u)) return;
    // 808F1304: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_808F1308:
    ctx->pc = 0x808F1308u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1308u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 808F1308: stw     r3, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F130C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F130Cu)) return;
    // 808F130C: lis     r4, -27903
    ctx->gpr[4] = ((u32)(s32)(-27903) << 16);

label_808F1310:
    ctx->pc = 0x808F1310u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1310u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 808F1310: lfd     f1, 31328(r4)
    if (!ppc_fp_available_inline(ctx, 0x808F1310u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(31328);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1314:
    ctx->pc = 0x808F1314u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1314u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 808F1314: stw     r0, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1318:
    ctx->pc = 0x808F1318u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1318u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 808F1318: lfd     f0, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x808F1318u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F131C:
    ctx->pc = 0x808F131Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F131Cu)) return;
    // 808F131C: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x808F131Cu)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_808F1320:
    ctx->pc = 0x808F1320u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1320u)) return;
    // 808F1320: fmuls   f0, f0, f28
    if (!ppc_fp_available_inline(ctx, 0x808F1320u)) return;
    ppc_fmuls(ctx, 0, 0, 28);

label_808F1324:
    ctx->pc = 0x808F1324u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1324u)) return;
    // 808F1324: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x808F1324u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_808F1328:
    ctx->pc = 0x808F1328u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1328u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 808F1328: stfd     f0, 88(r1)
    if (!ppc_fp_available_inline(ctx, 0x808F1328u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F132C:
    ctx->pc = 0x808F132Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F132Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 808F132C: stfd     f0, 104(r1)
    if (!ppc_fp_available_inline(ctx, 0x808F132Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1330:
    ctx->pc = 0x808F1330u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1330u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 808F1330: lwz     r3, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1334:
    ctx->pc = 0x808F1334u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1334u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F1334: lwz     r0, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1338:
    ctx->pc = 0x808F1338u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1338u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 808F1338: sth     r3, 46(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(46);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F133C:
    ctx->pc = 0x808F133Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F133Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 808F133C: sth     r0, 54(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(54);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1340:
    ctx->pc = 0x808F1340u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1340u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 808F1340: lhz     r22, 6(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(6);
        ctx->gpr[22] = mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1344:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1344u)) return;
    // 808F1344: b       0x808F140C
    {
            goto label_808F140C;
    }

label_808F1348:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1348u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F1348: cmpwi   r22, 256
    {
        s32 val_a = (s32)(ctx->gpr[22]);
        s32 val_b = (s32)(256);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_808F134C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F134Cu)) return;
    // 808F134C: bc    12, 0, 0x808F1360
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_808F1360;
        }
    }

label_808F1350:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1350u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 808F1350: li      r0, 256
    ctx->gpr[0] = (u32)(s32)(256);

label_808F1354:
    ctx->pc = 0x808F1354u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1354u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F1354: sth     r0, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1358:
    ctx->pc = 0x808F1358u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1358u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 808F1358: sth     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F135C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F135Cu)) return;
    // 808F135C: b       0x808F1368
    {
            goto label_808F1368;
    }

label_808F1360:
    ctx->pc = 0x808F1360u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1360u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 808F1360: sth     r22, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write16(ctx, ea, (u16)ctx->gpr[22]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1364:
    ctx->pc = 0x808F1364u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1364u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 808F1364: sth     r22, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write16(ctx, ea, (u16)ctx->gpr[22]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1368:
    ctx->pc = 0x808F1368u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 25u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1368u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 25u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 808F1368: lha     r4, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F136C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F136Cu)) return;
    // 808F136C: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_808F1370:
    ctx->pc = 0x808F1370u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1370u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 808F1370: lha     r0, 46(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(46);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1374:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1374u)) return;
    // 808F1374: xoris   r4, r4, 0x8000
    ctx->gpr[4] = ctx->gpr[4] ^ (0x8000u << 16);

label_808F1378:
    ctx->pc = 0x808F1378u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1378u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 808F1378: stw     r23, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[23]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F137C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F137Cu)) return;
    // 808F137C: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_808F1380:
    ctx->pc = 0x808F1380u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1380u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 808F1380: lfs     f2, 36(r29)
    if (!ppc_fp_available_inline(ctx, 0x808F1380u)) return;
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
label_808F1384:
    ctx->pc = 0x808F1384u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1384u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 808F1384: stw     r4, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1388:
    ctx->pc = 0x808F1388u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1388u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 808F1388: lfd     f0, 104(r1)
    if (!ppc_fp_available_inline(ctx, 0x808F1388u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F138C:
    ctx->pc = 0x808F138Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F138Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 808F138C: stw     r0, 100(r1)
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
label_808F1390:
    ctx->pc = 0x808F1390u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1390u)) return;
    // 808F1390: fsubs   f0, f0, f27
    if (!ppc_fp_available_inline(ctx, 0x808F1390u)) return;
    ppc_fsubs(ctx, 0, 0, 27);

label_808F1394:
    ctx->pc = 0x808F1394u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1394u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 808F1394: stw     r23, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[23]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1398:
    ctx->pc = 0x808F1398u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1398u)) return;
    // 808F1398: fmadds f1, f0, f2, f30
    if (!ppc_fp_available_inline(ctx, 0x808F1398u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[0], ctx->fpr[2], ctx->fpr[30], true, false, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_808F139C:
    ctx->pc = 0x808F139Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F139Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 808F139C: lfd     f0, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x808F139Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F13A0:
    ctx->pc = 0x808F13A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F13A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 808F13A0: stfs     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x808F13A0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[30]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F13A4:
    ctx->pc = 0x808F13A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F13A4u)) return;
    // 808F13A4: fsubs   f0, f0, f27
    if (!ppc_fp_available_inline(ctx, 0x808F13A4u)) return;
    ppc_fsubs(ctx, 0, 0, 27);

label_808F13A8:
    ctx->pc = 0x808F13A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F13A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 808F13A8: stfs     f30, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x808F13A8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[30]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F13AC:
    ctx->pc = 0x808F13ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F13ACu)) return;
    // 808F13AC: fmadds f0, f0, f2, f29
    if (!ppc_fp_available_inline(ctx, 0x808F13ACu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[0], ctx->fpr[2], ctx->fpr[29], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_808F13B0:
    ctx->pc = 0x808F13B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F13B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 808F13B0: stfs     f1, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x808F13B0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F13B4:
    ctx->pc = 0x808F13B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F13B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 808F13B4: stfs     f1, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x808F13B4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F13B8:
    ctx->pc = 0x808F13B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F13B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 808F13B8: stfs     f29, 76(r1)
    if (!ppc_fp_available_inline(ctx, 0x808F13B8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[29]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F13BC:
    ctx->pc = 0x808F13BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F13BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 808F13BC: stfs     f29, 60(r1)
    if (!ppc_fp_available_inline(ctx, 0x808F13BCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[29]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F13C0:
    ctx->pc = 0x808F13C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F13C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F13C0: stfs     f0, 84(r1)
    if (!ppc_fp_available_inline(ctx, 0x808F13C0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F13C4:
    ctx->pc = 0x808F13C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F13C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 808F13C4: stfs     f0, 68(r1)
    if (!ppc_fp_available_inline(ctx, 0x808F13C4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F13C8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F13C8u)) return;
    // 808F13C8: bl      0x8060F55C
    {
            ctx->lr = 0x808F13CCu;
            ctx->pc = 0x8060F55Cu;
            return;
    }

label_808F13CC:
    ctx->pc = 0x808F13CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F13CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 808F13CC: lfs     f1, 0(r24)
    if (!ppc_fp_available_inline(ctx, 0x808F13CCu)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F13D0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F13D0u)) return;
    // 808F13D0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_808F13D4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F13D4u)) return;
    // 808F13D4: addi    r5, r25, 96
    ctx->gpr[5] = ctx->gpr[25] + (u32)(s32)(96);

label_808F13D8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F13D8u)) return;
    // 808F13D8: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_808F13DC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F13DCu)) return;
    // 808F13DC: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_808F13E0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F13E0u)) return;
    // 808F13E0: bl      0x80607148
    {
            ctx->lr = 0x808F13E4u;
            ctx->pc = 0x80607148u;
            return;
    }

label_808F13E4:
    ctx->pc = 0x808F13E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F13E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 808F13E4: lha     r0, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F13E8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F13E8u)) return;
    // 808F13E8: addi    r22, r22, -256
    ctx->gpr[22] = ctx->gpr[22] + (u32)(s32)(-256);

label_808F13EC:
    ctx->pc = 0x808F13ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F13ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 808F13EC: stw     r23, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[23]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F13F0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F13F0u)) return;
    // 808F13F0: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_808F13F4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F13F4u)) return;
    // 808F13F4: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_808F13F8:
    ctx->pc = 0x808F13F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F13F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 808F13F8: lfs     f0, 36(r29)
    if (!ppc_fp_available_inline(ctx, 0x808F13F8u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(36);
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
label_808F13FC:
    ctx->pc = 0x808F13FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F13FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 808F13FC: stw     r0, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1400:
    ctx->pc = 0x808F1400u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1400u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F1400: lfd     f1, 88(r1)
    if (!ppc_fp_available_inline(ctx, 0x808F1400u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1404:
    ctx->pc = 0x808F1404u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1404u)) return;
    // 808F1404: fsubs   f1, f1, f27
    if (!ppc_fp_available_inline(ctx, 0x808F1404u)) return;
    ppc_fsubs(ctx, 1, 1, 27);

label_808F1408:
    ctx->pc = 0x808F1408u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1408u)) return;
    // 808F1408: fmadds f30, f1, f0, f30
    if (!ppc_fp_available_inline(ctx, 0x808F1408u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[1], ctx->fpr[0], ctx->fpr[30], true, false, false, &result))
            ctx->fpr[30] = ctx->ps1[30] = result;
    }

label_808F140C:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F140Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F140C: cmpwi   r22, 0
    {
        s32 val_a = (s32)(ctx->gpr[22]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_808F1410:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1410u)) return;
    // 808F1410: bc    12, 1, 0x808F1348
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x808F1348u;
                return;
            }
            goto label_808F1348;
        }
    }

label_808F1414:
    ctx->pc = 0x808F1414u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1414u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 808F1414: lha     r0, 46(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(46);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1418:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1418u)) return;
    // 808F1418: addi    r27, r27, -256
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(-256);

label_808F141C:
    ctx->pc = 0x808F141Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F141Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 808F141C: stw     r23, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[23]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1420:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1420u)) return;
    // 808F1420: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_808F1424:
    ctx->pc = 0x808F1424u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1424u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 808F1424: lfs     f0, 36(r29)
    if (!ppc_fp_available_inline(ctx, 0x808F1424u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(36);
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
label_808F1428:
    ctx->pc = 0x808F1428u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1428u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 808F1428: stw     r0, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F142C:
    ctx->pc = 0x808F142Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F142Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F142C: lfd     f1, 104(r1)
    if (!ppc_fp_available_inline(ctx, 0x808F142Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1430:
    ctx->pc = 0x808F1430u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1430u)) return;
    // 808F1430: fsubs   f1, f1, f27
    if (!ppc_fp_available_inline(ctx, 0x808F1430u)) return;
    ppc_fsubs(ctx, 1, 1, 27);

label_808F1434:
    ctx->pc = 0x808F1434u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1434u)) return;
    // 808F1434: fmadds f29, f1, f0, f29
    if (!ppc_fp_available_inline(ctx, 0x808F1434u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[1], ctx->fpr[0], ctx->fpr[29], true, false, false, &result))
            ctx->fpr[29] = ctx->ps1[29] = result;
    }

label_808F1438:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1438u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F1438: cmpwi   r27, 0
    {
        s32 val_a = (s32)(ctx->gpr[27]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_808F143C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F143Cu)) return;
    // 808F143C: bc    12, 1, 0x808F12D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x808F12D4u;
                return;
            }
            goto label_808F12D4;
        }
    }

label_808F1440:
    ctx->pc = 0x808F1440u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1440u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 808F1440: stb     r26, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[26]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1444:
    ctx->pc = 0x808F1444u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 26u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1444u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 26u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 808F1444: psq_l   f31, 232(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x808F1444u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(232);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x808F1444u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1448:
    ctx->pc = 0x808F1448u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1448u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 808F1448: lfd     f31, 224(r1)
    if (!ppc_fp_available_inline(ctx, 0x808F1448u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(224);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F144C:
    ctx->pc = 0x808F144Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F144Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 808F144C: psq_l   f30, 216(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x808F144Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x808F144Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1450:
    ctx->pc = 0x808F1450u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1450u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 808F1450: lfd     f30, 208(r1)
    if (!ppc_fp_available_inline(ctx, 0x808F1450u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1454:
    ctx->pc = 0x808F1454u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1454u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 808F1454: psq_l   f29, 200(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x808F1454u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x808F1454u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1458:
    ctx->pc = 0x808F1458u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1458u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 808F1458: lfd     f29, 192(r1)
    if (!ppc_fp_available_inline(ctx, 0x808F1458u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(192);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F145C:
    ctx->pc = 0x808F145Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F145Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 808F145C: psq_l   f28, 184(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x808F145Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x808F145Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1460:
    ctx->pc = 0x808F1460u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1460u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 808F1460: lfd     f28, 176(r1)
    if (!ppc_fp_available_inline(ctx, 0x808F1460u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        ctx->fpr[28] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1464:
    ctx->pc = 0x808F1464u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1464u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 808F1464: psq_l   f27, 168(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x808F1464u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        ppc_psq_load_inline(ctx, 27u, ea, false, 0u, false, 0x808F1464u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1468:
    ctx->pc = 0x808F1468u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1468u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 808F1468: lfd     f27, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x808F1468u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        ctx->fpr[27] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F146C:
    ctx->pc = 0x808F146Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 11u, 0x808F146Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 808F146C: lmw     r22, 120(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        for (u32 r = 22; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1470:
    ctx->pc = 0x808F1470u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1470u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 808F1470: lwz     r0, 244(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(244);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1474:
    ctx->pc = 0x808F1474u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x808F1474u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F1474: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1478:
    ctx->pc = 0x808F1478u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1478u)) return;
    // 808F1478: addi    r1, r1, 240
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(240);

label_808F147C:
    ctx->pc = 0x808F147Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F147Cu)) return;
    // 808F147C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_808F1060;
        }
    }

label_808F1480:
    ctx->pc = 0x808F1480u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1480u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 808F1480: stwu     r1, -80(r1)
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
label_808F1484:
    ctx->pc = 0x808F1484u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1484u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 808F1484: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1488:
    ctx->pc = 0x808F1488u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1488u)) return;
    // 808F1488: lis     r3, -27900
    ctx->gpr[3] = ((u32)(s32)(-27900) << 16);

label_808F148C:
    ctx->pc = 0x808F148Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F148Cu)) return;
    // 808F148C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_808F1490:
    ctx->pc = 0x808F1490u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1490u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 808F1490: stw     r0, 84(r1)
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
label_808F1494:
    ctx->pc = 0x808F1494u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1494u)) return;
    // 808F1494: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_808F1498:
    ctx->pc = 0x808F1498u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1498u)) return;
    // 808F1498: li      r6, 432
    ctx->gpr[6] = (u32)(s32)(432);

label_808F149C:
    ctx->pc = 0x808F149Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F149Cu)) return;
    // 808F149C: li      r7, 144
    ctx->gpr[7] = (u32)(s32)(144);

label_808F14A0:
    ctx->pc = 0x808F14A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F14A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 808F14A0: stw     r31, 76(r1)
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
label_808F14A4:
    ctx->pc = 0x808F14A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F14A4u)) return;
    // 808F14A4: addi    r31, r3, -2784
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(-2784);

label_808F14A8:
    ctx->pc = 0x808F14A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F14A8u)) return;
    // 808F14A8: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_808F14AC:
    ctx->pc = 0x808F14ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F14ACu)) return;
    // 808F14AC: li      r8, -256
    ctx->gpr[8] = (u32)(s32)(-256);

label_808F14B0:
    ctx->pc = 0x808F14B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F14B0u)) return;
    // 808F14B0: bl      0x804861C0
    {
            ctx->lr = 0x808F14B4u;
            ctx->pc = 0x804861C0u;
            return;
    }

label_808F14B4:
    ctx->pc = 0x808F14B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 14u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F14B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 14u : 1u;
    // 808F14B4: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_808F14B8:
    ctx->pc = 0x808F14B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F14B8u)) return;
    // 808F14B8: lis     r3, -27900
    ctx->gpr[3] = ((u32)(s32)(-27900) << 16);

label_808F14BC:
    ctx->pc = 0x808F14BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F14BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 808F14BC: lwz     r0, -5392(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-5392);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F14C0:
    ctx->pc = 0x808F14C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F14C0u)) return;
    // 808F14C0: addi    r6, r31, 100
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(100);

label_808F14C4:
    ctx->pc = 0x808F14C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F14C4u)) return;
    // 808F14C4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_808F14C8:
    ctx->pc = 0x808F14C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F14C8u)) return;
    // 808F14C8: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_808F14CC:
    ctx->pc = 0x808F14CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F14CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 808F14CC: sth     r4, 22(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(22);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F14D0:
    ctx->pc = 0x808F14D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F14D0u)) return;
    // 808F14D0: rlwinm r4, r0, 3, 0, 28
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 3u) & 0xFFFFFFF8u;
    }

label_808F14D4:
    ctx->pc = 0x808F14D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F14D4u)) return;
    // 808F14D4: addi    r0, r3, -6924
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-6924);

label_808F14D8:
    ctx->pc = 0x808F14D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F14D8u)) return;
    // 808F14D8: addi    r3, r31, 308
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(308);

label_808F14DC:
    ctx->pc = 0x808F14DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F14DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 808F14DC: sth     r5, 24(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(24);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F14E0:
    ctx->pc = 0x808F14E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F14E0u)) return;
    // 808F14E0: add   r4, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_808F14E4:
    ctx->pc = 0x808F14E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F14E4u)) return;
    // 808F14E4: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_808F14E8:
    ctx->pc = 0x808F14E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F14E8u)) return;
    // 808F14E8: bl      0x800031E8
    {
            ctx->lr = 0x808F14ECu;
            ctx->pc = 0x800031E8u;
            return;
    }

label_808F14EC:
    ctx->pc = 0x808F14ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 84u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F14ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 84u : 1u;
    // 808F14EC: addi    r4, r31, 100
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(100);

label_808F14F0:
    ctx->pc = 0x808F14F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F14F0u)) return;
    // 808F14F0: lis     r6, 17200
    ctx->gpr[6] = ((u32)(s32)(17200) << 16);

label_808F14F4:
    ctx->pc = 0x808F14F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F14F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 81u : 0u;
    // 808F14F4: lha     r10, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[10] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F14F8:
    ctx->pc = 0x808F14F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F14F8u)) return;
    // 808F14F8: lis     r3, -27903
    ctx->gpr[3] = ((u32)(s32)(-27903) << 16);

label_808F14FC:
    ctx->pc = 0x808F14FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F14FCu)) return;
    // 808F14FC: addi    r8, r3, 31328
    ctx->gpr[8] = ctx->gpr[3] + (u32)(s32)(31328);

label_808F1500:
    ctx->pc = 0x808F1500u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1500u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 78u : 0u;
    // 808F1500: lha     r9, 2(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2);
        ctx->gpr[9] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1504:
    ctx->pc = 0x808F1504u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1504u)) return;
    // 808F1504: xoris   r5, r10, 0x8000
    ctx->gpr[5] = ctx->gpr[10] ^ (0x8000u << 16);

label_808F1508:
    ctx->pc = 0x808F1508u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1508u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 76u : 0u;
    // 808F1508: lhz     r3, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F150C:
    ctx->pc = 0x808F150Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F150Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 75u : 0u;
    // 808F150C: stw     r5, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1510:
    ctx->pc = 0x808F1510u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1510u)) return;
    // 808F1510: xoris   r7, r9, 0x8000
    ctx->gpr[7] = ctx->gpr[9] ^ (0x8000u << 16);

label_808F1514:
    ctx->pc = 0x808F1514u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1514u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 73u : 0u;
    // 808F1514: lhz     r0, 10(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(10);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1518:
    ctx->pc = 0x808F1518u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1518u)) return;
    // 808F1518: add   r3, r10, r3
    {
        u32 a = ctx->gpr[10];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_808F151C:
    ctx->pc = 0x808F151Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F151Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 71u : 0u;
    // 808F151C: stw     r6, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1520:
    ctx->pc = 0x808F1520u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1520u)) return;
    // 808F1520: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_808F1524:
    ctx->pc = 0x808F1524u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1524u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 69u : 0u;
    // 808F1524: lfd     f9, 0(r8)
    if (!ppc_fp_available_inline(ctx, 0x808F1524u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->fpr[9] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1528:
    ctx->pc = 0x808F1528u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1528u)) return;
    // 808F1528: add   r0, r9, r0
    {
        u32 a = ctx->gpr[9];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_808F152C:
    ctx->pc = 0x808F152Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F152Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 67u : 0u;
    // 808F152C: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x808F152Cu)) return;
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
label_808F1530:
    ctx->pc = 0x808F1530u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1530u)) return;
    // 808F1530: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_808F1534:
    ctx->pc = 0x808F1534u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1534u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 65u : 0u;
    // 808F1534: stw     r7, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1538:
    ctx->pc = 0x808F1538u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1538u)) return;
    // 808F1538: lis     r9, -27903
    ctx->gpr[9] = ((u32)(s32)(-27903) << 16);

label_808F153C:
    ctx->pc = 0x808F153Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F153Cu)) return;
    // 808F153C: fsubs   f7, f0, f9
    if (!ppc_fp_available_inline(ctx, 0x808F153Cu)) return;
    ppc_fsubs(ctx, 7, 0, 9);

label_808F1540:
    ctx->pc = 0x808F1540u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1540u)) return;
    // 808F1540: addi    r10, r9, 31308
    ctx->gpr[10] = ctx->gpr[9] + (u32)(s32)(31308);

label_808F1544:
    ctx->pc = 0x808F1544u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1544u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 61u : 0u;
    // 808F1544: stw     r6, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1548:
    ctx->pc = 0x808F1548u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1548u)) return;
    // 808F1548: lis     r4, -27903
    ctx->gpr[4] = ((u32)(s32)(-27903) << 16);

label_808F154C:
    ctx->pc = 0x808F154Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F154Cu)) return;
    // 808F154C: addi    r9, r31, 4
    ctx->gpr[9] = ctx->gpr[31] + (u32)(s32)(4);

label_808F1550:
    ctx->pc = 0x808F1550u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1550u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 58u : 0u;
    // 808F1550: lfs     f10, 0(r10)
    if (!ppc_fp_available_inline(ctx, 0x808F1550u)) return;
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[10] = value;
        ctx->ps1[10] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1554:
    ctx->pc = 0x808F1554u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1554u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 57u : 0u;
    // 808F1554: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x808F1554u)) return;
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
label_808F1558:
    ctx->pc = 0x808F1558u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1558u)) return;
    // 808F1558: li      r8, -1
    ctx->gpr[8] = (u32)(s32)(-1);

label_808F155C:
    ctx->pc = 0x808F155Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F155Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 55u : 0u;
    // 808F155C: stw     r3, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1560:
    ctx->pc = 0x808F1560u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1560u)) return;
    // 808F1560: fsubs   f5, f0, f9
    if (!ppc_fp_available_inline(ctx, 0x808F1560u)) return;
    ppc_fsubs(ctx, 5, 0, 9);

label_808F1564:
    ctx->pc = 0x808F1564u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1564u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 53u : 0u;
    // 808F1564: lfs     f6, 31336(r4)
    if (!ppc_fp_available_inline(ctx, 0x808F1564u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(31336);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[6] = value;
        ctx->ps1[6] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1568:
    ctx->pc = 0x808F1568u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1568u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 52u : 0u;
    // 808F1568: stw     r6, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F156C:
    ctx->pc = 0x808F156Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F156Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 808F156C: lfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x808F156Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1570:
    ctx->pc = 0x808F1570u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1570u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 50u : 0u;
    // 808F1570: stw     r0, 44(r1)
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
label_808F1574:
    ctx->pc = 0x808F1574u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1574u)) return;
    // 808F1574: fsubs   f4, f0, f9
    if (!ppc_fp_available_inline(ctx, 0x808F1574u)) return;
    ppc_fsubs(ctx, 4, 0, 9);

label_808F1578:
    ctx->pc = 0x808F1578u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1578u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 48u : 0u;
    // 808F1578: stw     r6, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F157C:
    ctx->pc = 0x808F157Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F157Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 47u : 0u;
    // 808F157C: lfd     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x808F157Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1580:
    ctx->pc = 0x808F1580u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1580u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 46u : 0u;
    // 808F1580: stw     r5, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1584:
    ctx->pc = 0x808F1584u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1584u)) return;
    // 808F1584: fsubs   f3, f0, f9
    if (!ppc_fp_available_inline(ctx, 0x808F1584u)) return;
    ppc_fsubs(ctx, 3, 0, 9);

label_808F1588:
    ctx->pc = 0x808F1588u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1588u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 44u : 0u;
    // 808F1588: stw     r6, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F158C:
    ctx->pc = 0x808F158Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F158Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 43u : 0u;
    // 808F158C: lfd     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x808F158Cu)) return;
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
label_808F1590:
    ctx->pc = 0x808F1590u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1590u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 42u : 0u;
    // 808F1590: stw     r7, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1594:
    ctx->pc = 0x808F1594u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1594u)) return;
    // 808F1594: fsubs   f2, f0, f9
    if (!ppc_fp_available_inline(ctx, 0x808F1594u)) return;
    ppc_fsubs(ctx, 2, 0, 9);

label_808F1598:
    ctx->pc = 0x808F1598u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1598u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 40u : 0u;
    // 808F1598: stw     r6, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F159C:
    ctx->pc = 0x808F159Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F159Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 39u : 0u;
    // 808F159C: lfd     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x808F159Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F15A0:
    ctx->pc = 0x808F15A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F15A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 38u : 0u;
    // 808F15A0: stw     r0, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F15A4:
    ctx->pc = 0x808F15A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F15A4u)) return;
    // 808F15A4: fsubs   f8, f1, f9
    if (!ppc_fp_available_inline(ctx, 0x808F15A4u)) return;
    ppc_fsubs(ctx, 8, 1, 9);

label_808F15A8:
    ctx->pc = 0x808F15A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F15A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 36u : 0u;
    // 808F15A8: stw     r6, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F15AC:
    ctx->pc = 0x808F15ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F15ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 35u : 0u;
    // 808F15AC: lfd     f0, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x808F15ACu)) return;
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
label_808F15B0:
    ctx->pc = 0x808F15B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F15B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 34u : 0u;
    // 808F15B0: stw     r3, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F15B4:
    ctx->pc = 0x808F15B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F15B4u)) return;
    // 808F15B4: fsubs   f1, f0, f9
    if (!ppc_fp_available_inline(ctx, 0x808F15B4u)) return;
    ppc_fsubs(ctx, 1, 0, 9);

label_808F15B8:
    ctx->pc = 0x808F15B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F15B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 32u : 0u;
    // 808F15B8: stw     r6, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F15BC:
    ctx->pc = 0x808F15BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F15BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 31u : 0u;
    // 808F15BC: lfd     f0, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x808F15BCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F15C0:
    ctx->pc = 0x808F15C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F15C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 30u : 0u;
    // 808F15C0: stfs     f10, 80(r9)
    if (!ppc_fp_available_inline(ctx, 0x808F15C0u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(80);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[10]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F15C4:
    ctx->pc = 0x808F15C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F15C4u)) return;
    // 808F15C4: fsubs   f0, f0, f9
    if (!ppc_fp_available_inline(ctx, 0x808F15C4u)) return;
    ppc_fsubs(ctx, 0, 0, 9);

label_808F15C8:
    ctx->pc = 0x808F15C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F15C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 808F15C8: stfs     f10, 56(r9)
    if (!ppc_fp_available_inline(ctx, 0x808F15C8u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[10]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F15CC:
    ctx->pc = 0x808F15CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F15CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 808F15CC: stfs     f10, 32(r9)
    if (!ppc_fp_available_inline(ctx, 0x808F15CCu)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[10]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F15D0:
    ctx->pc = 0x808F15D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F15D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 808F15D0: stfs     f10, 8(r9)
    if (!ppc_fp_available_inline(ctx, 0x808F15D0u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[10]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F15D4:
    ctx->pc = 0x808F15D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F15D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 808F15D4: stw     r8, 92(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F15D8:
    ctx->pc = 0x808F15D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F15D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 808F15D8: stw     r8, 68(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F15DC:
    ctx->pc = 0x808F15DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F15DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 808F15DC: stw     r8, 44(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F15E0:
    ctx->pc = 0x808F15E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F15E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 808F15E0: stw     r8, 20(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F15E4:
    ctx->pc = 0x808F15E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F15E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 808F15E4: stfs     f8, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x808F15E4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[8]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F15E8:
    ctx->pc = 0x808F15E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F15E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 808F15E8: stfs     f7, 4(r9)
    if (!ppc_fp_available_inline(ctx, 0x808F15E8u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[7]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F15EC:
    ctx->pc = 0x808F15ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F15ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 808F15EC: stfs     f6, 12(r9)
    if (!ppc_fp_available_inline(ctx, 0x808F15ECu)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[6]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F15F0:
    ctx->pc = 0x808F15F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F15F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 808F15F0: stfs     f6, 16(r9)
    if (!ppc_fp_available_inline(ctx, 0x808F15F0u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[6]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F15F4:
    ctx->pc = 0x808F15F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F15F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 808F15F4: stfs     f5, 24(r9)
    if (!ppc_fp_available_inline(ctx, 0x808F15F4u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F15F8:
    ctx->pc = 0x808F15F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F15F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 808F15F8: stfs     f4, 28(r9)
    if (!ppc_fp_available_inline(ctx, 0x808F15F8u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F15FC:
    ctx->pc = 0x808F15FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F15FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 808F15FC: stfs     f6, 36(r9)
    if (!ppc_fp_available_inline(ctx, 0x808F15FCu)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[6]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1600:
    ctx->pc = 0x808F1600u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1600u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 808F1600: stfs     f10, 40(r9)
    if (!ppc_fp_available_inline(ctx, 0x808F1600u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[10]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1604:
    ctx->pc = 0x808F1604u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1604u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 808F1604: stfs     f3, 48(r9)
    if (!ppc_fp_available_inline(ctx, 0x808F1604u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1608:
    ctx->pc = 0x808F1608u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1608u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 808F1608: stfs     f2, 52(r9)
    if (!ppc_fp_available_inline(ctx, 0x808F1608u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F160C:
    ctx->pc = 0x808F160Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F160Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 808F160C: stfs     f10, 60(r9)
    if (!ppc_fp_available_inline(ctx, 0x808F160Cu)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(60);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[10]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1610:
    ctx->pc = 0x808F1610u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1610u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 808F1610: stfs     f6, 64(r9)
    if (!ppc_fp_available_inline(ctx, 0x808F1610u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(64);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[6]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1614:
    ctx->pc = 0x808F1614u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1614u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 808F1614: stfs     f1, 72(r9)
    if (!ppc_fp_available_inline(ctx, 0x808F1614u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(72);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1618:
    ctx->pc = 0x808F1618u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1618u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 808F1618: stfs     f0, 76(r9)
    if (!ppc_fp_available_inline(ctx, 0x808F1618u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(76);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F161C:
    ctx->pc = 0x808F161Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F161Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 808F161C: stfs     f10, 84(r9)
    if (!ppc_fp_available_inline(ctx, 0x808F161Cu)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(84);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[10]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1620:
    ctx->pc = 0x808F1620u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1620u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 808F1620: stfs     f10, 88(r9)
    if (!ppc_fp_available_inline(ctx, 0x808F1620u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(88);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[10]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1624:
    ctx->pc = 0x808F1624u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1624u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 808F1624: lwz     r0, 84(r1)
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
label_808F1628:
    ctx->pc = 0x808F1628u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1628u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 808F1628: lwz     r31, 76(r1)
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
label_808F162C:
    ctx->pc = 0x808F162Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x808F162Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F162C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1630:
    ctx->pc = 0x808F1630u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1630u)) return;
    // 808F1630: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_808F1634:
    ctx->pc = 0x808F1634u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1634u)) return;
    // 808F1634: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_808F1060;
        }
    }

label_808F1638:
    ctx->pc = 0x808F1638u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1638u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 808F1638: lwz     r5, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F163C:
    ctx->pc = 0x808F163Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F163Cu)) return;
    // 808F163C: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_808F1640:
    ctx->pc = 0x808F1640u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1640u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 808F1640: lwz     r3, 32(r3)
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
label_808F1644:
    ctx->pc = 0x808F1644u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1644u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F1644: stb     r0, 0(r3)
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
label_808F1648:
    ctx->pc = 0x808F1648u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1648u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 808F1648: stw     r4, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F164C:
    ctx->pc = 0x808F164Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F164Cu)) return;
    // 808F164C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_808F1060;
        }
    }

label_808F1650:
    ctx->pc = 0x808F1650u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1650u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F1650: lwz     r3, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1654:
    ctx->pc = 0x808F1654u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1654u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 808F1654: lwz     r3, 4(r3)
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
label_808F1658:
    ctx->pc = 0x808F1658u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1658u)) return;
    // 808F1658: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_808F1060;
        }
    }

label_808F165C:
    ctx->pc = 0x808F165Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F165Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F165C: lwz     r3, 32(r3)
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
label_808F1660:
    ctx->pc = 0x808F1660u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1660u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 808F1660: stb     r4, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1664:
    ctx->pc = 0x808F1664u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1664u)) return;
    // 808F1664: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_808F1060;
        }
    }

label_808F1668:
    ctx->pc = 0x808F1668u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1668u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 808F1668: lwz     r3, 32(r3)
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
label_808F166C:
    ctx->pc = 0x808F166Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F166Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F166C: lbz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1670:
    ctx->pc = 0x808F1670u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1670u)) return;
    // 808F1670: extsb r3, r3
    {
        ctx->gpr[3] = (u32)(s32)(s8)ctx->gpr[3];
    }

label_808F1674:
    ctx->pc = 0x808F1674u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1674u)) return;
    // 808F1674: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_808F1060;
        }
    }

label_808F1678:
    ctx->pc = 0x808F1678u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1678u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F1678: lwz     r3, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F167C:
    ctx->pc = 0x808F167Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F167Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 808F167C: stw     r4, 12(r3)
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
label_808F1680:
    ctx->pc = 0x808F1680u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1680u)) return;
    // 808F1680: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_808F1060;
        }
    }

label_808F1684:
    ctx->pc = 0x808F1684u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1684u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F1684: lwz     r3, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1688:
    ctx->pc = 0x808F1688u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1688u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 808F1688: stw     r4, 8(r3)
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
label_808F168C:
    ctx->pc = 0x808F168Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F168Cu)) return;
    // 808F168C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_808F1060;
        }
    }

label_808F1690:
    ctx->pc = 0x808F1690u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1690u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F1690: lwz     r3, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1694:
    ctx->pc = 0x808F1694u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1694u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 808F1694: lwz     r3, 8(r3)
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
label_808F1698:
    ctx->pc = 0x808F1698u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1698u)) return;
    // 808F1698: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_808F1060;
        }
    }

label_808F169C:
    ctx->pc = 0x808F169Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F169Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 808F169C: lwz     r3, 32(r3)
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
label_808F16A0:
    ctx->pc = 0x808F16A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F16A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F16A0: lwz     r3, 16(r3)
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
label_808F16A4:
    ctx->pc = 0x808F16A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F16A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 808F16A4: lhz     r3, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F16A8:
    ctx->pc = 0x808F16A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F16A8u)) return;
    // 808F16A8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_808F1060;
        }
    }

label_808F16AC:
    ctx->pc = 0x808F16ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 23u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F16ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 23u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 808F16AC: stwu     r1, -32(r1)
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
label_808F16B0:
    ctx->pc = 0x808F16B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F16B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 808F16B0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F16B4:
    ctx->pc = 0x808F16B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F16B4u)) return;
    // 808F16B4: cmpwi   r4, 0
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_808F16B8:
    ctx->pc = 0x808F16B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F16B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 808F16B8: stw     r0, 36(r1)
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
label_808F16BC:
    ctx->pc = 0x808F16BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F16BCu)) return;
    // 808F16BC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_808F16C0:
    ctx->pc = 0x808F16C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 11u, 0x808F16C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 808F16C0: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F16C4:
    ctx->pc = 0x808F16C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F16C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 808F16C4: lwz     r28, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F16C8:
    ctx->pc = 0x808F16C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F16C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 808F16C8: lwz     r3, 32(r3)
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
label_808F16CC:
    ctx->pc = 0x808F16CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F16CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 808F16CC: stb     r0, 2(r3)
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
label_808F16D0:
    ctx->pc = 0x808F16D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F16D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 808F16D0: stw     r0, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F16D4:
    ctx->pc = 0x808F16D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F16D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F16D4: lwz     r27, 16(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(16);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F16D8:
    ctx->pc = 0x808F16D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F16D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 808F16D8: lwz     r29, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F16DC:
    ctx->pc = 0x808F16DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F16DCu)) return;
    // 808F16DC: bc    12, 2, 0x808F17AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_808F17AC;
        }
    }

label_808F16E0:
    ctx->pc = 0x808F16E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F16E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 808F16E0: bc    4, 0, 0x808F16F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_808F16F0;
        }
    }

label_808F16E4:
    ctx->pc = 0x808F16E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F16E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F16E4: cmpwi   r4, -1
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(-1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_808F16E8:
    ctx->pc = 0x808F16E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F16E8u)) return;
    // 808F16E8: bc    4, 0, 0x808F1758
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_808F1758;
        }
    }

label_808F16EC:
    ctx->pc = 0x808F16ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F16ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 808F16EC: b       0x808F17AC
    {
            goto label_808F17AC;
    }

label_808F16F0:
    ctx->pc = 0x808F16F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F16F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F16F0: cmpwi   r4, 2
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_808F16F4:
    ctx->pc = 0x808F16F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F16F4u)) return;
    // 808F16F4: bc    4, 0, 0x808F17AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_808F17AC;
        }
    }

label_808F16F8:
    ctx->pc = 0x808F16F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F16F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 808F16F8: addi    r30, r29, 1
    ctx->gpr[30] = ctx->gpr[29] + (u32)(s32)(1);

label_808F16FC:
    ctx->pc = 0x808F16FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x808F16FCu)) return;
    // 808F16FC: mulli   r31, r30, 20
    ctx->gpr[31] = (u32)((s64)(s32)ctx->gpr[30] * (s64)(s32)20);

label_808F1700:
    ctx->pc = 0x808F1700u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1700u)) return;
    // 808F1700: b       0x808F172C
    {
            goto label_808F172C;
    }

label_808F1704:
    ctx->pc = 0x808F1704u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1704u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 808F1704: lwz     r3, 4(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1708:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1708u)) return;
    // 808F1708: addi    r0, r31, 4
    ctx->gpr[0] = ctx->gpr[31] + (u32)(s32)(4);

label_808F170C:
    ctx->pc = 0x808F170Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F170Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F170C: lhzx    r3, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1710:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1710u)) return;
    // 808F1710: cmplwi  r3, 0xFFFF
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0xFFFFu);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_808F1714:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1714u)) return;
    // 808F1714: bc    12, 2, 0x808F1738
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_808F1738;
        }
    }

label_808F1718:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1718u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 808F1718: bl      0x80503850
    {
            ctx->lr = 0x808F171Cu;
            ctx->pc = 0x80503850u;
            return;
    }

label_808F171C:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F171Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F171C: cmpwi   r3, 0
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

label_808F1720:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1720u)) return;
    // 808F1720: bc    4, 2, 0x808F1738
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_808F1738;
        }
    }

label_808F1724:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1724u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F1724: addi    r31, r31, 20
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(20);

label_808F1728:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1728u)) return;
    // 808F1728: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_808F172C:
    ctx->pc = 0x808F172Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F172Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F172C: lhz     r0, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1730:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1730u)) return;
    // 808F1730: cmpw    r30, r0
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_808F1734:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1734u)) return;
    // 808F1734: bc    12, 0, 0x808F1704
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x808F1704u;
                return;
            }
            goto label_808F1704;
        }
    }

label_808F1738:
    ctx->pc = 0x808F1738u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1738u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F1738: lhz     r0, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F173C:
    ctx->pc = 0x808F173Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F173Cu)) return;
    // 808F173C: cmpw    r30, r0
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_808F1740:
    ctx->pc = 0x808F1740u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1740u)) return;
    // 808F1740: bc    4, 0, 0x808F174C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_808F174C;
        }
    }

label_808F1744:
    ctx->pc = 0x808F1744u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1744u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F1744: or   r29, r30, r30
    {
        ctx->gpr[29] = ctx->gpr[30] | ctx->gpr[30];
    }

label_808F1748:
    ctx->pc = 0x808F1748u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1748u)) return;
    // 808F1748: b       0x808F17AC
    {
            goto label_808F17AC;
    }

label_808F174C:
    ctx->pc = 0x808F174Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F174Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 808F174C: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_808F1750:
    ctx->pc = 0x808F1750u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1750u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 808F1750: stw     r0, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1754:
    ctx->pc = 0x808F1754u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1754u)) return;
    // 808F1754: b       0x808F17AC
    {
            goto label_808F17AC;
    }

label_808F1758:
    ctx->pc = 0x808F1758u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1758u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 808F1758: addi    r30, r29, -1
    ctx->gpr[30] = ctx->gpr[29] + (u32)(s32)(-1);

label_808F175C:
    ctx->pc = 0x808F175Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x808F175Cu)) return;
    // 808F175C: mulli   r31, r30, 20
    ctx->gpr[31] = (u32)((s64)(s32)ctx->gpr[30] * (s64)(s32)20);

label_808F1760:
    ctx->pc = 0x808F1760u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1760u)) return;
    // 808F1760: b       0x808F178C
    {
            goto label_808F178C;
    }

label_808F1764:
    ctx->pc = 0x808F1764u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1764u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 808F1764: lwz     r3, 4(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1768:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1768u)) return;
    // 808F1768: addi    r0, r31, 4
    ctx->gpr[0] = ctx->gpr[31] + (u32)(s32)(4);

label_808F176C:
    ctx->pc = 0x808F176Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F176Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F176C: lhzx    r3, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1770:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1770u)) return;
    // 808F1770: cmplwi  r3, 0xFFFF
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0xFFFFu);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_808F1774:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1774u)) return;
    // 808F1774: bc    12, 2, 0x808F1794
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_808F1794;
        }
    }

label_808F1778:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1778u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 808F1778: bl      0x80503850
    {
            ctx->lr = 0x808F177Cu;
            ctx->pc = 0x80503850u;
            return;
    }

label_808F177C:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F177Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F177C: cmpwi   r3, 0
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

label_808F1780:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1780u)) return;
    // 808F1780: bc    4, 2, 0x808F1794
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_808F1794;
        }
    }

label_808F1784:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1784u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F1784: addi    r31, r31, -20
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(-20);

label_808F1788:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1788u)) return;
    // 808F1788: addi    r30, r30, -1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(-1);

label_808F178C:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F178Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F178C: cmpwi   r30, 0
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_808F1790:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1790u)) return;
    // 808F1790: bc    4, 0, 0x808F1764
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x808F1764u;
                return;
            }
            goto label_808F1764;
        }
    }

label_808F1794:
    ctx->pc = 0x808F1794u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1794u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F1794: cmpwi   r30, 0
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_808F1798:
    ctx->pc = 0x808F1798u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1798u)) return;
    // 808F1798: bc    12, 0, 0x808F17A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_808F17A4;
        }
    }

label_808F179C:
    ctx->pc = 0x808F179Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F179Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F179C: or   r29, r30, r30
    {
        ctx->gpr[29] = ctx->gpr[30] | ctx->gpr[30];
    }

label_808F17A0:
    ctx->pc = 0x808F17A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F17A0u)) return;
    // 808F17A0: b       0x808F17AC
    {
            goto label_808F17AC;
    }

label_808F17A4:
    ctx->pc = 0x808F17A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F17A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F17A4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_808F17A8:
    ctx->pc = 0x808F17A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F17A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 808F17A8: stw     r0, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F17AC:
    ctx->pc = 0x808F17ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 17u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F17ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 17u : 1u;
    // 808F17AC: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_808F17B0:
    ctx->pc = 0x808F17B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 11u, 0x808F17B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 808F17B0: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F17B4:
    ctx->pc = 0x808F17B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F17B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 808F17B4: lwz     r0, 36(r1)
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
label_808F17B8:
    ctx->pc = 0x808F17B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x808F17B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F17B8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F17BC:
    ctx->pc = 0x808F17BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F17BCu)) return;
    // 808F17BC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_808F17C0:
    ctx->pc = 0x808F17C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F17C0u)) return;
    // 808F17C0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_808F1060;
        }
    }

label_808F17C4:
    ctx->pc = 0x808F17C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 22u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F17C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 22u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 808F17C4: stwu     r1, -48(r1)
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
label_808F17C8:
    ctx->pc = 0x808F17C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F17C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 808F17C8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F17CC:
    ctx->pc = 0x808F17CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F17CCu)) return;
    // 808F17CC: lis     r7, -27903
    ctx->gpr[7] = ((u32)(s32)(-27903) << 16);

label_808F17D0:
    ctx->pc = 0x808F17D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F17D0u)) return;
    // 808F17D0: lis     r6, -32625
    ctx->gpr[6] = ((u32)(s32)(-32625) << 16);

label_808F17D4:
    ctx->pc = 0x808F17D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F17D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 808F17D4: stw     r0, 52(r1)
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
label_808F17D8:
    ctx->pc = 0x808F17D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F17D8u)) return;
    // 808F17D8: addi    r9, r7, 31272
    ctx->gpr[9] = ctx->gpr[7] + (u32)(s32)(31272);

label_808F17DC:
    ctx->pc = 0x808F17DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F17DCu)) return;
    // 808F17DC: addi    r0, r6, 6460
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(6460);

label_808F17E0:
    ctx->pc = 0x808F17E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F17E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 808F17E0: stw     r31, 44(r1)
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
label_808F17E4:
    ctx->pc = 0x808F17E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F17E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 808F17E4: stw     r30, 40(r1)
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
label_808F17E8:
    ctx->pc = 0x808F17E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F17E8u)) return;
    // 808F17E8: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_808F17EC:
    ctx->pc = 0x808F17ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F17ECu)) return;
    // 808F17EC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_808F17F0:
    ctx->pc = 0x808F17F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F17F0u)) return;
    // 808F17F0: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_808F17F4:
    ctx->pc = 0x808F17F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F17F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 808F17F4: stw     r29, 36(r1)
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
label_808F17F8:
    ctx->pc = 0x808F17F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F17F8u)) return;
    // 808F17F8: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_808F17FC:
    ctx->pc = 0x808F17FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F17FCu)) return;
    // 808F17FC: or   r5, r0, r0
    {
        ctx->gpr[5] = ctx->gpr[0] | ctx->gpr[0];
    }

label_808F1800:
    ctx->pc = 0x808F1800u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1800u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 808F1800: lwz     r8, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1804:
    ctx->pc = 0x808F1804u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1804u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 808F1804: lwz     r7, 4(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(4);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1808:
    ctx->pc = 0x808F1808u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1808u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 808F1808: lwz     r6, 8(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F180C:
    ctx->pc = 0x808F180Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F180Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 808F180C: stw     r8, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1810:
    ctx->pc = 0x808F1810u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1810u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F1810: stw     r7, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1814:
    ctx->pc = 0x808F1814u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1814u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 808F1814: stw     r6, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1818:
    ctx->pc = 0x808F1818u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1818u)) return;
    // 808F1818: bl      0x8050FD60
    {
            ctx->lr = 0x808F181Cu;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_808F181C:
    ctx->pc = 0x808F181Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F181Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F181C: or.   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[31];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_808F1820:
    ctx->pc = 0x808F1820u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1820u)) return;
    // 808F1820: bc    12, 2, 0x808F191C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_808F191C;
        }
    }

label_808F1824:
    ctx->pc = 0x808F1824u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1824u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 808F1824: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_808F1828:
    ctx->pc = 0x808F1828u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1828u)) return;
    // 808F1828: li      r4, 28
    ctx->gpr[4] = (u32)(s32)(28);

label_808F182C:
    ctx->pc = 0x808F182Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F182Cu)) return;
    // 808F182C: bl      0x8050EEC0
    {
            ctx->lr = 0x808F1830u;
            ctx->pc = 0x8050EEC0u;
            return;
    }

label_808F1830:
    ctx->pc = 0x808F1830u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1830u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 808F1830: stw     r3, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1834:
    ctx->pc = 0x808F1834u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1834u)) return;
    // 808F1834: cmplwi  r29, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[29]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_808F1838:
    ctx->pc = 0x808F1838u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1838u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 808F1838: lwz     r3, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F183C:
    ctx->pc = 0x808F183Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F183Cu)) return;
    // 808F183C: bc    12, 2, 0x808F1860
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_808F1860;
        }
    }

label_808F1840:
    ctx->pc = 0x808F1840u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1840u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 808F1840: lwz     r5, 32(r31)
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
label_808F1844:
    ctx->pc = 0x808F1844u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1844u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 808F1844: lwz     r4, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1848:
    ctx->pc = 0x808F1848u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1848u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 808F1848: lwz     r0, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F184C:
    ctx->pc = 0x808F184Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F184Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 808F184C: stw     r4, 32(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1850:
    ctx->pc = 0x808F1850u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1850u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 808F1850: stw     r0, 36(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1854:
    ctx->pc = 0x808F1854u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1854u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F1854: lwz     r0, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1858:
    ctx->pc = 0x808F1858u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1858u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 808F1858: stw     r0, 40(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F185C:
    ctx->pc = 0x808F185Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F185Cu)) return;
    // 808F185C: b       0x808F187C
    {
            goto label_808F187C;
    }

label_808F1860:
    ctx->pc = 0x808F1860u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1860u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 808F1860: lwz     r5, 32(r31)
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
label_808F1864:
    ctx->pc = 0x808F1864u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1864u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 808F1864: lwz     r0, 8(r1)
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
label_808F1868:
    ctx->pc = 0x808F1868u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1868u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 808F1868: lwz     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F186C:
    ctx->pc = 0x808F186Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F186Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 808F186C: stw     r0, 32(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1870:
    ctx->pc = 0x808F1870u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1870u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F1870: lwz     r0, 16(r1)
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
label_808F1874:
    ctx->pc = 0x808F1874u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1874u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 808F1874: stw     r4, 36(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1878:
    ctx->pc = 0x808F1878u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1878u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 808F1878: stw     r0, 40(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F187C:
    ctx->pc = 0x808F187Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F187Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 808F187C: lis     r5, -27903
    ctx->gpr[5] = ((u32)(s32)(-27903) << 16);

label_808F1880:
    ctx->pc = 0x808F1880u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1880u)) return;
    // 808F1880: lis     r4, -28629
    ctx->gpr[4] = ((u32)(s32)(-28629) << 16);

label_808F1884:
    ctx->pc = 0x808F1884u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1884u)) return;
    // 808F1884: addi    r6, r5, 31308
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(31308);

label_808F1888:
    ctx->pc = 0x808F1888u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1888u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 808F1888: lwz     r5, 32(r31)
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
label_808F188C:
    ctx->pc = 0x808F188Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F188Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 808F188C: lfs     f0, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x808F188Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
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
label_808F1890:
    ctx->pc = 0x808F1890u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1890u)) return;
    // 808F1890: addi    r4, r4, 44
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(44);

label_808F1894:
    ctx->pc = 0x808F1894u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1894u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 808F1894: stfs     f0, 48(r5)
    if (!ppc_fp_available_inline(ctx, 0x808F1894u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1898:
    ctx->pc = 0x808F1898u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1898u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 808F1898: lwz     r5, 32(r31)
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
label_808F189C:
    ctx->pc = 0x808F189Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F189Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 808F189C: stfs     f0, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x808F189Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F18A0:
    ctx->pc = 0x808F18A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F18A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F18A0: lbz     r0, 10(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(10);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F18A4:
    ctx->pc = 0x808F18A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F18A4u)) return;
    // 808F18A4: cmplwi  r0, 0x0002
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0002u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_808F18A8:
    ctx->pc = 0x808F18A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F18A8u)) return;
    // 808F18A8: bc    4, 2, 0x808F18C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_808F18C4;
        }
    }

label_808F18AC:
    ctx->pc = 0x808F18ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F18ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 808F18AC: lis     r5, -27900
    ctx->gpr[5] = ((u32)(s32)(-27900) << 16);

label_808F18B0:
    ctx->pc = 0x808F18B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F18B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 808F18B0: lwz     r4, 32(r31)
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
label_808F18B4:
    ctx->pc = 0x808F18B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F18B4u)) return;
    // 808F18B4: addi    r0, r5, -6824
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(-6824);

label_808F18B8:
    ctx->pc = 0x808F18B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F18B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F18B8: stw     r0, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F18BC:
    ctx->pc = 0x808F18BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F18BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 808F18BC: stw     r0, 16(r3)
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
label_808F18C0:
    ctx->pc = 0x808F18C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F18C0u)) return;
    // 808F18C0: b       0x808F18F4
    {
            goto label_808F18F4;
    }

label_808F18C4:
    ctx->pc = 0x808F18C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 14u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F18C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 14u : 1u;
    // 808F18C4: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_808F18C8:
    ctx->pc = 0x808F18C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F18C8u)) return;
    // 808F18C8: lis     r5, -27900
    ctx->gpr[5] = ((u32)(s32)(-27900) << 16);

label_808F18CC:
    ctx->pc = 0x808F18CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F18CCu)) return;
    // 808F18CC: addi    r6, r4, -5392
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(-5392);

label_808F18D0:
    ctx->pc = 0x808F18D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F18D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 808F18D0: lwz     r4, 32(r31)
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
label_808F18D4:
    ctx->pc = 0x808F18D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F18D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 808F18D4: lwz     r6, 0(r6)
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
label_808F18D8:
    ctx->pc = 0x808F18D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F18D8u)) return;
    // 808F18D8: addi    r5, r5, -9204
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-9204);

label_808F18DC:
    ctx->pc = 0x808F18DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x808F18DCu)) return;
    // 808F18DC: mulli   r0, r30, 24
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[30] * (s64)(s32)24);

label_808F18E0:
    ctx->pc = 0x808F18E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F18E0u)) return;
    // 808F18E0: rlwinm r6, r6, 2, 0, 29
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 2u) & 0xFFFFFFFCu;
    }

label_808F18E4:
    ctx->pc = 0x808F18E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F18E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 808F18E4: lwzx    r5, r5, r6
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[6];
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F18E8:
    ctx->pc = 0x808F18E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F18E8u)) return;
    // 808F18E8: add   r0, r5, r0
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_808F18EC:
    ctx->pc = 0x808F18ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F18ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 808F18EC: stw     r0, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F18F0:
    ctx->pc = 0x808F18F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F18F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 808F18F0: stw     r0, 16(r3)
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
label_808F18F4:
    ctx->pc = 0x808F18F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F18F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 808F18F4: lis     r5, -27903
    ctx->gpr[5] = ((u32)(s32)(-27903) << 16);

label_808F18F8:
    ctx->pc = 0x808F18F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F18F8u)) return;
    // 808F18F8: lis     r4, -32625
    ctx->gpr[4] = ((u32)(s32)(-32625) << 16);

label_808F18FC:
    ctx->pc = 0x808F18FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F18FCu)) return;
    // 808F18FC: addi    r6, r5, 31340
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(31340);

label_808F1900:
    ctx->pc = 0x808F1900u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1900u)) return;
    // 808F1900: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_808F1904:
    ctx->pc = 0x808F1904u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1904u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 808F1904: lfs     f0, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x808F1904u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
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
label_808F1908:
    ctx->pc = 0x808F1908u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1908u)) return;
    // 808F1908: addi    r0, r4, 6736
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(6736);

label_808F190C:
    ctx->pc = 0x808F190Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F190Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 808F190C: stfs     f0, 20(r3)
    if (!ppc_fp_available_inline(ctx, 0x808F190Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1910:
    ctx->pc = 0x808F1910u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1910u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F1910: stb     r5, 25(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(25);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1914:
    ctx->pc = 0x808F1914u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1914u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 808F1914: stb     r5, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1918:
    ctx->pc = 0x808F1918u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1918u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 808F1918: stw     r0, 20(r31)
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
label_808F191C:
    ctx->pc = 0x808F191Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F191Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 808F191C: lwz     r0, 52(r1)
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
label_808F1920:
    ctx->pc = 0x808F1920u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1920u)) return;
    // 808F1920: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_808F1924:
    ctx->pc = 0x808F1924u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1924u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 808F1924: lwz     r31, 44(r1)
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
label_808F1928:
    ctx->pc = 0x808F1928u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1928u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 808F1928: lwz     r30, 40(r1)
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
label_808F192C:
    ctx->pc = 0x808F192Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F192Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 808F192C: lwz     r29, 36(r1)
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
label_808F1930:
    ctx->pc = 0x808F1930u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x808F1930u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F1930: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1934:
    ctx->pc = 0x808F1934u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1934u)) return;
    // 808F1934: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_808F1938:
    ctx->pc = 0x808F1938u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1938u)) return;
    // 808F1938: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_808F1060;
        }
    }

label_808F193C:
    ctx->pc = 0x808F193Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F193Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 808F193C: lwz     r5, 32(r3)
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
label_808F1940:
    ctx->pc = 0x808F1940u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1940u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 808F1940: lwz     r6, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1944:
    ctx->pc = 0x808F1944u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1944u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 808F1944: lbz     r0, 0(r5)
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
label_808F1948:
    ctx->pc = 0x808F1948u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1948u)) return;
    // 808F1948: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_808F194C:
    ctx->pc = 0x808F194Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F194Cu)) return;
    // 808F194C: cmpwi   r0, 1
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

label_808F1950:
    ctx->pc = 0x808F1950u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1950u)) return;
    // 808F1950: bc    12, 2, 0x808F19C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_808F19C4;
        }
    }

label_808F1954:
    ctx->pc = 0x808F1954u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1954u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 808F1954: bc    4, 0, 0x808F1964
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_808F1964;
        }
    }

label_808F1958:
    ctx->pc = 0x808F1958u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1958u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F1958: cmpwi   r0, 0
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

label_808F195C:
    ctx->pc = 0x808F195Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F195Cu)) return;
    // 808F195C: bc    4, 0, 0x808F1970
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_808F1970;
        }
    }

label_808F1960:
    ctx->pc = 0x808F1960u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1960u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 808F1960: b       0x808F19F8
    {
            goto label_808F19F8;
    }

label_808F1964:
    ctx->pc = 0x808F1964u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1964u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F1964: cmpwi   r0, 3
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

label_808F1968:
    ctx->pc = 0x808F1968u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1968u)) return;
    // 808F1968: bc    4, 0, 0x808F19F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_808F19F8;
        }
    }

label_808F196C:
    ctx->pc = 0x808F196Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F196Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 808F196C: b       0x808F1984
    {
            goto label_808F1984;
    }

label_808F1970:
    ctx->pc = 0x808F1970u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1970u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 808F1970: lis     r4, -27903
    ctx->gpr[4] = ((u32)(s32)(-27903) << 16);

label_808F1974:
    ctx->pc = 0x808F1974u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1974u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 808F1974: lfs     f0, 31308(r4)
    if (!ppc_fp_available_inline(ctx, 0x808F1974u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(31308);
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
label_808F1978:
    ctx->pc = 0x808F1978u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1978u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F1978: stfs     f0, 48(r5)
    if (!ppc_fp_available_inline(ctx, 0x808F1978u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F197C:
    ctx->pc = 0x808F197Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F197Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 808F197C: stfs     f0, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x808F197Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1980:
    ctx->pc = 0x808F1980u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1980u)) return;
    // 808F1980: b       0x808F19F8
    {
            goto label_808F19F8;
    }

label_808F1984:
    ctx->pc = 0x808F1984u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1984u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 808F1984: lfs     f2, 48(r5)
    if (!ppc_fp_available_inline(ctx, 0x808F1984u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(48);
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
label_808F1988:
    ctx->pc = 0x808F1988u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1988u)) return;
    // 808F1988: lis     r4, -27903
    ctx->gpr[4] = ((u32)(s32)(-27903) << 16);

label_808F198C:
    ctx->pc = 0x808F198Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F198Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 808F198C: lfs     f1, 20(r6)
    if (!ppc_fp_available_inline(ctx, 0x808F198Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1990:
    ctx->pc = 0x808F1990u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1990u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 808F1990: lfs     f0, 31336(r4)
    if (!ppc_fp_available_inline(ctx, 0x808F1990u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(31336);
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
label_808F1994:
    ctx->pc = 0x808F1994u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1994u)) return;
    // 808F1994: fsubs   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x808F1994u)) return;
    ppc_fsubs(ctx, 1, 2, 1);

label_808F1998:
    ctx->pc = 0x808F1998u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1998u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 808F1998: stfs     f1, 48(r5)
    if (!ppc_fp_available_inline(ctx, 0x808F1998u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F199C:
    ctx->pc = 0x808F199Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F199Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 808F199C: lfs     f1, 48(r5)
    if (!ppc_fp_available_inline(ctx, 0x808F199Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F19A0:
    ctx->pc = 0x808F19A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F19A0u)) return;
    // 808F19A0: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x808F19A0u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_808F19A4:
    ctx->pc = 0x808F19A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F19A4u)) return;
    // 808F19A4: cror    2, 0, 2
    {
        u32 a = (ctx->cr >> (31u - 0u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_808F19A8:
    ctx->pc = 0x808F19A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F19A8u)) return;
    // 808F19A8: bc    4, 2, 0x808F19F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_808F19F8;
        }
    }

label_808F19AC:
    ctx->pc = 0x808F19ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F19ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 808F19AC: stfs     f0, 48(r5)
    if (!ppc_fp_available_inline(ctx, 0x808F19ACu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F19B0:
    ctx->pc = 0x808F19B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F19B0u)) return;
    // 808F19B0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_808F19B4:
    ctx->pc = 0x808F19B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F19B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 808F19B4: stb     r0, 0(r5)
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
label_808F19B8:
    ctx->pc = 0x808F19B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F19B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F19B8: lwz     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F19BC:
    ctx->pc = 0x808F19BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F19BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 808F19BC: stw     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F19C0:
    ctx->pc = 0x808F19C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F19C0u)) return;
    // 808F19C0: b       0x808F19F8
    {
            goto label_808F19F8;
    }

label_808F19C4:
    ctx->pc = 0x808F19C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F19C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 808F19C4: lfs     f2, 48(r5)
    if (!ppc_fp_available_inline(ctx, 0x808F19C4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(48);
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
label_808F19C8:
    ctx->pc = 0x808F19C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F19C8u)) return;
    // 808F19C8: lis     r4, -27903
    ctx->gpr[4] = ((u32)(s32)(-27903) << 16);

label_808F19CC:
    ctx->pc = 0x808F19CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F19CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 808F19CC: lfs     f1, 20(r6)
    if (!ppc_fp_available_inline(ctx, 0x808F19CCu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F19D0:
    ctx->pc = 0x808F19D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F19D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 808F19D0: lfs     f0, 31308(r4)
    if (!ppc_fp_available_inline(ctx, 0x808F19D0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(31308);
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
label_808F19D4:
    ctx->pc = 0x808F19D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F19D4u)) return;
    // 808F19D4: fadds   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x808F19D4u)) return;
    ppc_fadds(ctx, 1, 2, 1);

label_808F19D8:
    ctx->pc = 0x808F19D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F19D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 808F19D8: stfs     f1, 48(r5)
    if (!ppc_fp_available_inline(ctx, 0x808F19D8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F19DC:
    ctx->pc = 0x808F19DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F19DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 808F19DC: lfs     f1, 48(r5)
    if (!ppc_fp_available_inline(ctx, 0x808F19DCu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F19E0:
    ctx->pc = 0x808F19E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F19E0u)) return;
    // 808F19E0: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x808F19E0u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_808F19E4:
    ctx->pc = 0x808F19E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F19E4u)) return;
    // 808F19E4: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_808F19E8:
    ctx->pc = 0x808F19E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F19E8u)) return;
    // 808F19E8: bc    4, 2, 0x808F19F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_808F19F8;
        }
    }

label_808F19EC:
    ctx->pc = 0x808F19ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F19ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F19EC: stfs     f0, 48(r5)
    if (!ppc_fp_available_inline(ctx, 0x808F19ECu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F19F0:
    ctx->pc = 0x808F19F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F19F0u)) return;
    // 808F19F0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_808F19F4:
    ctx->pc = 0x808F19F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F19F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 808F19F4: stb     r0, 0(r5)
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
label_808F19F8:
    ctx->pc = 0x808F19F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F19F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 808F19F8: lha     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F19FC:
    ctx->pc = 0x808F19FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F19FCu)) return;
    // 808F19FC: rlwinm r0, r0, 0, 31, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFFDu;
    }

label_808F1A00:
    ctx->pc = 0x808F1A00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1A00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 808F1A00: sth     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1A04:
    ctx->pc = 0x808F1A04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1A04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 808F1A04: lwz     r3, 32(r3)
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
label_808F1A08:
    ctx->pc = 0x808F1A08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1A08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 808F1A08: lwz     r4, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1A0C:
    ctx->pc = 0x808F1A0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1A0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 808F1A0C: lwz     r3, 16(r3)
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
label_808F1A10:
    ctx->pc = 0x808F1A10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1A10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 808F1A10: lbz     r7, 24(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(24);
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1A14:
    ctx->pc = 0x808F1A14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1A14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F1A14: lhz     r0, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1A18:
    ctx->pc = 0x808F1A18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1A18u)) return;
    // 808F1A18: cmpw    r4, r0
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_808F1A1C:
    ctx->pc = 0x808F1A1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1A1Cu)) return;
    // 808F1A1C: bc    4, 0, 0x808F1A2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_808F1A2C;
        }
    }

label_808F1A20:
    ctx->pc = 0x808F1A20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1A20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 808F1A20: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_808F1A24:
    ctx->pc = 0x808F1A24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1A24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 808F1A24: stb     r0, 24(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(24);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1A28:
    ctx->pc = 0x808F1A28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1A28u)) return;
    // 808F1A28: b       0x808F1A34
    {
            goto label_808F1A34;
    }

label_808F1A2C:
    ctx->pc = 0x808F1A2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1A2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F1A2C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_808F1A30:
    ctx->pc = 0x808F1A30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1A30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 808F1A30: stb     r0, 24(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(24);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1A34:
    ctx->pc = 0x808F1A34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1A34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F1A34: lbz     r0, 24(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1A38:
    ctx->pc = 0x808F1A38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1A38u)) return;
    // 808F1A38: cmplw   r7, r0
    {
        u32 val_a = (u32)(ctx->gpr[7]);
        u32 val_b = (u32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_808F1A3C:
    ctx->pc = 0x808F1A3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1A3Cu)) return;
    // 808F1A3C: bclr  12, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_808F1060;
        }
    }

label_808F1A40:
    ctx->pc = 0x808F1A40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1A40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 808F1A40: lha     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1A44:
    ctx->pc = 0x808F1A44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1A44u)) return;
    // 808F1A44: ori     r0, r0, 0x0002
    ctx->gpr[0] = ctx->gpr[0] | 0x0002u;

label_808F1A48:
    ctx->pc = 0x808F1A48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1A48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 808F1A48: sth     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1A4C:
    ctx->pc = 0x808F1A4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1A4Cu)) return;
    // 808F1A4C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_808F1060;
        }
    }

label_808F1A50:
    ctx->pc = 0x808F1A50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 59u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1A50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 59u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 58u : 0u;
    // 808F1A50: stwu     r1, -192(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-192);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1A54:
    ctx->pc = 0x808F1A54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1A54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 57u : 0u;
    // 808F1A54: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1A58:
    ctx->pc = 0x808F1A58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1A58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 56u : 0u;
    // 808F1A58: stw     r0, 196(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(196);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1A5C:
    ctx->pc = 0x808F1A5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1A5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 55u : 0u;
    // 808F1A5C: stfd     f31, 176(r1)
    if (!ppc_fp_available_inline(ctx, 0x808F1A5Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1A60:
    ctx->pc = 0x808F1A60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1A60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 54u : 0u;
    // 808F1A60: psq_st   f31, 184(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x808F1A60u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x808F1A60u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1A64:
    ctx->pc = 0x808F1A64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1A64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 53u : 0u;
    // 808F1A64: stfd     f30, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x808F1A64u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1A68:
    ctx->pc = 0x808F1A68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1A68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 52u : 0u;
    // 808F1A68: psq_st   f30, 168(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x808F1A68u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x808F1A68u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1A6C:
    ctx->pc = 0x808F1A6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1A6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 808F1A6C: stfd     f29, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x808F1A6Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1A70:
    ctx->pc = 0x808F1A70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1A70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 50u : 0u;
    // 808F1A70: psq_st   f29, 152(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x808F1A70u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x808F1A70u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1A74:
    ctx->pc = 0x808F1A74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1A74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 808F1A74: stfd     f28, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x808F1A74u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[28]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1A78:
    ctx->pc = 0x808F1A78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1A78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 48u : 0u;
    // 808F1A78: psq_st   f28, 136(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x808F1A78u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x808F1A78u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1A7C:
    ctx->pc = 0x808F1A7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1A7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 47u : 0u;
    // 808F1A7C: stfd     f27, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x808F1A7Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[27]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1A80:
    ctx->pc = 0x808F1A80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1A80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 46u : 0u;
    // 808F1A80: psq_st   f27, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x808F1A80u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_store_inline(ctx, 27u, ea, false, 0u, false, 0x808F1A80u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1A84:
    ctx->pc = 0x808F1A84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1A84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 45u : 0u;
    // 808F1A84: stfd     f26, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x808F1A84u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[26]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1A88:
    ctx->pc = 0x808F1A88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1A88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 44u : 0u;
    // 808F1A88: psq_st   f26, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x808F1A88u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_store_inline(ctx, 26u, ea, false, 0u, false, 0x808F1A88u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1A8C:
    ctx->pc = 0x808F1A8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1A8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 43u : 0u;
    // 808F1A8C: stfd     f25, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x808F1A8Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[25]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1A90:
    ctx->pc = 0x808F1A90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1A90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 42u : 0u;
    // 808F1A90: psq_st   f25, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x808F1A90u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 25u, ea, false, 0u, false, 0x808F1A90u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1A94:
    ctx->pc = 0x808F1A94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 11u, 0x808F1A94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 31u : 0u;
    // 808F1A94: stmw     r23, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        for (u32 r = 23; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1A98:
    ctx->pc = 0x808F1A98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1A98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 30u : 0u;
    // 808F1A98: lwz     r28, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1A9C:
    ctx->pc = 0x808F1A9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1A9Cu)) return;
    // 808F1A9C: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_808F1AA0:
    ctx->pc = 0x808F1AA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1AA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 808F1AA0: lwz     r29, 32(r3)
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
label_808F1AA4:
    ctx->pc = 0x808F1AA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1AA4u)) return;
    // 808F1AA4: lis     r3, -27903
    ctx->gpr[3] = ((u32)(s32)(-27903) << 16);

label_808F1AA8:
    ctx->pc = 0x808F1AA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1AA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 808F1AA8: lwz     r4, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1AAC:
    ctx->pc = 0x808F1AACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1AACu)) return;
    // 808F1AAC: addi    r7, r3, 31392
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(31392);

label_808F1AB0:
    ctx->pc = 0x808F1AB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1AB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 808F1AB0: lwz     r30, 16(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1AB4:
    ctx->pc = 0x808F1AB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1AB4u)) return;
    // 808F1AB4: lis     r3, -16384
    ctx->gpr[3] = ((u32)(s32)(-16384) << 16);

label_808F1AB8:
    ctx->pc = 0x808F1AB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x808F1AB8u)) return;
    // 808F1AB8: mulli   r5, r4, 20
    ctx->gpr[5] = (u32)((s64)(s32)ctx->gpr[4] * (s64)(s32)20);

label_808F1ABC:
    ctx->pc = 0x808F1ABCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1ABCu)) return;
    // 808F1ABC: lis     r4, -16367
    ctx->gpr[4] = ((u32)(s32)(-16367) << 16);

label_808F1AC0:
    ctx->pc = 0x808F1AC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1AC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 808F1AC0: lwz     r6, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1AC4:
    ctx->pc = 0x808F1AC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1AC4u)) return;
    // 808F1AC4: addi    r3, r3, 11879
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(11879);

label_808F1AC8:
    ctx->pc = 0x808F1AC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1AC8u)) return;
    // 808F1AC8: addi    r4, r4, 31743
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(31743);

label_808F1ACC:
    ctx->pc = 0x808F1ACCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1ACCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 808F1ACC: stw     r0, 8(r1)
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
label_808F1AD0:
    ctx->pc = 0x808F1AD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1AD0u)) return;
    // 808F1AD0: add   r26, r6, r5
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[26] = res;
    }

label_808F1AD4:
    ctx->pc = 0x808F1AD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1AD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 808F1AD4: stw     r0, 16(r1)
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
label_808F1AD8:
    ctx->pc = 0x808F1AD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1AD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 808F1AD8: lhz     r8, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        ctx->gpr[8] = mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1ADC:
    ctx->pc = 0x808F1ADCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1ADCu)) return;
    // 808F1ADC: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_808F1AE0:
    ctx->pc = 0x808F1AE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1AE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 808F1AE0: lhz     r0, 2(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(2);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1AE4:
    ctx->pc = 0x808F1AE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1AE4u)) return;
    // 808F1AE4: or   r6, r4, r4
    {
        ctx->gpr[6] = ctx->gpr[4] | ctx->gpr[4];
    }

label_808F1AE8:
    ctx->pc = 0x808F1AE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1AE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 808F1AE8: stw     r8, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1AEC:
    ctx->pc = 0x808F1AECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1AECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 808F1AEC: lfd     f2, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x808F1AECu)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1AF0:
    ctx->pc = 0x808F1AF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1AF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 808F1AF0: stw     r0, 20(r1)
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
label_808F1AF4:
    ctx->pc = 0x808F1AF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1AF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 808F1AF4: lfd     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x808F1AF4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1AF8:
    ctx->pc = 0x808F1AF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1AF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 808F1AF8: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x808F1AF8u)) return;
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
label_808F1AFC:
    ctx->pc = 0x808F1AFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1AFCu)) return;
    // 808F1AFC: fsubs   f31, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x808F1AFCu)) return;
    ppc_fsubs(ctx, 31, 1, 2);

label_808F1B00:
    ctx->pc = 0x808F1B00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1B00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F1B00: lfs     f29, 40(r29)
    if (!ppc_fp_available_inline(ctx, 0x808F1B00u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(40);
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
label_808F1B04:
    ctx->pc = 0x808F1B04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1B04u)) return;
    // 808F1B04: fsubs   f30, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x808F1B04u)) return;
    ppc_fsubs(ctx, 30, 0, 2);

label_808F1B08:
    ctx->pc = 0x808F1B08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1B08u)) return;
    // 808F1B08: bl      0x804E992C
    {
            ctx->lr = 0x808F1B0Cu;
            ctx->pc = 0x804E992Cu;
            return;
    }

label_808F1B0C:
    ctx->pc = 0x808F1B0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 26u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1B0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 26u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 808F1B0C: lhz     r5, 6(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(6);
        ctx->gpr[5] = mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1B10:
    ctx->pc = 0x808F1B10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1B10u)) return;
    // 808F1B10: lis     r4, 17200
    ctx->gpr[4] = ((u32)(s32)(17200) << 16);

label_808F1B14:
    ctx->pc = 0x808F1B14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1B14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 808F1B14: lhz     r0, 8(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1B18:
    ctx->pc = 0x808F1B18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1B18u)) return;
    // 808F1B18: lis     r6, -27903
    ctx->gpr[6] = ((u32)(s32)(-27903) << 16);

label_808F1B1C:
    ctx->pc = 0x808F1B1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1B1Cu)) return;
    // 808F1B1C: lis     r3, -27903
    ctx->gpr[3] = ((u32)(s32)(-27903) << 16);

label_808F1B20:
    ctx->pc = 0x808F1B20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1B20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 808F1B20: stw     r5, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1B24:
    ctx->pc = 0x808F1B24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1B24u)) return;
    // 808F1B24: addi    r5, r3, 31392
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(31392);

label_808F1B28:
    ctx->pc = 0x808F1B28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1B28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 808F1B28: lfs     f2, 31344(r6)
    if (!ppc_fp_available_inline(ctx, 0x808F1B28u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(31344);
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
label_808F1B2C:
    ctx->pc = 0x808F1B2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1B2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 808F1B2C: stw     r4, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1B30:
    ctx->pc = 0x808F1B30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1B30u)) return;
    // 808F1B30: lis     r3, -27903
    ctx->gpr[3] = ((u32)(s32)(-27903) << 16);

label_808F1B34:
    ctx->pc = 0x808F1B34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1B34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 808F1B34: lfd     f8, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x808F1B34u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[8] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1B38:
    ctx->pc = 0x808F1B38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1B38u)) return;
    // 808F1B38: fsubs   f1, f31, f2
    if (!ppc_fp_available_inline(ctx, 0x808F1B38u)) return;
    ppc_fsubs(ctx, 1, 31, 2);

label_808F1B3C:
    ctx->pc = 0x808F1B3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1B3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 808F1B3C: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x808F1B3Cu)) return;
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
label_808F1B40:
    ctx->pc = 0x808F1B40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1B40u)) return;
    // 808F1B40: fmr    f3, f29
    if (!ppc_fp_available_inline(ctx, 0x808F1B40u)) return;
    ctx->fpr[3] = ctx->fpr[29];

label_808F1B44:
    ctx->pc = 0x808F1B44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1B44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 808F1B44: stw     r0, 36(r1)
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
label_808F1B48:
    ctx->pc = 0x808F1B48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1B48u)) return;
    // 808F1B48: fsubs   f2, f30, f2
    if (!ppc_fp_available_inline(ctx, 0x808F1B48u)) return;
    ppc_fsubs(ctx, 2, 30, 2);

label_808F1B4C:
    ctx->pc = 0x808F1B4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1B4Cu)) return;
    // 808F1B4C: fsubs   f7, f0, f8
    if (!ppc_fp_available_inline(ctx, 0x808F1B4Cu)) return;
    ppc_fsubs(ctx, 7, 0, 8);

label_808F1B50:
    ctx->pc = 0x808F1B50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1B50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 808F1B50: stw     r4, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1B54:
    ctx->pc = 0x808F1B54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1B54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 808F1B54: lfs     f4, 44(r29)
    if (!ppc_fp_available_inline(ctx, 0x808F1B54u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(44);
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
label_808F1B58:
    ctx->pc = 0x808F1B58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1B58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 808F1B58: lfd     f5, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x808F1B58u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[5] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1B5C:
    ctx->pc = 0x808F1B5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1B5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 808F1B5C: lfs     f6, 31348(r3)
    if (!ppc_fp_available_inline(ctx, 0x808F1B5Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(31348);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[6] = value;
        ctx->ps1[6] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1B60:
    ctx->pc = 0x808F1B60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1B60u)) return;
    // 808F1B60: fsubs   f5, f5, f8
    if (!ppc_fp_available_inline(ctx, 0x808F1B60u)) return;
    ppc_fsubs(ctx, 5, 5, 8);

label_808F1B64:
    ctx->pc = 0x808F1B64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1B64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 808F1B64: lfs     f0, 48(r29)
    if (!ppc_fp_available_inline(ctx, 0x808F1B64u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
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
label_808F1B68:
    ctx->pc = 0x808F1B68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1B68u)) return;
    // 808F1B68: fmadds f4, f7, f4, f6
    if (!ppc_fp_available_inline(ctx, 0x808F1B68u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[7], ctx->fpr[4], ctx->fpr[6], true, false, false, &result))
            ctx->fpr[4] = ctx->ps1[4] = result;
    }

label_808F1B6C:
    ctx->pc = 0x808F1B6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1B6Cu)) return;
    // 808F1B6C: fmadds f5, f5, f0, f6
    if (!ppc_fp_available_inline(ctx, 0x808F1B6Cu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[5], ctx->fpr[0], ctx->fpr[6], true, false, false, &result))
            ctx->fpr[5] = ctx->ps1[5] = result;
    }

label_808F1B70:
    ctx->pc = 0x808F1B70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1B70u)) return;
    // 808F1B70: bl      0x804E7448
    {
            ctx->lr = 0x808F1B74u;
            ctx->pc = 0x804E7448u;
            return;
    }

label_808F1B74:
    ctx->pc = 0x808F1B74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1B74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 808F1B74: lis     r3, -28629
    ctx->gpr[3] = ((u32)(s32)(-28629) << 16);

label_808F1B78:
    ctx->pc = 0x808F1B78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1B78u)) return;
    // 808F1B78: addi    r3, r3, 44
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(44);

label_808F1B7C:
    ctx->pc = 0x808F1B7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1B7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F1B7C: lbz     r0, 10(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(10);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1B80:
    ctx->pc = 0x808F1B80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1B80u)) return;
    // 808F1B80: cmplwi  r0, 0x0002
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0002u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_808F1B84:
    ctx->pc = 0x808F1B84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1B84u)) return;
    // 808F1B84: bc    4, 2, 0x808F1B9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_808F1B9C;
        }
    }

label_808F1B88:
    ctx->pc = 0x808F1B88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1B88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 808F1B88: lwz     r0, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1B8C:
    ctx->pc = 0x808F1B8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1B8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F1B8C: lfs     f1, 48(r29)
    if (!ppc_fp_available_inline(ctx, 0x808F1B8Cu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1B90:
    ctx->pc = 0x808F1B90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1B90u)) return;
    // 808F1B90: rlwinm r3, r0, 0, 24, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
    }

label_808F1B94:
    ctx->pc = 0x808F1B94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1B94u)) return;
    // 808F1B94: bl      0x808F1060
    {
            ctx->lr = 0x808F1B98u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x808F1060u;
                return;
            }
            goto label_808F1060;
    }

label_808F1B98:
    ctx->pc = 0x808F1B98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1B98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 808F1B98: b       0x808F1DC0
    {
            goto label_808F1DC0;
    }

label_808F1B9C:
    ctx->pc = 0x808F1B9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1B9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 808F1B9C: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_808F1BA0:
    ctx->pc = 0x808F1BA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1BA0u)) return;
    // 808F1BA0: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_808F1BA4:
    ctx->pc = 0x808F1BA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1BA4u)) return;
    // 808F1BA4: li      r5, -1
    ctx->gpr[5] = (u32)(s32)(-1);

label_808F1BA8:
    ctx->pc = 0x808F1BA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1BA8u)) return;
    // 808F1BA8: li      r6, -1
    ctx->gpr[6] = (u32)(s32)(-1);

label_808F1BAC:
    ctx->pc = 0x808F1BACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1BACu)) return;
    // 808F1BAC: bl      0x804E992C
    {
            ctx->lr = 0x808F1BB0u;
            ctx->pc = 0x804E992Cu;
            return;
    }

label_808F1BB0:
    ctx->pc = 0x808F1BB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1BB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F1BB0: li      r3, 8192
    ctx->gpr[3] = (u32)(s32)(8192);

label_808F1BB4:
    ctx->pc = 0x808F1BB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1BB4u)) return;
    // 808F1BB4: bl      0x8004D264
    {
            ctx->lr = 0x808F1BB8u;
            ctx->pc = 0x8004D264u;
            return;
    }

label_808F1BB8:
    ctx->pc = 0x808F1BB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1BB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 808F1BB8: or   r31, r30, r30
    {
        ctx->gpr[31] = ctx->gpr[30] | ctx->gpr[30];
    }

label_808F1BBC:
    ctx->pc = 0x808F1BBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1BBCu)) return;
    // 808F1BBC: or   r30, r26, r26
    {
        ctx->gpr[30] = ctx->gpr[26] | ctx->gpr[26];
    }

label_808F1BC0:
    ctx->pc = 0x808F1BC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1BC0u)) return;
    // 808F1BC0: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_808F1BC4:
    ctx->pc = 0x808F1BC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1BC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F1BC4: lwz     r3, 8(r31)
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
label_808F1BC8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1BC8u)) return;
    // 808F1BC8: cmplwi  r3, 0x0000
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

label_808F1BCC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1BCCu)) return;
    // 808F1BCC: bc    12, 2, 0x808F1DAC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_808F1DAC;
        }
    }

label_808F1BD0:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1BD0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 808F1BD0: bl      0x8060F594
    {
            ctx->lr = 0x808F1BD4u;
            ctx->pc = 0x8060F594u;
            return;
    }

label_808F1BD4:
    ctx->pc = 0x808F1BD4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1BD4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F1BD4: lwz     r26, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        ctx->gpr[26] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1BD8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1BD8u)) return;
    // 808F1BD8: cmplwi  r26, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[26]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_808F1BDC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1BDCu)) return;
    // 808F1BDC: bc    12, 2, 0x808F1DAC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_808F1DAC;
        }
    }

label_808F1BE0:
    ctx->pc = 0x808F1BE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1BE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F1BE0: lwz     r0, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1BE4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1BE4u)) return;
    // 808F1BE4: cmpwi   r0, 0
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

label_808F1BE8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1BE8u)) return;
    // 808F1BE8: bc    4, 2, 0x808F1D20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_808F1D20;
        }
    }

label_808F1BEC:
    ctx->pc = 0x808F1BECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1BECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F1BEC: lbz     r0, 24(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1BF0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1BF0u)) return;
    // 808F1BF0: cmplwi  r0, 0x0000
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

label_808F1BF4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1BF4u)) return;
    // 808F1BF4: bc    4, 2, 0x808F1D20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_808F1D20;
        }
    }

label_808F1BF8:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1BF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 808F1BF8: addi    r25, r26, 2
    ctx->gpr[25] = ctx->gpr[26] + (u32)(s32)(2);

label_808F1BFC:
    ctx->pc = 0x808F1BFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1BFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F1BFC: lha     r3, 2(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(2);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1C00:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1C00u)) return;
    // 808F1C00: extsh. r0, r3
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_808F1C04:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1C04u)) return;
    // 808F1C04: bc    12, 2, 0x808F1C10
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_808F1C10;
        }
    }

label_808F1C08:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1C08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F1C08: li      r23, 0
    ctx->gpr[23] = (u32)(s32)(0);

label_808F1C0C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1C0Cu)) return;
    // 808F1C0C: b       0x808F1CAC
    {
            goto label_808F1CAC;
    }

label_808F1C10:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1C10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 808F1C10: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_808F1C14:
    ctx->pc = 0x808F1C14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1C14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F1C14: lwz     r0, -5392(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-5392);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1C18:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1C18u)) return;
    // 808F1C18: cmpwi   r0, 0
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

label_808F1C1C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1C1Cu)) return;
    // 808F1C1C: bc    4, 2, 0x808F1C2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_808F1C2C;
        }
    }

label_808F1C20:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1C20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 808F1C20: lis     r4, -27903
    ctx->gpr[4] = ((u32)(s32)(-27903) << 16);

label_808F1C24:
    ctx->pc = 0x808F1C24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1C24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 808F1C24: lfs     f1, 31352(r4)
    if (!ppc_fp_available_inline(ctx, 0x808F1C24u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(31352);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1C28:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1C28u)) return;
    // 808F1C28: b       0x808F1C48
    {
            goto label_808F1C48;
    }

label_808F1C2C:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1C2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F1C2C: cmpwi   r0, 2
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

label_808F1C30:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1C30u)) return;
    // 808F1C30: bc    4, 2, 0x808F1C40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_808F1C40;
        }
    }

label_808F1C34:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1C34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 808F1C34: lis     r4, -27903
    ctx->gpr[4] = ((u32)(s32)(-27903) << 16);

label_808F1C38:
    ctx->pc = 0x808F1C38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1C38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 808F1C38: lfs     f1, 31356(r4)
    if (!ppc_fp_available_inline(ctx, 0x808F1C38u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(31356);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1C3C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1C3Cu)) return;
    // 808F1C3C: b       0x808F1C48
    {
            goto label_808F1C48;
    }

label_808F1C40:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1C40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F1C40: lis     r4, -27903
    ctx->gpr[4] = ((u32)(s32)(-27903) << 16);

label_808F1C44:
    ctx->pc = 0x808F1C44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1C44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 808F1C44: lfs     f1, 31360(r4)
    if (!ppc_fp_available_inline(ctx, 0x808F1C44u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(31360);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1C48:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1C48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 808F1C48: lis     r4, -27903
    ctx->gpr[4] = ((u32)(s32)(-27903) << 16);

label_808F1C4C:
    ctx->pc = 0x808F1C4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1C4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 808F1C4C: lfs     f5, 48(r29)
    if (!ppc_fp_available_inline(ctx, 0x808F1C4Cu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
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
label_808F1C50:
    ctx->pc = 0x808F1C50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1C50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F1C50: lfd     f0, 31368(r4)
    if (!ppc_fp_available_inline(ctx, 0x808F1C50u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(31368);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1C54:
    ctx->pc = 0x808F1C54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1C54u)) return;
    // 808F1C54: fcmpu   cr0, f0, f5
    if (!ppc_fp_available_inline(ctx, 0x808F1C54u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[5], false);

label_808F1C58:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1C58u)) return;
    // 808F1C58: bc    4, 2, 0x808F1C7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_808F1C7C;
        }
    }

label_808F1C5C:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1C5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 808F1C5C: lis     r4, -27903
    ctx->gpr[4] = ((u32)(s32)(-27903) << 16);

label_808F1C60:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1C60u)) return;
    // 808F1C60: lis     r5, -27903
    ctx->gpr[5] = ((u32)(s32)(-27903) << 16);

label_808F1C64:
    ctx->pc = 0x808F1C64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1C64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 808F1C64: lfs     f4, 31308(r4)
    if (!ppc_fp_available_inline(ctx, 0x808F1C64u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(31308);
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
label_808F1C68:
    ctx->pc = 0x808F1C68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1C68u)) return;
    // 808F1C68: fmr    f3, f29
    if (!ppc_fp_available_inline(ctx, 0x808F1C68u)) return;
    ctx->fpr[3] = ctx->fpr[29];

label_808F1C6C:
    ctx->pc = 0x808F1C6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1C6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F1C6C: lfs     f2, 31376(r5)
    if (!ppc_fp_available_inline(ctx, 0x808F1C6Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(31376);
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
label_808F1C70:
    ctx->pc = 0x808F1C70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1C70u)) return;
    // 808F1C70: fmr    f5, f4
    if (!ppc_fp_available_inline(ctx, 0x808F1C70u)) return;
    ctx->fpr[5] = ctx->fpr[4];

label_808F1C74:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1C74u)) return;
    // 808F1C74: bl      0x804E8B28
    {
            ctx->lr = 0x808F1C78u;
            ctx->pc = 0x804E8B28u;
            return;
    }

label_808F1C78:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1C78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 808F1C78: b       0x808F1CA4
    {
            goto label_808F1CA4;
    }

label_808F1C7C:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1C7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 808F1C7C: lis     r4, -27903
    ctx->gpr[4] = ((u32)(s32)(-27903) << 16);

label_808F1C80:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1C80u)) return;
    // 808F1C80: lis     r5, -27903
    ctx->gpr[5] = ((u32)(s32)(-27903) << 16);

label_808F1C84:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1C84u)) return;
    // 808F1C84: addi    r6, r4, 31384
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(31384);

label_808F1C88:
    ctx->pc = 0x808F1C88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1C88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 808F1C88: lfs     f0, 31380(r5)
    if (!ppc_fp_available_inline(ctx, 0x808F1C88u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(31380);
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
label_808F1C8C:
    ctx->pc = 0x808F1C8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1C8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 808F1C8C: lfs     f2, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x808F1C8Cu)) return;
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
label_808F1C90:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1C90u)) return;
    // 808F1C90: lis     r4, -27903
    ctx->gpr[4] = ((u32)(s32)(-27903) << 16);

label_808F1C94:
    ctx->pc = 0x808F1C94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1C94u)) return;
    // 808F1C94: fmr    f3, f29
    if (!ppc_fp_available_inline(ctx, 0x808F1C94u)) return;
    ctx->fpr[3] = ctx->fpr[29];

label_808F1C98:
    ctx->pc = 0x808F1C98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1C98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F1C98: lfs     f4, 31308(r4)
    if (!ppc_fp_available_inline(ctx, 0x808F1C98u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(31308);
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
label_808F1C9C:
    ctx->pc = 0x808F1C9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1C9Cu)) return;
    // 808F1C9C: fnmsubs f2, f2, f5, f0
    if (!ppc_fp_available_inline(ctx, 0x808F1C9Cu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[5], ctx->fpr[0], true, true, true, &result))
            ctx->fpr[2] = ctx->ps1[2] = result;
    }

label_808F1CA0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1CA0u)) return;
    // 808F1CA0: bl      0x804E8B28
    {
            ctx->lr = 0x808F1CA4u;
            ctx->pc = 0x804E8B28u;
            return;
    }

label_808F1CA4:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1CA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F1CA4: li      r23, 1
    ctx->gpr[23] = (u32)(s32)(1);

label_808F1CA8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1CA8u)) return;
    // 808F1CA8: addi    r25, r25, 6
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(6);

label_808F1CAC:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1CACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 808F1CAC: lis     r3, -27903
    ctx->gpr[3] = ((u32)(s32)(-27903) << 16);

label_808F1CB0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1CB0u)) return;
    // 808F1CB0: lis     r24, 17200
    ctx->gpr[24] = ((u32)(s32)(17200) << 16);

label_808F1CB4:
    ctx->pc = 0x808F1CB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1CB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 808F1CB4: lfd     f28, 31328(r3)
    if (!ppc_fp_available_inline(ctx, 0x808F1CB4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(31328);
        ctx->fpr[28] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1CB8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1CB8u)) return;
    // 808F1CB8: b       0x808F1D10
    {
            goto label_808F1D10;
    }

label_808F1CBC:
    ctx->pc = 0x808F1CBCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 19u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1CBCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 19u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 808F1CBC: lha     r3, 4(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(4);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1CC0:
    ctx->pc = 0x808F1CC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1CC0u)) return;
    // 808F1CC0: fmr    f3, f29
    if (!ppc_fp_available_inline(ctx, 0x808F1CC0u)) return;
    ctx->fpr[3] = ctx->fpr[29];

label_808F1CC4:
    ctx->pc = 0x808F1CC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1CC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 808F1CC4: lha     r0, 2(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(2);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1CC8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1CC8u)) return;
    // 808F1CC8: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_808F1CCC:
    ctx->pc = 0x808F1CCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1CCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 808F1CCC: stw     r24, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[24]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1CD0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1CD0u)) return;
    // 808F1CD0: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_808F1CD4:
    ctx->pc = 0x808F1CD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1CD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 808F1CD4: lfs     f5, 48(r29)
    if (!ppc_fp_available_inline(ctx, 0x808F1CD4u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
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
label_808F1CD8:
    ctx->pc = 0x808F1CD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1CD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 808F1CD8: stw     r3, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1CDC:
    ctx->pc = 0x808F1CDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1CDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 808F1CDC: lfs     f4, 44(r29)
    if (!ppc_fp_available_inline(ctx, 0x808F1CDCu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(44);
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
label_808F1CE0:
    ctx->pc = 0x808F1CE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1CE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 808F1CE0: lfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x808F1CE0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1CE4:
    ctx->pc = 0x808F1CE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1CE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 808F1CE4: stw     r0, 28(r1)
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
label_808F1CE8:
    ctx->pc = 0x808F1CE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1CE8u)) return;
    // 808F1CE8: fsubs   f1, f0, f28
    if (!ppc_fp_available_inline(ctx, 0x808F1CE8u)) return;
    ppc_fsubs(ctx, 1, 0, 28);

label_808F1CEC:
    ctx->pc = 0x808F1CECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1CECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 808F1CEC: lha     r3, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1CF0:
    ctx->pc = 0x808F1CF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1CF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 808F1CF0: stw     r24, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[24]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1CF4:
    ctx->pc = 0x808F1CF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1CF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 808F1CF4: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x808F1CF4u)) return;
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
label_808F1CF8:
    ctx->pc = 0x808F1CF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1CF8u)) return;
    // 808F1CF8: fmadds f2, f1, f5, f30
    if (!ppc_fp_available_inline(ctx, 0x808F1CF8u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[1], ctx->fpr[5], ctx->fpr[30], true, false, false, &result))
            ctx->fpr[2] = ctx->ps1[2] = result;
    }

label_808F1CFC:
    ctx->pc = 0x808F1CFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1CFCu)) return;
    // 808F1CFC: fsubs   f0, f0, f28
    if (!ppc_fp_available_inline(ctx, 0x808F1CFCu)) return;
    ppc_fsubs(ctx, 0, 0, 28);

label_808F1D00:
    ctx->pc = 0x808F1D00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1D00u)) return;
    // 808F1D00: fmadds f1, f0, f4, f31
    if (!ppc_fp_available_inline(ctx, 0x808F1D00u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[0], ctx->fpr[4], ctx->fpr[31], true, false, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_808F1D04:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1D04u)) return;
    // 808F1D04: bl      0x804E8B28
    {
            ctx->lr = 0x808F1D08u;
            ctx->pc = 0x804E8B28u;
            return;
    }

label_808F1D08:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1D08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F1D08: addi    r25, r25, 6
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(6);

label_808F1D0C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1D0Cu)) return;
    // 808F1D0C: addi    r23, r23, 1
    ctx->gpr[23] = ctx->gpr[23] + (u32)(s32)(1);

label_808F1D10:
    ctx->pc = 0x808F1D10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1D10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F1D10: lha     r0, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1D14:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1D14u)) return;
    // 808F1D14: cmpw    r23, r0
    {
        s32 val_a = (s32)(ctx->gpr[23]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_808F1D18:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1D18u)) return;
    // 808F1D18: bc    12, 0, 0x808F1CBC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x808F1CBCu;
                return;
            }
            goto label_808F1CBC;
        }
    }

label_808F1D1C:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1D1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 808F1D1C: b       0x808F1DAC
    {
            goto label_808F1DAC;
    }

label_808F1D20:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1D20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    // 808F1D20: lis     r4, -27903
    ctx->gpr[4] = ((u32)(s32)(-27903) << 16);

label_808F1D24:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1D24u)) return;
    // 808F1D24: lis     r3, -27903
    ctx->gpr[3] = ((u32)(s32)(-27903) << 16);

label_808F1D28:
    ctx->pc = 0x808F1D28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1D28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 808F1D28: lfs     f0, 31388(r4)
    if (!ppc_fp_available_inline(ctx, 0x808F1D28u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(31388);
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
label_808F1D2C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1D2Cu)) return;
    // 808F1D2C: addi    r24, r26, 2
    ctx->gpr[24] = ctx->gpr[26] + (u32)(s32)(2);

label_808F1D30:
    ctx->pc = 0x808F1D30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1D30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 808F1D30: lfs     f25, 48(r29)
    if (!ppc_fp_available_inline(ctx, 0x808F1D30u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
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
label_808F1D34:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1D34u)) return;
    // 808F1D34: li      r23, 0
    ctx->gpr[23] = (u32)(s32)(0);

label_808F1D38:
    ctx->pc = 0x808F1D38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1D38u)) return;
    // 808F1D38: fsubs   f27, f29, f0
    if (!ppc_fp_available_inline(ctx, 0x808F1D38u)) return;
    ppc_fsubs(ctx, 27, 29, 0);

label_808F1D3C:
    ctx->pc = 0x808F1D3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1D3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 808F1D3C: lfs     f26, 44(r29)
    if (!ppc_fp_available_inline(ctx, 0x808F1D3Cu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(44);
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
label_808F1D40:
    ctx->pc = 0x808F1D40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1D40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F1D40: lfd     f28, 31328(r3)
    if (!ppc_fp_available_inline(ctx, 0x808F1D40u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(31328);
        ctx->fpr[28] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1D44:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1D44u)) return;
    // 808F1D44: lis     r25, 17200
    ctx->gpr[25] = ((u32)(s32)(17200) << 16);

label_808F1D48:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1D48u)) return;
    // 808F1D48: b       0x808F1DA0
    {
            goto label_808F1DA0;
    }

label_808F1D4C:
    ctx->pc = 0x808F1D4Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 19u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1D4Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 19u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 808F1D4C: lha     r3, 2(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(2);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1D50:
    ctx->pc = 0x808F1D50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1D50u)) return;
    // 808F1D50: fmr    f3, f27
    if (!ppc_fp_available_inline(ctx, 0x808F1D50u)) return;
    ctx->fpr[3] = ctx->fpr[27];

label_808F1D54:
    ctx->pc = 0x808F1D54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1D54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 808F1D54: lha     r0, 4(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(4);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1D58:
    ctx->pc = 0x808F1D58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1D58u)) return;
    // 808F1D58: fmr    f4, f26
    if (!ppc_fp_available_inline(ctx, 0x808F1D58u)) return;
    ctx->fpr[4] = ctx->fpr[26];

label_808F1D5C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1D5Cu)) return;
    // 808F1D5C: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_808F1D60:
    ctx->pc = 0x808F1D60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1D60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 808F1D60: stw     r25, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[25]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1D64:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1D64u)) return;
    // 808F1D64: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_808F1D68:
    ctx->pc = 0x808F1D68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1D68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 808F1D68: stw     r3, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1D6C:
    ctx->pc = 0x808F1D6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1D6Cu)) return;
    // 808F1D6C: fmr    f5, f25
    if (!ppc_fp_available_inline(ctx, 0x808F1D6Cu)) return;
    ctx->fpr[5] = ctx->fpr[25];

label_808F1D70:
    ctx->pc = 0x808F1D70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1D70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 808F1D70: lha     r3, 0(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(0);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1D74:
    ctx->pc = 0x808F1D74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1D74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 808F1D74: lfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x808F1D74u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1D78:
    ctx->pc = 0x808F1D78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1D78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 808F1D78: stw     r0, 28(r1)
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
label_808F1D7C:
    ctx->pc = 0x808F1D7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1D7Cu)) return;
    // 808F1D7C: fsubs   f1, f0, f28
    if (!ppc_fp_available_inline(ctx, 0x808F1D7Cu)) return;
    ppc_fsubs(ctx, 1, 0, 28);

label_808F1D80:
    ctx->pc = 0x808F1D80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1D80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 808F1D80: stw     r25, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[25]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1D84:
    ctx->pc = 0x808F1D84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1D84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 808F1D84: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x808F1D84u)) return;
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
label_808F1D88:
    ctx->pc = 0x808F1D88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1D88u)) return;
    // 808F1D88: fmadds f1, f1, f26, f31
    if (!ppc_fp_available_inline(ctx, 0x808F1D88u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[1], ctx->fpr[26], ctx->fpr[31], true, false, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_808F1D8C:
    ctx->pc = 0x808F1D8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1D8Cu)) return;
    // 808F1D8C: fsubs   f0, f0, f28
    if (!ppc_fp_available_inline(ctx, 0x808F1D8Cu)) return;
    ppc_fsubs(ctx, 0, 0, 28);

label_808F1D90:
    ctx->pc = 0x808F1D90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1D90u)) return;
    // 808F1D90: fmadds f2, f0, f25, f30
    if (!ppc_fp_available_inline(ctx, 0x808F1D90u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[0], ctx->fpr[25], ctx->fpr[30], true, false, false, &result))
            ctx->fpr[2] = ctx->ps1[2] = result;
    }

label_808F1D94:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1D94u)) return;
    // 808F1D94: bl      0x804E8B28
    {
            ctx->lr = 0x808F1D98u;
            ctx->pc = 0x804E8B28u;
            return;
    }

label_808F1D98:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1D98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F1D98: addi    r24, r24, 6
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(6);

label_808F1D9C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1D9Cu)) return;
    // 808F1D9C: addi    r23, r23, 1
    ctx->gpr[23] = ctx->gpr[23] + (u32)(s32)(1);

label_808F1DA0:
    ctx->pc = 0x808F1DA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1DA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F1DA0: lha     r0, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1DA4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1DA4u)) return;
    // 808F1DA4: cmpw    r23, r0
    {
        s32 val_a = (s32)(ctx->gpr[23]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_808F1DA8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1DA8u)) return;
    // 808F1DA8: bc    12, 0, 0x808F1D4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x808F1D4Cu;
                return;
            }
            goto label_808F1D4C;
        }
    }

label_808F1DAC:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1DACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 808F1DAC: addi    r27, r27, 1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(1);

label_808F1DB0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1DB0u)) return;
    // 808F1DB0: addi    r30, r30, 4
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(4);

label_808F1DB4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1DB4u)) return;
    // 808F1DB4: cmpwi   r27, 2
    {
        s32 val_a = (s32)(ctx->gpr[27]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_808F1DB8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1DB8u)) return;
    // 808F1DB8: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_808F1DBC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1DBCu)) return;
    // 808F1DBC: bc    12, 0, 0x808F1BC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x808F1BC4u;
                return;
            }
            goto label_808F1BC4;
        }
    }

label_808F1DC0:
    ctx->pc = 0x808F1DC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 30u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1DC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 30u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 808F1DC0: psq_l   f31, 184(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x808F1DC0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x808F1DC0u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1DC4:
    ctx->pc = 0x808F1DC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1DC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 808F1DC4: lfd     f31, 176(r1)
    if (!ppc_fp_available_inline(ctx, 0x808F1DC4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1DC8:
    ctx->pc = 0x808F1DC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1DC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 808F1DC8: psq_l   f30, 168(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x808F1DC8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x808F1DC8u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1DCC:
    ctx->pc = 0x808F1DCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1DCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 808F1DCC: lfd     f30, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x808F1DCCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1DD0:
    ctx->pc = 0x808F1DD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1DD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 808F1DD0: psq_l   f29, 152(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x808F1DD0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x808F1DD0u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1DD4:
    ctx->pc = 0x808F1DD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1DD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 808F1DD4: lfd     f29, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x808F1DD4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1DD8:
    ctx->pc = 0x808F1DD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1DD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 808F1DD8: psq_l   f28, 136(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x808F1DD8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x808F1DD8u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1DDC:
    ctx->pc = 0x808F1DDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1DDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 808F1DDC: lfd     f28, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x808F1DDCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        ctx->fpr[28] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1DE0:
    ctx->pc = 0x808F1DE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1DE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 808F1DE0: psq_l   f27, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x808F1DE0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_load_inline(ctx, 27u, ea, false, 0u, false, 0x808F1DE0u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1DE4:
    ctx->pc = 0x808F1DE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1DE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 808F1DE4: lfd     f27, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x808F1DE4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        ctx->fpr[27] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1DE8:
    ctx->pc = 0x808F1DE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1DE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 808F1DE8: psq_l   f26, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x808F1DE8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_load_inline(ctx, 26u, ea, false, 0u, false, 0x808F1DE8u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1DEC:
    ctx->pc = 0x808F1DECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1DECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 808F1DEC: lfd     f26, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x808F1DECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->fpr[26] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1DF0:
    ctx->pc = 0x808F1DF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1DF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 808F1DF0: psq_l   f25, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x808F1DF0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 25u, ea, false, 0u, false, 0x808F1DF0u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1DF4:
    ctx->pc = 0x808F1DF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1DF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 808F1DF4: lfd     f25, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x808F1DF4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->fpr[25] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1DF8:
    ctx->pc = 0x808F1DF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 11u, 0x808F1DF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 808F1DF8: lmw     r23, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        for (u32 r = 23; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1DFC:
    ctx->pc = 0x808F1DFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1DFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 808F1DFC: lwz     r0, 196(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(196);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1E00:
    ctx->pc = 0x808F1E00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x808F1E00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F1E00: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1E04:
    ctx->pc = 0x808F1E04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1E04u)) return;
    // 808F1E04: addi    r1, r1, 192
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(192);

label_808F1E08:
    ctx->pc = 0x808F1E08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1E08u)) return;
    // 808F1E08: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_808F1060;
        }
    }

label_808F1E0C:
    ctx->pc = 0x808F1E0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 31u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1E0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 31u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 30u : 0u;
    // 808F1E0C: stwu     r1, -144(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-144);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1E10:
    ctx->pc = 0x808F1E10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1E10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 808F1E10: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1E14:
    ctx->pc = 0x808F1E14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1E14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 808F1E14: stw     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1E18:
    ctx->pc = 0x808F1E18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1E18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 808F1E18: stfd     f31, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x808F1E18u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1E1C:
    ctx->pc = 0x808F1E1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1E1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 808F1E1C: psq_st   f31, 136(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x808F1E1Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x808F1E1Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1E20:
    ctx->pc = 0x808F1E20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1E20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 808F1E20: stfd     f30, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x808F1E20u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1E24:
    ctx->pc = 0x808F1E24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1E24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 808F1E24: psq_st   f30, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x808F1E24u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x808F1E24u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1E28:
    ctx->pc = 0x808F1E28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1E28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 808F1E28: stfd     f29, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x808F1E28u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1E2C:
    ctx->pc = 0x808F1E2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1E2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 808F1E2C: psq_st   f29, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x808F1E2Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x808F1E2Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1E30:
    ctx->pc = 0x808F1E30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1E30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 808F1E30: stfd     f28, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x808F1E30u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[28]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1E34:
    ctx->pc = 0x808F1E34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1E34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 808F1E34: psq_st   f28, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x808F1E34u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x808F1E34u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1E38:
    ctx->pc = 0x808F1E38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1E38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 808F1E38: stfd     f27, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x808F1E38u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[27]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1E3C:
    ctx->pc = 0x808F1E3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1E3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 808F1E3C: psq_st   f27, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x808F1E3Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_store_inline(ctx, 27u, ea, false, 0u, false, 0x808F1E3Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1E40:
    ctx->pc = 0x808F1E40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1E40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 808F1E40: stfd     f26, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x808F1E40u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[26]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1E44:
    ctx->pc = 0x808F1E44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1E44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 808F1E44: psq_st   f26, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x808F1E44u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 26u, ea, false, 0u, false, 0x808F1E44u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1E48:
    ctx->pc = 0x808F1E48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1E48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 808F1E48: stw     r31, 44(r1)
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
label_808F1E4C:
    ctx->pc = 0x808F1E4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1E4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 808F1E4C: stw     r30, 40(r1)
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
label_808F1E50:
    ctx->pc = 0x808F1E50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1E50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 808F1E50: stw     r29, 36(r1)
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
label_808F1E54:
    ctx->pc = 0x808F1E54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1E54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 808F1E54: stw     r28, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1E58:
    ctx->pc = 0x808F1E58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1E58u)) return;
    // 808F1E58: lis     r4, -27903
    ctx->gpr[4] = ((u32)(s32)(-27903) << 16);

label_808F1E5C:
    ctx->pc = 0x808F1E5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1E5Cu)) return;
    // 808F1E5C: fmr    f26, f1
    if (!ppc_fp_available_inline(ctx, 0x808F1E5Cu)) return;
    ctx->fpr[26] = ctx->fpr[1];

label_808F1E60:
    ctx->pc = 0x808F1E60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1E60u)) return;
    // 808F1E60: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_808F1E64:
    ctx->pc = 0x808F1E64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1E64u)) return;
    // 808F1E64: fmr    f27, f2
    if (!ppc_fp_available_inline(ctx, 0x808F1E64u)) return;
    ctx->fpr[27] = ctx->fpr[2];

label_808F1E68:
    ctx->pc = 0x808F1E68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1E68u)) return;
    // 808F1E68: fmr    f28, f3
    if (!ppc_fp_available_inline(ctx, 0x808F1E68u)) return;
    ctx->fpr[28] = ctx->fpr[3];

label_808F1E6C:
    ctx->pc = 0x808F1E6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1E6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 808F1E6C: lfd     f31, 31328(r4)
    if (!ppc_fp_available_inline(ctx, 0x808F1E6Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(31328);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1E70:
    ctx->pc = 0x808F1E70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1E70u)) return;
    // 808F1E70: fmr    f29, f4
    if (!ppc_fp_available_inline(ctx, 0x808F1E70u)) return;
    ctx->fpr[29] = ctx->fpr[4];

label_808F1E74:
    ctx->pc = 0x808F1E74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1E74u)) return;
    // 808F1E74: fmr    f30, f5
    if (!ppc_fp_available_inline(ctx, 0x808F1E74u)) return;
    ctx->fpr[30] = ctx->fpr[5];

label_808F1E78:
    ctx->pc = 0x808F1E78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1E78u)) return;
    // 808F1E78: addi    r29, r28, 2
    ctx->gpr[29] = ctx->gpr[28] + (u32)(s32)(2);

label_808F1E7C:
    ctx->pc = 0x808F1E7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1E7Cu)) return;
    // 808F1E7C: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_808F1E80:
    ctx->pc = 0x808F1E80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1E80u)) return;
    // 808F1E80: lis     r31, 17200
    ctx->gpr[31] = ((u32)(s32)(17200) << 16);

label_808F1E84:
    ctx->pc = 0x808F1E84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1E84u)) return;
    // 808F1E84: b       0x808F1EDC
    {
            goto label_808F1EDC;
    }

label_808F1E88:
    ctx->pc = 0x808F1E88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 19u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1E88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 19u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 808F1E88: lha     r3, 2(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1E8C:
    ctx->pc = 0x808F1E8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1E8Cu)) return;
    // 808F1E8C: fmr    f3, f28
    if (!ppc_fp_available_inline(ctx, 0x808F1E8Cu)) return;
    ctx->fpr[3] = ctx->fpr[28];

label_808F1E90:
    ctx->pc = 0x808F1E90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1E90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 808F1E90: lha     r0, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1E94:
    ctx->pc = 0x808F1E94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1E94u)) return;
    // 808F1E94: fmr    f4, f29
    if (!ppc_fp_available_inline(ctx, 0x808F1E94u)) return;
    ctx->fpr[4] = ctx->fpr[29];

label_808F1E98:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1E98u)) return;
    // 808F1E98: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_808F1E9C:
    ctx->pc = 0x808F1E9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1E9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 808F1E9C: stw     r31, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1EA0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1EA0u)) return;
    // 808F1EA0: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_808F1EA4:
    ctx->pc = 0x808F1EA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1EA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 808F1EA4: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1EA8:
    ctx->pc = 0x808F1EA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1EA8u)) return;
    // 808F1EA8: fmr    f5, f30
    if (!ppc_fp_available_inline(ctx, 0x808F1EA8u)) return;
    ctx->fpr[5] = ctx->fpr[30];

label_808F1EAC:
    ctx->pc = 0x808F1EACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1EACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 808F1EAC: lha     r3, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1EB0:
    ctx->pc = 0x808F1EB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1EB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 808F1EB0: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x808F1EB0u)) return;
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
label_808F1EB4:
    ctx->pc = 0x808F1EB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1EB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 808F1EB4: stw     r0, 20(r1)
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
label_808F1EB8:
    ctx->pc = 0x808F1EB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1EB8u)) return;
    // 808F1EB8: fsubs   f1, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x808F1EB8u)) return;
    ppc_fsubs(ctx, 1, 0, 31);

label_808F1EBC:
    ctx->pc = 0x808F1EBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1EBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 808F1EBC: stw     r31, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1EC0:
    ctx->pc = 0x808F1EC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1EC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 808F1EC0: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x808F1EC0u)) return;
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
label_808F1EC4:
    ctx->pc = 0x808F1EC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1EC4u)) return;
    // 808F1EC4: fmadds f1, f1, f29, f26
    if (!ppc_fp_available_inline(ctx, 0x808F1EC4u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[1], ctx->fpr[29], ctx->fpr[26], true, false, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_808F1EC8:
    ctx->pc = 0x808F1EC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1EC8u)) return;
    // 808F1EC8: fsubs   f0, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x808F1EC8u)) return;
    ppc_fsubs(ctx, 0, 0, 31);

label_808F1ECC:
    ctx->pc = 0x808F1ECCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1ECCu)) return;
    // 808F1ECC: fmadds f2, f0, f30, f27
    if (!ppc_fp_available_inline(ctx, 0x808F1ECCu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[0], ctx->fpr[30], ctx->fpr[27], true, false, false, &result))
            ctx->fpr[2] = ctx->ps1[2] = result;
    }

label_808F1ED0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1ED0u)) return;
    // 808F1ED0: bl      0x804E8B28
    {
            ctx->lr = 0x808F1ED4u;
            ctx->pc = 0x804E8B28u;
            return;
    }

label_808F1ED4:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1ED4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F1ED4: addi    r29, r29, 6
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(6);

label_808F1ED8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1ED8u)) return;
    // 808F1ED8: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_808F1EDC:
    ctx->pc = 0x808F1EDCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1EDCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F1EDC: lha     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1EE0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1EE0u)) return;
    // 808F1EE0: cmpw    r30, r0
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_808F1EE4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1EE4u)) return;
    // 808F1EE4: bc    12, 0, 0x808F1E88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x808F1E88u;
                return;
            }
            goto label_808F1E88;
        }
    }

label_808F1EE8:
    ctx->pc = 0x808F1EE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 21u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1EE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 21u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 808F1EE8: psq_l   f31, 136(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x808F1EE8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x808F1EE8u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1EEC:
    ctx->pc = 0x808F1EECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1EECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 808F1EEC: lfd     f31, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x808F1EECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1EF0:
    ctx->pc = 0x808F1EF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1EF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 808F1EF0: psq_l   f30, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x808F1EF0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x808F1EF0u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1EF4:
    ctx->pc = 0x808F1EF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1EF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 808F1EF4: lfd     f30, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x808F1EF4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1EF8:
    ctx->pc = 0x808F1EF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1EF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 808F1EF8: psq_l   f29, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x808F1EF8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x808F1EF8u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1EFC:
    ctx->pc = 0x808F1EFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1EFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 808F1EFC: lfd     f29, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x808F1EFCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1F00:
    ctx->pc = 0x808F1F00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1F00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 808F1F00: psq_l   f28, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x808F1F00u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x808F1F00u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1F04:
    ctx->pc = 0x808F1F04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1F04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 808F1F04: lfd     f28, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x808F1F04u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->fpr[28] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1F08:
    ctx->pc = 0x808F1F08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1F08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 808F1F08: psq_l   f27, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x808F1F08u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 27u, ea, false, 0u, false, 0x808F1F08u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1F0C:
    ctx->pc = 0x808F1F0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1F0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 808F1F0C: lfd     f27, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x808F1F0Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->fpr[27] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1F10:
    ctx->pc = 0x808F1F10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1F10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 808F1F10: psq_l   f26, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x808F1F10u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 26u, ea, false, 0u, false, 0x808F1F10u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1F14:
    ctx->pc = 0x808F1F14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1F14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 808F1F14: lfd     f26, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x808F1F14u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[26] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1F18:
    ctx->pc = 0x808F1F18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1F18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 808F1F18: lwz     r31, 44(r1)
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
label_808F1F1C:
    ctx->pc = 0x808F1F1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1F1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 808F1F1C: lwz     r30, 40(r1)
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
label_808F1F20:
    ctx->pc = 0x808F1F20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1F20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 808F1F20: lwz     r29, 36(r1)
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
label_808F1F24:
    ctx->pc = 0x808F1F24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1F24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 808F1F24: lwz     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1F28:
    ctx->pc = 0x808F1F28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1F28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 808F1F28: lwz     r28, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1F2C:
    ctx->pc = 0x808F1F2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x808F1F2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F1F2C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1F30:
    ctx->pc = 0x808F1F30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1F30u)) return;
    // 808F1F30: addi    r1, r1, 144
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(144);

label_808F1F34:
    ctx->pc = 0x808F1F34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1F34u)) return;
    // 808F1F34: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_808F1060;
        }
    }

label_808F1F38:
    ctx->pc = 0x808F1F38u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 19u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1F38u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 19u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 808F1F38: stwu     r1, -64(r1)
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
label_808F1F3C:
    ctx->pc = 0x808F1F3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1F3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 808F1F3C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1F40:
    ctx->pc = 0x808F1F40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1F40u)) return;
    // 808F1F40: lis     r4, -28629
    ctx->gpr[4] = ((u32)(s32)(-28629) << 16);

label_808F1F44:
    ctx->pc = 0x808F1F44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1F44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 808F1F44: stw     r0, 68(r1)
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
label_808F1F48:
    ctx->pc = 0x808F1F48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1F48u)) return;
    // 808F1F48: addi    r4, r4, 44
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(44);

label_808F1F4C:
    ctx->pc = 0x808F1F4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 11u, 0x808F1F4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 808F1F4C: stmw     r25, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        for (u32 r = 25; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1F50:
    ctx->pc = 0x808F1F50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1F50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F1F50: lbz     r0, 10(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(10);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1F54:
    ctx->pc = 0x808F1F54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1F54u)) return;
    // 808F1F54: cmplwi  r0, 0x0002
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0002u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_808F1F58:
    ctx->pc = 0x808F1F58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1F58u)) return;
    // 808F1F58: bc    4, 2, 0x808F1F74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_808F1F74;
        }
    }

label_808F1F5C:
    ctx->pc = 0x808F1F5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1F5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 808F1F5C: lis     r3, -27900
    ctx->gpr[3] = ((u32)(s32)(-27900) << 16);

label_808F1F60:
    ctx->pc = 0x808F1F60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1F60u)) return;
    // 808F1F60: addi    r3, r3, -2684
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-2684);

label_808F1F64:
    ctx->pc = 0x808F1F64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1F64u)) return;
    // 808F1F64: addic.  r0, r3, 40
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(40);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_808F1F68:
    ctx->pc = 0x808F1F68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1F68u)) return;
    // 808F1F68: bc    12, 2, 0x808F1FF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_808F1FF0;
        }
    }

label_808F1F6C:
    ctx->pc = 0x808F1F6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1F6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 808F1F6C: bl      0x80486030
    {
            ctx->lr = 0x808F1F70u;
            ctx->pc = 0x80486030u;
            return;
    }

label_808F1F70:
    ctx->pc = 0x808F1F70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1F70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 808F1F70: b       0x808F1FF0
    {
            goto label_808F1FF0;
    }

label_808F1F74:
    ctx->pc = 0x808F1F74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1F74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 3u;
    // 808F1F74: mulli   r26, r3, 24
    ctx->gpr[26] = (u32)((s64)(s32)ctx->gpr[3] * (s64)(s32)24);

label_808F1F78:
    ctx->pc = 0x808F1F78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1F78u)) return;
    // 808F1F78: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_808F1F7C:
    ctx->pc = 0x808F1F7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1F7Cu)) return;
    // 808F1F7C: lis     r3, -27900
    ctx->gpr[3] = ((u32)(s32)(-27900) << 16);

label_808F1F80:
    ctx->pc = 0x808F1F80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1F80u)) return;
    // 808F1F80: addi    r28, r1, 16
    ctx->gpr[28] = ctx->gpr[1] + (u32)(s32)(16);

label_808F1F84:
    ctx->pc = 0x808F1F84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1F84u)) return;
    // 808F1F84: addi    r27, r1, 8
    ctx->gpr[27] = ctx->gpr[1] + (u32)(s32)(8);

label_808F1F88:
    ctx->pc = 0x808F1F88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1F88u)) return;
    // 808F1F88: addi    r30, r4, -5392
    ctx->gpr[30] = ctx->gpr[4] + (u32)(s32)(-5392);

label_808F1F8C:
    ctx->pc = 0x808F1F8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1F8Cu)) return;
    // 808F1F8C: addi    r31, r3, -9204
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(-9204);

label_808F1F90:
    ctx->pc = 0x808F1F90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1F90u)) return;
    // 808F1F90: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_808F1F94:
    ctx->pc = 0x808F1F94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1F94u)) return;
    // 808F1F94: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_808F1F98:
    ctx->pc = 0x808F1F98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1F98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 808F1F98: lwz     r0, 0(r30)
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
label_808F1F9C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1F9Cu)) return;
    // 808F1F9C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_808F1FA0:
    ctx->pc = 0x808F1FA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1FA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 808F1FA0: lwzx    r0, r31, r0
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1FA4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1FA4u)) return;
    // 808F1FA4: add   r3, r0, r29
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[29];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_808F1FA8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1FA8u)) return;
    // 808F1FA8: add   r3, r26, r3
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_808F1FAC:
    ctx->pc = 0x808F1FACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1FACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 808F1FAC: lwz     r0, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1FB0:
    ctx->pc = 0x808F1FB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1FB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 808F1FB0: lwz     r3, 8(r3)
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
label_808F1FB4:
    ctx->pc = 0x808F1FB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1FB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 808F1FB4: stw     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1FB8:
    ctx->pc = 0x808F1FB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1FB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 808F1FB8: lwz     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1FBC:
    ctx->pc = 0x808F1FBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1FBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F1FBC: stw     r3, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1FC0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1FC0u)) return;
    // 808F1FC0: cmplwi  r0, 0x0000
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

label_808F1FC4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1FC4u)) return;
    // 808F1FC4: bc    12, 2, 0x808F1FD8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_808F1FD8;
        }
    }

label_808F1FC8:
    ctx->pc = 0x808F1FC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1FC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F1FC8: lwz     r3, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1FCC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1FCCu)) return;
    // 808F1FCC: cmplwi  r3, 0x0000
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

label_808F1FD0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1FD0u)) return;
    // 808F1FD0: bc    12, 2, 0x808F1FD8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_808F1FD8;
        }
    }

label_808F1FD4:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1FD4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 808F1FD4: bl      0x8060F2FC
    {
            ctx->lr = 0x808F1FD8u;
            ctx->pc = 0x8060F2FCu;
            return;
    }

label_808F1FD8:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1FD8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 808F1FD8: addi    r25, r25, 1
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(1);

label_808F1FDC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1FDCu)) return;
    // 808F1FDC: addi    r28, r28, 4
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(4);

label_808F1FE0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1FE0u)) return;
    // 808F1FE0: cmpwi   r25, 2
    {
        s32 val_a = (s32)(ctx->gpr[25]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_808F1FE4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1FE4u)) return;
    // 808F1FE4: addi    r27, r27, 4
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(4);

label_808F1FE8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1FE8u)) return;
    // 808F1FE8: addi    r29, r29, 4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4);

label_808F1FEC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1FECu)) return;
    // 808F1FEC: bc    12, 0, 0x808F1F98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x808F1F98u;
                return;
            }
            goto label_808F1F98;
        }
    }

label_808F1FF0:
    ctx->pc = 0x808F1FF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F1FF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 11u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 808F1FF0: lmw     r25, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        for (u32 r = 25; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1FF4:
    ctx->pc = 0x808F1FF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1FF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 808F1FF4: lwz     r0, 68(r1)
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
label_808F1FF8:
    ctx->pc = 0x808F1FF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x808F1FF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F1FF8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F1FFC:
    ctx->pc = 0x808F1FFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F1FFCu)) return;
    // 808F1FFC: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_808F2000:
    ctx->pc = 0x808F2000u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2000u)) return;
    // 808F2000: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_808F1060;
        }
    }

label_808F2004:
    ctx->pc = 0x808F2004u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 21u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2004u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 21u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 808F2004: stwu     r1, -128(r1)
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
label_808F2008:
    ctx->pc = 0x808F2008u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2008u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 808F2008: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F200C:
    ctx->pc = 0x808F200Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F200Cu)) return;
    // 808F200C: lis     r4, -28629
    ctx->gpr[4] = ((u32)(s32)(-28629) << 16);

label_808F2010:
    ctx->pc = 0x808F2010u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2010u)) return;
    // 808F2010: lis     r5, -27900
    ctx->gpr[5] = ((u32)(s32)(-27900) << 16);

label_808F2014:
    ctx->pc = 0x808F2014u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2014u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 808F2014: stw     r0, 132(r1)
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
label_808F2018:
    ctx->pc = 0x808F2018u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2018u)) return;
    // 808F2018: addi    r4, r4, 44
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(44);

label_808F201C:
    ctx->pc = 0x808F201Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 11u, 0x808F201Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 808F201C: stmw     r25, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        for (u32 r = 25; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2020:
    ctx->pc = 0x808F2020u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2020u)) return;
    // 808F2020: addi    r31, r5, -2784
    ctx->gpr[31] = ctx->gpr[5] + (u32)(s32)(-2784);

label_808F2024:
    ctx->pc = 0x808F2024u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2024u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F2024: lbz     r0, 10(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(10);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2028:
    ctx->pc = 0x808F2028u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2028u)) return;
    // 808F2028: cmplwi  r0, 0x0002
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0002u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_808F202C:
    ctx->pc = 0x808F202Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F202Cu)) return;
    // 808F202C: bc    4, 2, 0x808F21C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_808F21C0;
        }
    }

label_808F2030:
    ctx->pc = 0x808F2030u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2030u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 808F2030: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_808F2034:
    ctx->pc = 0x808F2034u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2034u)) return;
    // 808F2034: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_808F2038:
    ctx->pc = 0x808F2038u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2038u)) return;
    // 808F2038: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_808F203C:
    ctx->pc = 0x808F203Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F203Cu)) return;
    // 808F203C: li      r6, 432
    ctx->gpr[6] = (u32)(s32)(432);

label_808F2040:
    ctx->pc = 0x808F2040u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2040u)) return;
    // 808F2040: li      r7, 144
    ctx->gpr[7] = (u32)(s32)(144);

label_808F2044:
    ctx->pc = 0x808F2044u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2044u)) return;
    // 808F2044: li      r8, -256
    ctx->gpr[8] = (u32)(s32)(-256);

label_808F2048:
    ctx->pc = 0x808F2048u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2048u)) return;
    // 808F2048: bl      0x804861C0
    {
            ctx->lr = 0x808F204Cu;
            ctx->pc = 0x804861C0u;
            return;
    }

label_808F204C:
    ctx->pc = 0x808F204Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 14u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F204Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 14u : 1u;
    // 808F204C: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_808F2050:
    ctx->pc = 0x808F2050u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2050u)) return;
    // 808F2050: lis     r3, -27900
    ctx->gpr[3] = ((u32)(s32)(-27900) << 16);

label_808F2054:
    ctx->pc = 0x808F2054u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2054u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 808F2054: lwz     r0, -5392(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-5392);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2058:
    ctx->pc = 0x808F2058u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2058u)) return;
    // 808F2058: addi    r6, r31, 100
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(100);

label_808F205C:
    ctx->pc = 0x808F205Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F205Cu)) return;
    // 808F205C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_808F2060:
    ctx->pc = 0x808F2060u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2060u)) return;
    // 808F2060: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_808F2064:
    ctx->pc = 0x808F2064u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2064u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 808F2064: sth     r4, 22(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(22);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2068:
    ctx->pc = 0x808F2068u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2068u)) return;
    // 808F2068: rlwinm r4, r0, 3, 0, 28
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 3u) & 0xFFFFFFF8u;
    }

label_808F206C:
    ctx->pc = 0x808F206Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F206Cu)) return;
    // 808F206C: addi    r0, r3, -6924
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-6924);

label_808F2070:
    ctx->pc = 0x808F2070u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2070u)) return;
    // 808F2070: addi    r3, r31, 308
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(308);

label_808F2074:
    ctx->pc = 0x808F2074u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2074u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 808F2074: sth     r5, 24(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(24);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2078:
    ctx->pc = 0x808F2078u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2078u)) return;
    // 808F2078: add   r4, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_808F207C:
    ctx->pc = 0x808F207Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F207Cu)) return;
    // 808F207C: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_808F2080:
    ctx->pc = 0x808F2080u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2080u)) return;
    // 808F2080: bl      0x800031E8
    {
            ctx->lr = 0x808F2084u;
            ctx->pc = 0x800031E8u;
            return;
    }

label_808F2084:
    ctx->pc = 0x808F2084u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 79u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2084u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 79u : 1u;
    // 808F2084: addi    r4, r31, 100
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(100);

label_808F2088:
    ctx->pc = 0x808F2088u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2088u)) return;
    // 808F2088: lis     r6, 17200
    ctx->gpr[6] = ((u32)(s32)(17200) << 16);

label_808F208C:
    ctx->pc = 0x808F208Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F208Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 76u : 0u;
    // 808F208C: lha     r10, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[10] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2090:
    ctx->pc = 0x808F2090u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2090u)) return;
    // 808F2090: lis     r3, -27903
    ctx->gpr[3] = ((u32)(s32)(-27903) << 16);

label_808F2094:
    ctx->pc = 0x808F2094u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2094u)) return;
    // 808F2094: addi    r8, r3, 31328
    ctx->gpr[8] = ctx->gpr[3] + (u32)(s32)(31328);

label_808F2098:
    ctx->pc = 0x808F2098u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2098u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 73u : 0u;
    // 808F2098: lha     r9, 2(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2);
        ctx->gpr[9] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F209C:
    ctx->pc = 0x808F209Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F209Cu)) return;
    // 808F209C: xoris   r5, r10, 0x8000
    ctx->gpr[5] = ctx->gpr[10] ^ (0x8000u << 16);

label_808F20A0:
    ctx->pc = 0x808F20A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F20A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 71u : 0u;
    // 808F20A0: lhz     r3, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F20A4:
    ctx->pc = 0x808F20A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F20A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 70u : 0u;
    // 808F20A4: stw     r5, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F20A8:
    ctx->pc = 0x808F20A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F20A8u)) return;
    // 808F20A8: xoris   r7, r9, 0x8000
    ctx->gpr[7] = ctx->gpr[9] ^ (0x8000u << 16);

label_808F20AC:
    ctx->pc = 0x808F20ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F20ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 68u : 0u;
    // 808F20AC: lhz     r0, 10(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(10);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F20B0:
    ctx->pc = 0x808F20B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F20B0u)) return;
    // 808F20B0: add   r3, r10, r3
    {
        u32 a = ctx->gpr[10];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_808F20B4:
    ctx->pc = 0x808F20B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F20B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 66u : 0u;
    // 808F20B4: stw     r6, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F20B8:
    ctx->pc = 0x808F20B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F20B8u)) return;
    // 808F20B8: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_808F20BC:
    ctx->pc = 0x808F20BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F20BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 64u : 0u;
    // 808F20BC: lfd     f9, 0(r8)
    if (!ppc_fp_available_inline(ctx, 0x808F20BCu)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->fpr[9] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F20C0:
    ctx->pc = 0x808F20C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F20C0u)) return;
    // 808F20C0: add   r0, r9, r0
    {
        u32 a = ctx->gpr[9];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_808F20C4:
    ctx->pc = 0x808F20C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F20C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 62u : 0u;
    // 808F20C4: lfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x808F20C4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F20C8:
    ctx->pc = 0x808F20C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F20C8u)) return;
    // 808F20C8: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_808F20CC:
    ctx->pc = 0x808F20CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F20CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 60u : 0u;
    // 808F20CC: stw     r7, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F20D0:
    ctx->pc = 0x808F20D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F20D0u)) return;
    // 808F20D0: lis     r9, -27903
    ctx->gpr[9] = ((u32)(s32)(-27903) << 16);

label_808F20D4:
    ctx->pc = 0x808F20D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F20D4u)) return;
    // 808F20D4: fsubs   f7, f0, f9
    if (!ppc_fp_available_inline(ctx, 0x808F20D4u)) return;
    ppc_fsubs(ctx, 7, 0, 9);

label_808F20D8:
    ctx->pc = 0x808F20D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F20D8u)) return;
    // 808F20D8: addi    r10, r9, 31308
    ctx->gpr[10] = ctx->gpr[9] + (u32)(s32)(31308);

label_808F20DC:
    ctx->pc = 0x808F20DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F20DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 56u : 0u;
    // 808F20DC: stw     r6, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F20E0:
    ctx->pc = 0x808F20E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F20E0u)) return;
    // 808F20E0: lis     r4, -27903
    ctx->gpr[4] = ((u32)(s32)(-27903) << 16);

label_808F20E4:
    ctx->pc = 0x808F20E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F20E4u)) return;
    // 808F20E4: addi    r9, r31, 4
    ctx->gpr[9] = ctx->gpr[31] + (u32)(s32)(4);

label_808F20E8:
    ctx->pc = 0x808F20E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F20E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 53u : 0u;
    // 808F20E8: lfs     f10, 0(r10)
    if (!ppc_fp_available_inline(ctx, 0x808F20E8u)) return;
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[10] = value;
        ctx->ps1[10] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F20EC:
    ctx->pc = 0x808F20ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F20ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 52u : 0u;
    // 808F20EC: lfd     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x808F20ECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F20F0:
    ctx->pc = 0x808F20F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F20F0u)) return;
    // 808F20F0: li      r8, -1
    ctx->gpr[8] = (u32)(s32)(-1);

label_808F20F4:
    ctx->pc = 0x808F20F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F20F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 50u : 0u;
    // 808F20F4: stw     r3, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F20F8:
    ctx->pc = 0x808F20F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F20F8u)) return;
    // 808F20F8: fsubs   f5, f0, f9
    if (!ppc_fp_available_inline(ctx, 0x808F20F8u)) return;
    ppc_fsubs(ctx, 5, 0, 9);

label_808F20FC:
    ctx->pc = 0x808F20FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F20FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 48u : 0u;
    // 808F20FC: lfs     f6, 31336(r4)
    if (!ppc_fp_available_inline(ctx, 0x808F20FCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(31336);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[6] = value;
        ctx->ps1[6] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2100:
    ctx->pc = 0x808F2100u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2100u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 47u : 0u;
    // 808F2100: stw     r6, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2104:
    ctx->pc = 0x808F2104u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2104u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 46u : 0u;
    // 808F2104: lfd     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x808F2104u)) return;
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
label_808F2108:
    ctx->pc = 0x808F2108u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2108u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 45u : 0u;
    // 808F2108: stw     r0, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F210C:
    ctx->pc = 0x808F210Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F210Cu)) return;
    // 808F210C: fsubs   f4, f0, f9
    if (!ppc_fp_available_inline(ctx, 0x808F210Cu)) return;
    ppc_fsubs(ctx, 4, 0, 9);

label_808F2110:
    ctx->pc = 0x808F2110u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2110u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 43u : 0u;
    // 808F2110: stw     r6, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2114:
    ctx->pc = 0x808F2114u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2114u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 42u : 0u;
    // 808F2114: lfd     f0, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x808F2114u)) return;
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
label_808F2118:
    ctx->pc = 0x808F2118u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2118u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 41u : 0u;
    // 808F2118: stw     r5, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F211C:
    ctx->pc = 0x808F211Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F211Cu)) return;
    // 808F211C: fsubs   f3, f0, f9
    if (!ppc_fp_available_inline(ctx, 0x808F211Cu)) return;
    ppc_fsubs(ctx, 3, 0, 9);

label_808F2120:
    ctx->pc = 0x808F2120u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2120u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 39u : 0u;
    // 808F2120: stw     r6, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2124:
    ctx->pc = 0x808F2124u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2124u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 38u : 0u;
    // 808F2124: lfd     f0, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x808F2124u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2128:
    ctx->pc = 0x808F2128u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2128u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 37u : 0u;
    // 808F2128: stw     r7, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F212C:
    ctx->pc = 0x808F212Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F212Cu)) return;
    // 808F212C: fsubs   f2, f0, f9
    if (!ppc_fp_available_inline(ctx, 0x808F212Cu)) return;
    ppc_fsubs(ctx, 2, 0, 9);

label_808F2130:
    ctx->pc = 0x808F2130u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2130u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 35u : 0u;
    // 808F2130: stw     r6, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2134:
    ctx->pc = 0x808F2134u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2134u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 34u : 0u;
    // 808F2134: lfd     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x808F2134u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2138:
    ctx->pc = 0x808F2138u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2138u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 33u : 0u;
    // 808F2138: stw     r0, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F213C:
    ctx->pc = 0x808F213Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F213Cu)) return;
    // 808F213C: fsubs   f8, f1, f9
    if (!ppc_fp_available_inline(ctx, 0x808F213Cu)) return;
    ppc_fsubs(ctx, 8, 1, 9);

label_808F2140:
    ctx->pc = 0x808F2140u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2140u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 31u : 0u;
    // 808F2140: stw     r6, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2144:
    ctx->pc = 0x808F2144u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2144u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 30u : 0u;
    // 808F2144: lfd     f0, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x808F2144u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2148:
    ctx->pc = 0x808F2148u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2148u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 808F2148: stw     r3, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F214C:
    ctx->pc = 0x808F214Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F214Cu)) return;
    // 808F214C: fsubs   f1, f0, f9
    if (!ppc_fp_available_inline(ctx, 0x808F214Cu)) return;
    ppc_fsubs(ctx, 1, 0, 9);

label_808F2150:
    ctx->pc = 0x808F2150u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2150u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 808F2150: stw     r6, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2154:
    ctx->pc = 0x808F2154u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2154u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 808F2154: lfd     f0, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x808F2154u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2158:
    ctx->pc = 0x808F2158u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2158u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 808F2158: stfs     f10, 80(r9)
    if (!ppc_fp_available_inline(ctx, 0x808F2158u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(80);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[10]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F215C:
    ctx->pc = 0x808F215Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F215Cu)) return;
    // 808F215C: fsubs   f0, f0, f9
    if (!ppc_fp_available_inline(ctx, 0x808F215Cu)) return;
    ppc_fsubs(ctx, 0, 0, 9);

label_808F2160:
    ctx->pc = 0x808F2160u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2160u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 808F2160: stfs     f10, 56(r9)
    if (!ppc_fp_available_inline(ctx, 0x808F2160u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[10]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2164:
    ctx->pc = 0x808F2164u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2164u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 808F2164: stfs     f10, 32(r9)
    if (!ppc_fp_available_inline(ctx, 0x808F2164u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[10]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2168:
    ctx->pc = 0x808F2168u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2168u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 808F2168: stfs     f10, 8(r9)
    if (!ppc_fp_available_inline(ctx, 0x808F2168u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[10]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F216C:
    ctx->pc = 0x808F216Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F216Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 808F216C: stw     r8, 92(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2170:
    ctx->pc = 0x808F2170u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2170u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 808F2170: stw     r8, 68(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2174:
    ctx->pc = 0x808F2174u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2174u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 808F2174: stw     r8, 44(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2178:
    ctx->pc = 0x808F2178u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2178u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 808F2178: stw     r8, 20(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F217C:
    ctx->pc = 0x808F217Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F217Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 808F217C: stfs     f8, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x808F217Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[8]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2180:
    ctx->pc = 0x808F2180u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2180u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 808F2180: stfs     f7, 4(r9)
    if (!ppc_fp_available_inline(ctx, 0x808F2180u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[7]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2184:
    ctx->pc = 0x808F2184u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2184u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 808F2184: stfs     f6, 12(r9)
    if (!ppc_fp_available_inline(ctx, 0x808F2184u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[6]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2188:
    ctx->pc = 0x808F2188u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2188u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 808F2188: stfs     f6, 16(r9)
    if (!ppc_fp_available_inline(ctx, 0x808F2188u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[6]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F218C:
    ctx->pc = 0x808F218Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F218Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 808F218C: stfs     f5, 24(r9)
    if (!ppc_fp_available_inline(ctx, 0x808F218Cu)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2190:
    ctx->pc = 0x808F2190u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2190u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 808F2190: stfs     f4, 28(r9)
    if (!ppc_fp_available_inline(ctx, 0x808F2190u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2194:
    ctx->pc = 0x808F2194u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2194u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 808F2194: stfs     f6, 36(r9)
    if (!ppc_fp_available_inline(ctx, 0x808F2194u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[6]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2198:
    ctx->pc = 0x808F2198u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2198u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 808F2198: stfs     f10, 40(r9)
    if (!ppc_fp_available_inline(ctx, 0x808F2198u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[10]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F219C:
    ctx->pc = 0x808F219Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F219Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 808F219C: stfs     f3, 48(r9)
    if (!ppc_fp_available_inline(ctx, 0x808F219Cu)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F21A0:
    ctx->pc = 0x808F21A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F21A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 808F21A0: stfs     f2, 52(r9)
    if (!ppc_fp_available_inline(ctx, 0x808F21A0u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F21A4:
    ctx->pc = 0x808F21A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F21A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 808F21A4: stfs     f10, 60(r9)
    if (!ppc_fp_available_inline(ctx, 0x808F21A4u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(60);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[10]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F21A8:
    ctx->pc = 0x808F21A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F21A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 808F21A8: stfs     f6, 64(r9)
    if (!ppc_fp_available_inline(ctx, 0x808F21A8u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(64);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[6]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F21AC:
    ctx->pc = 0x808F21ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F21ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 808F21AC: stfs     f1, 72(r9)
    if (!ppc_fp_available_inline(ctx, 0x808F21ACu)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(72);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F21B0:
    ctx->pc = 0x808F21B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F21B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 808F21B0: stfs     f0, 76(r9)
    if (!ppc_fp_available_inline(ctx, 0x808F21B0u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(76);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F21B4:
    ctx->pc = 0x808F21B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F21B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F21B4: stfs     f10, 84(r9)
    if (!ppc_fp_available_inline(ctx, 0x808F21B4u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(84);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[10]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F21B8:
    ctx->pc = 0x808F21B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F21B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 808F21B8: stfs     f10, 88(r9)
    if (!ppc_fp_available_inline(ctx, 0x808F21B8u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(88);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[10]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F21BC:
    ctx->pc = 0x808F21BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F21BCu)) return;
    // 808F21BC: b       0x808F223C
    {
            goto label_808F223C;
    }

label_808F21C0:
    ctx->pc = 0x808F21C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F21C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 3u;
    // 808F21C0: mulli   r26, r3, 24
    ctx->gpr[26] = (u32)((s64)(s32)ctx->gpr[3] * (s64)(s32)24);

label_808F21C4:
    ctx->pc = 0x808F21C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F21C4u)) return;
    // 808F21C4: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_808F21C8:
    ctx->pc = 0x808F21C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F21C8u)) return;
    // 808F21C8: lis     r3, -27900
    ctx->gpr[3] = ((u32)(s32)(-27900) << 16);

label_808F21CC:
    ctx->pc = 0x808F21CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F21CCu)) return;
    // 808F21CC: addi    r28, r1, 16
    ctx->gpr[28] = ctx->gpr[1] + (u32)(s32)(16);

label_808F21D0:
    ctx->pc = 0x808F21D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F21D0u)) return;
    // 808F21D0: addi    r27, r1, 8
    ctx->gpr[27] = ctx->gpr[1] + (u32)(s32)(8);

label_808F21D4:
    ctx->pc = 0x808F21D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F21D4u)) return;
    // 808F21D4: addi    r30, r4, -5392
    ctx->gpr[30] = ctx->gpr[4] + (u32)(s32)(-5392);

label_808F21D8:
    ctx->pc = 0x808F21D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F21D8u)) return;
    // 808F21D8: addi    r31, r3, -9204
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(-9204);

label_808F21DC:
    ctx->pc = 0x808F21DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F21DCu)) return;
    // 808F21DC: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_808F21E0:
    ctx->pc = 0x808F21E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F21E0u)) return;
    // 808F21E0: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_808F21E4:
    ctx->pc = 0x808F21E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F21E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 808F21E4: lwz     r0, 0(r30)
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
label_808F21E8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F21E8u)) return;
    // 808F21E8: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_808F21EC:
    ctx->pc = 0x808F21ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F21ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 808F21EC: lwzx    r0, r31, r0
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F21F0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F21F0u)) return;
    // 808F21F0: add   r4, r0, r29
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[29];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_808F21F4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F21F4u)) return;
    // 808F21F4: add   r4, r26, r4
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_808F21F8:
    ctx->pc = 0x808F21F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F21F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 808F21F8: lwz     r3, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F21FC:
    ctx->pc = 0x808F21FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F21FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 808F21FC: lwz     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2200:
    ctx->pc = 0x808F2200u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2200u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 808F2200: stw     r3, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2204:
    ctx->pc = 0x808F2204u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2204u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 808F2204: lwz     r3, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2208:
    ctx->pc = 0x808F2208u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2208u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F2208: stw     r0, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F220C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F220Cu)) return;
    // 808F220C: cmplwi  r3, 0x0000
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

label_808F2210:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2210u)) return;
    // 808F2210: bc    12, 2, 0x808F2224
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_808F2224;
        }
    }

label_808F2214:
    ctx->pc = 0x808F2214u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2214u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F2214: lwz     r4, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2218:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2218u)) return;
    // 808F2218: cmplwi  r4, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[4]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_808F221C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F221Cu)) return;
    // 808F221C: bc    12, 2, 0x808F2224
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_808F2224;
        }
    }

label_808F2220:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2220u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 808F2220: bl      0x8051028C
    {
            ctx->lr = 0x808F2224u;
            ctx->pc = 0x8051028Cu;
            return;
    }

label_808F2224:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2224u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 808F2224: addi    r25, r25, 1
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(1);

label_808F2228:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2228u)) return;
    // 808F2228: addi    r28, r28, 4
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(4);

label_808F222C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F222Cu)) return;
    // 808F222C: cmpwi   r25, 2
    {
        s32 val_a = (s32)(ctx->gpr[25]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_808F2230:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2230u)) return;
    // 808F2230: addi    r27, r27, 4
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(4);

label_808F2234:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2234u)) return;
    // 808F2234: addi    r29, r29, 4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4);

label_808F2238:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2238u)) return;
    // 808F2238: bc    12, 0, 0x808F21E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x808F21E4u;
                return;
            }
            goto label_808F21E4;
        }
    }

label_808F223C:
    ctx->pc = 0x808F223Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F223Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 11u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 808F223C: lmw     r25, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        for (u32 r = 25; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2240:
    ctx->pc = 0x808F2240u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2240u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 808F2240: lwz     r0, 132(r1)
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
label_808F2244:
    ctx->pc = 0x808F2244u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x808F2244u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F2244: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2248:
    ctx->pc = 0x808F2248u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2248u)) return;
    // 808F2248: addi    r1, r1, 128
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(128);

label_808F224C:
    ctx->pc = 0x808F224Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F224Cu)) return;
    // 808F224C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_808F1060;
        }
    }

label_808F2250:
    ctx->pc = 0x808F2250u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2250u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 808F2250: lis     r3, -27900
    ctx->gpr[3] = ((u32)(s32)(-27900) << 16);

label_808F2254:
    ctx->pc = 0x808F2254u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2254u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 808F2254: lfs     f1, -2440(r3)
    if (!ppc_fp_available_inline(ctx, 0x808F2254u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-2440);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2258:
    ctx->pc = 0x808F2258u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2258u)) return;
    // 808F2258: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_808F1060;
        }
    }

label_808F225C:
    ctx->pc = 0x808F225Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F225Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 808F225C: stwu     r1, -16(r1)
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
label_808F2260:
    ctx->pc = 0x808F2260u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2260u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 808F2260: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2264:
    ctx->pc = 0x808F2264u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2264u)) return;
    // 808F2264: lis     r3, -28629
    ctx->gpr[3] = ((u32)(s32)(-28629) << 16);

label_808F2268:
    ctx->pc = 0x808F2268u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2268u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 808F2268: stw     r0, 20(r1)
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
label_808F226C:
    ctx->pc = 0x808F226Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F226Cu)) return;
    // 808F226C: addi    r3, r3, 44
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(44);

label_808F2270:
    ctx->pc = 0x808F2270u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2270u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F2270: lbz     r0, 10(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(10);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2274:
    ctx->pc = 0x808F2274u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2274u)) return;
    // 808F2274: cmplwi  r0, 0x0002
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0002u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_808F2278:
    ctx->pc = 0x808F2278u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2278u)) return;
    // 808F2278: bc    12, 2, 0x808F229C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_808F229C;
        }
    }

label_808F227C:
    ctx->pc = 0x808F227Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F227Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F227C: lbz     r0, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2280:
    ctx->pc = 0x808F2280u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2280u)) return;
    // 808F2280: cmplwi  r0, 0x0009
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0009u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_808F2284:
    ctx->pc = 0x808F2284u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2284u)) return;
    // 808F2284: bc    4, 0, 0x808F229C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_808F229C;
        }
    }

label_808F2288:
    ctx->pc = 0x808F2288u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2288u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 808F2288: lis     r3, -27900
    ctx->gpr[3] = ((u32)(s32)(-27900) << 16);

label_808F228C:
    ctx->pc = 0x808F228Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F228Cu)) return;
    // 808F228C: rlwinm r0, r0, 1, 23, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0x000001FEu;
    }

label_808F2290:
    ctx->pc = 0x808F2290u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2290u)) return;
    // 808F2290: addi    r3, r3, -6368
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-6368);

label_808F2294:
    ctx->pc = 0x808F2294u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2294u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 808F2294: lhzx    r3, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2298:
    ctx->pc = 0x808F2298u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2298u)) return;
    // 808F2298: bl      0x80405F8C
    {
            ctx->lr = 0x808F229Cu;
            ctx->pc = 0x80405F8Cu;
            return;
    }

label_808F229C:
    ctx->pc = 0x808F229Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F229Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 808F229C: lwz     r0, 20(r1)
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
label_808F22A0:
    ctx->pc = 0x808F22A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x808F22A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F22A0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F22A4:
    ctx->pc = 0x808F22A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F22A4u)) return;
    // 808F22A4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_808F22A8:
    ctx->pc = 0x808F22A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F22A8u)) return;
    // 808F22A8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_808F1060;
        }
    }

label_808F22AC:
    ctx->pc = 0x808F22ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F22ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 808F22AC: stwu     r1, -16(r1)
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
label_808F22B0:
    ctx->pc = 0x808F22B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F22B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 808F22B0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F22B4:
    ctx->pc = 0x808F22B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F22B4u)) return;
    // 808F22B4: lis     r4, -28629
    ctx->gpr[4] = ((u32)(s32)(-28629) << 16);

label_808F22B8:
    ctx->pc = 0x808F22B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F22B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 808F22B8: stw     r0, 20(r1)
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
label_808F22BC:
    ctx->pc = 0x808F22BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F22BCu)) return;
    // 808F22BC: addi    r4, r4, 44
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(44);

label_808F22C0:
    ctx->pc = 0x808F22C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F22C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F22C0: lbz     r0, 10(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(10);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F22C4:
    ctx->pc = 0x808F22C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F22C4u)) return;
    // 808F22C4: cmplwi  r0, 0x0002
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0002u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_808F22C8:
    ctx->pc = 0x808F22C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F22C8u)) return;
    // 808F22C8: bc    12, 2, 0x808F22FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_808F22FC;
        }
    }

label_808F22CC:
    ctx->pc = 0x808F22CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F22CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F22CC: lbz     r0, 2(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F22D0:
    ctx->pc = 0x808F22D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F22D0u)) return;
    // 808F22D0: cmplwi  r0, 0x0009
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0009u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_808F22D4:
    ctx->pc = 0x808F22D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F22D4u)) return;
    // 808F22D4: bc    4, 0, 0x808F22FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_808F22FC;
        }
    }

label_808F22D8:
    ctx->pc = 0x808F22D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F22D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F22D8: cmpwi   r3, 6
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(6);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_808F22DC:
    ctx->pc = 0x808F22DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F22DCu)) return;
    // 808F22DC: bc    4, 0, 0x808F22FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_808F22FC;
        }
    }

label_808F22E0:
    ctx->pc = 0x808F22E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F22E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 3u;
    // 808F22E0: mulli   r5, r0, 12
    ctx->gpr[5] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_808F22E4:
    ctx->pc = 0x808F22E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F22E4u)) return;
    // 808F22E4: lis     r4, -27900
    ctx->gpr[4] = ((u32)(s32)(-27900) << 16);

label_808F22E8:
    ctx->pc = 0x808F22E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F22E8u)) return;
    // 808F22E8: rlwinm r0, r3, 1, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 1u) & 0xFFFFFFFEu;
    }

label_808F22EC:
    ctx->pc = 0x808F22ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F22ECu)) return;
    // 808F22EC: addi    r3, r4, -6476
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(-6476);

label_808F22F0:
    ctx->pc = 0x808F22F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F22F0u)) return;
    // 808F22F0: add   r3, r3, r5
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_808F22F4:
    ctx->pc = 0x808F22F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F22F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 808F22F4: lhzx    r3, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F22F8:
    ctx->pc = 0x808F22F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F22F8u)) return;
    // 808F22F8: bl      0x80405F8C
    {
            ctx->lr = 0x808F22FCu;
            ctx->pc = 0x80405F8Cu;
            return;
    }

label_808F22FC:
    ctx->pc = 0x808F22FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F22FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 808F22FC: lwz     r0, 20(r1)
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
label_808F2300:
    ctx->pc = 0x808F2300u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x808F2300u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F2300: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2304:
    ctx->pc = 0x808F2304u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2304u)) return;
    // 808F2304: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_808F2308:
    ctx->pc = 0x808F2308u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2308u)) return;
    // 808F2308: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_808F1060;
        }
    }

label_808F230C:
    ctx->pc = 0x808F230Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F230Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 808F230C: stwu     r1, -16(r1)
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
label_808F2310:
    ctx->pc = 0x808F2310u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2310u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 808F2310: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2314:
    ctx->pc = 0x808F2314u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2314u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 808F2314: stw     r0, 20(r1)
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
label_808F2318:
    ctx->pc = 0x808F2318u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2318u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F2318: stw     r31, 12(r1)
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
label_808F231C:
    ctx->pc = 0x808F231Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F231Cu)) return;
    // 808F231C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_808F2320:
    ctx->pc = 0x808F2320u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2320u)) return;
    // 808F2320: bl      0x8046F3E8
    {
            ctx->lr = 0x808F2324u;
            ctx->pc = 0x8046F3E8u;
            return;
    }

label_808F2324:
    ctx->pc = 0x808F2324u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2324u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F2324: rlwinm r3, r3, 0, 24, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x000000FFu;
    }

label_808F2328:
    ctx->pc = 0x808F2328u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2328u)) return;
    // 808F2328: bl      0x8049B648
    {
            ctx->lr = 0x808F232Cu;
            ctx->pc = 0x8049B648u;
            return;
    }

label_808F232C:
    ctx->pc = 0x808F232Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F232Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F232C: cmpwi   r3, -1
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(-1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_808F2330:
    ctx->pc = 0x808F2330u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2330u)) return;
    // 808F2330: bc    12, 2, 0x808F2344
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_808F2344;
        }
    }

label_808F2334:
    ctx->pc = 0x808F2334u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2334u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 808F2334: lis     r4, -27900
    ctx->gpr[4] = ((u32)(s32)(-27900) << 16);

label_808F2338:
    ctx->pc = 0x808F2338u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2338u)) return;
    // 808F2338: addi    r4, r4, -6484
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-6484);

label_808F233C:
    ctx->pc = 0x808F233Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F233Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 808F233C: lbzx    r3, r4, r3
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[3];
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2340:
    ctx->pc = 0x808F2340u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2340u)) return;
    // 808F2340: bl      0x80406090
    {
            ctx->lr = 0x808F2344u;
            ctx->pc = 0x80406090u;
            return;
    }

label_808F2344:
    ctx->pc = 0x808F2344u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2344u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F2344: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_808F2348:
    ctx->pc = 0x808F2348u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2348u)) return;
    // 808F2348: bl      0x8050F9E0
    {
            ctx->lr = 0x808F234Cu;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_808F234C:
    ctx->pc = 0x808F234Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F234Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 808F234C: lwz     r0, 20(r1)
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
label_808F2350:
    ctx->pc = 0x808F2350u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2350u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 808F2350: lwz     r31, 12(r1)
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
label_808F2354:
    ctx->pc = 0x808F2354u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x808F2354u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F2354: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2358:
    ctx->pc = 0x808F2358u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2358u)) return;
    // 808F2358: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_808F235C:
    ctx->pc = 0x808F235Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F235Cu)) return;
    // 808F235C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_808F1060;
        }
    }

label_808F2360:
    ctx->pc = 0x808F2360u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 21u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2360u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 21u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 808F2360: stwu     r1, -32(r1)
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
label_808F2364:
    ctx->pc = 0x808F2364u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2364u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 808F2364: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2368:
    ctx->pc = 0x808F2368u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2368u)) return;
    // 808F2368: lis     r5, -32625
    ctx->gpr[5] = ((u32)(s32)(-32625) << 16);

label_808F236C:
    ctx->pc = 0x808F236Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F236Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 808F236C: stw     r0, 36(r1)
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
label_808F2370:
    ctx->pc = 0x808F2370u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2370u)) return;
    // 808F2370: addi    r5, r5, 9304
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9304);

label_808F2374:
    ctx->pc = 0x808F2374u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 11u, 0x808F2374u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 808F2374: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2378:
    ctx->pc = 0x808F2378u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2378u)) return;
    // 808F2378: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_808F237C:
    ctx->pc = 0x808F237Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F237Cu)) return;
    // 808F237C: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_808F2380:
    ctx->pc = 0x808F2380u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2380u)) return;
    // 808F2380: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_808F2384:
    ctx->pc = 0x808F2384u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2384u)) return;
    // 808F2384: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_808F2388:
    ctx->pc = 0x808F2388u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2388u)) return;
    // 808F2388: bl      0x8050FD60
    {
            ctx->lr = 0x808F238Cu;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_808F238C:
    ctx->pc = 0x808F238Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F238Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F238C: or.   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[30];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_808F2390:
    ctx->pc = 0x808F2390u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2390u)) return;
    // 808F2390: bc    12, 2, 0x808F23F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_808F23F4;
        }
    }

label_808F2394:
    ctx->pc = 0x808F2394u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2394u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 808F2394: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_808F2398:
    ctx->pc = 0x808F2398u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2398u)) return;
    // 808F2398: li      r4, 12
    ctx->gpr[4] = (u32)(s32)(12);

label_808F239C:
    ctx->pc = 0x808F239Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F239Cu)) return;
    // 808F239C: bl      0x8050EEC0
    {
            ctx->lr = 0x808F23A0u;
            ctx->pc = 0x8050EEC0u;
            return;
    }

label_808F23A0:
    ctx->pc = 0x808F23A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F23A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 808F23A0: stw     r3, 44(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F23A4:
    ctx->pc = 0x808F23A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F23A4u)) return;
    // 808F23A4: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_808F23A8:
    ctx->pc = 0x808F23A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F23A8u)) return;
    // 808F23A8: addi    r3, r27, 1
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(1);

label_808F23AC:
    ctx->pc = 0x808F23ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F23ACu)) return;
    // 808F23AC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_808F23B0:
    ctx->pc = 0x808F23B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F23B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 808F23B0: lwz     r29, 44(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(44);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F23B4:
    ctx->pc = 0x808F23B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F23B4u)) return;
    // 808F23B4: bl      0x808F17C4
    {
            ctx->lr = 0x808F23B8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x808F17C4u;
                return;
            }
            goto label_808F17C4;
    }

label_808F23B8:
    ctx->pc = 0x808F23B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F23B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 808F23B8: lwz     r5, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F23BC:
    ctx->pc = 0x808F23BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F23BCu)) return;
    // 808F23BC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_808F23C0:
    ctx->pc = 0x808F23C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F23C0u)) return;
    // 808F23C0: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_808F23C4:
    ctx->pc = 0x808F23C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F23C4u)) return;
    // 808F23C4: addi    r3, r27, 1
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(1);

label_808F23C8:
    ctx->pc = 0x808F23C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F23C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F23C8: stw     r31, 20(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F23CC:
    ctx->pc = 0x808F23CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F23CCu)) return;
    // 808F23CC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_808F23D0:
    ctx->pc = 0x808F23D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F23D0u)) return;
    // 808F23D0: bl      0x808F0830
    {
            ctx->lr = 0x808F23D4u;
            ctx->pc = 0x808F0830u;
            return;
    }

label_808F23D4:
    ctx->pc = 0x808F23D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F23D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 808F23D4: lwz     r5, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F23D8:
    ctx->pc = 0x808F23D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F23D8u)) return;
    // 808F23D8: lis     r4, -32625
    ctx->gpr[4] = ((u32)(s32)(-32625) << 16);

label_808F23DC:
    ctx->pc = 0x808F23DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F23DCu)) return;
    // 808F23DC: addi    r0, r4, 9228
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(9228);

label_808F23E0:
    ctx->pc = 0x808F23E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F23E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 808F23E0: stw     r3, 24(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F23E4:
    ctx->pc = 0x808F23E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F23E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 808F23E4: stw     r31, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F23E8:
    ctx->pc = 0x808F23E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F23E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F23E8: stw     r31, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F23EC:
    ctx->pc = 0x808F23ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F23ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 808F23EC: stb     r28, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        mem_write8(ctx, ea, (u8)ctx->gpr[28]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F23F0:
    ctx->pc = 0x808F23F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F23F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 808F23F0: stw     r0, 24(r30)
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
label_808F23F4:
    ctx->pc = 0x808F23F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 17u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F23F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 17u : 1u;
    // 808F23F4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_808F23F8:
    ctx->pc = 0x808F23F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 11u, 0x808F23F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 808F23F8: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F23FC:
    ctx->pc = 0x808F23FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F23FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 808F23FC: lwz     r0, 36(r1)
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
label_808F2400:
    ctx->pc = 0x808F2400u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x808F2400u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F2400: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2404:
    ctx->pc = 0x808F2404u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2404u)) return;
    // 808F2404: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_808F2408:
    ctx->pc = 0x808F2408u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2408u)) return;
    // 808F2408: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_808F1060;
        }
    }

label_808F240C:
    ctx->pc = 0x808F240Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F240Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 808F240C: stwu     r1, -16(r1)
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
label_808F2410:
    ctx->pc = 0x808F2410u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2410u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 808F2410: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2414:
    ctx->pc = 0x808F2414u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2414u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 808F2414: stw     r0, 20(r1)
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
label_808F2418:
    ctx->pc = 0x808F2418u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2418u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 808F2418: stw     r31, 12(r1)
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
label_808F241C:
    ctx->pc = 0x808F241Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F241Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 808F241C: lwz     r4, 32(r3)
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
label_808F2420:
    ctx->pc = 0x808F2420u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2420u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 808F2420: lwz     r3, 20(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2424:
    ctx->pc = 0x808F2424u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2424u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F2424: lwz     r31, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2428:
    ctx->pc = 0x808F2428u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2428u)) return;
    // 808F2428: cmplwi  r3, 0x0000
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

label_808F242C:
    ctx->pc = 0x808F242Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F242Cu)) return;
    // 808F242C: bc    12, 2, 0x808F2434
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_808F2434;
        }
    }

label_808F2430:
    ctx->pc = 0x808F2430u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2430u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 808F2430: bl      0x8050F9E0
    {
            ctx->lr = 0x808F2434u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_808F2434:
    ctx->pc = 0x808F2434u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2434u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F2434: cmplwi  r31, 0x0000
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

label_808F2438:
    ctx->pc = 0x808F2438u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2438u)) return;
    // 808F2438: bc    12, 2, 0x808F2444
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_808F2444;
        }
    }

label_808F243C:
    ctx->pc = 0x808F243Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F243Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F243C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_808F2440:
    ctx->pc = 0x808F2440u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2440u)) return;
    // 808F2440: bl      0x8050F9E0
    {
            ctx->lr = 0x808F2444u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_808F2444:
    ctx->pc = 0x808F2444u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2444u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 808F2444: lwz     r0, 20(r1)
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
label_808F2448:
    ctx->pc = 0x808F2448u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2448u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 808F2448: lwz     r31, 12(r1)
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
label_808F244C:
    ctx->pc = 0x808F244Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x808F244Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F244C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2450:
    ctx->pc = 0x808F2450u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2450u)) return;
    // 808F2450: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_808F2454:
    ctx->pc = 0x808F2454u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2454u)) return;
    // 808F2454: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_808F1060;
        }
    }

label_808F2458:
    ctx->pc = 0x808F2458u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 23u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2458u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 23u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 808F2458: stwu     r1, -32(r1)
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
label_808F245C:
    ctx->pc = 0x808F245Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F245Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 808F245C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2460:
    ctx->pc = 0x808F2460u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2460u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 808F2460: stw     r0, 36(r1)
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
label_808F2464:
    ctx->pc = 0x808F2464u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 11u, 0x808F2464u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 808F2464: stmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2468:
    ctx->pc = 0x808F2468u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2468u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 808F2468: lwz     r31, 32(r3)
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
label_808F246C:
    ctx->pc = 0x808F246Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F246Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 808F246C: lwz     r28, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2470:
    ctx->pc = 0x808F2470u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2470u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 808F2470: lbz     r0, 0(r31)
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
label_808F2474:
    ctx->pc = 0x808F2474u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2474u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 808F2474: lwz     r29, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2478:
    ctx->pc = 0x808F2478u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2478u)) return;
    // 808F2478: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_808F247C:
    ctx->pc = 0x808F247Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F247Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 808F247C: lwz     r30, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2480:
    ctx->pc = 0x808F2480u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2480u)) return;
    // 808F2480: cmpwi   r0, 2
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

label_808F2484:
    ctx->pc = 0x808F2484u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2484u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 808F2484: lwz     r26, 44(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(44);
        ctx->gpr[26] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2488:
    ctx->pc = 0x808F2488u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2488u)) return;
    // 808F2488: bc    12, 2, 0x808F26C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_808F26C4;
        }
    }

label_808F248C:
    ctx->pc = 0x808F248Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F248Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 808F248C: bc    4, 0, 0x808F24A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_808F24A0;
        }
    }

label_808F2490:
    ctx->pc = 0x808F2490u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2490u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F2490: cmpwi   r0, 0
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

label_808F2494:
    ctx->pc = 0x808F2494u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2494u)) return;
    // 808F2494: bc    12, 2, 0x808F24AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_808F24AC;
        }
    }

label_808F2498:
    ctx->pc = 0x808F2498u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2498u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 808F2498: bc    4, 0, 0x808F2500
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_808F2500;
        }
    }

label_808F249C:
    ctx->pc = 0x808F249Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F249Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 808F249C: b       0x808F2770
    {
            goto label_808F2770;
    }

label_808F24A0:
    ctx->pc = 0x808F24A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F24A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F24A0: cmpwi   r0, 4
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

label_808F24A4:
    ctx->pc = 0x808F24A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F24A4u)) return;
    // 808F24A4: bc    12, 2, 0x808F2748
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_808F2748;
        }
    }

label_808F24A8:
    ctx->pc = 0x808F24A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F24A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 808F24A8: b       0x808F2770
    {
            goto label_808F2770;
    }

label_808F24AC:
    ctx->pc = 0x808F24ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F24ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 808F24AC: lis     r3, -28629
    ctx->gpr[3] = ((u32)(s32)(-28629) << 16);

label_808F24B0:
    ctx->pc = 0x808F24B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F24B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 808F24B0: lbz     r5, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F24B4:
    ctx->pc = 0x808F24B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F24B4u)) return;
    // 808F24B4: addi    r3, r3, 44
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(44);

label_808F24B8:
    ctx->pc = 0x808F24B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F24B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F24B8: lbz     r0, 10(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(10);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F24BC:
    ctx->pc = 0x808F24BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F24BCu)) return;
    // 808F24BC: cmplwi  r0, 0x0002
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0002u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_808F24C0:
    ctx->pc = 0x808F24C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F24C0u)) return;
    // 808F24C0: bc    12, 2, 0x808F24F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_808F24F4;
        }
    }

label_808F24C4:
    ctx->pc = 0x808F24C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F24C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F24C4: lbz     r0, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F24C8:
    ctx->pc = 0x808F24C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F24C8u)) return;
    // 808F24C8: cmplwi  r0, 0x0009
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0009u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_808F24CC:
    ctx->pc = 0x808F24CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F24CCu)) return;
    // 808F24CC: bc    4, 0, 0x808F24F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_808F24F4;
        }
    }

label_808F24D0:
    ctx->pc = 0x808F24D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F24D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F24D0: cmpwi   r5, 6
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(6);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_808F24D4:
    ctx->pc = 0x808F24D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F24D4u)) return;
    // 808F24D4: bc    4, 0, 0x808F24F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_808F24F4;
        }
    }

label_808F24D8:
    ctx->pc = 0x808F24D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F24D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 3u;
    // 808F24D8: mulli   r4, r0, 12
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_808F24DC:
    ctx->pc = 0x808F24DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F24DCu)) return;
    // 808F24DC: lis     r3, -27900
    ctx->gpr[3] = ((u32)(s32)(-27900) << 16);

label_808F24E0:
    ctx->pc = 0x808F24E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F24E0u)) return;
    // 808F24E0: rlwinm r0, r5, 1, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[5], 1u) & 0xFFFFFFFEu;
    }

label_808F24E4:
    ctx->pc = 0x808F24E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F24E4u)) return;
    // 808F24E4: addi    r3, r3, -6476
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-6476);

label_808F24E8:
    ctx->pc = 0x808F24E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F24E8u)) return;
    // 808F24E8: add   r3, r3, r4
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_808F24EC:
    ctx->pc = 0x808F24ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F24ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 808F24EC: lhzx    r3, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F24F0:
    ctx->pc = 0x808F24F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F24F0u)) return;
    // 808F24F0: bl      0x80405F8C
    {
            ctx->lr = 0x808F24F4u;
            ctx->pc = 0x80405F8Cu;
            return;
    }

label_808F24F4:
    ctx->pc = 0x808F24F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F24F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 808F24F4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_808F24F8:
    ctx->pc = 0x808F24F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F24F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 808F24F8: stb     r0, 0(r31)
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
label_808F24FC:
    ctx->pc = 0x808F24FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F24FCu)) return;
    // 808F24FC: b       0x808F2770
    {
            goto label_808F2770;
    }

label_808F2500:
    ctx->pc = 0x808F2500u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2500u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 808F2500: lhz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2504:
    ctx->pc = 0x808F2504u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2504u)) return;
    // 808F2504: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_808F2508:
    ctx->pc = 0x808F2508u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2508u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 808F2508: sth     r0, 10(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F250C:
    ctx->pc = 0x808F250Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F250Cu)) return;
    // 808F250C: bl      0x808F1690
    {
            ctx->lr = 0x808F2510u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x808F1690u;
                return;
            }
            goto label_808F1690;
    }

label_808F2510:
    ctx->pc = 0x808F2510u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2510u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 808F2510: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_808F2514:
    ctx->pc = 0x808F2514u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2514u)) return;
    // 808F2514: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_808F2518:
    ctx->pc = 0x808F2518u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2518u)) return;
    // 808F2518: addi    r3, r4, 3472
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(3472);

label_808F251C:
    ctx->pc = 0x808F251Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F251Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F251C: lwz     r3, 0(r3)
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
label_808F2520:
    ctx->pc = 0x808F2520u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2520u)) return;
    // 808F2520: rlwinm. r0, r3, 0, 29, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000004u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_808F2524:
    ctx->pc = 0x808F2524u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2524u)) return;
    // 808F2524: bc    12, 2, 0x808F257C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_808F257C;
        }
    }

label_808F2528:
    ctx->pc = 0x808F2528u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2528u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 808F2528: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_808F252C:
    ctx->pc = 0x808F252Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F252Cu)) return;
    // 808F252C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_808F2530:
    ctx->pc = 0x808F2530u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2530u)) return;
    // 808F2530: bl      0x808F16AC
    {
            ctx->lr = 0x808F2534u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x808F16ACu;
                return;
            }
            goto label_808F16AC;
    }

label_808F2534:
    ctx->pc = 0x808F2534u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2534u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 808F2534: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_808F2538:
    ctx->pc = 0x808F2538u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2538u)) return;
    // 808F2538: cmpw    r26, r27
    {
        s32 val_a = (s32)(ctx->gpr[26]);
        s32 val_b = (s32)(ctx->gpr[27]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_808F253C:
    ctx->pc = 0x808F253Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F253Cu)) return;
    // 808F253C: bc    4, 1, 0x808F2564
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_808F2564;
        }
    }

label_808F2540:
    ctx->pc = 0x808F2540u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2540u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 808F2540: stb     r26, 3(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[26]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2544:
    ctx->pc = 0x808F2544u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2544u)) return;
    // 808F2544: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_808F2548:
    ctx->pc = 0x808F2548u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2548u)) return;
    // 808F2548: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_808F254C:
    ctx->pc = 0x808F254Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F254Cu)) return;
    // 808F254C: bl      0x808F165C
    {
            ctx->lr = 0x808F2550u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x808F165Cu;
                return;
            }
            goto label_808F165C;
    }

label_808F2550:
    ctx->pc = 0x808F2550u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2550u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 808F2550: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_808F2554:
    ctx->pc = 0x808F2554u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2554u)) return;
    // 808F2554: or   r4, r26, r26
    {
        ctx->gpr[4] = ctx->gpr[26] | ctx->gpr[26];
    }

label_808F2558:
    ctx->pc = 0x808F2558u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2558u)) return;
    // 808F2558: bl      0x808F1678
    {
            ctx->lr = 0x808F255Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x808F1678u;
                return;
            }
            goto label_808F1678;
    }

label_808F255C:
    ctx->pc = 0x808F255Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F255Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F255C: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_808F2560:
    ctx->pc = 0x808F2560u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2560u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 808F2560: stb     r0, 0(r31)
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
label_808F2564:
    ctx->pc = 0x808F2564u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2564u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 808F2564: li      r3, 21
    ctx->gpr[3] = (u32)(s32)(21);

label_808F2568:
    ctx->pc = 0x808F2568u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2568u)) return;
    // 808F2568: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_808F256C:
    ctx->pc = 0x808F256Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F256Cu)) return;
    // 808F256C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_808F2570:
    ctx->pc = 0x808F2570u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2570u)) return;
    // 808F2570: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_808F2574:
    ctx->pc = 0x808F2574u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2574u)) return;
    // 808F2574: bl      0x8050A480
    {
            ctx->lr = 0x808F2578u;
            ctx->pc = 0x8050A480u;
            return;
    }

label_808F2578:
    ctx->pc = 0x808F2578u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2578u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 808F2578: b       0x808F25D0
    {
            goto label_808F25D0;
    }

label_808F257C:
    ctx->pc = 0x808F257Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F257Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F257C: andi.   r0, r3, 0x0402
    {
        ctx->gpr[0] = ctx->gpr[3] & 0x0402u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_808F2580:
    ctx->pc = 0x808F2580u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2580u)) return;
    // 808F2580: bc    12, 2, 0x808F25D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_808F25D0;
        }
    }

label_808F2584:
    ctx->pc = 0x808F2584u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2584u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 808F2584: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_808F2588:
    ctx->pc = 0x808F2588u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2588u)) return;
    // 808F2588: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_808F258C:
    ctx->pc = 0x808F258Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F258Cu)) return;
    // 808F258C: bl      0x808F16AC
    {
            ctx->lr = 0x808F2590u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x808F16ACu;
                return;
            }
            goto label_808F16AC;
    }

label_808F2590:
    ctx->pc = 0x808F2590u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2590u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 808F2590: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_808F2594:
    ctx->pc = 0x808F2594u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2594u)) return;
    // 808F2594: cmpw    r26, r27
    {
        s32 val_a = (s32)(ctx->gpr[26]);
        s32 val_b = (s32)(ctx->gpr[27]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_808F2598:
    ctx->pc = 0x808F2598u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2598u)) return;
    // 808F2598: bc    4, 0, 0x808F25BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_808F25BC;
        }
    }

label_808F259C:
    ctx->pc = 0x808F259Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F259Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 808F259C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_808F25A0:
    ctx->pc = 0x808F25A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F25A0u)) return;
    // 808F25A0: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_808F25A4:
    ctx->pc = 0x808F25A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F25A4u)) return;
    // 808F25A4: bl      0x808F165C
    {
            ctx->lr = 0x808F25A8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x808F165Cu;
                return;
            }
            goto label_808F165C;
    }

label_808F25A8:
    ctx->pc = 0x808F25A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F25A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 808F25A8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_808F25AC:
    ctx->pc = 0x808F25ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F25ACu)) return;
    // 808F25AC: or   r4, r26, r26
    {
        ctx->gpr[4] = ctx->gpr[26] | ctx->gpr[26];
    }

label_808F25B0:
    ctx->pc = 0x808F25B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F25B0u)) return;
    // 808F25B0: bl      0x808F1678
    {
            ctx->lr = 0x808F25B4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x808F1678u;
                return;
            }
            goto label_808F1678;
    }

label_808F25B4:
    ctx->pc = 0x808F25B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F25B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F25B4: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_808F25B8:
    ctx->pc = 0x808F25B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F25B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 808F25B8: stb     r0, 0(r31)
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
label_808F25BC:
    ctx->pc = 0x808F25BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F25BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 808F25BC: li      r3, 22
    ctx->gpr[3] = (u32)(s32)(22);

label_808F25C0:
    ctx->pc = 0x808F25C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F25C0u)) return;
    // 808F25C0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_808F25C4:
    ctx->pc = 0x808F25C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F25C4u)) return;
    // 808F25C4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_808F25C8:
    ctx->pc = 0x808F25C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F25C8u)) return;
    // 808F25C8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_808F25CC:
    ctx->pc = 0x808F25CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F25CCu)) return;
    // 808F25CC: bl      0x8050A480
    {
            ctx->lr = 0x808F25D0u;
            ctx->pc = 0x8050A480u;
            return;
    }

label_808F25D0:
    ctx->pc = 0x808F25D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F25D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 808F25D0: lwz     r3, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F25D4:
    ctx->pc = 0x808F25D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F25D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 808F25D4: lhz     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F25D8:
    ctx->pc = 0x808F25D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F25D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 808F25D8: sth     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F25DC:
    ctx->pc = 0x808F25DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F25DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 808F25DC: lhz     r3, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F25E0:
    ctx->pc = 0x808F25E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F25E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F25E0: lhz     r0, 10(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(10);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F25E4:
    ctx->pc = 0x808F25E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F25E4u)) return;
    // 808F25E4: cmplw   r3, r0
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

label_808F25E8:
    ctx->pc = 0x808F25E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F25E8u)) return;
    // 808F25E8: bc    12, 2, 0x808F2674
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_808F2674;
        }
    }

label_808F25EC:
    ctx->pc = 0x808F25ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F25ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F25EC: cmplwi  r3, 0x0000
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

label_808F25F0:
    ctx->pc = 0x808F25F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F25F0u)) return;
    // 808F25F0: bc    4, 2, 0x808F2640
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_808F2640;
        }
    }

label_808F25F4:
    ctx->pc = 0x808F25F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F25F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 808F25F4: lis     r3, -28629
    ctx->gpr[3] = ((u32)(s32)(-28629) << 16);

label_808F25F8:
    ctx->pc = 0x808F25F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F25F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 808F25F8: lbz     r5, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F25FC:
    ctx->pc = 0x808F25FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F25FCu)) return;
    // 808F25FC: addi    r3, r3, 44
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(44);

label_808F2600:
    ctx->pc = 0x808F2600u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2600u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F2600: lbz     r0, 10(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(10);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2604:
    ctx->pc = 0x808F2604u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2604u)) return;
    // 808F2604: cmplwi  r0, 0x0002
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0002u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_808F2608:
    ctx->pc = 0x808F2608u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2608u)) return;
    // 808F2608: bc    12, 2, 0x808F2674
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_808F2674;
        }
    }

label_808F260C:
    ctx->pc = 0x808F260Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F260Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F260C: lbz     r0, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2610:
    ctx->pc = 0x808F2610u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2610u)) return;
    // 808F2610: cmplwi  r0, 0x0009
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0009u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_808F2614:
    ctx->pc = 0x808F2614u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2614u)) return;
    // 808F2614: bc    4, 0, 0x808F2674
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_808F2674;
        }
    }

label_808F2618:
    ctx->pc = 0x808F2618u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2618u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F2618: cmpwi   r5, 6
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(6);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_808F261C:
    ctx->pc = 0x808F261Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F261Cu)) return;
    // 808F261C: bc    4, 0, 0x808F2674
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_808F2674;
        }
    }

label_808F2620:
    ctx->pc = 0x808F2620u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2620u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 3u;
    // 808F2620: mulli   r4, r0, 12
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_808F2624:
    ctx->pc = 0x808F2624u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2624u)) return;
    // 808F2624: lis     r3, -27900
    ctx->gpr[3] = ((u32)(s32)(-27900) << 16);

label_808F2628:
    ctx->pc = 0x808F2628u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2628u)) return;
    // 808F2628: rlwinm r0, r5, 1, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[5], 1u) & 0xFFFFFFFEu;
    }

label_808F262C:
    ctx->pc = 0x808F262Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F262Cu)) return;
    // 808F262C: addi    r3, r3, -6476
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-6476);

label_808F2630:
    ctx->pc = 0x808F2630u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2630u)) return;
    // 808F2630: add   r3, r3, r4
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_808F2634:
    ctx->pc = 0x808F2634u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2634u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 808F2634: lhzx    r3, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2638:
    ctx->pc = 0x808F2638u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2638u)) return;
    // 808F2638: bl      0x80405F8C
    {
            ctx->lr = 0x808F263Cu;
            ctx->pc = 0x80405F8Cu;
            return;
    }

label_808F263C:
    ctx->pc = 0x808F263Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F263Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 808F263C: b       0x808F2674
    {
            goto label_808F2674;
    }

label_808F2640:
    ctx->pc = 0x808F2640u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2640u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 808F2640: lis     r3, -28629
    ctx->gpr[3] = ((u32)(s32)(-28629) << 16);

label_808F2644:
    ctx->pc = 0x808F2644u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2644u)) return;
    // 808F2644: addi    r3, r3, 44
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(44);

label_808F2648:
    ctx->pc = 0x808F2648u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2648u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F2648: lbz     r0, 10(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(10);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F264C:
    ctx->pc = 0x808F264Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F264Cu)) return;
    // 808F264C: cmplwi  r0, 0x0002
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0002u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_808F2650:
    ctx->pc = 0x808F2650u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2650u)) return;
    // 808F2650: bc    12, 2, 0x808F2674
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_808F2674;
        }
    }

label_808F2654:
    ctx->pc = 0x808F2654u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2654u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F2654: lbz     r0, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2658:
    ctx->pc = 0x808F2658u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2658u)) return;
    // 808F2658: cmplwi  r0, 0x0009
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0009u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_808F265C:
    ctx->pc = 0x808F265Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F265Cu)) return;
    // 808F265C: bc    4, 0, 0x808F2674
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_808F2674;
        }
    }

label_808F2660:
    ctx->pc = 0x808F2660u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2660u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 808F2660: lis     r3, -27900
    ctx->gpr[3] = ((u32)(s32)(-27900) << 16);

label_808F2664:
    ctx->pc = 0x808F2664u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2664u)) return;
    // 808F2664: rlwinm r0, r0, 1, 23, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0x000001FEu;
    }

label_808F2668:
    ctx->pc = 0x808F2668u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2668u)) return;
    // 808F2668: addi    r3, r3, -6368
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-6368);

label_808F266C:
    ctx->pc = 0x808F266Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F266Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 808F266C: lhzx    r3, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2670:
    ctx->pc = 0x808F2670u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2670u)) return;
    // 808F2670: bl      0x80405F8C
    {
            ctx->lr = 0x808F2674u;
            ctx->pc = 0x80405F8Cu;
            return;
    }

label_808F2674:
    ctx->pc = 0x808F2674u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2674u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F2674: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_808F2678:
    ctx->pc = 0x808F2678u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2678u)) return;
    // 808F2678: bl      0x808F1650
    {
            ctx->lr = 0x808F267Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x808F1650u;
                return;
            }
            goto label_808F1650;
    }

label_808F267C:
    ctx->pc = 0x808F267Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F267Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F267C: cmpwi   r3, 2
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

label_808F2680:
    ctx->pc = 0x808F2680u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2680u)) return;
    // 808F2680: bc    12, 2, 0x808F2694
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_808F2694;
        }
    }

label_808F2684:
    ctx->pc = 0x808F2684u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2684u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 808F2684: bc    4, 0, 0x808F26B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_808F26B8;
        }
    }

label_808F2688:
    ctx->pc = 0x808F2688u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2688u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F2688: cmpwi   r3, 1
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_808F268C:
    ctx->pc = 0x808F268Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F268Cu)) return;
    // 808F268C: bc    4, 0, 0x808F26AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_808F26AC;
        }
    }

label_808F2690:
    ctx->pc = 0x808F2690u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2690u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 808F2690: b       0x808F26B8
    {
            goto label_808F26B8;
    }

label_808F2694:
    ctx->pc = 0x808F2694u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2694u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 808F2694: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_808F2698:
    ctx->pc = 0x808F2698u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2698u)) return;
    // 808F2698: lis     r3, -27903
    ctx->gpr[3] = ((u32)(s32)(-27903) << 16);

label_808F269C:
    ctx->pc = 0x808F269Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F269Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F269C: stb     r0, 0(r31)
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
label_808F26A0:
    ctx->pc = 0x808F26A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F26A0u)) return;
    // 808F26A0: addi    r3, r3, 31424
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(31424);

label_808F26A4:
    ctx->pc = 0x808F26A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F26A4u)) return;
    // 808F26A4: bl      0x80444788
    {
            ctx->lr = 0x808F26A8u;
            ctx->pc = 0x80444788u;
            return;
    }

label_808F26A8:
    ctx->pc = 0x808F26A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F26A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 808F26A8: b       0x808F2770
    {
            goto label_808F2770;
    }

label_808F26AC:
    ctx->pc = 0x808F26ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F26ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 808F26AC: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_808F26B0:
    ctx->pc = 0x808F26B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F26B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 808F26B0: sth     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F26B4:
    ctx->pc = 0x808F26B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F26B4u)) return;
    // 808F26B4: b       0x808F2770
    {
            goto label_808F2770;
    }

label_808F26B8:
    ctx->pc = 0x808F26B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F26B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 808F26B8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_808F26BC:
    ctx->pc = 0x808F26BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F26BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 808F26BC: sth     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F26C0:
    ctx->pc = 0x808F26C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F26C0u)) return;
    // 808F26C0: b       0x808F2770
    {
            goto label_808F2770;
    }

label_808F26C4:
    ctx->pc = 0x808F26C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F26C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F26C4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_808F26C8:
    ctx->pc = 0x808F26C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F26C8u)) return;
    // 808F26C8: bl      0x808F1690
    {
            ctx->lr = 0x808F26CCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x808F1690u;
                return;
            }
            goto label_808F1690;
    }

label_808F26CC:
    ctx->pc = 0x808F26CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F26CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 808F26CC: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_808F26D0:
    ctx->pc = 0x808F26D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F26D0u)) return;
    // 808F26D0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_808F26D4:
    ctx->pc = 0x808F26D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F26D4u)) return;
    // 808F26D4: bl      0x808F169C
    {
            ctx->lr = 0x808F26D8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x808F169Cu;
                return;
            }
            goto label_808F169C;
    }

label_808F26D8:
    ctx->pc = 0x808F26D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F26D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F26D8: cmpw    r28, r3
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(ctx->gpr[3]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_808F26DC:
    ctx->pc = 0x808F26DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F26DCu)) return;
    // 808F26DC: bc    4, 0, 0x808F26FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_808F26FC;
        }
    }

label_808F26E0:
    ctx->pc = 0x808F26E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F26E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 808F26E0: lwz     r3, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F26E4:
    ctx->pc = 0x808F26E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F26E4u)) return;
    // 808F26E4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_808F26E8:
    ctx->pc = 0x808F26E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F26E8u)) return;
    // 808F26E8: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_808F26EC:
    ctx->pc = 0x808F26ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F26ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 808F26EC: sth     r4, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F26F0:
    ctx->pc = 0x808F26F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F26F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F26F0: stb     r4, 32(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(32);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F26F4:
    ctx->pc = 0x808F26F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F26F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 808F26F4: stb     r0, 33(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(33);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F26F8:
    ctx->pc = 0x808F26F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F26F8u)) return;
    // 808F26F8: b       0x808F2714
    {
            goto label_808F2714;
    }

label_808F26FC:
    ctx->pc = 0x808F26FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F26FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 808F26FC: lwz     r3, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2700:
    ctx->pc = 0x808F2700u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2700u)) return;
    // 808F2700: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_808F2704:
    ctx->pc = 0x808F2704u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2704u)) return;
    // 808F2704: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_808F2708:
    ctx->pc = 0x808F2708u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2708u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F2708: sth     r4, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F270C:
    ctx->pc = 0x808F270Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F270Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 808F270C: stb     r4, 32(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(32);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2710:
    ctx->pc = 0x808F2710u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2710u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 808F2710: stb     r0, 33(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(33);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2714:
    ctx->pc = 0x808F2714u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2714u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 808F2714: lwz     r3, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2718:
    ctx->pc = 0x808F2718u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2718u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F2718: lha     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F271C:
    ctx->pc = 0x808F271Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F271Cu)) return;
    // 808F271C: rlwinm. r0, r0, 0, 30, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000002u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_808F2720:
    ctx->pc = 0x808F2720u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2720u)) return;
    // 808F2720: bc    12, 2, 0x808F272C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_808F272C;
        }
    }

label_808F2724:
    ctx->pc = 0x808F2724u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2724u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F2724: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_808F2728:
    ctx->pc = 0x808F2728u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2728u)) return;
    // 808F2728: bl      0x808F0814
    {
            ctx->lr = 0x808F272Cu;
            ctx->pc = 0x808F0814u;
            return;
    }

label_808F272C:
    ctx->pc = 0x808F272Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F272Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F272C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_808F2730:
    ctx->pc = 0x808F2730u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2730u)) return;
    // 808F2730: bl      0x808F1668
    {
            ctx->lr = 0x808F2734u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x808F1668u;
                return;
            }
            goto label_808F1668;
    }

label_808F2734:
    ctx->pc = 0x808F2734u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2734u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F2734: cmpwi   r3, 0
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

label_808F2738:
    ctx->pc = 0x808F2738u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2738u)) return;
    // 808F2738: bc    4, 2, 0x808F2770
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_808F2770;
        }
    }

label_808F273C:
    ctx->pc = 0x808F273Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F273Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 808F273C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_808F2740:
    ctx->pc = 0x808F2740u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2740u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 808F2740: stb     r0, 0(r31)
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
label_808F2744:
    ctx->pc = 0x808F2744u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2744u)) return;
    // 808F2744: b       0x808F2770
    {
            goto label_808F2770;
    }

label_808F2748:
    ctx->pc = 0x808F2748u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2748u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 808F2748: bl      0x80444734
    {
            ctx->lr = 0x808F274Cu;
            ctx->pc = 0x80444734u;
            return;
    }

label_808F274C:
    ctx->pc = 0x808F274Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F274Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F274C: extsb. r0, r3
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_808F2750:
    ctx->pc = 0x808F2750u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2750u)) return;
    // 808F2750: bc    12, 0, 0x808F2770
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_808F2770;
        }
    }

label_808F2754:
    ctx->pc = 0x808F2754u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2754u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F2754: cmpwi   r0, 1
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

label_808F2758:
    ctx->pc = 0x808F2758u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2758u)) return;
    // 808F2758: bc    12, 2, 0x808F2768
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_808F2768;
        }
    }

label_808F275C:
    ctx->pc = 0x808F275Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F275Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 808F275C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_808F2760:
    ctx->pc = 0x808F2760u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2760u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 808F2760: sth     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2764:
    ctx->pc = 0x808F2764u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2764u)) return;
    // 808F2764: b       0x808F2770
    {
            goto label_808F2770;
    }

label_808F2768:
    ctx->pc = 0x808F2768u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2768u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F2768: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_808F276C:
    ctx->pc = 0x808F276Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F276Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 808F276C: sth     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2770:
    ctx->pc = 0x808F2770u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2770u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 11u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 808F2770: lmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2774:
    ctx->pc = 0x808F2774u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2774u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 808F2774: lwz     r0, 36(r1)
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
label_808F2778:
    ctx->pc = 0x808F2778u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x808F2778u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F2778: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F277C:
    ctx->pc = 0x808F277Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F277Cu)) return;
    // 808F277C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_808F2780:
    ctx->pc = 0x808F2780u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2780u)) return;
    // 808F2780: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_808F1060;
        }
    }

label_808F2784:
    ctx->pc = 0x808F2784u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2784u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 808F2784: stwu     r1, -16(r1)
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
label_808F2788:
    ctx->pc = 0x808F2788u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2788u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 808F2788: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F278C:
    ctx->pc = 0x808F278Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F278Cu)) return;
    // 808F278C: lis     r3, -27900
    ctx->gpr[3] = ((u32)(s32)(-27900) << 16);

label_808F2790:
    ctx->pc = 0x808F2790u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2790u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 808F2790: stw     r0, 20(r1)
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
label_808F2794:
    ctx->pc = 0x808F2794u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2794u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 808F2794: stw     r31, 12(r1)
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
label_808F2798:
    ctx->pc = 0x808F2798u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2798u)) return;
    // 808F2798: addi    r31, r3, -2464
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(-2464);

label_808F279C:
    ctx->pc = 0x808F279Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F279Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 808F279C: stw     r30, 8(r1)
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
label_808F27A0:
    ctx->pc = 0x808F27A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F27A0u)) return;
    // 808F27A0: bl      0x80479BD0
    {
            ctx->lr = 0x808F27A4u;
            ctx->pc = 0x80479BD0u;
            return;
    }

label_808F27A4:
    ctx->pc = 0x808F27A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F27A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 808F27A4: bl      0x8047A1E8
    {
            ctx->lr = 0x808F27A8u;
            ctx->pc = 0x8047A1E8u;
            return;
    }

label_808F27A8:
    ctx->pc = 0x808F27A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F27A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 808F27A8: bl      0x8050F564
    {
            ctx->lr = 0x808F27ACu;
            ctx->pc = 0x8050F564u;
            return;
    }

label_808F27AC:
    ctx->pc = 0x808F27ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F27ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 808F27AC: bl      0x8050F51C
    {
            ctx->lr = 0x808F27B0u;
            ctx->pc = 0x8050F51Cu;
            return;
    }

label_808F27B0:
    ctx->pc = 0x808F27B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F27B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F27B0: lwz     r0, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F27B4:
    ctx->pc = 0x808F27B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F27B4u)) return;
    // 808F27B4: cmpwi   r0, 2
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

label_808F27B8:
    ctx->pc = 0x808F27B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F27B8u)) return;
    // 808F27B8: bc    12, 2, 0x808F2840
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_808F2840;
        }
    }

label_808F27BC:
    ctx->pc = 0x808F27BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F27BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 808F27BC: bc    4, 0, 0x808F27D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_808F27D0;
        }
    }

label_808F27C0:
    ctx->pc = 0x808F27C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F27C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F27C0: cmpwi   r0, 0
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

label_808F27C4:
    ctx->pc = 0x808F27C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F27C4u)) return;
    // 808F27C4: bc    12, 2, 0x808F27E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_808F27E0;
        }
    }

label_808F27C8:
    ctx->pc = 0x808F27C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F27C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 808F27C8: bc    4, 0, 0x808F27FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_808F27FC;
        }
    }

label_808F27CC:
    ctx->pc = 0x808F27CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F27CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 808F27CC: b       0x808F2988
    {
            goto label_808F2988;
    }

label_808F27D0:
    ctx->pc = 0x808F27D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F27D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F27D0: cmpwi   r0, 4
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

label_808F27D4:
    ctx->pc = 0x808F27D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F27D4u)) return;
    // 808F27D4: bc    12, 2, 0x808F28E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_808F28E4;
        }
    }

label_808F27D8:
    ctx->pc = 0x808F27D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F27D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 808F27D8: bc    4, 0, 0x808F2988
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_808F2988;
        }
    }

label_808F27DC:
    ctx->pc = 0x808F27DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F27DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 808F27DC: b       0x808F2890
    {
            goto label_808F2890;
    }

label_808F27E0:
    ctx->pc = 0x808F27E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F27E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F27E0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_808F27E4:
    ctx->pc = 0x808F27E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F27E4u)) return;
    // 808F27E4: bl      0x804E8094
    {
            ctx->lr = 0x808F27E8u;
            ctx->pc = 0x804E8094u;
            return;
    }

label_808F27E8:
    ctx->pc = 0x808F27E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F27E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 808F27E8: bl      0x808F0FF4
    {
            ctx->lr = 0x808F27ECu;
            ctx->pc = 0x808F0FF4u;
            return;
    }

label_808F27EC:
    ctx->pc = 0x808F27ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F27ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 808F27EC: lwz     r3, 16(r31)
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
label_808F27F0:
    ctx->pc = 0x808F27F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F27F0u)) return;
    // 808F27F0: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_808F27F4:
    ctx->pc = 0x808F27F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F27F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 808F27F4: stw     r0, 16(r31)
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
label_808F27F8:
    ctx->pc = 0x808F27F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F27F8u)) return;
    // 808F27F8: b       0x808F2988
    {
            goto label_808F2988;
    }

label_808F27FC:
    ctx->pc = 0x808F27FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F27FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F27FC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_808F2800:
    ctx->pc = 0x808F2800u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2800u)) return;
    // 808F2800: bl      0x804E8094
    {
            ctx->lr = 0x808F2804u;
            ctx->pc = 0x804E8094u;
            return;
    }

label_808F2804:
    ctx->pc = 0x808F2804u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2804u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 808F2804: lfs     f1, 24(r31)
    if (!ppc_fp_available_inline(ctx, 0x808F2804u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2808:
    ctx->pc = 0x808F2808u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2808u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 808F2808: lfs     f0, 20(r31)
    if (!ppc_fp_available_inline(ctx, 0x808F2808u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
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
label_808F280C:
    ctx->pc = 0x808F280Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F280Cu)) return;
    // 808F280C: fsubs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x808F280Cu)) return;
    ppc_fsubs(ctx, 1, 1, 0);

label_808F2810:
    ctx->pc = 0x808F2810u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2810u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 808F2810: stfs     f1, 24(r31)
    if (!ppc_fp_available_inline(ctx, 0x808F2810u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2814:
    ctx->pc = 0x808F2814u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2814u)) return;
    // 808F2814: bl      0x804E7F18
    {
            ctx->lr = 0x808F2818u;
            ctx->pc = 0x804E7F18u;
            return;
    }

label_808F2818:
    ctx->pc = 0x808F2818u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2818u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 808F2818: lis     r3, -27903
    ctx->gpr[3] = ((u32)(s32)(-27903) << 16);

label_808F281C:
    ctx->pc = 0x808F281Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F281Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 808F281C: lfs     f1, 24(r31)
    if (!ppc_fp_available_inline(ctx, 0x808F281Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2820:
    ctx->pc = 0x808F2820u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2820u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 808F2820: lfs     f0, 31484(r3)
    if (!ppc_fp_available_inline(ctx, 0x808F2820u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(31484);
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
label_808F2824:
    ctx->pc = 0x808F2824u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2824u)) return;
    // 808F2824: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x808F2824u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_808F2828:
    ctx->pc = 0x808F2828u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2828u)) return;
    // 808F2828: cror    2, 0, 2
    {
        u32 a = (ctx->cr >> (31u - 0u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_808F282C:
    ctx->pc = 0x808F282Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F282Cu)) return;
    // 808F282C: bc    4, 2, 0x808F2988
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_808F2988;
        }
    }

label_808F2830:
    ctx->pc = 0x808F2830u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2830u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 808F2830: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_808F2834:
    ctx->pc = 0x808F2834u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2834u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F2834: stfs     f0, 24(r31)
    if (!ppc_fp_available_inline(ctx, 0x808F2834u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2838:
    ctx->pc = 0x808F2838u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2838u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 808F2838: stw     r0, 16(r31)
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
label_808F283C:
    ctx->pc = 0x808F283Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F283Cu)) return;
    // 808F283C: b       0x808F2988
    {
            goto label_808F2988;
    }

label_808F2840:
    ctx->pc = 0x808F2840u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2840u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 808F2840: bl      0x808F0FF4
    {
            ctx->lr = 0x808F2844u;
            ctx->pc = 0x808F0FF4u;
            return;
    }

label_808F2844:
    ctx->pc = 0x808F2844u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2844u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F2844: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_808F2848:
    ctx->pc = 0x808F2848u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2848u)) return;
    // 808F2848: bl      0x804E8094
    {
            ctx->lr = 0x808F284Cu;
            ctx->pc = 0x804E8094u;
            return;
    }

label_808F284C:
    ctx->pc = 0x808F284Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F284Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 808F284C: lwz     r3, 8(r31)
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
label_808F2850:
    ctx->pc = 0x808F2850u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2850u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 808F2850: lwz     r3, 32(r3)
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
label_808F2854:
    ctx->pc = 0x808F2854u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2854u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F2854: lha     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2858:
    ctx->pc = 0x808F2858u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2858u)) return;
    // 808F2858: cmpwi   r0, 2
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

label_808F285C:
    ctx->pc = 0x808F285Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F285Cu)) return;
    // 808F285C: bc    4, 2, 0x808F2874
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_808F2874;
        }
    }

label_808F2860:
    ctx->pc = 0x808F2860u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2860u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 808F2860: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_808F2864:
    ctx->pc = 0x808F2864u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2864u)) return;
    // 808F2864: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_808F2868:
    ctx->pc = 0x808F2868u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2868u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F2868: stw     r3, 16(r31)
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
label_808F286C:
    ctx->pc = 0x808F286Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F286Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 808F286C: stw     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2870:
    ctx->pc = 0x808F2870u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2870u)) return;
    // 808F2870: b       0x808F2988
    {
            goto label_808F2988;
    }

label_808F2874:
    ctx->pc = 0x808F2874u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2874u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F2874: cmpwi   r0, 1
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

label_808F2878:
    ctx->pc = 0x808F2878u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2878u)) return;
    // 808F2878: bc    4, 2, 0x808F2988
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_808F2988;
        }
    }

label_808F287C:
    ctx->pc = 0x808F287Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F287Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 808F287C: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_808F2880:
    ctx->pc = 0x808F2880u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2880u)) return;
    // 808F2880: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_808F2884:
    ctx->pc = 0x808F2884u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2884u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F2884: stw     r3, 16(r31)
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
label_808F2888:
    ctx->pc = 0x808F2888u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2888u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 808F2888: stw     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F288C:
    ctx->pc = 0x808F288Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F288Cu)) return;
    // 808F288C: b       0x808F2988
    {
            goto label_808F2988;
    }

label_808F2890:
    ctx->pc = 0x808F2890u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2890u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F2890: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_808F2894:
    ctx->pc = 0x808F2894u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2894u)) return;
    // 808F2894: bl      0x804E8094
    {
            ctx->lr = 0x808F2898u;
            ctx->pc = 0x804E8094u;
            return;
    }

label_808F2898:
    ctx->pc = 0x808F2898u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2898u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 808F2898: lfs     f2, 24(r31)
    if (!ppc_fp_available_inline(ctx, 0x808F2898u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
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
label_808F289C:
    ctx->pc = 0x808F289Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F289Cu)) return;
    // 808F289C: lis     r3, -27903
    ctx->gpr[3] = ((u32)(s32)(-27903) << 16);

label_808F28A0:
    ctx->pc = 0x808F28A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F28A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 808F28A0: lfs     f1, 20(r31)
    if (!ppc_fp_available_inline(ctx, 0x808F28A0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F28A4:
    ctx->pc = 0x808F28A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F28A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 808F28A4: lfs     f0, 31488(r3)
    if (!ppc_fp_available_inline(ctx, 0x808F28A4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(31488);
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
label_808F28A8:
    ctx->pc = 0x808F28A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F28A8u)) return;
    // 808F28A8: fadds   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x808F28A8u)) return;
    ppc_fadds(ctx, 1, 2, 1);

label_808F28AC:
    ctx->pc = 0x808F28ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F28ACu)) return;
    // 808F28AC: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x808F28ACu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_808F28B0:
    ctx->pc = 0x808F28B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F28B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F28B0: stfs     f1, 24(r31)
    if (!ppc_fp_available_inline(ctx, 0x808F28B0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F28B4:
    ctx->pc = 0x808F28B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F28B4u)) return;
    // 808F28B4: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_808F28B8:
    ctx->pc = 0x808F28B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F28B8u)) return;
    // 808F28B8: bc    4, 2, 0x808F2988
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_808F2988;
        }
    }

label_808F28BC:
    ctx->pc = 0x808F28BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F28BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 808F28BC: lis     r3, -256
    ctx->gpr[3] = ((u32)(s32)(-256) << 16);

label_808F28C0:
    ctx->pc = 0x808F28C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F28C0u)) return;
    // 808F28C0: lis     r4, -256
    ctx->gpr[4] = ((u32)(s32)(-256) << 16);

label_808F28C4:
    ctx->pc = 0x808F28C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F28C4u)) return;
    // 808F28C4: lis     r5, -256
    ctx->gpr[5] = ((u32)(s32)(-256) << 16);

label_808F28C8:
    ctx->pc = 0x808F28C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F28C8u)) return;
    // 808F28C8: bl      0x8060F71C
    {
            ctx->lr = 0x808F28CCu;
            ctx->pc = 0x8060F71Cu;
            return;
    }

label_808F28CC:
    ctx->pc = 0x808F28CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F28CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 808F28CC: lis     r3, -27903
    ctx->gpr[3] = ((u32)(s32)(-27903) << 16);

label_808F28D0:
    ctx->pc = 0x808F28D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F28D0u)) return;
    // 808F28D0: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_808F28D4:
    ctx->pc = 0x808F28D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F28D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 808F28D4: lfs     f0, 31488(r3)
    if (!ppc_fp_available_inline(ctx, 0x808F28D4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(31488);
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
label_808F28D8:
    ctx->pc = 0x808F28D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F28D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F28D8: stw     r0, 16(r31)
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
label_808F28DC:
    ctx->pc = 0x808F28DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F28DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 808F28DC: stfs     f0, 24(r31)
    if (!ppc_fp_available_inline(ctx, 0x808F28DCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F28E0:
    ctx->pc = 0x808F28E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F28E0u)) return;
    // 808F28E0: b       0x808F2988
    {
            goto label_808F2988;
    }

label_808F28E4:
    ctx->pc = 0x808F28E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F28E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F28E4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_808F28E8:
    ctx->pc = 0x808F28E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F28E8u)) return;
    // 808F28E8: bl      0x804E8094
    {
            ctx->lr = 0x808F28ECu;
            ctx->pc = 0x804E8094u;
            return;
    }

label_808F28EC:
    ctx->pc = 0x808F28ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F28ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 808F28EC: lfs     f1, 24(r31)
    if (!ppc_fp_available_inline(ctx, 0x808F28ECu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F28F0:
    ctx->pc = 0x808F28F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F28F0u)) return;
    // 808F28F0: bl      0x804E7F18
    {
            ctx->lr = 0x808F28F4u;
            ctx->pc = 0x804E7F18u;
            return;
    }

label_808F28F4:
    ctx->pc = 0x808F28F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F28F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 808F28F4: lis     r3, -28629
    ctx->gpr[3] = ((u32)(s32)(-28629) << 16);

label_808F28F8:
    ctx->pc = 0x808F28F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F28F8u)) return;
    // 808F28F8: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_808F28FC:
    ctx->pc = 0x808F28FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F28FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 808F28FC: stw     r0, 960(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(960);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2900:
    ctx->pc = 0x808F2900u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2900u)) return;
    // 808F2900: bl      0x8046F3E8
    {
            ctx->lr = 0x808F2904u;
            ctx->pc = 0x8046F3E8u;
            return;
    }

label_808F2904:
    ctx->pc = 0x808F2904u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2904u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F2904: rlwinm r3, r3, 0, 24, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x000000FFu;
    }

label_808F2908:
    ctx->pc = 0x808F2908u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2908u)) return;
    // 808F2908: bl      0x8049B648
    {
            ctx->lr = 0x808F290Cu;
            ctx->pc = 0x8049B648u;
            return;
    }

label_808F290C:
    ctx->pc = 0x808F290Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F290Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F290C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_808F2910:
    ctx->pc = 0x808F2910u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2910u)) return;
    // 808F2910: bl      0x80406038
    {
            ctx->lr = 0x808F2914u;
            ctx->pc = 0x80406038u;
            return;
    }

label_808F2914:
    ctx->pc = 0x808F2914u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2914u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 808F2914: bl      0x80405F58
    {
            ctx->lr = 0x808F2918u;
            ctx->pc = 0x80405F58u;
            return;
    }

label_808F2918:
    ctx->pc = 0x808F2918u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2918u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 808F2918: bl      0x8050F564
    {
            ctx->lr = 0x808F291Cu;
            ctx->pc = 0x8050F564u;
            return;
    }

label_808F291C:
    ctx->pc = 0x808F291Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F291Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 808F291C: bl      0x804060B0
    {
            ctx->lr = 0x808F2920u;
            ctx->pc = 0x804060B0u;
            return;
    }

label_808F2920:
    ctx->pc = 0x808F2920u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2920u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 808F2920: bl      0x80444F34
    {
            ctx->lr = 0x808F2924u;
            ctx->pc = 0x80444F34u;
            return;
    }

label_808F2924:
    ctx->pc = 0x808F2924u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2924u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 808F2924: bl      0x8050F404
    {
            ctx->lr = 0x808F2928u;
            ctx->pc = 0x8050F404u;
            return;
    }

label_808F2928:
    ctx->pc = 0x808F2928u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2928u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 808F2928: bl      0x8050F564
    {
            ctx->lr = 0x808F292Cu;
            ctx->pc = 0x8050F564u;
            return;
    }

label_808F292C:
    ctx->pc = 0x808F292Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F292Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F292C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_808F2930:
    ctx->pc = 0x808F2930u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2930u)) return;
    // 808F2930: bl      0x808F1F38
    {
            ctx->lr = 0x808F2934u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x808F1F38u;
                return;
            }
            goto label_808F1F38;
    }

label_808F2934:
    ctx->pc = 0x808F2934u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2934u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 808F2934: lis     r3, -28661
    ctx->gpr[3] = ((u32)(s32)(-28661) << 16);

label_808F2938:
    ctx->pc = 0x808F2938u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2938u)) return;
    // 808F2938: addi    r3, r3, 9756
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9756);

label_808F293C:
    ctx->pc = 0x808F293Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F293Cu)) return;
    // 808F293C: bl      0x8060F2FC
    {
            ctx->lr = 0x808F2940u;
            ctx->pc = 0x8060F2FCu;
            return;
    }

label_808F2940:
    ctx->pc = 0x808F2940u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2940u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 808F2940: lis     r3, -28666
    ctx->gpr[3] = ((u32)(s32)(-28666) << 16);

label_808F2944:
    ctx->pc = 0x808F2944u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2944u)) return;
    // 808F2944: addi    r3, r3, -13688
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-13688);

label_808F2948:
    ctx->pc = 0x808F2948u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2948u)) return;
    // 808F2948: bl      0x8060F2FC
    {
            ctx->lr = 0x808F294Cu;
            ctx->pc = 0x8060F2FCu;
            return;
    }

label_808F294C:
    ctx->pc = 0x808F294Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F294Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 808F294C: lis     r3, -27900
    ctx->gpr[3] = ((u32)(s32)(-27900) << 16);

label_808F2950:
    ctx->pc = 0x808F2950u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2950u)) return;
    // 808F2950: addi    r3, r3, -6492
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-6492);

label_808F2954:
    ctx->pc = 0x808F2954u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2954u)) return;
    // 808F2954: bl      0x8060F2FC
    {
            ctx->lr = 0x808F2958u;
            ctx->pc = 0x8060F2FCu;
            return;
    }

label_808F2958:
    ctx->pc = 0x808F2958u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2958u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 808F2958: lis     r3, -27900
    ctx->gpr[3] = ((u32)(s32)(-27900) << 16);

label_808F295C:
    ctx->pc = 0x808F295Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F295Cu)) return;
    // 808F295C: addi    r3, r3, -21344
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-21344);

label_808F2960:
    ctx->pc = 0x808F2960u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2960u)) return;
    // 808F2960: bl      0x8060F2FC
    {
            ctx->lr = 0x808F2964u;
            ctx->pc = 0x8060F2FCu;
            return;
    }

label_808F2964:
    ctx->pc = 0x808F2964u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2964u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 808F2964: bl      0x8060F6F0
    {
            ctx->lr = 0x808F2968u;
            ctx->pc = 0x8060F6F0u;
            return;
    }

label_808F2968:
    ctx->pc = 0x808F2968u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2968u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F2968: li      r3, 8192
    ctx->gpr[3] = (u32)(s32)(8192);

label_808F296C:
    ctx->pc = 0x808F296Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F296Cu)) return;
    // 808F296C: bl      0x8004D264
    {
            ctx->lr = 0x808F2970u;
            ctx->pc = 0x8004D264u;
            return;
    }

label_808F2970:
    ctx->pc = 0x808F2970u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2970u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 808F2970: lis     r3, -28629
    ctx->gpr[3] = ((u32)(s32)(-28629) << 16);

label_808F2974:
    ctx->pc = 0x808F2974u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2974u)) return;
    // 808F2974: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_808F2978:
    ctx->pc = 0x808F2978u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2978u)) return;
    // 808F2978: addi    r4, r3, 960
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(960);

label_808F297C:
    ctx->pc = 0x808F297Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F297Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F297C: lwz     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2980:
    ctx->pc = 0x808F2980u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2980u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 808F2980: stw     r0, 0(r4)
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
label_808F2984:
    ctx->pc = 0x808F2984u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2984u)) return;
    // 808F2984: b       0x808F2A38
    {
            goto label_808F2A38;
    }

label_808F2988:
    ctx->pc = 0x808F2988u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2988u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 808F2988: lfs     f1, 24(r31)
    if (!ppc_fp_available_inline(ctx, 0x808F2988u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F298C:
    ctx->pc = 0x808F298Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F298Cu)) return;
    // 808F298C: bl      0x804E7F18
    {
            ctx->lr = 0x808F2990u;
            ctx->pc = 0x804E7F18u;
            return;
    }

label_808F2990:
    ctx->pc = 0x808F2990u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2990u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F2990: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_808F2994:
    ctx->pc = 0x808F2994u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2994u)) return;
    // 808F2994: bl      0x8047A0B8
    {
            ctx->lr = 0x808F2998u;
            ctx->pc = 0x8047A0B8u;
            return;
    }

label_808F2998:
    ctx->pc = 0x808F2998u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2998u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F2998: cmpwi   r3, 0
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

label_808F299C:
    ctx->pc = 0x808F299Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F299Cu)) return;
    // 808F299C: bc    12, 2, 0x808F2A34
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_808F2A34;
        }
    }

label_808F29A0:
    ctx->pc = 0x808F29A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F29A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 808F29A0: lis     r3, -28629
    ctx->gpr[3] = ((u32)(s32)(-28629) << 16);

label_808F29A4:
    ctx->pc = 0x808F29A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F29A4u)) return;
    // 808F29A4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_808F29A8:
    ctx->pc = 0x808F29A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F29A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 808F29A8: stw     r0, 960(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(960);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F29AC:
    ctx->pc = 0x808F29ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F29ACu)) return;
    // 808F29AC: bl      0x8046F3E8
    {
            ctx->lr = 0x808F29B0u;
            ctx->pc = 0x8046F3E8u;
            return;
    }

label_808F29B0:
    ctx->pc = 0x808F29B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F29B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F29B0: rlwinm r3, r3, 0, 24, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x000000FFu;
    }

label_808F29B4:
    ctx->pc = 0x808F29B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F29B4u)) return;
    // 808F29B4: bl      0x8049B648
    {
            ctx->lr = 0x808F29B8u;
            ctx->pc = 0x8049B648u;
            return;
    }

label_808F29B8:
    ctx->pc = 0x808F29B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F29B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F29B8: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_808F29BC:
    ctx->pc = 0x808F29BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F29BCu)) return;
    // 808F29BC: bl      0x80406038
    {
            ctx->lr = 0x808F29C0u;
            ctx->pc = 0x80406038u;
            return;
    }

label_808F29C0:
    ctx->pc = 0x808F29C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F29C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 808F29C0: bl      0x80405F58
    {
            ctx->lr = 0x808F29C4u;
            ctx->pc = 0x80405F58u;
            return;
    }

label_808F29C4:
    ctx->pc = 0x808F29C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F29C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 808F29C4: bl      0x8050F564
    {
            ctx->lr = 0x808F29C8u;
            ctx->pc = 0x8050F564u;
            return;
    }

label_808F29C8:
    ctx->pc = 0x808F29C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F29C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 808F29C8: bl      0x804060B0
    {
            ctx->lr = 0x808F29CCu;
            ctx->pc = 0x804060B0u;
            return;
    }

label_808F29CC:
    ctx->pc = 0x808F29CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F29CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 808F29CC: bl      0x80444F34
    {
            ctx->lr = 0x808F29D0u;
            ctx->pc = 0x80444F34u;
            return;
    }

label_808F29D0:
    ctx->pc = 0x808F29D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F29D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 808F29D0: bl      0x8050F404
    {
            ctx->lr = 0x808F29D4u;
            ctx->pc = 0x8050F404u;
            return;
    }

label_808F29D4:
    ctx->pc = 0x808F29D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F29D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 808F29D4: bl      0x8050F564
    {
            ctx->lr = 0x808F29D8u;
            ctx->pc = 0x8050F564u;
            return;
    }

label_808F29D8:
    ctx->pc = 0x808F29D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F29D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F29D8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_808F29DC:
    ctx->pc = 0x808F29DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F29DCu)) return;
    // 808F29DC: bl      0x808F1F38
    {
            ctx->lr = 0x808F29E0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x808F1F38u;
                return;
            }
            goto label_808F1F38;
    }

label_808F29E0:
    ctx->pc = 0x808F29E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F29E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 808F29E0: lis     r3, -28661
    ctx->gpr[3] = ((u32)(s32)(-28661) << 16);

label_808F29E4:
    ctx->pc = 0x808F29E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F29E4u)) return;
    // 808F29E4: addi    r3, r3, 9756
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9756);

label_808F29E8:
    ctx->pc = 0x808F29E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F29E8u)) return;
    // 808F29E8: bl      0x8060F2FC
    {
            ctx->lr = 0x808F29ECu;
            ctx->pc = 0x8060F2FCu;
            return;
    }

label_808F29EC:
    ctx->pc = 0x808F29ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F29ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 808F29EC: lis     r3, -28666
    ctx->gpr[3] = ((u32)(s32)(-28666) << 16);

label_808F29F0:
    ctx->pc = 0x808F29F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F29F0u)) return;
    // 808F29F0: addi    r3, r3, -13688
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-13688);

label_808F29F4:
    ctx->pc = 0x808F29F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F29F4u)) return;
    // 808F29F4: bl      0x8060F2FC
    {
            ctx->lr = 0x808F29F8u;
            ctx->pc = 0x8060F2FCu;
            return;
    }

label_808F29F8:
    ctx->pc = 0x808F29F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F29F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 808F29F8: lis     r3, -27900
    ctx->gpr[3] = ((u32)(s32)(-27900) << 16);

label_808F29FC:
    ctx->pc = 0x808F29FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F29FCu)) return;
    // 808F29FC: addi    r3, r3, -6492
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-6492);

label_808F2A00:
    ctx->pc = 0x808F2A00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2A00u)) return;
    // 808F2A00: bl      0x8060F2FC
    {
            ctx->lr = 0x808F2A04u;
            ctx->pc = 0x8060F2FCu;
            return;
    }

label_808F2A04:
    ctx->pc = 0x808F2A04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2A04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 808F2A04: lis     r3, -27900
    ctx->gpr[3] = ((u32)(s32)(-27900) << 16);

label_808F2A08:
    ctx->pc = 0x808F2A08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2A08u)) return;
    // 808F2A08: addi    r3, r3, -21344
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-21344);

label_808F2A0C:
    ctx->pc = 0x808F2A0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2A0Cu)) return;
    // 808F2A0C: bl      0x8060F2FC
    {
            ctx->lr = 0x808F2A10u;
            ctx->pc = 0x8060F2FCu;
            return;
    }

label_808F2A10:
    ctx->pc = 0x808F2A10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2A10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 808F2A10: bl      0x8060F6F0
    {
            ctx->lr = 0x808F2A14u;
            ctx->pc = 0x8060F6F0u;
            return;
    }

label_808F2A14:
    ctx->pc = 0x808F2A14u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2A14u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F2A14: li      r3, 8192
    ctx->gpr[3] = (u32)(s32)(8192);

label_808F2A18:
    ctx->pc = 0x808F2A18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2A18u)) return;
    // 808F2A18: bl      0x8004D264
    {
            ctx->lr = 0x808F2A1Cu;
            ctx->pc = 0x8004D264u;
            return;
    }

label_808F2A1C:
    ctx->pc = 0x808F2A1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2A1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 808F2A1C: lis     r3, -28629
    ctx->gpr[3] = ((u32)(s32)(-28629) << 16);

label_808F2A20:
    ctx->pc = 0x808F2A20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2A20u)) return;
    // 808F2A20: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_808F2A24:
    ctx->pc = 0x808F2A24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2A24u)) return;
    // 808F2A24: addi    r4, r3, 960
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(960);

label_808F2A28:
    ctx->pc = 0x808F2A28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2A28u)) return;
    // 808F2A28: li      r3, -2
    ctx->gpr[3] = (u32)(s32)(-2);

label_808F2A2C:
    ctx->pc = 0x808F2A2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2A2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 808F2A2C: stw     r0, 0(r4)
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
label_808F2A30:
    ctx->pc = 0x808F2A30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2A30u)) return;
    // 808F2A30: b       0x808F2A38
    {
            goto label_808F2A38;
    }

label_808F2A34:
    ctx->pc = 0x808F2A34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2A34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 808F2A34: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_808F2A38:
    ctx->pc = 0x808F2A38u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2A38u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 808F2A38: lwz     r0, 20(r1)
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
label_808F2A3C:
    ctx->pc = 0x808F2A3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2A3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 808F2A3C: lwz     r31, 12(r1)
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
label_808F2A40:
    ctx->pc = 0x808F2A40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2A40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 808F2A40: lwz     r30, 8(r1)
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
label_808F2A44:
    ctx->pc = 0x808F2A44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x808F2A44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F2A44: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2A48:
    ctx->pc = 0x808F2A48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2A48u)) return;
    // 808F2A48: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_808F2A4C:
    ctx->pc = 0x808F2A4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2A4Cu)) return;
    // 808F2A4C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_808F1060;
        }
    }

label_808F2A50:
    ctx->pc = 0x808F2A50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2A50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 808F2A50: stwu     r1, -16(r1)
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
label_808F2A54:
    ctx->pc = 0x808F2A54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2A54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 808F2A54: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2A58:
    ctx->pc = 0x808F2A58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2A58u)) return;
    // 808F2A58: lis     r3, -28629
    ctx->gpr[3] = ((u32)(s32)(-28629) << 16);

label_808F2A5C:
    ctx->pc = 0x808F2A5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2A5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 808F2A5C: stw     r0, 20(r1)
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
label_808F2A60:
    ctx->pc = 0x808F2A60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2A60u)) return;
    // 808F2A60: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_808F2A64:
    ctx->pc = 0x808F2A64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2A64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F2A64: stw     r31, 12(r1)
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
label_808F2A68:
    ctx->pc = 0x808F2A68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2A68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 808F2A68: stw     r0, 960(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(960);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2A6C:
    ctx->pc = 0x808F2A6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2A6Cu)) return;
    // 808F2A6C: bl      0x8046F3E8
    {
            ctx->lr = 0x808F2A70u;
            ctx->pc = 0x8046F3E8u;
            return;
    }

label_808F2A70:
    ctx->pc = 0x808F2A70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2A70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F2A70: rlwinm r3, r3, 0, 24, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x000000FFu;
    }

label_808F2A74:
    ctx->pc = 0x808F2A74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2A74u)) return;
    // 808F2A74: bl      0x8049B648
    {
            ctx->lr = 0x808F2A78u;
            ctx->pc = 0x8049B648u;
            return;
    }

label_808F2A78:
    ctx->pc = 0x808F2A78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2A78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F2A78: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_808F2A7C:
    ctx->pc = 0x808F2A7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2A7Cu)) return;
    // 808F2A7C: bl      0x80406038
    {
            ctx->lr = 0x808F2A80u;
            ctx->pc = 0x80406038u;
            return;
    }

label_808F2A80:
    ctx->pc = 0x808F2A80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2A80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 808F2A80: bl      0x80405F58
    {
            ctx->lr = 0x808F2A84u;
            ctx->pc = 0x80405F58u;
            return;
    }

label_808F2A84:
    ctx->pc = 0x808F2A84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2A84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 808F2A84: bl      0x8050F564
    {
            ctx->lr = 0x808F2A88u;
            ctx->pc = 0x8050F564u;
            return;
    }

label_808F2A88:
    ctx->pc = 0x808F2A88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2A88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 808F2A88: bl      0x804060B0
    {
            ctx->lr = 0x808F2A8Cu;
            ctx->pc = 0x804060B0u;
            return;
    }

label_808F2A8C:
    ctx->pc = 0x808F2A8Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2A8Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 808F2A8C: bl      0x80444F34
    {
            ctx->lr = 0x808F2A90u;
            ctx->pc = 0x80444F34u;
            return;
    }

label_808F2A90:
    ctx->pc = 0x808F2A90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2A90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 808F2A90: bl      0x8050F404
    {
            ctx->lr = 0x808F2A94u;
            ctx->pc = 0x8050F404u;
            return;
    }

label_808F2A94:
    ctx->pc = 0x808F2A94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2A94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 808F2A94: bl      0x8050F564
    {
            ctx->lr = 0x808F2A98u;
            ctx->pc = 0x8050F564u;
            return;
    }

label_808F2A98:
    ctx->pc = 0x808F2A98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2A98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F2A98: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_808F2A9C:
    ctx->pc = 0x808F2A9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2A9Cu)) return;
    // 808F2A9C: bl      0x808F1F38
    {
            ctx->lr = 0x808F2AA0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x808F1F38u;
                return;
            }
            goto label_808F1F38;
    }

label_808F2AA0:
    ctx->pc = 0x808F2AA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2AA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 808F2AA0: lis     r3, -28661
    ctx->gpr[3] = ((u32)(s32)(-28661) << 16);

label_808F2AA4:
    ctx->pc = 0x808F2AA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2AA4u)) return;
    // 808F2AA4: addi    r3, r3, 9756
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9756);

label_808F2AA8:
    ctx->pc = 0x808F2AA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2AA8u)) return;
    // 808F2AA8: bl      0x8060F2FC
    {
            ctx->lr = 0x808F2AACu;
            ctx->pc = 0x8060F2FCu;
            return;
    }

label_808F2AAC:
    ctx->pc = 0x808F2AACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2AACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 808F2AAC: lis     r3, -28666
    ctx->gpr[3] = ((u32)(s32)(-28666) << 16);

label_808F2AB0:
    ctx->pc = 0x808F2AB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2AB0u)) return;
    // 808F2AB0: addi    r3, r3, -13688
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-13688);

label_808F2AB4:
    ctx->pc = 0x808F2AB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2AB4u)) return;
    // 808F2AB4: bl      0x8060F2FC
    {
            ctx->lr = 0x808F2AB8u;
            ctx->pc = 0x8060F2FCu;
            return;
    }

label_808F2AB8:
    ctx->pc = 0x808F2AB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2AB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 808F2AB8: lis     r3, -27900
    ctx->gpr[3] = ((u32)(s32)(-27900) << 16);

label_808F2ABC:
    ctx->pc = 0x808F2ABCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2ABCu)) return;
    // 808F2ABC: addi    r3, r3, -6492
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-6492);

label_808F2AC0:
    ctx->pc = 0x808F2AC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2AC0u)) return;
    // 808F2AC0: bl      0x8060F2FC
    {
            ctx->lr = 0x808F2AC4u;
            ctx->pc = 0x8060F2FCu;
            return;
    }

label_808F2AC4:
    ctx->pc = 0x808F2AC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2AC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 808F2AC4: lis     r3, -27900
    ctx->gpr[3] = ((u32)(s32)(-27900) << 16);

label_808F2AC8:
    ctx->pc = 0x808F2AC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2AC8u)) return;
    // 808F2AC8: addi    r3, r3, -21344
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-21344);

label_808F2ACC:
    ctx->pc = 0x808F2ACCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2ACCu)) return;
    // 808F2ACC: bl      0x8060F2FC
    {
            ctx->lr = 0x808F2AD0u;
            ctx->pc = 0x8060F2FCu;
            return;
    }

label_808F2AD0:
    ctx->pc = 0x808F2AD0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2AD0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 808F2AD0: bl      0x8060F6F0
    {
            ctx->lr = 0x808F2AD4u;
            ctx->pc = 0x8060F6F0u;
            return;
    }

label_808F2AD4:
    ctx->pc = 0x808F2AD4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2AD4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F2AD4: li      r3, 8192
    ctx->gpr[3] = (u32)(s32)(8192);

label_808F2AD8:
    ctx->pc = 0x808F2AD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2AD8u)) return;
    // 808F2AD8: bl      0x8004D264
    {
            ctx->lr = 0x808F2ADCu;
            ctx->pc = 0x8004D264u;
            return;
    }

label_808F2ADC:
    ctx->pc = 0x808F2ADCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2ADCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    // 808F2ADC: lis     r3, -28629
    ctx->gpr[3] = ((u32)(s32)(-28629) << 16);

label_808F2AE0:
    ctx->pc = 0x808F2AE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2AE0u)) return;
    // 808F2AE0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_808F2AE4:
    ctx->pc = 0x808F2AE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2AE4u)) return;
    // 808F2AE4: addi    r4, r3, 960
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(960);

label_808F2AE8:
    ctx->pc = 0x808F2AE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2AE8u)) return;
    // 808F2AE8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_808F2AEC:
    ctx->pc = 0x808F2AECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2AECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 808F2AEC: stw     r0, 0(r4)
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
label_808F2AF0:
    ctx->pc = 0x808F2AF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2AF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 808F2AF0: lwz     r31, 12(r1)
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
label_808F2AF4:
    ctx->pc = 0x808F2AF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2AF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 808F2AF4: lwz     r0, 20(r1)
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
label_808F2AF8:
    ctx->pc = 0x808F2AF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x808F2AF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F2AF8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2AFC:
    ctx->pc = 0x808F2AFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2AFCu)) return;
    // 808F2AFC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_808F2B00:
    ctx->pc = 0x808F2B00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2B00u)) return;
    // 808F2B00: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_808F1060;
        }
    }

label_808F2B04:
    ctx->pc = 0x808F2B04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 23u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2B04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 23u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 808F2B04: stwu     r1, -32(r1)
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
label_808F2B08:
    ctx->pc = 0x808F2B08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2B08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 808F2B08: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2B0C:
    ctx->pc = 0x808F2B0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2B0Cu)) return;
    // 808F2B0C: lis     r3, -27900
    ctx->gpr[3] = ((u32)(s32)(-27900) << 16);

label_808F2B10:
    ctx->pc = 0x808F2B10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2B10u)) return;
    // 808F2B10: lis     r4, -27900
    ctx->gpr[4] = ((u32)(s32)(-27900) << 16);

label_808F2B14:
    ctx->pc = 0x808F2B14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2B14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 808F2B14: stw     r0, 36(r1)
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
label_808F2B18:
    ctx->pc = 0x808F2B18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2B18u)) return;
    // 808F2B18: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_808F2B1C:
    ctx->pc = 0x808F2B1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 11u, 0x808F2B1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 808F2B1C: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2B20:
    ctx->pc = 0x808F2B20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2B20u)) return;
    // 808F2B20: addi    r31, r3, -2464
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(-2464);

label_808F2B24:
    ctx->pc = 0x808F2B24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2B24u)) return;
    // 808F2B24: addi    r30, r4, -6800
    ctx->gpr[30] = ctx->gpr[4] + (u32)(s32)(-6800);

label_808F2B28:
    ctx->pc = 0x808F2B28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2B28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 808F2B28: stw     r0, 16(r31)
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
label_808F2B2C:
    ctx->pc = 0x808F2B2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2B2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F2B2C: stw     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2B30:
    ctx->pc = 0x808F2B30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2B30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 808F2B30: stw     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2B34:
    ctx->pc = 0x808F2B34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2B34u)) return;
    // 808F2B34: bl      0x804060B0
    {
            ctx->lr = 0x808F2B38u;
            ctx->pc = 0x804060B0u;
            return;
    }

label_808F2B38:
    ctx->pc = 0x808F2B38u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2B38u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 808F2B38: bl      0x805111F4
    {
            ctx->lr = 0x808F2B3Cu;
            ctx->pc = 0x805111F4u;
            return;
    }

label_808F2B3C:
    ctx->pc = 0x808F2B3Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2B3Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 808F2B3C: bl      0x8060F6F0
    {
            ctx->lr = 0x808F2B40u;
            ctx->pc = 0x8060F6F0u;
            return;
    }

label_808F2B40:
    ctx->pc = 0x808F2B40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2B40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 808F2B40: bl      0x8050F084
    {
            ctx->lr = 0x808F2B44u;
            ctx->pc = 0x8050F084u;
            return;
    }

label_808F2B44:
    ctx->pc = 0x808F2B44u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2B44u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 808F2B44: bl      0x8050FF60
    {
            ctx->lr = 0x808F2B48u;
            ctx->pc = 0x8050FF60u;
            return;
    }

label_808F2B48:
    ctx->pc = 0x808F2B48u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2B48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 808F2B48: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_808F2B4C:
    ctx->pc = 0x808F2B4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2B4Cu)) return;
    // 808F2B4C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_808F2B50:
    ctx->pc = 0x808F2B50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2B50u)) return;
    // 808F2B50: bl      0x8047AA90
    {
            ctx->lr = 0x808F2B54u;
            ctx->pc = 0x8047AA90u;
            return;
    }

label_808F2B54:
    ctx->pc = 0x808F2B54u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2B54u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F2B54: addi    r3, r30, 452
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(452);

label_808F2B58:
    ctx->pc = 0x808F2B58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2B58u)) return;
    // 808F2B58: bl      0x8050AF58
    {
            ctx->lr = 0x808F2B5Cu;
            ctx->pc = 0x8050AF58u;
            return;
    }

label_808F2B5C:
    ctx->pc = 0x808F2B5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2B5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F2B5C: lis     r3, -256
    ctx->gpr[3] = ((u32)(s32)(-256) << 16);

label_808F2B60:
    ctx->pc = 0x808F2B60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2B60u)) return;
    // 808F2B60: bl      0x8061328C
    {
            ctx->lr = 0x808F2B64u;
            ctx->pc = 0x8061328Cu;
            return;
    }

label_808F2B64:
    ctx->pc = 0x808F2B64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2B64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 808F2B64: lis     r3, -256
    ctx->gpr[3] = ((u32)(s32)(-256) << 16);

label_808F2B68:
    ctx->pc = 0x808F2B68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2B68u)) return;
    // 808F2B68: lis     r4, -256
    ctx->gpr[4] = ((u32)(s32)(-256) << 16);

label_808F2B6C:
    ctx->pc = 0x808F2B6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2B6Cu)) return;
    // 808F2B6C: lis     r5, -256
    ctx->gpr[5] = ((u32)(s32)(-256) << 16);

label_808F2B70:
    ctx->pc = 0x808F2B70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2B70u)) return;
    // 808F2B70: bl      0x8060F71C
    {
            ctx->lr = 0x808F2B74u;
            ctx->pc = 0x8060F71Cu;
            return;
    }

label_808F2B74:
    ctx->pc = 0x808F2B74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2B74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 808F2B74: bl      0x8046C8C4
    {
            ctx->lr = 0x808F2B78u;
            ctx->pc = 0x8046C8C4u;
            return;
    }

label_808F2B78:
    ctx->pc = 0x808F2B78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2B78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F2B78: li      r3, 8192
    ctx->gpr[3] = (u32)(s32)(8192);

label_808F2B7C:
    ctx->pc = 0x808F2B7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2B7Cu)) return;
    // 808F2B7C: bl      0x8004D264
    {
            ctx->lr = 0x808F2B80u;
            ctx->pc = 0x8004D264u;
            return;
    }

label_808F2B80:
    ctx->pc = 0x808F2B80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2B80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 808F2B80: bl      0x804E9CB0
    {
            ctx->lr = 0x808F2B84u;
            ctx->pc = 0x804E9CB0u;
            return;
    }

label_808F2B84:
    ctx->pc = 0x808F2B84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2B84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F2B84: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_808F2B88:
    ctx->pc = 0x808F2B88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2B88u)) return;
    // 808F2B88: bl      0x804E80A0
    {
            ctx->lr = 0x808F2B8Cu;
            ctx->pc = 0x804E80A0u;
            return;
    }

label_808F2B8C:
    ctx->pc = 0x808F2B8Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2B8Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 808F2B8C: lis     r4, -27903
    ctx->gpr[4] = ((u32)(s32)(-27903) << 16);

label_808F2B90:
    ctx->pc = 0x808F2B90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2B90u)) return;
    // 808F2B90: lis     r3, -27903
    ctx->gpr[3] = ((u32)(s32)(-27903) << 16);

label_808F2B94:
    ctx->pc = 0x808F2B94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2B94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 808F2B94: lfs     f1, 31488(r4)
    if (!ppc_fp_available_inline(ctx, 0x808F2B94u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(31488);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2B98:
    ctx->pc = 0x808F2B98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2B98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 808F2B98: lfs     f0, 31492(r3)
    if (!ppc_fp_available_inline(ctx, 0x808F2B98u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(31492);
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
label_808F2B9C:
    ctx->pc = 0x808F2B9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2B9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F2B9C: stfs     f1, 24(r31)
    if (!ppc_fp_available_inline(ctx, 0x808F2B9Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2BA0:
    ctx->pc = 0x808F2BA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2BA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 808F2BA0: stfs     f0, 20(r31)
    if (!ppc_fp_available_inline(ctx, 0x808F2BA0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2BA4:
    ctx->pc = 0x808F2BA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2BA4u)) return;
    // 808F2BA4: bl      0x8046F3E8
    {
            ctx->lr = 0x808F2BA8u;
            ctx->pc = 0x8046F3E8u;
            return;
    }

label_808F2BA8:
    ctx->pc = 0x808F2BA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2BA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F2BA8: rlwinm r3, r3, 0, 24, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x000000FFu;
    }

label_808F2BAC:
    ctx->pc = 0x808F2BACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2BACu)) return;
    // 808F2BAC: bl      0x8049B648
    {
            ctx->lr = 0x808F2BB0u;
            ctx->pc = 0x8049B648u;
            return;
    }

label_808F2BB0:
    ctx->pc = 0x808F2BB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2BB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 808F2BB0: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_808F2BB4:
    ctx->pc = 0x808F2BB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2BB4u)) return;
    // 808F2BB4: lis     r4, -28661
    ctx->gpr[4] = ((u32)(s32)(-28661) << 16);

label_808F2BB8:
    ctx->pc = 0x808F2BB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2BB8u)) return;
    // 808F2BB8: addi    r4, r4, 9756
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9756);

label_808F2BBC:
    ctx->pc = 0x808F2BBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2BBCu)) return;
    // 808F2BBC: addi    r3, r30, 472
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(472);

label_808F2BC0:
    ctx->pc = 0x808F2BC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2BC0u)) return;
    // 808F2BC0: or   r29, r0, r0
    {
        ctx->gpr[29] = ctx->gpr[0] | ctx->gpr[0];
    }

label_808F2BC4:
    ctx->pc = 0x808F2BC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2BC4u)) return;
    // 808F2BC4: bl      0x8051028C
    {
            ctx->lr = 0x808F2BC8u;
            ctx->pc = 0x8051028Cu;
            return;
    }

label_808F2BC8:
    ctx->pc = 0x808F2BC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2BC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 808F2BC8: lis     r4, -28666
    ctx->gpr[4] = ((u32)(s32)(-28666) << 16);

label_808F2BCC:
    ctx->pc = 0x808F2BCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2BCCu)) return;
    // 808F2BCC: addi    r3, r30, 484
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(484);

label_808F2BD0:
    ctx->pc = 0x808F2BD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2BD0u)) return;
    // 808F2BD0: addi    r4, r4, -13688
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-13688);

label_808F2BD4:
    ctx->pc = 0x808F2BD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2BD4u)) return;
    // 808F2BD4: bl      0x8051028C
    {
            ctx->lr = 0x808F2BD8u;
            ctx->pc = 0x8051028Cu;
            return;
    }

label_808F2BD8:
    ctx->pc = 0x808F2BD8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2BD8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 808F2BD8: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_808F2BDC:
    ctx->pc = 0x808F2BDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2BDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F2BDC: lwz     r0, -5392(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5392);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2BE0:
    ctx->pc = 0x808F2BE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2BE0u)) return;
    // 808F2BE0: cmpwi   r0, 0
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

label_808F2BE4:
    ctx->pc = 0x808F2BE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2BE4u)) return;
    // 808F2BE4: bc    12, 2, 0x808F2BEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_808F2BEC;
        }
    }

label_808F2BE8:
    ctx->pc = 0x808F2BE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2BE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 808F2BE8: b       0x808F2C0C
    {
            goto label_808F2C0C;
    }

label_808F2BEC:
    ctx->pc = 0x808F2BECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2BECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 808F2BEC: addi    r3, r30, 492
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(492);

label_808F2BF0:
    ctx->pc = 0x808F2BF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2BF0u)) return;
    // 808F2BF0: addi    r4, r30, 308
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(308);

label_808F2BF4:
    ctx->pc = 0x808F2BF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2BF4u)) return;
    // 808F2BF4: bl      0x8051028C
    {
            ctx->lr = 0x808F2BF8u;
            ctx->pc = 0x8051028Cu;
            return;
    }

label_808F2BF8:
    ctx->pc = 0x808F2BF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2BF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 808F2BF8: lis     r4, -27900
    ctx->gpr[4] = ((u32)(s32)(-27900) << 16);

label_808F2BFC:
    ctx->pc = 0x808F2BFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2BFCu)) return;
    // 808F2BFC: addi    r3, r30, 500
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(500);

label_808F2C00:
    ctx->pc = 0x808F2C00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2C00u)) return;
    // 808F2C00: addi    r4, r4, -21344
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-21344);

label_808F2C04:
    ctx->pc = 0x808F2C04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2C04u)) return;
    // 808F2C04: bl      0x8051028C
    {
            ctx->lr = 0x808F2C08u;
            ctx->pc = 0x8051028Cu;
            return;
    }

label_808F2C08:
    ctx->pc = 0x808F2C08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2C08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 808F2C08: b       0x808F2C28
    {
            goto label_808F2C28;
    }

label_808F2C0C:
    ctx->pc = 0x808F2C0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2C0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 808F2C0C: addi    r3, r30, 512
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(512);

label_808F2C10:
    ctx->pc = 0x808F2C10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2C10u)) return;
    // 808F2C10: addi    r4, r30, 308
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(308);

label_808F2C14:
    ctx->pc = 0x808F2C14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2C14u)) return;
    // 808F2C14: bl      0x8051028C
    {
            ctx->lr = 0x808F2C18u;
            ctx->pc = 0x8051028Cu;
            return;
    }

label_808F2C18:
    ctx->pc = 0x808F2C18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2C18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 808F2C18: lis     r4, -27900
    ctx->gpr[4] = ((u32)(s32)(-27900) << 16);

label_808F2C1C:
    ctx->pc = 0x808F2C1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2C1Cu)) return;
    // 808F2C1C: addi    r3, r30, 524
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(524);

label_808F2C20:
    ctx->pc = 0x808F2C20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2C20u)) return;
    // 808F2C20: addi    r4, r4, -21344
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-21344);

label_808F2C24:
    ctx->pc = 0x808F2C24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2C24u)) return;
    // 808F2C24: bl      0x8051028C
    {
            ctx->lr = 0x808F2C28u;
            ctx->pc = 0x8051028Cu;
            return;
    }

label_808F2C28:
    ctx->pc = 0x808F2C28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2C28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F2C28: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_808F2C2C:
    ctx->pc = 0x808F2C2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2C2Cu)) return;
    // 808F2C2C: bl      0x808F0F90
    {
            ctx->lr = 0x808F2C30u;
            ctx->pc = 0x808F0F90u;
            return;
    }

label_808F2C30:
    ctx->pc = 0x808F2C30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2C30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F2C30: stw     r3, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2C34:
    ctx->pc = 0x808F2C34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2C34u)) return;
    // 808F2C34: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_808F2C38:
    ctx->pc = 0x808F2C38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2C38u)) return;
    // 808F2C38: bl      0x808F2004
    {
            ctx->lr = 0x808F2C3Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x808F2004u;
                return;
            }
            goto label_808F2004;
    }

label_808F2C3C:
    ctx->pc = 0x808F2C3Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2C3Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 808F2C3C: bl      0x80405C38
    {
            ctx->lr = 0x808F2C40u;
            ctx->pc = 0x80405C38u;
            return;
    }

label_808F2C40:
    ctx->pc = 0x808F2C40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2C40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 808F2C40: lis     r4, -32625
    ctx->gpr[4] = ((u32)(s32)(-32625) << 16);

label_808F2C44:
    ctx->pc = 0x808F2C44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2C44u)) return;
    // 808F2C44: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_808F2C48:
    ctx->pc = 0x808F2C48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2C48u)) return;
    // 808F2C48: addi    r5, r4, 8972
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(8972);

label_808F2C4C:
    ctx->pc = 0x808F2C4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2C4Cu)) return;
    // 808F2C4C: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_808F2C50:
    ctx->pc = 0x808F2C50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2C50u)) return;
    // 808F2C50: bl      0x8050FD60
    {
            ctx->lr = 0x808F2C54u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_808F2C54:
    ctx->pc = 0x808F2C54u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2C54u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 808F2C54: lis     r4, -32625
    ctx->gpr[4] = ((u32)(s32)(-32625) << 16);

label_808F2C58:
    ctx->pc = 0x808F2C58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2C58u)) return;
    // 808F2C58: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_808F2C5C:
    ctx->pc = 0x808F2C5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2C5Cu)) return;
    // 808F2C5C: addi    r5, r4, 9304
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(9304);

label_808F2C60:
    ctx->pc = 0x808F2C60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2C60u)) return;
    // 808F2C60: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_808F2C64:
    ctx->pc = 0x808F2C64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2C64u)) return;
    // 808F2C64: bl      0x8050FD60
    {
            ctx->lr = 0x808F2C68u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_808F2C68:
    ctx->pc = 0x808F2C68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2C68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808F2C68: or.   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[28];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_808F2C6C:
    ctx->pc = 0x808F2C6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2C6Cu)) return;
    // 808F2C6C: bc    12, 2, 0x808F2CD0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_808F2CD0;
        }
    }

label_808F2C70:
    ctx->pc = 0x808F2C70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2C70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 808F2C70: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_808F2C74:
    ctx->pc = 0x808F2C74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2C74u)) return;
    // 808F2C74: li      r4, 12
    ctx->gpr[4] = (u32)(s32)(12);

label_808F2C78:
    ctx->pc = 0x808F2C78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2C78u)) return;
    // 808F2C78: bl      0x8050EEC0
    {
            ctx->lr = 0x808F2C7Cu;
            ctx->pc = 0x8050EEC0u;
            return;
    }

label_808F2C7C:
    ctx->pc = 0x808F2C7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2C7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 808F2C7C: stw     r3, 44(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2C80:
    ctx->pc = 0x808F2C80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2C80u)) return;
    // 808F2C80: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_808F2C84:
    ctx->pc = 0x808F2C84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2C84u)) return;
    // 808F2C84: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_808F2C88:
    ctx->pc = 0x808F2C88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2C88u)) return;
    // 808F2C88: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_808F2C8C:
    ctx->pc = 0x808F2C8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2C8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 808F2C8C: lwz     r27, 44(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(44);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2C90:
    ctx->pc = 0x808F2C90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2C90u)) return;
    // 808F2C90: bl      0x808F17C4
    {
            ctx->lr = 0x808F2C94u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x808F17C4u;
                return;
            }
            goto label_808F17C4;
    }

label_808F2C94:
    ctx->pc = 0x808F2C94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2C94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 808F2C94: lwz     r5, 32(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2C98:
    ctx->pc = 0x808F2C98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2C98u)) return;
    // 808F2C98: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_808F2C9C:
    ctx->pc = 0x808F2C9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2C9Cu)) return;
    // 808F2C9C: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_808F2CA0:
    ctx->pc = 0x808F2CA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2CA0u)) return;
    // 808F2CA0: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_808F2CA4:
    ctx->pc = 0x808F2CA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2CA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F2CA4: stw     r30, 20(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2CA8:
    ctx->pc = 0x808F2CA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2CA8u)) return;
    // 808F2CA8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_808F2CAC:
    ctx->pc = 0x808F2CACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2CACu)) return;
    // 808F2CAC: bl      0x808F0830
    {
            ctx->lr = 0x808F2CB0u;
            ctx->pc = 0x808F0830u;
            return;
    }

label_808F2CB0:
    ctx->pc = 0x808F2CB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2CB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 808F2CB0: lwz     r5, 32(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2CB4:
    ctx->pc = 0x808F2CB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2CB4u)) return;
    // 808F2CB4: lis     r4, -32625
    ctx->gpr[4] = ((u32)(s32)(-32625) << 16);

label_808F2CB8:
    ctx->pc = 0x808F2CB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2CB8u)) return;
    // 808F2CB8: addi    r0, r4, 9228
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(9228);

label_808F2CBC:
    ctx->pc = 0x808F2CBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2CBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 808F2CBC: stw     r3, 24(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2CC0:
    ctx->pc = 0x808F2CC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2CC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 808F2CC0: stw     r30, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2CC4:
    ctx->pc = 0x808F2CC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2CC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F2CC4: stw     r30, 4(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2CC8:
    ctx->pc = 0x808F2CC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2CC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 808F2CC8: stb     r29, 8(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(8);
        mem_write8(ctx, ea, (u8)ctx->gpr[29]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2CCC:
    ctx->pc = 0x808F2CCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2CCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 808F2CCC: stw     r0, 24(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2CD0:
    ctx->pc = 0x808F2CD0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2CD0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 808F2CD0: stw     r28, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2CD4:
    ctx->pc = 0x808F2CD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2CD4u)) return;
    // 808F2CD4: bl      0x80444F74
    {
            ctx->lr = 0x808F2CD8u;
            ctx->pc = 0x80444F74u;
            return;
    }

label_808F2CD8:
    ctx->pc = 0x808F2CD8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 18u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808F2CD8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 18u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 808F2CD8: stw     r3, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2CDC:
    ctx->pc = 0x808F2CDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2CDCu)) return;
    // 808F2CDC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_808F2CE0:
    ctx->pc = 0x808F2CE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 11u, 0x808F2CE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 808F2CE0: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2CE4:
    ctx->pc = 0x808F2CE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2CE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 808F2CE4: lwz     r0, 36(r1)
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
label_808F2CE8:
    ctx->pc = 0x808F2CE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x808F2CE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808F2CE8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808F2CEC:
    ctx->pc = 0x808F2CECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2CECu)) return;
    // 808F2CEC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_808F2CF0:
    ctx->pc = 0x808F2CF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808F2CF0u)) return;
    // 808F2CF0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_808F1060;
        }
    }

    ctx->pc = 0x808F2CF4u;
    return;
return_dispatch_808F1060:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x808F10B0u: goto label_808F10B0;
    case 0x808F10D0u: goto label_808F10D0;
    case 0x808F10E4u: goto label_808F10E4;
    case 0x808F10ECu: goto label_808F10EC;
    case 0x808F1108u: goto label_808F1108;
    case 0x808F1110u: goto label_808F1110;
    case 0x808F111Cu: goto label_808F111C;
    case 0x808F1188u: goto label_808F1188;
    case 0x808F1288u: goto label_808F1288;
    case 0x808F13CCu: goto label_808F13CC;
    case 0x808F13E4u: goto label_808F13E4;
    case 0x808F14B4u: goto label_808F14B4;
    case 0x808F14ECu: goto label_808F14EC;
    case 0x808F171Cu: goto label_808F171C;
    case 0x808F177Cu: goto label_808F177C;
    case 0x808F181Cu: goto label_808F181C;
    case 0x808F1830u: goto label_808F1830;
    case 0x808F1B0Cu: goto label_808F1B0C;
    case 0x808F1B74u: goto label_808F1B74;
    case 0x808F1B98u: goto label_808F1B98;
    case 0x808F1BB0u: goto label_808F1BB0;
    case 0x808F1BB8u: goto label_808F1BB8;
    case 0x808F1BD4u: goto label_808F1BD4;
    case 0x808F1C78u: goto label_808F1C78;
    case 0x808F1CA4u: goto label_808F1CA4;
    case 0x808F1D08u: goto label_808F1D08;
    case 0x808F1D98u: goto label_808F1D98;
    case 0x808F1ED4u: goto label_808F1ED4;
    case 0x808F1F70u: goto label_808F1F70;
    case 0x808F1FD8u: goto label_808F1FD8;
    case 0x808F204Cu: goto label_808F204C;
    case 0x808F2084u: goto label_808F2084;
    case 0x808F2224u: goto label_808F2224;
    case 0x808F229Cu: goto label_808F229C;
    case 0x808F22FCu: goto label_808F22FC;
    case 0x808F2324u: goto label_808F2324;
    case 0x808F232Cu: goto label_808F232C;
    case 0x808F2344u: goto label_808F2344;
    case 0x808F234Cu: goto label_808F234C;
    case 0x808F238Cu: goto label_808F238C;
    case 0x808F23A0u: goto label_808F23A0;
    case 0x808F23B8u: goto label_808F23B8;
    case 0x808F23D4u: goto label_808F23D4;
    case 0x808F2434u: goto label_808F2434;
    case 0x808F2444u: goto label_808F2444;
    case 0x808F24F4u: goto label_808F24F4;
    case 0x808F2510u: goto label_808F2510;
    case 0x808F2534u: goto label_808F2534;
    case 0x808F2550u: goto label_808F2550;
    case 0x808F255Cu: goto label_808F255C;
    case 0x808F2578u: goto label_808F2578;
    case 0x808F2590u: goto label_808F2590;
    case 0x808F25A8u: goto label_808F25A8;
    case 0x808F25B4u: goto label_808F25B4;
    case 0x808F25D0u: goto label_808F25D0;
    case 0x808F263Cu: goto label_808F263C;
    case 0x808F2674u: goto label_808F2674;
    case 0x808F267Cu: goto label_808F267C;
    case 0x808F26A8u: goto label_808F26A8;
    case 0x808F26CCu: goto label_808F26CC;
    case 0x808F26D8u: goto label_808F26D8;
    case 0x808F272Cu: goto label_808F272C;
    case 0x808F2734u: goto label_808F2734;
    case 0x808F274Cu: goto label_808F274C;
    case 0x808F27A4u: goto label_808F27A4;
    case 0x808F27A8u: goto label_808F27A8;
    case 0x808F27ACu: goto label_808F27AC;
    case 0x808F27B0u: goto label_808F27B0;
    case 0x808F27E8u: goto label_808F27E8;
    case 0x808F27ECu: goto label_808F27EC;
    case 0x808F2804u: goto label_808F2804;
    case 0x808F2818u: goto label_808F2818;
    case 0x808F2844u: goto label_808F2844;
    case 0x808F284Cu: goto label_808F284C;
    case 0x808F2898u: goto label_808F2898;
    case 0x808F28CCu: goto label_808F28CC;
    case 0x808F28ECu: goto label_808F28EC;
    case 0x808F28F4u: goto label_808F28F4;
    case 0x808F2904u: goto label_808F2904;
    case 0x808F290Cu: goto label_808F290C;
    case 0x808F2914u: goto label_808F2914;
    case 0x808F2918u: goto label_808F2918;
    case 0x808F291Cu: goto label_808F291C;
    case 0x808F2920u: goto label_808F2920;
    case 0x808F2924u: goto label_808F2924;
    case 0x808F2928u: goto label_808F2928;
    case 0x808F292Cu: goto label_808F292C;
    case 0x808F2934u: goto label_808F2934;
    case 0x808F2940u: goto label_808F2940;
    case 0x808F294Cu: goto label_808F294C;
    case 0x808F2958u: goto label_808F2958;
    case 0x808F2964u: goto label_808F2964;
    case 0x808F2968u: goto label_808F2968;
    case 0x808F2970u: goto label_808F2970;
    case 0x808F2990u: goto label_808F2990;
    case 0x808F2998u: goto label_808F2998;
    case 0x808F29B0u: goto label_808F29B0;
    case 0x808F29B8u: goto label_808F29B8;
    case 0x808F29C0u: goto label_808F29C0;
    case 0x808F29C4u: goto label_808F29C4;
    case 0x808F29C8u: goto label_808F29C8;
    case 0x808F29CCu: goto label_808F29CC;
    case 0x808F29D0u: goto label_808F29D0;
    case 0x808F29D4u: goto label_808F29D4;
    case 0x808F29D8u: goto label_808F29D8;
    case 0x808F29E0u: goto label_808F29E0;
    case 0x808F29ECu: goto label_808F29EC;
    case 0x808F29F8u: goto label_808F29F8;
    case 0x808F2A04u: goto label_808F2A04;
    case 0x808F2A10u: goto label_808F2A10;
    case 0x808F2A14u: goto label_808F2A14;
    case 0x808F2A1Cu: goto label_808F2A1C;
    case 0x808F2A70u: goto label_808F2A70;
    case 0x808F2A78u: goto label_808F2A78;
    case 0x808F2A80u: goto label_808F2A80;
    case 0x808F2A84u: goto label_808F2A84;
    case 0x808F2A88u: goto label_808F2A88;
    case 0x808F2A8Cu: goto label_808F2A8C;
    case 0x808F2A90u: goto label_808F2A90;
    case 0x808F2A94u: goto label_808F2A94;
    case 0x808F2A98u: goto label_808F2A98;
    case 0x808F2AA0u: goto label_808F2AA0;
    case 0x808F2AACu: goto label_808F2AAC;
    case 0x808F2AB8u: goto label_808F2AB8;
    case 0x808F2AC4u: goto label_808F2AC4;
    case 0x808F2AD0u: goto label_808F2AD0;
    case 0x808F2AD4u: goto label_808F2AD4;
    case 0x808F2ADCu: goto label_808F2ADC;
    case 0x808F2B38u: goto label_808F2B38;
    case 0x808F2B3Cu: goto label_808F2B3C;
    case 0x808F2B40u: goto label_808F2B40;
    case 0x808F2B44u: goto label_808F2B44;
    case 0x808F2B48u: goto label_808F2B48;
    case 0x808F2B54u: goto label_808F2B54;
    case 0x808F2B5Cu: goto label_808F2B5C;
    case 0x808F2B64u: goto label_808F2B64;
    case 0x808F2B74u: goto label_808F2B74;
    case 0x808F2B78u: goto label_808F2B78;
    case 0x808F2B80u: goto label_808F2B80;
    case 0x808F2B84u: goto label_808F2B84;
    case 0x808F2B8Cu: goto label_808F2B8C;
    case 0x808F2BA8u: goto label_808F2BA8;
    case 0x808F2BB0u: goto label_808F2BB0;
    case 0x808F2BC8u: goto label_808F2BC8;
    case 0x808F2BD8u: goto label_808F2BD8;
    case 0x808F2BF8u: goto label_808F2BF8;
    case 0x808F2C08u: goto label_808F2C08;
    case 0x808F2C18u: goto label_808F2C18;
    case 0x808F2C28u: goto label_808F2C28;
    case 0x808F2C30u: goto label_808F2C30;
    case 0x808F2C3Cu: goto label_808F2C3C;
    case 0x808F2C40u: goto label_808F2C40;
    case 0x808F2C54u: goto label_808F2C54;
    case 0x808F2C68u: goto label_808F2C68;
    case 0x808F2C7Cu: goto label_808F2C7C;
    case 0x808F2C94u: goto label_808F2C94;
    case 0x808F2CB0u: goto label_808F2CB0;
    case 0x808F2CD8u: goto label_808F2CD8;
    default: return;
    }
}

