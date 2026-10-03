// DolRecomp output
#include "../generated.h"

void func_8083E580(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_8083E580[1234] = {
        &&label_8083E580,
        &&label_8083E584,
        &&label_8083E588,
        &&label_8083E58C,
        &&label_8083E590,
        &&label_8083E594,
        &&label_8083E598,
        &&label_8083E59C,
        &&label_8083E5A0,
        &&label_8083E5A4,
        &&label_8083E5A8,
        &&label_8083E5AC,
        &&label_8083E5B0,
        &&label_8083E5B4,
        &&label_8083E5B8,
        &&label_8083E5BC,
        &&label_8083E5C0,
        &&label_8083E5C4,
        &&label_8083E5C8,
        &&label_8083E5CC,
        &&label_8083E5D0,
        &&label_8083E5D4,
        &&label_8083E5D8,
        &&label_8083E5DC,
        &&label_8083E5E0,
        &&label_8083E5E4,
        &&label_8083E5E8,
        &&label_8083E5EC,
        &&label_8083E5F0,
        &&label_8083E5F4,
        &&label_8083E5F8,
        &&label_8083E5FC,
        &&label_8083E600,
        &&label_8083E604,
        &&label_8083E608,
        &&label_8083E60C,
        &&label_8083E610,
        &&label_8083E614,
        &&label_8083E618,
        &&label_8083E61C,
        &&label_8083E620,
        &&label_8083E624,
        &&label_8083E628,
        &&label_8083E62C,
        &&label_8083E630,
        &&label_8083E634,
        &&label_8083E638,
        &&label_8083E63C,
        &&label_8083E640,
        &&label_8083E644,
        &&label_8083E648,
        &&label_8083E64C,
        &&label_8083E650,
        &&label_8083E654,
        &&label_8083E658,
        &&label_8083E65C,
        &&label_8083E660,
        &&label_8083E664,
        &&label_8083E668,
        &&label_8083E66C,
        &&label_8083E670,
        &&label_8083E674,
        &&label_8083E678,
        &&label_8083E67C,
        &&label_8083E680,
        &&label_8083E684,
        &&label_8083E688,
        &&label_8083E68C,
        &&label_8083E690,
        &&label_8083E694,
        &&label_8083E698,
        &&label_8083E69C,
        &&label_8083E6A0,
        &&label_8083E6A4,
        &&label_8083E6A8,
        &&label_8083E6AC,
        &&label_8083E6B0,
        &&label_8083E6B4,
        &&label_8083E6B8,
        &&label_8083E6BC,
        &&label_8083E6C0,
        &&label_8083E6C4,
        &&label_8083E6C8,
        &&label_8083E6CC,
        &&label_8083E6D0,
        &&label_8083E6D4,
        &&label_8083E6D8,
        &&label_8083E6DC,
        &&label_8083E6E0,
        &&label_8083E6E4,
        &&label_8083E6E8,
        &&label_8083E6EC,
        &&label_8083E6F0,
        &&label_8083E6F4,
        &&label_8083E6F8,
        &&label_8083E6FC,
        &&label_8083E700,
        &&label_8083E704,
        &&label_8083E708,
        &&label_8083E70C,
        &&label_8083E710,
        &&label_8083E714,
        &&label_8083E718,
        &&label_8083E71C,
        &&label_8083E720,
        &&label_8083E724,
        &&label_8083E728,
        &&label_8083E72C,
        &&label_8083E730,
        &&label_8083E734,
        &&label_8083E738,
        &&label_8083E73C,
        &&label_8083E740,
        &&label_8083E744,
        &&label_8083E748,
        &&label_8083E74C,
        &&label_8083E750,
        &&label_8083E754,
        &&label_8083E758,
        &&label_8083E75C,
        &&label_8083E760,
        &&label_8083E764,
        &&label_8083E768,
        &&label_8083E76C,
        &&label_8083E770,
        &&label_8083E774,
        &&label_8083E778,
        &&label_8083E77C,
        &&label_8083E780,
        &&label_8083E784,
        &&label_8083E788,
        &&label_8083E78C,
        &&label_8083E790,
        &&label_8083E794,
        &&label_8083E798,
        &&label_8083E79C,
        &&label_8083E7A0,
        &&label_8083E7A4,
        &&label_8083E7A8,
        &&label_8083E7AC,
        &&label_8083E7B0,
        &&label_8083E7B4,
        &&label_8083E7B8,
        &&label_8083E7BC,
        &&label_8083E7C0,
        &&label_8083E7C4,
        &&label_8083E7C8,
        &&label_8083E7CC,
        &&label_8083E7D0,
        &&label_8083E7D4,
        &&label_8083E7D8,
        &&label_8083E7DC,
        &&label_8083E7E0,
        &&label_8083E7E4,
        &&label_8083E7E8,
        &&label_8083E7EC,
        &&label_8083E7F0,
        &&label_8083E7F4,
        &&label_8083E7F8,
        &&label_8083E7FC,
        &&label_8083E800,
        &&label_8083E804,
        &&label_8083E808,
        &&label_8083E80C,
        &&label_8083E810,
        &&label_8083E814,
        &&label_8083E818,
        &&label_8083E81C,
        &&label_8083E820,
        &&label_8083E824,
        &&label_8083E828,
        &&label_8083E82C,
        &&label_8083E830,
        &&label_8083E834,
        &&label_8083E838,
        &&label_8083E83C,
        &&label_8083E840,
        &&label_8083E844,
        &&label_8083E848,
        &&label_8083E84C,
        &&label_8083E850,
        &&label_8083E854,
        &&label_8083E858,
        &&label_8083E85C,
        &&label_8083E860,
        &&label_8083E864,
        &&label_8083E868,
        &&label_8083E86C,
        &&label_8083E870,
        &&label_8083E874,
        &&label_8083E878,
        &&label_8083E87C,
        &&label_8083E880,
        &&label_8083E884,
        &&label_8083E888,
        &&label_8083E88C,
        &&label_8083E890,
        &&label_8083E894,
        &&label_8083E898,
        &&label_8083E89C,
        &&label_8083E8A0,
        &&label_8083E8A4,
        &&label_8083E8A8,
        &&label_8083E8AC,
        &&label_8083E8B0,
        &&label_8083E8B4,
        &&label_8083E8B8,
        &&label_8083E8BC,
        &&label_8083E8C0,
        &&label_8083E8C4,
        &&label_8083E8C8,
        &&label_8083E8CC,
        &&label_8083E8D0,
        &&label_8083E8D4,
        &&label_8083E8D8,
        &&label_8083E8DC,
        &&label_8083E8E0,
        &&label_8083E8E4,
        &&label_8083E8E8,
        &&label_8083E8EC,
        &&label_8083E8F0,
        &&label_8083E8F4,
        &&label_8083E8F8,
        &&label_8083E8FC,
        &&label_8083E900,
        &&label_8083E904,
        &&label_8083E908,
        &&label_8083E90C,
        &&label_8083E910,
        &&label_8083E914,
        &&label_8083E918,
        &&label_8083E91C,
        &&label_8083E920,
        &&label_8083E924,
        &&label_8083E928,
        &&label_8083E92C,
        &&label_8083E930,
        &&label_8083E934,
        &&label_8083E938,
        &&label_8083E93C,
        &&label_8083E940,
        &&label_8083E944,
        &&label_8083E948,
        &&label_8083E94C,
        &&label_8083E950,
        &&label_8083E954,
        &&label_8083E958,
        &&label_8083E95C,
        &&label_8083E960,
        &&label_8083E964,
        &&label_8083E968,
        &&label_8083E96C,
        &&label_8083E970,
        &&label_8083E974,
        &&label_8083E978,
        &&label_8083E97C,
        &&label_8083E980,
        &&label_8083E984,
        &&label_8083E988,
        &&label_8083E98C,
        &&label_8083E990,
        &&label_8083E994,
        &&label_8083E998,
        &&label_8083E99C,
        &&label_8083E9A0,
        &&label_8083E9A4,
        &&label_8083E9A8,
        &&label_8083E9AC,
        &&label_8083E9B0,
        &&label_8083E9B4,
        &&label_8083E9B8,
        &&label_8083E9BC,
        &&label_8083E9C0,
        &&label_8083E9C4,
        &&label_8083E9C8,
        &&label_8083E9CC,
        &&label_8083E9D0,
        &&label_8083E9D4,
        &&label_8083E9D8,
        &&label_8083E9DC,
        &&label_8083E9E0,
        &&label_8083E9E4,
        &&label_8083E9E8,
        &&label_8083E9EC,
        &&label_8083E9F0,
        &&label_8083E9F4,
        &&label_8083E9F8,
        &&label_8083E9FC,
        &&label_8083EA00,
        &&label_8083EA04,
        &&label_8083EA08,
        &&label_8083EA0C,
        &&label_8083EA10,
        &&label_8083EA14,
        &&label_8083EA18,
        &&label_8083EA1C,
        &&label_8083EA20,
        &&label_8083EA24,
        &&label_8083EA28,
        &&label_8083EA2C,
        &&label_8083EA30,
        &&label_8083EA34,
        &&label_8083EA38,
        &&label_8083EA3C,
        &&label_8083EA40,
        &&label_8083EA44,
        &&label_8083EA48,
        &&label_8083EA4C,
        &&label_8083EA50,
        &&label_8083EA54,
        &&label_8083EA58,
        &&label_8083EA5C,
        &&label_8083EA60,
        &&label_8083EA64,
        &&label_8083EA68,
        &&label_8083EA6C,
        &&label_8083EA70,
        &&label_8083EA74,
        &&label_8083EA78,
        &&label_8083EA7C,
        &&label_8083EA80,
        &&label_8083EA84,
        &&label_8083EA88,
        &&label_8083EA8C,
        &&label_8083EA90,
        &&label_8083EA94,
        &&label_8083EA98,
        &&label_8083EA9C,
        &&label_8083EAA0,
        &&label_8083EAA4,
        &&label_8083EAA8,
        &&label_8083EAAC,
        &&label_8083EAB0,
        &&label_8083EAB4,
        &&label_8083EAB8,
        &&label_8083EABC,
        &&label_8083EAC0,
        &&label_8083EAC4,
        &&label_8083EAC8,
        &&label_8083EACC,
        &&label_8083EAD0,
        &&label_8083EAD4,
        &&label_8083EAD8,
        &&label_8083EADC,
        &&label_8083EAE0,
        &&label_8083EAE4,
        &&label_8083EAE8,
        &&label_8083EAEC,
        &&label_8083EAF0,
        &&label_8083EAF4,
        &&label_8083EAF8,
        &&label_8083EAFC,
        &&label_8083EB00,
        &&label_8083EB04,
        &&label_8083EB08,
        &&label_8083EB0C,
        &&label_8083EB10,
        &&label_8083EB14,
        &&label_8083EB18,
        &&label_8083EB1C,
        &&label_8083EB20,
        &&label_8083EB24,
        &&label_8083EB28,
        &&label_8083EB2C,
        &&label_8083EB30,
        &&label_8083EB34,
        &&label_8083EB38,
        &&label_8083EB3C,
        &&label_8083EB40,
        &&label_8083EB44,
        &&label_8083EB48,
        &&label_8083EB4C,
        &&label_8083EB50,
        &&label_8083EB54,
        &&label_8083EB58,
        &&label_8083EB5C,
        &&label_8083EB60,
        &&label_8083EB64,
        &&label_8083EB68,
        &&label_8083EB6C,
        &&label_8083EB70,
        &&label_8083EB74,
        &&label_8083EB78,
        &&label_8083EB7C,
        &&label_8083EB80,
        &&label_8083EB84,
        &&label_8083EB88,
        &&label_8083EB8C,
        &&label_8083EB90,
        &&label_8083EB94,
        &&label_8083EB98,
        &&label_8083EB9C,
        &&label_8083EBA0,
        &&label_8083EBA4,
        &&label_8083EBA8,
        &&label_8083EBAC,
        &&label_8083EBB0,
        &&label_8083EBB4,
        &&label_8083EBB8,
        &&label_8083EBBC,
        &&label_8083EBC0,
        &&label_8083EBC4,
        &&label_8083EBC8,
        &&label_8083EBCC,
        &&label_8083EBD0,
        &&label_8083EBD4,
        &&label_8083EBD8,
        &&label_8083EBDC,
        &&label_8083EBE0,
        &&label_8083EBE4,
        &&label_8083EBE8,
        &&label_8083EBEC,
        &&label_8083EBF0,
        &&label_8083EBF4,
        &&label_8083EBF8,
        &&label_8083EBFC,
        &&label_8083EC00,
        &&label_8083EC04,
        &&label_8083EC08,
        &&label_8083EC0C,
        &&label_8083EC10,
        &&label_8083EC14,
        &&label_8083EC18,
        &&label_8083EC1C,
        &&label_8083EC20,
        &&label_8083EC24,
        &&label_8083EC28,
        &&label_8083EC2C,
        &&label_8083EC30,
        &&label_8083EC34,
        &&label_8083EC38,
        &&label_8083EC3C,
        &&label_8083EC40,
        &&label_8083EC44,
        &&label_8083EC48,
        &&label_8083EC4C,
        &&label_8083EC50,
        &&label_8083EC54,
        &&label_8083EC58,
        &&label_8083EC5C,
        &&label_8083EC60,
        &&label_8083EC64,
        &&label_8083EC68,
        &&label_8083EC6C,
        &&label_8083EC70,
        &&label_8083EC74,
        &&label_8083EC78,
        &&label_8083EC7C,
        &&label_8083EC80,
        &&label_8083EC84,
        &&label_8083EC88,
        &&label_8083EC8C,
        &&label_8083EC90,
        &&label_8083EC94,
        &&label_8083EC98,
        &&label_8083EC9C,
        &&label_8083ECA0,
        &&label_8083ECA4,
        &&label_8083ECA8,
        &&label_8083ECAC,
        &&label_8083ECB0,
        &&label_8083ECB4,
        &&label_8083ECB8,
        &&label_8083ECBC,
        &&label_8083ECC0,
        &&label_8083ECC4,
        &&label_8083ECC8,
        &&label_8083ECCC,
        &&label_8083ECD0,
        &&label_8083ECD4,
        &&label_8083ECD8,
        &&label_8083ECDC,
        &&label_8083ECE0,
        &&label_8083ECE4,
        &&label_8083ECE8,
        &&label_8083ECEC,
        &&label_8083ECF0,
        &&label_8083ECF4,
        &&label_8083ECF8,
        &&label_8083ECFC,
        &&label_8083ED00,
        &&label_8083ED04,
        &&label_8083ED08,
        &&label_8083ED0C,
        &&label_8083ED10,
        &&label_8083ED14,
        &&label_8083ED18,
        &&label_8083ED1C,
        &&label_8083ED20,
        &&label_8083ED24,
        &&label_8083ED28,
        &&label_8083ED2C,
        &&label_8083ED30,
        &&label_8083ED34,
        &&label_8083ED38,
        &&label_8083ED3C,
        &&label_8083ED40,
        &&label_8083ED44,
        &&label_8083ED48,
        &&label_8083ED4C,
        &&label_8083ED50,
        &&label_8083ED54,
        &&label_8083ED58,
        &&label_8083ED5C,
        &&label_8083ED60,
        &&label_8083ED64,
        &&label_8083ED68,
        &&label_8083ED6C,
        &&label_8083ED70,
        &&label_8083ED74,
        &&label_8083ED78,
        &&label_8083ED7C,
        &&label_8083ED80,
        &&label_8083ED84,
        &&label_8083ED88,
        &&label_8083ED8C,
        &&label_8083ED90,
        &&label_8083ED94,
        &&label_8083ED98,
        &&label_8083ED9C,
        &&label_8083EDA0,
        &&label_8083EDA4,
        &&label_8083EDA8,
        &&label_8083EDAC,
        &&label_8083EDB0,
        &&label_8083EDB4,
        &&label_8083EDB8,
        &&label_8083EDBC,
        &&label_8083EDC0,
        &&label_8083EDC4,
        &&label_8083EDC8,
        &&label_8083EDCC,
        &&label_8083EDD0,
        &&label_8083EDD4,
        &&label_8083EDD8,
        &&label_8083EDDC,
        &&label_8083EDE0,
        &&label_8083EDE4,
        &&label_8083EDE8,
        &&label_8083EDEC,
        &&label_8083EDF0,
        &&label_8083EDF4,
        &&label_8083EDF8,
        &&label_8083EDFC,
        &&label_8083EE00,
        &&label_8083EE04,
        &&label_8083EE08,
        &&label_8083EE0C,
        &&label_8083EE10,
        &&label_8083EE14,
        &&label_8083EE18,
        &&label_8083EE1C,
        &&label_8083EE20,
        &&label_8083EE24,
        &&label_8083EE28,
        &&label_8083EE2C,
        &&label_8083EE30,
        &&label_8083EE34,
        &&label_8083EE38,
        &&label_8083EE3C,
        &&label_8083EE40,
        &&label_8083EE44,
        &&label_8083EE48,
        &&label_8083EE4C,
        &&label_8083EE50,
        &&label_8083EE54,
        &&label_8083EE58,
        &&label_8083EE5C,
        &&label_8083EE60,
        &&label_8083EE64,
        &&label_8083EE68,
        &&label_8083EE6C,
        &&label_8083EE70,
        &&label_8083EE74,
        &&label_8083EE78,
        &&label_8083EE7C,
        &&label_8083EE80,
        &&label_8083EE84,
        &&label_8083EE88,
        &&label_8083EE8C,
        &&label_8083EE90,
        &&label_8083EE94,
        &&label_8083EE98,
        &&label_8083EE9C,
        &&label_8083EEA0,
        &&label_8083EEA4,
        &&label_8083EEA8,
        &&label_8083EEAC,
        &&label_8083EEB0,
        &&label_8083EEB4,
        &&label_8083EEB8,
        &&label_8083EEBC,
        &&label_8083EEC0,
        &&label_8083EEC4,
        &&label_8083EEC8,
        &&label_8083EECC,
        &&label_8083EED0,
        &&label_8083EED4,
        &&label_8083EED8,
        &&label_8083EEDC,
        &&label_8083EEE0,
        &&label_8083EEE4,
        &&label_8083EEE8,
        &&label_8083EEEC,
        &&label_8083EEF0,
        &&label_8083EEF4,
        &&label_8083EEF8,
        &&label_8083EEFC,
        &&label_8083EF00,
        &&label_8083EF04,
        &&label_8083EF08,
        &&label_8083EF0C,
        &&label_8083EF10,
        &&label_8083EF14,
        &&label_8083EF18,
        &&label_8083EF1C,
        &&label_8083EF20,
        &&label_8083EF24,
        &&label_8083EF28,
        &&label_8083EF2C,
        &&label_8083EF30,
        &&label_8083EF34,
        &&label_8083EF38,
        &&label_8083EF3C,
        &&label_8083EF40,
        &&label_8083EF44,
        &&label_8083EF48,
        &&label_8083EF4C,
        &&label_8083EF50,
        &&label_8083EF54,
        &&label_8083EF58,
        &&label_8083EF5C,
        &&label_8083EF60,
        &&label_8083EF64,
        &&label_8083EF68,
        &&label_8083EF6C,
        &&label_8083EF70,
        &&label_8083EF74,
        &&label_8083EF78,
        &&label_8083EF7C,
        &&label_8083EF80,
        &&label_8083EF84,
        &&label_8083EF88,
        &&label_8083EF8C,
        &&label_8083EF90,
        &&label_8083EF94,
        &&label_8083EF98,
        &&label_8083EF9C,
        &&label_8083EFA0,
        &&label_8083EFA4,
        &&label_8083EFA8,
        &&label_8083EFAC,
        &&label_8083EFB0,
        &&label_8083EFB4,
        &&label_8083EFB8,
        &&label_8083EFBC,
        &&label_8083EFC0,
        &&label_8083EFC4,
        &&label_8083EFC8,
        &&label_8083EFCC,
        &&label_8083EFD0,
        &&label_8083EFD4,
        &&label_8083EFD8,
        &&label_8083EFDC,
        &&label_8083EFE0,
        &&label_8083EFE4,
        &&label_8083EFE8,
        &&label_8083EFEC,
        &&label_8083EFF0,
        &&label_8083EFF4,
        &&label_8083EFF8,
        &&label_8083EFFC,
        &&label_8083F000,
        &&label_8083F004,
        &&label_8083F008,
        &&label_8083F00C,
        &&label_8083F010,
        &&label_8083F014,
        &&label_8083F018,
        &&label_8083F01C,
        &&label_8083F020,
        &&label_8083F024,
        &&label_8083F028,
        &&label_8083F02C,
        &&label_8083F030,
        &&label_8083F034,
        &&label_8083F038,
        &&label_8083F03C,
        &&label_8083F040,
        &&label_8083F044,
        &&label_8083F048,
        &&label_8083F04C,
        &&label_8083F050,
        &&label_8083F054,
        &&label_8083F058,
        &&label_8083F05C,
        &&label_8083F060,
        &&label_8083F064,
        &&label_8083F068,
        &&label_8083F06C,
        &&label_8083F070,
        &&label_8083F074,
        &&label_8083F078,
        &&label_8083F07C,
        &&label_8083F080,
        &&label_8083F084,
        &&label_8083F088,
        &&label_8083F08C,
        &&label_8083F090,
        &&label_8083F094,
        &&label_8083F098,
        &&label_8083F09C,
        &&label_8083F0A0,
        &&label_8083F0A4,
        &&label_8083F0A8,
        &&label_8083F0AC,
        &&label_8083F0B0,
        &&label_8083F0B4,
        &&label_8083F0B8,
        &&label_8083F0BC,
        &&label_8083F0C0,
        &&label_8083F0C4,
        &&label_8083F0C8,
        &&label_8083F0CC,
        &&label_8083F0D0,
        &&label_8083F0D4,
        &&label_8083F0D8,
        &&label_8083F0DC,
        &&label_8083F0E0,
        &&label_8083F0E4,
        &&label_8083F0E8,
        &&label_8083F0EC,
        &&label_8083F0F0,
        &&label_8083F0F4,
        &&label_8083F0F8,
        &&label_8083F0FC,
        &&label_8083F100,
        &&label_8083F104,
        &&label_8083F108,
        &&label_8083F10C,
        &&label_8083F110,
        &&label_8083F114,
        &&label_8083F118,
        &&label_8083F11C,
        &&label_8083F120,
        &&label_8083F124,
        &&label_8083F128,
        &&label_8083F12C,
        &&label_8083F130,
        &&label_8083F134,
        &&label_8083F138,
        &&label_8083F13C,
        &&label_8083F140,
        &&label_8083F144,
        &&label_8083F148,
        &&label_8083F14C,
        &&label_8083F150,
        &&label_8083F154,
        &&label_8083F158,
        &&label_8083F15C,
        &&label_8083F160,
        &&label_8083F164,
        &&label_8083F168,
        &&label_8083F16C,
        &&label_8083F170,
        &&label_8083F174,
        &&label_8083F178,
        &&label_8083F17C,
        &&label_8083F180,
        &&label_8083F184,
        &&label_8083F188,
        &&label_8083F18C,
        &&label_8083F190,
        &&label_8083F194,
        &&label_8083F198,
        &&label_8083F19C,
        &&label_8083F1A0,
        &&label_8083F1A4,
        &&label_8083F1A8,
        &&label_8083F1AC,
        &&label_8083F1B0,
        &&label_8083F1B4,
        &&label_8083F1B8,
        &&label_8083F1BC,
        &&label_8083F1C0,
        &&label_8083F1C4,
        &&label_8083F1C8,
        &&label_8083F1CC,
        &&label_8083F1D0,
        &&label_8083F1D4,
        &&label_8083F1D8,
        &&label_8083F1DC,
        &&label_8083F1E0,
        &&label_8083F1E4,
        &&label_8083F1E8,
        &&label_8083F1EC,
        &&label_8083F1F0,
        &&label_8083F1F4,
        &&label_8083F1F8,
        &&label_8083F1FC,
        &&label_8083F200,
        &&label_8083F204,
        &&label_8083F208,
        &&label_8083F20C,
        &&label_8083F210,
        &&label_8083F214,
        &&label_8083F218,
        &&label_8083F21C,
        &&label_8083F220,
        &&label_8083F224,
        &&label_8083F228,
        &&label_8083F22C,
        &&label_8083F230,
        &&label_8083F234,
        &&label_8083F238,
        &&label_8083F23C,
        &&label_8083F240,
        &&label_8083F244,
        &&label_8083F248,
        &&label_8083F24C,
        &&label_8083F250,
        &&label_8083F254,
        &&label_8083F258,
        &&label_8083F25C,
        &&label_8083F260,
        &&label_8083F264,
        &&label_8083F268,
        &&label_8083F26C,
        &&label_8083F270,
        &&label_8083F274,
        &&label_8083F278,
        &&label_8083F27C,
        &&label_8083F280,
        &&label_8083F284,
        &&label_8083F288,
        &&label_8083F28C,
        &&label_8083F290,
        &&label_8083F294,
        &&label_8083F298,
        &&label_8083F29C,
        &&label_8083F2A0,
        &&label_8083F2A4,
        &&label_8083F2A8,
        &&label_8083F2AC,
        &&label_8083F2B0,
        &&label_8083F2B4,
        &&label_8083F2B8,
        &&label_8083F2BC,
        &&label_8083F2C0,
        &&label_8083F2C4,
        &&label_8083F2C8,
        &&label_8083F2CC,
        &&label_8083F2D0,
        &&label_8083F2D4,
        &&label_8083F2D8,
        &&label_8083F2DC,
        &&label_8083F2E0,
        &&label_8083F2E4,
        &&label_8083F2E8,
        &&label_8083F2EC,
        &&label_8083F2F0,
        &&label_8083F2F4,
        &&label_8083F2F8,
        &&label_8083F2FC,
        &&label_8083F300,
        &&label_8083F304,
        &&label_8083F308,
        &&label_8083F30C,
        &&label_8083F310,
        &&label_8083F314,
        &&label_8083F318,
        &&label_8083F31C,
        &&label_8083F320,
        &&label_8083F324,
        &&label_8083F328,
        &&label_8083F32C,
        &&label_8083F330,
        &&label_8083F334,
        &&label_8083F338,
        &&label_8083F33C,
        &&label_8083F340,
        &&label_8083F344,
        &&label_8083F348,
        &&label_8083F34C,
        &&label_8083F350,
        &&label_8083F354,
        &&label_8083F358,
        &&label_8083F35C,
        &&label_8083F360,
        &&label_8083F364,
        &&label_8083F368,
        &&label_8083F36C,
        &&label_8083F370,
        &&label_8083F374,
        &&label_8083F378,
        &&label_8083F37C,
        &&label_8083F380,
        &&label_8083F384,
        &&label_8083F388,
        &&label_8083F38C,
        &&label_8083F390,
        &&label_8083F394,
        &&label_8083F398,
        &&label_8083F39C,
        &&label_8083F3A0,
        &&label_8083F3A4,
        &&label_8083F3A8,
        &&label_8083F3AC,
        &&label_8083F3B0,
        &&label_8083F3B4,
        &&label_8083F3B8,
        &&label_8083F3BC,
        &&label_8083F3C0,
        &&label_8083F3C4,
        &&label_8083F3C8,
        &&label_8083F3CC,
        &&label_8083F3D0,
        &&label_8083F3D4,
        &&label_8083F3D8,
        &&label_8083F3DC,
        &&label_8083F3E0,
        &&label_8083F3E4,
        &&label_8083F3E8,
        &&label_8083F3EC,
        &&label_8083F3F0,
        &&label_8083F3F4,
        &&label_8083F3F8,
        &&label_8083F3FC,
        &&label_8083F400,
        &&label_8083F404,
        &&label_8083F408,
        &&label_8083F40C,
        &&label_8083F410,
        &&label_8083F414,
        &&label_8083F418,
        &&label_8083F41C,
        &&label_8083F420,
        &&label_8083F424,
        &&label_8083F428,
        &&label_8083F42C,
        &&label_8083F430,
        &&label_8083F434,
        &&label_8083F438,
        &&label_8083F43C,
        &&label_8083F440,
        &&label_8083F444,
        &&label_8083F448,
        &&label_8083F44C,
        &&label_8083F450,
        &&label_8083F454,
        &&label_8083F458,
        &&label_8083F45C,
        &&label_8083F460,
        &&label_8083F464,
        &&label_8083F468,
        &&label_8083F46C,
        &&label_8083F470,
        &&label_8083F474,
        &&label_8083F478,
        &&label_8083F47C,
        &&label_8083F480,
        &&label_8083F484,
        &&label_8083F488,
        &&label_8083F48C,
        &&label_8083F490,
        &&label_8083F494,
        &&label_8083F498,
        &&label_8083F49C,
        &&label_8083F4A0,
        &&label_8083F4A4,
        &&label_8083F4A8,
        &&label_8083F4AC,
        &&label_8083F4B0,
        &&label_8083F4B4,
        &&label_8083F4B8,
        &&label_8083F4BC,
        &&label_8083F4C0,
        &&label_8083F4C4,
        &&label_8083F4C8,
        &&label_8083F4CC,
        &&label_8083F4D0,
        &&label_8083F4D4,
        &&label_8083F4D8,
        &&label_8083F4DC,
        &&label_8083F4E0,
        &&label_8083F4E4,
        &&label_8083F4E8,
        &&label_8083F4EC,
        &&label_8083F4F0,
        &&label_8083F4F4,
        &&label_8083F4F8,
        &&label_8083F4FC,
        &&label_8083F500,
        &&label_8083F504,
        &&label_8083F508,
        &&label_8083F50C,
        &&label_8083F510,
        &&label_8083F514,
        &&label_8083F518,
        &&label_8083F51C,
        &&label_8083F520,
        &&label_8083F524,
        &&label_8083F528,
        &&label_8083F52C,
        &&label_8083F530,
        &&label_8083F534,
        &&label_8083F538,
        &&label_8083F53C,
        &&label_8083F540,
        &&label_8083F544,
        &&label_8083F548,
        &&label_8083F54C,
        &&label_8083F550,
        &&label_8083F554,
        &&label_8083F558,
        &&label_8083F55C,
        &&label_8083F560,
        &&label_8083F564,
        &&label_8083F568,
        &&label_8083F56C,
        &&label_8083F570,
        &&label_8083F574,
        &&label_8083F578,
        &&label_8083F57C,
        &&label_8083F580,
        &&label_8083F584,
        &&label_8083F588,
        &&label_8083F58C,
        &&label_8083F590,
        &&label_8083F594,
        &&label_8083F598,
        &&label_8083F59C,
        &&label_8083F5A0,
        &&label_8083F5A4,
        &&label_8083F5A8,
        &&label_8083F5AC,
        &&label_8083F5B0,
        &&label_8083F5B4,
        &&label_8083F5B8,
        &&label_8083F5BC,
        &&label_8083F5C0,
        &&label_8083F5C4,
        &&label_8083F5C8,
        &&label_8083F5CC,
        &&label_8083F5D0,
        &&label_8083F5D4,
        &&label_8083F5D8,
        &&label_8083F5DC,
        &&label_8083F5E0,
        &&label_8083F5E4,
        &&label_8083F5E8,
        &&label_8083F5EC,
        &&label_8083F5F0,
        &&label_8083F5F4,
        &&label_8083F5F8,
        &&label_8083F5FC,
        &&label_8083F600,
        &&label_8083F604,
        &&label_8083F608,
        &&label_8083F60C,
        &&label_8083F610,
        &&label_8083F614,
        &&label_8083F618,
        &&label_8083F61C,
        &&label_8083F620,
        &&label_8083F624,
        &&label_8083F628,
        &&label_8083F62C,
        &&label_8083F630,
        &&label_8083F634,
        &&label_8083F638,
        &&label_8083F63C,
        &&label_8083F640,
        &&label_8083F644,
        &&label_8083F648,
        &&label_8083F64C,
        &&label_8083F650,
        &&label_8083F654,
        &&label_8083F658,
        &&label_8083F65C,
        &&label_8083F660,
        &&label_8083F664,
        &&label_8083F668,
        &&label_8083F66C,
        &&label_8083F670,
        &&label_8083F674,
        &&label_8083F678,
        &&label_8083F67C,
        &&label_8083F680,
        &&label_8083F684,
        &&label_8083F688,
        &&label_8083F68C,
        &&label_8083F690,
        &&label_8083F694,
        &&label_8083F698,
        &&label_8083F69C,
        &&label_8083F6A0,
        &&label_8083F6A4,
        &&label_8083F6A8,
        &&label_8083F6AC,
        &&label_8083F6B0,
        &&label_8083F6B4,
        &&label_8083F6B8,
        &&label_8083F6BC,
        &&label_8083F6C0,
        &&label_8083F6C4,
        &&label_8083F6C8,
        &&label_8083F6CC,
        &&label_8083F6D0,
        &&label_8083F6D4,
        &&label_8083F6D8,
        &&label_8083F6DC,
        &&label_8083F6E0,
        &&label_8083F6E4,
        &&label_8083F6E8,
        &&label_8083F6EC,
        &&label_8083F6F0,
        &&label_8083F6F4,
        &&label_8083F6F8,
        &&label_8083F6FC,
        &&label_8083F700,
        &&label_8083F704,
        &&label_8083F708,
        &&label_8083F70C,
        &&label_8083F710,
        &&label_8083F714,
        &&label_8083F718,
        &&label_8083F71C,
        &&label_8083F720,
        &&label_8083F724,
        &&label_8083F728,
        &&label_8083F72C,
        &&label_8083F730,
        &&label_8083F734,
        &&label_8083F738,
        &&label_8083F73C,
        &&label_8083F740,
        &&label_8083F744,
        &&label_8083F748,
        &&label_8083F74C,
        &&label_8083F750,
        &&label_8083F754,
        &&label_8083F758,
        &&label_8083F75C,
        &&label_8083F760,
        &&label_8083F764,
        &&label_8083F768,
        &&label_8083F76C,
        &&label_8083F770,
        &&label_8083F774,
        &&label_8083F778,
        &&label_8083F77C,
        &&label_8083F780,
        &&label_8083F784,
        &&label_8083F788,
        &&label_8083F78C,
        &&label_8083F790,
        &&label_8083F794,
        &&label_8083F798,
        &&label_8083F79C,
        &&label_8083F7A0,
        &&label_8083F7A4,
        &&label_8083F7A8,
        &&label_8083F7AC,
        &&label_8083F7B0,
        &&label_8083F7B4,
        &&label_8083F7B8,
        &&label_8083F7BC,
        &&label_8083F7C0,
        &&label_8083F7C4,
        &&label_8083F7C8,
        &&label_8083F7CC,
        &&label_8083F7D0,
        &&label_8083F7D4,
        &&label_8083F7D8,
        &&label_8083F7DC,
        &&label_8083F7E0,
        &&label_8083F7E4,
        &&label_8083F7E8,
        &&label_8083F7EC,
        &&label_8083F7F0,
        &&label_8083F7F4,
        &&label_8083F7F8,
        &&label_8083F7FC,
        &&label_8083F800,
        &&label_8083F804,
        &&label_8083F808,
        &&label_8083F80C,
        &&label_8083F810,
        &&label_8083F814,
        &&label_8083F818,
        &&label_8083F81C,
        &&label_8083F820,
        &&label_8083F824,
        &&label_8083F828,
        &&label_8083F82C,
        &&label_8083F830,
        &&label_8083F834,
        &&label_8083F838,
        &&label_8083F83C,
        &&label_8083F840,
        &&label_8083F844,
        &&label_8083F848,
        &&label_8083F84C,
        &&label_8083F850,
        &&label_8083F854,
        &&label_8083F858,
        &&label_8083F85C,
        &&label_8083F860,
        &&label_8083F864,
        &&label_8083F868,
        &&label_8083F86C,
        &&label_8083F870,
        &&label_8083F874,
        &&label_8083F878,
        &&label_8083F87C,
        &&label_8083F880,
        &&label_8083F884,
        &&label_8083F888,
        &&label_8083F88C,
        &&label_8083F890,
        &&label_8083F894,
        &&label_8083F898,
        &&label_8083F89C,
        &&label_8083F8A0,
        &&label_8083F8A4,
        &&label_8083F8A8,
        &&label_8083F8AC,
        &&label_8083F8B0,
        &&label_8083F8B4,
        &&label_8083F8B8,
        &&label_8083F8BC,
        &&label_8083F8C0,
        &&label_8083F8C4
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x8083E580u && pc <= 0x8083F8C4u && ((pc - 0x8083E580u) & 3u) == 0u)
            goto *pc_table_8083E580[(pc - 0x8083E580u) >> 2];
    }
    return;
label_8083E580:
    ctx->pc = 0x8083E580u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 14u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083E580u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 14u : 1u;
    // 8083E580: addi    r4, r3, -576
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-576);

label_8083E584:
    ctx->pc = 0x8083E584u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E584u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 8083E584: lfs     f3, -484(r5)
    if (!ppc_fp_available_inline(ctx, 0x8083E584u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-484);
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
label_8083E588:
    ctx->pc = 0x8083E588u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E588u)) return;
    // 8083E588: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x8083E588u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_8083E58C:
    ctx->pc = 0x8083E58Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E58Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 8083E58C: lfd     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x8083E58Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083E590:
    ctx->pc = 0x8083E590u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E590u)) return;
    // 8083E590: lis     r3, -28070
    ctx->gpr[3] = ((u32)(s32)(-28070) << 16);

label_8083E594:
    ctx->pc = 0x8083E594u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E594u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 8083E594: stfd     f0, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x8083E594u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083E598:
    ctx->pc = 0x8083E598u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E598u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8083E598: lfs     f0, -488(r3)
    if (!ppc_fp_available_inline(ctx, 0x8083E598u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-488);
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
label_8083E59C:
    ctx->pc = 0x8083E59Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E59Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8083E59C: lwz     r0, 84(r1)
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
label_8083E5A0:
    ctx->pc = 0x8083E5A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E5A0u)) return;
    // 8083E5A0: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_8083E5A4:
    ctx->pc = 0x8083E5A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E5A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8083E5A4: stw     r0, 92(r1)
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
label_8083E5A8:
    ctx->pc = 0x8083E5A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E5A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8083E5A8: lfd     f1, 88(r1)
    if (!ppc_fp_available_inline(ctx, 0x8083E5A8u)) return;
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
label_8083E5AC:
    ctx->pc = 0x8083E5ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E5ACu)) return;
    // 8083E5AC: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x8083E5ACu)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_8083E5B0:
    ctx->pc = 0x8083E5B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E5B0u)) return;
    // 8083E5B0: fmadds f31, f3, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x8083E5B0u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[3], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[31] = ctx->ps1[31] = result;
    }

label_8083E5B4:
    ctx->pc = 0x8083E5B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E5B4u)) return;
    // 8083E5B4: bl      0x80567E10
    {
            ctx->lr = 0x8083E5B8u;
            ctx->pc = 0x80567E10u;
            return;
    }

label_8083E5B8:
    ctx->pc = 0x8083E5B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083E5B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8083E5B8: fcmpo   cr0, f1, f31
    if (!ppc_fp_available_inline(ctx, 0x8083E5B8u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[31], true);

label_8083E5BC:
    ctx->pc = 0x8083E5BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E5BCu)) return;
    // 8083E5BC: bc    4, 1, 0x8083E5C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8083E5C4;
        }
    }

label_8083E5C0:
    ctx->pc = 0x8083E5C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083E5C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8083E5C0: li      r30, 1
    ctx->gpr[30] = (u32)(s32)(1);

label_8083E5C4:
    ctx->pc = 0x8083E5C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083E5C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    // 8083E5C4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8083E5C8:
    ctx->pc = 0x8083E5C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E5C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 8083E5C8: psq_l   f31, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x8083E5C8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x8083E5C8u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083E5CC:
    ctx->pc = 0x8083E5CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E5CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 8083E5CC: lwz     r0, 132(r1)
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
label_8083E5D0:
    ctx->pc = 0x8083E5D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E5D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8083E5D0: lfd     f31, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x8083E5D0u)) return;
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
label_8083E5D4:
    ctx->pc = 0x8083E5D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E5D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8083E5D4: lwz     r31, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083E5D8:
    ctx->pc = 0x8083E5D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E5D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8083E5D8: lwz     r30, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083E5DC:
    ctx->pc = 0x8083E5DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E5DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8083E5DC: lwz     r29, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083E5E0:
    ctx->pc = 0x8083E5E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x8083E5E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8083E5E0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083E5E4:
    ctx->pc = 0x8083E5E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E5E4u)) return;
    // 8083E5E4: addi    r1, r1, 128
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(128);

label_8083E5E8:
    ctx->pc = 0x8083E5E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E5E8u)) return;
    // 8083E5E8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8083E580;
        }
    }

label_8083E5EC:
    ctx->pc = 0x8083E5ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083E5ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 8083E5EC: lwz     r5, 32(r3)
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
label_8083E5F0:
    ctx->pc = 0x8083E5F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E5F0u)) return;
    // 8083E5F0: lis     r4, 1
    ctx->gpr[4] = ((u32)(s32)(1) << 16);

label_8083E5F4:
    ctx->pc = 0x8083E5F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E5F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8083E5F4: lwz     r3, 36(r3)
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
label_8083E5F8:
    ctx->pc = 0x8083E5F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E5F8u)) return;
    // 8083E5F8: addi    r0, r4, -32768
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-32768);

label_8083E5FC:
    ctx->pc = 0x8083E5FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E5FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8083E5FC: lwz     r4, 24(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(24);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083E600:
    ctx->pc = 0x8083E600u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E600u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8083E600: lwz     r3, 32(r3)
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
label_8083E604:
    ctx->pc = 0x8083E604u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E604u)) return;
    // 8083E604: subf   r3, r3, r4
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_8083E608:
    ctx->pc = 0x8083E608u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E608u)) return;
    // 8083E608: rlwinm r3, r3, 0, 16, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x0000FFFFu;
    }

label_8083E60C:
    ctx->pc = 0x8083E60Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E60Cu)) return;
    // 8083E60C: cmpw    r3, r0
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

label_8083E610:
    ctx->pc = 0x8083E610u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E610u)) return;
    // 8083E610: bc    4, 1, 0x8083E620
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8083E620;
        }
    }

label_8083E614:
    ctx->pc = 0x8083E614u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083E614u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8083E614: addi    r0, r4, 256
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(256);

label_8083E618:
    ctx->pc = 0x8083E618u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E618u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8083E618: stw     r0, 24(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083E61C:
    ctx->pc = 0x8083E61Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E61Cu)) return;
    // 8083E61C: b       0x8083E628
    {
            goto label_8083E628;
    }

label_8083E620:
    ctx->pc = 0x8083E620u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083E620u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8083E620: addi    r0, r4, -256
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-256);

label_8083E624:
    ctx->pc = 0x8083E624u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E624u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 8083E624: stw     r0, 24(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083E628:
    ctx->pc = 0x8083E628u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083E628u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8083E628: lwz     r0, 24(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083E62C:
    ctx->pc = 0x8083E62Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E62Cu)) return;
    // 8083E62C: rlwinm r0, r0, 0, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_8083E630:
    ctx->pc = 0x8083E630u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E630u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8083E630: stw     r0, 24(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083E634:
    ctx->pc = 0x8083E634u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E634u)) return;
    // 8083E634: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8083E580;
        }
    }

label_8083E638:
    ctx->pc = 0x8083E638u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083E638u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 8083E638: stwu     r1, -64(r1)
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
label_8083E63C:
    ctx->pc = 0x8083E63Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E63Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 8083E63C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083E640:
    ctx->pc = 0x8083E640u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E640u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 8083E640: stw     r0, 68(r1)
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
label_8083E644:
    ctx->pc = 0x8083E644u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E644u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 8083E644: stfd     f31, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x8083E644u)) return;
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
label_8083E648:
    ctx->pc = 0x8083E648u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E648u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 8083E648: psq_st   f31, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x8083E648u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x8083E648u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083E64C:
    ctx->pc = 0x8083E64Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E64Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 8083E64C: stw     r31, 44(r1)
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
label_8083E650:
    ctx->pc = 0x8083E650u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E650u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 8083E650: stw     r30, 40(r1)
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
label_8083E654:
    ctx->pc = 0x8083E654u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E654u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 8083E654: stw     r29, 36(r1)
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
label_8083E658:
    ctx->pc = 0x8083E658u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E658u)) return;
    // 8083E658: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8083E65C:
    ctx->pc = 0x8083E65Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E65Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8083E65C: lwz     r31, 32(r3)
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
label_8083E660:
    ctx->pc = 0x8083E660u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E660u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8083E660: lwz     r30, 36(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083E664:
    ctx->pc = 0x8083E664u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E664u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8083E664: lha     r3, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083E668:
    ctx->pc = 0x8083E668u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E668u)) return;
    // 8083E668: addi    r3, r3, -1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1);

label_8083E66C:
    ctx->pc = 0x8083E66Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E66Cu)) return;
    // 8083E66C: extsh. r0, r3
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

label_8083E670:
    ctx->pc = 0x8083E670u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E670u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8083E670: sth     r3, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083E674:
    ctx->pc = 0x8083E674u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E674u)) return;
    // 8083E674: bc    12, 1, 0x8083E8F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8083E8F8;
        }
    }

label_8083E678:
    ctx->pc = 0x8083E678u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083E678u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8083E678: li      r0, 6
    ctx->gpr[0] = (u32)(s32)(6);

label_8083E67C:
    ctx->pc = 0x8083E67Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E67Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8083E67C: stb     r0, 0(r31)
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
label_8083E680:
    ctx->pc = 0x8083E680u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E680u)) return;
    // 8083E680: bl      0x8000DD2C
    {
            ctx->lr = 0x8083E684u;
            ctx->pc = 0x8000DD2Cu;
            return;
    }

label_8083E684:
    ctx->pc = 0x8083E684u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 29u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083E684u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 29u : 1u;
    // 8083E684: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_8083E688:
    ctx->pc = 0x8083E688u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E688u)) return;
    // 8083E688: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_8083E68C:
    ctx->pc = 0x8083E68Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E68Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 8083E68C: stw     r3, 12(r1)
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
label_8083E690:
    ctx->pc = 0x8083E690u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E690u)) return;
    // 8083E690: lis     r4, -28070
    ctx->gpr[4] = ((u32)(s32)(-28070) << 16);

label_8083E694:
    ctx->pc = 0x8083E694u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E694u)) return;
    // 8083E694: lis     r3, -28070
    ctx->gpr[3] = ((u32)(s32)(-28070) << 16);

label_8083E698:
    ctx->pc = 0x8083E698u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E698u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 8083E698: lfd     f2, -576(r4)
    if (!ppc_fp_available_inline(ctx, 0x8083E698u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-576);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083E69C:
    ctx->pc = 0x8083E69Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E69Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 8083E69C: stw     r0, 8(r1)
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
label_8083E6A0:
    ctx->pc = 0x8083E6A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E6A0u)) return;
    // 8083E6A0: addi    r5, r3, -588
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-588);

label_8083E6A4:
    ctx->pc = 0x8083E6A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E6A4u)) return;
    // 8083E6A4: lis     r3, -28070
    ctx->gpr[3] = ((u32)(s32)(-28070) << 16);

label_8083E6A8:
    ctx->pc = 0x8083E6A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E6A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 8083E6A8: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x8083E6A8u)) return;
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
label_8083E6AC:
    ctx->pc = 0x8083E6ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E6ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 8083E6AC: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x8083E6ACu)) return;
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
label_8083E6B0:
    ctx->pc = 0x8083E6B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E6B0u)) return;
    // 8083E6B0: addi    r4, r3, -480
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-480);

label_8083E6B4:
    ctx->pc = 0x8083E6B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E6B4u)) return;
    // 8083E6B4: lis     r3, -28619
    ctx->gpr[3] = ((u32)(s32)(-28619) << 16);

label_8083E6B8:
    ctx->pc = 0x8083E6B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E6B8u)) return;
    // 8083E6B8: fsubs   f2, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x8083E6B8u)) return;
    ppc_fsubs(ctx, 2, 0, 2);

label_8083E6BC:
    ctx->pc = 0x8083E6BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E6BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 8083E6BC: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x8083E6BCu)) return;
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
label_8083E6C0:
    ctx->pc = 0x8083E6C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E6C0u)) return;
    // 8083E6C0: addi    r3, r3, 20228
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(20228);

label_8083E6C4:
    ctx->pc = 0x8083E6C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E6C4u)) return;
    // 8083E6C4: fmuls   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x8083E6C4u)) return;
    ppc_fmuls(ctx, 1, 1, 2);

label_8083E6C8:
    ctx->pc = 0x8083E6C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E6C8u)) return;
    // 8083E6C8: fmadds f0, f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x8083E6C8u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[0], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_8083E6CC:
    ctx->pc = 0x8083E6CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E6CCu)) return;
    // 8083E6CC: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x8083E6CCu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_8083E6D0:
    ctx->pc = 0x8083E6D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E6D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 8083E6D0: stfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x8083E6D0u)) return;
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
label_8083E6D4:
    ctx->pc = 0x8083E6D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E6D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 8083E6D4: lwz     r0, 20(r1)
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
label_8083E6D8:
    ctx->pc = 0x8083E6D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E6D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8083E6D8: sth     r0, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083E6DC:
    ctx->pc = 0x8083E6DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E6DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8083E6DC: lwz     r3, 0(r3)
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
label_8083E6E0:
    ctx->pc = 0x8083E6E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E6E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8083E6E0: lwz     r3, 36(r3)
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
label_8083E6E4:
    ctx->pc = 0x8083E6E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E6E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8083E6E4: lwz     r3, 32(r3)
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
label_8083E6E8:
    ctx->pc = 0x8083E6E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E6E8u)) return;
    // 8083E6E8: addis   r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + ((u32)(s32)(1) << 16);

label_8083E6EC:
    ctx->pc = 0x8083E6ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E6ECu)) return;
    // 8083E6EC: addi    r0, r3, -32768
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-32768);

label_8083E6F0:
    ctx->pc = 0x8083E6F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E6F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8083E6F0: stw     r0, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083E6F4:
    ctx->pc = 0x8083E6F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E6F4u)) return;
    // 8083E6F4: bl      0x8000DD2C
    {
            ctx->lr = 0x8083E6F8u;
            ctx->pc = 0x8000DD2Cu;
            return;
    }

label_8083E6F8:
    ctx->pc = 0x8083E6F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 17u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083E6F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 17u : 1u;
    // 8083E6F8: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_8083E6FC:
    ctx->pc = 0x8083E6FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E6FCu)) return;
    // 8083E6FC: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_8083E700:
    ctx->pc = 0x8083E700u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E700u)) return;
    // 8083E700: lis     r4, -28070
    ctx->gpr[4] = ((u32)(s32)(-28070) << 16);

label_8083E704:
    ctx->pc = 0x8083E704u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E704u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 8083E704: stw     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083E708:
    ctx->pc = 0x8083E708u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E708u)) return;
    // 8083E708: addi    r5, r4, -576
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-576);

label_8083E70C:
    ctx->pc = 0x8083E70Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E70Cu)) return;
    // 8083E70C: lis     r3, -28070
    ctx->gpr[3] = ((u32)(s32)(-28070) << 16);

label_8083E710:
    ctx->pc = 0x8083E710u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E710u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 8083E710: stw     r0, 24(r1)
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
label_8083E714:
    ctx->pc = 0x8083E714u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E714u)) return;
    // 8083E714: addi    r4, r3, -588
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-588);

label_8083E718:
    ctx->pc = 0x8083E718u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E718u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 8083E718: lfd     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x8083E718u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083E71C:
    ctx->pc = 0x8083E71Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E71Cu)) return;
    // 8083E71C: lis     r3, -28070
    ctx->gpr[3] = ((u32)(s32)(-28070) << 16);

label_8083E720:
    ctx->pc = 0x8083E720u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E720u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8083E720: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x8083E720u)) return;
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
label_8083E724:
    ctx->pc = 0x8083E724u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E724u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8083E724: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x8083E724u)) return;
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
label_8083E728:
    ctx->pc = 0x8083E728u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E728u)) return;
    // 8083E728: fsubs   f2, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x8083E728u)) return;
    ppc_fsubs(ctx, 2, 0, 2);

label_8083E72C:
    ctx->pc = 0x8083E72Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E72Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8083E72C: lfs     f0, -560(r3)
    if (!ppc_fp_available_inline(ctx, 0x8083E72Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-560);
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
label_8083E730:
    ctx->pc = 0x8083E730u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E730u)) return;
    // 8083E730: fmuls   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x8083E730u)) return;
    ppc_fmuls(ctx, 1, 1, 2);

label_8083E734:
    ctx->pc = 0x8083E734u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E734u)) return;
    // 8083E734: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x8083E734u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_8083E738:
    ctx->pc = 0x8083E738u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E738u)) return;
    // 8083E738: bc    4, 0, 0x8083E74C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8083E74C;
        }
    }

label_8083E73C:
    ctx->pc = 0x8083E73Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083E73Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8083E73C: lwz     r3, 32(r30)
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
label_8083E740:
    ctx->pc = 0x8083E740u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E740u)) return;
    // 8083E740: addi    r0, r3, 12288
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(12288);

label_8083E744:
    ctx->pc = 0x8083E744u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E744u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8083E744: stw     r0, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083E748:
    ctx->pc = 0x8083E748u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E748u)) return;
    // 8083E748: b       0x8083E758
    {
            goto label_8083E758;
    }

label_8083E74C:
    ctx->pc = 0x8083E74Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083E74Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8083E74C: lwz     r3, 32(r30)
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
label_8083E750:
    ctx->pc = 0x8083E750u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E750u)) return;
    // 8083E750: addi    r0, r3, -12288
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-12288);

label_8083E754:
    ctx->pc = 0x8083E754u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E754u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 8083E754: stw     r0, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083E758:
    ctx->pc = 0x8083E758u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083E758u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8083E758: lwz     r0, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083E75C:
    ctx->pc = 0x8083E75Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E75Cu)) return;
    // 8083E75C: lis     r3, -28619
    ctx->gpr[3] = ((u32)(s32)(-28619) << 16);

label_8083E760:
    ctx->pc = 0x8083E760u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E760u)) return;
    // 8083E760: rlwinm r0, r0, 0, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_8083E764:
    ctx->pc = 0x8083E764u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E764u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8083E764: stw     r0, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083E768:
    ctx->pc = 0x8083E768u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E768u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8083E768: lwz     r0, 20176(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20176);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083E76C:
    ctx->pc = 0x8083E76Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E76Cu)) return;
    // 8083E76C: cmpwi   r0, 900
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(900);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8083E770:
    ctx->pc = 0x8083E770u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E770u)) return;
    // 8083E770: bc    4, 0, 0x8083E780
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8083E780;
        }
    }

label_8083E774:
    ctx->pc = 0x8083E774u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083E774u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8083E774: lis     r3, -28070
    ctx->gpr[3] = ((u32)(s32)(-28070) << 16);

label_8083E778:
    ctx->pc = 0x8083E778u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E778u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8083E778: lfs     f31, -476(r3)
    if (!ppc_fp_available_inline(ctx, 0x8083E778u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-476);
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
label_8083E77C:
    ctx->pc = 0x8083E77Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E77Cu)) return;
    // 8083E77C: b       0x8083E798
    {
            goto label_8083E798;
    }

label_8083E780:
    ctx->pc = 0x8083E780u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083E780u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8083E780: bc    4, 0, 0x8083E790
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8083E790;
        }
    }

label_8083E784:
    ctx->pc = 0x8083E784u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083E784u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8083E784: lis     r3, -28070
    ctx->gpr[3] = ((u32)(s32)(-28070) << 16);

label_8083E788:
    ctx->pc = 0x8083E788u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E788u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8083E788: lfs     f31, -496(r3)
    if (!ppc_fp_available_inline(ctx, 0x8083E788u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-496);
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
label_8083E78C:
    ctx->pc = 0x8083E78Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E78Cu)) return;
    // 8083E78C: b       0x8083E798
    {
            goto label_8083E798;
    }

label_8083E790:
    ctx->pc = 0x8083E790u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083E790u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8083E790: lis     r3, -28070
    ctx->gpr[3] = ((u32)(s32)(-28070) << 16);

label_8083E794:
    ctx->pc = 0x8083E794u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E794u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 8083E794: lfs     f31, -580(r3)
    if (!ppc_fp_available_inline(ctx, 0x8083E794u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-580);
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
label_8083E798:
    ctx->pc = 0x8083E798u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 25u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083E798u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 25u : 1u;
    // 8083E798: lis     r4, -28070
    ctx->gpr[4] = ((u32)(s32)(-28070) << 16);

label_8083E79C:
    ctx->pc = 0x8083E79Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E79Cu)) return;
    // 8083E79C: lis     r3, -28070
    ctx->gpr[3] = ((u32)(s32)(-28070) << 16);

label_8083E7A0:
    ctx->pc = 0x8083E7A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E7A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 8083E7A0: lfs     f2, 60(r30)
    if (!ppc_fp_available_inline(ctx, 0x8083E7A0u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
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
label_8083E7A4:
    ctx->pc = 0x8083E7A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E7A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 8083E7A4: lfs     f1, -472(r4)
    if (!ppc_fp_available_inline(ctx, 0x8083E7A4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-472);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083E7A8:
    ctx->pc = 0x8083E7A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E7A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 8083E7A8: lfs     f0, -468(r3)
    if (!ppc_fp_available_inline(ctx, 0x8083E7A8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-468);
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
label_8083E7AC:
    ctx->pc = 0x8083E7ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E7ACu)) return;
    // 8083E7AC: fsubs   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x8083E7ACu)) return;
    ppc_fsubs(ctx, 1, 2, 1);

label_8083E7B0:
    ctx->pc = 0x8083E7B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 17u, 0x8083E7B0u)) return;
    // 8083E7B0: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x8083E7B0u)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_8083E7B4:
    ctx->pc = 0x8083E7B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E7B4u)) return;
    // 8083E7B4: fadds   f31, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x8083E7B4u)) return;
    ppc_fadds(ctx, 31, 31, 0);

label_8083E7B8:
    ctx->pc = 0x8083E7B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E7B8u)) return;
    // 8083E7B8: bl      0x8000DD2C
    {
            ctx->lr = 0x8083E7BCu;
            ctx->pc = 0x8000DD2Cu;
            return;
    }

label_8083E7BC:
    ctx->pc = 0x8083E7BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083E7BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 8083E7BC: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_8083E7C0:
    ctx->pc = 0x8083E7C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E7C0u)) return;
    // 8083E7C0: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_8083E7C4:
    ctx->pc = 0x8083E7C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E7C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 8083E7C4: stw     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083E7C8:
    ctx->pc = 0x8083E7C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E7C8u)) return;
    // 8083E7C8: lis     r4, -28070
    ctx->gpr[4] = ((u32)(s32)(-28070) << 16);

label_8083E7CC:
    ctx->pc = 0x8083E7CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E7CCu)) return;
    // 8083E7CC: lis     r3, -28070
    ctx->gpr[3] = ((u32)(s32)(-28070) << 16);

label_8083E7D0:
    ctx->pc = 0x8083E7D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E7D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8083E7D0: lfd     f2, -576(r4)
    if (!ppc_fp_available_inline(ctx, 0x8083E7D0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-576);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083E7D4:
    ctx->pc = 0x8083E7D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E7D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8083E7D4: stw     r0, 24(r1)
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
label_8083E7D8:
    ctx->pc = 0x8083E7D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E7D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8083E7D8: lfs     f0, -588(r3)
    if (!ppc_fp_available_inline(ctx, 0x8083E7D8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-588);
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
label_8083E7DC:
    ctx->pc = 0x8083E7DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E7DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8083E7DC: lfd     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x8083E7DCu)) return;
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
label_8083E7E0:
    ctx->pc = 0x8083E7E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E7E0u)) return;
    // 8083E7E0: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x8083E7E0u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_8083E7E4:
    ctx->pc = 0x8083E7E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E7E4u)) return;
    // 8083E7E4: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x8083E7E4u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_8083E7E8:
    ctx->pc = 0x8083E7E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E7E8u)) return;
    // 8083E7E8: fcmpo   cr0, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x8083E7E8u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[31], true);

label_8083E7EC:
    ctx->pc = 0x8083E7ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E7ECu)) return;
    // 8083E7EC: bc    4, 0, 0x8083E888
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8083E888;
        }
    }

label_8083E7F0:
    ctx->pc = 0x8083E7F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 34u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083E7F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 34u : 1u;
    // 8083E7F0: li      r0, 120
    ctx->gpr[0] = (u32)(s32)(120);

label_8083E7F4:
    ctx->pc = 0x8083E7F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E7F4u)) return;
    // 8083E7F4: lis     r3, -28619
    ctx->gpr[3] = ((u32)(s32)(-28619) << 16);

label_8083E7F8:
    ctx->pc = 0x8083E7F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E7F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 31u : 0u;
    // 8083E7F8: sth     r0, 6(r31)
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
label_8083E7FC:
    ctx->pc = 0x8083E7FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E7FCu)) return;
    // 8083E7FC: addi    r6, r3, 20196
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(20196);

label_8083E800:
    ctx->pc = 0x8083E800u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E800u)) return;
    // 8083E800: lis     r3, -28034
    ctx->gpr[3] = ((u32)(s32)(-28034) << 16);

label_8083E804:
    ctx->pc = 0x8083E804u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E804u)) return;
    // 8083E804: lis     r4, -28034
    ctx->gpr[4] = ((u32)(s32)(-28034) << 16);

label_8083E808:
    ctx->pc = 0x8083E808u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E808u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 8083E808: lhz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083E80C:
    ctx->pc = 0x8083E80Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E80Cu)) return;
    // 8083E80C: addi    r9, r3, -16468
    ctx->gpr[9] = ctx->gpr[3] + (u32)(s32)(-16468);

label_8083E810:
    ctx->pc = 0x8083E810u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E810u)) return;
    // 8083E810: addi    r10, r4, -16340
    ctx->gpr[10] = ctx->gpr[4] + (u32)(s32)(-16340);

label_8083E814:
    ctx->pc = 0x8083E814u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E814u)) return;
    // 8083E814: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_8083E818:
    ctx->pc = 0x8083E818u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E818u)) return;
    // 8083E818: ori     r3, r5, 0x0008
    ctx->gpr[3] = ctx->gpr[5] | 0x0008u;

label_8083E81C:
    ctx->pc = 0x8083E81Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E81Cu)) return;
    // 8083E81C: or   r8, r31, r31
    {
        ctx->gpr[8] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8083E820:
    ctx->pc = 0x8083E820u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E820u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 8083E820: sth     r3, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083E824:
    ctx->pc = 0x8083E824u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E824u)) return;
    // 8083E824: li      r3, 846
    ctx->gpr[3] = (u32)(s32)(846);

label_8083E828:
    ctx->pc = 0x8083E828u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E828u)) return;
    // 8083E828: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8083E82C:
    ctx->pc = 0x8083E82Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E82Cu)) return;
    // 8083E82C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_8083E830:
    ctx->pc = 0x8083E830u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E830u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 8083E830: lwz     r12, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083E834:
    ctx->pc = 0x8083E834u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E834u)) return;
    // 8083E834: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_8083E838:
    ctx->pc = 0x8083E838u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E838u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 8083E838: lwz     r29, 44(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(44);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083E83C:
    ctx->pc = 0x8083E83Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E83Cu)) return;
    // 8083E83C: li      r7, 120
    ctx->gpr[7] = (u32)(s32)(120);

label_8083E840:
    ctx->pc = 0x8083E840u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E840u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 8083E840: stb     r0, 3(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083E844:
    ctx->pc = 0x8083E844u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E844u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 8083E844: lha     r0, 18(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(18);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083E848:
    ctx->pc = 0x8083E848u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E848u)) return;
    // 8083E848: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_8083E84C:
    ctx->pc = 0x8083E84Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E84Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 8083E84C: lwzx    r11, r10, r0
    {
        u32 ea = ctx->gpr[10] + ctx->gpr[0];
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083E850:
    ctx->pc = 0x8083E850u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E850u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 8083E850: lwz     r10, 0(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(0);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083E854:
    ctx->pc = 0x8083E854u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E854u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 8083E854: lwz     r0, 4(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083E858:
    ctx->pc = 0x8083E858u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E858u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8083E858: stw     r10, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083E85C:
    ctx->pc = 0x8083E85Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E85Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8083E85C: stw     r0, 4(r29)
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
label_8083E860:
    ctx->pc = 0x8083E860u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E860u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8083E860: lha     r0, 18(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(18);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083E864:
    ctx->pc = 0x8083E864u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E864u)) return;
    // 8083E864: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_8083E868:
    ctx->pc = 0x8083E868u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E868u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8083E868: lwzx    r0, r9, r0
    {
        u32 ea = ctx->gpr[9] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083E86C:
    ctx->pc = 0x8083E86Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E86Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8083E86C: stw     r0, 0(r29)
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
label_8083E870:
    ctx->pc = 0x8083E870u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E870u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8083E870: stw     r29, 8(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083E874:
    ctx->pc = 0x8083E874u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E874u)) return;
    // 8083E874: bl      0x80506FAC
    {
            ctx->lr = 0x8083E878u;
            ctx->pc = 0x80506FACu;
            return;
    }

label_8083E878:
    ctx->pc = 0x8083E878u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083E878u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8083E878: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8083E87C:
    ctx->pc = 0x8083E87Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E87Cu)) return;
    // 8083E87C: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_8083E880:
    ctx->pc = 0x8083E880u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E880u)) return;
    // 8083E880: bl      0x804C5AB4
    {
            ctx->lr = 0x8083E884u;
            ctx->pc = 0x804C5AB4u;
            return;
    }

label_8083E884:
    ctx->pc = 0x8083E884u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083E884u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8083E884: b       0x8083E8F8
    {
            goto label_8083E8F8;
    }

label_8083E888:
    ctx->pc = 0x8083E888u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083E888u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 8083E888: lis     r4, -28619
    ctx->gpr[4] = ((u32)(s32)(-28619) << 16);

label_8083E88C:
    ctx->pc = 0x8083E88Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E88Cu)) return;
    // 8083E88C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8083E890:
    ctx->pc = 0x8083E890u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E890u)) return;
    // 8083E890: addi    r5, r4, 20196
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(20196);

label_8083E894:
    ctx->pc = 0x8083E894u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E894u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8083E894: lhz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083E898:
    ctx->pc = 0x8083E898u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E898u)) return;
    // 8083E898: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_8083E89C:
    ctx->pc = 0x8083E89Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E89Cu)) return;
    // 8083E89C: rlwinm r0, r0, 0, 29, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFF7u;
    }

label_8083E8A0:
    ctx->pc = 0x8083E8A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E8A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8083E8A0: sth     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083E8A4:
    ctx->pc = 0x8083E8A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E8A4u)) return;
    // 8083E8A4: bl      0x804C5AB4
    {
            ctx->lr = 0x8083E8A8u;
            ctx->pc = 0x804C5AB4u;
            return;
    }

label_8083E8A8:
    ctx->pc = 0x8083E8A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 20u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083E8A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 20u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 8083E8A8: lwz     r6, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083E8AC:
    ctx->pc = 0x8083E8ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E8ACu)) return;
    // 8083E8AC: lis     r4, -28034
    ctx->gpr[4] = ((u32)(s32)(-28034) << 16);

label_8083E8B0:
    ctx->pc = 0x8083E8B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E8B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 8083E8B0: lwz     r7, 44(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(44);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083E8B4:
    ctx->pc = 0x8083E8B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E8B4u)) return;
    // 8083E8B4: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_8083E8B8:
    ctx->pc = 0x8083E8B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E8B8u)) return;
    // 8083E8B8: lis     r3, -28034
    ctx->gpr[3] = ((u32)(s32)(-28034) << 16);

label_8083E8BC:
    ctx->pc = 0x8083E8BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E8BCu)) return;
    // 8083E8BC: addi    r4, r4, -16340
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-16340);

label_8083E8C0:
    ctx->pc = 0x8083E8C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E8C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 8083E8C0: stb     r0, 3(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083E8C4:
    ctx->pc = 0x8083E8C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E8C4u)) return;
    // 8083E8C4: addi    r3, r3, -16468
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-16468);

label_8083E8C8:
    ctx->pc = 0x8083E8C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E8C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 8083E8C8: lha     r0, 18(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(18);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083E8CC:
    ctx->pc = 0x8083E8CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E8CCu)) return;
    // 8083E8CC: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_8083E8D0:
    ctx->pc = 0x8083E8D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E8D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 8083E8D0: lwzx    r5, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083E8D4:
    ctx->pc = 0x8083E8D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E8D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 8083E8D4: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083E8D8:
    ctx->pc = 0x8083E8D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E8D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8083E8D8: lwz     r0, 4(r5)
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
label_8083E8DC:
    ctx->pc = 0x8083E8DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E8DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8083E8DC: stw     r4, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083E8E0:
    ctx->pc = 0x8083E8E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E8E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8083E8E0: stw     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083E8E4:
    ctx->pc = 0x8083E8E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E8E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8083E8E4: lha     r0, 18(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(18);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083E8E8:
    ctx->pc = 0x8083E8E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E8E8u)) return;
    // 8083E8E8: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_8083E8EC:
    ctx->pc = 0x8083E8ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E8ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8083E8EC: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083E8F0:
    ctx->pc = 0x8083E8F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E8F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8083E8F0: stw     r0, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083E8F4:
    ctx->pc = 0x8083E8F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E8F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 8083E8F4: stw     r7, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083E8F8:
    ctx->pc = 0x8083E8F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083E8F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8083E8F8: lwz     r0, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083E8FC:
    ctx->pc = 0x8083E8FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E8FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8083E8FC: lwz     r3, 24(r31)
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
label_8083E900:
    ctx->pc = 0x8083E900u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E900u)) return;
    // 8083E900: subf.   r0, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8083E904:
    ctx->pc = 0x8083E904u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E904u)) return;
    // 8083E904: bc    4, 0, 0x8083E914
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8083E914;
        }
    }

label_8083E908:
    ctx->pc = 0x8083E908u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083E908u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8083E908: addi    r0, r3, 512
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(512);

label_8083E90C:
    ctx->pc = 0x8083E90Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E90Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8083E90C: stw     r0, 24(r31)
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
label_8083E910:
    ctx->pc = 0x8083E910u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E910u)) return;
    // 8083E910: b       0x8083E91C
    {
            goto label_8083E91C;
    }

label_8083E914:
    ctx->pc = 0x8083E914u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083E914u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8083E914: addi    r0, r3, -512
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-512);

label_8083E918:
    ctx->pc = 0x8083E918u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E918u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 8083E918: stw     r0, 24(r31)
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
label_8083E91C:
    ctx->pc = 0x8083E91Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083E91Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8083E91C: lwz     r0, 24(r31)
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
label_8083E920:
    ctx->pc = 0x8083E920u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E920u)) return;
    // 8083E920: addi    r3, r31, 32
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(32);

label_8083E924:
    ctx->pc = 0x8083E924u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E924u)) return;
    // 8083E924: rlwinm r0, r0, 0, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_8083E928:
    ctx->pc = 0x8083E928u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E928u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8083E928: stw     r0, 24(r31)
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
label_8083E92C:
    ctx->pc = 0x8083E92Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E92Cu)) return;
    // 8083E92C: bl      0x80569B5C
    {
            ctx->lr = 0x8083E930u;
            ctx->pc = 0x80569B5Cu;
            return;
    }

label_8083E930:
    ctx->pc = 0x8083E930u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 15u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083E930u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 15u : 1u;
    // 8083E930: lis     r3, -28070
    ctx->gpr[3] = ((u32)(s32)(-28070) << 16);

label_8083E934:
    ctx->pc = 0x8083E934u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E934u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 8083E934: lfs     f0, -580(r3)
    if (!ppc_fp_available_inline(ctx, 0x8083E934u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-580);
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
label_8083E938:
    ctx->pc = 0x8083E938u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E938u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 8083E938: stfs     f0, 12(r30)
    if (!ppc_fp_available_inline(ctx, 0x8083E938u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083E93C:
    ctx->pc = 0x8083E93Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E93Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 8083E93C: stfs     f0, 8(r30)
    if (!ppc_fp_available_inline(ctx, 0x8083E93Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083E940:
    ctx->pc = 0x8083E940u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E940u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 8083E940: stfs     f0, 4(r30)
    if (!ppc_fp_available_inline(ctx, 0x8083E940u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083E944:
    ctx->pc = 0x8083E944u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E944u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 8083E944: psq_l   f31, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x8083E944u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x8083E944u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083E948:
    ctx->pc = 0x8083E948u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E948u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 8083E948: lwz     r0, 68(r1)
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
label_8083E94C:
    ctx->pc = 0x8083E94Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E94Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8083E94C: lfd     f31, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x8083E94Cu)) return;
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
label_8083E950:
    ctx->pc = 0x8083E950u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E950u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8083E950: lwz     r31, 44(r1)
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
label_8083E954:
    ctx->pc = 0x8083E954u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E954u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8083E954: lwz     r30, 40(r1)
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
label_8083E958:
    ctx->pc = 0x8083E958u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E958u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8083E958: lwz     r29, 36(r1)
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
label_8083E95C:
    ctx->pc = 0x8083E95Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x8083E95Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8083E95C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083E960:
    ctx->pc = 0x8083E960u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E960u)) return;
    // 8083E960: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_8083E964:
    ctx->pc = 0x8083E964u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E964u)) return;
    // 8083E964: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8083E580;
        }
    }

label_8083E968:
    ctx->pc = 0x8083E968u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083E968u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 8083E968: stwu     r1, -64(r1)
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
label_8083E96C:
    ctx->pc = 0x8083E96Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E96Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 8083E96C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083E970:
    ctx->pc = 0x8083E970u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E970u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 8083E970: stw     r0, 68(r1)
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
label_8083E974:
    ctx->pc = 0x8083E974u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E974u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 8083E974: stfd     f31, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x8083E974u)) return;
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
label_8083E978:
    ctx->pc = 0x8083E978u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E978u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 8083E978: psq_st   f31, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x8083E978u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x8083E978u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083E97C:
    ctx->pc = 0x8083E97Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E97Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 8083E97C: stw     r31, 44(r1)
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
label_8083E980:
    ctx->pc = 0x8083E980u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E980u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 8083E980: stw     r30, 40(r1)
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
label_8083E984:
    ctx->pc = 0x8083E984u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E984u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 8083E984: stw     r29, 36(r1)
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
label_8083E988:
    ctx->pc = 0x8083E988u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E988u)) return;
    // 8083E988: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8083E98C:
    ctx->pc = 0x8083E98Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E98Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8083E98C: lwz     r31, 32(r3)
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
label_8083E990:
    ctx->pc = 0x8083E990u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E990u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8083E990: lwz     r30, 36(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083E994:
    ctx->pc = 0x8083E994u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E994u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8083E994: lha     r4, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083E998:
    ctx->pc = 0x8083E998u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E998u)) return;
    // 8083E998: addi    r4, r4, -1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1);

label_8083E99C:
    ctx->pc = 0x8083E99Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E99Cu)) return;
    // 8083E99C: extsh. r0, r4
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[4];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8083E9A0:
    ctx->pc = 0x8083E9A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E9A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8083E9A0: sth     r4, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083E9A4:
    ctx->pc = 0x8083E9A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E9A4u)) return;
    // 8083E9A4: bc    12, 1, 0x8083EBD8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8083EBD8;
        }
    }

label_8083E9A8:
    ctx->pc = 0x8083E9A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083E9A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8083E9A8: lbz     r0, 0(r31)
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
label_8083E9AC:
    ctx->pc = 0x8083E9ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E9ACu)) return;
    // 8083E9AC: cmpwi   r0, 7
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(7);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8083E9B0:
    ctx->pc = 0x8083E9B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E9B0u)) return;
    // 8083E9B0: bc    4, 2, 0x8083E9BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8083E9BC;
        }
    }

label_8083E9B4:
    ctx->pc = 0x8083E9B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083E9B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8083E9B4: li      r0, 6
    ctx->gpr[0] = (u32)(s32)(6);

label_8083E9B8:
    ctx->pc = 0x8083E9B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E9B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 8083E9B8: stb     r0, 0(r31)
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
label_8083E9BC:
    ctx->pc = 0x8083E9BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083E9BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8083E9BC: bl      0x8000DD2C
    {
            ctx->lr = 0x8083E9C0u;
            ctx->pc = 0x8000DD2Cu;
            return;
    }

label_8083E9C0:
    ctx->pc = 0x8083E9C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 27u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083E9C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 27u : 1u;
    // 8083E9C0: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_8083E9C4:
    ctx->pc = 0x8083E9C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E9C4u)) return;
    // 8083E9C4: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_8083E9C8:
    ctx->pc = 0x8083E9C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E9C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 8083E9C8: stw     r3, 12(r1)
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
label_8083E9CC:
    ctx->pc = 0x8083E9CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E9CCu)) return;
    // 8083E9CC: lis     r4, -28070
    ctx->gpr[4] = ((u32)(s32)(-28070) << 16);

label_8083E9D0:
    ctx->pc = 0x8083E9D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E9D0u)) return;
    // 8083E9D0: lis     r3, -28070
    ctx->gpr[3] = ((u32)(s32)(-28070) << 16);

label_8083E9D4:
    ctx->pc = 0x8083E9D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E9D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 8083E9D4: lfd     f2, -576(r4)
    if (!ppc_fp_available_inline(ctx, 0x8083E9D4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-576);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083E9D8:
    ctx->pc = 0x8083E9D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E9D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 8083E9D8: stw     r0, 8(r1)
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
label_8083E9DC:
    ctx->pc = 0x8083E9DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E9DCu)) return;
    // 8083E9DC: addi    r5, r3, -588
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-588);

label_8083E9E0:
    ctx->pc = 0x8083E9E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E9E0u)) return;
    // 8083E9E0: lis     r3, -28070
    ctx->gpr[3] = ((u32)(s32)(-28070) << 16);

label_8083E9E4:
    ctx->pc = 0x8083E9E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E9E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 8083E9E4: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x8083E9E4u)) return;
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
label_8083E9E8:
    ctx->pc = 0x8083E9E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E9E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 8083E9E8: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x8083E9E8u)) return;
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
label_8083E9EC:
    ctx->pc = 0x8083E9ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E9ECu)) return;
    // 8083E9EC: addi    r4, r3, -480
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-480);

label_8083E9F0:
    ctx->pc = 0x8083E9F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E9F0u)) return;
    // 8083E9F0: lis     r3, -28619
    ctx->gpr[3] = ((u32)(s32)(-28619) << 16);

label_8083E9F4:
    ctx->pc = 0x8083E9F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E9F4u)) return;
    // 8083E9F4: fsubs   f2, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x8083E9F4u)) return;
    ppc_fsubs(ctx, 2, 0, 2);

label_8083E9F8:
    ctx->pc = 0x8083E9F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E9F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 8083E9F8: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x8083E9F8u)) return;
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
label_8083E9FC:
    ctx->pc = 0x8083E9FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083E9FCu)) return;
    // 8083E9FC: addi    r3, r3, 20228
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(20228);

label_8083EA00:
    ctx->pc = 0x8083EA00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EA00u)) return;
    // 8083EA00: fmuls   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x8083EA00u)) return;
    ppc_fmuls(ctx, 1, 1, 2);

label_8083EA04:
    ctx->pc = 0x8083EA04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EA04u)) return;
    // 8083EA04: fmadds f0, f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x8083EA04u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[0], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_8083EA08:
    ctx->pc = 0x8083EA08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EA08u)) return;
    // 8083EA08: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x8083EA08u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_8083EA0C:
    ctx->pc = 0x8083EA0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EA0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8083EA0C: stfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x8083EA0Cu)) return;
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
label_8083EA10:
    ctx->pc = 0x8083EA10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EA10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8083EA10: lwz     r0, 20(r1)
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
label_8083EA14:
    ctx->pc = 0x8083EA14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EA14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8083EA14: sth     r0, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083EA18:
    ctx->pc = 0x8083EA18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EA18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8083EA18: lwz     r3, 0(r3)
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
label_8083EA1C:
    ctx->pc = 0x8083EA1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EA1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8083EA1C: lwz     r3, 36(r3)
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
label_8083EA20:
    ctx->pc = 0x8083EA20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EA20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8083EA20: lwz     r0, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083EA24:
    ctx->pc = 0x8083EA24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EA24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8083EA24: stw     r0, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083EA28:
    ctx->pc = 0x8083EA28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EA28u)) return;
    // 8083EA28: bl      0x8000DD2C
    {
            ctx->lr = 0x8083EA2Cu;
            ctx->pc = 0x8000DD2Cu;
            return;
    }

label_8083EA2C:
    ctx->pc = 0x8083EA2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 17u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083EA2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 17u : 1u;
    // 8083EA2C: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_8083EA30:
    ctx->pc = 0x8083EA30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EA30u)) return;
    // 8083EA30: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_8083EA34:
    ctx->pc = 0x8083EA34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EA34u)) return;
    // 8083EA34: lis     r4, -28070
    ctx->gpr[4] = ((u32)(s32)(-28070) << 16);

label_8083EA38:
    ctx->pc = 0x8083EA38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EA38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 8083EA38: stw     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083EA3C:
    ctx->pc = 0x8083EA3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EA3Cu)) return;
    // 8083EA3C: addi    r5, r4, -576
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-576);

label_8083EA40:
    ctx->pc = 0x8083EA40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EA40u)) return;
    // 8083EA40: lis     r3, -28070
    ctx->gpr[3] = ((u32)(s32)(-28070) << 16);

label_8083EA44:
    ctx->pc = 0x8083EA44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EA44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 8083EA44: stw     r0, 24(r1)
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
label_8083EA48:
    ctx->pc = 0x8083EA48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EA48u)) return;
    // 8083EA48: addi    r4, r3, -588
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-588);

label_8083EA4C:
    ctx->pc = 0x8083EA4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EA4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 8083EA4C: lfd     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x8083EA4Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083EA50:
    ctx->pc = 0x8083EA50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EA50u)) return;
    // 8083EA50: lis     r3, -28070
    ctx->gpr[3] = ((u32)(s32)(-28070) << 16);

label_8083EA54:
    ctx->pc = 0x8083EA54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EA54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8083EA54: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x8083EA54u)) return;
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
label_8083EA58:
    ctx->pc = 0x8083EA58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EA58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8083EA58: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x8083EA58u)) return;
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
label_8083EA5C:
    ctx->pc = 0x8083EA5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EA5Cu)) return;
    // 8083EA5C: fsubs   f2, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x8083EA5Cu)) return;
    ppc_fsubs(ctx, 2, 0, 2);

label_8083EA60:
    ctx->pc = 0x8083EA60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EA60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8083EA60: lfs     f0, -560(r3)
    if (!ppc_fp_available_inline(ctx, 0x8083EA60u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-560);
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
label_8083EA64:
    ctx->pc = 0x8083EA64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EA64u)) return;
    // 8083EA64: fmuls   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x8083EA64u)) return;
    ppc_fmuls(ctx, 1, 1, 2);

label_8083EA68:
    ctx->pc = 0x8083EA68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EA68u)) return;
    // 8083EA68: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x8083EA68u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_8083EA6C:
    ctx->pc = 0x8083EA6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EA6Cu)) return;
    // 8083EA6C: bc    4, 0, 0x8083EA80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8083EA80;
        }
    }

label_8083EA70:
    ctx->pc = 0x8083EA70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083EA70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8083EA70: lwz     r3, 32(r30)
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
label_8083EA74:
    ctx->pc = 0x8083EA74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EA74u)) return;
    // 8083EA74: addi    r0, r3, 12288
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(12288);

label_8083EA78:
    ctx->pc = 0x8083EA78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EA78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8083EA78: stw     r0, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083EA7C:
    ctx->pc = 0x8083EA7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EA7Cu)) return;
    // 8083EA7C: b       0x8083EA8C
    {
            goto label_8083EA8C;
    }

label_8083EA80:
    ctx->pc = 0x8083EA80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083EA80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8083EA80: lwz     r3, 32(r30)
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
label_8083EA84:
    ctx->pc = 0x8083EA84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EA84u)) return;
    // 8083EA84: addi    r0, r3, -12288
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-12288);

label_8083EA88:
    ctx->pc = 0x8083EA88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EA88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 8083EA88: stw     r0, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083EA8C:
    ctx->pc = 0x8083EA8Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083EA8Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8083EA8C: lwz     r0, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083EA90:
    ctx->pc = 0x8083EA90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EA90u)) return;
    // 8083EA90: lis     r3, -28619
    ctx->gpr[3] = ((u32)(s32)(-28619) << 16);

label_8083EA94:
    ctx->pc = 0x8083EA94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EA94u)) return;
    // 8083EA94: rlwinm r0, r0, 0, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_8083EA98:
    ctx->pc = 0x8083EA98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EA98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8083EA98: stw     r0, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083EA9C:
    ctx->pc = 0x8083EA9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EA9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8083EA9C: lwz     r0, 20176(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20176);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083EAA0:
    ctx->pc = 0x8083EAA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EAA0u)) return;
    // 8083EAA0: cmpwi   r0, 900
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(900);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8083EAA4:
    ctx->pc = 0x8083EAA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EAA4u)) return;
    // 8083EAA4: bc    4, 0, 0x8083EAB4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8083EAB4;
        }
    }

label_8083EAA8:
    ctx->pc = 0x8083EAA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083EAA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8083EAA8: lis     r3, -28070
    ctx->gpr[3] = ((u32)(s32)(-28070) << 16);

label_8083EAAC:
    ctx->pc = 0x8083EAACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EAACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8083EAAC: lfs     f31, -476(r3)
    if (!ppc_fp_available_inline(ctx, 0x8083EAACu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-476);
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
label_8083EAB0:
    ctx->pc = 0x8083EAB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EAB0u)) return;
    // 8083EAB0: b       0x8083EACC
    {
            goto label_8083EACC;
    }

label_8083EAB4:
    ctx->pc = 0x8083EAB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083EAB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8083EAB4: bc    4, 0, 0x8083EAC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8083EAC4;
        }
    }

label_8083EAB8:
    ctx->pc = 0x8083EAB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083EAB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8083EAB8: lis     r3, -28070
    ctx->gpr[3] = ((u32)(s32)(-28070) << 16);

label_8083EABC:
    ctx->pc = 0x8083EABCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EABCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8083EABC: lfs     f31, -496(r3)
    if (!ppc_fp_available_inline(ctx, 0x8083EABCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-496);
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
label_8083EAC0:
    ctx->pc = 0x8083EAC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EAC0u)) return;
    // 8083EAC0: b       0x8083EACC
    {
            goto label_8083EACC;
    }

label_8083EAC4:
    ctx->pc = 0x8083EAC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083EAC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8083EAC4: lis     r3, -28070
    ctx->gpr[3] = ((u32)(s32)(-28070) << 16);

label_8083EAC8:
    ctx->pc = 0x8083EAC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EAC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 8083EAC8: lfs     f31, -580(r3)
    if (!ppc_fp_available_inline(ctx, 0x8083EAC8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-580);
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
label_8083EACC:
    ctx->pc = 0x8083EACCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 25u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083EACCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 25u : 1u;
    // 8083EACC: lis     r4, -28070
    ctx->gpr[4] = ((u32)(s32)(-28070) << 16);

label_8083EAD0:
    ctx->pc = 0x8083EAD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EAD0u)) return;
    // 8083EAD0: lis     r3, -28070
    ctx->gpr[3] = ((u32)(s32)(-28070) << 16);

label_8083EAD4:
    ctx->pc = 0x8083EAD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EAD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 8083EAD4: lfs     f2, 60(r30)
    if (!ppc_fp_available_inline(ctx, 0x8083EAD4u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
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
label_8083EAD8:
    ctx->pc = 0x8083EAD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EAD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 8083EAD8: lfs     f1, -472(r4)
    if (!ppc_fp_available_inline(ctx, 0x8083EAD8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-472);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083EADC:
    ctx->pc = 0x8083EADCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EADCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 8083EADC: lfs     f0, -468(r3)
    if (!ppc_fp_available_inline(ctx, 0x8083EADCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-468);
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
label_8083EAE0:
    ctx->pc = 0x8083EAE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EAE0u)) return;
    // 8083EAE0: fsubs   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x8083EAE0u)) return;
    ppc_fsubs(ctx, 1, 2, 1);

label_8083EAE4:
    ctx->pc = 0x8083EAE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 17u, 0x8083EAE4u)) return;
    // 8083EAE4: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x8083EAE4u)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_8083EAE8:
    ctx->pc = 0x8083EAE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EAE8u)) return;
    // 8083EAE8: fadds   f31, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x8083EAE8u)) return;
    ppc_fadds(ctx, 31, 31, 0);

label_8083EAEC:
    ctx->pc = 0x8083EAECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EAECu)) return;
    // 8083EAEC: bl      0x8000DD2C
    {
            ctx->lr = 0x8083EAF0u;
            ctx->pc = 0x8000DD2Cu;
            return;
    }

label_8083EAF0:
    ctx->pc = 0x8083EAF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083EAF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 8083EAF0: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_8083EAF4:
    ctx->pc = 0x8083EAF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EAF4u)) return;
    // 8083EAF4: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_8083EAF8:
    ctx->pc = 0x8083EAF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EAF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 8083EAF8: stw     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083EAFC:
    ctx->pc = 0x8083EAFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EAFCu)) return;
    // 8083EAFC: lis     r4, -28070
    ctx->gpr[4] = ((u32)(s32)(-28070) << 16);

label_8083EB00:
    ctx->pc = 0x8083EB00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EB00u)) return;
    // 8083EB00: lis     r3, -28070
    ctx->gpr[3] = ((u32)(s32)(-28070) << 16);

label_8083EB04:
    ctx->pc = 0x8083EB04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EB04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8083EB04: lfd     f2, -576(r4)
    if (!ppc_fp_available_inline(ctx, 0x8083EB04u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-576);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083EB08:
    ctx->pc = 0x8083EB08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EB08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8083EB08: stw     r0, 24(r1)
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
label_8083EB0C:
    ctx->pc = 0x8083EB0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EB0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8083EB0C: lfs     f0, -588(r3)
    if (!ppc_fp_available_inline(ctx, 0x8083EB0Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-588);
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
label_8083EB10:
    ctx->pc = 0x8083EB10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EB10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8083EB10: lfd     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x8083EB10u)) return;
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
label_8083EB14:
    ctx->pc = 0x8083EB14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EB14u)) return;
    // 8083EB14: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x8083EB14u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_8083EB18:
    ctx->pc = 0x8083EB18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EB18u)) return;
    // 8083EB18: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x8083EB18u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_8083EB1C:
    ctx->pc = 0x8083EB1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EB1Cu)) return;
    // 8083EB1C: fcmpo   cr0, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x8083EB1Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[31], true);

label_8083EB20:
    ctx->pc = 0x8083EB20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EB20u)) return;
    // 8083EB20: bc    4, 0, 0x8083EBC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8083EBC8;
        }
    }

label_8083EB24:
    ctx->pc = 0x8083EB24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083EB24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8083EB24: lhz     r0, 6(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(6);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083EB28:
    ctx->pc = 0x8083EB28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EB28u)) return;
    // 8083EB28: cmplwi  r0, 0x0000
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

label_8083EB2C:
    ctx->pc = 0x8083EB2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EB2Cu)) return;
    // 8083EB2C: bc    4, 2, 0x8083EC20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8083EC20;
        }
    }

label_8083EB30:
    ctx->pc = 0x8083EB30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 34u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083EB30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 34u : 1u;
    // 8083EB30: li      r0, 120
    ctx->gpr[0] = (u32)(s32)(120);

label_8083EB34:
    ctx->pc = 0x8083EB34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EB34u)) return;
    // 8083EB34: lis     r3, -28619
    ctx->gpr[3] = ((u32)(s32)(-28619) << 16);

label_8083EB38:
    ctx->pc = 0x8083EB38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EB38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 31u : 0u;
    // 8083EB38: sth     r0, 6(r31)
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
label_8083EB3C:
    ctx->pc = 0x8083EB3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EB3Cu)) return;
    // 8083EB3C: addi    r6, r3, 20196
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(20196);

label_8083EB40:
    ctx->pc = 0x8083EB40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EB40u)) return;
    // 8083EB40: lis     r3, -28034
    ctx->gpr[3] = ((u32)(s32)(-28034) << 16);

label_8083EB44:
    ctx->pc = 0x8083EB44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EB44u)) return;
    // 8083EB44: lis     r4, -28034
    ctx->gpr[4] = ((u32)(s32)(-28034) << 16);

label_8083EB48:
    ctx->pc = 0x8083EB48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EB48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 8083EB48: lhz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083EB4C:
    ctx->pc = 0x8083EB4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EB4Cu)) return;
    // 8083EB4C: addi    r9, r3, -16468
    ctx->gpr[9] = ctx->gpr[3] + (u32)(s32)(-16468);

label_8083EB50:
    ctx->pc = 0x8083EB50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EB50u)) return;
    // 8083EB50: addi    r10, r4, -16340
    ctx->gpr[10] = ctx->gpr[4] + (u32)(s32)(-16340);

label_8083EB54:
    ctx->pc = 0x8083EB54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EB54u)) return;
    // 8083EB54: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_8083EB58:
    ctx->pc = 0x8083EB58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EB58u)) return;
    // 8083EB58: ori     r3, r5, 0x0008
    ctx->gpr[3] = ctx->gpr[5] | 0x0008u;

label_8083EB5C:
    ctx->pc = 0x8083EB5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EB5Cu)) return;
    // 8083EB5C: or   r8, r31, r31
    {
        ctx->gpr[8] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8083EB60:
    ctx->pc = 0x8083EB60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EB60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 8083EB60: sth     r3, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083EB64:
    ctx->pc = 0x8083EB64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EB64u)) return;
    // 8083EB64: li      r3, 846
    ctx->gpr[3] = (u32)(s32)(846);

label_8083EB68:
    ctx->pc = 0x8083EB68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EB68u)) return;
    // 8083EB68: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8083EB6C:
    ctx->pc = 0x8083EB6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EB6Cu)) return;
    // 8083EB6C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_8083EB70:
    ctx->pc = 0x8083EB70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EB70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 8083EB70: lwz     r12, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083EB74:
    ctx->pc = 0x8083EB74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EB74u)) return;
    // 8083EB74: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_8083EB78:
    ctx->pc = 0x8083EB78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EB78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 8083EB78: lwz     r29, 44(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(44);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083EB7C:
    ctx->pc = 0x8083EB7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EB7Cu)) return;
    // 8083EB7C: li      r7, 120
    ctx->gpr[7] = (u32)(s32)(120);

label_8083EB80:
    ctx->pc = 0x8083EB80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EB80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 8083EB80: stb     r0, 3(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083EB84:
    ctx->pc = 0x8083EB84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EB84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 8083EB84: lha     r0, 18(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(18);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083EB88:
    ctx->pc = 0x8083EB88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EB88u)) return;
    // 8083EB88: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_8083EB8C:
    ctx->pc = 0x8083EB8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EB8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 8083EB8C: lwzx    r11, r10, r0
    {
        u32 ea = ctx->gpr[10] + ctx->gpr[0];
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083EB90:
    ctx->pc = 0x8083EB90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EB90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 8083EB90: lwz     r10, 0(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(0);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083EB94:
    ctx->pc = 0x8083EB94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EB94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 8083EB94: lwz     r0, 4(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083EB98:
    ctx->pc = 0x8083EB98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EB98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8083EB98: stw     r10, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083EB9C:
    ctx->pc = 0x8083EB9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EB9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8083EB9C: stw     r0, 4(r29)
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
label_8083EBA0:
    ctx->pc = 0x8083EBA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EBA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8083EBA0: lha     r0, 18(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(18);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083EBA4:
    ctx->pc = 0x8083EBA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EBA4u)) return;
    // 8083EBA4: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_8083EBA8:
    ctx->pc = 0x8083EBA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EBA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8083EBA8: lwzx    r0, r9, r0
    {
        u32 ea = ctx->gpr[9] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083EBAC:
    ctx->pc = 0x8083EBACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EBACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8083EBAC: stw     r0, 0(r29)
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
label_8083EBB0:
    ctx->pc = 0x8083EBB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EBB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8083EBB0: stw     r29, 8(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083EBB4:
    ctx->pc = 0x8083EBB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EBB4u)) return;
    // 8083EBB4: bl      0x80506FAC
    {
            ctx->lr = 0x8083EBB8u;
            ctx->pc = 0x80506FACu;
            return;
    }

label_8083EBB8:
    ctx->pc = 0x8083EBB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083EBB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8083EBB8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8083EBBC:
    ctx->pc = 0x8083EBBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EBBCu)) return;
    // 8083EBBC: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_8083EBC0:
    ctx->pc = 0x8083EBC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EBC0u)) return;
    // 8083EBC0: bl      0x804C5AB4
    {
            ctx->lr = 0x8083EBC4u;
            ctx->pc = 0x804C5AB4u;
            return;
    }

label_8083EBC4:
    ctx->pc = 0x8083EBC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083EBC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8083EBC4: b       0x8083EC20
    {
            goto label_8083EC20;
    }

label_8083EBC8:
    ctx->pc = 0x8083EBC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083EBC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8083EBC8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8083EBCC:
    ctx->pc = 0x8083EBCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EBCCu)) return;
    // 8083EBCC: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_8083EBD0:
    ctx->pc = 0x8083EBD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EBD0u)) return;
    // 8083EBD0: bl      0x804C5AB4
    {
            ctx->lr = 0x8083EBD4u;
            ctx->pc = 0x804C5AB4u;
            return;
    }

label_8083EBD4:
    ctx->pc = 0x8083EBD4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083EBD4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8083EBD4: b       0x8083EC20
    {
            goto label_8083EC20;
    }

label_8083EBD8:
    ctx->pc = 0x8083EBD8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083EBD8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 8083EBD8: lis     r4, -28619
    ctx->gpr[4] = ((u32)(s32)(-28619) << 16);

label_8083EBDC:
    ctx->pc = 0x8083EBDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EBDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8083EBDC: lhz     r0, 20196(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20196);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083EBE0:
    ctx->pc = 0x8083EBE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EBE0u)) return;
    // 8083EBE0: rlwinm. r0, r0, 0, 28, 28
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000008u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8083EBE4:
    ctx->pc = 0x8083EBE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EBE4u)) return;
    // 8083EBE4: bc    12, 2, 0x8083EBF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8083EBF0;
        }
    }

label_8083EBE8:
    ctx->pc = 0x8083EBE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083EBE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8083EBE8: addi    r4, r31, 32
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(32);

label_8083EBEC:
    ctx->pc = 0x8083EBECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EBECu)) return;
    // 8083EBEC: bl      0x80575CF8
    {
            ctx->lr = 0x8083EBF0u;
            ctx->pc = 0x80575CF8u;
            return;
    }

label_8083EBF0:
    ctx->pc = 0x8083EBF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083EBF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8083EBF0: lwz     r0, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083EBF4:
    ctx->pc = 0x8083EBF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EBF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8083EBF4: lwz     r3, 24(r31)
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
label_8083EBF8:
    ctx->pc = 0x8083EBF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EBF8u)) return;
    // 8083EBF8: subf.   r0, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8083EBFC:
    ctx->pc = 0x8083EBFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EBFCu)) return;
    // 8083EBFC: bc    4, 0, 0x8083EC0C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8083EC0C;
        }
    }

label_8083EC00:
    ctx->pc = 0x8083EC00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083EC00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8083EC00: addi    r0, r3, 256
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(256);

label_8083EC04:
    ctx->pc = 0x8083EC04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EC04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8083EC04: stw     r0, 24(r31)
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
label_8083EC08:
    ctx->pc = 0x8083EC08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EC08u)) return;
    // 8083EC08: b       0x8083EC14
    {
            goto label_8083EC14;
    }

label_8083EC0C:
    ctx->pc = 0x8083EC0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083EC0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8083EC0C: addi    r0, r3, -256
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-256);

label_8083EC10:
    ctx->pc = 0x8083EC10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EC10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 8083EC10: stw     r0, 24(r31)
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
label_8083EC14:
    ctx->pc = 0x8083EC14u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083EC14u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8083EC14: lwz     r0, 24(r31)
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
label_8083EC18:
    ctx->pc = 0x8083EC18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EC18u)) return;
    // 8083EC18: rlwinm r0, r0, 0, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_8083EC1C:
    ctx->pc = 0x8083EC1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EC1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 8083EC1C: stw     r0, 24(r31)
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
label_8083EC20:
    ctx->pc = 0x8083EC20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083EC20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 8083EC20: psq_l   f31, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x8083EC20u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x8083EC20u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083EC24:
    ctx->pc = 0x8083EC24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EC24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 8083EC24: lwz     r0, 68(r1)
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
label_8083EC28:
    ctx->pc = 0x8083EC28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EC28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8083EC28: lfd     f31, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x8083EC28u)) return;
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
label_8083EC2C:
    ctx->pc = 0x8083EC2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EC2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8083EC2C: lwz     r31, 44(r1)
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
label_8083EC30:
    ctx->pc = 0x8083EC30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EC30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8083EC30: lwz     r30, 40(r1)
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
label_8083EC34:
    ctx->pc = 0x8083EC34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EC34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8083EC34: lwz     r29, 36(r1)
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
label_8083EC38:
    ctx->pc = 0x8083EC38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x8083EC38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8083EC38: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083EC3C:
    ctx->pc = 0x8083EC3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EC3Cu)) return;
    // 8083EC3C: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_8083EC40:
    ctx->pc = 0x8083EC40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EC40u)) return;
    // 8083EC40: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8083E580;
        }
    }

label_8083EC44:
    ctx->pc = 0x8083EC44u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083EC44u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8083EC44: stwu     r1, -16(r1)
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
label_8083EC48:
    ctx->pc = 0x8083EC48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EC48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8083EC48: lwz     r3, 32(r3)
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
label_8083EC4C:
    ctx->pc = 0x8083EC4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EC4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8083EC4C: lfs     f0, 48(r3)
    if (!ppc_fp_available_inline(ctx, 0x8083EC4Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
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
label_8083EC50:
    ctx->pc = 0x8083EC50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EC50u)) return;
    // 8083EC50: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x8083EC50u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_8083EC54:
    ctx->pc = 0x8083EC54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EC54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8083EC54: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x8083EC54u)) return;
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
label_8083EC58:
    ctx->pc = 0x8083EC58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EC58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8083EC58: lwz     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083EC5C:
    ctx->pc = 0x8083EC5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EC5Cu)) return;
    // 8083EC5C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8083EC60:
    ctx->pc = 0x8083EC60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EC60u)) return;
    // 8083EC60: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8083E580;
        }
    }

label_8083EC64:
    ctx->pc = 0x8083EC64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083EC64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 8083EC64: stwu     r1, -16(r1)
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
label_8083EC68:
    ctx->pc = 0x8083EC68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EC68u)) return;
    // 8083EC68: lis     r4, -28034
    ctx->gpr[4] = ((u32)(s32)(-28034) << 16);

label_8083EC6C:
    ctx->pc = 0x8083EC6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EC6Cu)) return;
    // 8083EC6C: addi    r4, r4, -15444
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-15444);

label_8083EC70:
    ctx->pc = 0x8083EC70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EC70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 8083EC70: lwz     r5, 32(r3)
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
label_8083EC74:
    ctx->pc = 0x8083EC74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EC74u)) return;
    // 8083EC74: lis     r3, -28070
    ctx->gpr[3] = ((u32)(s32)(-28070) << 16);

label_8083EC78:
    ctx->pc = 0x8083EC78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EC78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8083EC78: lfs     f0, -464(r3)
    if (!ppc_fp_available_inline(ctx, 0x8083EC78u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-464);
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
label_8083EC7C:
    ctx->pc = 0x8083EC7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EC7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8083EC7C: lha     r0, 18(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(18);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083EC80:
    ctx->pc = 0x8083EC80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EC80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8083EC80: lfs     f2, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x8083EC80u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(44);
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
label_8083EC84:
    ctx->pc = 0x8083EC84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EC84u)) return;
    // 8083EC84: rlwinm r0, r0, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_8083EC88:
    ctx->pc = 0x8083EC88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EC88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8083EC88: lfsx    f1, r4, r0
    if (!ppc_fp_available_inline(ctx, 0x8083EC88u)) return;
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083EC8C:
    ctx->pc = 0x8083EC8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EC8Cu)) return;
    // 8083EC8C: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x8083EC8Cu)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_8083EC90:
    ctx->pc = 0x8083EC90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EC90u)) return;
    // 8083EC90: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x8083EC90u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_8083EC94:
    ctx->pc = 0x8083EC94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EC94u)) return;
    // 8083EC94: bc    4, 0, 0x8083ECA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8083ECA4;
        }
    }

label_8083EC98:
    ctx->pc = 0x8083EC98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083EC98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8083EC98: lis     r3, -28070
    ctx->gpr[3] = ((u32)(s32)(-28070) << 16);

label_8083EC9C:
    ctx->pc = 0x8083EC9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EC9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8083EC9C: lfs     f1, -580(r3)
    if (!ppc_fp_available_inline(ctx, 0x8083EC9Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-580);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083ECA0:
    ctx->pc = 0x8083ECA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083ECA0u)) return;
    // 8083ECA0: b       0x8083ECC8
    {
            goto label_8083ECC8;
    }

label_8083ECA4:
    ctx->pc = 0x8083ECA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083ECA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 8083ECA4: lis     r3, -28070
    ctx->gpr[3] = ((u32)(s32)(-28070) << 16);

label_8083ECA8:
    ctx->pc = 0x8083ECA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083ECA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8083ECA8: lfs     f0, -460(r3)
    if (!ppc_fp_available_inline(ctx, 0x8083ECA8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-460);
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
label_8083ECAC:
    ctx->pc = 0x8083ECACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083ECACu)) return;
    // 8083ECAC: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x8083ECACu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_8083ECB0:
    ctx->pc = 0x8083ECB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083ECB0u)) return;
    // 8083ECB0: bc    4, 0, 0x8083ECC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8083ECC0;
        }
    }

label_8083ECB4:
    ctx->pc = 0x8083ECB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083ECB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8083ECB4: lis     r3, -28070
    ctx->gpr[3] = ((u32)(s32)(-28070) << 16);

label_8083ECB8:
    ctx->pc = 0x8083ECB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083ECB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8083ECB8: lfs     f1, -564(r3)
    if (!ppc_fp_available_inline(ctx, 0x8083ECB8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-564);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083ECBC:
    ctx->pc = 0x8083ECBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083ECBCu)) return;
    // 8083ECBC: b       0x8083ECC8
    {
            goto label_8083ECC8;
    }

label_8083ECC0:
    ctx->pc = 0x8083ECC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083ECC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8083ECC0: lis     r3, -28070
    ctx->gpr[3] = ((u32)(s32)(-28070) << 16);

label_8083ECC4:
    ctx->pc = 0x8083ECC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083ECC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 8083ECC4: lfs     f1, -456(r3)
    if (!ppc_fp_available_inline(ctx, 0x8083ECC4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-456);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083ECC8:
    ctx->pc = 0x8083ECC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083ECC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 8083ECC8: fctiwz    f0, f1
    if (!ppc_fp_available_inline(ctx, 0x8083ECC8u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_8083ECCC:
    ctx->pc = 0x8083ECCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083ECCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8083ECCC: stfs     f1, 48(r5)
    if (!ppc_fp_available_inline(ctx, 0x8083ECCCu)) return;
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
label_8083ECD0:
    ctx->pc = 0x8083ECD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083ECD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8083ECD0: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x8083ECD0u)) return;
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
label_8083ECD4:
    ctx->pc = 0x8083ECD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083ECD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8083ECD4: lwz     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083ECD8:
    ctx->pc = 0x8083ECD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083ECD8u)) return;
    // 8083ECD8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8083ECDC:
    ctx->pc = 0x8083ECDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083ECDCu)) return;
    // 8083ECDC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8083E580;
        }
    }

label_8083ECE0:
    ctx->pc = 0x8083ECE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 26u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083ECE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 26u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 8083ECE0: stwu     r1, -64(r1)
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
label_8083ECE4:
    ctx->pc = 0x8083ECE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083ECE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 8083ECE4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083ECE8:
    ctx->pc = 0x8083ECE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083ECE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 8083ECE8: stw     r0, 68(r1)
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
label_8083ECEC:
    ctx->pc = 0x8083ECECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083ECECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 8083ECEC: stfd     f31, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x8083ECECu)) return;
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
label_8083ECF0:
    ctx->pc = 0x8083ECF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083ECF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 8083ECF0: psq_st   f31, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x8083ECF0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x8083ECF0u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083ECF4:
    ctx->pc = 0x8083ECF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083ECF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 8083ECF4: stfd     f30, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x8083ECF4u)) return;
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
label_8083ECF8:
    ctx->pc = 0x8083ECF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083ECF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 8083ECF8: psq_st   f30, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x8083ECF8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x8083ECF8u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083ECFC:
    ctx->pc = 0x8083ECFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083ECFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 8083ECFC: stw     r31, 28(r1)
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
label_8083ED00:
    ctx->pc = 0x8083ED00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083ED00u)) return;
    // 8083ED00: lis     r5, -28634
    ctx->gpr[5] = ((u32)(s32)(-28634) << 16);

label_8083ED04:
    ctx->pc = 0x8083ED04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083ED04u)) return;
    // 8083ED04: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_8083ED08:
    ctx->pc = 0x8083ED08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083ED08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 8083ED08: lwz     r31, 32(r3)
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
label_8083ED0C:
    ctx->pc = 0x8083ED0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083ED0Cu)) return;
    // 8083ED0C: addi    r3, r4, -5404
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(-5404);

label_8083ED10:
    ctx->pc = 0x8083ED10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083ED10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 8083ED10: lha     r4, -5402(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-5402);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083ED14:
    ctx->pc = 0x8083ED14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083ED14u)) return;
    // 8083ED14: lis     r5, -28034
    ctx->gpr[5] = ((u32)(s32)(-28034) << 16);

label_8083ED18:
    ctx->pc = 0x8083ED18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083ED18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 8083ED18: lha     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083ED1C:
    ctx->pc = 0x8083ED1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083ED1Cu)) return;
    // 8083ED1C: rlwinm r3, r4, 8, 0, 23
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[4], 8u) & 0xFFFFFF00u;
    }

label_8083ED20:
    ctx->pc = 0x8083ED20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083ED20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 8083ED20: lha     r6, 18(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(18);
        ctx->gpr[6] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083ED24:
    ctx->pc = 0x8083ED24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083ED24u)) return;
    // 8083ED24: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_8083ED28:
    ctx->pc = 0x8083ED28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083ED28u)) return;
    // 8083ED28: rlwinm r0, r0, 0, 16, 23
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FF00u;
    }

label_8083ED2C:
    ctx->pc = 0x8083ED2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083ED2Cu)) return;
    // 8083ED2C: addi    r3, r5, -15444
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-15444);

label_8083ED30:
    ctx->pc = 0x8083ED30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083ED30u)) return;
    // 8083ED30: rlwinm r4, r6, 4, 0, 27
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[6], 4u) & 0xFFFFFFF0u;
    }

label_8083ED34:
    ctx->pc = 0x8083ED34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083ED34u)) return;
    // 8083ED34: add   r3, r3, r4
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8083ED38:
    ctx->pc = 0x8083ED38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083ED38u)) return;
    // 8083ED38: cmpwi   r0, 768
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(768);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8083ED3C:
    ctx->pc = 0x8083ED3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083ED3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8083ED3C: lfs     f31, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x8083ED3Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
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
label_8083ED40:
    ctx->pc = 0x8083ED40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083ED40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8083ED40: lfs     f30, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x8083ED40u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
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
label_8083ED44:
    ctx->pc = 0x8083ED44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083ED44u)) return;
    // 8083ED44: bc    4, 2, 0x8083ED58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8083ED58;
        }
    }

label_8083ED48:
    ctx->pc = 0x8083ED48u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083ED48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8083ED48: cmpwi   r6, 12
    {
        s32 val_a = (s32)(ctx->gpr[6]);
        s32 val_b = (s32)(12);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8083ED4C:
    ctx->pc = 0x8083ED4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083ED4Cu)) return;
    // 8083ED4C: bc    4, 2, 0x8083ED58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8083ED58;
        }
    }

label_8083ED50:
    ctx->pc = 0x8083ED50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083ED50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8083ED50: lis     r3, -28070
    ctx->gpr[3] = ((u32)(s32)(-28070) << 16);

label_8083ED54:
    ctx->pc = 0x8083ED54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083ED54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 8083ED54: lfs     f30, -456(r3)
    if (!ppc_fp_available_inline(ctx, 0x8083ED54u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-456);
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
label_8083ED58:
    ctx->pc = 0x8083ED58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083ED58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 8083ED58: lis     r3, -28070
    ctx->gpr[3] = ((u32)(s32)(-28070) << 16);

label_8083ED5C:
    ctx->pc = 0x8083ED5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083ED5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8083ED5C: lfs     f1, 52(r31)
    if (!ppc_fp_available_inline(ctx, 0x8083ED5Cu)) return;
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
label_8083ED60:
    ctx->pc = 0x8083ED60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083ED60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8083ED60: lfs     f0, -580(r3)
    if (!ppc_fp_available_inline(ctx, 0x8083ED60u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-580);
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
label_8083ED64:
    ctx->pc = 0x8083ED64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083ED64u)) return;
    // 8083ED64: fcmpu   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x8083ED64u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], false);

label_8083ED68:
    ctx->pc = 0x8083ED68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083ED68u)) return;
    // 8083ED68: bc    12, 2, 0x8083EDB4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8083EDB4;
        }
    }

label_8083ED6C:
    ctx->pc = 0x8083ED6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083ED6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 8083ED6C: lis     r3, -28070
    ctx->gpr[3] = ((u32)(s32)(-28070) << 16);

label_8083ED70:
    ctx->pc = 0x8083ED70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083ED70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8083ED70: lfs     f0, -456(r3)
    if (!ppc_fp_available_inline(ctx, 0x8083ED70u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-456);
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
label_8083ED74:
    ctx->pc = 0x8083ED74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083ED74u)) return;
    // 8083ED74: fmuls   f31, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x8083ED74u)) return;
    ppc_fmuls(ctx, 31, 0, 31);

label_8083ED78:
    ctx->pc = 0x8083ED78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083ED78u)) return;
    // 8083ED78: bl      0x8000DD2C
    {
            ctx->lr = 0x8083ED7Cu;
            ctx->pc = 0x8000DD2Cu;
            return;
    }

label_8083ED7C:
    ctx->pc = 0x8083ED7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 14u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083ED7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 14u : 1u;
    // 8083ED7C: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_8083ED80:
    ctx->pc = 0x8083ED80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083ED80u)) return;
    // 8083ED80: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_8083ED84:
    ctx->pc = 0x8083ED84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083ED84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 8083ED84: stw     r3, 12(r1)
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
label_8083ED88:
    ctx->pc = 0x8083ED88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083ED88u)) return;
    // 8083ED88: lis     r4, -28070
    ctx->gpr[4] = ((u32)(s32)(-28070) << 16);

label_8083ED8C:
    ctx->pc = 0x8083ED8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083ED8Cu)) return;
    // 8083ED8C: lis     r3, -28070
    ctx->gpr[3] = ((u32)(s32)(-28070) << 16);

label_8083ED90:
    ctx->pc = 0x8083ED90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083ED90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 8083ED90: lfd     f3, -576(r4)
    if (!ppc_fp_available_inline(ctx, 0x8083ED90u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-576);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083ED94:
    ctx->pc = 0x8083ED94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083ED94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8083ED94: stw     r0, 8(r1)
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
label_8083ED98:
    ctx->pc = 0x8083ED98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083ED98u)) return;
    // 8083ED98: fsubs   f0, f30, f31
    if (!ppc_fp_available_inline(ctx, 0x8083ED98u)) return;
    ppc_fsubs(ctx, 0, 30, 31);

label_8083ED9C:
    ctx->pc = 0x8083ED9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083ED9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8083ED9C: lfs     f1, -588(r3)
    if (!ppc_fp_available_inline(ctx, 0x8083ED9Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-588);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083EDA0:
    ctx->pc = 0x8083EDA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EDA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8083EDA0: lfd     f2, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x8083EDA0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083EDA4:
    ctx->pc = 0x8083EDA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EDA4u)) return;
    // 8083EDA4: fsubs   f2, f2, f3
    if (!ppc_fp_available_inline(ctx, 0x8083EDA4u)) return;
    ppc_fsubs(ctx, 2, 2, 3);

label_8083EDA8:
    ctx->pc = 0x8083EDA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EDA8u)) return;
    // 8083EDA8: fmuls   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x8083EDA8u)) return;
    ppc_fmuls(ctx, 1, 1, 2);

label_8083EDAC:
    ctx->pc = 0x8083EDACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EDACu)) return;
    // 8083EDAC: fmadds f30, f0, f1, f31
    if (!ppc_fp_available_inline(ctx, 0x8083EDACu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[0], ctx->fpr[1], ctx->fpr[31], true, false, false, &result))
            ctx->fpr[30] = ctx->ps1[30] = result;
    }

label_8083EDB0:
    ctx->pc = 0x8083EDB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EDB0u)) return;
    // 8083EDB0: b       0x8083EE88
    {
            goto label_8083EE88;
    }

label_8083EDB4:
    ctx->pc = 0x8083EDB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083EDB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8083EDB4: bl      0x8000DD2C
    {
            ctx->lr = 0x8083EDB8u;
            ctx->pc = 0x8000DD2Cu;
            return;
    }

label_8083EDB8:
    ctx->pc = 0x8083EDB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 17u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083EDB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 17u : 1u;
    // 8083EDB8: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_8083EDBC:
    ctx->pc = 0x8083EDBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EDBCu)) return;
    // 8083EDBC: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_8083EDC0:
    ctx->pc = 0x8083EDC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EDC0u)) return;
    // 8083EDC0: lis     r4, -28070
    ctx->gpr[4] = ((u32)(s32)(-28070) << 16);

label_8083EDC4:
    ctx->pc = 0x8083EDC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EDC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 8083EDC4: stw     r3, 12(r1)
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
label_8083EDC8:
    ctx->pc = 0x8083EDC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EDC8u)) return;
    // 8083EDC8: addi    r5, r4, -576
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-576);

label_8083EDCC:
    ctx->pc = 0x8083EDCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EDCCu)) return;
    // 8083EDCC: lis     r3, -28070
    ctx->gpr[3] = ((u32)(s32)(-28070) << 16);

label_8083EDD0:
    ctx->pc = 0x8083EDD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EDD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 8083EDD0: stw     r0, 8(r1)
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
label_8083EDD4:
    ctx->pc = 0x8083EDD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EDD4u)) return;
    // 8083EDD4: addi    r4, r3, -588
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-588);

label_8083EDD8:
    ctx->pc = 0x8083EDD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EDD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 8083EDD8: lfd     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x8083EDD8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083EDDC:
    ctx->pc = 0x8083EDDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EDDCu)) return;
    // 8083EDDC: lis     r3, -28070
    ctx->gpr[3] = ((u32)(s32)(-28070) << 16);

label_8083EDE0:
    ctx->pc = 0x8083EDE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EDE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8083EDE0: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x8083EDE0u)) return;
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
label_8083EDE4:
    ctx->pc = 0x8083EDE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EDE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8083EDE4: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x8083EDE4u)) return;
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
label_8083EDE8:
    ctx->pc = 0x8083EDE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EDE8u)) return;
    // 8083EDE8: fsubs   f2, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x8083EDE8u)) return;
    ppc_fsubs(ctx, 2, 0, 2);

label_8083EDEC:
    ctx->pc = 0x8083EDECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EDECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8083EDEC: lfs     f0, -560(r3)
    if (!ppc_fp_available_inline(ctx, 0x8083EDECu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-560);
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
label_8083EDF0:
    ctx->pc = 0x8083EDF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EDF0u)) return;
    // 8083EDF0: fmuls   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x8083EDF0u)) return;
    ppc_fmuls(ctx, 1, 1, 2);

label_8083EDF4:
    ctx->pc = 0x8083EDF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EDF4u)) return;
    // 8083EDF4: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x8083EDF4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_8083EDF8:
    ctx->pc = 0x8083EDF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EDF8u)) return;
    // 8083EDF8: bc    4, 0, 0x8083EE44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8083EE44;
        }
    }

label_8083EDFC:
    ctx->pc = 0x8083EDFCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083EDFCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8083EDFC: bl      0x8000DD2C
    {
            ctx->lr = 0x8083EE00u;
            ctx->pc = 0x8000DD2Cu;
            return;
    }

label_8083EE00:
    ctx->pc = 0x8083EE00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 17u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083EE00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 17u : 1u;
    // 8083EE00: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_8083EE04:
    ctx->pc = 0x8083EE04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EE04u)) return;
    // 8083EE04: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_8083EE08:
    ctx->pc = 0x8083EE08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EE08u)) return;
    // 8083EE08: lis     r4, -28070
    ctx->gpr[4] = ((u32)(s32)(-28070) << 16);

label_8083EE0C:
    ctx->pc = 0x8083EE0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EE0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 8083EE0C: stw     r3, 12(r1)
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
label_8083EE10:
    ctx->pc = 0x8083EE10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EE10u)) return;
    // 8083EE10: addi    r5, r4, -576
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-576);

label_8083EE14:
    ctx->pc = 0x8083EE14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EE14u)) return;
    // 8083EE14: lis     r3, -28070
    ctx->gpr[3] = ((u32)(s32)(-28070) << 16);

label_8083EE18:
    ctx->pc = 0x8083EE18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EE18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 8083EE18: stw     r0, 8(r1)
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
label_8083EE1C:
    ctx->pc = 0x8083EE1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EE1Cu)) return;
    // 8083EE1C: lis     r4, -28070
    ctx->gpr[4] = ((u32)(s32)(-28070) << 16);

label_8083EE20:
    ctx->pc = 0x8083EE20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EE20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 8083EE20: lfd     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x8083EE20u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083EE24:
    ctx->pc = 0x8083EE24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EE24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8083EE24: lfd     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x8083EE24u)) return;
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
label_8083EE28:
    ctx->pc = 0x8083EE28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EE28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8083EE28: lfs     f0, -564(r3)
    if (!ppc_fp_available_inline(ctx, 0x8083EE28u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-564);
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
label_8083EE2C:
    ctx->pc = 0x8083EE2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EE2Cu)) return;
    // 8083EE2C: fsubs   f2, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x8083EE2Cu)) return;
    ppc_fsubs(ctx, 2, 1, 2);

label_8083EE30:
    ctx->pc = 0x8083EE30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EE30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8083EE30: lfs     f1, -588(r4)
    if (!ppc_fp_available_inline(ctx, 0x8083EE30u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-588);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083EE34:
    ctx->pc = 0x8083EE34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EE34u)) return;
    // 8083EE34: fsubs   f0, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x8083EE34u)) return;
    ppc_fsubs(ctx, 0, 0, 31);

label_8083EE38:
    ctx->pc = 0x8083EE38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EE38u)) return;
    // 8083EE38: fmuls   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x8083EE38u)) return;
    ppc_fmuls(ctx, 1, 1, 2);

label_8083EE3C:
    ctx->pc = 0x8083EE3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EE3Cu)) return;
    // 8083EE3C: fmadds f30, f0, f1, f31
    if (!ppc_fp_available_inline(ctx, 0x8083EE3Cu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[0], ctx->fpr[1], ctx->fpr[31], true, false, false, &result))
            ctx->fpr[30] = ctx->ps1[30] = result;
    }

label_8083EE40:
    ctx->pc = 0x8083EE40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EE40u)) return;
    // 8083EE40: b       0x8083EE88
    {
            goto label_8083EE88;
    }

label_8083EE44:
    ctx->pc = 0x8083EE44u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083EE44u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8083EE44: bl      0x8000DD2C
    {
            ctx->lr = 0x8083EE48u;
            ctx->pc = 0x8000DD2Cu;
            return;
    }

label_8083EE48:
    ctx->pc = 0x8083EE48u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083EE48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 8083EE48: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_8083EE4C:
    ctx->pc = 0x8083EE4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EE4Cu)) return;
    // 8083EE4C: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_8083EE50:
    ctx->pc = 0x8083EE50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EE50u)) return;
    // 8083EE50: lis     r4, -28070
    ctx->gpr[4] = ((u32)(s32)(-28070) << 16);

label_8083EE54:
    ctx->pc = 0x8083EE54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EE54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 8083EE54: stw     r3, 12(r1)
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
label_8083EE58:
    ctx->pc = 0x8083EE58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EE58u)) return;
    // 8083EE58: addi    r5, r4, -576
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-576);

label_8083EE5C:
    ctx->pc = 0x8083EE5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EE5Cu)) return;
    // 8083EE5C: lis     r3, -28070
    ctx->gpr[3] = ((u32)(s32)(-28070) << 16);

label_8083EE60:
    ctx->pc = 0x8083EE60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EE60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 8083EE60: stw     r0, 8(r1)
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
label_8083EE64:
    ctx->pc = 0x8083EE64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EE64u)) return;
    // 8083EE64: lis     r4, -28070
    ctx->gpr[4] = ((u32)(s32)(-28070) << 16);

label_8083EE68:
    ctx->pc = 0x8083EE68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EE68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8083EE68: lfd     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x8083EE68u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083EE6C:
    ctx->pc = 0x8083EE6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EE6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8083EE6C: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x8083EE6Cu)) return;
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
label_8083EE70:
    ctx->pc = 0x8083EE70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EE70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8083EE70: lfs     f1, -564(r3)
    if (!ppc_fp_available_inline(ctx, 0x8083EE70u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-564);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083EE74:
    ctx->pc = 0x8083EE74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EE74u)) return;
    // 8083EE74: fsubs   f3, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x8083EE74u)) return;
    ppc_fsubs(ctx, 3, 0, 2);

label_8083EE78:
    ctx->pc = 0x8083EE78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EE78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8083EE78: lfs     f2, -588(r4)
    if (!ppc_fp_available_inline(ctx, 0x8083EE78u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-588);
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
label_8083EE7C:
    ctx->pc = 0x8083EE7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EE7Cu)) return;
    // 8083EE7C: fsubs   f0, f30, f1
    if (!ppc_fp_available_inline(ctx, 0x8083EE7Cu)) return;
    ppc_fsubs(ctx, 0, 30, 1);

label_8083EE80:
    ctx->pc = 0x8083EE80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EE80u)) return;
    // 8083EE80: fmuls   f2, f2, f3
    if (!ppc_fp_available_inline(ctx, 0x8083EE80u)) return;
    ppc_fmuls(ctx, 2, 2, 3);

label_8083EE84:
    ctx->pc = 0x8083EE84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EE84u)) return;
    // 8083EE84: fmadds f30, f0, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x8083EE84u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[0], ctx->fpr[2], ctx->fpr[1], true, false, false, &result))
            ctx->fpr[30] = ctx->ps1[30] = result;
    }

label_8083EE88:
    ctx->pc = 0x8083EE88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083EE88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8083EE88: bl      0x80571BF4
    {
            ctx->lr = 0x8083EE8Cu;
            ctx->pc = 0x80571BF4u;
            return;
    }

label_8083EE8C:
    ctx->pc = 0x8083EE8Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083EE8Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8083EE8C: cmpwi   r3, 2
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

label_8083EE90:
    ctx->pc = 0x8083EE90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EE90u)) return;
    // 8083EE90: bc    12, 2, 0x8083EEB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8083EEB8;
        }
    }

label_8083EE94:
    ctx->pc = 0x8083EE94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083EE94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8083EE94: bc    4, 0, 0x8083EEA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8083EEA8;
        }
    }

label_8083EE98:
    ctx->pc = 0x8083EE98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083EE98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8083EE98: cmpwi   r3, 0
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

label_8083EE9C:
    ctx->pc = 0x8083EE9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EE9Cu)) return;
    // 8083EE9C: bc    12, 2, 0x8083EEF4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8083EEF4;
        }
    }

label_8083EEA0:
    ctx->pc = 0x8083EEA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083EEA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8083EEA0: bc    4, 0, 0x8083EEC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8083EEC8;
        }
    }

label_8083EEA4:
    ctx->pc = 0x8083EEA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083EEA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8083EEA4: b       0x8083EEF4
    {
            goto label_8083EEF4;
    }

label_8083EEA8:
    ctx->pc = 0x8083EEA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083EEA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8083EEA8: cmpwi   r3, 4
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

label_8083EEAC:
    ctx->pc = 0x8083EEACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EEACu)) return;
    // 8083EEAC: bc    12, 2, 0x8083EEE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8083EEE8;
        }
    }

label_8083EEB0:
    ctx->pc = 0x8083EEB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083EEB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8083EEB0: bc    4, 0, 0x8083EEF4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8083EEF4;
        }
    }

label_8083EEB4:
    ctx->pc = 0x8083EEB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083EEB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8083EEB4: b       0x8083EED8
    {
            goto label_8083EED8;
    }

label_8083EEB8:
    ctx->pc = 0x8083EEB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083EEB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 8083EEB8: lis     r3, -28070
    ctx->gpr[3] = ((u32)(s32)(-28070) << 16);

label_8083EEBC:
    ctx->pc = 0x8083EEBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EEBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8083EEBC: lfs     f0, -452(r3)
    if (!ppc_fp_available_inline(ctx, 0x8083EEBCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-452);
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
label_8083EEC0:
    ctx->pc = 0x8083EEC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EEC0u)) return;
    // 8083EEC0: fmuls   f30, f30, f0
    if (!ppc_fp_available_inline(ctx, 0x8083EEC0u)) return;
    ppc_fmuls(ctx, 30, 30, 0);

label_8083EEC4:
    ctx->pc = 0x8083EEC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EEC4u)) return;
    // 8083EEC4: b       0x8083EEF4
    {
            goto label_8083EEF4;
    }

label_8083EEC8:
    ctx->pc = 0x8083EEC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083EEC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 8083EEC8: lis     r3, -28070
    ctx->gpr[3] = ((u32)(s32)(-28070) << 16);

label_8083EECC:
    ctx->pc = 0x8083EECCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EECCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8083EECC: lfs     f0, -448(r3)
    if (!ppc_fp_available_inline(ctx, 0x8083EECCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-448);
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
label_8083EED0:
    ctx->pc = 0x8083EED0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EED0u)) return;
    // 8083EED0: fmuls   f30, f30, f0
    if (!ppc_fp_available_inline(ctx, 0x8083EED0u)) return;
    ppc_fmuls(ctx, 30, 30, 0);

label_8083EED4:
    ctx->pc = 0x8083EED4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EED4u)) return;
    // 8083EED4: b       0x8083EEF4
    {
            goto label_8083EEF4;
    }

label_8083EED8:
    ctx->pc = 0x8083EED8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083EED8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 8083EED8: lis     r3, -28070
    ctx->gpr[3] = ((u32)(s32)(-28070) << 16);

label_8083EEDC:
    ctx->pc = 0x8083EEDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EEDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8083EEDC: lfs     f0, -444(r3)
    if (!ppc_fp_available_inline(ctx, 0x8083EEDCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-444);
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
label_8083EEE0:
    ctx->pc = 0x8083EEE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EEE0u)) return;
    // 8083EEE0: fmuls   f30, f30, f0
    if (!ppc_fp_available_inline(ctx, 0x8083EEE0u)) return;
    ppc_fmuls(ctx, 30, 30, 0);

label_8083EEE4:
    ctx->pc = 0x8083EEE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EEE4u)) return;
    // 8083EEE4: b       0x8083EEF4
    {
            goto label_8083EEF4;
    }

label_8083EEE8:
    ctx->pc = 0x8083EEE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083EEE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8083EEE8: lis     r3, -28070
    ctx->gpr[3] = ((u32)(s32)(-28070) << 16);

label_8083EEEC:
    ctx->pc = 0x8083EEECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EEECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8083EEEC: lfs     f0, -440(r3)
    if (!ppc_fp_available_inline(ctx, 0x8083EEECu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-440);
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
label_8083EEF0:
    ctx->pc = 0x8083EEF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EEF0u)) return;
    // 8083EEF0: fmuls   f30, f30, f0
    if (!ppc_fp_available_inline(ctx, 0x8083EEF0u)) return;
    ppc_fmuls(ctx, 30, 30, 0);

label_8083EEF4:
    ctx->pc = 0x8083EEF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083EEF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 8083EEF4: stfs     f30, 44(r31)
    if (!ppc_fp_available_inline(ctx, 0x8083EEF4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[30]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083EEF8:
    ctx->pc = 0x8083EEF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EEF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 8083EEF8: psq_l   f31, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x8083EEF8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x8083EEF8u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083EEFC:
    ctx->pc = 0x8083EEFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EEFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 8083EEFC: lfd     f31, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x8083EEFCu)) return;
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
label_8083EF00:
    ctx->pc = 0x8083EF00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EF00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8083EF00: psq_l   f30, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x8083EF00u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x8083EF00u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083EF04:
    ctx->pc = 0x8083EF04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EF04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8083EF04: lfd     f30, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x8083EF04u)) return;
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
label_8083EF08:
    ctx->pc = 0x8083EF08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EF08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8083EF08: lwz     r0, 68(r1)
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
label_8083EF0C:
    ctx->pc = 0x8083EF0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EF0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8083EF0C: lwz     r31, 28(r1)
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
label_8083EF10:
    ctx->pc = 0x8083EF10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x8083EF10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8083EF10: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083EF14:
    ctx->pc = 0x8083EF14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EF14u)) return;
    // 8083EF14: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_8083EF18:
    ctx->pc = 0x8083EF18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EF18u)) return;
    // 8083EF18: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8083E580;
        }
    }

label_8083EF1C:
    ctx->pc = 0x8083EF1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 19u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083EF1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 19u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 8083EF1C: stwu     r1, -48(r1)
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
label_8083EF20:
    ctx->pc = 0x8083EF20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EF20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 8083EF20: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083EF24:
    ctx->pc = 0x8083EF24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EF24u)) return;
    // 8083EF24: lis     r6, -28634
    ctx->gpr[6] = ((u32)(s32)(-28634) << 16);

label_8083EF28:
    ctx->pc = 0x8083EF28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EF28u)) return;
    // 8083EF28: lis     r5, -28634
    ctx->gpr[5] = ((u32)(s32)(-28634) << 16);

label_8083EF2C:
    ctx->pc = 0x8083EF2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EF2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 8083EF2C: stw     r0, 52(r1)
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
label_8083EF30:
    ctx->pc = 0x8083EF30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EF30u)) return;
    // 8083EF30: addi    r6, r6, -5402
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-5402);

label_8083EF34:
    ctx->pc = 0x8083EF34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EF34u)) return;
    // 8083EF34: lis     r7, -28034
    ctx->gpr[7] = ((u32)(s32)(-28034) << 16);

label_8083EF38:
    ctx->pc = 0x8083EF38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EF38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 8083EF38: stw     r31, 44(r1)
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
label_8083EF3C:
    ctx->pc = 0x8083EF3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EF3Cu)) return;
    // 8083EF3C: addi    r31, r7, -16640
    ctx->gpr[31] = ctx->gpr[7] + (u32)(s32)(-16640);

label_8083EF40:
    ctx->pc = 0x8083EF40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EF40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 8083EF40: stw     r30, 40(r1)
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
label_8083EF44:
    ctx->pc = 0x8083EF44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EF44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 8083EF44: stw     r29, 36(r1)
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
label_8083EF48:
    ctx->pc = 0x8083EF48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EF48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8083EF48: lha     r6, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[6] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083EF4C:
    ctx->pc = 0x8083EF4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EF4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8083EF4C: lha     r0, -5404(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-5404);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083EF50:
    ctx->pc = 0x8083EF50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EF50u)) return;
    // 8083EF50: rlwinm r5, r6, 8, 0, 23
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[6], 8u) & 0xFFFFFF00u;
    }

label_8083EF54:
    ctx->pc = 0x8083EF54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EF54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8083EF54: lwz     r30, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083EF58:
    ctx->pc = 0x8083EF58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EF58u)) return;
    // 8083EF58: or   r0, r5, r0
    {
        ctx->gpr[0] = ctx->gpr[5] | ctx->gpr[0];
    }

label_8083EF5C:
    ctx->pc = 0x8083EF5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EF5Cu)) return;
    // 8083EF5C: rlwinm r0, r0, 0, 16, 23
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FF00u;
    }

label_8083EF60:
    ctx->pc = 0x8083EF60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EF60u)) return;
    // 8083EF60: cmpwi   r0, 256
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(256);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8083EF64:
    ctx->pc = 0x8083EF64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EF64u)) return;
    // 8083EF64: bc    4, 2, 0x8083F000
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8083F000;
        }
    }

label_8083EF68:
    ctx->pc = 0x8083EF68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083EF68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8083EF68: cmpwi   r4, 0
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

label_8083EF6C:
    ctx->pc = 0x8083EF6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EF6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8083EF6C: lwz     r29, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083EF70:
    ctx->pc = 0x8083EF70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EF70u)) return;
    // 8083EF70: bc    4, 1, 0x8083EF84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8083EF84;
        }
    }

label_8083EF74:
    ctx->pc = 0x8083EF74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083EF74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8083EF74: cmpw    r4, r29
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(ctx->gpr[29]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8083EF78:
    ctx->pc = 0x8083EF78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EF78u)) return;
    // 8083EF78: bc    12, 1, 0x8083EF84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8083EF84;
        }
    }

label_8083EF7C:
    ctx->pc = 0x8083EF7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083EF7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8083EF7C: addi    r0, r4, -1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-1);

label_8083EF80:
    ctx->pc = 0x8083EF80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EF80u)) return;
    // 8083EF80: b       0x8083EFEC
    {
            goto label_8083EFEC;
    }

label_8083EF84:
    ctx->pc = 0x8083EF84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083EF84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8083EF84: bl      0x80571BF4
    {
            ctx->lr = 0x8083EF88u;
            ctx->pc = 0x80571BF4u;
            return;
    }

label_8083EF88:
    ctx->pc = 0x8083EF88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083EF88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8083EF88: cmpwi   r3, 4
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

label_8083EF8C:
    ctx->pc = 0x8083EF8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EF8Cu)) return;
    // 8083EF8C: bc    12, 2, 0x8083EF94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8083EF94;
        }
    }

label_8083EF90:
    ctx->pc = 0x8083EF90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083EF90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8083EF90: addi    r29, r29, -1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(-1);

label_8083EF94:
    ctx->pc = 0x8083EF94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083EF94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8083EF94: bl      0x8000DD2C
    {
            ctx->lr = 0x8083EF98u;
            ctx->pc = 0x8000DD2Cu;
            return;
    }

label_8083EF98:
    ctx->pc = 0x8083EF98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 21u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083EF98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 21u : 1u;
    // 8083EF98: lis     r4, 17200
    ctx->gpr[4] = ((u32)(s32)(17200) << 16);

label_8083EF9C:
    ctx->pc = 0x8083EF9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EF9Cu)) return;
    // 8083EF9C: xoris   r0, r3, 0x8000
    ctx->gpr[0] = ctx->gpr[3] ^ (0x8000u << 16);

label_8083EFA0:
    ctx->pc = 0x8083EFA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EFA0u)) return;
    // 8083EFA0: lis     r3, -28070
    ctx->gpr[3] = ((u32)(s32)(-28070) << 16);

label_8083EFA4:
    ctx->pc = 0x8083EFA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EFA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 8083EFA4: stw     r0, 12(r1)
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
label_8083EFA8:
    ctx->pc = 0x8083EFA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EFA8u)) return;
    // 8083EFA8: addi    r5, r3, -576
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-576);

label_8083EFAC:
    ctx->pc = 0x8083EFACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EFACu)) return;
    // 8083EFAC: xoris   r0, r29, 0x8000
    ctx->gpr[0] = ctx->gpr[29] ^ (0x8000u << 16);

label_8083EFB0:
    ctx->pc = 0x8083EFB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EFB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 8083EFB0: stw     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083EFB4:
    ctx->pc = 0x8083EFB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EFB4u)) return;
    // 8083EFB4: lis     r3, -28070
    ctx->gpr[3] = ((u32)(s32)(-28070) << 16);

label_8083EFB8:
    ctx->pc = 0x8083EFB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EFB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 8083EFB8: lfd     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x8083EFB8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083EFBC:
    ctx->pc = 0x8083EFBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EFBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 8083EFBC: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x8083EFBCu)) return;
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
label_8083EFC0:
    ctx->pc = 0x8083EFC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EFC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 8083EFC0: stw     r0, 20(r1)
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
label_8083EFC4:
    ctx->pc = 0x8083EFC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EFC4u)) return;
    // 8083EFC4: fsubs   f2, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x8083EFC4u)) return;
    ppc_fsubs(ctx, 2, 0, 3);

label_8083EFC8:
    ctx->pc = 0x8083EFC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EFC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 8083EFC8: lfs     f1, -588(r3)
    if (!ppc_fp_available_inline(ctx, 0x8083EFC8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-588);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083EFCC:
    ctx->pc = 0x8083EFCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EFCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8083EFCC: stw     r4, 16(r1)
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
label_8083EFD0:
    ctx->pc = 0x8083EFD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EFD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8083EFD0: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x8083EFD0u)) return;
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
label_8083EFD4:
    ctx->pc = 0x8083EFD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EFD4u)) return;
    // 8083EFD4: fmuls   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x8083EFD4u)) return;
    ppc_fmuls(ctx, 1, 1, 2);

label_8083EFD8:
    ctx->pc = 0x8083EFD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EFD8u)) return;
    // 8083EFD8: fsubs   f0, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x8083EFD8u)) return;
    ppc_fsubs(ctx, 0, 0, 3);

label_8083EFDC:
    ctx->pc = 0x8083EFDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EFDCu)) return;
    // 8083EFDC: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x8083EFDCu)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_8083EFE0:
    ctx->pc = 0x8083EFE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EFE0u)) return;
    // 8083EFE0: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x8083EFE0u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_8083EFE4:
    ctx->pc = 0x8083EFE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EFE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8083EFE4: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x8083EFE4u)) return;
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
label_8083EFE8:
    ctx->pc = 0x8083EFE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EFE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 8083EFE8: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083EFEC:
    ctx->pc = 0x8083EFECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083EFECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 8083EFEC: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_8083EFF0:
    ctx->pc = 0x8083EFF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EFF0u)) return;
    // 8083EFF0: addi    r3, r31, 16
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(16);

label_8083EFF4:
    ctx->pc = 0x8083EFF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EFF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8083EFF4: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083EFF8:
    ctx->pc = 0x8083EFF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EFF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8083EFF8: sth     r0, 18(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(18);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083EFFC:
    ctx->pc = 0x8083EFFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083EFFCu)) return;
    // 8083EFFC: b       0x8083F1E0
    {
            goto label_8083F1E0;
    }

label_8083F000:
    ctx->pc = 0x8083F000u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F000u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8083F000: cmpwi   r0, 768
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(768);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8083F004:
    ctx->pc = 0x8083F004u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F004u)) return;
    // 8083F004: bc    4, 2, 0x8083F0A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8083F0A4;
        }
    }

label_8083F008:
    ctx->pc = 0x8083F008u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F008u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 8083F008: addi    r3, r31, 0
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(0);

label_8083F00C:
    ctx->pc = 0x8083F00Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F00Cu)) return;
    // 8083F00C: cmpwi   r4, 0
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

label_8083F010:
    ctx->pc = 0x8083F010u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F010u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8083F010: lwz     r29, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F014:
    ctx->pc = 0x8083F014u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F014u)) return;
    // 8083F014: bc    4, 1, 0x8083F028
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8083F028;
        }
    }

label_8083F018:
    ctx->pc = 0x8083F018u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F018u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8083F018: cmpw    r4, r29
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(ctx->gpr[29]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8083F01C:
    ctx->pc = 0x8083F01Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F01Cu)) return;
    // 8083F01C: bc    12, 1, 0x8083F028
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8083F028;
        }
    }

label_8083F020:
    ctx->pc = 0x8083F020u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F020u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8083F020: addi    r0, r4, -1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-1);

label_8083F024:
    ctx->pc = 0x8083F024u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F024u)) return;
    // 8083F024: b       0x8083F090
    {
            goto label_8083F090;
    }

label_8083F028:
    ctx->pc = 0x8083F028u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F028u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8083F028: bl      0x80571BF4
    {
            ctx->lr = 0x8083F02Cu;
            ctx->pc = 0x80571BF4u;
            return;
    }

label_8083F02C:
    ctx->pc = 0x8083F02Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F02Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8083F02C: cmpwi   r3, 4
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

label_8083F030:
    ctx->pc = 0x8083F030u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F030u)) return;
    // 8083F030: bc    12, 2, 0x8083F038
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8083F038;
        }
    }

label_8083F034:
    ctx->pc = 0x8083F034u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F034u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8083F034: addi    r29, r29, -1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(-1);

label_8083F038:
    ctx->pc = 0x8083F038u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F038u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8083F038: bl      0x8000DD2C
    {
            ctx->lr = 0x8083F03Cu;
            ctx->pc = 0x8000DD2Cu;
            return;
    }

label_8083F03C:
    ctx->pc = 0x8083F03Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 21u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F03Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 21u : 1u;
    // 8083F03C: lis     r4, 17200
    ctx->gpr[4] = ((u32)(s32)(17200) << 16);

label_8083F040:
    ctx->pc = 0x8083F040u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F040u)) return;
    // 8083F040: xoris   r0, r3, 0x8000
    ctx->gpr[0] = ctx->gpr[3] ^ (0x8000u << 16);

label_8083F044:
    ctx->pc = 0x8083F044u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F044u)) return;
    // 8083F044: lis     r3, -28070
    ctx->gpr[3] = ((u32)(s32)(-28070) << 16);

label_8083F048:
    ctx->pc = 0x8083F048u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F048u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 8083F048: stw     r0, 28(r1)
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
label_8083F04C:
    ctx->pc = 0x8083F04Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F04Cu)) return;
    // 8083F04C: addi    r5, r3, -576
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-576);

label_8083F050:
    ctx->pc = 0x8083F050u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F050u)) return;
    // 8083F050: xoris   r0, r29, 0x8000
    ctx->gpr[0] = ctx->gpr[29] ^ (0x8000u << 16);

label_8083F054:
    ctx->pc = 0x8083F054u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F054u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 8083F054: stw     r4, 24(r1)
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
label_8083F058:
    ctx->pc = 0x8083F058u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F058u)) return;
    // 8083F058: lis     r3, -28070
    ctx->gpr[3] = ((u32)(s32)(-28070) << 16);

label_8083F05C:
    ctx->pc = 0x8083F05Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F05Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 8083F05C: lfd     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x8083F05Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F060:
    ctx->pc = 0x8083F060u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F060u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 8083F060: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x8083F060u)) return;
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
label_8083F064:
    ctx->pc = 0x8083F064u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F064u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 8083F064: stw     r0, 20(r1)
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
label_8083F068:
    ctx->pc = 0x8083F068u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F068u)) return;
    // 8083F068: fsubs   f2, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x8083F068u)) return;
    ppc_fsubs(ctx, 2, 0, 3);

label_8083F06C:
    ctx->pc = 0x8083F06Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F06Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 8083F06C: lfs     f1, -588(r3)
    if (!ppc_fp_available_inline(ctx, 0x8083F06Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-588);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F070:
    ctx->pc = 0x8083F070u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F070u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8083F070: stw     r4, 16(r1)
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
label_8083F074:
    ctx->pc = 0x8083F074u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F074u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8083F074: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x8083F074u)) return;
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
label_8083F078:
    ctx->pc = 0x8083F078u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F078u)) return;
    // 8083F078: fmuls   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x8083F078u)) return;
    ppc_fmuls(ctx, 1, 1, 2);

label_8083F07C:
    ctx->pc = 0x8083F07Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F07Cu)) return;
    // 8083F07C: fsubs   f0, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x8083F07Cu)) return;
    ppc_fsubs(ctx, 0, 0, 3);

label_8083F080:
    ctx->pc = 0x8083F080u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F080u)) return;
    // 8083F080: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x8083F080u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_8083F084:
    ctx->pc = 0x8083F084u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F084u)) return;
    // 8083F084: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x8083F084u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_8083F088:
    ctx->pc = 0x8083F088u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F088u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8083F088: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x8083F088u)) return;
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
label_8083F08C:
    ctx->pc = 0x8083F08Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F08Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 8083F08C: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F090:
    ctx->pc = 0x8083F090u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F090u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 8083F090: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_8083F094:
    ctx->pc = 0x8083F094u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F094u)) return;
    // 8083F094: addi    r3, r31, 48
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(48);

label_8083F098:
    ctx->pc = 0x8083F098u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F098u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8083F098: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F09C:
    ctx->pc = 0x8083F09Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F09Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8083F09C: sth     r0, 18(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(18);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F0A0:
    ctx->pc = 0x8083F0A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F0A0u)) return;
    // 8083F0A0: b       0x8083F1E0
    {
            goto label_8083F1E0;
    }

label_8083F0A4:
    ctx->pc = 0x8083F0A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F0A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8083F0A4: cmpwi   r0, 2048
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(2048);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8083F0A8:
    ctx->pc = 0x8083F0A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F0A8u)) return;
    // 8083F0A8: bc    4, 2, 0x8083F148
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8083F148;
        }
    }

label_8083F0AC:
    ctx->pc = 0x8083F0ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F0ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 8083F0AC: addi    r3, r31, 0
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(0);

label_8083F0B0:
    ctx->pc = 0x8083F0B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F0B0u)) return;
    // 8083F0B0: cmpwi   r4, 0
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

label_8083F0B4:
    ctx->pc = 0x8083F0B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F0B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8083F0B4: lwz     r29, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F0B8:
    ctx->pc = 0x8083F0B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F0B8u)) return;
    // 8083F0B8: bc    4, 1, 0x8083F0CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8083F0CC;
        }
    }

label_8083F0BC:
    ctx->pc = 0x8083F0BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F0BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8083F0BC: cmpw    r4, r29
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(ctx->gpr[29]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8083F0C0:
    ctx->pc = 0x8083F0C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F0C0u)) return;
    // 8083F0C0: bc    12, 1, 0x8083F0CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8083F0CC;
        }
    }

label_8083F0C4:
    ctx->pc = 0x8083F0C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F0C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8083F0C4: addi    r0, r4, -1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-1);

label_8083F0C8:
    ctx->pc = 0x8083F0C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F0C8u)) return;
    // 8083F0C8: b       0x8083F134
    {
            goto label_8083F134;
    }

label_8083F0CC:
    ctx->pc = 0x8083F0CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F0CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8083F0CC: bl      0x80571BF4
    {
            ctx->lr = 0x8083F0D0u;
            ctx->pc = 0x80571BF4u;
            return;
    }

label_8083F0D0:
    ctx->pc = 0x8083F0D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F0D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8083F0D0: cmpwi   r3, 4
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

label_8083F0D4:
    ctx->pc = 0x8083F0D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F0D4u)) return;
    // 8083F0D4: bc    12, 2, 0x8083F0DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8083F0DC;
        }
    }

label_8083F0D8:
    ctx->pc = 0x8083F0D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F0D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8083F0D8: addi    r29, r29, -1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(-1);

label_8083F0DC:
    ctx->pc = 0x8083F0DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F0DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8083F0DC: bl      0x8000DD2C
    {
            ctx->lr = 0x8083F0E0u;
            ctx->pc = 0x8000DD2Cu;
            return;
    }

label_8083F0E0:
    ctx->pc = 0x8083F0E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 21u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F0E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 21u : 1u;
    // 8083F0E0: lis     r4, 17200
    ctx->gpr[4] = ((u32)(s32)(17200) << 16);

label_8083F0E4:
    ctx->pc = 0x8083F0E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F0E4u)) return;
    // 8083F0E4: xoris   r0, r3, 0x8000
    ctx->gpr[0] = ctx->gpr[3] ^ (0x8000u << 16);

label_8083F0E8:
    ctx->pc = 0x8083F0E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F0E8u)) return;
    // 8083F0E8: lis     r3, -28070
    ctx->gpr[3] = ((u32)(s32)(-28070) << 16);

label_8083F0EC:
    ctx->pc = 0x8083F0ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F0ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 8083F0EC: stw     r0, 28(r1)
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
label_8083F0F0:
    ctx->pc = 0x8083F0F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F0F0u)) return;
    // 8083F0F0: addi    r5, r3, -576
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-576);

label_8083F0F4:
    ctx->pc = 0x8083F0F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F0F4u)) return;
    // 8083F0F4: xoris   r0, r29, 0x8000
    ctx->gpr[0] = ctx->gpr[29] ^ (0x8000u << 16);

label_8083F0F8:
    ctx->pc = 0x8083F0F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F0F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 8083F0F8: stw     r4, 24(r1)
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
label_8083F0FC:
    ctx->pc = 0x8083F0FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F0FCu)) return;
    // 8083F0FC: lis     r3, -28070
    ctx->gpr[3] = ((u32)(s32)(-28070) << 16);

label_8083F100:
    ctx->pc = 0x8083F100u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F100u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 8083F100: lfd     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x8083F100u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F104:
    ctx->pc = 0x8083F104u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F104u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 8083F104: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x8083F104u)) return;
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
label_8083F108:
    ctx->pc = 0x8083F108u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F108u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 8083F108: stw     r0, 20(r1)
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
label_8083F10C:
    ctx->pc = 0x8083F10Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F10Cu)) return;
    // 8083F10C: fsubs   f2, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x8083F10Cu)) return;
    ppc_fsubs(ctx, 2, 0, 3);

label_8083F110:
    ctx->pc = 0x8083F110u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F110u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 8083F110: lfs     f1, -588(r3)
    if (!ppc_fp_available_inline(ctx, 0x8083F110u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-588);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F114:
    ctx->pc = 0x8083F114u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F114u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8083F114: stw     r4, 16(r1)
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
label_8083F118:
    ctx->pc = 0x8083F118u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F118u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8083F118: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x8083F118u)) return;
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
label_8083F11C:
    ctx->pc = 0x8083F11Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F11Cu)) return;
    // 8083F11C: fmuls   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x8083F11Cu)) return;
    ppc_fmuls(ctx, 1, 1, 2);

label_8083F120:
    ctx->pc = 0x8083F120u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F120u)) return;
    // 8083F120: fsubs   f0, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x8083F120u)) return;
    ppc_fsubs(ctx, 0, 0, 3);

label_8083F124:
    ctx->pc = 0x8083F124u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F124u)) return;
    // 8083F124: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x8083F124u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_8083F128:
    ctx->pc = 0x8083F128u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F128u)) return;
    // 8083F128: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x8083F128u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_8083F12C:
    ctx->pc = 0x8083F12Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F12Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8083F12C: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x8083F12Cu)) return;
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
label_8083F130:
    ctx->pc = 0x8083F130u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F130u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 8083F130: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F134:
    ctx->pc = 0x8083F134u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F134u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 8083F134: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_8083F138:
    ctx->pc = 0x8083F138u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F138u)) return;
    // 8083F138: addi    r3, r31, 60
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(60);

label_8083F13C:
    ctx->pc = 0x8083F13Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F13Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8083F13C: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F140:
    ctx->pc = 0x8083F140u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F140u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8083F140: sth     r0, 18(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(18);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F144:
    ctx->pc = 0x8083F144u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F144u)) return;
    // 8083F144: b       0x8083F1E0
    {
            goto label_8083F1E0;
    }

label_8083F148:
    ctx->pc = 0x8083F148u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F148u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 8083F148: addi    r3, r31, 0
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(0);

label_8083F14C:
    ctx->pc = 0x8083F14Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F14Cu)) return;
    // 8083F14C: cmpwi   r4, 0
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

label_8083F150:
    ctx->pc = 0x8083F150u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F150u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8083F150: lwz     r29, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F154:
    ctx->pc = 0x8083F154u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F154u)) return;
    // 8083F154: bc    4, 1, 0x8083F168
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8083F168;
        }
    }

label_8083F158:
    ctx->pc = 0x8083F158u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F158u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8083F158: cmpw    r4, r29
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(ctx->gpr[29]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8083F15C:
    ctx->pc = 0x8083F15Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F15Cu)) return;
    // 8083F15C: bc    12, 1, 0x8083F168
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8083F168;
        }
    }

label_8083F160:
    ctx->pc = 0x8083F160u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F160u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8083F160: addi    r0, r4, -1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-1);

label_8083F164:
    ctx->pc = 0x8083F164u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F164u)) return;
    // 8083F164: b       0x8083F1D0
    {
            goto label_8083F1D0;
    }

label_8083F168:
    ctx->pc = 0x8083F168u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F168u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8083F168: bl      0x80571BF4
    {
            ctx->lr = 0x8083F16Cu;
            ctx->pc = 0x80571BF4u;
            return;
    }

label_8083F16C:
    ctx->pc = 0x8083F16Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F16Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8083F16C: cmpwi   r3, 4
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

label_8083F170:
    ctx->pc = 0x8083F170u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F170u)) return;
    // 8083F170: bc    12, 2, 0x8083F178
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8083F178;
        }
    }

label_8083F174:
    ctx->pc = 0x8083F174u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F174u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8083F174: addi    r29, r29, -1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(-1);

label_8083F178:
    ctx->pc = 0x8083F178u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F178u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8083F178: bl      0x8000DD2C
    {
            ctx->lr = 0x8083F17Cu;
            ctx->pc = 0x8000DD2Cu;
            return;
    }

label_8083F17C:
    ctx->pc = 0x8083F17Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 21u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F17Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 21u : 1u;
    // 8083F17C: lis     r4, 17200
    ctx->gpr[4] = ((u32)(s32)(17200) << 16);

label_8083F180:
    ctx->pc = 0x8083F180u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F180u)) return;
    // 8083F180: xoris   r0, r3, 0x8000
    ctx->gpr[0] = ctx->gpr[3] ^ (0x8000u << 16);

label_8083F184:
    ctx->pc = 0x8083F184u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F184u)) return;
    // 8083F184: lis     r3, -28070
    ctx->gpr[3] = ((u32)(s32)(-28070) << 16);

label_8083F188:
    ctx->pc = 0x8083F188u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F188u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 8083F188: stw     r0, 28(r1)
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
label_8083F18C:
    ctx->pc = 0x8083F18Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F18Cu)) return;
    // 8083F18C: addi    r5, r3, -576
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-576);

label_8083F190:
    ctx->pc = 0x8083F190u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F190u)) return;
    // 8083F190: xoris   r0, r29, 0x8000
    ctx->gpr[0] = ctx->gpr[29] ^ (0x8000u << 16);

label_8083F194:
    ctx->pc = 0x8083F194u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F194u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 8083F194: stw     r4, 24(r1)
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
label_8083F198:
    ctx->pc = 0x8083F198u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F198u)) return;
    // 8083F198: lis     r3, -28070
    ctx->gpr[3] = ((u32)(s32)(-28070) << 16);

label_8083F19C:
    ctx->pc = 0x8083F19Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F19Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 8083F19C: lfd     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x8083F19Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F1A0:
    ctx->pc = 0x8083F1A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F1A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 8083F1A0: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x8083F1A0u)) return;
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
label_8083F1A4:
    ctx->pc = 0x8083F1A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F1A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 8083F1A4: stw     r0, 20(r1)
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
label_8083F1A8:
    ctx->pc = 0x8083F1A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F1A8u)) return;
    // 8083F1A8: fsubs   f2, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x8083F1A8u)) return;
    ppc_fsubs(ctx, 2, 0, 3);

label_8083F1AC:
    ctx->pc = 0x8083F1ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F1ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 8083F1AC: lfs     f1, -588(r3)
    if (!ppc_fp_available_inline(ctx, 0x8083F1ACu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-588);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F1B0:
    ctx->pc = 0x8083F1B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F1B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8083F1B0: stw     r4, 16(r1)
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
label_8083F1B4:
    ctx->pc = 0x8083F1B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F1B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8083F1B4: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x8083F1B4u)) return;
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
label_8083F1B8:
    ctx->pc = 0x8083F1B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F1B8u)) return;
    // 8083F1B8: fmuls   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x8083F1B8u)) return;
    ppc_fmuls(ctx, 1, 1, 2);

label_8083F1BC:
    ctx->pc = 0x8083F1BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F1BCu)) return;
    // 8083F1BC: fsubs   f0, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x8083F1BCu)) return;
    ppc_fsubs(ctx, 0, 0, 3);

label_8083F1C0:
    ctx->pc = 0x8083F1C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F1C0u)) return;
    // 8083F1C0: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x8083F1C0u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_8083F1C4:
    ctx->pc = 0x8083F1C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F1C4u)) return;
    // 8083F1C4: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x8083F1C4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_8083F1C8:
    ctx->pc = 0x8083F1C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F1C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8083F1C8: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x8083F1C8u)) return;
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
label_8083F1CC:
    ctx->pc = 0x8083F1CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F1CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 8083F1CC: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F1D0:
    ctx->pc = 0x8083F1D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F1D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 8083F1D0: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_8083F1D4:
    ctx->pc = 0x8083F1D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F1D4u)) return;
    // 8083F1D4: addi    r3, r31, 84
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(84);

label_8083F1D8:
    ctx->pc = 0x8083F1D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F1D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8083F1D8: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F1DC:
    ctx->pc = 0x8083F1DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F1DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 8083F1DC: sth     r0, 18(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(18);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F1E0:
    ctx->pc = 0x8083F1E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F1E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8083F1E0: lwz     r0, 52(r1)
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
label_8083F1E4:
    ctx->pc = 0x8083F1E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F1E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8083F1E4: lwz     r31, 44(r1)
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
label_8083F1E8:
    ctx->pc = 0x8083F1E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F1E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8083F1E8: lwz     r30, 40(r1)
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
label_8083F1EC:
    ctx->pc = 0x8083F1ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F1ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8083F1EC: lwz     r29, 36(r1)
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
label_8083F1F0:
    ctx->pc = 0x8083F1F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x8083F1F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8083F1F0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F1F4:
    ctx->pc = 0x8083F1F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F1F4u)) return;
    // 8083F1F4: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_8083F1F8:
    ctx->pc = 0x8083F1F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F1F8u)) return;
    // 8083F1F8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8083E580;
        }
    }

label_8083F1FC:
    ctx->pc = 0x8083F1FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 24u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F1FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 24u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 8083F1FC: stwu     r1, -80(r1)
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
label_8083F200:
    ctx->pc = 0x8083F200u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F200u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 8083F200: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F204:
    ctx->pc = 0x8083F204u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F204u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 8083F204: stw     r0, 84(r1)
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
label_8083F208:
    ctx->pc = 0x8083F208u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F208u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 8083F208: stfd     f31, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x8083F208u)) return;
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
label_8083F20C:
    ctx->pc = 0x8083F20Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F20Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 8083F20C: psq_st   f31, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x8083F20Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x8083F20Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F210:
    ctx->pc = 0x8083F210u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F210u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 8083F210: stfd     f30, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x8083F210u)) return;
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
label_8083F214:
    ctx->pc = 0x8083F214u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F214u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 8083F214: psq_st   f30, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x8083F214u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x8083F214u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F218:
    ctx->pc = 0x8083F218u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F218u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 8083F218: stw     r31, 44(r1)
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
label_8083F21C:
    ctx->pc = 0x8083F21Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F21Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 8083F21C: stw     r30, 40(r1)
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
label_8083F220:
    ctx->pc = 0x8083F220u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F220u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 8083F220: stw     r29, 36(r1)
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
label_8083F224:
    ctx->pc = 0x8083F224u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F224u)) return;
    // 8083F224: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8083F228:
    ctx->pc = 0x8083F228u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F228u)) return;
    // 8083F228: lis     r3, -28034
    ctx->gpr[3] = ((u32)(s32)(-28034) << 16);

label_8083F22C:
    ctx->pc = 0x8083F22Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F22Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 8083F22C: lwz     r29, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F230:
    ctx->pc = 0x8083F230u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F230u)) return;
    // 8083F230: addi    r4, r3, -15444
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-15444);

label_8083F234:
    ctx->pc = 0x8083F234u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F234u)) return;
    // 8083F234: lis     r3, -28070
    ctx->gpr[3] = ((u32)(s32)(-28070) << 16);

label_8083F238:
    ctx->pc = 0x8083F238u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F238u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 8083F238: lha     r0, 18(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(18);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F23C:
    ctx->pc = 0x8083F23Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F23Cu)) return;
    // 8083F23C: addi    r30, r4, 12
    ctx->gpr[30] = ctx->gpr[4] + (u32)(s32)(12);

label_8083F240:
    ctx->pc = 0x8083F240u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F240u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8083F240: lfs     f2, 44(r29)
    if (!ppc_fp_available_inline(ctx, 0x8083F240u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(44);
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
label_8083F244:
    ctx->pc = 0x8083F244u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F244u)) return;
    // 8083F244: rlwinm r0, r0, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_8083F248:
    ctx->pc = 0x8083F248u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F248u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8083F248: lfs     f0, -496(r3)
    if (!ppc_fp_available_inline(ctx, 0x8083F248u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-496);
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
label_8083F24C:
    ctx->pc = 0x8083F24Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F24Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8083F24C: lfsx    f1, r30, r0
    if (!ppc_fp_available_inline(ctx, 0x8083F24Cu)) return;
    {
        u32 ea = ctx->gpr[30] + ctx->gpr[0];
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F250:
    ctx->pc = 0x8083F250u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F250u)) return;
    // 8083F250: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x8083F250u)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_8083F254:
    ctx->pc = 0x8083F254u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F254u)) return;
    // 8083F254: fmuls   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x8083F254u)) return;
    ppc_fmuls(ctx, 1, 0, 1);

label_8083F258:
    ctx->pc = 0x8083F258u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F258u)) return;
    // 8083F258: bl      0x800137DC
    {
            ctx->lr = 0x8083F25Cu;
            ctx->pc = 0x800137DCu;
            return;
    }

label_8083F25C:
    ctx->pc = 0x8083F25Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 19u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F25Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 19u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 8083F25C: lha     r0, 18(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(18);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F260:
    ctx->pc = 0x8083F260u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F260u)) return;
    // 8083F260: lis     r4, -28070
    ctx->gpr[4] = ((u32)(s32)(-28070) << 16);

label_8083F264:
    ctx->pc = 0x8083F264u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F264u)) return;
    // 8083F264: lis     r3, -28034
    ctx->gpr[3] = ((u32)(s32)(-28034) << 16);

label_8083F268:
    ctx->pc = 0x8083F268u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F268u)) return;
    // 8083F268: lis     r5, -28070
    ctx->gpr[5] = ((u32)(s32)(-28070) << 16);

label_8083F26C:
    ctx->pc = 0x8083F26Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F26Cu)) return;
    // 8083F26C: rlwinm r6, r0, 4, 0, 27
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_8083F270:
    ctx->pc = 0x8083F270u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F270u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 8083F270: lfs     f3, -440(r4)
    if (!ppc_fp_available_inline(ctx, 0x8083F270u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-440);
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
label_8083F274:
    ctx->pc = 0x8083F274u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F274u)) return;
    // 8083F274: addi    r0, r3, -15444
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-15444);

label_8083F278:
    ctx->pc = 0x8083F278u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F278u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 8083F278: lfsx    f0, r30, r6
    if (!ppc_fp_available_inline(ctx, 0x8083F278u)) return;
    {
        u32 ea = ctx->gpr[30] + ctx->gpr[6];
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
label_8083F27C:
    ctx->pc = 0x8083F27Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F27Cu)) return;
    // 8083F27C: add   r3, r0, r6
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8083F280:
    ctx->pc = 0x8083F280u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F280u)) return;
    // 8083F280: frsp    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x8083F280u)) return;
    ppc_frsp(ctx, 1, 1);

label_8083F284:
    ctx->pc = 0x8083F284u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F284u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 8083F284: lfs     f2, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x8083F284u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
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
label_8083F288:
    ctx->pc = 0x8083F288u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F288u)) return;
    // 8083F288: lis     r3, -28070
    ctx->gpr[3] = ((u32)(s32)(-28070) << 16);

label_8083F28C:
    ctx->pc = 0x8083F28Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F28Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8083F28C: lfs     f4, -464(r5)
    if (!ppc_fp_available_inline(ctx, 0x8083F28Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-464);
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
label_8083F290:
    ctx->pc = 0x8083F290u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F290u)) return;
    // 8083F290: fmuls   f2, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x8083F290u)) return;
    ppc_fmuls(ctx, 2, 2, 0);

label_8083F294:
    ctx->pc = 0x8083F294u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F294u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8083F294: lfs     f0, -496(r3)
    if (!ppc_fp_available_inline(ctx, 0x8083F294u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-496);
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
label_8083F298:
    ctx->pc = 0x8083F298u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F298u)) return;
    // 8083F298: fmuls   f31, f4, f1
    if (!ppc_fp_available_inline(ctx, 0x8083F298u)) return;
    ppc_fmuls(ctx, 31, 4, 1);

label_8083F29C:
    ctx->pc = 0x8083F29Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F29Cu)) return;
    // 8083F29C: fmuls   f2, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x8083F29Cu)) return;
    ppc_fmuls(ctx, 2, 3, 2);

label_8083F2A0:
    ctx->pc = 0x8083F2A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F2A0u)) return;
    // 8083F2A0: fmuls   f1, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x8083F2A0u)) return;
    ppc_fmuls(ctx, 1, 0, 2);

label_8083F2A4:
    ctx->pc = 0x8083F2A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F2A4u)) return;
    // 8083F2A4: bl      0x800137DC
    {
            ctx->lr = 0x8083F2A8u;
            ctx->pc = 0x800137DCu;
            return;
    }

label_8083F2A8:
    ctx->pc = 0x8083F2A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F2A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 8083F2A8: lis     r4, -28070
    ctx->gpr[4] = ((u32)(s32)(-28070) << 16);

label_8083F2AC:
    ctx->pc = 0x8083F2ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F2ACu)) return;
    // 8083F2AC: lis     r3, -28619
    ctx->gpr[3] = ((u32)(s32)(-28619) << 16);

label_8083F2B0:
    ctx->pc = 0x8083F2B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F2B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8083F2B0: lfs     f0, -464(r4)
    if (!ppc_fp_available_inline(ctx, 0x8083F2B0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-464);
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
label_8083F2B4:
    ctx->pc = 0x8083F2B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F2B4u)) return;
    // 8083F2B4: frsp    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x8083F2B4u)) return;
    ppc_frsp(ctx, 1, 1);

label_8083F2B8:
    ctx->pc = 0x8083F2B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F2B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8083F2B8: lwz     r4, 20200(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20200);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F2BC:
    ctx->pc = 0x8083F2BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F2BCu)) return;
    // 8083F2BC: fmuls   f30, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x8083F2BCu)) return;
    ppc_fmuls(ctx, 30, 0, 1);

label_8083F2C0:
    ctx->pc = 0x8083F2C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F2C0u)) return;
    // 8083F2C0: cmpwi   r4, 2350
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(2350);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8083F2C4:
    ctx->pc = 0x8083F2C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F2C4u)) return;
    // 8083F2C4: bc    12, 0, 0x8083F360
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8083F360;
        }
    }

label_8083F2C8:
    ctx->pc = 0x8083F2C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F2C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 8083F2C8: lis     r3, -28070
    ctx->gpr[3] = ((u32)(s32)(-28070) << 16);

label_8083F2CC:
    ctx->pc = 0x8083F2CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F2CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8083F2CC: lfs     f0, -436(r3)
    if (!ppc_fp_available_inline(ctx, 0x8083F2CCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-436);
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
label_8083F2D0:
    ctx->pc = 0x8083F2D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F2D0u)) return;
    // 8083F2D0: fcmpo   cr0, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x8083F2D0u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[31], ctx->fpr[0], true);

label_8083F2D4:
    ctx->pc = 0x8083F2D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F2D4u)) return;
    // 8083F2D4: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_8083F2D8:
    ctx->pc = 0x8083F2D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F2D8u)) return;
    // 8083F2D8: bc    4, 2, 0x8083F360
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8083F360;
        }
    }

label_8083F2DC:
    ctx->pc = 0x8083F2DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F2DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 8083F2DC: addi    r3, r4, 20
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(20);

label_8083F2E0:
    ctx->pc = 0x8083F2E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F2E0u)) return;
    // 8083F2E0: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_8083F2E4:
    ctx->pc = 0x8083F2E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F2E4u)) return;
    // 8083F2E4: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_8083F2E8:
    ctx->pc = 0x8083F2E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F2E8u)) return;
    // 8083F2E8: lis     r4, -28070
    ctx->gpr[4] = ((u32)(s32)(-28070) << 16);

label_8083F2EC:
    ctx->pc = 0x8083F2ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F2ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8083F2EC: stw     r3, 12(r1)
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
label_8083F2F0:
    ctx->pc = 0x8083F2F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F2F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8083F2F0: lfd     f1, -576(r4)
    if (!ppc_fp_available_inline(ctx, 0x8083F2F0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-576);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F2F4:
    ctx->pc = 0x8083F2F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F2F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8083F2F4: stw     r0, 8(r1)
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
label_8083F2F8:
    ctx->pc = 0x8083F2F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F2F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8083F2F8: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x8083F2F8u)) return;
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
label_8083F2FC:
    ctx->pc = 0x8083F2FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F2FCu)) return;
    // 8083F2FC: fsubs   f31, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x8083F2FCu)) return;
    ppc_fsubs(ctx, 31, 0, 1);

label_8083F300:
    ctx->pc = 0x8083F300u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F300u)) return;
    // 8083F300: bl      0x8000DD2C
    {
            ctx->lr = 0x8083F304u;
            ctx->pc = 0x8000DD2Cu;
            return;
    }

label_8083F304:
    ctx->pc = 0x8083F304u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 19u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F304u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 19u : 1u;
    // 8083F304: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_8083F308:
    ctx->pc = 0x8083F308u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F308u)) return;
    // 8083F308: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_8083F30C:
    ctx->pc = 0x8083F30Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F30Cu)) return;
    // 8083F30C: lis     r4, -28070
    ctx->gpr[4] = ((u32)(s32)(-28070) << 16);

label_8083F310:
    ctx->pc = 0x8083F310u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F310u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 8083F310: stw     r3, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F314:
    ctx->pc = 0x8083F314u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F314u)) return;
    // 8083F314: addi    r5, r4, -576
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-576);

label_8083F318:
    ctx->pc = 0x8083F318u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F318u)) return;
    // 8083F318: lis     r3, -28070
    ctx->gpr[3] = ((u32)(s32)(-28070) << 16);

label_8083F31C:
    ctx->pc = 0x8083F31Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F31Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 8083F31C: stw     r0, 16(r1)
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
label_8083F320:
    ctx->pc = 0x8083F320u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F320u)) return;
    // 8083F320: addi    r4, r3, -588
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-588);

label_8083F324:
    ctx->pc = 0x8083F324u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F324u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 8083F324: lfd     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x8083F324u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F328:
    ctx->pc = 0x8083F328u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F328u)) return;
    // 8083F328: fsubs   f1, f31, f30
    if (!ppc_fp_available_inline(ctx, 0x8083F328u)) return;
    ppc_fsubs(ctx, 1, 31, 30);

label_8083F32C:
    ctx->pc = 0x8083F32Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F32Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 8083F32C: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x8083F32Cu)) return;
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
label_8083F330:
    ctx->pc = 0x8083F330u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F330u)) return;
    // 8083F330: lis     r3, -28070
    ctx->gpr[3] = ((u32)(s32)(-28070) << 16);

label_8083F334:
    ctx->pc = 0x8083F334u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F334u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8083F334: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x8083F334u)) return;
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
label_8083F338:
    ctx->pc = 0x8083F338u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F338u)) return;
    // 8083F338: fsubs   f3, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x8083F338u)) return;
    ppc_fsubs(ctx, 3, 0, 3);

label_8083F33C:
    ctx->pc = 0x8083F33Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F33Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8083F33C: lfs     f0, -496(r3)
    if (!ppc_fp_available_inline(ctx, 0x8083F33Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-496);
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
label_8083F340:
    ctx->pc = 0x8083F340u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F340u)) return;
    // 8083F340: fmuls   f2, f2, f3
    if (!ppc_fp_available_inline(ctx, 0x8083F340u)) return;
    ppc_fmuls(ctx, 2, 2, 3);

label_8083F344:
    ctx->pc = 0x8083F344u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F344u)) return;
    // 8083F344: fmadds f1, f1, f2, f30
    if (!ppc_fp_available_inline(ctx, 0x8083F344u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[1], ctx->fpr[2], ctx->fpr[30], true, false, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_8083F348:
    ctx->pc = 0x8083F348u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F348u)) return;
    // 8083F348: fmuls   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x8083F348u)) return;
    ppc_fmuls(ctx, 1, 0, 1);

label_8083F34C:
    ctx->pc = 0x8083F34Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F34Cu)) return;
    // 8083F34C: bl      0x800137DC
    {
            ctx->lr = 0x8083F350u;
            ctx->pc = 0x800137DCu;
            return;
    }

label_8083F350:
    ctx->pc = 0x8083F350u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F350u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 8083F350: lis     r3, -28070
    ctx->gpr[3] = ((u32)(s32)(-28070) << 16);

label_8083F354:
    ctx->pc = 0x8083F354u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F354u)) return;
    // 8083F354: frsp    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x8083F354u)) return;
    ppc_frsp(ctx, 1, 1);

label_8083F358:
    ctx->pc = 0x8083F358u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F358u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8083F358: lfs     f0, -464(r3)
    if (!ppc_fp_available_inline(ctx, 0x8083F358u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-464);
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
label_8083F35C:
    ctx->pc = 0x8083F35Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F35Cu)) return;
    // 8083F35C: fmuls   f31, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x8083F35Cu)) return;
    ppc_fmuls(ctx, 31, 0, 1);

label_8083F360:
    ctx->pc = 0x8083F360u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 14u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F360u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 14u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 8083F360: lwz     r3, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F364:
    ctx->pc = 0x8083F364u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F364u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 8083F364: stfs     f31, 60(r3)
    if (!ppc_fp_available_inline(ctx, 0x8083F364u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(60);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F368:
    ctx->pc = 0x8083F368u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F368u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 8083F368: psq_l   f31, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x8083F368u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x8083F368u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F36C:
    ctx->pc = 0x8083F36Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F36Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 8083F36C: lfd     f31, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x8083F36Cu)) return;
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
label_8083F370:
    ctx->pc = 0x8083F370u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F370u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 8083F370: psq_l   f30, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x8083F370u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x8083F370u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F374:
    ctx->pc = 0x8083F374u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F374u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 8083F374: lfd     f30, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x8083F374u)) return;
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
label_8083F378:
    ctx->pc = 0x8083F378u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F378u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8083F378: lwz     r31, 44(r1)
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
label_8083F37C:
    ctx->pc = 0x8083F37Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F37Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8083F37C: lwz     r30, 40(r1)
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
label_8083F380:
    ctx->pc = 0x8083F380u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F380u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8083F380: lwz     r0, 84(r1)
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
label_8083F384:
    ctx->pc = 0x8083F384u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F384u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8083F384: lwz     r29, 36(r1)
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
label_8083F388:
    ctx->pc = 0x8083F388u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x8083F388u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8083F388: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F38C:
    ctx->pc = 0x8083F38Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F38Cu)) return;
    // 8083F38C: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_8083F390:
    ctx->pc = 0x8083F390u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F390u)) return;
    // 8083F390: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8083E580;
        }
    }

label_8083F394:
    ctx->pc = 0x8083F394u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F394u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8083F394: lwz     r5, 32(r3)
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
label_8083F398:
    ctx->pc = 0x8083F398u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F398u)) return;
    // 8083F398: rlwinm. r0, r4, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x000000FFu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8083F39C:
    ctx->pc = 0x8083F39Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F39Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8083F39C: lwz     r7, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F3A0:
    ctx->pc = 0x8083F3A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F3A0u)) return;
    // 8083F3A0: lis     r3, -28034
    ctx->gpr[3] = ((u32)(s32)(-28034) << 16);

label_8083F3A4:
    ctx->pc = 0x8083F3A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F3A4u)) return;
    // 8083F3A4: addi    r6, r3, -16640
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-16640);

label_8083F3A8:
    ctx->pc = 0x8083F3A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F3A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8083F3A8: stb     r4, 3(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F3AC:
    ctx->pc = 0x8083F3ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F3ACu)) return;
    // 8083F3AC: bc    4, 2, 0x8083F3D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8083F3D4;
        }
    }

label_8083F3B0:
    ctx->pc = 0x8083F3B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F3B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 8083F3B0: lha     r0, 18(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(18);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F3B4:
    ctx->pc = 0x8083F3B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F3B4u)) return;
    // 8083F3B4: addi    r3, r6, 236
    ctx->gpr[3] = ctx->gpr[6] + (u32)(s32)(236);

label_8083F3B8:
    ctx->pc = 0x8083F3B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F3B8u)) return;
    // 8083F3B8: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_8083F3BC:
    ctx->pc = 0x8083F3BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F3BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8083F3BC: lwzx    r4, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F3C0:
    ctx->pc = 0x8083F3C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F3C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8083F3C0: lwz     r3, 0(r4)
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
label_8083F3C4:
    ctx->pc = 0x8083F3C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F3C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8083F3C4: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F3C8:
    ctx->pc = 0x8083F3C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F3C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8083F3C8: stw     r3, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F3CC:
    ctx->pc = 0x8083F3CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F3CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8083F3CC: stw     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F3D0:
    ctx->pc = 0x8083F3D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F3D0u)) return;
    // 8083F3D0: b       0x8083F420
    {
            goto label_8083F420;
    }

label_8083F3D4:
    ctx->pc = 0x8083F3D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F3D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8083F3D4: cmplwi  r0, 0x0001
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

label_8083F3D8:
    ctx->pc = 0x8083F3D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F3D8u)) return;
    // 8083F3D8: bc    4, 2, 0x8083F400
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8083F400;
        }
    }

label_8083F3DC:
    ctx->pc = 0x8083F3DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F3DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 8083F3DC: lha     r0, 18(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(18);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F3E0:
    ctx->pc = 0x8083F3E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F3E0u)) return;
    // 8083F3E0: addi    r3, r6, 364
    ctx->gpr[3] = ctx->gpr[6] + (u32)(s32)(364);

label_8083F3E4:
    ctx->pc = 0x8083F3E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F3E4u)) return;
    // 8083F3E4: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_8083F3E8:
    ctx->pc = 0x8083F3E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F3E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8083F3E8: lwzx    r4, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F3EC:
    ctx->pc = 0x8083F3ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F3ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8083F3EC: lwz     r3, 0(r4)
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
label_8083F3F0:
    ctx->pc = 0x8083F3F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F3F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8083F3F0: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F3F4:
    ctx->pc = 0x8083F3F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F3F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8083F3F4: stw     r3, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F3F8:
    ctx->pc = 0x8083F3F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F3F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8083F3F8: stw     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F3FC:
    ctx->pc = 0x8083F3FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F3FCu)) return;
    // 8083F3FC: b       0x8083F420
    {
            goto label_8083F420;
    }

label_8083F400:
    ctx->pc = 0x8083F400u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F400u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8083F400: lha     r0, 18(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(18);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F404:
    ctx->pc = 0x8083F404u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F404u)) return;
    // 8083F404: addi    r3, r6, 300
    ctx->gpr[3] = ctx->gpr[6] + (u32)(s32)(300);

label_8083F408:
    ctx->pc = 0x8083F408u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F408u)) return;
    // 8083F408: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_8083F40C:
    ctx->pc = 0x8083F40Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F40Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8083F40C: lwzx    r4, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F410:
    ctx->pc = 0x8083F410u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F410u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8083F410: lwz     r3, 0(r4)
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
label_8083F414:
    ctx->pc = 0x8083F414u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F414u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8083F414: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F418:
    ctx->pc = 0x8083F418u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F418u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8083F418: stw     r3, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F41C:
    ctx->pc = 0x8083F41Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F41Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 8083F41C: stw     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F420:
    ctx->pc = 0x8083F420u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F420u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8083F420: lha     r0, 18(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(18);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F424:
    ctx->pc = 0x8083F424u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F424u)) return;
    // 8083F424: addi    r3, r6, 172
    ctx->gpr[3] = ctx->gpr[6] + (u32)(s32)(172);

label_8083F428:
    ctx->pc = 0x8083F428u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F428u)) return;
    // 8083F428: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_8083F42C:
    ctx->pc = 0x8083F42Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F42Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8083F42C: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F430:
    ctx->pc = 0x8083F430u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F430u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8083F430: stw     r0, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F434:
    ctx->pc = 0x8083F434u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F434u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8083F434: stw     r7, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F438:
    ctx->pc = 0x8083F438u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F438u)) return;
    // 8083F438: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8083E580;
        }
    }

label_8083F43C:
    ctx->pc = 0x8083F43Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 34u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F43Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 34u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 33u : 0u;
    // 8083F43C: stwu     r1, -80(r1)
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
label_8083F440:
    ctx->pc = 0x8083F440u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F440u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 32u : 0u;
    // 8083F440: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F444:
    ctx->pc = 0x8083F444u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F444u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 31u : 0u;
    // 8083F444: stw     r0, 84(r1)
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
label_8083F448:
    ctx->pc = 0x8083F448u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F448u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 30u : 0u;
    // 8083F448: stfd     f31, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x8083F448u)) return;
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
label_8083F44C:
    ctx->pc = 0x8083F44Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F44Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 8083F44C: psq_st   f31, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x8083F44Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x8083F44Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F450:
    ctx->pc = 0x8083F450u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F450u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 8083F450: stfd     f30, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x8083F450u)) return;
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
label_8083F454:
    ctx->pc = 0x8083F454u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F454u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 8083F454: psq_st   f30, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x8083F454u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x8083F454u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F458:
    ctx->pc = 0x8083F458u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 11u, 0x8083F458u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 8083F458: stmw     r27, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F45C:
    ctx->pc = 0x8083F45Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F45Cu)) return;
    // 8083F45C: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8083F460:
    ctx->pc = 0x8083F460u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F460u)) return;
    // 8083F460: lis     r3, -32636
    ctx->gpr[3] = ((u32)(s32)(-32636) << 16);

label_8083F464:
    ctx->pc = 0x8083F464u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F464u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 8083F464: lwz     r6, 32(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(32);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F468:
    ctx->pc = 0x8083F468u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F468u)) return;
    // 8083F468: addi    r0, r3, -11420
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-11420);

label_8083F46C:
    ctx->pc = 0x8083F46Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F46Cu)) return;
    // 8083F46C: lis     r4, -32636
    ctx->gpr[4] = ((u32)(s32)(-32636) << 16);

label_8083F470:
    ctx->pc = 0x8083F470u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F470u)) return;
    // 8083F470: lis     r3, -32636
    ctx->gpr[3] = ((u32)(s32)(-32636) << 16);

label_8083F474:
    ctx->pc = 0x8083F474u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F474u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 8083F474: stw     r0, 16(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F478:
    ctx->pc = 0x8083F478u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F478u)) return;
    // 8083F478: addi    r4, r4, -12400
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-12400);

label_8083F47C:
    ctx->pc = 0x8083F47Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F47Cu)) return;
    // 8083F47C: lis     r5, -28034
    ctx->gpr[5] = ((u32)(s32)(-28034) << 16);

label_8083F480:
    ctx->pc = 0x8083F480u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F480u)) return;
    // 8083F480: addi    r0, r3, -12512
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-12512);

label_8083F484:
    ctx->pc = 0x8083F484u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F484u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8083F484: stw     r4, 20(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F488:
    ctx->pc = 0x8083F488u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F488u)) return;
    // 8083F488: addi    r31, r5, -16640
    ctx->gpr[31] = ctx->gpr[5] + (u32)(s32)(-16640);

label_8083F48C:
    ctx->pc = 0x8083F48Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F48Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8083F48C: stw     r0, 24(r28)
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
label_8083F490:
    ctx->pc = 0x8083F490u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F490u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8083F490: lha     r3, 18(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(18);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F494:
    ctx->pc = 0x8083F494u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F494u)) return;
    // 8083F494: extsh. r0, r3
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

label_8083F498:
    ctx->pc = 0x8083F498u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F498u)) return;
    // 8083F498: bc    4, 1, 0x8083F4A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8083F4A4;
        }
    }

label_8083F49C:
    ctx->pc = 0x8083F49Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F49Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8083F49C: cmpwi   r3, 16
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(16);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8083F4A0:
    ctx->pc = 0x8083F4A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F4A0u)) return;
    // 8083F4A0: bc    12, 0, 0x8083F4B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8083F4B0;
        }
    }

label_8083F4A4:
    ctx->pc = 0x8083F4A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F4A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8083F4A4: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8083F4A8:
    ctx->pc = 0x8083F4A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F4A8u)) return;
    // 8083F4A8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8083F4AC:
    ctx->pc = 0x8083F4ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F4ACu)) return;
    // 8083F4AC: bl      0x8083EF1C
    {
            ctx->lr = 0x8083F4B0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8083EF1Cu;
                return;
            }
            goto label_8083EF1C;
    }

label_8083F4B0:
    ctx->pc = 0x8083F4B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 18u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F4B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 18u : 1u;
    // 8083F4B0: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_8083F4B4:
    ctx->pc = 0x8083F4B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F4B4u)) return;
    // 8083F4B4: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_8083F4B8:
    ctx->pc = 0x8083F4B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F4B8u)) return;
    // 8083F4B8: addi    r4, r4, -5402
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5402);

label_8083F4BC:
    ctx->pc = 0x8083F4BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F4BCu)) return;
    // 8083F4BC: addi    r5, r31, 1196
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(1196);

label_8083F4C0:
    ctx->pc = 0x8083F4C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F4C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 8083F4C0: lwz     r30, 32(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(32);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F4C4:
    ctx->pc = 0x8083F4C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F4C4u)) return;
    // 8083F4C4: addi    r29, r5, 8
    ctx->gpr[29] = ctx->gpr[5] + (u32)(s32)(8);

label_8083F4C8:
    ctx->pc = 0x8083F4C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F4C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 8083F4C8: lha     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F4CC:
    ctx->pc = 0x8083F4CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F4CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 8083F4CC: lha     r0, -5404(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5404);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F4D0:
    ctx->pc = 0x8083F4D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F4D0u)) return;
    // 8083F4D0: rlwinm r3, r4, 8, 0, 23
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[4], 8u) & 0xFFFFFF00u;
    }

label_8083F4D4:
    ctx->pc = 0x8083F4D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F4D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 8083F4D4: lha     r4, 18(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(18);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F4D8:
    ctx->pc = 0x8083F4D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F4D8u)) return;
    // 8083F4D8: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_8083F4DC:
    ctx->pc = 0x8083F4DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F4DCu)) return;
    // 8083F4DC: rlwinm r3, r4, 4, 0, 27
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[4], 4u) & 0xFFFFFFF0u;
    }

label_8083F4E0:
    ctx->pc = 0x8083F4E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F4E0u)) return;
    // 8083F4E0: rlwinm r0, r0, 0, 16, 23
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FF00u;
    }

label_8083F4E4:
    ctx->pc = 0x8083F4E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F4E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8083F4E4: lfsx    f31, r29, r3
    if (!ppc_fp_available_inline(ctx, 0x8083F4E4u)) return;
    {
        u32 ea = ctx->gpr[29] + ctx->gpr[3];
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
label_8083F4E8:
    ctx->pc = 0x8083F4E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F4E8u)) return;
    // 8083F4E8: add   r3, r5, r3
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8083F4EC:
    ctx->pc = 0x8083F4ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F4ECu)) return;
    // 8083F4EC: cmpwi   r0, 768
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(768);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8083F4F0:
    ctx->pc = 0x8083F4F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F4F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8083F4F0: lfs     f30, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x8083F4F0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
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
label_8083F4F4:
    ctx->pc = 0x8083F4F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F4F4u)) return;
    // 8083F4F4: bc    4, 2, 0x8083F508
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8083F508;
        }
    }

label_8083F4F8:
    ctx->pc = 0x8083F4F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F4F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8083F4F8: cmpwi   r4, 12
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(12);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8083F4FC:
    ctx->pc = 0x8083F4FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F4FCu)) return;
    // 8083F4FC: bc    4, 2, 0x8083F508
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8083F508;
        }
    }

label_8083F500:
    ctx->pc = 0x8083F500u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F500u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8083F500: lis     r3, -28070
    ctx->gpr[3] = ((u32)(s32)(-28070) << 16);

label_8083F504:
    ctx->pc = 0x8083F504u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F504u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 8083F504: lfs     f31, -456(r3)
    if (!ppc_fp_available_inline(ctx, 0x8083F504u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-456);
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
label_8083F508:
    ctx->pc = 0x8083F508u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F508u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 8083F508: lis     r3, -28070
    ctx->gpr[3] = ((u32)(s32)(-28070) << 16);

label_8083F50C:
    ctx->pc = 0x8083F50Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F50Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8083F50C: lfs     f1, 52(r30)
    if (!ppc_fp_available_inline(ctx, 0x8083F50Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F510:
    ctx->pc = 0x8083F510u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F510u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8083F510: lfs     f0, -580(r3)
    if (!ppc_fp_available_inline(ctx, 0x8083F510u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-580);
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
label_8083F514:
    ctx->pc = 0x8083F514u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F514u)) return;
    // 8083F514: fcmpu   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x8083F514u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], false);

label_8083F518:
    ctx->pc = 0x8083F518u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F518u)) return;
    // 8083F518: bc    12, 2, 0x8083F564
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8083F564;
        }
    }

label_8083F51C:
    ctx->pc = 0x8083F51Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F51Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 8083F51C: lis     r3, -28070
    ctx->gpr[3] = ((u32)(s32)(-28070) << 16);

label_8083F520:
    ctx->pc = 0x8083F520u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F520u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8083F520: lfs     f0, -456(r3)
    if (!ppc_fp_available_inline(ctx, 0x8083F520u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-456);
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
label_8083F524:
    ctx->pc = 0x8083F524u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F524u)) return;
    // 8083F524: fmuls   f30, f0, f30
    if (!ppc_fp_available_inline(ctx, 0x8083F524u)) return;
    ppc_fmuls(ctx, 30, 0, 30);

label_8083F528:
    ctx->pc = 0x8083F528u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F528u)) return;
    // 8083F528: bl      0x8000DD2C
    {
            ctx->lr = 0x8083F52Cu;
            ctx->pc = 0x8000DD2Cu;
            return;
    }

label_8083F52C:
    ctx->pc = 0x8083F52Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 14u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F52Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 14u : 1u;
    // 8083F52C: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_8083F530:
    ctx->pc = 0x8083F530u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F530u)) return;
    // 8083F530: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_8083F534:
    ctx->pc = 0x8083F534u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F534u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 8083F534: stw     r3, 12(r1)
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
label_8083F538:
    ctx->pc = 0x8083F538u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F538u)) return;
    // 8083F538: lis     r4, -28070
    ctx->gpr[4] = ((u32)(s32)(-28070) << 16);

label_8083F53C:
    ctx->pc = 0x8083F53Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F53Cu)) return;
    // 8083F53C: lis     r3, -28070
    ctx->gpr[3] = ((u32)(s32)(-28070) << 16);

label_8083F540:
    ctx->pc = 0x8083F540u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F540u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 8083F540: lfd     f3, -576(r4)
    if (!ppc_fp_available_inline(ctx, 0x8083F540u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-576);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F544:
    ctx->pc = 0x8083F544u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F544u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8083F544: stw     r0, 8(r1)
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
label_8083F548:
    ctx->pc = 0x8083F548u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F548u)) return;
    // 8083F548: fsubs   f0, f31, f30
    if (!ppc_fp_available_inline(ctx, 0x8083F548u)) return;
    ppc_fsubs(ctx, 0, 31, 30);

label_8083F54C:
    ctx->pc = 0x8083F54Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F54Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8083F54C: lfs     f1, -588(r3)
    if (!ppc_fp_available_inline(ctx, 0x8083F54Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-588);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F550:
    ctx->pc = 0x8083F550u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F550u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8083F550: lfd     f2, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x8083F550u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F554:
    ctx->pc = 0x8083F554u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F554u)) return;
    // 8083F554: fsubs   f2, f2, f3
    if (!ppc_fp_available_inline(ctx, 0x8083F554u)) return;
    ppc_fsubs(ctx, 2, 2, 3);

label_8083F558:
    ctx->pc = 0x8083F558u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F558u)) return;
    // 8083F558: fmuls   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x8083F558u)) return;
    ppc_fmuls(ctx, 1, 1, 2);

label_8083F55C:
    ctx->pc = 0x8083F55Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F55Cu)) return;
    // 8083F55C: fmadds f31, f0, f1, f30
    if (!ppc_fp_available_inline(ctx, 0x8083F55Cu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[0], ctx->fpr[1], ctx->fpr[30], true, false, false, &result))
            ctx->fpr[31] = ctx->ps1[31] = result;
    }

label_8083F560:
    ctx->pc = 0x8083F560u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F560u)) return;
    // 8083F560: b       0x8083F638
    {
            goto label_8083F638;
    }

label_8083F564:
    ctx->pc = 0x8083F564u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F564u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8083F564: bl      0x8000DD2C
    {
            ctx->lr = 0x8083F568u;
            ctx->pc = 0x8000DD2Cu;
            return;
    }

label_8083F568:
    ctx->pc = 0x8083F568u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 17u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F568u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 17u : 1u;
    // 8083F568: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_8083F56C:
    ctx->pc = 0x8083F56Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F56Cu)) return;
    // 8083F56C: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_8083F570:
    ctx->pc = 0x8083F570u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F570u)) return;
    // 8083F570: lis     r4, -28070
    ctx->gpr[4] = ((u32)(s32)(-28070) << 16);

label_8083F574:
    ctx->pc = 0x8083F574u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F574u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 8083F574: stw     r3, 12(r1)
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
label_8083F578:
    ctx->pc = 0x8083F578u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F578u)) return;
    // 8083F578: addi    r5, r4, -576
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-576);

label_8083F57C:
    ctx->pc = 0x8083F57Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F57Cu)) return;
    // 8083F57C: lis     r3, -28070
    ctx->gpr[3] = ((u32)(s32)(-28070) << 16);

label_8083F580:
    ctx->pc = 0x8083F580u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F580u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 8083F580: stw     r0, 8(r1)
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
label_8083F584:
    ctx->pc = 0x8083F584u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F584u)) return;
    // 8083F584: addi    r4, r3, -588
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-588);

label_8083F588:
    ctx->pc = 0x8083F588u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F588u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 8083F588: lfd     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x8083F588u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F58C:
    ctx->pc = 0x8083F58Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F58Cu)) return;
    // 8083F58C: lis     r3, -28070
    ctx->gpr[3] = ((u32)(s32)(-28070) << 16);

label_8083F590:
    ctx->pc = 0x8083F590u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F590u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8083F590: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x8083F590u)) return;
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
label_8083F594:
    ctx->pc = 0x8083F594u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F594u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8083F594: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x8083F594u)) return;
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
label_8083F598:
    ctx->pc = 0x8083F598u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F598u)) return;
    // 8083F598: fsubs   f2, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x8083F598u)) return;
    ppc_fsubs(ctx, 2, 0, 2);

label_8083F59C:
    ctx->pc = 0x8083F59Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F59Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8083F59C: lfs     f0, -560(r3)
    if (!ppc_fp_available_inline(ctx, 0x8083F59Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-560);
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
label_8083F5A0:
    ctx->pc = 0x8083F5A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F5A0u)) return;
    // 8083F5A0: fmuls   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x8083F5A0u)) return;
    ppc_fmuls(ctx, 1, 1, 2);

label_8083F5A4:
    ctx->pc = 0x8083F5A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F5A4u)) return;
    // 8083F5A4: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x8083F5A4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_8083F5A8:
    ctx->pc = 0x8083F5A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F5A8u)) return;
    // 8083F5A8: bc    4, 0, 0x8083F5F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8083F5F4;
        }
    }

label_8083F5AC:
    ctx->pc = 0x8083F5ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F5ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8083F5AC: bl      0x8000DD2C
    {
            ctx->lr = 0x8083F5B0u;
            ctx->pc = 0x8000DD2Cu;
            return;
    }

label_8083F5B0:
    ctx->pc = 0x8083F5B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 17u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F5B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 17u : 1u;
    // 8083F5B0: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_8083F5B4:
    ctx->pc = 0x8083F5B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F5B4u)) return;
    // 8083F5B4: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_8083F5B8:
    ctx->pc = 0x8083F5B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F5B8u)) return;
    // 8083F5B8: lis     r4, -28070
    ctx->gpr[4] = ((u32)(s32)(-28070) << 16);

label_8083F5BC:
    ctx->pc = 0x8083F5BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F5BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 8083F5BC: stw     r3, 12(r1)
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
label_8083F5C0:
    ctx->pc = 0x8083F5C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F5C0u)) return;
    // 8083F5C0: addi    r5, r4, -576
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-576);

label_8083F5C4:
    ctx->pc = 0x8083F5C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F5C4u)) return;
    // 8083F5C4: lis     r3, -28070
    ctx->gpr[3] = ((u32)(s32)(-28070) << 16);

label_8083F5C8:
    ctx->pc = 0x8083F5C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F5C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 8083F5C8: stw     r0, 8(r1)
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
label_8083F5CC:
    ctx->pc = 0x8083F5CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F5CCu)) return;
    // 8083F5CC: lis     r4, -28070
    ctx->gpr[4] = ((u32)(s32)(-28070) << 16);

label_8083F5D0:
    ctx->pc = 0x8083F5D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F5D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 8083F5D0: lfd     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x8083F5D0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F5D4:
    ctx->pc = 0x8083F5D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F5D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8083F5D4: lfd     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x8083F5D4u)) return;
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
label_8083F5D8:
    ctx->pc = 0x8083F5D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F5D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8083F5D8: lfs     f0, -564(r3)
    if (!ppc_fp_available_inline(ctx, 0x8083F5D8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-564);
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
label_8083F5DC:
    ctx->pc = 0x8083F5DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F5DCu)) return;
    // 8083F5DC: fsubs   f2, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x8083F5DCu)) return;
    ppc_fsubs(ctx, 2, 1, 2);

label_8083F5E0:
    ctx->pc = 0x8083F5E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F5E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8083F5E0: lfs     f1, -588(r4)
    if (!ppc_fp_available_inline(ctx, 0x8083F5E0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-588);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F5E4:
    ctx->pc = 0x8083F5E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F5E4u)) return;
    // 8083F5E4: fsubs   f0, f0, f30
    if (!ppc_fp_available_inline(ctx, 0x8083F5E4u)) return;
    ppc_fsubs(ctx, 0, 0, 30);

label_8083F5E8:
    ctx->pc = 0x8083F5E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F5E8u)) return;
    // 8083F5E8: fmuls   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x8083F5E8u)) return;
    ppc_fmuls(ctx, 1, 1, 2);

label_8083F5EC:
    ctx->pc = 0x8083F5ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F5ECu)) return;
    // 8083F5EC: fmadds f31, f0, f1, f30
    if (!ppc_fp_available_inline(ctx, 0x8083F5ECu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[0], ctx->fpr[1], ctx->fpr[30], true, false, false, &result))
            ctx->fpr[31] = ctx->ps1[31] = result;
    }

label_8083F5F0:
    ctx->pc = 0x8083F5F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F5F0u)) return;
    // 8083F5F0: b       0x8083F638
    {
            goto label_8083F638;
    }

label_8083F5F4:
    ctx->pc = 0x8083F5F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F5F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8083F5F4: bl      0x8000DD2C
    {
            ctx->lr = 0x8083F5F8u;
            ctx->pc = 0x8000DD2Cu;
            return;
    }

label_8083F5F8:
    ctx->pc = 0x8083F5F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F5F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 8083F5F8: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_8083F5FC:
    ctx->pc = 0x8083F5FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F5FCu)) return;
    // 8083F5FC: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_8083F600:
    ctx->pc = 0x8083F600u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F600u)) return;
    // 8083F600: lis     r4, -28070
    ctx->gpr[4] = ((u32)(s32)(-28070) << 16);

label_8083F604:
    ctx->pc = 0x8083F604u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F604u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 8083F604: stw     r3, 12(r1)
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
label_8083F608:
    ctx->pc = 0x8083F608u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F608u)) return;
    // 8083F608: addi    r5, r4, -576
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-576);

label_8083F60C:
    ctx->pc = 0x8083F60Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F60Cu)) return;
    // 8083F60C: lis     r3, -28070
    ctx->gpr[3] = ((u32)(s32)(-28070) << 16);

label_8083F610:
    ctx->pc = 0x8083F610u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F610u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 8083F610: stw     r0, 8(r1)
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
label_8083F614:
    ctx->pc = 0x8083F614u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F614u)) return;
    // 8083F614: lis     r4, -28070
    ctx->gpr[4] = ((u32)(s32)(-28070) << 16);

label_8083F618:
    ctx->pc = 0x8083F618u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F618u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8083F618: lfd     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x8083F618u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F61C:
    ctx->pc = 0x8083F61Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F61Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8083F61C: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x8083F61Cu)) return;
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
label_8083F620:
    ctx->pc = 0x8083F620u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F620u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8083F620: lfs     f1, -564(r3)
    if (!ppc_fp_available_inline(ctx, 0x8083F620u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-564);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F624:
    ctx->pc = 0x8083F624u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F624u)) return;
    // 8083F624: fsubs   f3, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x8083F624u)) return;
    ppc_fsubs(ctx, 3, 0, 2);

label_8083F628:
    ctx->pc = 0x8083F628u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F628u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8083F628: lfs     f2, -588(r4)
    if (!ppc_fp_available_inline(ctx, 0x8083F628u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-588);
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
label_8083F62C:
    ctx->pc = 0x8083F62Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F62Cu)) return;
    // 8083F62C: fsubs   f0, f31, f1
    if (!ppc_fp_available_inline(ctx, 0x8083F62Cu)) return;
    ppc_fsubs(ctx, 0, 31, 1);

label_8083F630:
    ctx->pc = 0x8083F630u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F630u)) return;
    // 8083F630: fmuls   f2, f2, f3
    if (!ppc_fp_available_inline(ctx, 0x8083F630u)) return;
    ppc_fmuls(ctx, 2, 2, 3);

label_8083F634:
    ctx->pc = 0x8083F634u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F634u)) return;
    // 8083F634: fmadds f31, f0, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x8083F634u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[0], ctx->fpr[2], ctx->fpr[1], true, false, false, &result))
            ctx->fpr[31] = ctx->ps1[31] = result;
    }

label_8083F638:
    ctx->pc = 0x8083F638u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F638u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8083F638: bl      0x80571BF4
    {
            ctx->lr = 0x8083F63Cu;
            ctx->pc = 0x80571BF4u;
            return;
    }

label_8083F63C:
    ctx->pc = 0x8083F63Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F63Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8083F63C: cmpwi   r3, 2
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

label_8083F640:
    ctx->pc = 0x8083F640u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F640u)) return;
    // 8083F640: bc    12, 2, 0x8083F668
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8083F668;
        }
    }

label_8083F644:
    ctx->pc = 0x8083F644u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F644u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8083F644: bc    4, 0, 0x8083F658
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8083F658;
        }
    }

label_8083F648:
    ctx->pc = 0x8083F648u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F648u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8083F648: cmpwi   r3, 0
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

label_8083F64C:
    ctx->pc = 0x8083F64Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F64Cu)) return;
    // 8083F64C: bc    12, 2, 0x8083F6A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8083F6A4;
        }
    }

label_8083F650:
    ctx->pc = 0x8083F650u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F650u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8083F650: bc    4, 0, 0x8083F678
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8083F678;
        }
    }

label_8083F654:
    ctx->pc = 0x8083F654u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F654u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8083F654: b       0x8083F6A4
    {
            goto label_8083F6A4;
    }

label_8083F658:
    ctx->pc = 0x8083F658u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F658u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8083F658: cmpwi   r3, 4
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

label_8083F65C:
    ctx->pc = 0x8083F65Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F65Cu)) return;
    // 8083F65C: bc    12, 2, 0x8083F698
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8083F698;
        }
    }

label_8083F660:
    ctx->pc = 0x8083F660u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F660u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8083F660: bc    4, 0, 0x8083F6A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8083F6A4;
        }
    }

label_8083F664:
    ctx->pc = 0x8083F664u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F664u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8083F664: b       0x8083F688
    {
            goto label_8083F688;
    }

label_8083F668:
    ctx->pc = 0x8083F668u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F668u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 8083F668: lis     r3, -28070
    ctx->gpr[3] = ((u32)(s32)(-28070) << 16);

label_8083F66C:
    ctx->pc = 0x8083F66Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F66Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8083F66C: lfs     f0, -452(r3)
    if (!ppc_fp_available_inline(ctx, 0x8083F66Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-452);
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
label_8083F670:
    ctx->pc = 0x8083F670u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F670u)) return;
    // 8083F670: fmuls   f31, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x8083F670u)) return;
    ppc_fmuls(ctx, 31, 31, 0);

label_8083F674:
    ctx->pc = 0x8083F674u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F674u)) return;
    // 8083F674: b       0x8083F6A4
    {
            goto label_8083F6A4;
    }

label_8083F678:
    ctx->pc = 0x8083F678u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F678u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 8083F678: lis     r3, -28070
    ctx->gpr[3] = ((u32)(s32)(-28070) << 16);

label_8083F67C:
    ctx->pc = 0x8083F67Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F67Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8083F67C: lfs     f0, -448(r3)
    if (!ppc_fp_available_inline(ctx, 0x8083F67Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-448);
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
label_8083F680:
    ctx->pc = 0x8083F680u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F680u)) return;
    // 8083F680: fmuls   f31, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x8083F680u)) return;
    ppc_fmuls(ctx, 31, 31, 0);

label_8083F684:
    ctx->pc = 0x8083F684u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F684u)) return;
    // 8083F684: b       0x8083F6A4
    {
            goto label_8083F6A4;
    }

label_8083F688:
    ctx->pc = 0x8083F688u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F688u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 8083F688: lis     r3, -28070
    ctx->gpr[3] = ((u32)(s32)(-28070) << 16);

label_8083F68C:
    ctx->pc = 0x8083F68Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F68Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8083F68C: lfs     f0, -444(r3)
    if (!ppc_fp_available_inline(ctx, 0x8083F68Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-444);
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
label_8083F690:
    ctx->pc = 0x8083F690u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F690u)) return;
    // 8083F690: fmuls   f31, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x8083F690u)) return;
    ppc_fmuls(ctx, 31, 31, 0);

label_8083F694:
    ctx->pc = 0x8083F694u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F694u)) return;
    // 8083F694: b       0x8083F6A4
    {
            goto label_8083F6A4;
    }

label_8083F698:
    ctx->pc = 0x8083F698u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F698u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8083F698: lis     r3, -28070
    ctx->gpr[3] = ((u32)(s32)(-28070) << 16);

label_8083F69C:
    ctx->pc = 0x8083F69Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F69Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8083F69C: lfs     f0, -440(r3)
    if (!ppc_fp_available_inline(ctx, 0x8083F69Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-440);
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
label_8083F6A0:
    ctx->pc = 0x8083F6A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F6A0u)) return;
    // 8083F6A0: fmuls   f31, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x8083F6A0u)) return;
    ppc_fmuls(ctx, 31, 31, 0);

label_8083F6A4:
    ctx->pc = 0x8083F6A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F6A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 8083F6A4: stfs     f31, 44(r30)
    if (!ppc_fp_available_inline(ctx, 0x8083F6A4u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F6A8:
    ctx->pc = 0x8083F6A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F6A8u)) return;
    // 8083F6A8: lis     r3, -28070
    ctx->gpr[3] = ((u32)(s32)(-28070) << 16);

label_8083F6AC:
    ctx->pc = 0x8083F6ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F6ACu)) return;
    // 8083F6AC: addi    r4, r31, 1196
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(1196);

label_8083F6B0:
    ctx->pc = 0x8083F6B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F6B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 8083F6B0: lfs     f0, -464(r3)
    if (!ppc_fp_available_inline(ctx, 0x8083F6B0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-464);
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
label_8083F6B4:
    ctx->pc = 0x8083F6B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F6B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8083F6B4: lwz     r5, 32(r28)
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
label_8083F6B8:
    ctx->pc = 0x8083F6B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F6B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8083F6B8: lha     r0, 18(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(18);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F6BC:
    ctx->pc = 0x8083F6BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F6BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8083F6BC: lfs     f2, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x8083F6BCu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(44);
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
label_8083F6C0:
    ctx->pc = 0x8083F6C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F6C0u)) return;
    // 8083F6C0: rlwinm r0, r0, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_8083F6C4:
    ctx->pc = 0x8083F6C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F6C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8083F6C4: lfsx    f1, r4, r0
    if (!ppc_fp_available_inline(ctx, 0x8083F6C4u)) return;
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F6C8:
    ctx->pc = 0x8083F6C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F6C8u)) return;
    // 8083F6C8: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x8083F6C8u)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_8083F6CC:
    ctx->pc = 0x8083F6CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F6CCu)) return;
    // 8083F6CC: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x8083F6CCu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_8083F6D0:
    ctx->pc = 0x8083F6D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F6D0u)) return;
    // 8083F6D0: bc    4, 0, 0x8083F6E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8083F6E0;
        }
    }

label_8083F6D4:
    ctx->pc = 0x8083F6D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F6D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8083F6D4: lis     r3, -28070
    ctx->gpr[3] = ((u32)(s32)(-28070) << 16);

label_8083F6D8:
    ctx->pc = 0x8083F6D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F6D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8083F6D8: lfs     f0, -580(r3)
    if (!ppc_fp_available_inline(ctx, 0x8083F6D8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-580);
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
label_8083F6DC:
    ctx->pc = 0x8083F6DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F6DCu)) return;
    // 8083F6DC: b       0x8083F704
    {
            goto label_8083F704;
    }

label_8083F6E0:
    ctx->pc = 0x8083F6E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F6E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 8083F6E0: lis     r3, -28070
    ctx->gpr[3] = ((u32)(s32)(-28070) << 16);

label_8083F6E4:
    ctx->pc = 0x8083F6E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F6E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8083F6E4: lfs     f0, -460(r3)
    if (!ppc_fp_available_inline(ctx, 0x8083F6E4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-460);
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
label_8083F6E8:
    ctx->pc = 0x8083F6E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F6E8u)) return;
    // 8083F6E8: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x8083F6E8u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_8083F6EC:
    ctx->pc = 0x8083F6ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F6ECu)) return;
    // 8083F6EC: bc    4, 0, 0x8083F6FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8083F6FC;
        }
    }

label_8083F6F0:
    ctx->pc = 0x8083F6F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F6F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8083F6F0: lis     r3, -28070
    ctx->gpr[3] = ((u32)(s32)(-28070) << 16);

label_8083F6F4:
    ctx->pc = 0x8083F6F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F6F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8083F6F4: lfs     f0, -564(r3)
    if (!ppc_fp_available_inline(ctx, 0x8083F6F4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-564);
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
label_8083F6F8:
    ctx->pc = 0x8083F6F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F6F8u)) return;
    // 8083F6F8: b       0x8083F704
    {
            goto label_8083F704;
    }

label_8083F6FC:
    ctx->pc = 0x8083F6FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F6FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8083F6FC: lis     r3, -28070
    ctx->gpr[3] = ((u32)(s32)(-28070) << 16);

label_8083F700:
    ctx->pc = 0x8083F700u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F700u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 8083F700: lfs     f0, -456(r3)
    if (!ppc_fp_available_inline(ctx, 0x8083F700u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-456);
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
label_8083F704:
    ctx->pc = 0x8083F704u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F704u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 8083F704: stfs     f0, 48(r5)
    if (!ppc_fp_available_inline(ctx, 0x8083F704u)) return;
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
label_8083F708:
    ctx->pc = 0x8083F708u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F708u)) return;
    // 8083F708: addi    r27, r31, 1196
    ctx->gpr[27] = ctx->gpr[31] + (u32)(s32)(1196);

label_8083F70C:
    ctx->pc = 0x8083F70Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F70Cu)) return;
    // 8083F70C: lis     r3, -28070
    ctx->gpr[3] = ((u32)(s32)(-28070) << 16);

label_8083F710:
    ctx->pc = 0x8083F710u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F710u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 8083F710: lwz     r30, 32(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(32);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F714:
    ctx->pc = 0x8083F714u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F714u)) return;
    // 8083F714: addi    r27, r27, 12
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(12);

label_8083F718:
    ctx->pc = 0x8083F718u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F718u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8083F718: lfs     f0, -496(r3)
    if (!ppc_fp_available_inline(ctx, 0x8083F718u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-496);
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
label_8083F71C:
    ctx->pc = 0x8083F71Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F71Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8083F71C: lha     r0, 18(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(18);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F720:
    ctx->pc = 0x8083F720u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F720u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8083F720: lfs     f2, 44(r30)
    if (!ppc_fp_available_inline(ctx, 0x8083F720u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(44);
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
label_8083F724:
    ctx->pc = 0x8083F724u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F724u)) return;
    // 8083F724: rlwinm r0, r0, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_8083F728:
    ctx->pc = 0x8083F728u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F728u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8083F728: lfsx    f1, r27, r0
    if (!ppc_fp_available_inline(ctx, 0x8083F728u)) return;
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[0];
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F72C:
    ctx->pc = 0x8083F72Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F72Cu)) return;
    // 8083F72C: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x8083F72Cu)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_8083F730:
    ctx->pc = 0x8083F730u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F730u)) return;
    // 8083F730: fmuls   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x8083F730u)) return;
    ppc_fmuls(ctx, 1, 0, 1);

label_8083F734:
    ctx->pc = 0x8083F734u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F734u)) return;
    // 8083F734: bl      0x800137DC
    {
            ctx->lr = 0x8083F738u;
            ctx->pc = 0x800137DCu;
            return;
    }

label_8083F738:
    ctx->pc = 0x8083F738u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 17u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F738u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 17u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 8083F738: lha     r0, 18(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(18);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F73C:
    ctx->pc = 0x8083F73Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F73Cu)) return;
    // 8083F73C: lis     r3, -28070
    ctx->gpr[3] = ((u32)(s32)(-28070) << 16);

label_8083F740:
    ctx->pc = 0x8083F740u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F740u)) return;
    // 8083F740: addi    r4, r3, -440
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-440);

label_8083F744:
    ctx->pc = 0x8083F744u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F744u)) return;
    // 8083F744: frsp    f4, f1
    if (!ppc_fp_available_inline(ctx, 0x8083F744u)) return;
    ppc_frsp(ctx, 4, 1);

label_8083F748:
    ctx->pc = 0x8083F748u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F748u)) return;
    // 8083F748: rlwinm r0, r0, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_8083F74C:
    ctx->pc = 0x8083F74Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F74Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 8083F74C: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x8083F74Cu)) return;
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
label_8083F750:
    ctx->pc = 0x8083F750u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F750u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 8083F750: lfsx    f2, r29, r0
    if (!ppc_fp_available_inline(ctx, 0x8083F750u)) return;
    {
        u32 ea = ctx->gpr[29] + ctx->gpr[0];
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
label_8083F754:
    ctx->pc = 0x8083F754u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F754u)) return;
    // 8083F754: lis     r5, -28070
    ctx->gpr[5] = ((u32)(s32)(-28070) << 16);

label_8083F758:
    ctx->pc = 0x8083F758u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F758u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 8083F758: lfsx    f0, r27, r0
    if (!ppc_fp_available_inline(ctx, 0x8083F758u)) return;
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[0];
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
label_8083F75C:
    ctx->pc = 0x8083F75Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F75Cu)) return;
    // 8083F75C: lis     r3, -28070
    ctx->gpr[3] = ((u32)(s32)(-28070) << 16);

label_8083F760:
    ctx->pc = 0x8083F760u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F760u)) return;
    // 8083F760: fmuls   f1, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x8083F760u)) return;
    ppc_fmuls(ctx, 1, 2, 0);

label_8083F764:
    ctx->pc = 0x8083F764u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F764u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8083F764: lfs     f2, -464(r5)
    if (!ppc_fp_available_inline(ctx, 0x8083F764u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-464);
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
label_8083F768:
    ctx->pc = 0x8083F768u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F768u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8083F768: lfs     f0, -496(r3)
    if (!ppc_fp_available_inline(ctx, 0x8083F768u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-496);
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
label_8083F76C:
    ctx->pc = 0x8083F76Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F76Cu)) return;
    // 8083F76C: fmuls   f30, f2, f4
    if (!ppc_fp_available_inline(ctx, 0x8083F76Cu)) return;
    ppc_fmuls(ctx, 30, 2, 4);

label_8083F770:
    ctx->pc = 0x8083F770u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F770u)) return;
    // 8083F770: fmuls   f1, f3, f1
    if (!ppc_fp_available_inline(ctx, 0x8083F770u)) return;
    ppc_fmuls(ctx, 1, 3, 1);

label_8083F774:
    ctx->pc = 0x8083F774u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F774u)) return;
    // 8083F774: fmuls   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x8083F774u)) return;
    ppc_fmuls(ctx, 1, 0, 1);

label_8083F778:
    ctx->pc = 0x8083F778u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F778u)) return;
    // 8083F778: bl      0x800137DC
    {
            ctx->lr = 0x8083F77Cu;
            ctx->pc = 0x800137DCu;
            return;
    }

label_8083F77C:
    ctx->pc = 0x8083F77Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F77Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 8083F77C: lis     r4, -28070
    ctx->gpr[4] = ((u32)(s32)(-28070) << 16);

label_8083F780:
    ctx->pc = 0x8083F780u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F780u)) return;
    // 8083F780: lis     r3, -28619
    ctx->gpr[3] = ((u32)(s32)(-28619) << 16);

label_8083F784:
    ctx->pc = 0x8083F784u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F784u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8083F784: lfs     f0, -464(r4)
    if (!ppc_fp_available_inline(ctx, 0x8083F784u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-464);
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
label_8083F788:
    ctx->pc = 0x8083F788u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F788u)) return;
    // 8083F788: frsp    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x8083F788u)) return;
    ppc_frsp(ctx, 1, 1);

label_8083F78C:
    ctx->pc = 0x8083F78Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F78Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8083F78C: lwz     r4, 20200(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20200);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F790:
    ctx->pc = 0x8083F790u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F790u)) return;
    // 8083F790: fmuls   f31, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x8083F790u)) return;
    ppc_fmuls(ctx, 31, 0, 1);

label_8083F794:
    ctx->pc = 0x8083F794u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F794u)) return;
    // 8083F794: cmpwi   r4, 2350
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(2350);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8083F798:
    ctx->pc = 0x8083F798u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F798u)) return;
    // 8083F798: bc    12, 0, 0x8083F834
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8083F834;
        }
    }

label_8083F79C:
    ctx->pc = 0x8083F79Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F79Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 8083F79C: lis     r3, -28070
    ctx->gpr[3] = ((u32)(s32)(-28070) << 16);

label_8083F7A0:
    ctx->pc = 0x8083F7A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F7A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8083F7A0: lfs     f0, -436(r3)
    if (!ppc_fp_available_inline(ctx, 0x8083F7A0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-436);
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
label_8083F7A4:
    ctx->pc = 0x8083F7A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F7A4u)) return;
    // 8083F7A4: fcmpo   cr0, f30, f0
    if (!ppc_fp_available_inline(ctx, 0x8083F7A4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[30], ctx->fpr[0], true);

label_8083F7A8:
    ctx->pc = 0x8083F7A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F7A8u)) return;
    // 8083F7A8: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_8083F7AC:
    ctx->pc = 0x8083F7ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F7ACu)) return;
    // 8083F7AC: bc    4, 2, 0x8083F834
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8083F834;
        }
    }

label_8083F7B0:
    ctx->pc = 0x8083F7B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F7B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 8083F7B0: addi    r3, r4, 20
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(20);

label_8083F7B4:
    ctx->pc = 0x8083F7B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F7B4u)) return;
    // 8083F7B4: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_8083F7B8:
    ctx->pc = 0x8083F7B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F7B8u)) return;
    // 8083F7B8: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_8083F7BC:
    ctx->pc = 0x8083F7BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F7BCu)) return;
    // 8083F7BC: lis     r4, -28070
    ctx->gpr[4] = ((u32)(s32)(-28070) << 16);

label_8083F7C0:
    ctx->pc = 0x8083F7C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F7C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8083F7C0: stw     r3, 12(r1)
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
label_8083F7C4:
    ctx->pc = 0x8083F7C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F7C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8083F7C4: lfd     f1, -576(r4)
    if (!ppc_fp_available_inline(ctx, 0x8083F7C4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-576);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F7C8:
    ctx->pc = 0x8083F7C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F7C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8083F7C8: stw     r0, 8(r1)
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
label_8083F7CC:
    ctx->pc = 0x8083F7CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F7CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8083F7CC: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x8083F7CCu)) return;
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
label_8083F7D0:
    ctx->pc = 0x8083F7D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F7D0u)) return;
    // 8083F7D0: fsubs   f30, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x8083F7D0u)) return;
    ppc_fsubs(ctx, 30, 0, 1);

label_8083F7D4:
    ctx->pc = 0x8083F7D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F7D4u)) return;
    // 8083F7D4: bl      0x8000DD2C
    {
            ctx->lr = 0x8083F7D8u;
            ctx->pc = 0x8000DD2Cu;
            return;
    }

label_8083F7D8:
    ctx->pc = 0x8083F7D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 19u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F7D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 19u : 1u;
    // 8083F7D8: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_8083F7DC:
    ctx->pc = 0x8083F7DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F7DCu)) return;
    // 8083F7DC: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_8083F7E0:
    ctx->pc = 0x8083F7E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F7E0u)) return;
    // 8083F7E0: lis     r4, -28070
    ctx->gpr[4] = ((u32)(s32)(-28070) << 16);

label_8083F7E4:
    ctx->pc = 0x8083F7E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F7E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 8083F7E4: stw     r3, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F7E8:
    ctx->pc = 0x8083F7E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F7E8u)) return;
    // 8083F7E8: addi    r5, r4, -576
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-576);

label_8083F7EC:
    ctx->pc = 0x8083F7ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F7ECu)) return;
    // 8083F7EC: lis     r3, -28070
    ctx->gpr[3] = ((u32)(s32)(-28070) << 16);

label_8083F7F0:
    ctx->pc = 0x8083F7F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F7F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 8083F7F0: stw     r0, 16(r1)
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
label_8083F7F4:
    ctx->pc = 0x8083F7F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F7F4u)) return;
    // 8083F7F4: addi    r4, r3, -588
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-588);

label_8083F7F8:
    ctx->pc = 0x8083F7F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F7F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 8083F7F8: lfd     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x8083F7F8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F7FC:
    ctx->pc = 0x8083F7FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F7FCu)) return;
    // 8083F7FC: fsubs   f1, f30, f31
    if (!ppc_fp_available_inline(ctx, 0x8083F7FCu)) return;
    ppc_fsubs(ctx, 1, 30, 31);

label_8083F800:
    ctx->pc = 0x8083F800u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F800u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 8083F800: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x8083F800u)) return;
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
label_8083F804:
    ctx->pc = 0x8083F804u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F804u)) return;
    // 8083F804: lis     r3, -28070
    ctx->gpr[3] = ((u32)(s32)(-28070) << 16);

label_8083F808:
    ctx->pc = 0x8083F808u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F808u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8083F808: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x8083F808u)) return;
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
label_8083F80C:
    ctx->pc = 0x8083F80Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F80Cu)) return;
    // 8083F80C: fsubs   f3, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x8083F80Cu)) return;
    ppc_fsubs(ctx, 3, 0, 3);

label_8083F810:
    ctx->pc = 0x8083F810u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F810u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8083F810: lfs     f0, -496(r3)
    if (!ppc_fp_available_inline(ctx, 0x8083F810u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-496);
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
label_8083F814:
    ctx->pc = 0x8083F814u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F814u)) return;
    // 8083F814: fmuls   f2, f2, f3
    if (!ppc_fp_available_inline(ctx, 0x8083F814u)) return;
    ppc_fmuls(ctx, 2, 2, 3);

label_8083F818:
    ctx->pc = 0x8083F818u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F818u)) return;
    // 8083F818: fmadds f1, f1, f2, f31
    if (!ppc_fp_available_inline(ctx, 0x8083F818u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[1], ctx->fpr[2], ctx->fpr[31], true, false, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_8083F81C:
    ctx->pc = 0x8083F81Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F81Cu)) return;
    // 8083F81C: fmuls   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x8083F81Cu)) return;
    ppc_fmuls(ctx, 1, 0, 1);

label_8083F820:
    ctx->pc = 0x8083F820u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F820u)) return;
    // 8083F820: bl      0x800137DC
    {
            ctx->lr = 0x8083F824u;
            ctx->pc = 0x800137DCu;
            return;
    }

label_8083F824:
    ctx->pc = 0x8083F824u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F824u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 8083F824: lis     r3, -28070
    ctx->gpr[3] = ((u32)(s32)(-28070) << 16);

label_8083F828:
    ctx->pc = 0x8083F828u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F828u)) return;
    // 8083F828: frsp    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x8083F828u)) return;
    ppc_frsp(ctx, 1, 1);

label_8083F82C:
    ctx->pc = 0x8083F82Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F82Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8083F82C: lfs     f0, -464(r3)
    if (!ppc_fp_available_inline(ctx, 0x8083F82Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-464);
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
label_8083F830:
    ctx->pc = 0x8083F830u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F830u)) return;
    // 8083F830: fmuls   f30, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x8083F830u)) return;
    ppc_fmuls(ctx, 30, 0, 1);

label_8083F834:
    ctx->pc = 0x8083F834u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 40u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F834u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 40u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 39u : 0u;
    // 8083F834: lwz     r5, 36(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(36);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F838:
    ctx->pc = 0x8083F838u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F838u)) return;
    // 8083F838: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8083F83C:
    ctx->pc = 0x8083F83Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F83Cu)) return;
    // 8083F83C: addi    r4, r31, 236
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(236);

label_8083F840:
    ctx->pc = 0x8083F840u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F840u)) return;
    // 8083F840: addi    r3, r31, 172
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(172);

label_8083F844:
    ctx->pc = 0x8083F844u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F844u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 35u : 0u;
    // 8083F844: stfs     f30, 60(r5)
    if (!ppc_fp_available_inline(ctx, 0x8083F844u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(60);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[30]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F848:
    ctx->pc = 0x8083F848u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F848u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 34u : 0u;
    // 8083F848: lwz     r6, 32(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(32);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F84C:
    ctx->pc = 0x8083F84Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F84Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 33u : 0u;
    // 8083F84C: lwz     r7, 44(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(44);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F850:
    ctx->pc = 0x8083F850u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F850u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 32u : 0u;
    // 8083F850: stb     r0, 3(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F854:
    ctx->pc = 0x8083F854u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F854u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 31u : 0u;
    // 8083F854: lha     r0, 18(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(18);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F858:
    ctx->pc = 0x8083F858u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F858u)) return;
    // 8083F858: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_8083F85C:
    ctx->pc = 0x8083F85Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F85Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 8083F85C: lwzx    r5, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F860:
    ctx->pc = 0x8083F860u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F860u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 8083F860: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F864:
    ctx->pc = 0x8083F864u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F864u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 8083F864: lwz     r0, 4(r5)
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
label_8083F868:
    ctx->pc = 0x8083F868u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F868u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 8083F868: stw     r4, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F86C:
    ctx->pc = 0x8083F86Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F86Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 8083F86C: stw     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F870:
    ctx->pc = 0x8083F870u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F870u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 8083F870: lha     r0, 18(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(18);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F874:
    ctx->pc = 0x8083F874u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F874u)) return;
    // 8083F874: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_8083F878:
    ctx->pc = 0x8083F878u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F878u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 8083F878: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F87C:
    ctx->pc = 0x8083F87Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F87Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 8083F87C: stw     r0, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F880:
    ctx->pc = 0x8083F880u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F880u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 8083F880: stw     r7, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F884:
    ctx->pc = 0x8083F884u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F884u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 8083F884: psq_l   f31, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x8083F884u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x8083F884u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F888:
    ctx->pc = 0x8083F888u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F888u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 8083F888: lfd     f31, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x8083F888u)) return;
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
label_8083F88C:
    ctx->pc = 0x8083F88Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F88Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 8083F88C: psq_l   f30, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x8083F88Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x8083F88Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F890:
    ctx->pc = 0x8083F890u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F890u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 8083F890: lfd     f30, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x8083F890u)) return;
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
label_8083F894:
    ctx->pc = 0x8083F894u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 11u, 0x8083F894u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8083F894: lmw     r27, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F898:
    ctx->pc = 0x8083F898u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F898u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8083F898: lwz     r0, 84(r1)
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
label_8083F89C:
    ctx->pc = 0x8083F89Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x8083F89Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8083F89C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F8A0:
    ctx->pc = 0x8083F8A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F8A0u)) return;
    // 8083F8A0: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_8083F8A4:
    ctx->pc = 0x8083F8A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F8A4u)) return;
    // 8083F8A4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8083E580;
        }
    }

label_8083F8A8:
    ctx->pc = 0x8083F8A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F8A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8083F8A8: stwu     r1, -16(r1)
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
label_8083F8AC:
    ctx->pc = 0x8083F8ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F8ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8083F8AC: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F8B0:
    ctx->pc = 0x8083F8B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F8B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8083F8B0: stw     r0, 20(r1)
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
label_8083F8B4:
    ctx->pc = 0x8083F8B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F8B4u)) return;
    // 8083F8B4: bl      0x8083CABC
    {
            ctx->lr = 0x8083F8B8u;
            ctx->pc = 0x8083CABCu;
            return;
    }

label_8083F8B8:
    ctx->pc = 0x8083F8B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8083F8B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8083F8B8: lwz     r0, 20(r1)
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
label_8083F8BC:
    ctx->pc = 0x8083F8BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x8083F8BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8083F8BC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8083F8C0:
    ctx->pc = 0x8083F8C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F8C0u)) return;
    // 8083F8C0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8083F8C4:
    ctx->pc = 0x8083F8C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8083F8C4u)) return;
    // 8083F8C4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8083E580;
        }
    }

    ctx->pc = 0x8083F8C8u;
    return;
return_dispatch_8083E580:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x8083E5B8u: goto label_8083E5B8;
    case 0x8083E684u: goto label_8083E684;
    case 0x8083E6F8u: goto label_8083E6F8;
    case 0x8083E7BCu: goto label_8083E7BC;
    case 0x8083E878u: goto label_8083E878;
    case 0x8083E884u: goto label_8083E884;
    case 0x8083E8A8u: goto label_8083E8A8;
    case 0x8083E930u: goto label_8083E930;
    case 0x8083E9C0u: goto label_8083E9C0;
    case 0x8083EA2Cu: goto label_8083EA2C;
    case 0x8083EAF0u: goto label_8083EAF0;
    case 0x8083EBB8u: goto label_8083EBB8;
    case 0x8083EBC4u: goto label_8083EBC4;
    case 0x8083EBD4u: goto label_8083EBD4;
    case 0x8083EBF0u: goto label_8083EBF0;
    case 0x8083ED7Cu: goto label_8083ED7C;
    case 0x8083EDB8u: goto label_8083EDB8;
    case 0x8083EE00u: goto label_8083EE00;
    case 0x8083EE48u: goto label_8083EE48;
    case 0x8083EE8Cu: goto label_8083EE8C;
    case 0x8083EF88u: goto label_8083EF88;
    case 0x8083EF98u: goto label_8083EF98;
    case 0x8083F02Cu: goto label_8083F02C;
    case 0x8083F03Cu: goto label_8083F03C;
    case 0x8083F0D0u: goto label_8083F0D0;
    case 0x8083F0E0u: goto label_8083F0E0;
    case 0x8083F16Cu: goto label_8083F16C;
    case 0x8083F17Cu: goto label_8083F17C;
    case 0x8083F25Cu: goto label_8083F25C;
    case 0x8083F2A8u: goto label_8083F2A8;
    case 0x8083F304u: goto label_8083F304;
    case 0x8083F350u: goto label_8083F350;
    case 0x8083F4B0u: goto label_8083F4B0;
    case 0x8083F52Cu: goto label_8083F52C;
    case 0x8083F568u: goto label_8083F568;
    case 0x8083F5B0u: goto label_8083F5B0;
    case 0x8083F5F8u: goto label_8083F5F8;
    case 0x8083F63Cu: goto label_8083F63C;
    case 0x8083F738u: goto label_8083F738;
    case 0x8083F77Cu: goto label_8083F77C;
    case 0x8083F7D8u: goto label_8083F7D8;
    case 0x8083F824u: goto label_8083F824;
    case 0x8083F8B8u: goto label_8083F8B8;
    default: return;
    }
}

