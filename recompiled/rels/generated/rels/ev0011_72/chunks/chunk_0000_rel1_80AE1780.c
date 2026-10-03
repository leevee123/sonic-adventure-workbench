// DolRecomp output
#include "../generated.h"

void func_80AE1780(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80AE1780[1402] = {
        &&label_80AE1780,
        &&label_80AE1784,
        &&label_80AE1788,
        &&label_80AE178C,
        &&label_80AE1790,
        &&label_80AE1794,
        &&label_80AE1798,
        &&label_80AE179C,
        &&label_80AE17A0,
        &&label_80AE17A4,
        &&label_80AE17A8,
        &&label_80AE17AC,
        &&label_80AE17B0,
        &&label_80AE17B4,
        &&label_80AE17B8,
        &&label_80AE17BC,
        &&label_80AE17C0,
        &&label_80AE17C4,
        &&label_80AE17C8,
        &&label_80AE17CC,
        &&label_80AE17D0,
        &&label_80AE17D4,
        &&label_80AE17D8,
        &&label_80AE17DC,
        &&label_80AE17E0,
        &&label_80AE17E4,
        &&label_80AE17E8,
        &&label_80AE17EC,
        &&label_80AE17F0,
        &&label_80AE17F4,
        &&label_80AE17F8,
        &&label_80AE17FC,
        &&label_80AE1800,
        &&label_80AE1804,
        &&label_80AE1808,
        &&label_80AE180C,
        &&label_80AE1810,
        &&label_80AE1814,
        &&label_80AE1818,
        &&label_80AE181C,
        &&label_80AE1820,
        &&label_80AE1824,
        &&label_80AE1828,
        &&label_80AE182C,
        &&label_80AE1830,
        &&label_80AE1834,
        &&label_80AE1838,
        &&label_80AE183C,
        &&label_80AE1840,
        &&label_80AE1844,
        &&label_80AE1848,
        &&label_80AE184C,
        &&label_80AE1850,
        &&label_80AE1854,
        &&label_80AE1858,
        &&label_80AE185C,
        &&label_80AE1860,
        &&label_80AE1864,
        &&label_80AE1868,
        &&label_80AE186C,
        &&label_80AE1870,
        &&label_80AE1874,
        &&label_80AE1878,
        &&label_80AE187C,
        &&label_80AE1880,
        &&label_80AE1884,
        &&label_80AE1888,
        &&label_80AE188C,
        &&label_80AE1890,
        &&label_80AE1894,
        &&label_80AE1898,
        &&label_80AE189C,
        &&label_80AE18A0,
        &&label_80AE18A4,
        &&label_80AE18A8,
        &&label_80AE18AC,
        &&label_80AE18B0,
        &&label_80AE18B4,
        &&label_80AE18B8,
        &&label_80AE18BC,
        &&label_80AE18C0,
        &&label_80AE18C4,
        &&label_80AE18C8,
        &&label_80AE18CC,
        &&label_80AE18D0,
        &&label_80AE18D4,
        &&label_80AE18D8,
        &&label_80AE18DC,
        &&label_80AE18E0,
        &&label_80AE18E4,
        &&label_80AE18E8,
        &&label_80AE18EC,
        &&label_80AE18F0,
        &&label_80AE18F4,
        &&label_80AE18F8,
        &&label_80AE18FC,
        &&label_80AE1900,
        &&label_80AE1904,
        &&label_80AE1908,
        &&label_80AE190C,
        &&label_80AE1910,
        &&label_80AE1914,
        &&label_80AE1918,
        &&label_80AE191C,
        &&label_80AE1920,
        &&label_80AE1924,
        &&label_80AE1928,
        &&label_80AE192C,
        &&label_80AE1930,
        &&label_80AE1934,
        &&label_80AE1938,
        &&label_80AE193C,
        &&label_80AE1940,
        &&label_80AE1944,
        &&label_80AE1948,
        &&label_80AE194C,
        &&label_80AE1950,
        &&label_80AE1954,
        &&label_80AE1958,
        &&label_80AE195C,
        &&label_80AE1960,
        &&label_80AE1964,
        &&label_80AE1968,
        &&label_80AE196C,
        &&label_80AE1970,
        &&label_80AE1974,
        &&label_80AE1978,
        &&label_80AE197C,
        &&label_80AE1980,
        &&label_80AE1984,
        &&label_80AE1988,
        &&label_80AE198C,
        &&label_80AE1990,
        &&label_80AE1994,
        &&label_80AE1998,
        &&label_80AE199C,
        &&label_80AE19A0,
        &&label_80AE19A4,
        &&label_80AE19A8,
        &&label_80AE19AC,
        &&label_80AE19B0,
        &&label_80AE19B4,
        &&label_80AE19B8,
        &&label_80AE19BC,
        &&label_80AE19C0,
        &&label_80AE19C4,
        &&label_80AE19C8,
        &&label_80AE19CC,
        &&label_80AE19D0,
        &&label_80AE19D4,
        &&label_80AE19D8,
        &&label_80AE19DC,
        &&label_80AE19E0,
        &&label_80AE19E4,
        &&label_80AE19E8,
        &&label_80AE19EC,
        &&label_80AE19F0,
        &&label_80AE19F4,
        &&label_80AE19F8,
        &&label_80AE19FC,
        &&label_80AE1A00,
        &&label_80AE1A04,
        &&label_80AE1A08,
        &&label_80AE1A0C,
        &&label_80AE1A10,
        &&label_80AE1A14,
        &&label_80AE1A18,
        &&label_80AE1A1C,
        &&label_80AE1A20,
        &&label_80AE1A24,
        &&label_80AE1A28,
        &&label_80AE1A2C,
        &&label_80AE1A30,
        &&label_80AE1A34,
        &&label_80AE1A38,
        &&label_80AE1A3C,
        &&label_80AE1A40,
        &&label_80AE1A44,
        &&label_80AE1A48,
        &&label_80AE1A4C,
        &&label_80AE1A50,
        &&label_80AE1A54,
        &&label_80AE1A58,
        &&label_80AE1A5C,
        &&label_80AE1A60,
        &&label_80AE1A64,
        &&label_80AE1A68,
        &&label_80AE1A6C,
        &&label_80AE1A70,
        &&label_80AE1A74,
        &&label_80AE1A78,
        &&label_80AE1A7C,
        &&label_80AE1A80,
        &&label_80AE1A84,
        &&label_80AE1A88,
        &&label_80AE1A8C,
        &&label_80AE1A90,
        &&label_80AE1A94,
        &&label_80AE1A98,
        &&label_80AE1A9C,
        &&label_80AE1AA0,
        &&label_80AE1AA4,
        &&label_80AE1AA8,
        &&label_80AE1AAC,
        &&label_80AE1AB0,
        &&label_80AE1AB4,
        &&label_80AE1AB8,
        &&label_80AE1ABC,
        &&label_80AE1AC0,
        &&label_80AE1AC4,
        &&label_80AE1AC8,
        &&label_80AE1ACC,
        &&label_80AE1AD0,
        &&label_80AE1AD4,
        &&label_80AE1AD8,
        &&label_80AE1ADC,
        &&label_80AE1AE0,
        &&label_80AE1AE4,
        &&label_80AE1AE8,
        &&label_80AE1AEC,
        &&label_80AE1AF0,
        &&label_80AE1AF4,
        &&label_80AE1AF8,
        &&label_80AE1AFC,
        &&label_80AE1B00,
        &&label_80AE1B04,
        &&label_80AE1B08,
        &&label_80AE1B0C,
        &&label_80AE1B10,
        &&label_80AE1B14,
        &&label_80AE1B18,
        &&label_80AE1B1C,
        &&label_80AE1B20,
        &&label_80AE1B24,
        &&label_80AE1B28,
        &&label_80AE1B2C,
        &&label_80AE1B30,
        &&label_80AE1B34,
        &&label_80AE1B38,
        &&label_80AE1B3C,
        &&label_80AE1B40,
        &&label_80AE1B44,
        &&label_80AE1B48,
        &&label_80AE1B4C,
        &&label_80AE1B50,
        &&label_80AE1B54,
        &&label_80AE1B58,
        &&label_80AE1B5C,
        &&label_80AE1B60,
        &&label_80AE1B64,
        &&label_80AE1B68,
        &&label_80AE1B6C,
        &&label_80AE1B70,
        &&label_80AE1B74,
        &&label_80AE1B78,
        &&label_80AE1B7C,
        &&label_80AE1B80,
        &&label_80AE1B84,
        &&label_80AE1B88,
        &&label_80AE1B8C,
        &&label_80AE1B90,
        &&label_80AE1B94,
        &&label_80AE1B98,
        &&label_80AE1B9C,
        &&label_80AE1BA0,
        &&label_80AE1BA4,
        &&label_80AE1BA8,
        &&label_80AE1BAC,
        &&label_80AE1BB0,
        &&label_80AE1BB4,
        &&label_80AE1BB8,
        &&label_80AE1BBC,
        &&label_80AE1BC0,
        &&label_80AE1BC4,
        &&label_80AE1BC8,
        &&label_80AE1BCC,
        &&label_80AE1BD0,
        &&label_80AE1BD4,
        &&label_80AE1BD8,
        &&label_80AE1BDC,
        &&label_80AE1BE0,
        &&label_80AE1BE4,
        &&label_80AE1BE8,
        &&label_80AE1BEC,
        &&label_80AE1BF0,
        &&label_80AE1BF4,
        &&label_80AE1BF8,
        &&label_80AE1BFC,
        &&label_80AE1C00,
        &&label_80AE1C04,
        &&label_80AE1C08,
        &&label_80AE1C0C,
        &&label_80AE1C10,
        &&label_80AE1C14,
        &&label_80AE1C18,
        &&label_80AE1C1C,
        &&label_80AE1C20,
        &&label_80AE1C24,
        &&label_80AE1C28,
        &&label_80AE1C2C,
        &&label_80AE1C30,
        &&label_80AE1C34,
        &&label_80AE1C38,
        &&label_80AE1C3C,
        &&label_80AE1C40,
        &&label_80AE1C44,
        &&label_80AE1C48,
        &&label_80AE1C4C,
        &&label_80AE1C50,
        &&label_80AE1C54,
        &&label_80AE1C58,
        &&label_80AE1C5C,
        &&label_80AE1C60,
        &&label_80AE1C64,
        &&label_80AE1C68,
        &&label_80AE1C6C,
        &&label_80AE1C70,
        &&label_80AE1C74,
        &&label_80AE1C78,
        &&label_80AE1C7C,
        &&label_80AE1C80,
        &&label_80AE1C84,
        &&label_80AE1C88,
        &&label_80AE1C8C,
        &&label_80AE1C90,
        &&label_80AE1C94,
        &&label_80AE1C98,
        &&label_80AE1C9C,
        &&label_80AE1CA0,
        &&label_80AE1CA4,
        &&label_80AE1CA8,
        &&label_80AE1CAC,
        &&label_80AE1CB0,
        &&label_80AE1CB4,
        &&label_80AE1CB8,
        &&label_80AE1CBC,
        &&label_80AE1CC0,
        &&label_80AE1CC4,
        &&label_80AE1CC8,
        &&label_80AE1CCC,
        &&label_80AE1CD0,
        &&label_80AE1CD4,
        &&label_80AE1CD8,
        &&label_80AE1CDC,
        &&label_80AE1CE0,
        &&label_80AE1CE4,
        &&label_80AE1CE8,
        &&label_80AE1CEC,
        &&label_80AE1CF0,
        &&label_80AE1CF4,
        &&label_80AE1CF8,
        &&label_80AE1CFC,
        &&label_80AE1D00,
        &&label_80AE1D04,
        &&label_80AE1D08,
        &&label_80AE1D0C,
        &&label_80AE1D10,
        &&label_80AE1D14,
        &&label_80AE1D18,
        &&label_80AE1D1C,
        &&label_80AE1D20,
        &&label_80AE1D24,
        &&label_80AE1D28,
        &&label_80AE1D2C,
        &&label_80AE1D30,
        &&label_80AE1D34,
        &&label_80AE1D38,
        &&label_80AE1D3C,
        &&label_80AE1D40,
        &&label_80AE1D44,
        &&label_80AE1D48,
        &&label_80AE1D4C,
        &&label_80AE1D50,
        &&label_80AE1D54,
        &&label_80AE1D58,
        &&label_80AE1D5C,
        &&label_80AE1D60,
        &&label_80AE1D64,
        &&label_80AE1D68,
        &&label_80AE1D6C,
        &&label_80AE1D70,
        &&label_80AE1D74,
        &&label_80AE1D78,
        &&label_80AE1D7C,
        &&label_80AE1D80,
        &&label_80AE1D84,
        &&label_80AE1D88,
        &&label_80AE1D8C,
        &&label_80AE1D90,
        &&label_80AE1D94,
        &&label_80AE1D98,
        &&label_80AE1D9C,
        &&label_80AE1DA0,
        &&label_80AE1DA4,
        &&label_80AE1DA8,
        &&label_80AE1DAC,
        &&label_80AE1DB0,
        &&label_80AE1DB4,
        &&label_80AE1DB8,
        &&label_80AE1DBC,
        &&label_80AE1DC0,
        &&label_80AE1DC4,
        &&label_80AE1DC8,
        &&label_80AE1DCC,
        &&label_80AE1DD0,
        &&label_80AE1DD4,
        &&label_80AE1DD8,
        &&label_80AE1DDC,
        &&label_80AE1DE0,
        &&label_80AE1DE4,
        &&label_80AE1DE8,
        &&label_80AE1DEC,
        &&label_80AE1DF0,
        &&label_80AE1DF4,
        &&label_80AE1DF8,
        &&label_80AE1DFC,
        &&label_80AE1E00,
        &&label_80AE1E04,
        &&label_80AE1E08,
        &&label_80AE1E0C,
        &&label_80AE1E10,
        &&label_80AE1E14,
        &&label_80AE1E18,
        &&label_80AE1E1C,
        &&label_80AE1E20,
        &&label_80AE1E24,
        &&label_80AE1E28,
        &&label_80AE1E2C,
        &&label_80AE1E30,
        &&label_80AE1E34,
        &&label_80AE1E38,
        &&label_80AE1E3C,
        &&label_80AE1E40,
        &&label_80AE1E44,
        &&label_80AE1E48,
        &&label_80AE1E4C,
        &&label_80AE1E50,
        &&label_80AE1E54,
        &&label_80AE1E58,
        &&label_80AE1E5C,
        &&label_80AE1E60,
        &&label_80AE1E64,
        &&label_80AE1E68,
        &&label_80AE1E6C,
        &&label_80AE1E70,
        &&label_80AE1E74,
        &&label_80AE1E78,
        &&label_80AE1E7C,
        &&label_80AE1E80,
        &&label_80AE1E84,
        &&label_80AE1E88,
        &&label_80AE1E8C,
        &&label_80AE1E90,
        &&label_80AE1E94,
        &&label_80AE1E98,
        &&label_80AE1E9C,
        &&label_80AE1EA0,
        &&label_80AE1EA4,
        &&label_80AE1EA8,
        &&label_80AE1EAC,
        &&label_80AE1EB0,
        &&label_80AE1EB4,
        &&label_80AE1EB8,
        &&label_80AE1EBC,
        &&label_80AE1EC0,
        &&label_80AE1EC4,
        &&label_80AE1EC8,
        &&label_80AE1ECC,
        &&label_80AE1ED0,
        &&label_80AE1ED4,
        &&label_80AE1ED8,
        &&label_80AE1EDC,
        &&label_80AE1EE0,
        &&label_80AE1EE4,
        &&label_80AE1EE8,
        &&label_80AE1EEC,
        &&label_80AE1EF0,
        &&label_80AE1EF4,
        &&label_80AE1EF8,
        &&label_80AE1EFC,
        &&label_80AE1F00,
        &&label_80AE1F04,
        &&label_80AE1F08,
        &&label_80AE1F0C,
        &&label_80AE1F10,
        &&label_80AE1F14,
        &&label_80AE1F18,
        &&label_80AE1F1C,
        &&label_80AE1F20,
        &&label_80AE1F24,
        &&label_80AE1F28,
        &&label_80AE1F2C,
        &&label_80AE1F30,
        &&label_80AE1F34,
        &&label_80AE1F38,
        &&label_80AE1F3C,
        &&label_80AE1F40,
        &&label_80AE1F44,
        &&label_80AE1F48,
        &&label_80AE1F4C,
        &&label_80AE1F50,
        &&label_80AE1F54,
        &&label_80AE1F58,
        &&label_80AE1F5C,
        &&label_80AE1F60,
        &&label_80AE1F64,
        &&label_80AE1F68,
        &&label_80AE1F6C,
        &&label_80AE1F70,
        &&label_80AE1F74,
        &&label_80AE1F78,
        &&label_80AE1F7C,
        &&label_80AE1F80,
        &&label_80AE1F84,
        &&label_80AE1F88,
        &&label_80AE1F8C,
        &&label_80AE1F90,
        &&label_80AE1F94,
        &&label_80AE1F98,
        &&label_80AE1F9C,
        &&label_80AE1FA0,
        &&label_80AE1FA4,
        &&label_80AE1FA8,
        &&label_80AE1FAC,
        &&label_80AE1FB0,
        &&label_80AE1FB4,
        &&label_80AE1FB8,
        &&label_80AE1FBC,
        &&label_80AE1FC0,
        &&label_80AE1FC4,
        &&label_80AE1FC8,
        &&label_80AE1FCC,
        &&label_80AE1FD0,
        &&label_80AE1FD4,
        &&label_80AE1FD8,
        &&label_80AE1FDC,
        &&label_80AE1FE0,
        &&label_80AE1FE4,
        &&label_80AE1FE8,
        &&label_80AE1FEC,
        &&label_80AE1FF0,
        &&label_80AE1FF4,
        &&label_80AE1FF8,
        &&label_80AE1FFC,
        &&label_80AE2000,
        &&label_80AE2004,
        &&label_80AE2008,
        &&label_80AE200C,
        &&label_80AE2010,
        &&label_80AE2014,
        &&label_80AE2018,
        &&label_80AE201C,
        &&label_80AE2020,
        &&label_80AE2024,
        &&label_80AE2028,
        &&label_80AE202C,
        &&label_80AE2030,
        &&label_80AE2034,
        &&label_80AE2038,
        &&label_80AE203C,
        &&label_80AE2040,
        &&label_80AE2044,
        &&label_80AE2048,
        &&label_80AE204C,
        &&label_80AE2050,
        &&label_80AE2054,
        &&label_80AE2058,
        &&label_80AE205C,
        &&label_80AE2060,
        &&label_80AE2064,
        &&label_80AE2068,
        &&label_80AE206C,
        &&label_80AE2070,
        &&label_80AE2074,
        &&label_80AE2078,
        &&label_80AE207C,
        &&label_80AE2080,
        &&label_80AE2084,
        &&label_80AE2088,
        &&label_80AE208C,
        &&label_80AE2090,
        &&label_80AE2094,
        &&label_80AE2098,
        &&label_80AE209C,
        &&label_80AE20A0,
        &&label_80AE20A4,
        &&label_80AE20A8,
        &&label_80AE20AC,
        &&label_80AE20B0,
        &&label_80AE20B4,
        &&label_80AE20B8,
        &&label_80AE20BC,
        &&label_80AE20C0,
        &&label_80AE20C4,
        &&label_80AE20C8,
        &&label_80AE20CC,
        &&label_80AE20D0,
        &&label_80AE20D4,
        &&label_80AE20D8,
        &&label_80AE20DC,
        &&label_80AE20E0,
        &&label_80AE20E4,
        &&label_80AE20E8,
        &&label_80AE20EC,
        &&label_80AE20F0,
        &&label_80AE20F4,
        &&label_80AE20F8,
        &&label_80AE20FC,
        &&label_80AE2100,
        &&label_80AE2104,
        &&label_80AE2108,
        &&label_80AE210C,
        &&label_80AE2110,
        &&label_80AE2114,
        &&label_80AE2118,
        &&label_80AE211C,
        &&label_80AE2120,
        &&label_80AE2124,
        &&label_80AE2128,
        &&label_80AE212C,
        &&label_80AE2130,
        &&label_80AE2134,
        &&label_80AE2138,
        &&label_80AE213C,
        &&label_80AE2140,
        &&label_80AE2144,
        &&label_80AE2148,
        &&label_80AE214C,
        &&label_80AE2150,
        &&label_80AE2154,
        &&label_80AE2158,
        &&label_80AE215C,
        &&label_80AE2160,
        &&label_80AE2164,
        &&label_80AE2168,
        &&label_80AE216C,
        &&label_80AE2170,
        &&label_80AE2174,
        &&label_80AE2178,
        &&label_80AE217C,
        &&label_80AE2180,
        &&label_80AE2184,
        &&label_80AE2188,
        &&label_80AE218C,
        &&label_80AE2190,
        &&label_80AE2194,
        &&label_80AE2198,
        &&label_80AE219C,
        &&label_80AE21A0,
        &&label_80AE21A4,
        &&label_80AE21A8,
        &&label_80AE21AC,
        &&label_80AE21B0,
        &&label_80AE21B4,
        &&label_80AE21B8,
        &&label_80AE21BC,
        &&label_80AE21C0,
        &&label_80AE21C4,
        &&label_80AE21C8,
        &&label_80AE21CC,
        &&label_80AE21D0,
        &&label_80AE21D4,
        &&label_80AE21D8,
        &&label_80AE21DC,
        &&label_80AE21E0,
        &&label_80AE21E4,
        &&label_80AE21E8,
        &&label_80AE21EC,
        &&label_80AE21F0,
        &&label_80AE21F4,
        &&label_80AE21F8,
        &&label_80AE21FC,
        &&label_80AE2200,
        &&label_80AE2204,
        &&label_80AE2208,
        &&label_80AE220C,
        &&label_80AE2210,
        &&label_80AE2214,
        &&label_80AE2218,
        &&label_80AE221C,
        &&label_80AE2220,
        &&label_80AE2224,
        &&label_80AE2228,
        &&label_80AE222C,
        &&label_80AE2230,
        &&label_80AE2234,
        &&label_80AE2238,
        &&label_80AE223C,
        &&label_80AE2240,
        &&label_80AE2244,
        &&label_80AE2248,
        &&label_80AE224C,
        &&label_80AE2250,
        &&label_80AE2254,
        &&label_80AE2258,
        &&label_80AE225C,
        &&label_80AE2260,
        &&label_80AE2264,
        &&label_80AE2268,
        &&label_80AE226C,
        &&label_80AE2270,
        &&label_80AE2274,
        &&label_80AE2278,
        &&label_80AE227C,
        &&label_80AE2280,
        &&label_80AE2284,
        &&label_80AE2288,
        &&label_80AE228C,
        &&label_80AE2290,
        &&label_80AE2294,
        &&label_80AE2298,
        &&label_80AE229C,
        &&label_80AE22A0,
        &&label_80AE22A4,
        &&label_80AE22A8,
        &&label_80AE22AC,
        &&label_80AE22B0,
        &&label_80AE22B4,
        &&label_80AE22B8,
        &&label_80AE22BC,
        &&label_80AE22C0,
        &&label_80AE22C4,
        &&label_80AE22C8,
        &&label_80AE22CC,
        &&label_80AE22D0,
        &&label_80AE22D4,
        &&label_80AE22D8,
        &&label_80AE22DC,
        &&label_80AE22E0,
        &&label_80AE22E4,
        &&label_80AE22E8,
        &&label_80AE22EC,
        &&label_80AE22F0,
        &&label_80AE22F4,
        &&label_80AE22F8,
        &&label_80AE22FC,
        &&label_80AE2300,
        &&label_80AE2304,
        &&label_80AE2308,
        &&label_80AE230C,
        &&label_80AE2310,
        &&label_80AE2314,
        &&label_80AE2318,
        &&label_80AE231C,
        &&label_80AE2320,
        &&label_80AE2324,
        &&label_80AE2328,
        &&label_80AE232C,
        &&label_80AE2330,
        &&label_80AE2334,
        &&label_80AE2338,
        &&label_80AE233C,
        &&label_80AE2340,
        &&label_80AE2344,
        &&label_80AE2348,
        &&label_80AE234C,
        &&label_80AE2350,
        &&label_80AE2354,
        &&label_80AE2358,
        &&label_80AE235C,
        &&label_80AE2360,
        &&label_80AE2364,
        &&label_80AE2368,
        &&label_80AE236C,
        &&label_80AE2370,
        &&label_80AE2374,
        &&label_80AE2378,
        &&label_80AE237C,
        &&label_80AE2380,
        &&label_80AE2384,
        &&label_80AE2388,
        &&label_80AE238C,
        &&label_80AE2390,
        &&label_80AE2394,
        &&label_80AE2398,
        &&label_80AE239C,
        &&label_80AE23A0,
        &&label_80AE23A4,
        &&label_80AE23A8,
        &&label_80AE23AC,
        &&label_80AE23B0,
        &&label_80AE23B4,
        &&label_80AE23B8,
        &&label_80AE23BC,
        &&label_80AE23C0,
        &&label_80AE23C4,
        &&label_80AE23C8,
        &&label_80AE23CC,
        &&label_80AE23D0,
        &&label_80AE23D4,
        &&label_80AE23D8,
        &&label_80AE23DC,
        &&label_80AE23E0,
        &&label_80AE23E4,
        &&label_80AE23E8,
        &&label_80AE23EC,
        &&label_80AE23F0,
        &&label_80AE23F4,
        &&label_80AE23F8,
        &&label_80AE23FC,
        &&label_80AE2400,
        &&label_80AE2404,
        &&label_80AE2408,
        &&label_80AE240C,
        &&label_80AE2410,
        &&label_80AE2414,
        &&label_80AE2418,
        &&label_80AE241C,
        &&label_80AE2420,
        &&label_80AE2424,
        &&label_80AE2428,
        &&label_80AE242C,
        &&label_80AE2430,
        &&label_80AE2434,
        &&label_80AE2438,
        &&label_80AE243C,
        &&label_80AE2440,
        &&label_80AE2444,
        &&label_80AE2448,
        &&label_80AE244C,
        &&label_80AE2450,
        &&label_80AE2454,
        &&label_80AE2458,
        &&label_80AE245C,
        &&label_80AE2460,
        &&label_80AE2464,
        &&label_80AE2468,
        &&label_80AE246C,
        &&label_80AE2470,
        &&label_80AE2474,
        &&label_80AE2478,
        &&label_80AE247C,
        &&label_80AE2480,
        &&label_80AE2484,
        &&label_80AE2488,
        &&label_80AE248C,
        &&label_80AE2490,
        &&label_80AE2494,
        &&label_80AE2498,
        &&label_80AE249C,
        &&label_80AE24A0,
        &&label_80AE24A4,
        &&label_80AE24A8,
        &&label_80AE24AC,
        &&label_80AE24B0,
        &&label_80AE24B4,
        &&label_80AE24B8,
        &&label_80AE24BC,
        &&label_80AE24C0,
        &&label_80AE24C4,
        &&label_80AE24C8,
        &&label_80AE24CC,
        &&label_80AE24D0,
        &&label_80AE24D4,
        &&label_80AE24D8,
        &&label_80AE24DC,
        &&label_80AE24E0,
        &&label_80AE24E4,
        &&label_80AE24E8,
        &&label_80AE24EC,
        &&label_80AE24F0,
        &&label_80AE24F4,
        &&label_80AE24F8,
        &&label_80AE24FC,
        &&label_80AE2500,
        &&label_80AE2504,
        &&label_80AE2508,
        &&label_80AE250C,
        &&label_80AE2510,
        &&label_80AE2514,
        &&label_80AE2518,
        &&label_80AE251C,
        &&label_80AE2520,
        &&label_80AE2524,
        &&label_80AE2528,
        &&label_80AE252C,
        &&label_80AE2530,
        &&label_80AE2534,
        &&label_80AE2538,
        &&label_80AE253C,
        &&label_80AE2540,
        &&label_80AE2544,
        &&label_80AE2548,
        &&label_80AE254C,
        &&label_80AE2550,
        &&label_80AE2554,
        &&label_80AE2558,
        &&label_80AE255C,
        &&label_80AE2560,
        &&label_80AE2564,
        &&label_80AE2568,
        &&label_80AE256C,
        &&label_80AE2570,
        &&label_80AE2574,
        &&label_80AE2578,
        &&label_80AE257C,
        &&label_80AE2580,
        &&label_80AE2584,
        &&label_80AE2588,
        &&label_80AE258C,
        &&label_80AE2590,
        &&label_80AE2594,
        &&label_80AE2598,
        &&label_80AE259C,
        &&label_80AE25A0,
        &&label_80AE25A4,
        &&label_80AE25A8,
        &&label_80AE25AC,
        &&label_80AE25B0,
        &&label_80AE25B4,
        &&label_80AE25B8,
        &&label_80AE25BC,
        &&label_80AE25C0,
        &&label_80AE25C4,
        &&label_80AE25C8,
        &&label_80AE25CC,
        &&label_80AE25D0,
        &&label_80AE25D4,
        &&label_80AE25D8,
        &&label_80AE25DC,
        &&label_80AE25E0,
        &&label_80AE25E4,
        &&label_80AE25E8,
        &&label_80AE25EC,
        &&label_80AE25F0,
        &&label_80AE25F4,
        &&label_80AE25F8,
        &&label_80AE25FC,
        &&label_80AE2600,
        &&label_80AE2604,
        &&label_80AE2608,
        &&label_80AE260C,
        &&label_80AE2610,
        &&label_80AE2614,
        &&label_80AE2618,
        &&label_80AE261C,
        &&label_80AE2620,
        &&label_80AE2624,
        &&label_80AE2628,
        &&label_80AE262C,
        &&label_80AE2630,
        &&label_80AE2634,
        &&label_80AE2638,
        &&label_80AE263C,
        &&label_80AE2640,
        &&label_80AE2644,
        &&label_80AE2648,
        &&label_80AE264C,
        &&label_80AE2650,
        &&label_80AE2654,
        &&label_80AE2658,
        &&label_80AE265C,
        &&label_80AE2660,
        &&label_80AE2664,
        &&label_80AE2668,
        &&label_80AE266C,
        &&label_80AE2670,
        &&label_80AE2674,
        &&label_80AE2678,
        &&label_80AE267C,
        &&label_80AE2680,
        &&label_80AE2684,
        &&label_80AE2688,
        &&label_80AE268C,
        &&label_80AE2690,
        &&label_80AE2694,
        &&label_80AE2698,
        &&label_80AE269C,
        &&label_80AE26A0,
        &&label_80AE26A4,
        &&label_80AE26A8,
        &&label_80AE26AC,
        &&label_80AE26B0,
        &&label_80AE26B4,
        &&label_80AE26B8,
        &&label_80AE26BC,
        &&label_80AE26C0,
        &&label_80AE26C4,
        &&label_80AE26C8,
        &&label_80AE26CC,
        &&label_80AE26D0,
        &&label_80AE26D4,
        &&label_80AE26D8,
        &&label_80AE26DC,
        &&label_80AE26E0,
        &&label_80AE26E4,
        &&label_80AE26E8,
        &&label_80AE26EC,
        &&label_80AE26F0,
        &&label_80AE26F4,
        &&label_80AE26F8,
        &&label_80AE26FC,
        &&label_80AE2700,
        &&label_80AE2704,
        &&label_80AE2708,
        &&label_80AE270C,
        &&label_80AE2710,
        &&label_80AE2714,
        &&label_80AE2718,
        &&label_80AE271C,
        &&label_80AE2720,
        &&label_80AE2724,
        &&label_80AE2728,
        &&label_80AE272C,
        &&label_80AE2730,
        &&label_80AE2734,
        &&label_80AE2738,
        &&label_80AE273C,
        &&label_80AE2740,
        &&label_80AE2744,
        &&label_80AE2748,
        &&label_80AE274C,
        &&label_80AE2750,
        &&label_80AE2754,
        &&label_80AE2758,
        &&label_80AE275C,
        &&label_80AE2760,
        &&label_80AE2764,
        &&label_80AE2768,
        &&label_80AE276C,
        &&label_80AE2770,
        &&label_80AE2774,
        &&label_80AE2778,
        &&label_80AE277C,
        &&label_80AE2780,
        &&label_80AE2784,
        &&label_80AE2788,
        &&label_80AE278C,
        &&label_80AE2790,
        &&label_80AE2794,
        &&label_80AE2798,
        &&label_80AE279C,
        &&label_80AE27A0,
        &&label_80AE27A4,
        &&label_80AE27A8,
        &&label_80AE27AC,
        &&label_80AE27B0,
        &&label_80AE27B4,
        &&label_80AE27B8,
        &&label_80AE27BC,
        &&label_80AE27C0,
        &&label_80AE27C4,
        &&label_80AE27C8,
        &&label_80AE27CC,
        &&label_80AE27D0,
        &&label_80AE27D4,
        &&label_80AE27D8,
        &&label_80AE27DC,
        &&label_80AE27E0,
        &&label_80AE27E4,
        &&label_80AE27E8,
        &&label_80AE27EC,
        &&label_80AE27F0,
        &&label_80AE27F4,
        &&label_80AE27F8,
        &&label_80AE27FC,
        &&label_80AE2800,
        &&label_80AE2804,
        &&label_80AE2808,
        &&label_80AE280C,
        &&label_80AE2810,
        &&label_80AE2814,
        &&label_80AE2818,
        &&label_80AE281C,
        &&label_80AE2820,
        &&label_80AE2824,
        &&label_80AE2828,
        &&label_80AE282C,
        &&label_80AE2830,
        &&label_80AE2834,
        &&label_80AE2838,
        &&label_80AE283C,
        &&label_80AE2840,
        &&label_80AE2844,
        &&label_80AE2848,
        &&label_80AE284C,
        &&label_80AE2850,
        &&label_80AE2854,
        &&label_80AE2858,
        &&label_80AE285C,
        &&label_80AE2860,
        &&label_80AE2864,
        &&label_80AE2868,
        &&label_80AE286C,
        &&label_80AE2870,
        &&label_80AE2874,
        &&label_80AE2878,
        &&label_80AE287C,
        &&label_80AE2880,
        &&label_80AE2884,
        &&label_80AE2888,
        &&label_80AE288C,
        &&label_80AE2890,
        &&label_80AE2894,
        &&label_80AE2898,
        &&label_80AE289C,
        &&label_80AE28A0,
        &&label_80AE28A4,
        &&label_80AE28A8,
        &&label_80AE28AC,
        &&label_80AE28B0,
        &&label_80AE28B4,
        &&label_80AE28B8,
        &&label_80AE28BC,
        &&label_80AE28C0,
        &&label_80AE28C4,
        &&label_80AE28C8,
        &&label_80AE28CC,
        &&label_80AE28D0,
        &&label_80AE28D4,
        &&label_80AE28D8,
        &&label_80AE28DC,
        &&label_80AE28E0,
        &&label_80AE28E4,
        &&label_80AE28E8,
        &&label_80AE28EC,
        &&label_80AE28F0,
        &&label_80AE28F4,
        &&label_80AE28F8,
        &&label_80AE28FC,
        &&label_80AE2900,
        &&label_80AE2904,
        &&label_80AE2908,
        &&label_80AE290C,
        &&label_80AE2910,
        &&label_80AE2914,
        &&label_80AE2918,
        &&label_80AE291C,
        &&label_80AE2920,
        &&label_80AE2924,
        &&label_80AE2928,
        &&label_80AE292C,
        &&label_80AE2930,
        &&label_80AE2934,
        &&label_80AE2938,
        &&label_80AE293C,
        &&label_80AE2940,
        &&label_80AE2944,
        &&label_80AE2948,
        &&label_80AE294C,
        &&label_80AE2950,
        &&label_80AE2954,
        &&label_80AE2958,
        &&label_80AE295C,
        &&label_80AE2960,
        &&label_80AE2964,
        &&label_80AE2968,
        &&label_80AE296C,
        &&label_80AE2970,
        &&label_80AE2974,
        &&label_80AE2978,
        &&label_80AE297C,
        &&label_80AE2980,
        &&label_80AE2984,
        &&label_80AE2988,
        &&label_80AE298C,
        &&label_80AE2990,
        &&label_80AE2994,
        &&label_80AE2998,
        &&label_80AE299C,
        &&label_80AE29A0,
        &&label_80AE29A4,
        &&label_80AE29A8,
        &&label_80AE29AC,
        &&label_80AE29B0,
        &&label_80AE29B4,
        &&label_80AE29B8,
        &&label_80AE29BC,
        &&label_80AE29C0,
        &&label_80AE29C4,
        &&label_80AE29C8,
        &&label_80AE29CC,
        &&label_80AE29D0,
        &&label_80AE29D4,
        &&label_80AE29D8,
        &&label_80AE29DC,
        &&label_80AE29E0,
        &&label_80AE29E4,
        &&label_80AE29E8,
        &&label_80AE29EC,
        &&label_80AE29F0,
        &&label_80AE29F4,
        &&label_80AE29F8,
        &&label_80AE29FC,
        &&label_80AE2A00,
        &&label_80AE2A04,
        &&label_80AE2A08,
        &&label_80AE2A0C,
        &&label_80AE2A10,
        &&label_80AE2A14,
        &&label_80AE2A18,
        &&label_80AE2A1C,
        &&label_80AE2A20,
        &&label_80AE2A24,
        &&label_80AE2A28,
        &&label_80AE2A2C,
        &&label_80AE2A30,
        &&label_80AE2A34,
        &&label_80AE2A38,
        &&label_80AE2A3C,
        &&label_80AE2A40,
        &&label_80AE2A44,
        &&label_80AE2A48,
        &&label_80AE2A4C,
        &&label_80AE2A50,
        &&label_80AE2A54,
        &&label_80AE2A58,
        &&label_80AE2A5C,
        &&label_80AE2A60,
        &&label_80AE2A64,
        &&label_80AE2A68,
        &&label_80AE2A6C,
        &&label_80AE2A70,
        &&label_80AE2A74,
        &&label_80AE2A78,
        &&label_80AE2A7C,
        &&label_80AE2A80,
        &&label_80AE2A84,
        &&label_80AE2A88,
        &&label_80AE2A8C,
        &&label_80AE2A90,
        &&label_80AE2A94,
        &&label_80AE2A98,
        &&label_80AE2A9C,
        &&label_80AE2AA0,
        &&label_80AE2AA4,
        &&label_80AE2AA8,
        &&label_80AE2AAC,
        &&label_80AE2AB0,
        &&label_80AE2AB4,
        &&label_80AE2AB8,
        &&label_80AE2ABC,
        &&label_80AE2AC0,
        &&label_80AE2AC4,
        &&label_80AE2AC8,
        &&label_80AE2ACC,
        &&label_80AE2AD0,
        &&label_80AE2AD4,
        &&label_80AE2AD8,
        &&label_80AE2ADC,
        &&label_80AE2AE0,
        &&label_80AE2AE4,
        &&label_80AE2AE8,
        &&label_80AE2AEC,
        &&label_80AE2AF0,
        &&label_80AE2AF4,
        &&label_80AE2AF8,
        &&label_80AE2AFC,
        &&label_80AE2B00,
        &&label_80AE2B04,
        &&label_80AE2B08,
        &&label_80AE2B0C,
        &&label_80AE2B10,
        &&label_80AE2B14,
        &&label_80AE2B18,
        &&label_80AE2B1C,
        &&label_80AE2B20,
        &&label_80AE2B24,
        &&label_80AE2B28,
        &&label_80AE2B2C,
        &&label_80AE2B30,
        &&label_80AE2B34,
        &&label_80AE2B38,
        &&label_80AE2B3C,
        &&label_80AE2B40,
        &&label_80AE2B44,
        &&label_80AE2B48,
        &&label_80AE2B4C,
        &&label_80AE2B50,
        &&label_80AE2B54,
        &&label_80AE2B58,
        &&label_80AE2B5C,
        &&label_80AE2B60,
        &&label_80AE2B64,
        &&label_80AE2B68,
        &&label_80AE2B6C,
        &&label_80AE2B70,
        &&label_80AE2B74,
        &&label_80AE2B78,
        &&label_80AE2B7C,
        &&label_80AE2B80,
        &&label_80AE2B84,
        &&label_80AE2B88,
        &&label_80AE2B8C,
        &&label_80AE2B90,
        &&label_80AE2B94,
        &&label_80AE2B98,
        &&label_80AE2B9C,
        &&label_80AE2BA0,
        &&label_80AE2BA4,
        &&label_80AE2BA8,
        &&label_80AE2BAC,
        &&label_80AE2BB0,
        &&label_80AE2BB4,
        &&label_80AE2BB8,
        &&label_80AE2BBC,
        &&label_80AE2BC0,
        &&label_80AE2BC4,
        &&label_80AE2BC8,
        &&label_80AE2BCC,
        &&label_80AE2BD0,
        &&label_80AE2BD4,
        &&label_80AE2BD8,
        &&label_80AE2BDC,
        &&label_80AE2BE0,
        &&label_80AE2BE4,
        &&label_80AE2BE8,
        &&label_80AE2BEC,
        &&label_80AE2BF0,
        &&label_80AE2BF4,
        &&label_80AE2BF8,
        &&label_80AE2BFC,
        &&label_80AE2C00,
        &&label_80AE2C04,
        &&label_80AE2C08,
        &&label_80AE2C0C,
        &&label_80AE2C10,
        &&label_80AE2C14,
        &&label_80AE2C18,
        &&label_80AE2C1C,
        &&label_80AE2C20,
        &&label_80AE2C24,
        &&label_80AE2C28,
        &&label_80AE2C2C,
        &&label_80AE2C30,
        &&label_80AE2C34,
        &&label_80AE2C38,
        &&label_80AE2C3C,
        &&label_80AE2C40,
        &&label_80AE2C44,
        &&label_80AE2C48,
        &&label_80AE2C4C,
        &&label_80AE2C50,
        &&label_80AE2C54,
        &&label_80AE2C58,
        &&label_80AE2C5C,
        &&label_80AE2C60,
        &&label_80AE2C64,
        &&label_80AE2C68,
        &&label_80AE2C6C,
        &&label_80AE2C70,
        &&label_80AE2C74,
        &&label_80AE2C78,
        &&label_80AE2C7C,
        &&label_80AE2C80,
        &&label_80AE2C84,
        &&label_80AE2C88,
        &&label_80AE2C8C,
        &&label_80AE2C90,
        &&label_80AE2C94,
        &&label_80AE2C98,
        &&label_80AE2C9C,
        &&label_80AE2CA0,
        &&label_80AE2CA4,
        &&label_80AE2CA8,
        &&label_80AE2CAC,
        &&label_80AE2CB0,
        &&label_80AE2CB4,
        &&label_80AE2CB8,
        &&label_80AE2CBC,
        &&label_80AE2CC0,
        &&label_80AE2CC4,
        &&label_80AE2CC8,
        &&label_80AE2CCC,
        &&label_80AE2CD0,
        &&label_80AE2CD4,
        &&label_80AE2CD8,
        &&label_80AE2CDC,
        &&label_80AE2CE0,
        &&label_80AE2CE4,
        &&label_80AE2CE8,
        &&label_80AE2CEC,
        &&label_80AE2CF0,
        &&label_80AE2CF4,
        &&label_80AE2CF8,
        &&label_80AE2CFC,
        &&label_80AE2D00,
        &&label_80AE2D04,
        &&label_80AE2D08,
        &&label_80AE2D0C,
        &&label_80AE2D10,
        &&label_80AE2D14,
        &&label_80AE2D18,
        &&label_80AE2D1C,
        &&label_80AE2D20,
        &&label_80AE2D24,
        &&label_80AE2D28,
        &&label_80AE2D2C,
        &&label_80AE2D30,
        &&label_80AE2D34,
        &&label_80AE2D38,
        &&label_80AE2D3C,
        &&label_80AE2D40,
        &&label_80AE2D44,
        &&label_80AE2D48,
        &&label_80AE2D4C,
        &&label_80AE2D50,
        &&label_80AE2D54,
        &&label_80AE2D58,
        &&label_80AE2D5C,
        &&label_80AE2D60,
        &&label_80AE2D64
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80AE1780u && pc <= 0x80AE2D64u && ((pc - 0x80AE1780u) & 3u) == 0u)
            goto *pc_table_80AE1780[(pc - 0x80AE1780u) >> 2];
    }
    return;
label_80AE1780:
    ctx->pc = 0x80AE1780u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1780u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AE1780: stwu     r1, -16(r1)
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
label_80AE1784:
    ctx->pc = 0x80AE1784u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1784u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AE1784: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AE1788:
    ctx->pc = 0x80AE1788u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1788u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AE1788: stw     r0, 20(r1)
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
label_80AE178C:
    ctx->pc = 0x80AE178Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE178Cu)) return;
    // 80AE178C: cmpwi   r3, 2
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

label_80AE1790:
    ctx->pc = 0x80AE1790u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1790u)) return;
    // 80AE1790: bc    12, 2, 0x80AE2344
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80AE2344;
        }
    }

label_80AE1794:
    ctx->pc = 0x80AE1794u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1794u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AE1794: bc    4, 0, 0x80AE17A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AE17A8;
        }
    }

label_80AE1798:
    ctx->pc = 0x80AE1798u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1798u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AE1798: cmpwi   r3, 0
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

label_80AE179C:
    ctx->pc = 0x80AE179Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE179Cu)) return;
    // 80AE179C: bc    12, 2, 0x80AE23DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80AE23DC;
        }
    }

label_80AE17A0:
    ctx->pc = 0x80AE17A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE17A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AE17A0: bc    4, 0, 0x80AE17B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AE17B0;
        }
    }

label_80AE17A4:
    ctx->pc = 0x80AE17A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE17A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AE17A4: b       0x80AE23DC
    {
            goto label_80AE23DC;
    }

label_80AE17A8:
    ctx->pc = 0x80AE17A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE17A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AE17A8: cmpwi   r3, 4
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

label_80AE17AC:
    ctx->pc = 0x80AE17ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE17ACu)) return;
    // 80AE17AC: b       0x80AE23DC
    {
            goto label_80AE23DC;
    }

label_80AE17B0:
    ctx->pc = 0x80AE17B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE17B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AE17B0: lis     r3, -27619
    ctx->gpr[3] = ((u32)(s32)(-27619) << 16);

label_80AE17B4:
    ctx->pc = 0x80AE17B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE17B4u)) return;
    // 80AE17B4: addi    r3, r3, 13788
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13788);

label_80AE17B8:
    ctx->pc = 0x80AE17B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE17B8u)) return;
    // 80AE17B8: bl      0x8050AF58
    {
            ctx->lr = 0x80AE17BCu;
            ctx->pc = 0x8050AF58u;
            return;
    }

label_80AE17BC:
    ctx->pc = 0x80AE17BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE17BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AE17BC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AE17C0:
    ctx->pc = 0x80AE17C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE17C0u)) return;
    // 80AE17C0: bl      0x80AE29D8
    {
            ctx->lr = 0x80AE17C4u;
            goto label_80AE29D8;
    }

label_80AE17C4:
    ctx->pc = 0x80AE17C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE17C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AE17C4: bl      0x8045DE7C
    {
            ctx->lr = 0x80AE17C8u;
            ctx->pc = 0x8045DE7Cu;
            return;
    }

label_80AE17C8:
    ctx->pc = 0x80AE17C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE17C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AE17C8: bl      0x80460A60
    {
            ctx->lr = 0x80AE17CCu;
            ctx->pc = 0x80460A60u;
            return;
    }

label_80AE17CC:
    ctx->pc = 0x80AE17CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE17CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AE17CC: bl      0x80460A24
    {
            ctx->lr = 0x80AE17D0u;
            ctx->pc = 0x80460A24u;
            return;
    }

label_80AE17D0:
    ctx->pc = 0x80AE17D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE17D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AE17D0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AE17D4:
    ctx->pc = 0x80AE17D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE17D4u)) return;
    // 80AE17D4: bl      0x8045EC10
    {
            ctx->lr = 0x80AE17D8u;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80AE17D8:
    ctx->pc = 0x80AE17D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE17D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AE17D8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AE17DC:
    ctx->pc = 0x80AE17DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE17DCu)) return;
    // 80AE17DC: bl      0x8045F220
    {
            ctx->lr = 0x80AE17E0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AE17E0:
    ctx->pc = 0x80AE17E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE17E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80AE17E0: lis     r4, -27619
    ctx->gpr[4] = ((u32)(s32)(-27619) << 16);

label_80AE17E4:
    ctx->pc = 0x80AE17E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE17E4u)) return;
    // 80AE17E4: addi    r4, r4, 13008
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13008);

label_80AE17E8:
    ctx->pc = 0x80AE17E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE17E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AE17E8: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AE17E8u)) return;
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
label_80AE17EC:
    ctx->pc = 0x80AE17ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE17ECu)) return;
    // 80AE17EC: lis     r4, -27619
    ctx->gpr[4] = ((u32)(s32)(-27619) << 16);

label_80AE17F0:
    ctx->pc = 0x80AE17F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE17F0u)) return;
    // 80AE17F0: addi    r4, r4, 13012
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13012);

label_80AE17F4:
    ctx->pc = 0x80AE17F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE17F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AE17F4: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AE17F4u)) return;
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
label_80AE17F8:
    ctx->pc = 0x80AE17F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE17F8u)) return;
    // 80AE17F8: lis     r4, -27619
    ctx->gpr[4] = ((u32)(s32)(-27619) << 16);

label_80AE17FC:
    ctx->pc = 0x80AE17FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE17FCu)) return;
    // 80AE17FC: addi    r4, r4, 13016
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13016);

label_80AE1800:
    ctx->pc = 0x80AE1800u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1800u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AE1800: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AE1800u)) return;
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
label_80AE1804:
    ctx->pc = 0x80AE1804u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1804u)) return;
    // 80AE1804: bl      0x8045EF2C
    {
            ctx->lr = 0x80AE1808u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80AE1808:
    ctx->pc = 0x80AE1808u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1808u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AE1808: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AE180C:
    ctx->pc = 0x80AE180Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE180Cu)) return;
    // 80AE180C: bl      0x8045F220
    {
            ctx->lr = 0x80AE1810u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AE1810:
    ctx->pc = 0x80AE1810u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1810u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AE1810: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80AE1814:
    ctx->pc = 0x80AE1814u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1814u)) return;
    // 80AE1814: addi    r4, r5, -2304
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(-2304);

label_80AE1818:
    ctx->pc = 0x80AE1818u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1818u)) return;
    // 80AE1818: addi    r5, r5, -20112
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-20112);

label_80AE181C:
    ctx->pc = 0x80AE181Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE181Cu)) return;
    // 80AE181C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80AE1820:
    ctx->pc = 0x80AE1820u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1820u)) return;
    // 80AE1820: bl      0x8045EEA8
    {
            ctx->lr = 0x80AE1824u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80AE1824:
    ctx->pc = 0x80AE1824u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1824u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AE1824: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AE1828:
    ctx->pc = 0x80AE1828u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1828u)) return;
    // 80AE1828: bl      0x8045F7C8
    {
            ctx->lr = 0x80AE182Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AE182C:
    ctx->pc = 0x80AE182Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE182Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AE182C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AE1830:
    ctx->pc = 0x80AE1830u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1830u)) return;
    // 80AE1830: bl      0x8045F220
    {
            ctx->lr = 0x80AE1834u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AE1834:
    ctx->pc = 0x80AE1834u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1834u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AE1834: bl      0x8045EB8C
    {
            ctx->lr = 0x80AE1838u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80AE1838:
    ctx->pc = 0x80AE1838u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1838u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AE1838: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AE183C:
    ctx->pc = 0x80AE183Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE183Cu)) return;
    // 80AE183C: bl      0x8045F220
    {
            ctx->lr = 0x80AE1840u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AE1840:
    ctx->pc = 0x80AE1840u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1840u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80AE1840: lis     r4, -28586
    ctx->gpr[4] = ((u32)(s32)(-28586) << 16);

label_80AE1844:
    ctx->pc = 0x80AE1844u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1844u)) return;
    // 80AE1844: addi    r4, r4, -5912
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5912);

label_80AE1848:
    ctx->pc = 0x80AE1848u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1848u)) return;
    // 80AE1848: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80AE184C:
    ctx->pc = 0x80AE184Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE184Cu)) return;
    // 80AE184C: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80AE1850:
    ctx->pc = 0x80AE1850u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1850u)) return;
    // 80AE1850: lis     r6, -27619
    ctx->gpr[6] = ((u32)(s32)(-27619) << 16);

label_80AE1854:
    ctx->pc = 0x80AE1854u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1854u)) return;
    // 80AE1854: addi    r6, r6, 13020
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(13020);

label_80AE1858:
    ctx->pc = 0x80AE1858u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1858u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AE1858: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80AE1858u)) return;
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
label_80AE185C:
    ctx->pc = 0x80AE185Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE185Cu)) return;
    // 80AE185C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80AE1860:
    ctx->pc = 0x80AE1860u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1860u)) return;
    // 80AE1860: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80AE1864:
    ctx->pc = 0x80AE1864u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1864u)) return;
    // 80AE1864: bl      0x8045EBE4
    {
            ctx->lr = 0x80AE1868u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80AE1868:
    ctx->pc = 0x80AE1868u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1868u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80AE1868: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AE186C:
    ctx->pc = 0x80AE186Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE186Cu)) return;
    // 80AE186C: li      r4, 1339
    ctx->gpr[4] = (u32)(s32)(1339);

label_80AE1870:
    ctx->pc = 0x80AE1870u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1870u)) return;
    // 80AE1870: li      r5, 1800
    ctx->gpr[5] = (u32)(s32)(1800);

label_80AE1874:
    ctx->pc = 0x80AE1874u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1874u)) return;
    // 80AE1874: bl      0x80AE2AE0
    {
            ctx->lr = 0x80AE1878u;
            goto label_80AE2AE0;
    }

label_80AE1878:
    ctx->pc = 0x80AE1878u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1878u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80AE1878: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AE187C:
    ctx->pc = 0x80AE187Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE187Cu)) return;
    // 80AE187C: li      r4, 8000
    ctx->gpr[4] = (u32)(s32)(8000);

label_80AE1880:
    ctx->pc = 0x80AE1880u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1880u)) return;
    // 80AE1880: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80AE1884:
    ctx->pc = 0x80AE1884u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1884u)) return;
    // 80AE1884: bl      0x80AE2C5C
    {
            ctx->lr = 0x80AE1888u;
            goto label_80AE2C5C;
    }

label_80AE1888:
    ctx->pc = 0x80AE1888u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1888u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80AE1888: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AE188C:
    ctx->pc = 0x80AE188Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE188Cu)) return;
    // 80AE188C: li      r4, -30
    ctx->gpr[4] = (u32)(s32)(-30);

label_80AE1890:
    ctx->pc = 0x80AE1890u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1890u)) return;
    // 80AE1890: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80AE1894:
    ctx->pc = 0x80AE1894u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1894u)) return;
    // 80AE1894: bl      0x80AE2BBC
    {
            ctx->lr = 0x80AE1898u;
            goto label_80AE2BBC;
    }

label_80AE1898:
    ctx->pc = 0x80AE1898u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1898u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AE1898: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AE189C:
    ctx->pc = 0x80AE189Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE189Cu)) return;
    // 80AE189C: bl      0x8045F7C8
    {
            ctx->lr = 0x80AE18A0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AE18A0:
    ctx->pc = 0x80AE18A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE18A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80AE18A0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AE18A4:
    ctx->pc = 0x80AE18A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE18A4u)) return;
    // 80AE18A4: li      r4, -8000
    ctx->gpr[4] = (u32)(s32)(-8000);

label_80AE18A8:
    ctx->pc = 0x80AE18A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE18A8u)) return;
    // 80AE18A8: li      r5, 200
    ctx->gpr[5] = (u32)(s32)(200);

label_80AE18AC:
    ctx->pc = 0x80AE18ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE18ACu)) return;
    // 80AE18AC: bl      0x80AE2C5C
    {
            ctx->lr = 0x80AE18B0u;
            goto label_80AE2C5C;
    }

label_80AE18B0:
    ctx->pc = 0x80AE18B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE18B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80AE18B0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AE18B4:
    ctx->pc = 0x80AE18B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE18B4u)) return;
    // 80AE18B4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AE18B8:
    ctx->pc = 0x80AE18B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE18B8u)) return;
    // 80AE18B8: lis     r5, -27619
    ctx->gpr[5] = ((u32)(s32)(-27619) << 16);

label_80AE18BC:
    ctx->pc = 0x80AE18BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE18BCu)) return;
    // 80AE18BC: addi    r5, r5, 13024
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13024);

label_80AE18C0:
    ctx->pc = 0x80AE18C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE18C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AE18C0: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AE18C0u)) return;
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
label_80AE18C4:
    ctx->pc = 0x80AE18C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE18C4u)) return;
    // 80AE18C4: lis     r5, -27619
    ctx->gpr[5] = ((u32)(s32)(-27619) << 16);

label_80AE18C8:
    ctx->pc = 0x80AE18C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE18C8u)) return;
    // 80AE18C8: addi    r5, r5, 13028
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13028);

label_80AE18CC:
    ctx->pc = 0x80AE18CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE18CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AE18CC: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AE18CCu)) return;
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
label_80AE18D0:
    ctx->pc = 0x80AE18D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE18D0u)) return;
    // 80AE18D0: lis     r5, -27619
    ctx->gpr[5] = ((u32)(s32)(-27619) << 16);

label_80AE18D4:
    ctx->pc = 0x80AE18D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE18D4u)) return;
    // 80AE18D4: addi    r5, r5, 13032
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13032);

label_80AE18D8:
    ctx->pc = 0x80AE18D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE18D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AE18D8: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AE18D8u)) return;
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
label_80AE18DC:
    ctx->pc = 0x80AE18DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE18DCu)) return;
    // 80AE18DC: bl      0x8045C750
    {
            ctx->lr = 0x80AE18E0u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80AE18E0:
    ctx->pc = 0x80AE18E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE18E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80AE18E0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AE18E4:
    ctx->pc = 0x80AE18E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE18E4u)) return;
    // 80AE18E4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AE18E8:
    ctx->pc = 0x80AE18E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE18E8u)) return;
    // 80AE18E8: li      r5, 768
    ctx->gpr[5] = (u32)(s32)(768);

label_80AE18EC:
    ctx->pc = 0x80AE18ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE18ECu)) return;
    // 80AE18EC: li      r6, 691
    ctx->gpr[6] = (u32)(s32)(691);

label_80AE18F0:
    ctx->pc = 0x80AE18F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE18F0u)) return;
    // 80AE18F0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80AE18F4:
    ctx->pc = 0x80AE18F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE18F4u)) return;
    // 80AE18F4: bl      0x8045C7B4
    {
            ctx->lr = 0x80AE18F8u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80AE18F8:
    ctx->pc = 0x80AE18F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE18F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AE18F8: li      r3, 80
    ctx->gpr[3] = (u32)(s32)(80);

label_80AE18FC:
    ctx->pc = 0x80AE18FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE18FCu)) return;
    // 80AE18FC: bl      0x8045F7C8
    {
            ctx->lr = 0x80AE1900u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AE1900:
    ctx->pc = 0x80AE1900u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1900u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80AE1900: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AE1904:
    ctx->pc = 0x80AE1904u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1904u)) return;
    // 80AE1904: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AE1908:
    ctx->pc = 0x80AE1908u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1908u)) return;
    // 80AE1908: lis     r5, -27619
    ctx->gpr[5] = ((u32)(s32)(-27619) << 16);

label_80AE190C:
    ctx->pc = 0x80AE190Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE190Cu)) return;
    // 80AE190C: addi    r5, r5, 13036
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13036);

label_80AE1910:
    ctx->pc = 0x80AE1910u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1910u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AE1910: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AE1910u)) return;
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
label_80AE1914:
    ctx->pc = 0x80AE1914u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1914u)) return;
    // 80AE1914: lis     r5, -27619
    ctx->gpr[5] = ((u32)(s32)(-27619) << 16);

label_80AE1918:
    ctx->pc = 0x80AE1918u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1918u)) return;
    // 80AE1918: addi    r5, r5, 13040
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13040);

label_80AE191C:
    ctx->pc = 0x80AE191Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE191Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AE191C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AE191Cu)) return;
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
label_80AE1920:
    ctx->pc = 0x80AE1920u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1920u)) return;
    // 80AE1920: lis     r5, -27619
    ctx->gpr[5] = ((u32)(s32)(-27619) << 16);

label_80AE1924:
    ctx->pc = 0x80AE1924u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1924u)) return;
    // 80AE1924: addi    r5, r5, 13044
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13044);

label_80AE1928:
    ctx->pc = 0x80AE1928u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1928u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AE1928: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AE1928u)) return;
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
label_80AE192C:
    ctx->pc = 0x80AE192Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE192Cu)) return;
    // 80AE192C: bl      0x8045C750
    {
            ctx->lr = 0x80AE1930u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80AE1930:
    ctx->pc = 0x80AE1930u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1930u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80AE1930: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AE1934:
    ctx->pc = 0x80AE1934u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1934u)) return;
    // 80AE1934: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AE1938:
    ctx->pc = 0x80AE1938u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1938u)) return;
    // 80AE1938: li      r5, 9851
    ctx->gpr[5] = (u32)(s32)(9851);

label_80AE193C:
    ctx->pc = 0x80AE193Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE193Cu)) return;
    // 80AE193C: li      r6, 21636
    ctx->gpr[6] = (u32)(s32)(21636);

label_80AE1940:
    ctx->pc = 0x80AE1940u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1940u)) return;
    // 80AE1940: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80AE1944:
    ctx->pc = 0x80AE1944u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1944u)) return;
    // 80AE1944: bl      0x8045C7B4
    {
            ctx->lr = 0x80AE1948u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80AE1948:
    ctx->pc = 0x80AE1948u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1948u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80AE1948: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AE194C:
    ctx->pc = 0x80AE194Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE194Cu)) return;
    // 80AE194C: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_80AE1950:
    ctx->pc = 0x80AE1950u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1950u)) return;
    // 80AE1950: lis     r5, -27619
    ctx->gpr[5] = ((u32)(s32)(-27619) << 16);

label_80AE1954:
    ctx->pc = 0x80AE1954u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1954u)) return;
    // 80AE1954: addi    r5, r5, 13036
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13036);

label_80AE1958:
    ctx->pc = 0x80AE1958u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1958u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AE1958: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AE1958u)) return;
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
label_80AE195C:
    ctx->pc = 0x80AE195Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE195Cu)) return;
    // 80AE195C: lis     r5, -27619
    ctx->gpr[5] = ((u32)(s32)(-27619) << 16);

label_80AE1960:
    ctx->pc = 0x80AE1960u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1960u)) return;
    // 80AE1960: addi    r5, r5, 13040
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13040);

label_80AE1964:
    ctx->pc = 0x80AE1964u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1964u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AE1964: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AE1964u)) return;
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
label_80AE1968:
    ctx->pc = 0x80AE1968u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1968u)) return;
    // 80AE1968: lis     r5, -27619
    ctx->gpr[5] = ((u32)(s32)(-27619) << 16);

label_80AE196C:
    ctx->pc = 0x80AE196Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE196Cu)) return;
    // 80AE196C: addi    r5, r5, 13044
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13044);

label_80AE1970:
    ctx->pc = 0x80AE1970u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1970u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AE1970: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AE1970u)) return;
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
label_80AE1974:
    ctx->pc = 0x80AE1974u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1974u)) return;
    // 80AE1974: bl      0x8045C750
    {
            ctx->lr = 0x80AE1978u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80AE1978:
    ctx->pc = 0x80AE1978u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1978u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80AE1978: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AE197C:
    ctx->pc = 0x80AE197Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE197Cu)) return;
    // 80AE197C: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_80AE1980:
    ctx->pc = 0x80AE1980u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1980u)) return;
    // 80AE1980: li      r5, 4731
    ctx->gpr[5] = (u32)(s32)(4731);

label_80AE1984:
    ctx->pc = 0x80AE1984u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1984u)) return;
    // 80AE1984: li      r6, 21636
    ctx->gpr[6] = (u32)(s32)(21636);

label_80AE1988:
    ctx->pc = 0x80AE1988u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1988u)) return;
    // 80AE1988: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80AE198C:
    ctx->pc = 0x80AE198Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE198Cu)) return;
    // 80AE198C: bl      0x8045C7B4
    {
            ctx->lr = 0x80AE1990u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80AE1990:
    ctx->pc = 0x80AE1990u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1990u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AE1990: li      r3, 100
    ctx->gpr[3] = (u32)(s32)(100);

label_80AE1994:
    ctx->pc = 0x80AE1994u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1994u)) return;
    // 80AE1994: bl      0x8045F7C8
    {
            ctx->lr = 0x80AE1998u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AE1998:
    ctx->pc = 0x80AE1998u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1998u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AE1998: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AE199C:
    ctx->pc = 0x80AE199Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE199Cu)) return;
    // 80AE199C: bl      0x8045F220
    {
            ctx->lr = 0x80AE19A0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AE19A0:
    ctx->pc = 0x80AE19A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE19A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80AE19A0: lis     r4, -27619
    ctx->gpr[4] = ((u32)(s32)(-27619) << 16);

label_80AE19A4:
    ctx->pc = 0x80AE19A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE19A4u)) return;
    // 80AE19A4: addi    r4, r4, 13048
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13048);

label_80AE19A8:
    ctx->pc = 0x80AE19A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE19A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AE19A8: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AE19A8u)) return;
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
label_80AE19AC:
    ctx->pc = 0x80AE19ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE19ACu)) return;
    // 80AE19AC: lis     r4, -27619
    ctx->gpr[4] = ((u32)(s32)(-27619) << 16);

label_80AE19B0:
    ctx->pc = 0x80AE19B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE19B0u)) return;
    // 80AE19B0: addi    r4, r4, 13052
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13052);

label_80AE19B4:
    ctx->pc = 0x80AE19B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE19B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AE19B4: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AE19B4u)) return;
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
label_80AE19B8:
    ctx->pc = 0x80AE19B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE19B8u)) return;
    // 80AE19B8: lis     r4, -27619
    ctx->gpr[4] = ((u32)(s32)(-27619) << 16);

label_80AE19BC:
    ctx->pc = 0x80AE19BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE19BCu)) return;
    // 80AE19BC: addi    r4, r4, 13056
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13056);

label_80AE19C0:
    ctx->pc = 0x80AE19C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE19C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AE19C0: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AE19C0u)) return;
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
label_80AE19C4:
    ctx->pc = 0x80AE19C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE19C4u)) return;
    // 80AE19C4: bl      0x8045EF2C
    {
            ctx->lr = 0x80AE19C8u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80AE19C8:
    ctx->pc = 0x80AE19C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE19C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AE19C8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AE19CC:
    ctx->pc = 0x80AE19CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE19CCu)) return;
    // 80AE19CC: bl      0x8045F220
    {
            ctx->lr = 0x80AE19D0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AE19D0:
    ctx->pc = 0x80AE19D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE19D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AE19D0: lis     r4, 1
    ctx->gpr[4] = ((u32)(s32)(1) << 16);

label_80AE19D4:
    ctx->pc = 0x80AE19D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE19D4u)) return;
    // 80AE19D4: addi    r4, r4, -2048
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-2048);

label_80AE19D8:
    ctx->pc = 0x80AE19D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE19D8u)) return;
    // 80AE19D8: li      r5, 17080
    ctx->gpr[5] = (u32)(s32)(17080);

label_80AE19DC:
    ctx->pc = 0x80AE19DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE19DCu)) return;
    // 80AE19DC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80AE19E0:
    ctx->pc = 0x80AE19E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE19E0u)) return;
    // 80AE19E0: bl      0x8045EEA8
    {
            ctx->lr = 0x80AE19E4u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80AE19E4:
    ctx->pc = 0x80AE19E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE19E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80AE19E4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AE19E8:
    ctx->pc = 0x80AE19E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE19E8u)) return;
    // 80AE19E8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AE19EC:
    ctx->pc = 0x80AE19ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE19ECu)) return;
    // 80AE19EC: lis     r5, -27619
    ctx->gpr[5] = ((u32)(s32)(-27619) << 16);

label_80AE19F0:
    ctx->pc = 0x80AE19F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE19F0u)) return;
    // 80AE19F0: addi    r5, r5, 13060
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13060);

label_80AE19F4:
    ctx->pc = 0x80AE19F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE19F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AE19F4: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AE19F4u)) return;
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
label_80AE19F8:
    ctx->pc = 0x80AE19F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE19F8u)) return;
    // 80AE19F8: lis     r5, -27619
    ctx->gpr[5] = ((u32)(s32)(-27619) << 16);

label_80AE19FC:
    ctx->pc = 0x80AE19FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE19FCu)) return;
    // 80AE19FC: addi    r5, r5, 13064
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13064);

label_80AE1A00:
    ctx->pc = 0x80AE1A00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1A00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AE1A00: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AE1A00u)) return;
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
label_80AE1A04:
    ctx->pc = 0x80AE1A04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1A04u)) return;
    // 80AE1A04: lis     r5, -27619
    ctx->gpr[5] = ((u32)(s32)(-27619) << 16);

label_80AE1A08:
    ctx->pc = 0x80AE1A08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1A08u)) return;
    // 80AE1A08: addi    r5, r5, 13068
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13068);

label_80AE1A0C:
    ctx->pc = 0x80AE1A0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1A0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AE1A0C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AE1A0Cu)) return;
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
label_80AE1A10:
    ctx->pc = 0x80AE1A10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1A10u)) return;
    // 80AE1A10: bl      0x8045C750
    {
            ctx->lr = 0x80AE1A14u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80AE1A14:
    ctx->pc = 0x80AE1A14u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1A14u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80AE1A14: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AE1A18:
    ctx->pc = 0x80AE1A18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1A18u)) return;
    // 80AE1A18: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AE1A1C:
    ctx->pc = 0x80AE1A1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1A1Cu)) return;
    // 80AE1A1C: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80AE1A20:
    ctx->pc = 0x80AE1A20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1A20u)) return;
    // 80AE1A20: addi    r5, r5, -17408
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-17408);

label_80AE1A24:
    ctx->pc = 0x80AE1A24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1A24u)) return;
    // 80AE1A24: li      r6, 512
    ctx->gpr[6] = (u32)(s32)(512);

label_80AE1A28:
    ctx->pc = 0x80AE1A28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1A28u)) return;
    // 80AE1A28: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80AE1A2C:
    ctx->pc = 0x80AE1A2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1A2Cu)) return;
    // 80AE1A2C: bl      0x8045C7B4
    {
            ctx->lr = 0x80AE1A30u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80AE1A30:
    ctx->pc = 0x80AE1A30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1A30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80AE1A30: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AE1A34:
    ctx->pc = 0x80AE1A34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1A34u)) return;
    // 80AE1A34: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_80AE1A38:
    ctx->pc = 0x80AE1A38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1A38u)) return;
    // 80AE1A38: lis     r5, -27619
    ctx->gpr[5] = ((u32)(s32)(-27619) << 16);

label_80AE1A3C:
    ctx->pc = 0x80AE1A3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1A3Cu)) return;
    // 80AE1A3C: addi    r5, r5, 13072
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13072);

label_80AE1A40:
    ctx->pc = 0x80AE1A40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1A40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AE1A40: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AE1A40u)) return;
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
label_80AE1A44:
    ctx->pc = 0x80AE1A44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1A44u)) return;
    // 80AE1A44: lis     r5, -27619
    ctx->gpr[5] = ((u32)(s32)(-27619) << 16);

label_80AE1A48:
    ctx->pc = 0x80AE1A48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1A48u)) return;
    // 80AE1A48: addi    r5, r5, 13076
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13076);

label_80AE1A4C:
    ctx->pc = 0x80AE1A4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1A4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AE1A4C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AE1A4Cu)) return;
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
label_80AE1A50:
    ctx->pc = 0x80AE1A50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1A50u)) return;
    // 80AE1A50: lis     r5, -27619
    ctx->gpr[5] = ((u32)(s32)(-27619) << 16);

label_80AE1A54:
    ctx->pc = 0x80AE1A54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1A54u)) return;
    // 80AE1A54: addi    r5, r5, 13080
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13080);

label_80AE1A58:
    ctx->pc = 0x80AE1A58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1A58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AE1A58: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AE1A58u)) return;
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
label_80AE1A5C:
    ctx->pc = 0x80AE1A5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1A5Cu)) return;
    // 80AE1A5C: bl      0x8045C750
    {
            ctx->lr = 0x80AE1A60u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80AE1A60:
    ctx->pc = 0x80AE1A60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1A60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80AE1A60: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AE1A64:
    ctx->pc = 0x80AE1A64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1A64u)) return;
    // 80AE1A64: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_80AE1A68:
    ctx->pc = 0x80AE1A68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1A68u)) return;
    // 80AE1A68: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80AE1A6C:
    ctx->pc = 0x80AE1A6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1A6Cu)) return;
    // 80AE1A6C: addi    r5, r5, -17408
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-17408);

label_80AE1A70:
    ctx->pc = 0x80AE1A70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1A70u)) return;
    // 80AE1A70: li      r6, 25088
    ctx->gpr[6] = (u32)(s32)(25088);

label_80AE1A74:
    ctx->pc = 0x80AE1A74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1A74u)) return;
    // 80AE1A74: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80AE1A78:
    ctx->pc = 0x80AE1A78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1A78u)) return;
    // 80AE1A78: bl      0x8045C7B4
    {
            ctx->lr = 0x80AE1A7Cu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80AE1A7C:
    ctx->pc = 0x80AE1A7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1A7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80AE1A7C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AE1A80:
    ctx->pc = 0x80AE1A80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1A80u)) return;
    // 80AE1A80: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_80AE1A84:
    ctx->pc = 0x80AE1A84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1A84u)) return;
    // 80AE1A84: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80AE1A88:
    ctx->pc = 0x80AE1A88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1A88u)) return;
    // 80AE1A88: bl      0x80AE2BBC
    {
            ctx->lr = 0x80AE1A8Cu;
            goto label_80AE2BBC;
    }

label_80AE1A8C:
    ctx->pc = 0x80AE1A8Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1A8Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80AE1A8C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AE1A90:
    ctx->pc = 0x80AE1A90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1A90u)) return;
    // 80AE1A90: li      r4, 8000
    ctx->gpr[4] = (u32)(s32)(8000);

label_80AE1A94:
    ctx->pc = 0x80AE1A94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1A94u)) return;
    // 80AE1A94: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80AE1A98:
    ctx->pc = 0x80AE1A98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1A98u)) return;
    // 80AE1A98: bl      0x80AE2C5C
    {
            ctx->lr = 0x80AE1A9Cu;
            goto label_80AE2C5C;
    }

label_80AE1A9C:
    ctx->pc = 0x80AE1A9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1A9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AE1A9C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AE1AA0:
    ctx->pc = 0x80AE1AA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1AA0u)) return;
    // 80AE1AA0: bl      0x8045F7C8
    {
            ctx->lr = 0x80AE1AA4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AE1AA4:
    ctx->pc = 0x80AE1AA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1AA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80AE1AA4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AE1AA8:
    ctx->pc = 0x80AE1AA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1AA8u)) return;
    // 80AE1AA8: li      r4, -8000
    ctx->gpr[4] = (u32)(s32)(-8000);

label_80AE1AAC:
    ctx->pc = 0x80AE1AACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1AACu)) return;
    // 80AE1AAC: li      r5, 100
    ctx->gpr[5] = (u32)(s32)(100);

label_80AE1AB0:
    ctx->pc = 0x80AE1AB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1AB0u)) return;
    // 80AE1AB0: bl      0x80AE2C5C
    {
            ctx->lr = 0x80AE1AB4u;
            goto label_80AE2C5C;
    }

label_80AE1AB4:
    ctx->pc = 0x80AE1AB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1AB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AE1AB4: li      r3, 100
    ctx->gpr[3] = (u32)(s32)(100);

label_80AE1AB8:
    ctx->pc = 0x80AE1AB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1AB8u)) return;
    // 80AE1AB8: bl      0x8045F7C8
    {
            ctx->lr = 0x80AE1ABCu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AE1ABC:
    ctx->pc = 0x80AE1ABCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1ABCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AE1ABC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AE1AC0:
    ctx->pc = 0x80AE1AC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1AC0u)) return;
    // 80AE1AC0: bl      0x80AE2B50
    {
            ctx->lr = 0x80AE1AC4u;
            goto label_80AE2B50;
    }

label_80AE1AC4:
    ctx->pc = 0x80AE1AC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1AC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AE1AC4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AE1AC8:
    ctx->pc = 0x80AE1AC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1AC8u)) return;
    // 80AE1AC8: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80AE1ACC:
    ctx->pc = 0x80AE1ACCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1ACCu)) return;
    // 80AE1ACC: bl      0x804C5AB4
    {
            ctx->lr = 0x80AE1AD0u;
            ctx->pc = 0x804C5AB4u;
            return;
    }

label_80AE1AD0:
    ctx->pc = 0x80AE1AD0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1AD0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80AE1AD0: lis     r3, -27619
    ctx->gpr[3] = ((u32)(s32)(-27619) << 16);

label_80AE1AD4:
    ctx->pc = 0x80AE1AD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1AD4u)) return;
    // 80AE1AD4: addi    r3, r3, 13084
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13084);

label_80AE1AD8:
    ctx->pc = 0x80AE1AD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1AD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80AE1AD8: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AE1AD8u)) return;
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
label_80AE1ADC:
    ctx->pc = 0x80AE1ADCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1ADCu)) return;
    // 80AE1ADC: lis     r3, -27619
    ctx->gpr[3] = ((u32)(s32)(-27619) << 16);

label_80AE1AE0:
    ctx->pc = 0x80AE1AE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1AE0u)) return;
    // 80AE1AE0: addi    r3, r3, 13088
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13088);

label_80AE1AE4:
    ctx->pc = 0x80AE1AE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1AE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AE1AE4: lfs     f2, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AE1AE4u)) return;
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
label_80AE1AE8:
    ctx->pc = 0x80AE1AE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1AE8u)) return;
    // 80AE1AE8: lis     r3, -27619
    ctx->gpr[3] = ((u32)(s32)(-27619) << 16);

label_80AE1AEC:
    ctx->pc = 0x80AE1AECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1AECu)) return;
    // 80AE1AEC: addi    r3, r3, 13092
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13092);

label_80AE1AF0:
    ctx->pc = 0x80AE1AF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1AF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AE1AF0: lfs     f3, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AE1AF0u)) return;
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
label_80AE1AF4:
    ctx->pc = 0x80AE1AF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1AF4u)) return;
    // 80AE1AF4: fmr    f4, f3
    if (!ppc_fp_available_inline(ctx, 0x80AE1AF4u)) return;
    ctx->fpr[4] = ctx->fpr[3];

label_80AE1AF8:
    ctx->pc = 0x80AE1AF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1AF8u)) return;
    // 80AE1AF8: fmr    f5, f3
    if (!ppc_fp_available_inline(ctx, 0x80AE1AF8u)) return;
    ctx->fpr[5] = ctx->fpr[3];

label_80AE1AFC:
    ctx->pc = 0x80AE1AFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1AFCu)) return;
    // 80AE1AFC: bl      0x80AE25F0
    {
            ctx->lr = 0x80AE1B00u;
            goto label_80AE25F0;
    }

label_80AE1B00:
    ctx->pc = 0x80AE1B00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1B00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 80AE1B00: lis     r4, -27618
    ctx->gpr[4] = ((u32)(s32)(-27618) << 16);

label_80AE1B04:
    ctx->pc = 0x80AE1B04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1B04u)) return;
    // 80AE1B04: addi    r4, r4, -3772
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-3772);

label_80AE1B08:
    ctx->pc = 0x80AE1B08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1B08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AE1B08: stw     r3, 0(r4)
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
label_80AE1B0C:
    ctx->pc = 0x80AE1B0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1B0Cu)) return;
    // 80AE1B0C: li      r3, 1340
    ctx->gpr[3] = (u32)(s32)(1340);

label_80AE1B10:
    ctx->pc = 0x80AE1B10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1B10u)) return;
    // 80AE1B10: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_80AE1B14:
    ctx->pc = 0x80AE1B14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1B14u)) return;
    // 80AE1B14: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80AE1B18:
    ctx->pc = 0x80AE1B18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1B18u)) return;
    // 80AE1B18: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80AE1B1C:
    ctx->pc = 0x80AE1B1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1B1Cu)) return;
    // 80AE1B1C: bl      0x80AE2CAC
    {
            ctx->lr = 0x80AE1B20u;
            goto label_80AE2CAC;
    }

label_80AE1B20:
    ctx->pc = 0x80AE1B20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1B20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AE1B20: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_80AE1B24:
    ctx->pc = 0x80AE1B24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1B24u)) return;
    // 80AE1B24: bl      0x8045F7C8
    {
            ctx->lr = 0x80AE1B28u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AE1B28:
    ctx->pc = 0x80AE1B28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1B28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AE1B28: li      r3, 1340
    ctx->gpr[3] = (u32)(s32)(1340);

label_80AE1B2C:
    ctx->pc = 0x80AE1B2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1B2Cu)) return;
    // 80AE1B2C: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_80AE1B30:
    ctx->pc = 0x80AE1B30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1B30u)) return;
    // 80AE1B30: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80AE1B34:
    ctx->pc = 0x80AE1B34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1B34u)) return;
    // 80AE1B34: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80AE1B38:
    ctx->pc = 0x80AE1B38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1B38u)) return;
    // 80AE1B38: bl      0x80AE2CAC
    {
            ctx->lr = 0x80AE1B3Cu;
            goto label_80AE2CAC;
    }

label_80AE1B3C:
    ctx->pc = 0x80AE1B3Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1B3Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AE1B3C: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_80AE1B40:
    ctx->pc = 0x80AE1B40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1B40u)) return;
    // 80AE1B40: bl      0x8045F7C8
    {
            ctx->lr = 0x80AE1B44u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AE1B44:
    ctx->pc = 0x80AE1B44u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1B44u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AE1B44: li      r3, 1340
    ctx->gpr[3] = (u32)(s32)(1340);

label_80AE1B48:
    ctx->pc = 0x80AE1B48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1B48u)) return;
    // 80AE1B48: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_80AE1B4C:
    ctx->pc = 0x80AE1B4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1B4Cu)) return;
    // 80AE1B4C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80AE1B50:
    ctx->pc = 0x80AE1B50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1B50u)) return;
    // 80AE1B50: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80AE1B54:
    ctx->pc = 0x80AE1B54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1B54u)) return;
    // 80AE1B54: bl      0x80AE2CAC
    {
            ctx->lr = 0x80AE1B58u;
            goto label_80AE2CAC;
    }

label_80AE1B58:
    ctx->pc = 0x80AE1B58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1B58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AE1B58: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_80AE1B5C:
    ctx->pc = 0x80AE1B5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1B5Cu)) return;
    // 80AE1B5C: bl      0x8045F7C8
    {
            ctx->lr = 0x80AE1B60u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AE1B60:
    ctx->pc = 0x80AE1B60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1B60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80AE1B60: lis     r3, -27618
    ctx->gpr[3] = ((u32)(s32)(-27618) << 16);

label_80AE1B64:
    ctx->pc = 0x80AE1B64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1B64u)) return;
    // 80AE1B64: addi    r3, r3, -3776
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3776);

label_80AE1B68:
    ctx->pc = 0x80AE1B68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1B68u)) return;
    // 80AE1B68: lis     r4, -27619
    ctx->gpr[4] = ((u32)(s32)(-27619) << 16);

label_80AE1B6C:
    ctx->pc = 0x80AE1B6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1B6Cu)) return;
    // 80AE1B6C: addi    r4, r4, 13096
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13096);

label_80AE1B70:
    ctx->pc = 0x80AE1B70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1B70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80AE1B70: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AE1B70u)) return;
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
label_80AE1B74:
    ctx->pc = 0x80AE1B74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1B74u)) return;
    // 80AE1B74: lis     r4, -27619
    ctx->gpr[4] = ((u32)(s32)(-27619) << 16);

label_80AE1B78:
    ctx->pc = 0x80AE1B78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1B78u)) return;
    // 80AE1B78: addi    r4, r4, 13100
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13100);

label_80AE1B7C:
    ctx->pc = 0x80AE1B7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1B7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80AE1B7C: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AE1B7Cu)) return;
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
label_80AE1B80:
    ctx->pc = 0x80AE1B80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1B80u)) return;
    // 80AE1B80: lis     r4, -27619
    ctx->gpr[4] = ((u32)(s32)(-27619) << 16);

label_80AE1B84:
    ctx->pc = 0x80AE1B84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1B84u)) return;
    // 80AE1B84: addi    r4, r4, 13104
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13104);

label_80AE1B88:
    ctx->pc = 0x80AE1B88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1B88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AE1B88: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AE1B88u)) return;
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
label_80AE1B8C:
    ctx->pc = 0x80AE1B8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1B8Cu)) return;
    // 80AE1B8C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AE1B90:
    ctx->pc = 0x80AE1B90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1B90u)) return;
    // 80AE1B90: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80AE1B94:
    ctx->pc = 0x80AE1B94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1B94u)) return;
    // 80AE1B94: addi    r5, r5, -29683
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-29683);

label_80AE1B98:
    ctx->pc = 0x80AE1B98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1B98u)) return;
    // 80AE1B98: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80AE1B9C:
    ctx->pc = 0x80AE1B9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1B9Cu)) return;
    // 80AE1B9C: bl      0x8045F170
    {
            ctx->lr = 0x80AE1BA0u;
            ctx->pc = 0x8045F170u;
            return;
    }

label_80AE1BA0:
    ctx->pc = 0x80AE1BA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1BA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AE1BA0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AE1BA4:
    ctx->pc = 0x80AE1BA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1BA4u)) return;
    // 80AE1BA4: bl      0x8045F7C8
    {
            ctx->lr = 0x80AE1BA8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AE1BA8:
    ctx->pc = 0x80AE1BA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1BA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AE1BA8: lis     r3, -27618
    ctx->gpr[3] = ((u32)(s32)(-27618) << 16);

label_80AE1BAC:
    ctx->pc = 0x80AE1BACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1BACu)) return;
    // 80AE1BAC: addi    r3, r3, -3776
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3776);

label_80AE1BB0:
    ctx->pc = 0x80AE1BB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1BB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AE1BB0: lwz     r3, 0(r3)
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
label_80AE1BB4:
    ctx->pc = 0x80AE1BB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1BB4u)) return;
    // 80AE1BB4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AE1BB8:
    ctx->pc = 0x80AE1BB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1BB8u)) return;
    // 80AE1BB8: bl      0x8045EE90
    {
            ctx->lr = 0x80AE1BBCu;
            ctx->pc = 0x8045EE90u;
            return;
    }

label_80AE1BBC:
    ctx->pc = 0x80AE1BBCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1BBCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80AE1BBC: lis     r3, -27618
    ctx->gpr[3] = ((u32)(s32)(-27618) << 16);

label_80AE1BC0:
    ctx->pc = 0x80AE1BC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1BC0u)) return;
    // 80AE1BC0: addi    r3, r3, -3776
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3776);

label_80AE1BC4:
    ctx->pc = 0x80AE1BC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1BC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AE1BC4: lwz     r3, 0(r3)
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
label_80AE1BC8:
    ctx->pc = 0x80AE1BC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1BC8u)) return;
    // 80AE1BC8: bl      0x8045EB8C
    {
            ctx->lr = 0x80AE1BCCu;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80AE1BCC:
    ctx->pc = 0x80AE1BCCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 15u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1BCCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 15u : 1u;
    // 80AE1BCC: lis     r3, -27618
    ctx->gpr[3] = ((u32)(s32)(-27618) << 16);

label_80AE1BD0:
    ctx->pc = 0x80AE1BD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1BD0u)) return;
    // 80AE1BD0: addi    r3, r3, -3776
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3776);

label_80AE1BD4:
    ctx->pc = 0x80AE1BD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1BD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80AE1BD4: lwz     r3, 0(r3)
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
label_80AE1BD8:
    ctx->pc = 0x80AE1BD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1BD8u)) return;
    // 80AE1BD8: lis     r4, -28515
    ctx->gpr[4] = ((u32)(s32)(-28515) << 16);

label_80AE1BDC:
    ctx->pc = 0x80AE1BDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1BDCu)) return;
    // 80AE1BDC: addi    r4, r4, 3428
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(3428);

label_80AE1BE0:
    ctx->pc = 0x80AE1BE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1BE0u)) return;
    // 80AE1BE0: lis     r5, -28510
    ctx->gpr[5] = ((u32)(s32)(-28510) << 16);

label_80AE1BE4:
    ctx->pc = 0x80AE1BE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1BE4u)) return;
    // 80AE1BE4: addi    r5, r5, -27636
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-27636);

label_80AE1BE8:
    ctx->pc = 0x80AE1BE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1BE8u)) return;
    // 80AE1BE8: lis     r6, -28509
    ctx->gpr[6] = ((u32)(s32)(-28509) << 16);

label_80AE1BEC:
    ctx->pc = 0x80AE1BECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1BECu)) return;
    // 80AE1BEC: addi    r6, r6, -10464
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-10464);

label_80AE1BF0:
    ctx->pc = 0x80AE1BF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1BF0u)) return;
    // 80AE1BF0: lis     r7, -27619
    ctx->gpr[7] = ((u32)(s32)(-27619) << 16);

label_80AE1BF4:
    ctx->pc = 0x80AE1BF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1BF4u)) return;
    // 80AE1BF4: addi    r7, r7, 13108
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(13108);

label_80AE1BF8:
    ctx->pc = 0x80AE1BF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1BF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AE1BF8: lfs     f1, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x80AE1BF8u)) return;
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
label_80AE1BFC:
    ctx->pc = 0x80AE1BFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1BFCu)) return;
    // 80AE1BFC: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_80AE1C00:
    ctx->pc = 0x80AE1C00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1C00u)) return;
    // 80AE1C00: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80AE1C04:
    ctx->pc = 0x80AE1C04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1C04u)) return;
    // 80AE1C04: bl      0x8045EBB8
    {
            ctx->lr = 0x80AE1C08u;
            ctx->pc = 0x8045EBB8u;
            return;
    }

label_80AE1C08:
    ctx->pc = 0x80AE1C08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1C08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AE1C08: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AE1C0C:
    ctx->pc = 0x80AE1C0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1C0Cu)) return;
    // 80AE1C0C: bl      0x8045F220
    {
            ctx->lr = 0x80AE1C10u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AE1C10:
    ctx->pc = 0x80AE1C10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1C10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80AE1C10: lis     r4, -27619
    ctx->gpr[4] = ((u32)(s32)(-27619) << 16);

label_80AE1C14:
    ctx->pc = 0x80AE1C14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1C14u)) return;
    // 80AE1C14: addi    r4, r4, 13112
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13112);

label_80AE1C18:
    ctx->pc = 0x80AE1C18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1C18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AE1C18: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AE1C18u)) return;
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
label_80AE1C1C:
    ctx->pc = 0x80AE1C1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1C1Cu)) return;
    // 80AE1C1C: lis     r4, -27619
    ctx->gpr[4] = ((u32)(s32)(-27619) << 16);

label_80AE1C20:
    ctx->pc = 0x80AE1C20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1C20u)) return;
    // 80AE1C20: addi    r4, r4, 13116
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13116);

label_80AE1C24:
    ctx->pc = 0x80AE1C24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1C24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AE1C24: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AE1C24u)) return;
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
label_80AE1C28:
    ctx->pc = 0x80AE1C28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1C28u)) return;
    // 80AE1C28: lis     r4, -27619
    ctx->gpr[4] = ((u32)(s32)(-27619) << 16);

label_80AE1C2C:
    ctx->pc = 0x80AE1C2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1C2Cu)) return;
    // 80AE1C2C: addi    r4, r4, 13120
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13120);

label_80AE1C30:
    ctx->pc = 0x80AE1C30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1C30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AE1C30: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AE1C30u)) return;
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
label_80AE1C34:
    ctx->pc = 0x80AE1C34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1C34u)) return;
    // 80AE1C34: bl      0x8045EF2C
    {
            ctx->lr = 0x80AE1C38u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80AE1C38:
    ctx->pc = 0x80AE1C38u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1C38u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AE1C38: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AE1C3C:
    ctx->pc = 0x80AE1C3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1C3Cu)) return;
    // 80AE1C3C: bl      0x8045F220
    {
            ctx->lr = 0x80AE1C40u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AE1C40:
    ctx->pc = 0x80AE1C40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1C40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80AE1C40: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AE1C44:
    ctx->pc = 0x80AE1C44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1C44u)) return;
    // 80AE1C44: li      r5, 21089
    ctx->gpr[5] = (u32)(s32)(21089);

label_80AE1C48:
    ctx->pc = 0x80AE1C48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1C48u)) return;
    // 80AE1C48: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80AE1C4C:
    ctx->pc = 0x80AE1C4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1C4Cu)) return;
    // 80AE1C4C: bl      0x8045EEA8
    {
            ctx->lr = 0x80AE1C50u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80AE1C50:
    ctx->pc = 0x80AE1C50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1C50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AE1C50: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AE1C54:
    ctx->pc = 0x80AE1C54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1C54u)) return;
    // 80AE1C54: bl      0x8045F220
    {
            ctx->lr = 0x80AE1C58u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AE1C58:
    ctx->pc = 0x80AE1C58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1C58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AE1C58: bl      0x8045EB8C
    {
            ctx->lr = 0x80AE1C5Cu;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80AE1C5C:
    ctx->pc = 0x80AE1C5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1C5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AE1C5C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AE1C60:
    ctx->pc = 0x80AE1C60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1C60u)) return;
    // 80AE1C60: bl      0x8045F220
    {
            ctx->lr = 0x80AE1C64u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AE1C64:
    ctx->pc = 0x80AE1C64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1C64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80AE1C64: lis     r4, -27619
    ctx->gpr[4] = ((u32)(s32)(-27619) << 16);

label_80AE1C68:
    ctx->pc = 0x80AE1C68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1C68u)) return;
    // 80AE1C68: addi    r4, r4, 31832
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(31832);

label_80AE1C6C:
    ctx->pc = 0x80AE1C6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1C6Cu)) return;
    // 80AE1C6C: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80AE1C70:
    ctx->pc = 0x80AE1C70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1C70u)) return;
    // 80AE1C70: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80AE1C74:
    ctx->pc = 0x80AE1C74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1C74u)) return;
    // 80AE1C74: lis     r6, -27619
    ctx->gpr[6] = ((u32)(s32)(-27619) << 16);

label_80AE1C78:
    ctx->pc = 0x80AE1C78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1C78u)) return;
    // 80AE1C78: addi    r6, r6, 13084
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(13084);

label_80AE1C7C:
    ctx->pc = 0x80AE1C7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1C7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AE1C7C: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80AE1C7Cu)) return;
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
label_80AE1C80:
    ctx->pc = 0x80AE1C80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1C80u)) return;
    // 80AE1C80: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80AE1C84:
    ctx->pc = 0x80AE1C84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1C84u)) return;
    // 80AE1C84: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80AE1C88:
    ctx->pc = 0x80AE1C88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1C88u)) return;
    // 80AE1C88: bl      0x8045EBE4
    {
            ctx->lr = 0x80AE1C8Cu;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80AE1C8C:
    ctx->pc = 0x80AE1C8Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1C8Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AE1C8C: li      r3, 40
    ctx->gpr[3] = (u32)(s32)(40);

label_80AE1C90:
    ctx->pc = 0x80AE1C90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1C90u)) return;
    // 80AE1C90: bl      0x8045F7C8
    {
            ctx->lr = 0x80AE1C94u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AE1C94:
    ctx->pc = 0x80AE1C94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1C94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80AE1C94: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80AE1C98:
    ctx->pc = 0x80AE1C98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1C98u)) return;
    // 80AE1C98: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80AE1C9C:
    ctx->pc = 0x80AE1C9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1C9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AE1C9C: lwz     r0, 0(r3)
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
label_80AE1CA0:
    ctx->pc = 0x80AE1CA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1CA0u)) return;
    // 80AE1CA0: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80AE1CA4:
    ctx->pc = 0x80AE1CA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1CA4u)) return;
    // 80AE1CA4: lis     r3, -27619
    ctx->gpr[3] = ((u32)(s32)(-27619) << 16);

label_80AE1CA8:
    ctx->pc = 0x80AE1CA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1CA8u)) return;
    // 80AE1CA8: addi    r3, r3, 13760
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13760);

label_80AE1CAC:
    ctx->pc = 0x80AE1CACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1CACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AE1CAC: lwzx    r3, r3, r0
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
label_80AE1CB0:
    ctx->pc = 0x80AE1CB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1CB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AE1CB0: lwz     r3, 0(r3)
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
label_80AE1CB4:
    ctx->pc = 0x80AE1CB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1CB4u)) return;
    // 80AE1CB4: bl      0x8045F6FC
    {
            ctx->lr = 0x80AE1CB8u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80AE1CB8:
    ctx->pc = 0x80AE1CB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1CB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AE1CB8: li      r3, 493
    ctx->gpr[3] = (u32)(s32)(493);

label_80AE1CBC:
    ctx->pc = 0x80AE1CBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1CBCu)) return;
    // 80AE1CBC: bl      0x8045BFA0
    {
            ctx->lr = 0x80AE1CC0u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80AE1CC0:
    ctx->pc = 0x80AE1CC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1CC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AE1CC0: li      r3, 45
    ctx->gpr[3] = (u32)(s32)(45);

label_80AE1CC4:
    ctx->pc = 0x80AE1CC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1CC4u)) return;
    // 80AE1CC4: bl      0x8045F7C8
    {
            ctx->lr = 0x80AE1CC8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AE1CC8:
    ctx->pc = 0x80AE1CC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1CC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80AE1CC8: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80AE1CCC:
    ctx->pc = 0x80AE1CCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1CCCu)) return;
    // 80AE1CCC: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80AE1CD0:
    ctx->pc = 0x80AE1CD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1CD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AE1CD0: lwz     r0, 0(r3)
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
label_80AE1CD4:
    ctx->pc = 0x80AE1CD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1CD4u)) return;
    // 80AE1CD4: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80AE1CD8:
    ctx->pc = 0x80AE1CD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1CD8u)) return;
    // 80AE1CD8: lis     r3, -27619
    ctx->gpr[3] = ((u32)(s32)(-27619) << 16);

label_80AE1CDC:
    ctx->pc = 0x80AE1CDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1CDCu)) return;
    // 80AE1CDC: addi    r3, r3, 13760
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13760);

label_80AE1CE0:
    ctx->pc = 0x80AE1CE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1CE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AE1CE0: lwzx    r3, r3, r0
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
label_80AE1CE4:
    ctx->pc = 0x80AE1CE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1CE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AE1CE4: lwz     r3, 4(r3)
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
label_80AE1CE8:
    ctx->pc = 0x80AE1CE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1CE8u)) return;
    // 80AE1CE8: bl      0x8045F6FC
    {
            ctx->lr = 0x80AE1CECu;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80AE1CEC:
    ctx->pc = 0x80AE1CECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1CECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AE1CEC: li      r3, 494
    ctx->gpr[3] = (u32)(s32)(494);

label_80AE1CF0:
    ctx->pc = 0x80AE1CF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1CF0u)) return;
    // 80AE1CF0: bl      0x8045BFA0
    {
            ctx->lr = 0x80AE1CF4u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80AE1CF4:
    ctx->pc = 0x80AE1CF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1CF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AE1CF4: li      r3, 70
    ctx->gpr[3] = (u32)(s32)(70);

label_80AE1CF8:
    ctx->pc = 0x80AE1CF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1CF8u)) return;
    // 80AE1CF8: bl      0x8045F7C8
    {
            ctx->lr = 0x80AE1CFCu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AE1CFC:
    ctx->pc = 0x80AE1CFCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1CFCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AE1CFC: lis     r3, -27618
    ctx->gpr[3] = ((u32)(s32)(-27618) << 16);

label_80AE1D00:
    ctx->pc = 0x80AE1D00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1D00u)) return;
    // 80AE1D00: addi    r3, r3, -3772
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3772);

label_80AE1D04:
    ctx->pc = 0x80AE1D04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1D04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AE1D04: lwz     r3, 0(r3)
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
label_80AE1D08:
    ctx->pc = 0x80AE1D08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1D08u)) return;
    // 80AE1D08: cmplwi  r3, 0x0000
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

label_80AE1D0C:
    ctx->pc = 0x80AE1D0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1D0Cu)) return;
    // 80AE1D0C: bc    12, 2, 0x80AE1D24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80AE1D24;
        }
    }

label_80AE1D10:
    ctx->pc = 0x80AE1D10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1D10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AE1D10: bl      0x8050F9E0
    {
            ctx->lr = 0x80AE1D14u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80AE1D14:
    ctx->pc = 0x80AE1D14u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1D14u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80AE1D14: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80AE1D18:
    ctx->pc = 0x80AE1D18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1D18u)) return;
    // 80AE1D18: lis     r3, -27618
    ctx->gpr[3] = ((u32)(s32)(-27618) << 16);

label_80AE1D1C:
    ctx->pc = 0x80AE1D1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1D1Cu)) return;
    // 80AE1D1C: addi    r3, r3, -3772
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3772);

label_80AE1D20:
    ctx->pc = 0x80AE1D20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1D20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80AE1D20: stw     r0, 0(r3)
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
label_80AE1D24:
    ctx->pc = 0x80AE1D24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1D24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AE1D24: bl      0x8045C3AC
    {
            ctx->lr = 0x80AE1D28u;
            ctx->pc = 0x8045C3ACu;
            return;
    }

label_80AE1D28:
    ctx->pc = 0x80AE1D28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1D28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AE1D28: bl      0x8045C4A4
    {
            ctx->lr = 0x80AE1D2Cu;
            ctx->pc = 0x8045C4A4u;
            return;
    }

label_80AE1D2C:
    ctx->pc = 0x80AE1D2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1D2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AE1D2C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AE1D30:
    ctx->pc = 0x80AE1D30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1D30u)) return;
    // 80AE1D30: bl      0x8045F220
    {
            ctx->lr = 0x80AE1D34u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AE1D34:
    ctx->pc = 0x80AE1D34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1D34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80AE1D34: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80AE1D38:
    ctx->pc = 0x80AE1D38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1D38u)) return;
    // 80AE1D38: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AE1D3C:
    ctx->pc = 0x80AE1D3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1D3Cu)) return;
    // 80AE1D3C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AE1D40:
    ctx->pc = 0x80AE1D40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1D40u)) return;
    // 80AE1D40: lis     r6, -27619
    ctx->gpr[6] = ((u32)(s32)(-27619) << 16);

label_80AE1D44:
    ctx->pc = 0x80AE1D44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1D44u)) return;
    // 80AE1D44: addi    r6, r6, 13092
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(13092);

label_80AE1D48:
    ctx->pc = 0x80AE1D48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1D48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AE1D48: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80AE1D48u)) return;
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
label_80AE1D4C:
    ctx->pc = 0x80AE1D4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1D4Cu)) return;
    // 80AE1D4C: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80AE1D4Cu)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_80AE1D50:
    ctx->pc = 0x80AE1D50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1D50u)) return;
    // 80AE1D50: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80AE1D50u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80AE1D54:
    ctx->pc = 0x80AE1D54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1D54u)) return;
    // 80AE1D54: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80AE1D58:
    ctx->pc = 0x80AE1D58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1D58u)) return;
    // 80AE1D58: bl      0x8045C3C0
    {
            ctx->lr = 0x80AE1D5Cu;
            ctx->pc = 0x8045C3C0u;
            return;
    }

label_80AE1D5C:
    ctx->pc = 0x80AE1D5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1D5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AE1D5C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AE1D60:
    ctx->pc = 0x80AE1D60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1D60u)) return;
    // 80AE1D60: bl      0x8045F220
    {
            ctx->lr = 0x80AE1D64u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AE1D64:
    ctx->pc = 0x80AE1D64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 19u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1D64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 19u : 1u;
    // 80AE1D64: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80AE1D68:
    ctx->pc = 0x80AE1D68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1D68u)) return;
    // 80AE1D68: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80AE1D6C:
    ctx->pc = 0x80AE1D6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1D6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80AE1D6C: stw     r0, 8(r1)
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
label_80AE1D70:
    ctx->pc = 0x80AE1D70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1D70u)) return;
    // 80AE1D70: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AE1D74:
    ctx->pc = 0x80AE1D74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1D74u)) return;
    // 80AE1D74: li      r4, 600
    ctx->gpr[4] = (u32)(s32)(600);

label_80AE1D78:
    ctx->pc = 0x80AE1D78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1D78u)) return;
    // 80AE1D78: lis     r6, -27619
    ctx->gpr[6] = ((u32)(s32)(-27619) << 16);

label_80AE1D7C:
    ctx->pc = 0x80AE1D7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1D7Cu)) return;
    // 80AE1D7C: addi    r6, r6, 13124
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(13124);

label_80AE1D80:
    ctx->pc = 0x80AE1D80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1D80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80AE1D80: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80AE1D80u)) return;
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
label_80AE1D84:
    ctx->pc = 0x80AE1D84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1D84u)) return;
    // 80AE1D84: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80AE1D88:
    ctx->pc = 0x80AE1D88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1D88u)) return;
    // 80AE1D88: li      r7, 16384
    ctx->gpr[7] = (u32)(s32)(16384);

label_80AE1D8C:
    ctx->pc = 0x80AE1D8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1D8Cu)) return;
    // 80AE1D8C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80AE1D90:
    ctx->pc = 0x80AE1D90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1D90u)) return;
    // 80AE1D90: lis     r9, -27619
    ctx->gpr[9] = ((u32)(s32)(-27619) << 16);

label_80AE1D94:
    ctx->pc = 0x80AE1D94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1D94u)) return;
    // 80AE1D94: addi    r9, r9, 13128
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(13128);

label_80AE1D98:
    ctx->pc = 0x80AE1D98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1D98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AE1D98: lfs     f2, 0(r9)
    if (!ppc_fp_available_inline(ctx, 0x80AE1D98u)) return;
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
label_80AE1D9C:
    ctx->pc = 0x80AE1D9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1D9Cu)) return;
    // 80AE1D9C: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_80AE1DA0:
    ctx->pc = 0x80AE1DA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1DA0u)) return;
    // 80AE1DA0: lis     r10, 1
    ctx->gpr[10] = ((u32)(s32)(1) << 16);

label_80AE1DA4:
    ctx->pc = 0x80AE1DA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1DA4u)) return;
    // 80AE1DA4: addi    r10, r10, -32768
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(-32768);

label_80AE1DA8:
    ctx->pc = 0x80AE1DA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1DA8u)) return;
    // 80AE1DA8: fmr    f3, f2
    if (!ppc_fp_available_inline(ctx, 0x80AE1DA8u)) return;
    ctx->fpr[3] = ctx->fpr[2];

label_80AE1DAC:
    ctx->pc = 0x80AE1DACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1DACu)) return;
    // 80AE1DAC: bl      0x8045C260
    {
            ctx->lr = 0x80AE1DB0u;
            ctx->pc = 0x8045C260u;
            return;
    }

label_80AE1DB0:
    ctx->pc = 0x80AE1DB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1DB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AE1DB0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AE1DB4:
    ctx->pc = 0x80AE1DB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1DB4u)) return;
    // 80AE1DB4: bl      0x8045F220
    {
            ctx->lr = 0x80AE1DB8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AE1DB8:
    ctx->pc = 0x80AE1DB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1DB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80AE1DB8: lis     r4, -27618
    ctx->gpr[4] = ((u32)(s32)(-27618) << 16);

label_80AE1DBC:
    ctx->pc = 0x80AE1DBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1DBCu)) return;
    // 80AE1DBC: addi    r4, r4, -26788
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-26788);

label_80AE1DC0:
    ctx->pc = 0x80AE1DC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1DC0u)) return;
    // 80AE1DC0: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80AE1DC4:
    ctx->pc = 0x80AE1DC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1DC4u)) return;
    // 80AE1DC4: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80AE1DC8:
    ctx->pc = 0x80AE1DC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1DC8u)) return;
    // 80AE1DC8: lis     r6, -27619
    ctx->gpr[6] = ((u32)(s32)(-27619) << 16);

label_80AE1DCC:
    ctx->pc = 0x80AE1DCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1DCCu)) return;
    // 80AE1DCC: addi    r6, r6, 13084
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(13084);

label_80AE1DD0:
    ctx->pc = 0x80AE1DD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1DD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AE1DD0: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80AE1DD0u)) return;
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
label_80AE1DD4:
    ctx->pc = 0x80AE1DD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1DD4u)) return;
    // 80AE1DD4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80AE1DD8:
    ctx->pc = 0x80AE1DD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1DD8u)) return;
    // 80AE1DD8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80AE1DDC:
    ctx->pc = 0x80AE1DDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1DDCu)) return;
    // 80AE1DDC: bl      0x8045EBE4
    {
            ctx->lr = 0x80AE1DE0u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80AE1DE0:
    ctx->pc = 0x80AE1DE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1DE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AE1DE0: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80AE1DE4:
    ctx->pc = 0x80AE1DE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1DE4u)) return;
    // 80AE1DE4: bl      0x8045F7C8
    {
            ctx->lr = 0x80AE1DE8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AE1DE8:
    ctx->pc = 0x80AE1DE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1DE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AE1DE8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AE1DEC:
    ctx->pc = 0x80AE1DECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1DECu)) return;
    // 80AE1DEC: bl      0x8045F220
    {
            ctx->lr = 0x80AE1DF0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AE1DF0:
    ctx->pc = 0x80AE1DF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1DF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80AE1DF0: lis     r4, -27619
    ctx->gpr[4] = ((u32)(s32)(-27619) << 16);

label_80AE1DF4:
    ctx->pc = 0x80AE1DF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1DF4u)) return;
    // 80AE1DF4: addi    r4, r4, 31832
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(31832);

label_80AE1DF8:
    ctx->pc = 0x80AE1DF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1DF8u)) return;
    // 80AE1DF8: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80AE1DFC:
    ctx->pc = 0x80AE1DFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1DFCu)) return;
    // 80AE1DFC: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80AE1E00:
    ctx->pc = 0x80AE1E00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1E00u)) return;
    // 80AE1E00: lis     r6, -27619
    ctx->gpr[6] = ((u32)(s32)(-27619) << 16);

label_80AE1E04:
    ctx->pc = 0x80AE1E04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1E04u)) return;
    // 80AE1E04: addi    r6, r6, 13084
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(13084);

label_80AE1E08:
    ctx->pc = 0x80AE1E08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1E08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AE1E08: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80AE1E08u)) return;
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
label_80AE1E0C:
    ctx->pc = 0x80AE1E0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1E0Cu)) return;
    // 80AE1E0C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80AE1E10:
    ctx->pc = 0x80AE1E10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1E10u)) return;
    // 80AE1E10: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80AE1E14:
    ctx->pc = 0x80AE1E14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1E14u)) return;
    // 80AE1E14: bl      0x8045EBE4
    {
            ctx->lr = 0x80AE1E18u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80AE1E18:
    ctx->pc = 0x80AE1E18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1E18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AE1E18: li      r3, 65
    ctx->gpr[3] = (u32)(s32)(65);

label_80AE1E1C:
    ctx->pc = 0x80AE1E1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1E1Cu)) return;
    // 80AE1E1C: bl      0x8045F7C8
    {
            ctx->lr = 0x80AE1E20u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AE1E20:
    ctx->pc = 0x80AE1E20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1E20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AE1E20: bl      0x8045F32C
    {
            ctx->lr = 0x80AE1E24u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80AE1E24:
    ctx->pc = 0x80AE1E24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1E24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AE1E24: bl      0x8045C3AC
    {
            ctx->lr = 0x80AE1E28u;
            ctx->pc = 0x8045C3ACu;
            return;
    }

label_80AE1E28:
    ctx->pc = 0x80AE1E28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1E28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AE1E28: bl      0x8045C4A4
    {
            ctx->lr = 0x80AE1E2Cu;
            ctx->pc = 0x8045C4A4u;
            return;
    }

label_80AE1E2C:
    ctx->pc = 0x80AE1E2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1E2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80AE1E2C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AE1E30:
    ctx->pc = 0x80AE1E30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1E30u)) return;
    // 80AE1E30: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AE1E34:
    ctx->pc = 0x80AE1E34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1E34u)) return;
    // 80AE1E34: lis     r5, -27619
    ctx->gpr[5] = ((u32)(s32)(-27619) << 16);

label_80AE1E38:
    ctx->pc = 0x80AE1E38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1E38u)) return;
    // 80AE1E38: addi    r5, r5, 13132
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13132);

label_80AE1E3C:
    ctx->pc = 0x80AE1E3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1E3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AE1E3C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AE1E3Cu)) return;
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
label_80AE1E40:
    ctx->pc = 0x80AE1E40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1E40u)) return;
    // 80AE1E40: lis     r5, -27619
    ctx->gpr[5] = ((u32)(s32)(-27619) << 16);

label_80AE1E44:
    ctx->pc = 0x80AE1E44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1E44u)) return;
    // 80AE1E44: addi    r5, r5, 13136
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13136);

label_80AE1E48:
    ctx->pc = 0x80AE1E48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1E48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AE1E48: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AE1E48u)) return;
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
label_80AE1E4C:
    ctx->pc = 0x80AE1E4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1E4Cu)) return;
    // 80AE1E4C: lis     r5, -27619
    ctx->gpr[5] = ((u32)(s32)(-27619) << 16);

label_80AE1E50:
    ctx->pc = 0x80AE1E50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1E50u)) return;
    // 80AE1E50: addi    r5, r5, 13140
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13140);

label_80AE1E54:
    ctx->pc = 0x80AE1E54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1E54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AE1E54: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AE1E54u)) return;
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
label_80AE1E58:
    ctx->pc = 0x80AE1E58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1E58u)) return;
    // 80AE1E58: bl      0x8045C750
    {
            ctx->lr = 0x80AE1E5Cu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80AE1E5C:
    ctx->pc = 0x80AE1E5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1E5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80AE1E5C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AE1E60:
    ctx->pc = 0x80AE1E60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1E60u)) return;
    // 80AE1E60: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AE1E64:
    ctx->pc = 0x80AE1E64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1E64u)) return;
    // 80AE1E64: li      r5, 3443
    ctx->gpr[5] = (u32)(s32)(3443);

label_80AE1E68:
    ctx->pc = 0x80AE1E68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1E68u)) return;
    // 80AE1E68: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80AE1E6C:
    ctx->pc = 0x80AE1E6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1E6Cu)) return;
    // 80AE1E6C: addi    r6, r6, -18108
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-18108);

label_80AE1E70:
    ctx->pc = 0x80AE1E70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1E70u)) return;
    // 80AE1E70: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80AE1E74:
    ctx->pc = 0x80AE1E74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1E74u)) return;
    // 80AE1E74: bl      0x8045C7B4
    {
            ctx->lr = 0x80AE1E78u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80AE1E78:
    ctx->pc = 0x80AE1E78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1E78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80AE1E78: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AE1E7C:
    ctx->pc = 0x80AE1E7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1E7Cu)) return;
    // 80AE1E7C: li      r4, 10
    ctx->gpr[4] = (u32)(s32)(10);

label_80AE1E80:
    ctx->pc = 0x80AE1E80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1E80u)) return;
    // 80AE1E80: li      r5, 3955
    ctx->gpr[5] = (u32)(s32)(3955);

label_80AE1E84:
    ctx->pc = 0x80AE1E84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1E84u)) return;
    // 80AE1E84: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80AE1E88:
    ctx->pc = 0x80AE1E88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1E88u)) return;
    // 80AE1E88: addi    r6, r6, -18108
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-18108);

label_80AE1E8C:
    ctx->pc = 0x80AE1E8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1E8Cu)) return;
    // 80AE1E8C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80AE1E90:
    ctx->pc = 0x80AE1E90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1E90u)) return;
    // 80AE1E90: bl      0x8045C7B4
    {
            ctx->lr = 0x80AE1E94u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80AE1E94:
    ctx->pc = 0x80AE1E94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1E94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AE1E94: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AE1E98:
    ctx->pc = 0x80AE1E98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1E98u)) return;
    // 80AE1E98: bl      0x8045F220
    {
            ctx->lr = 0x80AE1E9Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AE1E9C:
    ctx->pc = 0x80AE1E9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1E9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80AE1E9C: lis     r4, -27618
    ctx->gpr[4] = ((u32)(s32)(-27618) << 16);

label_80AE1EA0:
    ctx->pc = 0x80AE1EA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1EA0u)) return;
    // 80AE1EA0: addi    r4, r4, -11936
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-11936);

label_80AE1EA4:
    ctx->pc = 0x80AE1EA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1EA4u)) return;
    // 80AE1EA4: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80AE1EA8:
    ctx->pc = 0x80AE1EA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1EA8u)) return;
    // 80AE1EA8: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80AE1EAC:
    ctx->pc = 0x80AE1EACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1EACu)) return;
    // 80AE1EAC: lis     r6, -27619
    ctx->gpr[6] = ((u32)(s32)(-27619) << 16);

label_80AE1EB0:
    ctx->pc = 0x80AE1EB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1EB0u)) return;
    // 80AE1EB0: addi    r6, r6, 13144
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(13144);

label_80AE1EB4:
    ctx->pc = 0x80AE1EB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1EB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AE1EB4: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80AE1EB4u)) return;
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
label_80AE1EB8:
    ctx->pc = 0x80AE1EB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1EB8u)) return;
    // 80AE1EB8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80AE1EBC:
    ctx->pc = 0x80AE1EBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1EBCu)) return;
    // 80AE1EBC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80AE1EC0:
    ctx->pc = 0x80AE1EC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1EC0u)) return;
    // 80AE1EC0: bl      0x8045EBE4
    {
            ctx->lr = 0x80AE1EC4u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80AE1EC4:
    ctx->pc = 0x80AE1EC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1EC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AE1EC4: li      r3, 25
    ctx->gpr[3] = (u32)(s32)(25);

label_80AE1EC8:
    ctx->pc = 0x80AE1EC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1EC8u)) return;
    // 80AE1EC8: bl      0x8045F7C8
    {
            ctx->lr = 0x80AE1ECCu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AE1ECC:
    ctx->pc = 0x80AE1ECCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1ECCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AE1ECC: li      r3, 1340
    ctx->gpr[3] = (u32)(s32)(1340);

label_80AE1ED0:
    ctx->pc = 0x80AE1ED0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1ED0u)) return;
    // 80AE1ED0: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_80AE1ED4:
    ctx->pc = 0x80AE1ED4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1ED4u)) return;
    // 80AE1ED4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80AE1ED8:
    ctx->pc = 0x80AE1ED8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1ED8u)) return;
    // 80AE1ED8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80AE1EDC:
    ctx->pc = 0x80AE1EDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1EDCu)) return;
    // 80AE1EDC: bl      0x80AE2CAC
    {
            ctx->lr = 0x80AE1EE0u;
            goto label_80AE2CAC;
    }

label_80AE1EE0:
    ctx->pc = 0x80AE1EE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1EE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AE1EE0: li      r3, 40
    ctx->gpr[3] = (u32)(s32)(40);

label_80AE1EE4:
    ctx->pc = 0x80AE1EE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1EE4u)) return;
    // 80AE1EE4: bl      0x8045F7C8
    {
            ctx->lr = 0x80AE1EE8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AE1EE8:
    ctx->pc = 0x80AE1EE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1EE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80AE1EE8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AE1EEC:
    ctx->pc = 0x80AE1EECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1EECu)) return;
    // 80AE1EEC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AE1EF0:
    ctx->pc = 0x80AE1EF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1EF0u)) return;
    // 80AE1EF0: lis     r5, -27619
    ctx->gpr[5] = ((u32)(s32)(-27619) << 16);

label_80AE1EF4:
    ctx->pc = 0x80AE1EF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1EF4u)) return;
    // 80AE1EF4: addi    r5, r5, 13148
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13148);

label_80AE1EF8:
    ctx->pc = 0x80AE1EF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1EF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AE1EF8: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AE1EF8u)) return;
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
label_80AE1EFC:
    ctx->pc = 0x80AE1EFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1EFCu)) return;
    // 80AE1EFC: lis     r5, -27619
    ctx->gpr[5] = ((u32)(s32)(-27619) << 16);

label_80AE1F00:
    ctx->pc = 0x80AE1F00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1F00u)) return;
    // 80AE1F00: addi    r5, r5, 13152
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13152);

label_80AE1F04:
    ctx->pc = 0x80AE1F04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1F04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AE1F04: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AE1F04u)) return;
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
label_80AE1F08:
    ctx->pc = 0x80AE1F08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1F08u)) return;
    // 80AE1F08: lis     r5, -27619
    ctx->gpr[5] = ((u32)(s32)(-27619) << 16);

label_80AE1F0C:
    ctx->pc = 0x80AE1F0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1F0Cu)) return;
    // 80AE1F0C: addi    r5, r5, 13156
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13156);

label_80AE1F10:
    ctx->pc = 0x80AE1F10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1F10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AE1F10: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AE1F10u)) return;
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
label_80AE1F14:
    ctx->pc = 0x80AE1F14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1F14u)) return;
    // 80AE1F14: bl      0x8045C750
    {
            ctx->lr = 0x80AE1F18u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80AE1F18:
    ctx->pc = 0x80AE1F18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1F18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80AE1F18: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AE1F1C:
    ctx->pc = 0x80AE1F1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1F1Cu)) return;
    // 80AE1F1C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AE1F20:
    ctx->pc = 0x80AE1F20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1F20u)) return;
    // 80AE1F20: li      r5, 8051
    ctx->gpr[5] = (u32)(s32)(8051);

label_80AE1F24:
    ctx->pc = 0x80AE1F24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1F24u)) return;
    // 80AE1F24: li      r6, 19456
    ctx->gpr[6] = (u32)(s32)(19456);

label_80AE1F28:
    ctx->pc = 0x80AE1F28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1F28u)) return;
    // 80AE1F28: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80AE1F2C:
    ctx->pc = 0x80AE1F2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1F2Cu)) return;
    // 80AE1F2C: bl      0x8045C7B4
    {
            ctx->lr = 0x80AE1F30u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80AE1F30:
    ctx->pc = 0x80AE1F30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1F30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80AE1F30: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AE1F34:
    ctx->pc = 0x80AE1F34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1F34u)) return;
    // 80AE1F34: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_80AE1F38:
    ctx->pc = 0x80AE1F38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1F38u)) return;
    // 80AE1F38: lis     r5, -27619
    ctx->gpr[5] = ((u32)(s32)(-27619) << 16);

label_80AE1F3C:
    ctx->pc = 0x80AE1F3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1F3Cu)) return;
    // 80AE1F3C: addi    r5, r5, 13160
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13160);

label_80AE1F40:
    ctx->pc = 0x80AE1F40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1F40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AE1F40: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AE1F40u)) return;
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
label_80AE1F44:
    ctx->pc = 0x80AE1F44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1F44u)) return;
    // 80AE1F44: lis     r5, -27619
    ctx->gpr[5] = ((u32)(s32)(-27619) << 16);

label_80AE1F48:
    ctx->pc = 0x80AE1F48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1F48u)) return;
    // 80AE1F48: addi    r5, r5, 13164
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13164);

label_80AE1F4C:
    ctx->pc = 0x80AE1F4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1F4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AE1F4C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AE1F4Cu)) return;
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
label_80AE1F50:
    ctx->pc = 0x80AE1F50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1F50u)) return;
    // 80AE1F50: lis     r5, -27619
    ctx->gpr[5] = ((u32)(s32)(-27619) << 16);

label_80AE1F54:
    ctx->pc = 0x80AE1F54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1F54u)) return;
    // 80AE1F54: addi    r5, r5, 13168
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13168);

label_80AE1F58:
    ctx->pc = 0x80AE1F58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1F58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AE1F58: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AE1F58u)) return;
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
label_80AE1F5C:
    ctx->pc = 0x80AE1F5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1F5Cu)) return;
    // 80AE1F5C: bl      0x8045C750
    {
            ctx->lr = 0x80AE1F60u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80AE1F60:
    ctx->pc = 0x80AE1F60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1F60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80AE1F60: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AE1F64:
    ctx->pc = 0x80AE1F64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1F64u)) return;
    // 80AE1F64: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_80AE1F68:
    ctx->pc = 0x80AE1F68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1F68u)) return;
    // 80AE1F68: li      r5, 3955
    ctx->gpr[5] = (u32)(s32)(3955);

label_80AE1F6C:
    ctx->pc = 0x80AE1F6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1F6Cu)) return;
    // 80AE1F6C: li      r6, 22084
    ctx->gpr[6] = (u32)(s32)(22084);

label_80AE1F70:
    ctx->pc = 0x80AE1F70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1F70u)) return;
    // 80AE1F70: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80AE1F74:
    ctx->pc = 0x80AE1F74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1F74u)) return;
    // 80AE1F74: bl      0x8045C7B4
    {
            ctx->lr = 0x80AE1F78u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80AE1F78:
    ctx->pc = 0x80AE1F78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1F78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AE1F78: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AE1F7C:
    ctx->pc = 0x80AE1F7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1F7Cu)) return;
    // 80AE1F7C: bl      0x8045F220
    {
            ctx->lr = 0x80AE1F80u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AE1F80:
    ctx->pc = 0x80AE1F80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1F80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AE1F80: bl      0x8045EB8C
    {
            ctx->lr = 0x80AE1F84u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80AE1F84:
    ctx->pc = 0x80AE1F84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1F84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AE1F84: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AE1F88:
    ctx->pc = 0x80AE1F88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1F88u)) return;
    // 80AE1F88: bl      0x8045F220
    {
            ctx->lr = 0x80AE1F8Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AE1F8C:
    ctx->pc = 0x80AE1F8Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1F8Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80AE1F8C: lis     r4, -27619
    ctx->gpr[4] = ((u32)(s32)(-27619) << 16);

label_80AE1F90:
    ctx->pc = 0x80AE1F90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1F90u)) return;
    // 80AE1F90: addi    r4, r4, 21924
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(21924);

label_80AE1F94:
    ctx->pc = 0x80AE1F94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1F94u)) return;
    // 80AE1F94: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80AE1F98:
    ctx->pc = 0x80AE1F98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1F98u)) return;
    // 80AE1F98: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80AE1F9C:
    ctx->pc = 0x80AE1F9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1F9Cu)) return;
    // 80AE1F9C: lis     r6, -27619
    ctx->gpr[6] = ((u32)(s32)(-27619) << 16);

label_80AE1FA0:
    ctx->pc = 0x80AE1FA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1FA0u)) return;
    // 80AE1FA0: addi    r6, r6, 13088
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(13088);

label_80AE1FA4:
    ctx->pc = 0x80AE1FA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1FA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AE1FA4: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80AE1FA4u)) return;
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
label_80AE1FA8:
    ctx->pc = 0x80AE1FA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1FA8u)) return;
    // 80AE1FA8: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80AE1FAC:
    ctx->pc = 0x80AE1FACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1FACu)) return;
    // 80AE1FAC: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_80AE1FB0:
    ctx->pc = 0x80AE1FB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1FB0u)) return;
    // 80AE1FB0: bl      0x8045EBE4
    {
            ctx->lr = 0x80AE1FB4u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80AE1FB4:
    ctx->pc = 0x80AE1FB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1FB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AE1FB4: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_80AE1FB8:
    ctx->pc = 0x80AE1FB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1FB8u)) return;
    // 80AE1FB8: bl      0x8045F7C8
    {
            ctx->lr = 0x80AE1FBCu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AE1FBC:
    ctx->pc = 0x80AE1FBCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1FBCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AE1FBC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AE1FC0:
    ctx->pc = 0x80AE1FC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1FC0u)) return;
    // 80AE1FC0: bl      0x8045F220
    {
            ctx->lr = 0x80AE1FC4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AE1FC4:
    ctx->pc = 0x80AE1FC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1FC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AE1FC4: bl      0x8045C034
    {
            ctx->lr = 0x80AE1FC8u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80AE1FC8:
    ctx->pc = 0x80AE1FC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1FC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AE1FC8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AE1FCC:
    ctx->pc = 0x80AE1FCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1FCCu)) return;
    // 80AE1FCC: bl      0x8045F220
    {
            ctx->lr = 0x80AE1FD0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AE1FD0:
    ctx->pc = 0x80AE1FD0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1FD0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AE1FD0: lis     r4, -27619
    ctx->gpr[4] = ((u32)(s32)(-27619) << 16);

label_80AE1FD4:
    ctx->pc = 0x80AE1FD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1FD4u)) return;
    // 80AE1FD4: addi    r4, r4, 13800
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13800);

label_80AE1FD8:
    ctx->pc = 0x80AE1FD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1FD8u)) return;
    // 80AE1FD8: bl      0x8045C060
    {
            ctx->lr = 0x80AE1FDCu;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80AE1FDC:
    ctx->pc = 0x80AE1FDCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1FDCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AE1FDC: li      r3, 495
    ctx->gpr[3] = (u32)(s32)(495);

label_80AE1FE0:
    ctx->pc = 0x80AE1FE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1FE0u)) return;
    // 80AE1FE0: bl      0x8045BFA0
    {
            ctx->lr = 0x80AE1FE4u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80AE1FE4:
    ctx->pc = 0x80AE1FE4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE1FE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80AE1FE4: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80AE1FE8:
    ctx->pc = 0x80AE1FE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1FE8u)) return;
    // 80AE1FE8: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80AE1FEC:
    ctx->pc = 0x80AE1FECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1FECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AE1FEC: lwz     r0, 0(r3)
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
label_80AE1FF0:
    ctx->pc = 0x80AE1FF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1FF0u)) return;
    // 80AE1FF0: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80AE1FF4:
    ctx->pc = 0x80AE1FF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1FF4u)) return;
    // 80AE1FF4: lis     r3, -27619
    ctx->gpr[3] = ((u32)(s32)(-27619) << 16);

label_80AE1FF8:
    ctx->pc = 0x80AE1FF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1FF8u)) return;
    // 80AE1FF8: addi    r3, r3, 13760
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13760);

label_80AE1FFC:
    ctx->pc = 0x80AE1FFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE1FFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AE1FFC: lwzx    r3, r3, r0
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
label_80AE2000:
    ctx->pc = 0x80AE2000u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2000u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AE2000: lwz     r3, 8(r3)
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
label_80AE2004:
    ctx->pc = 0x80AE2004u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2004u)) return;
    // 80AE2004: bl      0x8045F6FC
    {
            ctx->lr = 0x80AE2008u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80AE2008:
    ctx->pc = 0x80AE2008u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2008u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AE2008: li      r3, 70
    ctx->gpr[3] = (u32)(s32)(70);

label_80AE200C:
    ctx->pc = 0x80AE200Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE200Cu)) return;
    // 80AE200C: bl      0x8045F7C8
    {
            ctx->lr = 0x80AE2010u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AE2010:
    ctx->pc = 0x80AE2010u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2010u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AE2010: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AE2014:
    ctx->pc = 0x80AE2014u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2014u)) return;
    // 80AE2014: bl      0x8045F220
    {
            ctx->lr = 0x80AE2018u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AE2018:
    ctx->pc = 0x80AE2018u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2018u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AE2018: bl      0x8045EB8C
    {
            ctx->lr = 0x80AE201Cu;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80AE201C:
    ctx->pc = 0x80AE201Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE201Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AE201C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AE2020:
    ctx->pc = 0x80AE2020u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2020u)) return;
    // 80AE2020: bl      0x8045F220
    {
            ctx->lr = 0x80AE2024u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AE2024:
    ctx->pc = 0x80AE2024u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2024u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80AE2024: lis     r4, -27618
    ctx->gpr[4] = ((u32)(s32)(-27618) << 16);

label_80AE2028:
    ctx->pc = 0x80AE2028u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2028u)) return;
    // 80AE2028: addi    r4, r4, -3804
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-3804);

label_80AE202C:
    ctx->pc = 0x80AE202Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE202Cu)) return;
    // 80AE202C: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80AE2030:
    ctx->pc = 0x80AE2030u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2030u)) return;
    // 80AE2030: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80AE2034:
    ctx->pc = 0x80AE2034u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2034u)) return;
    // 80AE2034: lis     r6, -27619
    ctx->gpr[6] = ((u32)(s32)(-27619) << 16);

label_80AE2038:
    ctx->pc = 0x80AE2038u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2038u)) return;
    // 80AE2038: addi    r6, r6, 13172
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(13172);

label_80AE203C:
    ctx->pc = 0x80AE203Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE203Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AE203C: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80AE203Cu)) return;
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
label_80AE2040:
    ctx->pc = 0x80AE2040u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2040u)) return;
    // 80AE2040: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80AE2044:
    ctx->pc = 0x80AE2044u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2044u)) return;
    // 80AE2044: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_80AE2048:
    ctx->pc = 0x80AE2048u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2048u)) return;
    // 80AE2048: bl      0x8045EBE4
    {
            ctx->lr = 0x80AE204Cu;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80AE204C:
    ctx->pc = 0x80AE204Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE204Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AE204C: bl      0x8045F32C
    {
            ctx->lr = 0x80AE2050u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80AE2050:
    ctx->pc = 0x80AE2050u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2050u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AE2050: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_80AE2054:
    ctx->pc = 0x80AE2054u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2054u)) return;
    // 80AE2054: bl      0x8045F7C8
    {
            ctx->lr = 0x80AE2058u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AE2058:
    ctx->pc = 0x80AE2058u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2058u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AE2058: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AE205C:
    ctx->pc = 0x80AE205Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE205Cu)) return;
    // 80AE205C: bl      0x8045F220
    {
            ctx->lr = 0x80AE2060u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AE2060:
    ctx->pc = 0x80AE2060u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2060u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AE2060: bl      0x8045EB8C
    {
            ctx->lr = 0x80AE2064u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80AE2064:
    ctx->pc = 0x80AE2064u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2064u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AE2064: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AE2068:
    ctx->pc = 0x80AE2068u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2068u)) return;
    // 80AE2068: bl      0x8045F220
    {
            ctx->lr = 0x80AE206Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AE206C:
    ctx->pc = 0x80AE206Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE206Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80AE206C: lis     r4, -28586
    ctx->gpr[4] = ((u32)(s32)(-28586) << 16);

label_80AE2070:
    ctx->pc = 0x80AE2070u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2070u)) return;
    // 80AE2070: addi    r4, r4, -5912
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5912);

label_80AE2074:
    ctx->pc = 0x80AE2074u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2074u)) return;
    // 80AE2074: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80AE2078:
    ctx->pc = 0x80AE2078u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2078u)) return;
    // 80AE2078: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80AE207C:
    ctx->pc = 0x80AE207Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE207Cu)) return;
    // 80AE207C: lis     r6, -27619
    ctx->gpr[6] = ((u32)(s32)(-27619) << 16);

label_80AE2080:
    ctx->pc = 0x80AE2080u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2080u)) return;
    // 80AE2080: addi    r6, r6, 13176
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(13176);

label_80AE2084:
    ctx->pc = 0x80AE2084u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2084u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AE2084: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80AE2084u)) return;
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
label_80AE2088:
    ctx->pc = 0x80AE2088u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2088u)) return;
    // 80AE2088: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80AE208C:
    ctx->pc = 0x80AE208Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE208Cu)) return;
    // 80AE208C: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_80AE2090:
    ctx->pc = 0x80AE2090u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2090u)) return;
    // 80AE2090: bl      0x8045EBE4
    {
            ctx->lr = 0x80AE2094u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80AE2094:
    ctx->pc = 0x80AE2094u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2094u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AE2094: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80AE2098:
    ctx->pc = 0x80AE2098u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2098u)) return;
    // 80AE2098: bl      0x8045F7C8
    {
            ctx->lr = 0x80AE209Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AE209C:
    ctx->pc = 0x80AE209Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE209Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AE209C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AE20A0:
    ctx->pc = 0x80AE20A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE20A0u)) return;
    // 80AE20A0: bl      0x8045F220
    {
            ctx->lr = 0x80AE20A4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AE20A4:
    ctx->pc = 0x80AE20A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE20A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80AE20A4: lis     r4, -27619
    ctx->gpr[4] = ((u32)(s32)(-27619) << 16);

label_80AE20A8:
    ctx->pc = 0x80AE20A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE20A8u)) return;
    // 80AE20A8: addi    r4, r4, 13180
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13180);

label_80AE20AC:
    ctx->pc = 0x80AE20ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE20ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80AE20AC: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AE20ACu)) return;
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
label_80AE20B0:
    ctx->pc = 0x80AE20B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE20B0u)) return;
    // 80AE20B0: lis     r4, -27619
    ctx->gpr[4] = ((u32)(s32)(-27619) << 16);

label_80AE20B4:
    ctx->pc = 0x80AE20B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE20B4u)) return;
    // 80AE20B4: addi    r4, r4, 13184
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13184);

label_80AE20B8:
    ctx->pc = 0x80AE20B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE20B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80AE20B8: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AE20B8u)) return;
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
label_80AE20BC:
    ctx->pc = 0x80AE20BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE20BCu)) return;
    // 80AE20BC: lis     r4, -27619
    ctx->gpr[4] = ((u32)(s32)(-27619) << 16);

label_80AE20C0:
    ctx->pc = 0x80AE20C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE20C0u)) return;
    // 80AE20C0: addi    r4, r4, 13188
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13188);

label_80AE20C4:
    ctx->pc = 0x80AE20C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE20C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AE20C4: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AE20C4u)) return;
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
label_80AE20C8:
    ctx->pc = 0x80AE20C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE20C8u)) return;
    // 80AE20C8: lis     r4, -27619
    ctx->gpr[4] = ((u32)(s32)(-27619) << 16);

label_80AE20CC:
    ctx->pc = 0x80AE20CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE20CCu)) return;
    // 80AE20CC: addi    r4, r4, 13176
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13176);

label_80AE20D0:
    ctx->pc = 0x80AE20D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE20D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AE20D0: lfs     f4, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AE20D0u)) return;
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
label_80AE20D4:
    ctx->pc = 0x80AE20D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE20D4u)) return;
    // 80AE20D4: lis     r4, -27619
    ctx->gpr[4] = ((u32)(s32)(-27619) << 16);

label_80AE20D8:
    ctx->pc = 0x80AE20D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE20D8u)) return;
    // 80AE20D8: addi    r4, r4, 13192
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13192);

label_80AE20DC:
    ctx->pc = 0x80AE20DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE20DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AE20DC: lfs     f5, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AE20DCu)) return;
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
label_80AE20E0:
    ctx->pc = 0x80AE20E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE20E0u)) return;
    // 80AE20E0: bl      0x8045E570
    {
            ctx->lr = 0x80AE20E4u;
            ctx->pc = 0x8045E570u;
            return;
    }

label_80AE20E4:
    ctx->pc = 0x80AE20E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE20E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AE20E4: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80AE20E8:
    ctx->pc = 0x80AE20E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE20E8u)) return;
    // 80AE20E8: bl      0x8045F7C8
    {
            ctx->lr = 0x80AE20ECu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AE20EC:
    ctx->pc = 0x80AE20ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE20ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80AE20EC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AE20F0:
    ctx->pc = 0x80AE20F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE20F0u)) return;
    // 80AE20F0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AE20F4:
    ctx->pc = 0x80AE20F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE20F4u)) return;
    // 80AE20F4: lis     r5, -27619
    ctx->gpr[5] = ((u32)(s32)(-27619) << 16);

label_80AE20F8:
    ctx->pc = 0x80AE20F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE20F8u)) return;
    // 80AE20F8: addi    r5, r5, 13196
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13196);

label_80AE20FC:
    ctx->pc = 0x80AE20FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE20FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AE20FC: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AE20FCu)) return;
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
label_80AE2100:
    ctx->pc = 0x80AE2100u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2100u)) return;
    // 80AE2100: lis     r5, -27619
    ctx->gpr[5] = ((u32)(s32)(-27619) << 16);

label_80AE2104:
    ctx->pc = 0x80AE2104u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2104u)) return;
    // 80AE2104: addi    r5, r5, 13200
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13200);

label_80AE2108:
    ctx->pc = 0x80AE2108u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2108u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AE2108: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AE2108u)) return;
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
label_80AE210C:
    ctx->pc = 0x80AE210Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE210Cu)) return;
    // 80AE210C: lis     r5, -27619
    ctx->gpr[5] = ((u32)(s32)(-27619) << 16);

label_80AE2110:
    ctx->pc = 0x80AE2110u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2110u)) return;
    // 80AE2110: addi    r5, r5, 13204
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13204);

label_80AE2114:
    ctx->pc = 0x80AE2114u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2114u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AE2114: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AE2114u)) return;
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
label_80AE2118:
    ctx->pc = 0x80AE2118u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2118u)) return;
    // 80AE2118: bl      0x8045C750
    {
            ctx->lr = 0x80AE211Cu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80AE211C:
    ctx->pc = 0x80AE211Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE211Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80AE211C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AE2120:
    ctx->pc = 0x80AE2120u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2120u)) return;
    // 80AE2120: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AE2124:
    ctx->pc = 0x80AE2124u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2124u)) return;
    // 80AE2124: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80AE2128:
    ctx->pc = 0x80AE2128u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2128u)) return;
    // 80AE2128: addi    r5, r5, -1588
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-1588);

label_80AE212C:
    ctx->pc = 0x80AE212Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE212Cu)) return;
    // 80AE212C: li      r6, 16230
    ctx->gpr[6] = (u32)(s32)(16230);

label_80AE2130:
    ctx->pc = 0x80AE2130u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2130u)) return;
    // 80AE2130: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80AE2134:
    ctx->pc = 0x80AE2134u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2134u)) return;
    // 80AE2134: bl      0x8045C7B4
    {
            ctx->lr = 0x80AE2138u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80AE2138:
    ctx->pc = 0x80AE2138u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2138u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80AE2138: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AE213C:
    ctx->pc = 0x80AE213Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE213Cu)) return;
    // 80AE213C: li      r4, 70
    ctx->gpr[4] = (u32)(s32)(70);

label_80AE2140:
    ctx->pc = 0x80AE2140u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2140u)) return;
    // 80AE2140: lis     r5, -27619
    ctx->gpr[5] = ((u32)(s32)(-27619) << 16);

label_80AE2144:
    ctx->pc = 0x80AE2144u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2144u)) return;
    // 80AE2144: addi    r5, r5, 13196
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13196);

label_80AE2148:
    ctx->pc = 0x80AE2148u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2148u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AE2148: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AE2148u)) return;
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
label_80AE214C:
    ctx->pc = 0x80AE214Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE214Cu)) return;
    // 80AE214C: lis     r5, -27619
    ctx->gpr[5] = ((u32)(s32)(-27619) << 16);

label_80AE2150:
    ctx->pc = 0x80AE2150u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2150u)) return;
    // 80AE2150: addi    r5, r5, 13200
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13200);

label_80AE2154:
    ctx->pc = 0x80AE2154u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2154u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AE2154: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AE2154u)) return;
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
label_80AE2158:
    ctx->pc = 0x80AE2158u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2158u)) return;
    // 80AE2158: lis     r5, -27619
    ctx->gpr[5] = ((u32)(s32)(-27619) << 16);

label_80AE215C:
    ctx->pc = 0x80AE215Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE215Cu)) return;
    // 80AE215C: addi    r5, r5, 13204
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13204);

label_80AE2160:
    ctx->pc = 0x80AE2160u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2160u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AE2160: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AE2160u)) return;
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
label_80AE2164:
    ctx->pc = 0x80AE2164u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2164u)) return;
    // 80AE2164: bl      0x8045C750
    {
            ctx->lr = 0x80AE2168u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80AE2168:
    ctx->pc = 0x80AE2168u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2168u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80AE2168: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AE216C:
    ctx->pc = 0x80AE216Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE216Cu)) return;
    // 80AE216C: li      r4, 70
    ctx->gpr[4] = (u32)(s32)(70);

label_80AE2170:
    ctx->pc = 0x80AE2170u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2170u)) return;
    // 80AE2170: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80AE2174:
    ctx->pc = 0x80AE2174u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2174u)) return;
    // 80AE2174: addi    r5, r5, -1588
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-1588);

label_80AE2178:
    ctx->pc = 0x80AE2178u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2178u)) return;
    // 80AE2178: li      r6, 5222
    ctx->gpr[6] = (u32)(s32)(5222);

label_80AE217C:
    ctx->pc = 0x80AE217Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE217Cu)) return;
    // 80AE217C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80AE2180:
    ctx->pc = 0x80AE2180u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2180u)) return;
    // 80AE2180: bl      0x8045C7B4
    {
            ctx->lr = 0x80AE2184u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80AE2184:
    ctx->pc = 0x80AE2184u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2184u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AE2184: li      r3, 25
    ctx->gpr[3] = (u32)(s32)(25);

label_80AE2188:
    ctx->pc = 0x80AE2188u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2188u)) return;
    // 80AE2188: bl      0x8045F7C8
    {
            ctx->lr = 0x80AE218Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AE218C:
    ctx->pc = 0x80AE218Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE218Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AE218C: li      r3, 496
    ctx->gpr[3] = (u32)(s32)(496);

label_80AE2190:
    ctx->pc = 0x80AE2190u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2190u)) return;
    // 80AE2190: bl      0x8045BFA0
    {
            ctx->lr = 0x80AE2194u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80AE2194:
    ctx->pc = 0x80AE2194u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2194u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80AE2194: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80AE2198:
    ctx->pc = 0x80AE2198u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2198u)) return;
    // 80AE2198: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80AE219C:
    ctx->pc = 0x80AE219Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE219Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AE219C: lwz     r0, 0(r3)
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
label_80AE21A0:
    ctx->pc = 0x80AE21A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE21A0u)) return;
    // 80AE21A0: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80AE21A4:
    ctx->pc = 0x80AE21A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE21A4u)) return;
    // 80AE21A4: lis     r3, -27619
    ctx->gpr[3] = ((u32)(s32)(-27619) << 16);

label_80AE21A8:
    ctx->pc = 0x80AE21A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE21A8u)) return;
    // 80AE21A8: addi    r3, r3, 13760
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13760);

label_80AE21AC:
    ctx->pc = 0x80AE21ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE21ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AE21AC: lwzx    r3, r3, r0
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
label_80AE21B0:
    ctx->pc = 0x80AE21B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE21B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AE21B0: lwz     r3, 12(r3)
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
label_80AE21B4:
    ctx->pc = 0x80AE21B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE21B4u)) return;
    // 80AE21B4: bl      0x8045F6FC
    {
            ctx->lr = 0x80AE21B8u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80AE21B8:
    ctx->pc = 0x80AE21B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE21B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AE21B8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AE21BC:
    ctx->pc = 0x80AE21BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE21BCu)) return;
    // 80AE21BC: bl      0x8045F220
    {
            ctx->lr = 0x80AE21C0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AE21C0:
    ctx->pc = 0x80AE21C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE21C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AE21C0: bl      0x8045C034
    {
            ctx->lr = 0x80AE21C4u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80AE21C4:
    ctx->pc = 0x80AE21C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE21C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AE21C4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AE21C8:
    ctx->pc = 0x80AE21C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE21C8u)) return;
    // 80AE21C8: bl      0x8045F220
    {
            ctx->lr = 0x80AE21CCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AE21CC:
    ctx->pc = 0x80AE21CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE21CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AE21CC: lis     r4, -27619
    ctx->gpr[4] = ((u32)(s32)(-27619) << 16);

label_80AE21D0:
    ctx->pc = 0x80AE21D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE21D0u)) return;
    // 80AE21D0: addi    r4, r4, 13804
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13804);

label_80AE21D4:
    ctx->pc = 0x80AE21D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE21D4u)) return;
    // 80AE21D4: bl      0x8045C060
    {
            ctx->lr = 0x80AE21D8u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80AE21D8:
    ctx->pc = 0x80AE21D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE21D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80AE21D8: lis     r3, -27618
    ctx->gpr[3] = ((u32)(s32)(-27618) << 16);

label_80AE21DC:
    ctx->pc = 0x80AE21DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE21DCu)) return;
    // 80AE21DC: addi    r3, r3, -3776
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3776);

label_80AE21E0:
    ctx->pc = 0x80AE21E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE21E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AE21E0: lwz     r3, 0(r3)
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
label_80AE21E4:
    ctx->pc = 0x80AE21E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE21E4u)) return;
    // 80AE21E4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AE21E8:
    ctx->pc = 0x80AE21E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE21E8u)) return;
    // 80AE21E8: li      r5, 21965
    ctx->gpr[5] = (u32)(s32)(21965);

label_80AE21EC:
    ctx->pc = 0x80AE21ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE21ECu)) return;
    // 80AE21EC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80AE21F0:
    ctx->pc = 0x80AE21F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE21F0u)) return;
    // 80AE21F0: bl      0x8045EEA8
    {
            ctx->lr = 0x80AE21F4u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80AE21F4:
    ctx->pc = 0x80AE21F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE21F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AE21F4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AE21F8:
    ctx->pc = 0x80AE21F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE21F8u)) return;
    // 80AE21F8: bl      0x8045F7C8
    {
            ctx->lr = 0x80AE21FCu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AE21FC:
    ctx->pc = 0x80AE21FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE21FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AE21FC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AE2200:
    ctx->pc = 0x80AE2200u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2200u)) return;
    // 80AE2200: bl      0x8045F220
    {
            ctx->lr = 0x80AE2204u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AE2204:
    ctx->pc = 0x80AE2204u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2204u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80AE2204: lis     r4, -27619
    ctx->gpr[4] = ((u32)(s32)(-27619) << 16);

label_80AE2208:
    ctx->pc = 0x80AE2208u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2208u)) return;
    // 80AE2208: addi    r4, r4, 13208
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13208);

label_80AE220C:
    ctx->pc = 0x80AE220Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE220Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AE220C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AE220Cu)) return;
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
label_80AE2210:
    ctx->pc = 0x80AE2210u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2210u)) return;
    // 80AE2210: lis     r4, -27619
    ctx->gpr[4] = ((u32)(s32)(-27619) << 16);

label_80AE2214:
    ctx->pc = 0x80AE2214u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2214u)) return;
    // 80AE2214: addi    r4, r4, 13212
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13212);

label_80AE2218:
    ctx->pc = 0x80AE2218u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2218u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AE2218: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AE2218u)) return;
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
label_80AE221C:
    ctx->pc = 0x80AE221Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE221Cu)) return;
    // 80AE221C: lis     r4, -27619
    ctx->gpr[4] = ((u32)(s32)(-27619) << 16);

label_80AE2220:
    ctx->pc = 0x80AE2220u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2220u)) return;
    // 80AE2220: addi    r4, r4, 13216
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13216);

label_80AE2224:
    ctx->pc = 0x80AE2224u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2224u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AE2224: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AE2224u)) return;
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
label_80AE2228:
    ctx->pc = 0x80AE2228u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2228u)) return;
    // 80AE2228: bl      0x8045EF2C
    {
            ctx->lr = 0x80AE222Cu;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80AE222C:
    ctx->pc = 0x80AE222Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE222Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AE222C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AE2230:
    ctx->pc = 0x80AE2230u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2230u)) return;
    // 80AE2230: bl      0x8045F220
    {
            ctx->lr = 0x80AE2234u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AE2234:
    ctx->pc = 0x80AE2234u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2234u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80AE2234: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AE2238:
    ctx->pc = 0x80AE2238u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2238u)) return;
    // 80AE2238: li      r5, 23208
    ctx->gpr[5] = (u32)(s32)(23208);

label_80AE223C:
    ctx->pc = 0x80AE223Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE223Cu)) return;
    // 80AE223C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80AE2240:
    ctx->pc = 0x80AE2240u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2240u)) return;
    // 80AE2240: bl      0x8045EEA8
    {
            ctx->lr = 0x80AE2244u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80AE2244:
    ctx->pc = 0x80AE2244u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2244u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80AE2244: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AE2248:
    ctx->pc = 0x80AE2248u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2248u)) return;
    // 80AE2248: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AE224C:
    ctx->pc = 0x80AE224Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE224Cu)) return;
    // 80AE224C: lis     r5, -27619
    ctx->gpr[5] = ((u32)(s32)(-27619) << 16);

label_80AE2250:
    ctx->pc = 0x80AE2250u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2250u)) return;
    // 80AE2250: addi    r5, r5, 13220
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13220);

label_80AE2254:
    ctx->pc = 0x80AE2254u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2254u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AE2254: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AE2254u)) return;
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
label_80AE2258:
    ctx->pc = 0x80AE2258u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2258u)) return;
    // 80AE2258: lis     r5, -27619
    ctx->gpr[5] = ((u32)(s32)(-27619) << 16);

label_80AE225C:
    ctx->pc = 0x80AE225Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE225Cu)) return;
    // 80AE225C: addi    r5, r5, 13224
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13224);

label_80AE2260:
    ctx->pc = 0x80AE2260u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2260u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AE2260: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AE2260u)) return;
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
label_80AE2264:
    ctx->pc = 0x80AE2264u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2264u)) return;
    // 80AE2264: lis     r5, -27619
    ctx->gpr[5] = ((u32)(s32)(-27619) << 16);

label_80AE2268:
    ctx->pc = 0x80AE2268u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2268u)) return;
    // 80AE2268: addi    r5, r5, 13228
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13228);

label_80AE226C:
    ctx->pc = 0x80AE226Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE226Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AE226C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AE226Cu)) return;
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
label_80AE2270:
    ctx->pc = 0x80AE2270u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2270u)) return;
    // 80AE2270: bl      0x8045C750
    {
            ctx->lr = 0x80AE2274u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80AE2274:
    ctx->pc = 0x80AE2274u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2274u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80AE2274: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AE2278:
    ctx->pc = 0x80AE2278u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2278u)) return;
    // 80AE2278: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AE227C:
    ctx->pc = 0x80AE227Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE227Cu)) return;
    // 80AE227C: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80AE2280:
    ctx->pc = 0x80AE2280u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2280u)) return;
    // 80AE2280: addi    r5, r6, -768
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-768);

label_80AE2284:
    ctx->pc = 0x80AE2284u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2284u)) return;
    // 80AE2284: addi    r6, r6, -13517
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-13517);

label_80AE2288:
    ctx->pc = 0x80AE2288u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2288u)) return;
    // 80AE2288: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80AE228C:
    ctx->pc = 0x80AE228Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE228Cu)) return;
    // 80AE228C: bl      0x8045C7B4
    {
            ctx->lr = 0x80AE2290u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80AE2290:
    ctx->pc = 0x80AE2290u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2290u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80AE2290: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AE2294:
    ctx->pc = 0x80AE2294u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2294u)) return;
    // 80AE2294: li      r4, 150
    ctx->gpr[4] = (u32)(s32)(150);

label_80AE2298:
    ctx->pc = 0x80AE2298u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2298u)) return;
    // 80AE2298: lis     r5, -27619
    ctx->gpr[5] = ((u32)(s32)(-27619) << 16);

label_80AE229C:
    ctx->pc = 0x80AE229Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE229Cu)) return;
    // 80AE229C: addi    r5, r5, 13232
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13232);

label_80AE22A0:
    ctx->pc = 0x80AE22A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE22A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AE22A0: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AE22A0u)) return;
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
label_80AE22A4:
    ctx->pc = 0x80AE22A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE22A4u)) return;
    // 80AE22A4: lis     r5, -27619
    ctx->gpr[5] = ((u32)(s32)(-27619) << 16);

label_80AE22A8:
    ctx->pc = 0x80AE22A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE22A8u)) return;
    // 80AE22A8: addi    r5, r5, 13236
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13236);

label_80AE22AC:
    ctx->pc = 0x80AE22ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE22ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AE22AC: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AE22ACu)) return;
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
label_80AE22B0:
    ctx->pc = 0x80AE22B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE22B0u)) return;
    // 80AE22B0: lis     r5, -27619
    ctx->gpr[5] = ((u32)(s32)(-27619) << 16);

label_80AE22B4:
    ctx->pc = 0x80AE22B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE22B4u)) return;
    // 80AE22B4: addi    r5, r5, 13240
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13240);

label_80AE22B8:
    ctx->pc = 0x80AE22B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE22B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AE22B8: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AE22B8u)) return;
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
label_80AE22BC:
    ctx->pc = 0x80AE22BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE22BCu)) return;
    // 80AE22BC: bl      0x8045C750
    {
            ctx->lr = 0x80AE22C0u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80AE22C0:
    ctx->pc = 0x80AE22C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE22C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80AE22C0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AE22C4:
    ctx->pc = 0x80AE22C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE22C4u)) return;
    // 80AE22C4: li      r4, 150
    ctx->gpr[4] = (u32)(s32)(150);

label_80AE22C8:
    ctx->pc = 0x80AE22C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE22C8u)) return;
    // 80AE22C8: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80AE22CC:
    ctx->pc = 0x80AE22CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE22CCu)) return;
    // 80AE22CC: addi    r5, r6, -768
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-768);

label_80AE22D0:
    ctx->pc = 0x80AE22D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE22D0u)) return;
    // 80AE22D0: addi    r6, r6, -13517
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-13517);

label_80AE22D4:
    ctx->pc = 0x80AE22D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE22D4u)) return;
    // 80AE22D4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80AE22D8:
    ctx->pc = 0x80AE22D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE22D8u)) return;
    // 80AE22D8: bl      0x8045C7B4
    {
            ctx->lr = 0x80AE22DCu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80AE22DC:
    ctx->pc = 0x80AE22DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE22DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AE22DC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AE22E0:
    ctx->pc = 0x80AE22E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE22E0u)) return;
    // 80AE22E0: bl      0x8045F220
    {
            ctx->lr = 0x80AE22E4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AE22E4:
    ctx->pc = 0x80AE22E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE22E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80AE22E4: lis     r4, -27619
    ctx->gpr[4] = ((u32)(s32)(-27619) << 16);

label_80AE22E8:
    ctx->pc = 0x80AE22E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE22E8u)) return;
    // 80AE22E8: addi    r4, r4, 13244
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13244);

label_80AE22EC:
    ctx->pc = 0x80AE22ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE22ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80AE22EC: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AE22ECu)) return;
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
label_80AE22F0:
    ctx->pc = 0x80AE22F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE22F0u)) return;
    // 80AE22F0: lis     r4, -27619
    ctx->gpr[4] = ((u32)(s32)(-27619) << 16);

label_80AE22F4:
    ctx->pc = 0x80AE22F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE22F4u)) return;
    // 80AE22F4: addi    r4, r4, 13248
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13248);

label_80AE22F8:
    ctx->pc = 0x80AE22F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE22F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80AE22F8: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AE22F8u)) return;
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
label_80AE22FC:
    ctx->pc = 0x80AE22FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE22FCu)) return;
    // 80AE22FC: lis     r4, -27619
    ctx->gpr[4] = ((u32)(s32)(-27619) << 16);

label_80AE2300:
    ctx->pc = 0x80AE2300u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2300u)) return;
    // 80AE2300: addi    r4, r4, 13252
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13252);

label_80AE2304:
    ctx->pc = 0x80AE2304u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2304u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AE2304: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AE2304u)) return;
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
label_80AE2308:
    ctx->pc = 0x80AE2308u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2308u)) return;
    // 80AE2308: lis     r4, -27619
    ctx->gpr[4] = ((u32)(s32)(-27619) << 16);

label_80AE230C:
    ctx->pc = 0x80AE230Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE230Cu)) return;
    // 80AE230C: addi    r4, r4, 13256
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13256);

label_80AE2310:
    ctx->pc = 0x80AE2310u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2310u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AE2310: lfs     f4, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AE2310u)) return;
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
label_80AE2314:
    ctx->pc = 0x80AE2314u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2314u)) return;
    // 80AE2314: lis     r4, -27619
    ctx->gpr[4] = ((u32)(s32)(-27619) << 16);

label_80AE2318:
    ctx->pc = 0x80AE2318u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2318u)) return;
    // 80AE2318: addi    r4, r4, 13192
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13192);

label_80AE231C:
    ctx->pc = 0x80AE231Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE231Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AE231C: lfs     f5, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AE231Cu)) return;
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
label_80AE2320:
    ctx->pc = 0x80AE2320u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2320u)) return;
    // 80AE2320: bl      0x8045E570
    {
            ctx->lr = 0x80AE2324u;
            ctx->pc = 0x8045E570u;
            return;
    }

label_80AE2324:
    ctx->pc = 0x80AE2324u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2324u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AE2324: li      r3, 50
    ctx->gpr[3] = (u32)(s32)(50);

label_80AE2328:
    ctx->pc = 0x80AE2328u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2328u)) return;
    // 80AE2328: bl      0x8045F7C8
    {
            ctx->lr = 0x80AE232Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AE232C:
    ctx->pc = 0x80AE232Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE232Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AE232C: bl      0x8045F32C
    {
            ctx->lr = 0x80AE2330u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80AE2330:
    ctx->pc = 0x80AE2330u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2330u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AE2330: li      r3, 120
    ctx->gpr[3] = (u32)(s32)(120);

label_80AE2334:
    ctx->pc = 0x80AE2334u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2334u)) return;
    // 80AE2334: bl      0x8045F7C8
    {
            ctx->lr = 0x80AE2338u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AE2338:
    ctx->pc = 0x80AE2338u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2338u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AE2338: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AE233C:
    ctx->pc = 0x80AE233Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE233Cu)) return;
    // 80AE233C: bl      0x8045EC10
    {
            ctx->lr = 0x80AE2340u;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80AE2340:
    ctx->pc = 0x80AE2340u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2340u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AE2340: b       0x80AE23DC
    {
            goto label_80AE23DC;
    }

label_80AE2344:
    ctx->pc = 0x80AE2344u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2344u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AE2344: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AE2348:
    ctx->pc = 0x80AE2348u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2348u)) return;
    // 80AE2348: bl      0x8045EC10
    {
            ctx->lr = 0x80AE234Cu;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80AE234C:
    ctx->pc = 0x80AE234Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE234Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AE234C: bl      0x80AE2A34
    {
            ctx->lr = 0x80AE2350u;
            goto label_80AE2A34;
    }

label_80AE2350:
    ctx->pc = 0x80AE2350u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2350u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AE2350: lis     r3, -27618
    ctx->gpr[3] = ((u32)(s32)(-27618) << 16);

label_80AE2354:
    ctx->pc = 0x80AE2354u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2354u)) return;
    // 80AE2354: addi    r3, r3, -3772
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3772);

label_80AE2358:
    ctx->pc = 0x80AE2358u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2358u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AE2358: lwz     r3, 0(r3)
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
label_80AE235C:
    ctx->pc = 0x80AE235Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE235Cu)) return;
    // 80AE235C: cmplwi  r3, 0x0000
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

label_80AE2360:
    ctx->pc = 0x80AE2360u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2360u)) return;
    // 80AE2360: bc    12, 2, 0x80AE2378
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80AE2378;
        }
    }

label_80AE2364:
    ctx->pc = 0x80AE2364u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2364u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AE2364: bl      0x8050F9E0
    {
            ctx->lr = 0x80AE2368u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80AE2368:
    ctx->pc = 0x80AE2368u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2368u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80AE2368: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80AE236C:
    ctx->pc = 0x80AE236Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE236Cu)) return;
    // 80AE236C: lis     r3, -27618
    ctx->gpr[3] = ((u32)(s32)(-27618) << 16);

label_80AE2370:
    ctx->pc = 0x80AE2370u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2370u)) return;
    // 80AE2370: addi    r3, r3, -3772
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3772);

label_80AE2374:
    ctx->pc = 0x80AE2374u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2374u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80AE2374: stw     r0, 0(r3)
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
label_80AE2378:
    ctx->pc = 0x80AE2378u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2378u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AE2378: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AE237C:
    ctx->pc = 0x80AE237Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE237Cu)) return;
    // 80AE237C: bl      0x8045F220
    {
            ctx->lr = 0x80AE2380u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AE2380:
    ctx->pc = 0x80AE2380u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2380u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80AE2380: lis     r4, -27619
    ctx->gpr[4] = ((u32)(s32)(-27619) << 16);

label_80AE2384:
    ctx->pc = 0x80AE2384u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2384u)) return;
    // 80AE2384: addi    r4, r4, 13244
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13244);

label_80AE2388:
    ctx->pc = 0x80AE2388u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2388u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AE2388: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AE2388u)) return;
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
label_80AE238C:
    ctx->pc = 0x80AE238Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE238Cu)) return;
    // 80AE238C: lis     r4, -27619
    ctx->gpr[4] = ((u32)(s32)(-27619) << 16);

label_80AE2390:
    ctx->pc = 0x80AE2390u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2390u)) return;
    // 80AE2390: addi    r4, r4, 13248
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13248);

label_80AE2394:
    ctx->pc = 0x80AE2394u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2394u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AE2394: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AE2394u)) return;
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
label_80AE2398:
    ctx->pc = 0x80AE2398u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2398u)) return;
    // 80AE2398: lis     r4, -27619
    ctx->gpr[4] = ((u32)(s32)(-27619) << 16);

label_80AE239C:
    ctx->pc = 0x80AE239Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE239Cu)) return;
    // 80AE239C: addi    r4, r4, 13252
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13252);

label_80AE23A0:
    ctx->pc = 0x80AE23A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE23A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AE23A0: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AE23A0u)) return;
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
label_80AE23A4:
    ctx->pc = 0x80AE23A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE23A4u)) return;
    // 80AE23A4: bl      0x8045EF2C
    {
            ctx->lr = 0x80AE23A8u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80AE23A8:
    ctx->pc = 0x80AE23A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE23A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AE23A8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AE23AC:
    ctx->pc = 0x80AE23ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE23ACu)) return;
    // 80AE23AC: bl      0x8045F220
    {
            ctx->lr = 0x80AE23B0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80AE23B0:
    ctx->pc = 0x80AE23B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE23B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80AE23B0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80AE23B4:
    ctx->pc = 0x80AE23B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE23B4u)) return;
    // 80AE23B4: li      r5, 26077
    ctx->gpr[5] = (u32)(s32)(26077);

label_80AE23B8:
    ctx->pc = 0x80AE23B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE23B8u)) return;
    // 80AE23B8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80AE23BC:
    ctx->pc = 0x80AE23BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE23BCu)) return;
    // 80AE23BC: bl      0x8045EEA8
    {
            ctx->lr = 0x80AE23C0u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80AE23C0:
    ctx->pc = 0x80AE23C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE23C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AE23C0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AE23C4:
    ctx->pc = 0x80AE23C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE23C4u)) return;
    // 80AE23C4: bl      0x8045F7C8
    {
            ctx->lr = 0x80AE23C8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80AE23C8:
    ctx->pc = 0x80AE23C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE23C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AE23C8: lis     r3, -27618
    ctx->gpr[3] = ((u32)(s32)(-27618) << 16);

label_80AE23CC:
    ctx->pc = 0x80AE23CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE23CCu)) return;
    // 80AE23CC: addi    r3, r3, -3776
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3776);

label_80AE23D0:
    ctx->pc = 0x80AE23D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE23D0u)) return;
    // 80AE23D0: bl      0x8045F070
    {
            ctx->lr = 0x80AE23D4u;
            ctx->pc = 0x8045F070u;
            return;
    }

label_80AE23D4:
    ctx->pc = 0x80AE23D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE23D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AE23D4: bl      0x8045DE34
    {
            ctx->lr = 0x80AE23D8u;
            ctx->pc = 0x8045DE34u;
            return;
    }

label_80AE23D8:
    ctx->pc = 0x80AE23D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE23D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AE23D8: bl      0x80460A80
    {
            ctx->lr = 0x80AE23DCu;
            ctx->pc = 0x80460A80u;
            return;
    }

label_80AE23DC:
    ctx->pc = 0x80AE23DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE23DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AE23DC: lwz     r0, 20(r1)
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
label_80AE23E0:
    ctx->pc = 0x80AE23E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80AE23E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AE23E0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AE23E4:
    ctx->pc = 0x80AE23E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE23E4u)) return;
    // 80AE23E4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80AE23E8:
    ctx->pc = 0x80AE23E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE23E8u)) return;
    // 80AE23E8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AE1780;
        }
    }

label_80AE23EC:
    ctx->pc = 0x80AE23ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE23ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AE23EC: stwu     r1, -64(r1)
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
label_80AE23F0:
    ctx->pc = 0x80AE23F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE23F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AE23F0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AE23F4:
    ctx->pc = 0x80AE23F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE23F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AE23F4: stw     r0, 68(r1)
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
label_80AE23F8:
    ctx->pc = 0x80AE23F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE23F8u)) return;
    // 80AE23F8: addi    r11, r1, 64
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(64);

label_80AE23FC:
    ctx->pc = 0x80AE23FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE23FCu)) return;
    // 80AE23FC: bl      0x80006DD4
    {
            ctx->lr = 0x80AE2400u;
            ctx->pc = 0x80006DD4u;
            return;
    }

label_80AE2400:
    ctx->pc = 0x80AE2400u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 29u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2400u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 29u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80AE2400: lwz     r27, 32(r3)
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
label_80AE2404:
    ctx->pc = 0x80AE2404u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2404u)) return;
    // 80AE2404: lis     r3, -27619
    ctx->gpr[3] = ((u32)(s32)(-27619) << 16);

label_80AE2408:
    ctx->pc = 0x80AE2408u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2408u)) return;
    // 80AE2408: addi    r3, r3, 13264
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13264);

label_80AE240C:
    ctx->pc = 0x80AE240Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE240Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80AE240C: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AE240Cu)) return;
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
label_80AE2410:
    ctx->pc = 0x80AE2410u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2410u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80AE2410: lfs     f0, 44(r27)
    if (!ppc_fp_available_inline(ctx, 0x80AE2410u)) return;
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
label_80AE2414:
    ctx->pc = 0x80AE2414u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2414u)) return;
    // 80AE2414: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80AE2414u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80AE2418:
    ctx->pc = 0x80AE2418u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2418u)) return;
    // 80AE2418: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80AE2418u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80AE241C:
    ctx->pc = 0x80AE241Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE241Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80AE241C: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AE241Cu)) return;
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
label_80AE2420:
    ctx->pc = 0x80AE2420u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2420u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80AE2420: lwz     r31, 12(r1)
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
label_80AE2424:
    ctx->pc = 0x80AE2424u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2424u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80AE2424: lfs     f0, 32(r27)
    if (!ppc_fp_available_inline(ctx, 0x80AE2424u)) return;
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
label_80AE2428:
    ctx->pc = 0x80AE2428u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2428u)) return;
    // 80AE2428: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80AE2428u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80AE242C:
    ctx->pc = 0x80AE242Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE242Cu)) return;
    // 80AE242C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80AE242Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80AE2430:
    ctx->pc = 0x80AE2430u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2430u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80AE2430: stfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AE2430u)) return;
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
label_80AE2434:
    ctx->pc = 0x80AE2434u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2434u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80AE2434: lwz     r30, 20(r1)
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
label_80AE2438:
    ctx->pc = 0x80AE2438u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2438u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80AE2438: lfs     f0, 36(r27)
    if (!ppc_fp_available_inline(ctx, 0x80AE2438u)) return;
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
label_80AE243C:
    ctx->pc = 0x80AE243Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE243Cu)) return;
    // 80AE243C: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80AE243Cu)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80AE2440:
    ctx->pc = 0x80AE2440u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2440u)) return;
    // 80AE2440: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80AE2440u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80AE2444:
    ctx->pc = 0x80AE2444u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2444u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80AE2444: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AE2444u)) return;
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
label_80AE2448:
    ctx->pc = 0x80AE2448u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2448u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80AE2448: lwz     r29, 28(r1)
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
label_80AE244C:
    ctx->pc = 0x80AE244Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE244Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80AE244C: lfs     f0, 40(r27)
    if (!ppc_fp_available_inline(ctx, 0x80AE244Cu)) return;
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
label_80AE2450:
    ctx->pc = 0x80AE2450u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2450u)) return;
    // 80AE2450: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80AE2450u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80AE2454:
    ctx->pc = 0x80AE2454u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2454u)) return;
    // 80AE2454: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80AE2454u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80AE2458:
    ctx->pc = 0x80AE2458u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2458u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AE2458: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AE2458u)) return;
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
label_80AE245C:
    ctx->pc = 0x80AE245Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE245Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AE245C: lwz     r28, 36(r1)
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
label_80AE2460:
    ctx->pc = 0x80AE2460u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2460u)) return;
    // 80AE2460: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80AE2464:
    ctx->pc = 0x80AE2464u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2464u)) return;
    // 80AE2464: addi    r3, r3, 4120
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4120);

label_80AE2468:
    ctx->pc = 0x80AE2468u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2468u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AE2468: lwz     r0, 0(r3)
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
label_80AE246C:
    ctx->pc = 0x80AE246Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE246Cu)) return;
    // 80AE246C: cmpwi   r0, 0
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

label_80AE2470:
    ctx->pc = 0x80AE2470u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2470u)) return;
    // 80AE2470: bc    4, 2, 0x80AE2528
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AE2528;
        }
    }

label_80AE2474:
    ctx->pc = 0x80AE2474u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2474u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AE2474: rlwinm r0, r31, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_80AE2478:
    ctx->pc = 0x80AE2478u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2478u)) return;
    // 80AE2478: cmplwi  r0, 0x0000
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

label_80AE247C:
    ctx->pc = 0x80AE247Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE247Cu)) return;
    // 80AE247C: bc    12, 2, 0x80AE2528
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80AE2528;
        }
    }

label_80AE2480:
    ctx->pc = 0x80AE2480u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2480u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AE2480: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AE2484:
    ctx->pc = 0x80AE2484u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2484u)) return;
    // 80AE2484: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_80AE2488:
    ctx->pc = 0x80AE2488u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2488u)) return;
    // 80AE2488: bl      0x8060F4F8
    {
            ctx->lr = 0x80AE248Cu;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80AE248C:
    ctx->pc = 0x80AE248Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE248Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AE248C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80AE2490:
    ctx->pc = 0x80AE2490u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2490u)) return;
    // 80AE2490: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80AE2494:
    ctx->pc = 0x80AE2494u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2494u)) return;
    // 80AE2494: bl      0x8060F4F8
    {
            ctx->lr = 0x80AE2498u;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80AE2498:
    ctx->pc = 0x80AE2498u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2498u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AE2498: lfs     f5, 52(r27)
    if (!ppc_fp_available_inline(ctx, 0x80AE2498u)) return;
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
label_80AE249C:
    ctx->pc = 0x80AE249Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE249Cu)) return;
    // 80AE249C: lis     r3, -27619
    ctx->gpr[3] = ((u32)(s32)(-27619) << 16);

label_80AE24A0:
    ctx->pc = 0x80AE24A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE24A0u)) return;
    // 80AE24A0: addi    r3, r3, 13272
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13272);

label_80AE24A4:
    ctx->pc = 0x80AE24A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE24A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AE24A4: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AE24A4u)) return;
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
label_80AE24A8:
    ctx->pc = 0x80AE24A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE24A8u)) return;
    // 80AE24A8: fcmpo   cr0, f5, f0
    if (!ppc_fp_available_inline(ctx, 0x80AE24A8u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[5], ctx->fpr[0], true);

label_80AE24AC:
    ctx->pc = 0x80AE24ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE24ACu)) return;
    // 80AE24AC: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80AE24B0:
    ctx->pc = 0x80AE24B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE24B0u)) return;
    // 80AE24B0: bc    4, 2, 0x80AE24C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AE24C4;
        }
    }

label_80AE24B4:
    ctx->pc = 0x80AE24B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE24B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80AE24B4: lis     r3, -27619
    ctx->gpr[3] = ((u32)(s32)(-27619) << 16);

label_80AE24B8:
    ctx->pc = 0x80AE24B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE24B8u)) return;
    // 80AE24B8: addi    r3, r3, 13268
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13268);

label_80AE24BC:
    ctx->pc = 0x80AE24BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE24BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AE24BC: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AE24BCu)) return;
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
label_80AE24C0:
    ctx->pc = 0x80AE24C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE24C0u)) return;
    // 80AE24C0: fadds   f5, f5, f0
    if (!ppc_fp_available_inline(ctx, 0x80AE24C0u)) return;
    ppc_fadds(ctx, 5, 5, 0);

label_80AE24C4:
    ctx->pc = 0x80AE24C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE24C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AE24C4: rlwinm r0, r31, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_80AE24C8:
    ctx->pc = 0x80AE24C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE24C8u)) return;
    // 80AE24C8: cmplwi  r0, 0x00FF
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

label_80AE24CC:
    ctx->pc = 0x80AE24CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE24CCu)) return;
    // 80AE24CC: bc    4, 1, 0x80AE24D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AE24D4;
        }
    }

label_80AE24D0:
    ctx->pc = 0x80AE24D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE24D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AE24D0: li      r31, 255
    ctx->gpr[31] = (u32)(s32)(255);

label_80AE24D4:
    ctx->pc = 0x80AE24D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 21u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE24D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 21u : 1u;
    // 80AE24D4: lis     r3, -27619
    ctx->gpr[3] = ((u32)(s32)(-27619) << 16);

label_80AE24D8:
    ctx->pc = 0x80AE24D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE24D8u)) return;
    // 80AE24D8: addi    r3, r3, 13276
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13276);

label_80AE24DC:
    ctx->pc = 0x80AE24DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE24DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80AE24DC: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AE24DCu)) return;
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
label_80AE24E0:
    ctx->pc = 0x80AE24E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE24E0u)) return;
    // 80AE24E0: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80AE24E0u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_80AE24E4:
    ctx->pc = 0x80AE24E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE24E4u)) return;
    // 80AE24E4: lis     r3, -27619
    ctx->gpr[3] = ((u32)(s32)(-27619) << 16);

label_80AE24E8:
    ctx->pc = 0x80AE24E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE24E8u)) return;
    // 80AE24E8: addi    r3, r3, 13280
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13280);

label_80AE24EC:
    ctx->pc = 0x80AE24ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE24ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80AE24EC: lfs     f3, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AE24ECu)) return;
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
label_80AE24F0:
    ctx->pc = 0x80AE24F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE24F0u)) return;
    // 80AE24F0: lis     r3, -27619
    ctx->gpr[3] = ((u32)(s32)(-27619) << 16);

label_80AE24F4:
    ctx->pc = 0x80AE24F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE24F4u)) return;
    // 80AE24F4: addi    r3, r3, 13284
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13284);

label_80AE24F8:
    ctx->pc = 0x80AE24F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE24F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80AE24F8: lfs     f4, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AE24F8u)) return;
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
label_80AE24FC:
    ctx->pc = 0x80AE24FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE24FCu)) return;
    // 80AE24FC: rlwinm r5, r28, 0, 24, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[28], 0u) & 0x000000FFu;
    }

label_80AE2500:
    ctx->pc = 0x80AE2500u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2500u)) return;
    // 80AE2500: rlwinm r0, r29, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[29], 0u) & 0x000000FFu;
    }

label_80AE2504:
    ctx->pc = 0x80AE2504u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2504u)) return;
    // 80AE2504: rlwinm r4, r0, 8, 0, 23
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 8u) & 0xFFFFFF00u;
    }

label_80AE2508:
    ctx->pc = 0x80AE2508u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2508u)) return;
    // 80AE2508: rlwinm r0, r31, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_80AE250C:
    ctx->pc = 0x80AE250Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE250Cu)) return;
    // 80AE250C: rlwinm r3, r0, 24, 0, 7
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 24u) & 0xFF000000u;
    }

label_80AE2510:
    ctx->pc = 0x80AE2510u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2510u)) return;
    // 80AE2510: rlwinm r0, r30, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0x000000FFu;
    }

label_80AE2514:
    ctx->pc = 0x80AE2514u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2514u)) return;
    // 80AE2514: rlwinm r0, r0, 16, 0, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 16u) & 0xFFFF0000u;
    }

label_80AE2518:
    ctx->pc = 0x80AE2518u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2518u)) return;
    // 80AE2518: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80AE251C:
    ctx->pc = 0x80AE251Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE251Cu)) return;
    // 80AE251C: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_80AE2520:
    ctx->pc = 0x80AE2520u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2520u)) return;
    // 80AE2520: or   r3, r5, r0
    {
        ctx->gpr[3] = ctx->gpr[5] | ctx->gpr[0];
    }

label_80AE2524:
    ctx->pc = 0x80AE2524u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2524u)) return;
    // 80AE2524: bl      0x80AE26E4
    {
            ctx->lr = 0x80AE2528u;
            goto label_80AE26E4;
    }

label_80AE2528:
    ctx->pc = 0x80AE2528u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2528u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AE2528: addi    r11, r1, 64
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(64);

label_80AE252C:
    ctx->pc = 0x80AE252Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE252Cu)) return;
    // 80AE252C: bl      0x80006E20
    {
            ctx->lr = 0x80AE2530u;
            ctx->pc = 0x80006E20u;
            return;
    }

label_80AE2530:
    ctx->pc = 0x80AE2530u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2530u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AE2530: lwz     r0, 68(r1)
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
label_80AE2534:
    ctx->pc = 0x80AE2534u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80AE2534u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AE2534: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AE2538:
    ctx->pc = 0x80AE2538u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2538u)) return;
    // 80AE2538: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_80AE253C:
    ctx->pc = 0x80AE253Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE253Cu)) return;
    // 80AE253C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AE1780;
        }
    }

label_80AE2540:
    ctx->pc = 0x80AE2540u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2540u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80AE2540: stwu     r1, -16(r1)
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
label_80AE2544:
    ctx->pc = 0x80AE2544u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2544u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80AE2544: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AE2548:
    ctx->pc = 0x80AE2548u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2548u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80AE2548: stw     r0, 20(r1)
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
label_80AE254C:
    ctx->pc = 0x80AE254Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE254Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80AE254C: lwz     r5, 32(r3)
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
label_80AE2550:
    ctx->pc = 0x80AE2550u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2550u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AE2550: lfs     f1, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AE2550u)) return;
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
label_80AE2554:
    ctx->pc = 0x80AE2554u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2554u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AE2554: lfs     f0, 48(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AE2554u)) return;
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
label_80AE2558:
    ctx->pc = 0x80AE2558u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2558u)) return;
    // 80AE2558: fadds   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80AE2558u)) return;
    ppc_fadds(ctx, 1, 1, 0);

label_80AE255C:
    ctx->pc = 0x80AE255Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE255Cu)) return;
    // 80AE255C: lis     r4, -27619
    ctx->gpr[4] = ((u32)(s32)(-27619) << 16);

label_80AE2560:
    ctx->pc = 0x80AE2560u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2560u)) return;
    // 80AE2560: addi    r4, r4, 13288
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13288);

label_80AE2564:
    ctx->pc = 0x80AE2564u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2564u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AE2564: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AE2564u)) return;
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
label_80AE2568:
    ctx->pc = 0x80AE2568u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2568u)) return;
    // 80AE2568: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80AE2568u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80AE256C:
    ctx->pc = 0x80AE256Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE256Cu)) return;
    // 80AE256C: bc    4, 1, 0x80AE2578
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AE2578;
        }
    }

label_80AE2570:
    ctx->pc = 0x80AE2570u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2570u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AE2570: fmr    f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80AE2570u)) return;
    ctx->fpr[1] = ctx->fpr[0];

label_80AE2574:
    ctx->pc = 0x80AE2574u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2574u)) return;
    // 80AE2574: b       0x80AE2590
    {
            goto label_80AE2590;
    }

label_80AE2578:
    ctx->pc = 0x80AE2578u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2578u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AE2578: lis     r4, -27619
    ctx->gpr[4] = ((u32)(s32)(-27619) << 16);

label_80AE257C:
    ctx->pc = 0x80AE257Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE257Cu)) return;
    // 80AE257C: addi    r4, r4, 13276
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13276);

label_80AE2580:
    ctx->pc = 0x80AE2580u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2580u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AE2580: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AE2580u)) return;
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
label_80AE2584:
    ctx->pc = 0x80AE2584u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2584u)) return;
    // 80AE2584: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80AE2584u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80AE2588:
    ctx->pc = 0x80AE2588u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2588u)) return;
    // 80AE2588: bc    4, 0, 0x80AE2590
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AE2590;
        }
    }

label_80AE258C:
    ctx->pc = 0x80AE258Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE258Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AE258C: fmr    f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80AE258Cu)) return;
    ctx->fpr[1] = ctx->fpr[0];

label_80AE2590:
    ctx->pc = 0x80AE2590u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2590u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AE2590: stfs     f1, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AE2590u)) return;
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
label_80AE2594:
    ctx->pc = 0x80AE2594u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2594u)) return;
    // 80AE2594: bl      0x80AE23EC
    {
            ctx->lr = 0x80AE2598u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80AE23ECu;
                return;
            }
            goto label_80AE23EC;
    }

label_80AE2598:
    ctx->pc = 0x80AE2598u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2598u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AE2598: lwz     r0, 20(r1)
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
label_80AE259C:
    ctx->pc = 0x80AE259Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80AE259Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AE259C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AE25A0:
    ctx->pc = 0x80AE25A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE25A0u)) return;
    // 80AE25A0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80AE25A4:
    ctx->pc = 0x80AE25A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE25A4u)) return;
    // 80AE25A4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AE1780;
        }
    }

label_80AE25A8:
    ctx->pc = 0x80AE25A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE25A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AE25A8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AE1780;
        }
    }

label_80AE25AC:
    ctx->pc = 0x80AE25ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE25ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80AE25AC: stwu     r1, -16(r1)
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
label_80AE25B0:
    ctx->pc = 0x80AE25B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE25B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80AE25B0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AE25B4:
    ctx->pc = 0x80AE25B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE25B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80AE25B4: stw     r0, 20(r1)
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
label_80AE25B8:
    ctx->pc = 0x80AE25B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE25B8u)) return;
    // 80AE25B8: lis     r4, -32594
    ctx->gpr[4] = ((u32)(s32)(-32594) << 16);

label_80AE25BC:
    ctx->pc = 0x80AE25BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE25BCu)) return;
    // 80AE25BC: addi    r0, r4, 9536
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(9536);

label_80AE25C0:
    ctx->pc = 0x80AE25C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE25C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AE25C0: stw     r0, 16(r3)
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
label_80AE25C4:
    ctx->pc = 0x80AE25C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE25C4u)) return;
    // 80AE25C4: lis     r4, -32594
    ctx->gpr[4] = ((u32)(s32)(-32594) << 16);

label_80AE25C8:
    ctx->pc = 0x80AE25C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE25C8u)) return;
    // 80AE25C8: addi    r0, r4, 9196
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(9196);

label_80AE25CC:
    ctx->pc = 0x80AE25CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE25CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AE25CC: stw     r0, 20(r3)
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
label_80AE25D0:
    ctx->pc = 0x80AE25D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE25D0u)) return;
    // 80AE25D0: lis     r4, -32594
    ctx->gpr[4] = ((u32)(s32)(-32594) << 16);

label_80AE25D4:
    ctx->pc = 0x80AE25D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE25D4u)) return;
    // 80AE25D4: addi    r0, r4, 9640
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(9640);

label_80AE25D8:
    ctx->pc = 0x80AE25D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE25D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AE25D8: stw     r0, 24(r3)
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
label_80AE25DC:
    ctx->pc = 0x80AE25DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE25DCu)) return;
    // 80AE25DC: bl      0x80AE2540
    {
            ctx->lr = 0x80AE25E0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80AE2540u;
                return;
            }
            goto label_80AE2540;
    }

label_80AE25E0:
    ctx->pc = 0x80AE25E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE25E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AE25E0: lwz     r0, 20(r1)
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
label_80AE25E4:
    ctx->pc = 0x80AE25E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80AE25E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AE25E4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AE25E8:
    ctx->pc = 0x80AE25E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE25E8u)) return;
    // 80AE25E8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80AE25EC:
    ctx->pc = 0x80AE25ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE25ECu)) return;
    // 80AE25EC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AE1780;
        }
    }

label_80AE25F0:
    ctx->pc = 0x80AE25F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 23u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE25F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 23u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80AE25F0: stwu     r1, -96(r1)
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
label_80AE25F4:
    ctx->pc = 0x80AE25F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE25F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80AE25F4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AE25F8:
    ctx->pc = 0x80AE25F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE25F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80AE25F8: stw     r0, 100(r1)
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
label_80AE25FC:
    ctx->pc = 0x80AE25FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE25FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80AE25FC: stfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AE25FCu)) return;
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
label_80AE2600:
    ctx->pc = 0x80AE2600u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2600u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80AE2600: psq_st   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80AE2600u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80AE2600u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AE2604:
    ctx->pc = 0x80AE2604u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2604u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80AE2604: stfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AE2604u)) return;
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
label_80AE2608:
    ctx->pc = 0x80AE2608u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2608u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80AE2608: psq_st   f30, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80AE2608u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x80AE2608u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AE260C:
    ctx->pc = 0x80AE260Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE260Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80AE260C: stfd     f29, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AE260Cu)) return;
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
label_80AE2610:
    ctx->pc = 0x80AE2610u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2610u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80AE2610: psq_st   f29, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80AE2610u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x80AE2610u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AE2614:
    ctx->pc = 0x80AE2614u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2614u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80AE2614: stfd     f28, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AE2614u)) return;
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
label_80AE2618:
    ctx->pc = 0x80AE2618u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2618u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80AE2618: psq_st   f28, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80AE2618u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x80AE2618u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AE261C:
    ctx->pc = 0x80AE261Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE261Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80AE261C: stfd     f27, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AE261Cu)) return;
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
label_80AE2620:
    ctx->pc = 0x80AE2620u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2620u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80AE2620: psq_st   f27, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80AE2620u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_store_inline(ctx, 27u, ea, false, 0u, false, 0x80AE2620u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AE2624:
    ctx->pc = 0x80AE2624u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2624u)) return;
    // 80AE2624: fmr    f27, f1
    if (!ppc_fp_available_inline(ctx, 0x80AE2624u)) return;
    ctx->fpr[27] = ctx->fpr[1];

label_80AE2628:
    ctx->pc = 0x80AE2628u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2628u)) return;
    // 80AE2628: fmr    f28, f2
    if (!ppc_fp_available_inline(ctx, 0x80AE2628u)) return;
    ctx->fpr[28] = ctx->fpr[2];

label_80AE262C:
    ctx->pc = 0x80AE262Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE262Cu)) return;
    // 80AE262C: fmr    f29, f3
    if (!ppc_fp_available_inline(ctx, 0x80AE262Cu)) return;
    ctx->fpr[29] = ctx->fpr[3];

label_80AE2630:
    ctx->pc = 0x80AE2630u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2630u)) return;
    // 80AE2630: fmr    f30, f4
    if (!ppc_fp_available_inline(ctx, 0x80AE2630u)) return;
    ctx->fpr[30] = ctx->fpr[4];

label_80AE2634:
    ctx->pc = 0x80AE2634u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2634u)) return;
    // 80AE2634: fmr    f31, f5
    if (!ppc_fp_available_inline(ctx, 0x80AE2634u)) return;
    ctx->fpr[31] = ctx->fpr[5];

label_80AE2638:
    ctx->pc = 0x80AE2638u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2638u)) return;
    // 80AE2638: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80AE263C:
    ctx->pc = 0x80AE263Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE263Cu)) return;
    // 80AE263C: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80AE2640:
    ctx->pc = 0x80AE2640u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2640u)) return;
    // 80AE2640: lis     r5, -32594
    ctx->gpr[5] = ((u32)(s32)(-32594) << 16);

label_80AE2644:
    ctx->pc = 0x80AE2644u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2644u)) return;
    // 80AE2644: addi    r5, r5, 9644
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9644);

label_80AE2648:
    ctx->pc = 0x80AE2648u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2648u)) return;
    // 80AE2648: bl      0x8050FD60
    {
            ctx->lr = 0x80AE264Cu;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80AE264C:
    ctx->pc = 0x80AE264Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 25u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE264Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 25u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80AE264C: lwz     r5, 32(r3)
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
label_80AE2650:
    ctx->pc = 0x80AE2650u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2650u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80AE2650: stfs     f27, 48(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AE2650u)) return;
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
label_80AE2654:
    ctx->pc = 0x80AE2654u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2654u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80AE2654: stfs     f28, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AE2654u)) return;
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
label_80AE2658:
    ctx->pc = 0x80AE2658u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2658u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80AE2658: stfs     f29, 32(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AE2658u)) return;
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
label_80AE265C:
    ctx->pc = 0x80AE265Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE265Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80AE265C: stfs     f30, 36(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AE265Cu)) return;
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
label_80AE2660:
    ctx->pc = 0x80AE2660u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2660u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80AE2660: stfs     f31, 40(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AE2660u)) return;
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
label_80AE2664:
    ctx->pc = 0x80AE2664u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2664u)) return;
    // 80AE2664: lis     r4, -27619
    ctx->gpr[4] = ((u32)(s32)(-27619) << 16);

label_80AE2668:
    ctx->pc = 0x80AE2668u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2668u)) return;
    // 80AE2668: addi    r4, r4, 13272
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13272);

label_80AE266C:
    ctx->pc = 0x80AE266Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE266Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80AE266C: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80AE266Cu)) return;
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
label_80AE2670:
    ctx->pc = 0x80AE2670u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2670u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80AE2670: stfs     f0, 52(r5)
    if (!ppc_fp_available_inline(ctx, 0x80AE2670u)) return;
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
label_80AE2674:
    ctx->pc = 0x80AE2674u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2674u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80AE2674: psq_l   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80AE2674u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80AE2674u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AE2678:
    ctx->pc = 0x80AE2678u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2678u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80AE2678: lfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AE2678u)) return;
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
label_80AE267C:
    ctx->pc = 0x80AE267Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE267Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80AE267C: psq_l   f30, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80AE267Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x80AE267Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AE2680:
    ctx->pc = 0x80AE2680u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2680u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80AE2680: lfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AE2680u)) return;
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
label_80AE2684:
    ctx->pc = 0x80AE2684u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2684u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80AE2684: psq_l   f29, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80AE2684u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x80AE2684u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AE2688:
    ctx->pc = 0x80AE2688u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2688u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80AE2688: lfd     f29, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AE2688u)) return;
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
label_80AE268C:
    ctx->pc = 0x80AE268Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE268Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80AE268C: psq_l   f28, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80AE268Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x80AE268Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AE2690:
    ctx->pc = 0x80AE2690u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2690u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AE2690: lfd     f28, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AE2690u)) return;
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
label_80AE2694:
    ctx->pc = 0x80AE2694u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2694u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AE2694: psq_l   f27, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80AE2694u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_load_inline(ctx, 27u, ea, false, 0u, false, 0x80AE2694u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AE2698:
    ctx->pc = 0x80AE2698u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2698u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AE2698: lfd     f27, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80AE2698u)) return;
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
label_80AE269C:
    ctx->pc = 0x80AE269Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE269Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AE269C: lwz     r0, 100(r1)
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
label_80AE26A0:
    ctx->pc = 0x80AE26A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80AE26A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AE26A0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AE26A4:
    ctx->pc = 0x80AE26A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE26A4u)) return;
    // 80AE26A4: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_80AE26A8:
    ctx->pc = 0x80AE26A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE26A8u)) return;
    // 80AE26A8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AE1780;
        }
    }

label_80AE26AC:
    ctx->pc = 0x80AE26ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE26ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AE26AC: lwz     r3, 32(r3)
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
label_80AE26B0:
    ctx->pc = 0x80AE26B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE26B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AE26B0: stfs     f1, 48(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AE26B0u)) return;
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
label_80AE26B4:
    ctx->pc = 0x80AE26B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE26B4u)) return;
    // 80AE26B4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AE1780;
        }
    }

label_80AE26B8:
    ctx->pc = 0x80AE26B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE26B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AE26B8: lwz     r3, 32(r3)
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
label_80AE26BC:
    ctx->pc = 0x80AE26BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE26BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AE26BC: stfs     f1, 44(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AE26BCu)) return;
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
label_80AE26C0:
    ctx->pc = 0x80AE26C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE26C0u)) return;
    // 80AE26C0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AE1780;
        }
    }

label_80AE26C4:
    ctx->pc = 0x80AE26C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE26C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AE26C4: lwz     r3, 32(r3)
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
label_80AE26C8:
    ctx->pc = 0x80AE26C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE26C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AE26C8: stfs     f1, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AE26C8u)) return;
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
label_80AE26CC:
    ctx->pc = 0x80AE26CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE26CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AE26CC: stfs     f2, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AE26CCu)) return;
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
label_80AE26D0:
    ctx->pc = 0x80AE26D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE26D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AE26D0: stfs     f3, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AE26D0u)) return;
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
label_80AE26D4:
    ctx->pc = 0x80AE26D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE26D4u)) return;
    // 80AE26D4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AE1780;
        }
    }

label_80AE26D8:
    ctx->pc = 0x80AE26D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE26D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AE26D8: lwz     r3, 32(r3)
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
label_80AE26DC:
    ctx->pc = 0x80AE26DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE26DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AE26DC: stfs     f1, 52(r3)
    if (!ppc_fp_available_inline(ctx, 0x80AE26DCu)) return;
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
label_80AE26E0:
    ctx->pc = 0x80AE26E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE26E0u)) return;
    // 80AE26E0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AE1780;
        }
    }

label_80AE26E4:
    ctx->pc = 0x80AE26E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE26E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AE26E4: stwu     r1, -16(r1)
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
label_80AE26E8:
    ctx->pc = 0x80AE26E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE26E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AE26E8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AE26EC:
    ctx->pc = 0x80AE26ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE26ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AE26EC: stw     r0, 20(r1)
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
label_80AE26F0:
    ctx->pc = 0x80AE26F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE26F0u)) return;
    // 80AE26F0: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80AE26F4:
    ctx->pc = 0x80AE26F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE26F4u)) return;
    // 80AE26F4: bl      0x80607948
    {
            ctx->lr = 0x80AE26F8u;
            ctx->pc = 0x80607948u;
            return;
    }

label_80AE26F8:
    ctx->pc = 0x80AE26F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE26F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AE26F8: lwz     r0, 20(r1)
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
label_80AE26FC:
    ctx->pc = 0x80AE26FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80AE26FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AE26FC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AE2700:
    ctx->pc = 0x80AE2700u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2700u)) return;
    // 80AE2700: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80AE2704:
    ctx->pc = 0x80AE2704u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2704u)) return;
    // 80AE2704: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AE1780;
        }
    }

label_80AE2708:
    ctx->pc = 0x80AE2708u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2708u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AE2708: stwu     r1, -16(r1)
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
label_80AE270C:
    ctx->pc = 0x80AE270Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE270Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AE270C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AE2710:
    ctx->pc = 0x80AE2710u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2710u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AE2710: stw     r0, 20(r1)
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
label_80AE2714:
    ctx->pc = 0x80AE2714u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2714u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AE2714: lwz     r3, 32(r3)
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
label_80AE2718:
    ctx->pc = 0x80AE2718u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2718u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AE2718: lwz     r3, 16(r3)
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
label_80AE271C:
    ctx->pc = 0x80AE271Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE271Cu)) return;
    // 80AE271C: bl      0x80509CF0
    {
            ctx->lr = 0x80AE2720u;
            ctx->pc = 0x80509CF0u;
            return;
    }

label_80AE2720:
    ctx->pc = 0x80AE2720u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2720u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AE2720: lwz     r0, 20(r1)
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
label_80AE2724:
    ctx->pc = 0x80AE2724u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80AE2724u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AE2724: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AE2728:
    ctx->pc = 0x80AE2728u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2728u)) return;
    // 80AE2728: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80AE272C:
    ctx->pc = 0x80AE272Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE272Cu)) return;
    // 80AE272C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AE1780;
        }
    }

label_80AE2730:
    ctx->pc = 0x80AE2730u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2730u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80AE2730: stwu     r1, -32(r1)
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
label_80AE2734:
    ctx->pc = 0x80AE2734u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2734u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80AE2734: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AE2738:
    ctx->pc = 0x80AE2738u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2738u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80AE2738: stw     r0, 36(r1)
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
label_80AE273C:
    ctx->pc = 0x80AE273Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE273Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AE273C: stw     r31, 28(r1)
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
label_80AE2740:
    ctx->pc = 0x80AE2740u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2740u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AE2740: stw     r30, 24(r1)
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
label_80AE2744:
    ctx->pc = 0x80AE2744u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2744u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AE2744: stw     r29, 20(r1)
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
label_80AE2748:
    ctx->pc = 0x80AE2748u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2748u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AE2748: lwz     r31, 32(r3)
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
label_80AE274C:
    ctx->pc = 0x80AE274Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE274Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AE274C: lwz     r30, 16(r31)
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
label_80AE2750:
    ctx->pc = 0x80AE2750u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2750u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AE2750: lwz     r5, 28(r31)
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
label_80AE2754:
    ctx->pc = 0x80AE2754u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2754u)) return;
    // 80AE2754: cmpwi   r5, 0
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

label_80AE2758:
    ctx->pc = 0x80AE2758u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2758u)) return;
    // 80AE2758: bc    4, 1, 0x80AE2790
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AE2790;
        }
    }

label_80AE275C:
    ctx->pc = 0x80AE275Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE275Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80AE275C: lwz     r4, 24(r31)
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
label_80AE2760:
    ctx->pc = 0x80AE2760u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2760u)) return;
    // 80AE2760: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80AE2764:
    ctx->pc = 0x80AE2764u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2764u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80AE2764: lwz     r0, 20(r31)
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
label_80AE2768:
    ctx->pc = 0x80AE2768u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80AE2768u)) return;
    // 80AE2768: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80AE276C:
    ctx->pc = 0x80AE276Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE276Cu)) return;
    // 80AE276C: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80AE2770:
    ctx->pc = 0x80AE2770u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80AE2770u)) return;
    // 80AE2770: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80AE2774:
    ctx->pc = 0x80AE2774u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2774u)) return;
    // 80AE2774: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80AE2778:
    ctx->pc = 0x80AE2778u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2778u)) return;
    // 80AE2778: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80AE277C:
    ctx->pc = 0x80AE277Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE277Cu)) return;
    // 80AE277C: bl      0x80509C74
    {
            ctx->lr = 0x80AE2780u;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80AE2780:
    ctx->pc = 0x80AE2780u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2780u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AE2780: stw     r29, 20(r31)
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
label_80AE2784:
    ctx->pc = 0x80AE2784u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2784u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AE2784: lwz     r3, 28(r31)
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
label_80AE2788:
    ctx->pc = 0x80AE2788u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2788u)) return;
    // 80AE2788: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80AE278C:
    ctx->pc = 0x80AE278Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE278Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80AE278C: stw     r0, 28(r31)
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
label_80AE2790:
    ctx->pc = 0x80AE2790u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2790u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AE2790: lwz     r5, 40(r31)
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
label_80AE2794:
    ctx->pc = 0x80AE2794u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2794u)) return;
    // 80AE2794: cmpwi   r5, 0
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

label_80AE2798:
    ctx->pc = 0x80AE2798u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2798u)) return;
    // 80AE2798: bc    4, 1, 0x80AE27D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AE27D0;
        }
    }

label_80AE279C:
    ctx->pc = 0x80AE279Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE279Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80AE279C: lwz     r4, 36(r31)
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
label_80AE27A0:
    ctx->pc = 0x80AE27A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE27A0u)) return;
    // 80AE27A0: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80AE27A4:
    ctx->pc = 0x80AE27A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE27A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80AE27A4: lwz     r0, 32(r31)
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
label_80AE27A8:
    ctx->pc = 0x80AE27A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80AE27A8u)) return;
    // 80AE27A8: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80AE27AC:
    ctx->pc = 0x80AE27ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE27ACu)) return;
    // 80AE27AC: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80AE27B0:
    ctx->pc = 0x80AE27B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80AE27B0u)) return;
    // 80AE27B0: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80AE27B4:
    ctx->pc = 0x80AE27B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE27B4u)) return;
    // 80AE27B4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80AE27B8:
    ctx->pc = 0x80AE27B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE27B8u)) return;
    // 80AE27B8: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80AE27BC:
    ctx->pc = 0x80AE27BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE27BCu)) return;
    // 80AE27BC: bl      0x80509BF8
    {
            ctx->lr = 0x80AE27C0u;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80AE27C0:
    ctx->pc = 0x80AE27C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE27C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AE27C0: stw     r29, 32(r31)
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
label_80AE27C4:
    ctx->pc = 0x80AE27C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE27C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AE27C4: lwz     r3, 40(r31)
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
label_80AE27C8:
    ctx->pc = 0x80AE27C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE27C8u)) return;
    // 80AE27C8: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80AE27CC:
    ctx->pc = 0x80AE27CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE27CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80AE27CC: stw     r0, 40(r31)
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
label_80AE27D0:
    ctx->pc = 0x80AE27D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE27D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AE27D0: lwz     r5, 52(r31)
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
label_80AE27D4:
    ctx->pc = 0x80AE27D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE27D4u)) return;
    // 80AE27D4: cmpwi   r5, 0
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

label_80AE27D8:
    ctx->pc = 0x80AE27D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE27D8u)) return;
    // 80AE27D8: bc    4, 1, 0x80AE2810
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AE2810;
        }
    }

label_80AE27DC:
    ctx->pc = 0x80AE27DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE27DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80AE27DC: lwz     r4, 48(r31)
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
label_80AE27E0:
    ctx->pc = 0x80AE27E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE27E0u)) return;
    // 80AE27E0: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80AE27E4:
    ctx->pc = 0x80AE27E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE27E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80AE27E4: lwz     r0, 44(r31)
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
label_80AE27E8:
    ctx->pc = 0x80AE27E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80AE27E8u)) return;
    // 80AE27E8: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80AE27EC:
    ctx->pc = 0x80AE27ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE27ECu)) return;
    // 80AE27EC: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80AE27F0:
    ctx->pc = 0x80AE27F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80AE27F0u)) return;
    // 80AE27F0: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80AE27F4:
    ctx->pc = 0x80AE27F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE27F4u)) return;
    // 80AE27F4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80AE27F8:
    ctx->pc = 0x80AE27F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE27F8u)) return;
    // 80AE27F8: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80AE27FC:
    ctx->pc = 0x80AE27FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE27FCu)) return;
    // 80AE27FC: bl      0x80509B94
    {
            ctx->lr = 0x80AE2800u;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80AE2800:
    ctx->pc = 0x80AE2800u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2800u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AE2800: stw     r29, 44(r31)
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
label_80AE2804:
    ctx->pc = 0x80AE2804u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2804u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AE2804: lwz     r3, 52(r31)
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
label_80AE2808:
    ctx->pc = 0x80AE2808u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2808u)) return;
    // 80AE2808: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80AE280C:
    ctx->pc = 0x80AE280Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE280Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80AE280C: stw     r0, 52(r31)
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
label_80AE2810:
    ctx->pc = 0x80AE2810u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2810u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AE2810: lwz     r31, 28(r1)
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
label_80AE2814:
    ctx->pc = 0x80AE2814u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2814u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AE2814: lwz     r30, 24(r1)
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
label_80AE2818:
    ctx->pc = 0x80AE2818u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2818u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AE2818: lwz     r29, 20(r1)
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
label_80AE281C:
    ctx->pc = 0x80AE281Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE281Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AE281C: lwz     r0, 36(r1)
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
label_80AE2820:
    ctx->pc = 0x80AE2820u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80AE2820u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AE2820: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AE2824:
    ctx->pc = 0x80AE2824u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2824u)) return;
    // 80AE2824: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80AE2828:
    ctx->pc = 0x80AE2828u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2828u)) return;
    // 80AE2828: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AE1780;
        }
    }

label_80AE282C:
    ctx->pc = 0x80AE282Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE282Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80AE282C: stwu     r1, -32(r1)
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
label_80AE2830:
    ctx->pc = 0x80AE2830u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2830u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80AE2830: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AE2834:
    ctx->pc = 0x80AE2834u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2834u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80AE2834: stw     r0, 36(r1)
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
label_80AE2838:
    ctx->pc = 0x80AE2838u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2838u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80AE2838: stw     r31, 28(r1)
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
label_80AE283C:
    ctx->pc = 0x80AE283Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE283Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AE283C: stw     r30, 24(r1)
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
label_80AE2840:
    ctx->pc = 0x80AE2840u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2840u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AE2840: stw     r29, 20(r1)
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
label_80AE2844:
    ctx->pc = 0x80AE2844u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2844u)) return;
    // 80AE2844: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80AE2848:
    ctx->pc = 0x80AE2848u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2848u)) return;
    // 80AE2848: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80AE284C:
    ctx->pc = 0x80AE284Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE284Cu)) return;
    // 80AE284C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80AE2850:
    ctx->pc = 0x80AE2850u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2850u)) return;
    // 80AE2850: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80AE2854:
    ctx->pc = 0x80AE2854u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2854u)) return;
    // 80AE2854: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80AE2858:
    ctx->pc = 0x80AE2858u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2858u)) return;
    // 80AE2858: bl      0x8050FD60
    {
            ctx->lr = 0x80AE285Cu;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80AE285C:
    ctx->pc = 0x80AE285Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE285Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AE285C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80AE2860:
    ctx->pc = 0x80AE2860u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2860u)) return;
    // 80AE2860: cmplwi  r31, 0x0000
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

label_80AE2864:
    ctx->pc = 0x80AE2864u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2864u)) return;
    // 80AE2864: bc    12, 2, 0x80AE28C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80AE28C8;
        }
    }

label_80AE2868:
    ctx->pc = 0x80AE2868u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2868u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80AE2868: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80AE286C:
    ctx->pc = 0x80AE286Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE286Cu)) return;
    // 80AE286C: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80AE2870:
    ctx->pc = 0x80AE2870u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2870u)) return;
    // 80AE2870: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80AE2874:
    ctx->pc = 0x80AE2874u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2874u)) return;
    // 80AE2874: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80AE2878:
    ctx->pc = 0x80AE2878u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2878u)) return;
    // 80AE2878: or   r7, r30, r30
    {
        ctx->gpr[7] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80AE287C:
    ctx->pc = 0x80AE287Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE287Cu)) return;
    // 80AE287C: bl      0x8050A0D4
    {
            ctx->lr = 0x80AE2880u;
            ctx->pc = 0x8050A0D4u;
            return;
    }

label_80AE2880:
    ctx->pc = 0x80AE2880u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 18u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2880u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 18u : 1u;
    // 80AE2880: lis     r3, -32594
    ctx->gpr[3] = ((u32)(s32)(-32594) << 16);

label_80AE2884:
    ctx->pc = 0x80AE2884u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2884u)) return;
    // 80AE2884: addi    r0, r3, 10032
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(10032);

label_80AE2888:
    ctx->pc = 0x80AE2888u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2888u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80AE2888: stw     r0, 16(r31)
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
label_80AE288C:
    ctx->pc = 0x80AE288Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE288Cu)) return;
    // 80AE288C: lis     r3, -32594
    ctx->gpr[3] = ((u32)(s32)(-32594) << 16);

label_80AE2890:
    ctx->pc = 0x80AE2890u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2890u)) return;
    // 80AE2890: addi    r0, r3, 9992
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(9992);

label_80AE2894:
    ctx->pc = 0x80AE2894u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2894u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80AE2894: stw     r0, 24(r31)
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
label_80AE2898:
    ctx->pc = 0x80AE2898u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2898u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80AE2898: lwz     r3, 32(r31)
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
label_80AE289C:
    ctx->pc = 0x80AE289Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE289Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80AE289C: stw     r31, 16(r3)
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
label_80AE28A0:
    ctx->pc = 0x80AE28A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE28A0u)) return;
    // 80AE28A0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80AE28A4:
    ctx->pc = 0x80AE28A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE28A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80AE28A4: stw     r0, 20(r3)
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
label_80AE28A8:
    ctx->pc = 0x80AE28A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE28A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AE28A8: stw     r0, 24(r3)
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
label_80AE28AC:
    ctx->pc = 0x80AE28ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE28ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AE28AC: stw     r0, 28(r3)
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
label_80AE28B0:
    ctx->pc = 0x80AE28B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE28B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AE28B0: stw     r0, 32(r3)
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
label_80AE28B4:
    ctx->pc = 0x80AE28B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE28B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AE28B4: stw     r0, 36(r3)
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
label_80AE28B8:
    ctx->pc = 0x80AE28B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE28B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AE28B8: stw     r0, 40(r3)
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
label_80AE28BC:
    ctx->pc = 0x80AE28BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE28BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AE28BC: stw     r0, 44(r3)
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
label_80AE28C0:
    ctx->pc = 0x80AE28C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE28C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AE28C0: stw     r0, 48(r3)
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
label_80AE28C4:
    ctx->pc = 0x80AE28C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE28C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80AE28C4: stw     r0, 52(r3)
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
label_80AE28C8:
    ctx->pc = 0x80AE28C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE28C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80AE28C8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80AE28CC:
    ctx->pc = 0x80AE28CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE28CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AE28CC: lwz     r31, 28(r1)
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
label_80AE28D0:
    ctx->pc = 0x80AE28D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE28D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AE28D0: lwz     r30, 24(r1)
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
label_80AE28D4:
    ctx->pc = 0x80AE28D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE28D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AE28D4: lwz     r29, 20(r1)
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
label_80AE28D8:
    ctx->pc = 0x80AE28D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE28D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AE28D8: lwz     r0, 36(r1)
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
label_80AE28DC:
    ctx->pc = 0x80AE28DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80AE28DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AE28DC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AE28E0:
    ctx->pc = 0x80AE28E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE28E0u)) return;
    // 80AE28E0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80AE28E4:
    ctx->pc = 0x80AE28E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE28E4u)) return;
    // 80AE28E4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AE1780;
        }
    }

label_80AE28E8:
    ctx->pc = 0x80AE28E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE28E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80AE28E8: stwu     r1, -16(r1)
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
label_80AE28EC:
    ctx->pc = 0x80AE28ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE28ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80AE28EC: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AE28F0:
    ctx->pc = 0x80AE28F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE28F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80AE28F0: stw     r0, 20(r1)
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
label_80AE28F4:
    ctx->pc = 0x80AE28F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE28F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AE28F4: stw     r31, 12(r1)
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
label_80AE28F8:
    ctx->pc = 0x80AE28F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE28F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AE28F8: stw     r30, 8(r1)
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
label_80AE28FC:
    ctx->pc = 0x80AE28FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE28FCu)) return;
    // 80AE28FC: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80AE2900:
    ctx->pc = 0x80AE2900u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2900u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AE2900: lwz     r31, 32(r3)
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
label_80AE2904:
    ctx->pc = 0x80AE2904u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2904u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AE2904: stw     r30, 24(r31)
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
label_80AE2908:
    ctx->pc = 0x80AE2908u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2908u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AE2908: stw     r5, 28(r31)
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
label_80AE290C:
    ctx->pc = 0x80AE290Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE290Cu)) return;
    // 80AE290C: cmpwi   r5, 0
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

label_80AE2910:
    ctx->pc = 0x80AE2910u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2910u)) return;
    // 80AE2910: bc    12, 1, 0x80AE2920
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80AE2920;
        }
    }

label_80AE2914:
    ctx->pc = 0x80AE2914u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2914u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AE2914: lwz     r3, 16(r31)
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
label_80AE2918:
    ctx->pc = 0x80AE2918u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2918u)) return;
    // 80AE2918: bl      0x80509C74
    {
            ctx->lr = 0x80AE291Cu;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80AE291C:
    ctx->pc = 0x80AE291Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE291Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80AE291C: stw     r30, 20(r31)
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
label_80AE2920:
    ctx->pc = 0x80AE2920u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2920u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AE2920: lwz     r31, 12(r1)
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
label_80AE2924:
    ctx->pc = 0x80AE2924u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2924u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AE2924: lwz     r30, 8(r1)
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
label_80AE2928:
    ctx->pc = 0x80AE2928u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2928u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AE2928: lwz     r0, 20(r1)
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
label_80AE292C:
    ctx->pc = 0x80AE292Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80AE292Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AE292C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AE2930:
    ctx->pc = 0x80AE2930u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2930u)) return;
    // 80AE2930: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80AE2934:
    ctx->pc = 0x80AE2934u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2934u)) return;
    // 80AE2934: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AE1780;
        }
    }

label_80AE2938:
    ctx->pc = 0x80AE2938u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2938u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80AE2938: stwu     r1, -16(r1)
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
label_80AE293C:
    ctx->pc = 0x80AE293Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE293Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80AE293C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AE2940:
    ctx->pc = 0x80AE2940u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2940u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80AE2940: stw     r0, 20(r1)
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
label_80AE2944:
    ctx->pc = 0x80AE2944u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2944u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AE2944: stw     r31, 12(r1)
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
label_80AE2948:
    ctx->pc = 0x80AE2948u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2948u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AE2948: stw     r30, 8(r1)
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
label_80AE294C:
    ctx->pc = 0x80AE294Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE294Cu)) return;
    // 80AE294C: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80AE2950:
    ctx->pc = 0x80AE2950u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2950u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AE2950: lwz     r31, 32(r3)
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
label_80AE2954:
    ctx->pc = 0x80AE2954u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2954u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AE2954: stw     r30, 36(r31)
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
label_80AE2958:
    ctx->pc = 0x80AE2958u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2958u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AE2958: stw     r5, 40(r31)
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
label_80AE295C:
    ctx->pc = 0x80AE295Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE295Cu)) return;
    // 80AE295C: cmpwi   r5, 0
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

label_80AE2960:
    ctx->pc = 0x80AE2960u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2960u)) return;
    // 80AE2960: bc    12, 1, 0x80AE2970
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80AE2970;
        }
    }

label_80AE2964:
    ctx->pc = 0x80AE2964u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2964u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AE2964: lwz     r3, 16(r31)
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
label_80AE2968:
    ctx->pc = 0x80AE2968u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2968u)) return;
    // 80AE2968: bl      0x80509BF8
    {
            ctx->lr = 0x80AE296Cu;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80AE296C:
    ctx->pc = 0x80AE296Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE296Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80AE296C: stw     r30, 32(r31)
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
label_80AE2970:
    ctx->pc = 0x80AE2970u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2970u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AE2970: lwz     r31, 12(r1)
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
label_80AE2974:
    ctx->pc = 0x80AE2974u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2974u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AE2974: lwz     r30, 8(r1)
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
label_80AE2978:
    ctx->pc = 0x80AE2978u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2978u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AE2978: lwz     r0, 20(r1)
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
label_80AE297C:
    ctx->pc = 0x80AE297Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80AE297Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AE297C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AE2980:
    ctx->pc = 0x80AE2980u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2980u)) return;
    // 80AE2980: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80AE2984:
    ctx->pc = 0x80AE2984u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2984u)) return;
    // 80AE2984: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AE1780;
        }
    }

label_80AE2988:
    ctx->pc = 0x80AE2988u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2988u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80AE2988: stwu     r1, -16(r1)
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
label_80AE298C:
    ctx->pc = 0x80AE298Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE298Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80AE298C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AE2990:
    ctx->pc = 0x80AE2990u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2990u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80AE2990: stw     r0, 20(r1)
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
label_80AE2994:
    ctx->pc = 0x80AE2994u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2994u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AE2994: stw     r31, 12(r1)
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
label_80AE2998:
    ctx->pc = 0x80AE2998u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2998u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AE2998: stw     r30, 8(r1)
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
label_80AE299C:
    ctx->pc = 0x80AE299Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE299Cu)) return;
    // 80AE299C: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80AE29A0:
    ctx->pc = 0x80AE29A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE29A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AE29A0: lwz     r31, 32(r3)
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
label_80AE29A4:
    ctx->pc = 0x80AE29A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE29A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AE29A4: stw     r30, 48(r31)
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
label_80AE29A8:
    ctx->pc = 0x80AE29A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE29A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AE29A8: stw     r5, 52(r31)
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
label_80AE29AC:
    ctx->pc = 0x80AE29ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE29ACu)) return;
    // 80AE29AC: cmpwi   r5, 0
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

label_80AE29B0:
    ctx->pc = 0x80AE29B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE29B0u)) return;
    // 80AE29B0: bc    12, 1, 0x80AE29C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80AE29C0;
        }
    }

label_80AE29B4:
    ctx->pc = 0x80AE29B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE29B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AE29B4: lwz     r3, 16(r31)
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
label_80AE29B8:
    ctx->pc = 0x80AE29B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE29B8u)) return;
    // 80AE29B8: bl      0x80509B94
    {
            ctx->lr = 0x80AE29BCu;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80AE29BC:
    ctx->pc = 0x80AE29BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE29BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80AE29BC: stw     r30, 44(r31)
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
label_80AE29C0:
    ctx->pc = 0x80AE29C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE29C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AE29C0: lwz     r31, 12(r1)
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
label_80AE29C4:
    ctx->pc = 0x80AE29C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE29C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AE29C4: lwz     r30, 8(r1)
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
label_80AE29C8:
    ctx->pc = 0x80AE29C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE29C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AE29C8: lwz     r0, 20(r1)
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
label_80AE29CC:
    ctx->pc = 0x80AE29CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80AE29CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AE29CC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AE29D0:
    ctx->pc = 0x80AE29D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE29D0u)) return;
    // 80AE29D0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80AE29D4:
    ctx->pc = 0x80AE29D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE29D4u)) return;
    // 80AE29D4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AE1780;
        }
    }

label_80AE29D8:
    ctx->pc = 0x80AE29D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE29D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80AE29D8: stwu     r1, -16(r1)
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
label_80AE29DC:
    ctx->pc = 0x80AE29DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE29DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80AE29DC: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AE29E0:
    ctx->pc = 0x80AE29E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE29E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AE29E0: stw     r0, 20(r1)
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
label_80AE29E4:
    ctx->pc = 0x80AE29E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE29E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AE29E4: stw     r31, 12(r1)
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
label_80AE29E8:
    ctx->pc = 0x80AE29E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE29E8u)) return;
    // 80AE29E8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80AE29EC:
    ctx->pc = 0x80AE29ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE29ECu)) return;
    // 80AE29EC: lis     r4, -27618
    ctx->gpr[4] = ((u32)(s32)(-27618) << 16);

label_80AE29F0:
    ctx->pc = 0x80AE29F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE29F0u)) return;
    // 80AE29F0: addi    r4, r4, -3764
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-3764);

label_80AE29F4:
    ctx->pc = 0x80AE29F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE29F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AE29F4: lwz     r0, 0(r4)
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
label_80AE29F8:
    ctx->pc = 0x80AE29F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE29F8u)) return;
    // 80AE29F8: cmplwi  r0, 0x0000
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

label_80AE29FC:
    ctx->pc = 0x80AE29FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE29FCu)) return;
    // 80AE29FC: bc    4, 2, 0x80AE2A20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AE2A20;
        }
    }

label_80AE2A00:
    ctx->pc = 0x80AE2A00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2A00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AE2A00: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80AE2A04:
    ctx->pc = 0x80AE2A04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2A04u)) return;
    // 80AE2A04: bl      0x8050EEC0
    {
            ctx->lr = 0x80AE2A08u;
            ctx->pc = 0x8050EEC0u;
            return;
    }

label_80AE2A08:
    ctx->pc = 0x80AE2A08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2A08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80AE2A08: lis     r4, -27618
    ctx->gpr[4] = ((u32)(s32)(-27618) << 16);

label_80AE2A0C:
    ctx->pc = 0x80AE2A0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2A0Cu)) return;
    // 80AE2A0C: addi    r4, r4, -3764
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-3764);

label_80AE2A10:
    ctx->pc = 0x80AE2A10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2A10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AE2A10: stw     r3, 0(r4)
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
label_80AE2A14:
    ctx->pc = 0x80AE2A14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2A14u)) return;
    // 80AE2A14: lis     r3, -27618
    ctx->gpr[3] = ((u32)(s32)(-27618) << 16);

label_80AE2A18:
    ctx->pc = 0x80AE2A18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2A18u)) return;
    // 80AE2A18: addi    r3, r3, -3768
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3768);

label_80AE2A1C:
    ctx->pc = 0x80AE2A1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2A1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80AE2A1C: stw     r31, 0(r3)
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
label_80AE2A20:
    ctx->pc = 0x80AE2A20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2A20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AE2A20: lwz     r31, 12(r1)
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
label_80AE2A24:
    ctx->pc = 0x80AE2A24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2A24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AE2A24: lwz     r0, 20(r1)
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
label_80AE2A28:
    ctx->pc = 0x80AE2A28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80AE2A28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AE2A28: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AE2A2C:
    ctx->pc = 0x80AE2A2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2A2Cu)) return;
    // 80AE2A2C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80AE2A30:
    ctx->pc = 0x80AE2A30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2A30u)) return;
    // 80AE2A30: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AE1780;
        }
    }

label_80AE2A34:
    ctx->pc = 0x80AE2A34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2A34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80AE2A34: stwu     r1, -32(r1)
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
label_80AE2A38:
    ctx->pc = 0x80AE2A38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2A38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80AE2A38: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AE2A3C:
    ctx->pc = 0x80AE2A3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2A3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80AE2A3C: stw     r0, 36(r1)
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
label_80AE2A40:
    ctx->pc = 0x80AE2A40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2A40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80AE2A40: stw     r31, 28(r1)
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
label_80AE2A44:
    ctx->pc = 0x80AE2A44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2A44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AE2A44: stw     r30, 24(r1)
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
label_80AE2A48:
    ctx->pc = 0x80AE2A48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2A48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AE2A48: stw     r29, 20(r1)
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
label_80AE2A4C:
    ctx->pc = 0x80AE2A4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2A4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AE2A4C: stw     r28, 16(r1)
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
label_80AE2A50:
    ctx->pc = 0x80AE2A50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2A50u)) return;
    // 80AE2A50: lis     r3, -27618
    ctx->gpr[3] = ((u32)(s32)(-27618) << 16);

label_80AE2A54:
    ctx->pc = 0x80AE2A54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2A54u)) return;
    // 80AE2A54: addi    r30, r3, -3764
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(-3764);

label_80AE2A58:
    ctx->pc = 0x80AE2A58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2A58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AE2A58: lwz     r0, 0(r30)
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
label_80AE2A5C:
    ctx->pc = 0x80AE2A5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2A5Cu)) return;
    // 80AE2A5C: cmplwi  r0, 0x0000
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

label_80AE2A60:
    ctx->pc = 0x80AE2A60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2A60u)) return;
    // 80AE2A60: bc    12, 2, 0x80AE2AC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80AE2AC0;
        }
    }

label_80AE2A64:
    ctx->pc = 0x80AE2A64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2A64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AE2A64: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_80AE2A68:
    ctx->pc = 0x80AE2A68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2A68u)) return;
    // 80AE2A68: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_80AE2A6C:
    ctx->pc = 0x80AE2A6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2A6Cu)) return;
    // 80AE2A6C: lis     r3, -27618
    ctx->gpr[3] = ((u32)(s32)(-27618) << 16);

label_80AE2A70:
    ctx->pc = 0x80AE2A70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2A70u)) return;
    // 80AE2A70: addi    r31, r3, -3768
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(-3768);

label_80AE2A74:
    ctx->pc = 0x80AE2A74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2A74u)) return;
    // 80AE2A74: b       0x80AE2A94
    {
            goto label_80AE2A94;
    }

label_80AE2A78:
    ctx->pc = 0x80AE2A78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2A78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80AE2A78: lwz     r3, 0(r30)
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
label_80AE2A7C:
    ctx->pc = 0x80AE2A7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2A7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AE2A7C: lwzx    r3, r3, r29
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
label_80AE2A80:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2A80u)) return;
    // 80AE2A80: cmplwi  r3, 0x0000
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

label_80AE2A84:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2A84u)) return;
    // 80AE2A84: bc    12, 2, 0x80AE2A8C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80AE2A8C;
        }
    }

label_80AE2A88:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2A88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AE2A88: bl      0x8050F9E0
    {
            ctx->lr = 0x80AE2A8Cu;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80AE2A8C:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2A8Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80AE2A8C: addi    r29, r29, 4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4);

label_80AE2A90:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2A90u)) return;
    // 80AE2A90: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_80AE2A94:
    ctx->pc = 0x80AE2A94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2A94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AE2A94: lwz     r0, 0(r31)
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
label_80AE2A98:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2A98u)) return;
    // 80AE2A98: cmpw    r28, r0
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

label_80AE2A9C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2A9Cu)) return;
    // 80AE2A9C: bc    12, 0, 0x80AE2A78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80AE2A78u;
                return;
            }
            goto label_80AE2A78;
        }
    }

label_80AE2AA0:
    ctx->pc = 0x80AE2AA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2AA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80AE2AA0: lis     r3, -27618
    ctx->gpr[3] = ((u32)(s32)(-27618) << 16);

label_80AE2AA4:
    ctx->pc = 0x80AE2AA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2AA4u)) return;
    // 80AE2AA4: addi    r3, r3, -3764
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3764);

label_80AE2AA8:
    ctx->pc = 0x80AE2AA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2AA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AE2AA8: lwz     r3, 0(r3)
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
label_80AE2AAC:
    ctx->pc = 0x80AE2AACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2AACu)) return;
    // 80AE2AAC: bl      0x8050ED40
    {
            ctx->lr = 0x80AE2AB0u;
            ctx->pc = 0x8050ED40u;
            return;
    }

label_80AE2AB0:
    ctx->pc = 0x80AE2AB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2AB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80AE2AB0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80AE2AB4:
    ctx->pc = 0x80AE2AB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2AB4u)) return;
    // 80AE2AB4: lis     r3, -27618
    ctx->gpr[3] = ((u32)(s32)(-27618) << 16);

label_80AE2AB8:
    ctx->pc = 0x80AE2AB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2AB8u)) return;
    // 80AE2AB8: addi    r3, r3, -3764
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3764);

label_80AE2ABC:
    ctx->pc = 0x80AE2ABCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2ABCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80AE2ABC: stw     r0, 0(r3)
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
label_80AE2AC0:
    ctx->pc = 0x80AE2AC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2AC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80AE2AC0: lwz     r31, 28(r1)
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
label_80AE2AC4:
    ctx->pc = 0x80AE2AC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2AC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AE2AC4: lwz     r30, 24(r1)
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
label_80AE2AC8:
    ctx->pc = 0x80AE2AC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2AC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AE2AC8: lwz     r29, 20(r1)
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
label_80AE2ACC:
    ctx->pc = 0x80AE2ACCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2ACCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AE2ACC: lwz     r28, 16(r1)
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
label_80AE2AD0:
    ctx->pc = 0x80AE2AD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2AD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AE2AD0: lwz     r0, 36(r1)
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
label_80AE2AD4:
    ctx->pc = 0x80AE2AD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80AE2AD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AE2AD4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AE2AD8:
    ctx->pc = 0x80AE2AD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2AD8u)) return;
    // 80AE2AD8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80AE2ADC:
    ctx->pc = 0x80AE2ADCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2ADCu)) return;
    // 80AE2ADC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AE1780;
        }
    }

label_80AE2AE0:
    ctx->pc = 0x80AE2AE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2AE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80AE2AE0: stwu     r1, -16(r1)
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
label_80AE2AE4:
    ctx->pc = 0x80AE2AE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2AE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AE2AE4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AE2AE8:
    ctx->pc = 0x80AE2AE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2AE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AE2AE8: stw     r0, 20(r1)
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
label_80AE2AEC:
    ctx->pc = 0x80AE2AECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2AECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AE2AEC: stw     r31, 12(r1)
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
label_80AE2AF0:
    ctx->pc = 0x80AE2AF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2AF0u)) return;
    // 80AE2AF0: lis     r6, -27618
    ctx->gpr[6] = ((u32)(s32)(-27618) << 16);

label_80AE2AF4:
    ctx->pc = 0x80AE2AF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2AF4u)) return;
    // 80AE2AF4: addi    r6, r6, -3768
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-3768);

label_80AE2AF8:
    ctx->pc = 0x80AE2AF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2AF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AE2AF8: lwz     r0, 0(r6)
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
label_80AE2AFC:
    ctx->pc = 0x80AE2AFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2AFCu)) return;
    // 80AE2AFC: cmpw    r3, r0
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

label_80AE2B00:
    ctx->pc = 0x80AE2B00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2B00u)) return;
    // 80AE2B00: bc    4, 0, 0x80AE2B3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AE2B3C;
        }
    }

label_80AE2B04:
    ctx->pc = 0x80AE2B04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2B04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80AE2B04: lis     r6, -27618
    ctx->gpr[6] = ((u32)(s32)(-27618) << 16);

label_80AE2B08:
    ctx->pc = 0x80AE2B08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2B08u)) return;
    // 80AE2B08: addi    r6, r6, -3764
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-3764);

label_80AE2B0C:
    ctx->pc = 0x80AE2B0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2B0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AE2B0C: lwz     r6, 0(r6)
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
label_80AE2B10:
    ctx->pc = 0x80AE2B10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2B10u)) return;
    // 80AE2B10: rlwinm r31, r3, 2, 0, 29
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80AE2B14:
    ctx->pc = 0x80AE2B14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2B14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AE2B14: lwzx    r0, r6, r31
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
label_80AE2B18:
    ctx->pc = 0x80AE2B18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2B18u)) return;
    // 80AE2B18: cmplwi  r0, 0x0000
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

label_80AE2B1C:
    ctx->pc = 0x80AE2B1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2B1Cu)) return;
    // 80AE2B1C: bc    4, 2, 0x80AE2B3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AE2B3C;
        }
    }

label_80AE2B20:
    ctx->pc = 0x80AE2B20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2B20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AE2B20: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80AE2B24:
    ctx->pc = 0x80AE2B24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2B24u)) return;
    // 80AE2B24: or   r4, r5, r5
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80AE2B28:
    ctx->pc = 0x80AE2B28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2B28u)) return;
    // 80AE2B28: bl      0x80AE282C
    {
            ctx->lr = 0x80AE2B2Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80AE282Cu;
                return;
            }
            goto label_80AE282C;
    }

label_80AE2B2C:
    ctx->pc = 0x80AE2B2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2B2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80AE2B2C: lis     r4, -27618
    ctx->gpr[4] = ((u32)(s32)(-27618) << 16);

label_80AE2B30:
    ctx->pc = 0x80AE2B30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2B30u)) return;
    // 80AE2B30: addi    r4, r4, -3764
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-3764);

label_80AE2B34:
    ctx->pc = 0x80AE2B34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2B34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AE2B34: lwz     r4, 0(r4)
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
label_80AE2B38:
    ctx->pc = 0x80AE2B38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2B38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80AE2B38: stwx    r3, r4, r31
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
label_80AE2B3C:
    ctx->pc = 0x80AE2B3Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2B3Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AE2B3C: lwz     r31, 12(r1)
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
label_80AE2B40:
    ctx->pc = 0x80AE2B40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2B40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AE2B40: lwz     r0, 20(r1)
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
label_80AE2B44:
    ctx->pc = 0x80AE2B44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80AE2B44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AE2B44: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AE2B48:
    ctx->pc = 0x80AE2B48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2B48u)) return;
    // 80AE2B48: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80AE2B4C:
    ctx->pc = 0x80AE2B4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2B4Cu)) return;
    // 80AE2B4C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AE1780;
        }
    }

label_80AE2B50:
    ctx->pc = 0x80AE2B50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2B50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80AE2B50: stwu     r1, -16(r1)
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
label_80AE2B54:
    ctx->pc = 0x80AE2B54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2B54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AE2B54: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AE2B58:
    ctx->pc = 0x80AE2B58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2B58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AE2B58: stw     r0, 20(r1)
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
label_80AE2B5C:
    ctx->pc = 0x80AE2B5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2B5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AE2B5C: stw     r31, 12(r1)
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
label_80AE2B60:
    ctx->pc = 0x80AE2B60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2B60u)) return;
    // 80AE2B60: lis     r4, -27618
    ctx->gpr[4] = ((u32)(s32)(-27618) << 16);

label_80AE2B64:
    ctx->pc = 0x80AE2B64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2B64u)) return;
    // 80AE2B64: addi    r4, r4, -3768
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-3768);

label_80AE2B68:
    ctx->pc = 0x80AE2B68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2B68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AE2B68: lwz     r0, 0(r4)
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
label_80AE2B6C:
    ctx->pc = 0x80AE2B6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2B6Cu)) return;
    // 80AE2B6C: cmpw    r3, r0
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

label_80AE2B70:
    ctx->pc = 0x80AE2B70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2B70u)) return;
    // 80AE2B70: bc    4, 0, 0x80AE2BA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AE2BA8;
        }
    }

label_80AE2B74:
    ctx->pc = 0x80AE2B74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2B74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80AE2B74: lis     r4, -27618
    ctx->gpr[4] = ((u32)(s32)(-27618) << 16);

label_80AE2B78:
    ctx->pc = 0x80AE2B78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2B78u)) return;
    // 80AE2B78: addi    r4, r4, -3764
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-3764);

label_80AE2B7C:
    ctx->pc = 0x80AE2B7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2B7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AE2B7C: lwz     r4, 0(r4)
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
label_80AE2B80:
    ctx->pc = 0x80AE2B80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2B80u)) return;
    // 80AE2B80: rlwinm r31, r3, 2, 0, 29
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80AE2B84:
    ctx->pc = 0x80AE2B84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2B84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AE2B84: lwzx    r3, r4, r31
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
label_80AE2B88:
    ctx->pc = 0x80AE2B88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2B88u)) return;
    // 80AE2B88: cmplwi  r3, 0x0000
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

label_80AE2B8C:
    ctx->pc = 0x80AE2B8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2B8Cu)) return;
    // 80AE2B8C: bc    12, 2, 0x80AE2BA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80AE2BA8;
        }
    }

label_80AE2B90:
    ctx->pc = 0x80AE2B90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2B90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AE2B90: bl      0x8050F9E0
    {
            ctx->lr = 0x80AE2B94u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80AE2B94:
    ctx->pc = 0x80AE2B94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2B94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80AE2B94: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80AE2B98:
    ctx->pc = 0x80AE2B98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2B98u)) return;
    // 80AE2B98: lis     r3, -27618
    ctx->gpr[3] = ((u32)(s32)(-27618) << 16);

label_80AE2B9C:
    ctx->pc = 0x80AE2B9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2B9Cu)) return;
    // 80AE2B9C: addi    r3, r3, -3764
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3764);

label_80AE2BA0:
    ctx->pc = 0x80AE2BA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2BA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80AE2BA0: lwz     r3, 0(r3)
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
label_80AE2BA4:
    ctx->pc = 0x80AE2BA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2BA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80AE2BA4: stwx    r0, r3, r31
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
label_80AE2BA8:
    ctx->pc = 0x80AE2BA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2BA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AE2BA8: lwz     r31, 12(r1)
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
label_80AE2BAC:
    ctx->pc = 0x80AE2BACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2BACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AE2BAC: lwz     r0, 20(r1)
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
label_80AE2BB0:
    ctx->pc = 0x80AE2BB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80AE2BB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AE2BB0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AE2BB4:
    ctx->pc = 0x80AE2BB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2BB4u)) return;
    // 80AE2BB4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80AE2BB8:
    ctx->pc = 0x80AE2BB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2BB8u)) return;
    // 80AE2BB8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AE1780;
        }
    }

label_80AE2BBC:
    ctx->pc = 0x80AE2BBCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2BBCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AE2BBC: stwu     r1, -16(r1)
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
label_80AE2BC0:
    ctx->pc = 0x80AE2BC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2BC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AE2BC0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AE2BC4:
    ctx->pc = 0x80AE2BC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2BC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AE2BC4: stw     r0, 20(r1)
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
label_80AE2BC8:
    ctx->pc = 0x80AE2BC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2BC8u)) return;
    // 80AE2BC8: lis     r6, -27618
    ctx->gpr[6] = ((u32)(s32)(-27618) << 16);

label_80AE2BCC:
    ctx->pc = 0x80AE2BCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2BCCu)) return;
    // 80AE2BCC: addi    r6, r6, -3768
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-3768);

label_80AE2BD0:
    ctx->pc = 0x80AE2BD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2BD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AE2BD0: lwz     r0, 0(r6)
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
label_80AE2BD4:
    ctx->pc = 0x80AE2BD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2BD4u)) return;
    // 80AE2BD4: cmpw    r3, r0
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

label_80AE2BD8:
    ctx->pc = 0x80AE2BD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2BD8u)) return;
    // 80AE2BD8: bc    4, 0, 0x80AE2BFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AE2BFC;
        }
    }

label_80AE2BDC:
    ctx->pc = 0x80AE2BDCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2BDCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80AE2BDC: lis     r6, -27618
    ctx->gpr[6] = ((u32)(s32)(-27618) << 16);

label_80AE2BE0:
    ctx->pc = 0x80AE2BE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2BE0u)) return;
    // 80AE2BE0: addi    r6, r6, -3764
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-3764);

label_80AE2BE4:
    ctx->pc = 0x80AE2BE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2BE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AE2BE4: lwz     r6, 0(r6)
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
label_80AE2BE8:
    ctx->pc = 0x80AE2BE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2BE8u)) return;
    // 80AE2BE8: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80AE2BEC:
    ctx->pc = 0x80AE2BECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2BECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AE2BEC: lwzx    r3, r6, r0
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
label_80AE2BF0:
    ctx->pc = 0x80AE2BF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2BF0u)) return;
    // 80AE2BF0: cmplwi  r3, 0x0000
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

label_80AE2BF4:
    ctx->pc = 0x80AE2BF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2BF4u)) return;
    // 80AE2BF4: bc    12, 2, 0x80AE2BFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80AE2BFC;
        }
    }

label_80AE2BF8:
    ctx->pc = 0x80AE2BF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2BF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AE2BF8: bl      0x80AE28E8
    {
            ctx->lr = 0x80AE2BFCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80AE28E8u;
                return;
            }
            goto label_80AE28E8;
    }

label_80AE2BFC:
    ctx->pc = 0x80AE2BFCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2BFCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AE2BFC: lwz     r0, 20(r1)
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
label_80AE2C00:
    ctx->pc = 0x80AE2C00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80AE2C00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AE2C00: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AE2C04:
    ctx->pc = 0x80AE2C04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2C04u)) return;
    // 80AE2C04: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80AE2C08:
    ctx->pc = 0x80AE2C08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2C08u)) return;
    // 80AE2C08: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AE1780;
        }
    }

label_80AE2C0C:
    ctx->pc = 0x80AE2C0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2C0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AE2C0C: stwu     r1, -16(r1)
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
label_80AE2C10:
    ctx->pc = 0x80AE2C10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2C10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AE2C10: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AE2C14:
    ctx->pc = 0x80AE2C14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2C14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AE2C14: stw     r0, 20(r1)
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
label_80AE2C18:
    ctx->pc = 0x80AE2C18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2C18u)) return;
    // 80AE2C18: lis     r6, -27618
    ctx->gpr[6] = ((u32)(s32)(-27618) << 16);

label_80AE2C1C:
    ctx->pc = 0x80AE2C1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2C1Cu)) return;
    // 80AE2C1C: addi    r6, r6, -3768
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-3768);

label_80AE2C20:
    ctx->pc = 0x80AE2C20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2C20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AE2C20: lwz     r0, 0(r6)
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
label_80AE2C24:
    ctx->pc = 0x80AE2C24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2C24u)) return;
    // 80AE2C24: cmpw    r3, r0
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

label_80AE2C28:
    ctx->pc = 0x80AE2C28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2C28u)) return;
    // 80AE2C28: bc    4, 0, 0x80AE2C4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AE2C4C;
        }
    }

label_80AE2C2C:
    ctx->pc = 0x80AE2C2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2C2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80AE2C2C: lis     r6, -27618
    ctx->gpr[6] = ((u32)(s32)(-27618) << 16);

label_80AE2C30:
    ctx->pc = 0x80AE2C30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2C30u)) return;
    // 80AE2C30: addi    r6, r6, -3764
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-3764);

label_80AE2C34:
    ctx->pc = 0x80AE2C34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2C34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AE2C34: lwz     r6, 0(r6)
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
label_80AE2C38:
    ctx->pc = 0x80AE2C38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2C38u)) return;
    // 80AE2C38: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80AE2C3C:
    ctx->pc = 0x80AE2C3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2C3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AE2C3C: lwzx    r3, r6, r0
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
label_80AE2C40:
    ctx->pc = 0x80AE2C40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2C40u)) return;
    // 80AE2C40: cmplwi  r3, 0x0000
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

label_80AE2C44:
    ctx->pc = 0x80AE2C44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2C44u)) return;
    // 80AE2C44: bc    12, 2, 0x80AE2C4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80AE2C4C;
        }
    }

label_80AE2C48:
    ctx->pc = 0x80AE2C48u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2C48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AE2C48: bl      0x80AE2938
    {
            ctx->lr = 0x80AE2C4Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80AE2938u;
                return;
            }
            goto label_80AE2938;
    }

label_80AE2C4C:
    ctx->pc = 0x80AE2C4Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2C4Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AE2C4C: lwz     r0, 20(r1)
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
label_80AE2C50:
    ctx->pc = 0x80AE2C50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80AE2C50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AE2C50: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AE2C54:
    ctx->pc = 0x80AE2C54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2C54u)) return;
    // 80AE2C54: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80AE2C58:
    ctx->pc = 0x80AE2C58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2C58u)) return;
    // 80AE2C58: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AE1780;
        }
    }

label_80AE2C5C:
    ctx->pc = 0x80AE2C5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2C5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AE2C5C: stwu     r1, -16(r1)
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
label_80AE2C60:
    ctx->pc = 0x80AE2C60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2C60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AE2C60: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AE2C64:
    ctx->pc = 0x80AE2C64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2C64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AE2C64: stw     r0, 20(r1)
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
label_80AE2C68:
    ctx->pc = 0x80AE2C68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2C68u)) return;
    // 80AE2C68: lis     r6, -27618
    ctx->gpr[6] = ((u32)(s32)(-27618) << 16);

label_80AE2C6C:
    ctx->pc = 0x80AE2C6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2C6Cu)) return;
    // 80AE2C6C: addi    r6, r6, -3768
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-3768);

label_80AE2C70:
    ctx->pc = 0x80AE2C70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2C70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AE2C70: lwz     r0, 0(r6)
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
label_80AE2C74:
    ctx->pc = 0x80AE2C74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2C74u)) return;
    // 80AE2C74: cmpw    r3, r0
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

label_80AE2C78:
    ctx->pc = 0x80AE2C78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2C78u)) return;
    // 80AE2C78: bc    4, 0, 0x80AE2C9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80AE2C9C;
        }
    }

label_80AE2C7C:
    ctx->pc = 0x80AE2C7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2C7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80AE2C7C: lis     r6, -27618
    ctx->gpr[6] = ((u32)(s32)(-27618) << 16);

label_80AE2C80:
    ctx->pc = 0x80AE2C80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2C80u)) return;
    // 80AE2C80: addi    r6, r6, -3764
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-3764);

label_80AE2C84:
    ctx->pc = 0x80AE2C84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2C84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AE2C84: lwz     r6, 0(r6)
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
label_80AE2C88:
    ctx->pc = 0x80AE2C88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2C88u)) return;
    // 80AE2C88: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80AE2C8C:
    ctx->pc = 0x80AE2C8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2C8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AE2C8C: lwzx    r3, r6, r0
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
label_80AE2C90:
    ctx->pc = 0x80AE2C90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2C90u)) return;
    // 80AE2C90: cmplwi  r3, 0x0000
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

label_80AE2C94:
    ctx->pc = 0x80AE2C94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2C94u)) return;
    // 80AE2C94: bc    12, 2, 0x80AE2C9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80AE2C9C;
        }
    }

label_80AE2C98:
    ctx->pc = 0x80AE2C98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2C98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80AE2C98: bl      0x80AE2988
    {
            ctx->lr = 0x80AE2C9Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80AE2988u;
                return;
            }
            goto label_80AE2988;
    }

label_80AE2C9C:
    ctx->pc = 0x80AE2C9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2C9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AE2C9C: lwz     r0, 20(r1)
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
label_80AE2CA0:
    ctx->pc = 0x80AE2CA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80AE2CA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AE2CA0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AE2CA4:
    ctx->pc = 0x80AE2CA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2CA4u)) return;
    // 80AE2CA4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80AE2CA8:
    ctx->pc = 0x80AE2CA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2CA8u)) return;
    // 80AE2CA8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AE1780;
        }
    }

label_80AE2CAC:
    ctx->pc = 0x80AE2CACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2CACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80AE2CAC: stwu     r1, -32(r1)
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
label_80AE2CB0:
    ctx->pc = 0x80AE2CB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2CB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80AE2CB0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AE2CB4:
    ctx->pc = 0x80AE2CB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2CB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80AE2CB4: stw     r0, 36(r1)
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
label_80AE2CB8:
    ctx->pc = 0x80AE2CB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2CB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80AE2CB8: stw     r31, 28(r1)
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
label_80AE2CBC:
    ctx->pc = 0x80AE2CBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2CBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80AE2CBC: stw     r30, 24(r1)
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
label_80AE2CC0:
    ctx->pc = 0x80AE2CC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2CC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AE2CC0: stw     r29, 20(r1)
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
label_80AE2CC4:
    ctx->pc = 0x80AE2CC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2CC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AE2CC4: stw     r28, 16(r1)
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
label_80AE2CC8:
    ctx->pc = 0x80AE2CC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2CC8u)) return;
    // 80AE2CC8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80AE2CCC:
    ctx->pc = 0x80AE2CCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2CCCu)) return;
    // 80AE2CCC: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80AE2CD0:
    ctx->pc = 0x80AE2CD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2CD0u)) return;
    // 80AE2CD0: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80AE2CD4:
    ctx->pc = 0x80AE2CD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2CD4u)) return;
    // 80AE2CD4: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_80AE2CD8:
    ctx->pc = 0x80AE2CD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2CD8u)) return;
    // 80AE2CD8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80AE2CDC:
    ctx->pc = 0x80AE2CDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2CDCu)) return;
    // 80AE2CDC: bl      0x80401DB0
    {
            ctx->lr = 0x80AE2CE0u;
            ctx->pc = 0x80401DB0u;
            return;
    }

label_80AE2CE0:
    ctx->pc = 0x80AE2CE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2CE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80AE2CE0: lis     r4, -27618
    ctx->gpr[4] = ((u32)(s32)(-27618) << 16);

label_80AE2CE4:
    ctx->pc = 0x80AE2CE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2CE4u)) return;
    // 80AE2CE4: addi    r4, r4, -3760
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-3760);

label_80AE2CE8:
    ctx->pc = 0x80AE2CE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2CE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AE2CE8: lwz     r0, 0(r4)
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
label_80AE2CEC:
    ctx->pc = 0x80AE2CECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2CECu)) return;
    // 80AE2CEC: add   r4, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80AE2CF0:
    ctx->pc = 0x80AE2CF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2CF0u)) return;
    // 80AE2CF0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80AE2CF4:
    ctx->pc = 0x80AE2CF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2CF4u)) return;
    // 80AE2CF4: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80AE2CF8:
    ctx->pc = 0x80AE2CF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2CF8u)) return;
    // 80AE2CF8: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80AE2CFC:
    ctx->pc = 0x80AE2CFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2CFCu)) return;
    // 80AE2CFC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80AE2D00:
    ctx->pc = 0x80AE2D00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2D00u)) return;
    // 80AE2D00: li      r7, 120
    ctx->gpr[7] = (u32)(s32)(120);

label_80AE2D04:
    ctx->pc = 0x80AE2D04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2D04u)) return;
    // 80AE2D04: bl      0x8050A0D4
    {
            ctx->lr = 0x80AE2D08u;
            ctx->pc = 0x8050A0D4u;
            return;
    }

label_80AE2D08:
    ctx->pc = 0x80AE2D08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2D08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AE2D08: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80AE2D0C:
    ctx->pc = 0x80AE2D0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2D0Cu)) return;
    // 80AE2D0C: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80AE2D10:
    ctx->pc = 0x80AE2D10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2D10u)) return;
    // 80AE2D10: bl      0x80509C74
    {
            ctx->lr = 0x80AE2D14u;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80AE2D14:
    ctx->pc = 0x80AE2D14u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2D14u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AE2D14: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80AE2D18:
    ctx->pc = 0x80AE2D18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2D18u)) return;
    // 80AE2D18: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80AE2D1C:
    ctx->pc = 0x80AE2D1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2D1Cu)) return;
    // 80AE2D1C: bl      0x80509BF8
    {
            ctx->lr = 0x80AE2D20u;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80AE2D20:
    ctx->pc = 0x80AE2D20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2D20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80AE2D20: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80AE2D24:
    ctx->pc = 0x80AE2D24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2D24u)) return;
    // 80AE2D24: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80AE2D28:
    ctx->pc = 0x80AE2D28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2D28u)) return;
    // 80AE2D28: bl      0x80509B94
    {
            ctx->lr = 0x80AE2D2Cu;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80AE2D2C:
    ctx->pc = 0x80AE2D2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80AE2D2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80AE2D2C: lis     r3, -27618
    ctx->gpr[3] = ((u32)(s32)(-27618) << 16);

label_80AE2D30:
    ctx->pc = 0x80AE2D30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2D30u)) return;
    // 80AE2D30: addi    r4, r3, -3760
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-3760);

label_80AE2D34:
    ctx->pc = 0x80AE2D34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2D34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80AE2D34: lwz     r3, 0(r4)
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
label_80AE2D38:
    ctx->pc = 0x80AE2D38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2D38u)) return;
    // 80AE2D38: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_80AE2D3C:
    ctx->pc = 0x80AE2D3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2D3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80AE2D3C: stw     r0, 0(r4)
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
label_80AE2D40:
    ctx->pc = 0x80AE2D40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2D40u)) return;
    // 80AE2D40: rlwinm r0, r0, 0, 27, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000001Fu;
    }

label_80AE2D44:
    ctx->pc = 0x80AE2D44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2D44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80AE2D44: stw     r0, 0(r4)
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
label_80AE2D48:
    ctx->pc = 0x80AE2D48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2D48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80AE2D48: lwz     r31, 28(r1)
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
label_80AE2D4C:
    ctx->pc = 0x80AE2D4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2D4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80AE2D4C: lwz     r30, 24(r1)
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
label_80AE2D50:
    ctx->pc = 0x80AE2D50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2D50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80AE2D50: lwz     r29, 20(r1)
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
label_80AE2D54:
    ctx->pc = 0x80AE2D54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2D54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80AE2D54: lwz     r28, 16(r1)
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
label_80AE2D58:
    ctx->pc = 0x80AE2D58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2D58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80AE2D58: lwz     r0, 36(r1)
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
label_80AE2D5C:
    ctx->pc = 0x80AE2D5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80AE2D5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80AE2D5C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80AE2D60:
    ctx->pc = 0x80AE2D60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2D60u)) return;
    // 80AE2D60: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80AE2D64:
    ctx->pc = 0x80AE2D64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80AE2D64u)) return;
    // 80AE2D64: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80AE1780;
        }
    }

    ctx->pc = 0x80AE2D68u;
    return;
return_dispatch_80AE1780:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80AE17BCu: goto label_80AE17BC;
    case 0x80AE17C4u: goto label_80AE17C4;
    case 0x80AE17C8u: goto label_80AE17C8;
    case 0x80AE17CCu: goto label_80AE17CC;
    case 0x80AE17D0u: goto label_80AE17D0;
    case 0x80AE17D8u: goto label_80AE17D8;
    case 0x80AE17E0u: goto label_80AE17E0;
    case 0x80AE1808u: goto label_80AE1808;
    case 0x80AE1810u: goto label_80AE1810;
    case 0x80AE1824u: goto label_80AE1824;
    case 0x80AE182Cu: goto label_80AE182C;
    case 0x80AE1834u: goto label_80AE1834;
    case 0x80AE1838u: goto label_80AE1838;
    case 0x80AE1840u: goto label_80AE1840;
    case 0x80AE1868u: goto label_80AE1868;
    case 0x80AE1878u: goto label_80AE1878;
    case 0x80AE1888u: goto label_80AE1888;
    case 0x80AE1898u: goto label_80AE1898;
    case 0x80AE18A0u: goto label_80AE18A0;
    case 0x80AE18B0u: goto label_80AE18B0;
    case 0x80AE18E0u: goto label_80AE18E0;
    case 0x80AE18F8u: goto label_80AE18F8;
    case 0x80AE1900u: goto label_80AE1900;
    case 0x80AE1930u: goto label_80AE1930;
    case 0x80AE1948u: goto label_80AE1948;
    case 0x80AE1978u: goto label_80AE1978;
    case 0x80AE1990u: goto label_80AE1990;
    case 0x80AE1998u: goto label_80AE1998;
    case 0x80AE19A0u: goto label_80AE19A0;
    case 0x80AE19C8u: goto label_80AE19C8;
    case 0x80AE19D0u: goto label_80AE19D0;
    case 0x80AE19E4u: goto label_80AE19E4;
    case 0x80AE1A14u: goto label_80AE1A14;
    case 0x80AE1A30u: goto label_80AE1A30;
    case 0x80AE1A60u: goto label_80AE1A60;
    case 0x80AE1A7Cu: goto label_80AE1A7C;
    case 0x80AE1A8Cu: goto label_80AE1A8C;
    case 0x80AE1A9Cu: goto label_80AE1A9C;
    case 0x80AE1AA4u: goto label_80AE1AA4;
    case 0x80AE1AB4u: goto label_80AE1AB4;
    case 0x80AE1ABCu: goto label_80AE1ABC;
    case 0x80AE1AC4u: goto label_80AE1AC4;
    case 0x80AE1AD0u: goto label_80AE1AD0;
    case 0x80AE1B00u: goto label_80AE1B00;
    case 0x80AE1B20u: goto label_80AE1B20;
    case 0x80AE1B28u: goto label_80AE1B28;
    case 0x80AE1B3Cu: goto label_80AE1B3C;
    case 0x80AE1B44u: goto label_80AE1B44;
    case 0x80AE1B58u: goto label_80AE1B58;
    case 0x80AE1B60u: goto label_80AE1B60;
    case 0x80AE1BA0u: goto label_80AE1BA0;
    case 0x80AE1BA8u: goto label_80AE1BA8;
    case 0x80AE1BBCu: goto label_80AE1BBC;
    case 0x80AE1BCCu: goto label_80AE1BCC;
    case 0x80AE1C08u: goto label_80AE1C08;
    case 0x80AE1C10u: goto label_80AE1C10;
    case 0x80AE1C38u: goto label_80AE1C38;
    case 0x80AE1C40u: goto label_80AE1C40;
    case 0x80AE1C50u: goto label_80AE1C50;
    case 0x80AE1C58u: goto label_80AE1C58;
    case 0x80AE1C5Cu: goto label_80AE1C5C;
    case 0x80AE1C64u: goto label_80AE1C64;
    case 0x80AE1C8Cu: goto label_80AE1C8C;
    case 0x80AE1C94u: goto label_80AE1C94;
    case 0x80AE1CB8u: goto label_80AE1CB8;
    case 0x80AE1CC0u: goto label_80AE1CC0;
    case 0x80AE1CC8u: goto label_80AE1CC8;
    case 0x80AE1CECu: goto label_80AE1CEC;
    case 0x80AE1CF4u: goto label_80AE1CF4;
    case 0x80AE1CFCu: goto label_80AE1CFC;
    case 0x80AE1D14u: goto label_80AE1D14;
    case 0x80AE1D28u: goto label_80AE1D28;
    case 0x80AE1D2Cu: goto label_80AE1D2C;
    case 0x80AE1D34u: goto label_80AE1D34;
    case 0x80AE1D5Cu: goto label_80AE1D5C;
    case 0x80AE1D64u: goto label_80AE1D64;
    case 0x80AE1DB0u: goto label_80AE1DB0;
    case 0x80AE1DB8u: goto label_80AE1DB8;
    case 0x80AE1DE0u: goto label_80AE1DE0;
    case 0x80AE1DE8u: goto label_80AE1DE8;
    case 0x80AE1DF0u: goto label_80AE1DF0;
    case 0x80AE1E18u: goto label_80AE1E18;
    case 0x80AE1E20u: goto label_80AE1E20;
    case 0x80AE1E24u: goto label_80AE1E24;
    case 0x80AE1E28u: goto label_80AE1E28;
    case 0x80AE1E2Cu: goto label_80AE1E2C;
    case 0x80AE1E5Cu: goto label_80AE1E5C;
    case 0x80AE1E78u: goto label_80AE1E78;
    case 0x80AE1E94u: goto label_80AE1E94;
    case 0x80AE1E9Cu: goto label_80AE1E9C;
    case 0x80AE1EC4u: goto label_80AE1EC4;
    case 0x80AE1ECCu: goto label_80AE1ECC;
    case 0x80AE1EE0u: goto label_80AE1EE0;
    case 0x80AE1EE8u: goto label_80AE1EE8;
    case 0x80AE1F18u: goto label_80AE1F18;
    case 0x80AE1F30u: goto label_80AE1F30;
    case 0x80AE1F60u: goto label_80AE1F60;
    case 0x80AE1F78u: goto label_80AE1F78;
    case 0x80AE1F80u: goto label_80AE1F80;
    case 0x80AE1F84u: goto label_80AE1F84;
    case 0x80AE1F8Cu: goto label_80AE1F8C;
    case 0x80AE1FB4u: goto label_80AE1FB4;
    case 0x80AE1FBCu: goto label_80AE1FBC;
    case 0x80AE1FC4u: goto label_80AE1FC4;
    case 0x80AE1FC8u: goto label_80AE1FC8;
    case 0x80AE1FD0u: goto label_80AE1FD0;
    case 0x80AE1FDCu: goto label_80AE1FDC;
    case 0x80AE1FE4u: goto label_80AE1FE4;
    case 0x80AE2008u: goto label_80AE2008;
    case 0x80AE2010u: goto label_80AE2010;
    case 0x80AE2018u: goto label_80AE2018;
    case 0x80AE201Cu: goto label_80AE201C;
    case 0x80AE2024u: goto label_80AE2024;
    case 0x80AE204Cu: goto label_80AE204C;
    case 0x80AE2050u: goto label_80AE2050;
    case 0x80AE2058u: goto label_80AE2058;
    case 0x80AE2060u: goto label_80AE2060;
    case 0x80AE2064u: goto label_80AE2064;
    case 0x80AE206Cu: goto label_80AE206C;
    case 0x80AE2094u: goto label_80AE2094;
    case 0x80AE209Cu: goto label_80AE209C;
    case 0x80AE20A4u: goto label_80AE20A4;
    case 0x80AE20E4u: goto label_80AE20E4;
    case 0x80AE20ECu: goto label_80AE20EC;
    case 0x80AE211Cu: goto label_80AE211C;
    case 0x80AE2138u: goto label_80AE2138;
    case 0x80AE2168u: goto label_80AE2168;
    case 0x80AE2184u: goto label_80AE2184;
    case 0x80AE218Cu: goto label_80AE218C;
    case 0x80AE2194u: goto label_80AE2194;
    case 0x80AE21B8u: goto label_80AE21B8;
    case 0x80AE21C0u: goto label_80AE21C0;
    case 0x80AE21C4u: goto label_80AE21C4;
    case 0x80AE21CCu: goto label_80AE21CC;
    case 0x80AE21D8u: goto label_80AE21D8;
    case 0x80AE21F4u: goto label_80AE21F4;
    case 0x80AE21FCu: goto label_80AE21FC;
    case 0x80AE2204u: goto label_80AE2204;
    case 0x80AE222Cu: goto label_80AE222C;
    case 0x80AE2234u: goto label_80AE2234;
    case 0x80AE2244u: goto label_80AE2244;
    case 0x80AE2274u: goto label_80AE2274;
    case 0x80AE2290u: goto label_80AE2290;
    case 0x80AE22C0u: goto label_80AE22C0;
    case 0x80AE22DCu: goto label_80AE22DC;
    case 0x80AE22E4u: goto label_80AE22E4;
    case 0x80AE2324u: goto label_80AE2324;
    case 0x80AE232Cu: goto label_80AE232C;
    case 0x80AE2330u: goto label_80AE2330;
    case 0x80AE2338u: goto label_80AE2338;
    case 0x80AE2340u: goto label_80AE2340;
    case 0x80AE234Cu: goto label_80AE234C;
    case 0x80AE2350u: goto label_80AE2350;
    case 0x80AE2368u: goto label_80AE2368;
    case 0x80AE2380u: goto label_80AE2380;
    case 0x80AE23A8u: goto label_80AE23A8;
    case 0x80AE23B0u: goto label_80AE23B0;
    case 0x80AE23C0u: goto label_80AE23C0;
    case 0x80AE23C8u: goto label_80AE23C8;
    case 0x80AE23D4u: goto label_80AE23D4;
    case 0x80AE23D8u: goto label_80AE23D8;
    case 0x80AE23DCu: goto label_80AE23DC;
    case 0x80AE2400u: goto label_80AE2400;
    case 0x80AE248Cu: goto label_80AE248C;
    case 0x80AE2498u: goto label_80AE2498;
    case 0x80AE2528u: goto label_80AE2528;
    case 0x80AE2530u: goto label_80AE2530;
    case 0x80AE2598u: goto label_80AE2598;
    case 0x80AE25E0u: goto label_80AE25E0;
    case 0x80AE264Cu: goto label_80AE264C;
    case 0x80AE26F8u: goto label_80AE26F8;
    case 0x80AE2720u: goto label_80AE2720;
    case 0x80AE2780u: goto label_80AE2780;
    case 0x80AE27C0u: goto label_80AE27C0;
    case 0x80AE2800u: goto label_80AE2800;
    case 0x80AE285Cu: goto label_80AE285C;
    case 0x80AE2880u: goto label_80AE2880;
    case 0x80AE291Cu: goto label_80AE291C;
    case 0x80AE296Cu: goto label_80AE296C;
    case 0x80AE29BCu: goto label_80AE29BC;
    case 0x80AE2A08u: goto label_80AE2A08;
    case 0x80AE2A8Cu: goto label_80AE2A8C;
    case 0x80AE2AB0u: goto label_80AE2AB0;
    case 0x80AE2B2Cu: goto label_80AE2B2C;
    case 0x80AE2B94u: goto label_80AE2B94;
    case 0x80AE2BFCu: goto label_80AE2BFC;
    case 0x80AE2C4Cu: goto label_80AE2C4C;
    case 0x80AE2C9Cu: goto label_80AE2C9C;
    case 0x80AE2CE0u: goto label_80AE2CE0;
    case 0x80AE2D08u: goto label_80AE2D08;
    case 0x80AE2D14u: goto label_80AE2D14;
    case 0x80AE2D20u: goto label_80AE2D20;
    case 0x80AE2D2Cu: goto label_80AE2D2C;
    default: return;
    }
}

