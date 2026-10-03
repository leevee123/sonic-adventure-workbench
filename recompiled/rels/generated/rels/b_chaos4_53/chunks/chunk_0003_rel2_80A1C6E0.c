// DolRecomp output
#include "../generated.h"

void func_80A1C6E0(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80A1C6E0[1876] = {
        &&label_80A1C6E0,
        &&label_80A1C6E4,
        &&label_80A1C6E8,
        &&label_80A1C6EC,
        &&label_80A1C6F0,
        &&label_80A1C6F4,
        &&label_80A1C6F8,
        &&label_80A1C6FC,
        &&label_80A1C700,
        &&label_80A1C704,
        &&label_80A1C708,
        &&label_80A1C70C,
        &&label_80A1C710,
        &&label_80A1C714,
        &&label_80A1C718,
        &&label_80A1C71C,
        &&label_80A1C720,
        &&label_80A1C724,
        &&label_80A1C728,
        &&label_80A1C72C,
        &&label_80A1C730,
        &&label_80A1C734,
        &&label_80A1C738,
        &&label_80A1C73C,
        &&label_80A1C740,
        &&label_80A1C744,
        &&label_80A1C748,
        &&label_80A1C74C,
        &&label_80A1C750,
        &&label_80A1C754,
        &&label_80A1C758,
        &&label_80A1C75C,
        &&label_80A1C760,
        &&label_80A1C764,
        &&label_80A1C768,
        &&label_80A1C76C,
        &&label_80A1C770,
        &&label_80A1C774,
        &&label_80A1C778,
        &&label_80A1C77C,
        &&label_80A1C780,
        &&label_80A1C784,
        &&label_80A1C788,
        &&label_80A1C78C,
        &&label_80A1C790,
        &&label_80A1C794,
        &&label_80A1C798,
        &&label_80A1C79C,
        &&label_80A1C7A0,
        &&label_80A1C7A4,
        &&label_80A1C7A8,
        &&label_80A1C7AC,
        &&label_80A1C7B0,
        &&label_80A1C7B4,
        &&label_80A1C7B8,
        &&label_80A1C7BC,
        &&label_80A1C7C0,
        &&label_80A1C7C4,
        &&label_80A1C7C8,
        &&label_80A1C7CC,
        &&label_80A1C7D0,
        &&label_80A1C7D4,
        &&label_80A1C7D8,
        &&label_80A1C7DC,
        &&label_80A1C7E0,
        &&label_80A1C7E4,
        &&label_80A1C7E8,
        &&label_80A1C7EC,
        &&label_80A1C7F0,
        &&label_80A1C7F4,
        &&label_80A1C7F8,
        &&label_80A1C7FC,
        &&label_80A1C800,
        &&label_80A1C804,
        &&label_80A1C808,
        &&label_80A1C80C,
        &&label_80A1C810,
        &&label_80A1C814,
        &&label_80A1C818,
        &&label_80A1C81C,
        &&label_80A1C820,
        &&label_80A1C824,
        &&label_80A1C828,
        &&label_80A1C82C,
        &&label_80A1C830,
        &&label_80A1C834,
        &&label_80A1C838,
        &&label_80A1C83C,
        &&label_80A1C840,
        &&label_80A1C844,
        &&label_80A1C848,
        &&label_80A1C84C,
        &&label_80A1C850,
        &&label_80A1C854,
        &&label_80A1C858,
        &&label_80A1C85C,
        &&label_80A1C860,
        &&label_80A1C864,
        &&label_80A1C868,
        &&label_80A1C86C,
        &&label_80A1C870,
        &&label_80A1C874,
        &&label_80A1C878,
        &&label_80A1C87C,
        &&label_80A1C880,
        &&label_80A1C884,
        &&label_80A1C888,
        &&label_80A1C88C,
        &&label_80A1C890,
        &&label_80A1C894,
        &&label_80A1C898,
        &&label_80A1C89C,
        &&label_80A1C8A0,
        &&label_80A1C8A4,
        &&label_80A1C8A8,
        &&label_80A1C8AC,
        &&label_80A1C8B0,
        &&label_80A1C8B4,
        &&label_80A1C8B8,
        &&label_80A1C8BC,
        &&label_80A1C8C0,
        &&label_80A1C8C4,
        &&label_80A1C8C8,
        &&label_80A1C8CC,
        &&label_80A1C8D0,
        &&label_80A1C8D4,
        &&label_80A1C8D8,
        &&label_80A1C8DC,
        &&label_80A1C8E0,
        &&label_80A1C8E4,
        &&label_80A1C8E8,
        &&label_80A1C8EC,
        &&label_80A1C8F0,
        &&label_80A1C8F4,
        &&label_80A1C8F8,
        &&label_80A1C8FC,
        &&label_80A1C900,
        &&label_80A1C904,
        &&label_80A1C908,
        &&label_80A1C90C,
        &&label_80A1C910,
        &&label_80A1C914,
        &&label_80A1C918,
        &&label_80A1C91C,
        &&label_80A1C920,
        &&label_80A1C924,
        &&label_80A1C928,
        &&label_80A1C92C,
        &&label_80A1C930,
        &&label_80A1C934,
        &&label_80A1C938,
        &&label_80A1C93C,
        &&label_80A1C940,
        &&label_80A1C944,
        &&label_80A1C948,
        &&label_80A1C94C,
        &&label_80A1C950,
        &&label_80A1C954,
        &&label_80A1C958,
        &&label_80A1C95C,
        &&label_80A1C960,
        &&label_80A1C964,
        &&label_80A1C968,
        &&label_80A1C96C,
        &&label_80A1C970,
        &&label_80A1C974,
        &&label_80A1C978,
        &&label_80A1C97C,
        &&label_80A1C980,
        &&label_80A1C984,
        &&label_80A1C988,
        &&label_80A1C98C,
        &&label_80A1C990,
        &&label_80A1C994,
        &&label_80A1C998,
        &&label_80A1C99C,
        &&label_80A1C9A0,
        &&label_80A1C9A4,
        &&label_80A1C9A8,
        &&label_80A1C9AC,
        &&label_80A1C9B0,
        &&label_80A1C9B4,
        &&label_80A1C9B8,
        &&label_80A1C9BC,
        &&label_80A1C9C0,
        &&label_80A1C9C4,
        &&label_80A1C9C8,
        &&label_80A1C9CC,
        &&label_80A1C9D0,
        &&label_80A1C9D4,
        &&label_80A1C9D8,
        &&label_80A1C9DC,
        &&label_80A1C9E0,
        &&label_80A1C9E4,
        &&label_80A1C9E8,
        &&label_80A1C9EC,
        &&label_80A1C9F0,
        &&label_80A1C9F4,
        &&label_80A1C9F8,
        &&label_80A1C9FC,
        &&label_80A1CA00,
        &&label_80A1CA04,
        &&label_80A1CA08,
        &&label_80A1CA0C,
        &&label_80A1CA10,
        &&label_80A1CA14,
        &&label_80A1CA18,
        &&label_80A1CA1C,
        &&label_80A1CA20,
        &&label_80A1CA24,
        &&label_80A1CA28,
        &&label_80A1CA2C,
        &&label_80A1CA30,
        &&label_80A1CA34,
        &&label_80A1CA38,
        &&label_80A1CA3C,
        &&label_80A1CA40,
        &&label_80A1CA44,
        &&label_80A1CA48,
        &&label_80A1CA4C,
        &&label_80A1CA50,
        &&label_80A1CA54,
        &&label_80A1CA58,
        &&label_80A1CA5C,
        &&label_80A1CA60,
        &&label_80A1CA64,
        &&label_80A1CA68,
        &&label_80A1CA6C,
        &&label_80A1CA70,
        &&label_80A1CA74,
        &&label_80A1CA78,
        &&label_80A1CA7C,
        &&label_80A1CA80,
        &&label_80A1CA84,
        &&label_80A1CA88,
        &&label_80A1CA8C,
        &&label_80A1CA90,
        &&label_80A1CA94,
        &&label_80A1CA98,
        &&label_80A1CA9C,
        &&label_80A1CAA0,
        &&label_80A1CAA4,
        &&label_80A1CAA8,
        &&label_80A1CAAC,
        &&label_80A1CAB0,
        &&label_80A1CAB4,
        &&label_80A1CAB8,
        &&label_80A1CABC,
        &&label_80A1CAC0,
        &&label_80A1CAC4,
        &&label_80A1CAC8,
        &&label_80A1CACC,
        &&label_80A1CAD0,
        &&label_80A1CAD4,
        &&label_80A1CAD8,
        &&label_80A1CADC,
        &&label_80A1CAE0,
        &&label_80A1CAE4,
        &&label_80A1CAE8,
        &&label_80A1CAEC,
        &&label_80A1CAF0,
        &&label_80A1CAF4,
        &&label_80A1CAF8,
        &&label_80A1CAFC,
        &&label_80A1CB00,
        &&label_80A1CB04,
        &&label_80A1CB08,
        &&label_80A1CB0C,
        &&label_80A1CB10,
        &&label_80A1CB14,
        &&label_80A1CB18,
        &&label_80A1CB1C,
        &&label_80A1CB20,
        &&label_80A1CB24,
        &&label_80A1CB28,
        &&label_80A1CB2C,
        &&label_80A1CB30,
        &&label_80A1CB34,
        &&label_80A1CB38,
        &&label_80A1CB3C,
        &&label_80A1CB40,
        &&label_80A1CB44,
        &&label_80A1CB48,
        &&label_80A1CB4C,
        &&label_80A1CB50,
        &&label_80A1CB54,
        &&label_80A1CB58,
        &&label_80A1CB5C,
        &&label_80A1CB60,
        &&label_80A1CB64,
        &&label_80A1CB68,
        &&label_80A1CB6C,
        &&label_80A1CB70,
        &&label_80A1CB74,
        &&label_80A1CB78,
        &&label_80A1CB7C,
        &&label_80A1CB80,
        &&label_80A1CB84,
        &&label_80A1CB88,
        &&label_80A1CB8C,
        &&label_80A1CB90,
        &&label_80A1CB94,
        &&label_80A1CB98,
        &&label_80A1CB9C,
        &&label_80A1CBA0,
        &&label_80A1CBA4,
        &&label_80A1CBA8,
        &&label_80A1CBAC,
        &&label_80A1CBB0,
        &&label_80A1CBB4,
        &&label_80A1CBB8,
        &&label_80A1CBBC,
        &&label_80A1CBC0,
        &&label_80A1CBC4,
        &&label_80A1CBC8,
        &&label_80A1CBCC,
        &&label_80A1CBD0,
        &&label_80A1CBD4,
        &&label_80A1CBD8,
        &&label_80A1CBDC,
        &&label_80A1CBE0,
        &&label_80A1CBE4,
        &&label_80A1CBE8,
        &&label_80A1CBEC,
        &&label_80A1CBF0,
        &&label_80A1CBF4,
        &&label_80A1CBF8,
        &&label_80A1CBFC,
        &&label_80A1CC00,
        &&label_80A1CC04,
        &&label_80A1CC08,
        &&label_80A1CC0C,
        &&label_80A1CC10,
        &&label_80A1CC14,
        &&label_80A1CC18,
        &&label_80A1CC1C,
        &&label_80A1CC20,
        &&label_80A1CC24,
        &&label_80A1CC28,
        &&label_80A1CC2C,
        &&label_80A1CC30,
        &&label_80A1CC34,
        &&label_80A1CC38,
        &&label_80A1CC3C,
        &&label_80A1CC40,
        &&label_80A1CC44,
        &&label_80A1CC48,
        &&label_80A1CC4C,
        &&label_80A1CC50,
        &&label_80A1CC54,
        &&label_80A1CC58,
        &&label_80A1CC5C,
        &&label_80A1CC60,
        &&label_80A1CC64,
        &&label_80A1CC68,
        &&label_80A1CC6C,
        &&label_80A1CC70,
        &&label_80A1CC74,
        &&label_80A1CC78,
        &&label_80A1CC7C,
        &&label_80A1CC80,
        &&label_80A1CC84,
        &&label_80A1CC88,
        &&label_80A1CC8C,
        &&label_80A1CC90,
        &&label_80A1CC94,
        &&label_80A1CC98,
        &&label_80A1CC9C,
        &&label_80A1CCA0,
        &&label_80A1CCA4,
        &&label_80A1CCA8,
        &&label_80A1CCAC,
        &&label_80A1CCB0,
        &&label_80A1CCB4,
        &&label_80A1CCB8,
        &&label_80A1CCBC,
        &&label_80A1CCC0,
        &&label_80A1CCC4,
        &&label_80A1CCC8,
        &&label_80A1CCCC,
        &&label_80A1CCD0,
        &&label_80A1CCD4,
        &&label_80A1CCD8,
        &&label_80A1CCDC,
        &&label_80A1CCE0,
        &&label_80A1CCE4,
        &&label_80A1CCE8,
        &&label_80A1CCEC,
        &&label_80A1CCF0,
        &&label_80A1CCF4,
        &&label_80A1CCF8,
        &&label_80A1CCFC,
        &&label_80A1CD00,
        &&label_80A1CD04,
        &&label_80A1CD08,
        &&label_80A1CD0C,
        &&label_80A1CD10,
        &&label_80A1CD14,
        &&label_80A1CD18,
        &&label_80A1CD1C,
        &&label_80A1CD20,
        &&label_80A1CD24,
        &&label_80A1CD28,
        &&label_80A1CD2C,
        &&label_80A1CD30,
        &&label_80A1CD34,
        &&label_80A1CD38,
        &&label_80A1CD3C,
        &&label_80A1CD40,
        &&label_80A1CD44,
        &&label_80A1CD48,
        &&label_80A1CD4C,
        &&label_80A1CD50,
        &&label_80A1CD54,
        &&label_80A1CD58,
        &&label_80A1CD5C,
        &&label_80A1CD60,
        &&label_80A1CD64,
        &&label_80A1CD68,
        &&label_80A1CD6C,
        &&label_80A1CD70,
        &&label_80A1CD74,
        &&label_80A1CD78,
        &&label_80A1CD7C,
        &&label_80A1CD80,
        &&label_80A1CD84,
        &&label_80A1CD88,
        &&label_80A1CD8C,
        &&label_80A1CD90,
        &&label_80A1CD94,
        &&label_80A1CD98,
        &&label_80A1CD9C,
        &&label_80A1CDA0,
        &&label_80A1CDA4,
        &&label_80A1CDA8,
        &&label_80A1CDAC,
        &&label_80A1CDB0,
        &&label_80A1CDB4,
        &&label_80A1CDB8,
        &&label_80A1CDBC,
        &&label_80A1CDC0,
        &&label_80A1CDC4,
        &&label_80A1CDC8,
        &&label_80A1CDCC,
        &&label_80A1CDD0,
        &&label_80A1CDD4,
        &&label_80A1CDD8,
        &&label_80A1CDDC,
        &&label_80A1CDE0,
        &&label_80A1CDE4,
        &&label_80A1CDE8,
        &&label_80A1CDEC,
        &&label_80A1CDF0,
        &&label_80A1CDF4,
        &&label_80A1CDF8,
        &&label_80A1CDFC,
        &&label_80A1CE00,
        &&label_80A1CE04,
        &&label_80A1CE08,
        &&label_80A1CE0C,
        &&label_80A1CE10,
        &&label_80A1CE14,
        &&label_80A1CE18,
        &&label_80A1CE1C,
        &&label_80A1CE20,
        &&label_80A1CE24,
        &&label_80A1CE28,
        &&label_80A1CE2C,
        &&label_80A1CE30,
        &&label_80A1CE34,
        &&label_80A1CE38,
        &&label_80A1CE3C,
        &&label_80A1CE40,
        &&label_80A1CE44,
        &&label_80A1CE48,
        &&label_80A1CE4C,
        &&label_80A1CE50,
        &&label_80A1CE54,
        &&label_80A1CE58,
        &&label_80A1CE5C,
        &&label_80A1CE60,
        &&label_80A1CE64,
        &&label_80A1CE68,
        &&label_80A1CE6C,
        &&label_80A1CE70,
        &&label_80A1CE74,
        &&label_80A1CE78,
        &&label_80A1CE7C,
        &&label_80A1CE80,
        &&label_80A1CE84,
        &&label_80A1CE88,
        &&label_80A1CE8C,
        &&label_80A1CE90,
        &&label_80A1CE94,
        &&label_80A1CE98,
        &&label_80A1CE9C,
        &&label_80A1CEA0,
        &&label_80A1CEA4,
        &&label_80A1CEA8,
        &&label_80A1CEAC,
        &&label_80A1CEB0,
        &&label_80A1CEB4,
        &&label_80A1CEB8,
        &&label_80A1CEBC,
        &&label_80A1CEC0,
        &&label_80A1CEC4,
        &&label_80A1CEC8,
        &&label_80A1CECC,
        &&label_80A1CED0,
        &&label_80A1CED4,
        &&label_80A1CED8,
        &&label_80A1CEDC,
        &&label_80A1CEE0,
        &&label_80A1CEE4,
        &&label_80A1CEE8,
        &&label_80A1CEEC,
        &&label_80A1CEF0,
        &&label_80A1CEF4,
        &&label_80A1CEF8,
        &&label_80A1CEFC,
        &&label_80A1CF00,
        &&label_80A1CF04,
        &&label_80A1CF08,
        &&label_80A1CF0C,
        &&label_80A1CF10,
        &&label_80A1CF14,
        &&label_80A1CF18,
        &&label_80A1CF1C,
        &&label_80A1CF20,
        &&label_80A1CF24,
        &&label_80A1CF28,
        &&label_80A1CF2C,
        &&label_80A1CF30,
        &&label_80A1CF34,
        &&label_80A1CF38,
        &&label_80A1CF3C,
        &&label_80A1CF40,
        &&label_80A1CF44,
        &&label_80A1CF48,
        &&label_80A1CF4C,
        &&label_80A1CF50,
        &&label_80A1CF54,
        &&label_80A1CF58,
        &&label_80A1CF5C,
        &&label_80A1CF60,
        &&label_80A1CF64,
        &&label_80A1CF68,
        &&label_80A1CF6C,
        &&label_80A1CF70,
        &&label_80A1CF74,
        &&label_80A1CF78,
        &&label_80A1CF7C,
        &&label_80A1CF80,
        &&label_80A1CF84,
        &&label_80A1CF88,
        &&label_80A1CF8C,
        &&label_80A1CF90,
        &&label_80A1CF94,
        &&label_80A1CF98,
        &&label_80A1CF9C,
        &&label_80A1CFA0,
        &&label_80A1CFA4,
        &&label_80A1CFA8,
        &&label_80A1CFAC,
        &&label_80A1CFB0,
        &&label_80A1CFB4,
        &&label_80A1CFB8,
        &&label_80A1CFBC,
        &&label_80A1CFC0,
        &&label_80A1CFC4,
        &&label_80A1CFC8,
        &&label_80A1CFCC,
        &&label_80A1CFD0,
        &&label_80A1CFD4,
        &&label_80A1CFD8,
        &&label_80A1CFDC,
        &&label_80A1CFE0,
        &&label_80A1CFE4,
        &&label_80A1CFE8,
        &&label_80A1CFEC,
        &&label_80A1CFF0,
        &&label_80A1CFF4,
        &&label_80A1CFF8,
        &&label_80A1CFFC,
        &&label_80A1D000,
        &&label_80A1D004,
        &&label_80A1D008,
        &&label_80A1D00C,
        &&label_80A1D010,
        &&label_80A1D014,
        &&label_80A1D018,
        &&label_80A1D01C,
        &&label_80A1D020,
        &&label_80A1D024,
        &&label_80A1D028,
        &&label_80A1D02C,
        &&label_80A1D030,
        &&label_80A1D034,
        &&label_80A1D038,
        &&label_80A1D03C,
        &&label_80A1D040,
        &&label_80A1D044,
        &&label_80A1D048,
        &&label_80A1D04C,
        &&label_80A1D050,
        &&label_80A1D054,
        &&label_80A1D058,
        &&label_80A1D05C,
        &&label_80A1D060,
        &&label_80A1D064,
        &&label_80A1D068,
        &&label_80A1D06C,
        &&label_80A1D070,
        &&label_80A1D074,
        &&label_80A1D078,
        &&label_80A1D07C,
        &&label_80A1D080,
        &&label_80A1D084,
        &&label_80A1D088,
        &&label_80A1D08C,
        &&label_80A1D090,
        &&label_80A1D094,
        &&label_80A1D098,
        &&label_80A1D09C,
        &&label_80A1D0A0,
        &&label_80A1D0A4,
        &&label_80A1D0A8,
        &&label_80A1D0AC,
        &&label_80A1D0B0,
        &&label_80A1D0B4,
        &&label_80A1D0B8,
        &&label_80A1D0BC,
        &&label_80A1D0C0,
        &&label_80A1D0C4,
        &&label_80A1D0C8,
        &&label_80A1D0CC,
        &&label_80A1D0D0,
        &&label_80A1D0D4,
        &&label_80A1D0D8,
        &&label_80A1D0DC,
        &&label_80A1D0E0,
        &&label_80A1D0E4,
        &&label_80A1D0E8,
        &&label_80A1D0EC,
        &&label_80A1D0F0,
        &&label_80A1D0F4,
        &&label_80A1D0F8,
        &&label_80A1D0FC,
        &&label_80A1D100,
        &&label_80A1D104,
        &&label_80A1D108,
        &&label_80A1D10C,
        &&label_80A1D110,
        &&label_80A1D114,
        &&label_80A1D118,
        &&label_80A1D11C,
        &&label_80A1D120,
        &&label_80A1D124,
        &&label_80A1D128,
        &&label_80A1D12C,
        &&label_80A1D130,
        &&label_80A1D134,
        &&label_80A1D138,
        &&label_80A1D13C,
        &&label_80A1D140,
        &&label_80A1D144,
        &&label_80A1D148,
        &&label_80A1D14C,
        &&label_80A1D150,
        &&label_80A1D154,
        &&label_80A1D158,
        &&label_80A1D15C,
        &&label_80A1D160,
        &&label_80A1D164,
        &&label_80A1D168,
        &&label_80A1D16C,
        &&label_80A1D170,
        &&label_80A1D174,
        &&label_80A1D178,
        &&label_80A1D17C,
        &&label_80A1D180,
        &&label_80A1D184,
        &&label_80A1D188,
        &&label_80A1D18C,
        &&label_80A1D190,
        &&label_80A1D194,
        &&label_80A1D198,
        &&label_80A1D19C,
        &&label_80A1D1A0,
        &&label_80A1D1A4,
        &&label_80A1D1A8,
        &&label_80A1D1AC,
        &&label_80A1D1B0,
        &&label_80A1D1B4,
        &&label_80A1D1B8,
        &&label_80A1D1BC,
        &&label_80A1D1C0,
        &&label_80A1D1C4,
        &&label_80A1D1C8,
        &&label_80A1D1CC,
        &&label_80A1D1D0,
        &&label_80A1D1D4,
        &&label_80A1D1D8,
        &&label_80A1D1DC,
        &&label_80A1D1E0,
        &&label_80A1D1E4,
        &&label_80A1D1E8,
        &&label_80A1D1EC,
        &&label_80A1D1F0,
        &&label_80A1D1F4,
        &&label_80A1D1F8,
        &&label_80A1D1FC,
        &&label_80A1D200,
        &&label_80A1D204,
        &&label_80A1D208,
        &&label_80A1D20C,
        &&label_80A1D210,
        &&label_80A1D214,
        &&label_80A1D218,
        &&label_80A1D21C,
        &&label_80A1D220,
        &&label_80A1D224,
        &&label_80A1D228,
        &&label_80A1D22C,
        &&label_80A1D230,
        &&label_80A1D234,
        &&label_80A1D238,
        &&label_80A1D23C,
        &&label_80A1D240,
        &&label_80A1D244,
        &&label_80A1D248,
        &&label_80A1D24C,
        &&label_80A1D250,
        &&label_80A1D254,
        &&label_80A1D258,
        &&label_80A1D25C,
        &&label_80A1D260,
        &&label_80A1D264,
        &&label_80A1D268,
        &&label_80A1D26C,
        &&label_80A1D270,
        &&label_80A1D274,
        &&label_80A1D278,
        &&label_80A1D27C,
        &&label_80A1D280,
        &&label_80A1D284,
        &&label_80A1D288,
        &&label_80A1D28C,
        &&label_80A1D290,
        &&label_80A1D294,
        &&label_80A1D298,
        &&label_80A1D29C,
        &&label_80A1D2A0,
        &&label_80A1D2A4,
        &&label_80A1D2A8,
        &&label_80A1D2AC,
        &&label_80A1D2B0,
        &&label_80A1D2B4,
        &&label_80A1D2B8,
        &&label_80A1D2BC,
        &&label_80A1D2C0,
        &&label_80A1D2C4,
        &&label_80A1D2C8,
        &&label_80A1D2CC,
        &&label_80A1D2D0,
        &&label_80A1D2D4,
        &&label_80A1D2D8,
        &&label_80A1D2DC,
        &&label_80A1D2E0,
        &&label_80A1D2E4,
        &&label_80A1D2E8,
        &&label_80A1D2EC,
        &&label_80A1D2F0,
        &&label_80A1D2F4,
        &&label_80A1D2F8,
        &&label_80A1D2FC,
        &&label_80A1D300,
        &&label_80A1D304,
        &&label_80A1D308,
        &&label_80A1D30C,
        &&label_80A1D310,
        &&label_80A1D314,
        &&label_80A1D318,
        &&label_80A1D31C,
        &&label_80A1D320,
        &&label_80A1D324,
        &&label_80A1D328,
        &&label_80A1D32C,
        &&label_80A1D330,
        &&label_80A1D334,
        &&label_80A1D338,
        &&label_80A1D33C,
        &&label_80A1D340,
        &&label_80A1D344,
        &&label_80A1D348,
        &&label_80A1D34C,
        &&label_80A1D350,
        &&label_80A1D354,
        &&label_80A1D358,
        &&label_80A1D35C,
        &&label_80A1D360,
        &&label_80A1D364,
        &&label_80A1D368,
        &&label_80A1D36C,
        &&label_80A1D370,
        &&label_80A1D374,
        &&label_80A1D378,
        &&label_80A1D37C,
        &&label_80A1D380,
        &&label_80A1D384,
        &&label_80A1D388,
        &&label_80A1D38C,
        &&label_80A1D390,
        &&label_80A1D394,
        &&label_80A1D398,
        &&label_80A1D39C,
        &&label_80A1D3A0,
        &&label_80A1D3A4,
        &&label_80A1D3A8,
        &&label_80A1D3AC,
        &&label_80A1D3B0,
        &&label_80A1D3B4,
        &&label_80A1D3B8,
        &&label_80A1D3BC,
        &&label_80A1D3C0,
        &&label_80A1D3C4,
        &&label_80A1D3C8,
        &&label_80A1D3CC,
        &&label_80A1D3D0,
        &&label_80A1D3D4,
        &&label_80A1D3D8,
        &&label_80A1D3DC,
        &&label_80A1D3E0,
        &&label_80A1D3E4,
        &&label_80A1D3E8,
        &&label_80A1D3EC,
        &&label_80A1D3F0,
        &&label_80A1D3F4,
        &&label_80A1D3F8,
        &&label_80A1D3FC,
        &&label_80A1D400,
        &&label_80A1D404,
        &&label_80A1D408,
        &&label_80A1D40C,
        &&label_80A1D410,
        &&label_80A1D414,
        &&label_80A1D418,
        &&label_80A1D41C,
        &&label_80A1D420,
        &&label_80A1D424,
        &&label_80A1D428,
        &&label_80A1D42C,
        &&label_80A1D430,
        &&label_80A1D434,
        &&label_80A1D438,
        &&label_80A1D43C,
        &&label_80A1D440,
        &&label_80A1D444,
        &&label_80A1D448,
        &&label_80A1D44C,
        &&label_80A1D450,
        &&label_80A1D454,
        &&label_80A1D458,
        &&label_80A1D45C,
        &&label_80A1D460,
        &&label_80A1D464,
        &&label_80A1D468,
        &&label_80A1D46C,
        &&label_80A1D470,
        &&label_80A1D474,
        &&label_80A1D478,
        &&label_80A1D47C,
        &&label_80A1D480,
        &&label_80A1D484,
        &&label_80A1D488,
        &&label_80A1D48C,
        &&label_80A1D490,
        &&label_80A1D494,
        &&label_80A1D498,
        &&label_80A1D49C,
        &&label_80A1D4A0,
        &&label_80A1D4A4,
        &&label_80A1D4A8,
        &&label_80A1D4AC,
        &&label_80A1D4B0,
        &&label_80A1D4B4,
        &&label_80A1D4B8,
        &&label_80A1D4BC,
        &&label_80A1D4C0,
        &&label_80A1D4C4,
        &&label_80A1D4C8,
        &&label_80A1D4CC,
        &&label_80A1D4D0,
        &&label_80A1D4D4,
        &&label_80A1D4D8,
        &&label_80A1D4DC,
        &&label_80A1D4E0,
        &&label_80A1D4E4,
        &&label_80A1D4E8,
        &&label_80A1D4EC,
        &&label_80A1D4F0,
        &&label_80A1D4F4,
        &&label_80A1D4F8,
        &&label_80A1D4FC,
        &&label_80A1D500,
        &&label_80A1D504,
        &&label_80A1D508,
        &&label_80A1D50C,
        &&label_80A1D510,
        &&label_80A1D514,
        &&label_80A1D518,
        &&label_80A1D51C,
        &&label_80A1D520,
        &&label_80A1D524,
        &&label_80A1D528,
        &&label_80A1D52C,
        &&label_80A1D530,
        &&label_80A1D534,
        &&label_80A1D538,
        &&label_80A1D53C,
        &&label_80A1D540,
        &&label_80A1D544,
        &&label_80A1D548,
        &&label_80A1D54C,
        &&label_80A1D550,
        &&label_80A1D554,
        &&label_80A1D558,
        &&label_80A1D55C,
        &&label_80A1D560,
        &&label_80A1D564,
        &&label_80A1D568,
        &&label_80A1D56C,
        &&label_80A1D570,
        &&label_80A1D574,
        &&label_80A1D578,
        &&label_80A1D57C,
        &&label_80A1D580,
        &&label_80A1D584,
        &&label_80A1D588,
        &&label_80A1D58C,
        &&label_80A1D590,
        &&label_80A1D594,
        &&label_80A1D598,
        &&label_80A1D59C,
        &&label_80A1D5A0,
        &&label_80A1D5A4,
        &&label_80A1D5A8,
        &&label_80A1D5AC,
        &&label_80A1D5B0,
        &&label_80A1D5B4,
        &&label_80A1D5B8,
        &&label_80A1D5BC,
        &&label_80A1D5C0,
        &&label_80A1D5C4,
        &&label_80A1D5C8,
        &&label_80A1D5CC,
        &&label_80A1D5D0,
        &&label_80A1D5D4,
        &&label_80A1D5D8,
        &&label_80A1D5DC,
        &&label_80A1D5E0,
        &&label_80A1D5E4,
        &&label_80A1D5E8,
        &&label_80A1D5EC,
        &&label_80A1D5F0,
        &&label_80A1D5F4,
        &&label_80A1D5F8,
        &&label_80A1D5FC,
        &&label_80A1D600,
        &&label_80A1D604,
        &&label_80A1D608,
        &&label_80A1D60C,
        &&label_80A1D610,
        &&label_80A1D614,
        &&label_80A1D618,
        &&label_80A1D61C,
        &&label_80A1D620,
        &&label_80A1D624,
        &&label_80A1D628,
        &&label_80A1D62C,
        &&label_80A1D630,
        &&label_80A1D634,
        &&label_80A1D638,
        &&label_80A1D63C,
        &&label_80A1D640,
        &&label_80A1D644,
        &&label_80A1D648,
        &&label_80A1D64C,
        &&label_80A1D650,
        &&label_80A1D654,
        &&label_80A1D658,
        &&label_80A1D65C,
        &&label_80A1D660,
        &&label_80A1D664,
        &&label_80A1D668,
        &&label_80A1D66C,
        &&label_80A1D670,
        &&label_80A1D674,
        &&label_80A1D678,
        &&label_80A1D67C,
        &&label_80A1D680,
        &&label_80A1D684,
        &&label_80A1D688,
        &&label_80A1D68C,
        &&label_80A1D690,
        &&label_80A1D694,
        &&label_80A1D698,
        &&label_80A1D69C,
        &&label_80A1D6A0,
        &&label_80A1D6A4,
        &&label_80A1D6A8,
        &&label_80A1D6AC,
        &&label_80A1D6B0,
        &&label_80A1D6B4,
        &&label_80A1D6B8,
        &&label_80A1D6BC,
        &&label_80A1D6C0,
        &&label_80A1D6C4,
        &&label_80A1D6C8,
        &&label_80A1D6CC,
        &&label_80A1D6D0,
        &&label_80A1D6D4,
        &&label_80A1D6D8,
        &&label_80A1D6DC,
        &&label_80A1D6E0,
        &&label_80A1D6E4,
        &&label_80A1D6E8,
        &&label_80A1D6EC,
        &&label_80A1D6F0,
        &&label_80A1D6F4,
        &&label_80A1D6F8,
        &&label_80A1D6FC,
        &&label_80A1D700,
        &&label_80A1D704,
        &&label_80A1D708,
        &&label_80A1D70C,
        &&label_80A1D710,
        &&label_80A1D714,
        &&label_80A1D718,
        &&label_80A1D71C,
        &&label_80A1D720,
        &&label_80A1D724,
        &&label_80A1D728,
        &&label_80A1D72C,
        &&label_80A1D730,
        &&label_80A1D734,
        &&label_80A1D738,
        &&label_80A1D73C,
        &&label_80A1D740,
        &&label_80A1D744,
        &&label_80A1D748,
        &&label_80A1D74C,
        &&label_80A1D750,
        &&label_80A1D754,
        &&label_80A1D758,
        &&label_80A1D75C,
        &&label_80A1D760,
        &&label_80A1D764,
        &&label_80A1D768,
        &&label_80A1D76C,
        &&label_80A1D770,
        &&label_80A1D774,
        &&label_80A1D778,
        &&label_80A1D77C,
        &&label_80A1D780,
        &&label_80A1D784,
        &&label_80A1D788,
        &&label_80A1D78C,
        &&label_80A1D790,
        &&label_80A1D794,
        &&label_80A1D798,
        &&label_80A1D79C,
        &&label_80A1D7A0,
        &&label_80A1D7A4,
        &&label_80A1D7A8,
        &&label_80A1D7AC,
        &&label_80A1D7B0,
        &&label_80A1D7B4,
        &&label_80A1D7B8,
        &&label_80A1D7BC,
        &&label_80A1D7C0,
        &&label_80A1D7C4,
        &&label_80A1D7C8,
        &&label_80A1D7CC,
        &&label_80A1D7D0,
        &&label_80A1D7D4,
        &&label_80A1D7D8,
        &&label_80A1D7DC,
        &&label_80A1D7E0,
        &&label_80A1D7E4,
        &&label_80A1D7E8,
        &&label_80A1D7EC,
        &&label_80A1D7F0,
        &&label_80A1D7F4,
        &&label_80A1D7F8,
        &&label_80A1D7FC,
        &&label_80A1D800,
        &&label_80A1D804,
        &&label_80A1D808,
        &&label_80A1D80C,
        &&label_80A1D810,
        &&label_80A1D814,
        &&label_80A1D818,
        &&label_80A1D81C,
        &&label_80A1D820,
        &&label_80A1D824,
        &&label_80A1D828,
        &&label_80A1D82C,
        &&label_80A1D830,
        &&label_80A1D834,
        &&label_80A1D838,
        &&label_80A1D83C,
        &&label_80A1D840,
        &&label_80A1D844,
        &&label_80A1D848,
        &&label_80A1D84C,
        &&label_80A1D850,
        &&label_80A1D854,
        &&label_80A1D858,
        &&label_80A1D85C,
        &&label_80A1D860,
        &&label_80A1D864,
        &&label_80A1D868,
        &&label_80A1D86C,
        &&label_80A1D870,
        &&label_80A1D874,
        &&label_80A1D878,
        &&label_80A1D87C,
        &&label_80A1D880,
        &&label_80A1D884,
        &&label_80A1D888,
        &&label_80A1D88C,
        &&label_80A1D890,
        &&label_80A1D894,
        &&label_80A1D898,
        &&label_80A1D89C,
        &&label_80A1D8A0,
        &&label_80A1D8A4,
        &&label_80A1D8A8,
        &&label_80A1D8AC,
        &&label_80A1D8B0,
        &&label_80A1D8B4,
        &&label_80A1D8B8,
        &&label_80A1D8BC,
        &&label_80A1D8C0,
        &&label_80A1D8C4,
        &&label_80A1D8C8,
        &&label_80A1D8CC,
        &&label_80A1D8D0,
        &&label_80A1D8D4,
        &&label_80A1D8D8,
        &&label_80A1D8DC,
        &&label_80A1D8E0,
        &&label_80A1D8E4,
        &&label_80A1D8E8,
        &&label_80A1D8EC,
        &&label_80A1D8F0,
        &&label_80A1D8F4,
        &&label_80A1D8F8,
        &&label_80A1D8FC,
        &&label_80A1D900,
        &&label_80A1D904,
        &&label_80A1D908,
        &&label_80A1D90C,
        &&label_80A1D910,
        &&label_80A1D914,
        &&label_80A1D918,
        &&label_80A1D91C,
        &&label_80A1D920,
        &&label_80A1D924,
        &&label_80A1D928,
        &&label_80A1D92C,
        &&label_80A1D930,
        &&label_80A1D934,
        &&label_80A1D938,
        &&label_80A1D93C,
        &&label_80A1D940,
        &&label_80A1D944,
        &&label_80A1D948,
        &&label_80A1D94C,
        &&label_80A1D950,
        &&label_80A1D954,
        &&label_80A1D958,
        &&label_80A1D95C,
        &&label_80A1D960,
        &&label_80A1D964,
        &&label_80A1D968,
        &&label_80A1D96C,
        &&label_80A1D970,
        &&label_80A1D974,
        &&label_80A1D978,
        &&label_80A1D97C,
        &&label_80A1D980,
        &&label_80A1D984,
        &&label_80A1D988,
        &&label_80A1D98C,
        &&label_80A1D990,
        &&label_80A1D994,
        &&label_80A1D998,
        &&label_80A1D99C,
        &&label_80A1D9A0,
        &&label_80A1D9A4,
        &&label_80A1D9A8,
        &&label_80A1D9AC,
        &&label_80A1D9B0,
        &&label_80A1D9B4,
        &&label_80A1D9B8,
        &&label_80A1D9BC,
        &&label_80A1D9C0,
        &&label_80A1D9C4,
        &&label_80A1D9C8,
        &&label_80A1D9CC,
        &&label_80A1D9D0,
        &&label_80A1D9D4,
        &&label_80A1D9D8,
        &&label_80A1D9DC,
        &&label_80A1D9E0,
        &&label_80A1D9E4,
        &&label_80A1D9E8,
        &&label_80A1D9EC,
        &&label_80A1D9F0,
        &&label_80A1D9F4,
        &&label_80A1D9F8,
        &&label_80A1D9FC,
        &&label_80A1DA00,
        &&label_80A1DA04,
        &&label_80A1DA08,
        &&label_80A1DA0C,
        &&label_80A1DA10,
        &&label_80A1DA14,
        &&label_80A1DA18,
        &&label_80A1DA1C,
        &&label_80A1DA20,
        &&label_80A1DA24,
        &&label_80A1DA28,
        &&label_80A1DA2C,
        &&label_80A1DA30,
        &&label_80A1DA34,
        &&label_80A1DA38,
        &&label_80A1DA3C,
        &&label_80A1DA40,
        &&label_80A1DA44,
        &&label_80A1DA48,
        &&label_80A1DA4C,
        &&label_80A1DA50,
        &&label_80A1DA54,
        &&label_80A1DA58,
        &&label_80A1DA5C,
        &&label_80A1DA60,
        &&label_80A1DA64,
        &&label_80A1DA68,
        &&label_80A1DA6C,
        &&label_80A1DA70,
        &&label_80A1DA74,
        &&label_80A1DA78,
        &&label_80A1DA7C,
        &&label_80A1DA80,
        &&label_80A1DA84,
        &&label_80A1DA88,
        &&label_80A1DA8C,
        &&label_80A1DA90,
        &&label_80A1DA94,
        &&label_80A1DA98,
        &&label_80A1DA9C,
        &&label_80A1DAA0,
        &&label_80A1DAA4,
        &&label_80A1DAA8,
        &&label_80A1DAAC,
        &&label_80A1DAB0,
        &&label_80A1DAB4,
        &&label_80A1DAB8,
        &&label_80A1DABC,
        &&label_80A1DAC0,
        &&label_80A1DAC4,
        &&label_80A1DAC8,
        &&label_80A1DACC,
        &&label_80A1DAD0,
        &&label_80A1DAD4,
        &&label_80A1DAD8,
        &&label_80A1DADC,
        &&label_80A1DAE0,
        &&label_80A1DAE4,
        &&label_80A1DAE8,
        &&label_80A1DAEC,
        &&label_80A1DAF0,
        &&label_80A1DAF4,
        &&label_80A1DAF8,
        &&label_80A1DAFC,
        &&label_80A1DB00,
        &&label_80A1DB04,
        &&label_80A1DB08,
        &&label_80A1DB0C,
        &&label_80A1DB10,
        &&label_80A1DB14,
        &&label_80A1DB18,
        &&label_80A1DB1C,
        &&label_80A1DB20,
        &&label_80A1DB24,
        &&label_80A1DB28,
        &&label_80A1DB2C,
        &&label_80A1DB30,
        &&label_80A1DB34,
        &&label_80A1DB38,
        &&label_80A1DB3C,
        &&label_80A1DB40,
        &&label_80A1DB44,
        &&label_80A1DB48,
        &&label_80A1DB4C,
        &&label_80A1DB50,
        &&label_80A1DB54,
        &&label_80A1DB58,
        &&label_80A1DB5C,
        &&label_80A1DB60,
        &&label_80A1DB64,
        &&label_80A1DB68,
        &&label_80A1DB6C,
        &&label_80A1DB70,
        &&label_80A1DB74,
        &&label_80A1DB78,
        &&label_80A1DB7C,
        &&label_80A1DB80,
        &&label_80A1DB84,
        &&label_80A1DB88,
        &&label_80A1DB8C,
        &&label_80A1DB90,
        &&label_80A1DB94,
        &&label_80A1DB98,
        &&label_80A1DB9C,
        &&label_80A1DBA0,
        &&label_80A1DBA4,
        &&label_80A1DBA8,
        &&label_80A1DBAC,
        &&label_80A1DBB0,
        &&label_80A1DBB4,
        &&label_80A1DBB8,
        &&label_80A1DBBC,
        &&label_80A1DBC0,
        &&label_80A1DBC4,
        &&label_80A1DBC8,
        &&label_80A1DBCC,
        &&label_80A1DBD0,
        &&label_80A1DBD4,
        &&label_80A1DBD8,
        &&label_80A1DBDC,
        &&label_80A1DBE0,
        &&label_80A1DBE4,
        &&label_80A1DBE8,
        &&label_80A1DBEC,
        &&label_80A1DBF0,
        &&label_80A1DBF4,
        &&label_80A1DBF8,
        &&label_80A1DBFC,
        &&label_80A1DC00,
        &&label_80A1DC04,
        &&label_80A1DC08,
        &&label_80A1DC0C,
        &&label_80A1DC10,
        &&label_80A1DC14,
        &&label_80A1DC18,
        &&label_80A1DC1C,
        &&label_80A1DC20,
        &&label_80A1DC24,
        &&label_80A1DC28,
        &&label_80A1DC2C,
        &&label_80A1DC30,
        &&label_80A1DC34,
        &&label_80A1DC38,
        &&label_80A1DC3C,
        &&label_80A1DC40,
        &&label_80A1DC44,
        &&label_80A1DC48,
        &&label_80A1DC4C,
        &&label_80A1DC50,
        &&label_80A1DC54,
        &&label_80A1DC58,
        &&label_80A1DC5C,
        &&label_80A1DC60,
        &&label_80A1DC64,
        &&label_80A1DC68,
        &&label_80A1DC6C,
        &&label_80A1DC70,
        &&label_80A1DC74,
        &&label_80A1DC78,
        &&label_80A1DC7C,
        &&label_80A1DC80,
        &&label_80A1DC84,
        &&label_80A1DC88,
        &&label_80A1DC8C,
        &&label_80A1DC90,
        &&label_80A1DC94,
        &&label_80A1DC98,
        &&label_80A1DC9C,
        &&label_80A1DCA0,
        &&label_80A1DCA4,
        &&label_80A1DCA8,
        &&label_80A1DCAC,
        &&label_80A1DCB0,
        &&label_80A1DCB4,
        &&label_80A1DCB8,
        &&label_80A1DCBC,
        &&label_80A1DCC0,
        &&label_80A1DCC4,
        &&label_80A1DCC8,
        &&label_80A1DCCC,
        &&label_80A1DCD0,
        &&label_80A1DCD4,
        &&label_80A1DCD8,
        &&label_80A1DCDC,
        &&label_80A1DCE0,
        &&label_80A1DCE4,
        &&label_80A1DCE8,
        &&label_80A1DCEC,
        &&label_80A1DCF0,
        &&label_80A1DCF4,
        &&label_80A1DCF8,
        &&label_80A1DCFC,
        &&label_80A1DD00,
        &&label_80A1DD04,
        &&label_80A1DD08,
        &&label_80A1DD0C,
        &&label_80A1DD10,
        &&label_80A1DD14,
        &&label_80A1DD18,
        &&label_80A1DD1C,
        &&label_80A1DD20,
        &&label_80A1DD24,
        &&label_80A1DD28,
        &&label_80A1DD2C,
        &&label_80A1DD30,
        &&label_80A1DD34,
        &&label_80A1DD38,
        &&label_80A1DD3C,
        &&label_80A1DD40,
        &&label_80A1DD44,
        &&label_80A1DD48,
        &&label_80A1DD4C,
        &&label_80A1DD50,
        &&label_80A1DD54,
        &&label_80A1DD58,
        &&label_80A1DD5C,
        &&label_80A1DD60,
        &&label_80A1DD64,
        &&label_80A1DD68,
        &&label_80A1DD6C,
        &&label_80A1DD70,
        &&label_80A1DD74,
        &&label_80A1DD78,
        &&label_80A1DD7C,
        &&label_80A1DD80,
        &&label_80A1DD84,
        &&label_80A1DD88,
        &&label_80A1DD8C,
        &&label_80A1DD90,
        &&label_80A1DD94,
        &&label_80A1DD98,
        &&label_80A1DD9C,
        &&label_80A1DDA0,
        &&label_80A1DDA4,
        &&label_80A1DDA8,
        &&label_80A1DDAC,
        &&label_80A1DDB0,
        &&label_80A1DDB4,
        &&label_80A1DDB8,
        &&label_80A1DDBC,
        &&label_80A1DDC0,
        &&label_80A1DDC4,
        &&label_80A1DDC8,
        &&label_80A1DDCC,
        &&label_80A1DDD0,
        &&label_80A1DDD4,
        &&label_80A1DDD8,
        &&label_80A1DDDC,
        &&label_80A1DDE0,
        &&label_80A1DDE4,
        &&label_80A1DDE8,
        &&label_80A1DDEC,
        &&label_80A1DDF0,
        &&label_80A1DDF4,
        &&label_80A1DDF8,
        &&label_80A1DDFC,
        &&label_80A1DE00,
        &&label_80A1DE04,
        &&label_80A1DE08,
        &&label_80A1DE0C,
        &&label_80A1DE10,
        &&label_80A1DE14,
        &&label_80A1DE18,
        &&label_80A1DE1C,
        &&label_80A1DE20,
        &&label_80A1DE24,
        &&label_80A1DE28,
        &&label_80A1DE2C,
        &&label_80A1DE30,
        &&label_80A1DE34,
        &&label_80A1DE38,
        &&label_80A1DE3C,
        &&label_80A1DE40,
        &&label_80A1DE44,
        &&label_80A1DE48,
        &&label_80A1DE4C,
        &&label_80A1DE50,
        &&label_80A1DE54,
        &&label_80A1DE58,
        &&label_80A1DE5C,
        &&label_80A1DE60,
        &&label_80A1DE64,
        &&label_80A1DE68,
        &&label_80A1DE6C,
        &&label_80A1DE70,
        &&label_80A1DE74,
        &&label_80A1DE78,
        &&label_80A1DE7C,
        &&label_80A1DE80,
        &&label_80A1DE84,
        &&label_80A1DE88,
        &&label_80A1DE8C,
        &&label_80A1DE90,
        &&label_80A1DE94,
        &&label_80A1DE98,
        &&label_80A1DE9C,
        &&label_80A1DEA0,
        &&label_80A1DEA4,
        &&label_80A1DEA8,
        &&label_80A1DEAC,
        &&label_80A1DEB0,
        &&label_80A1DEB4,
        &&label_80A1DEB8,
        &&label_80A1DEBC,
        &&label_80A1DEC0,
        &&label_80A1DEC4,
        &&label_80A1DEC8,
        &&label_80A1DECC,
        &&label_80A1DED0,
        &&label_80A1DED4,
        &&label_80A1DED8,
        &&label_80A1DEDC,
        &&label_80A1DEE0,
        &&label_80A1DEE4,
        &&label_80A1DEE8,
        &&label_80A1DEEC,
        &&label_80A1DEF0,
        &&label_80A1DEF4,
        &&label_80A1DEF8,
        &&label_80A1DEFC,
        &&label_80A1DF00,
        &&label_80A1DF04,
        &&label_80A1DF08,
        &&label_80A1DF0C,
        &&label_80A1DF10,
        &&label_80A1DF14,
        &&label_80A1DF18,
        &&label_80A1DF1C,
        &&label_80A1DF20,
        &&label_80A1DF24,
        &&label_80A1DF28,
        &&label_80A1DF2C,
        &&label_80A1DF30,
        &&label_80A1DF34,
        &&label_80A1DF38,
        &&label_80A1DF3C,
        &&label_80A1DF40,
        &&label_80A1DF44,
        &&label_80A1DF48,
        &&label_80A1DF4C,
        &&label_80A1DF50,
        &&label_80A1DF54,
        &&label_80A1DF58,
        &&label_80A1DF5C,
        &&label_80A1DF60,
        &&label_80A1DF64,
        &&label_80A1DF68,
        &&label_80A1DF6C,
        &&label_80A1DF70,
        &&label_80A1DF74,
        &&label_80A1DF78,
        &&label_80A1DF7C,
        &&label_80A1DF80,
        &&label_80A1DF84,
        &&label_80A1DF88,
        &&label_80A1DF8C,
        &&label_80A1DF90,
        &&label_80A1DF94,
        &&label_80A1DF98,
        &&label_80A1DF9C,
        &&label_80A1DFA0,
        &&label_80A1DFA4,
        &&label_80A1DFA8,
        &&label_80A1DFAC,
        &&label_80A1DFB0,
        &&label_80A1DFB4,
        &&label_80A1DFB8,
        &&label_80A1DFBC,
        &&label_80A1DFC0,
        &&label_80A1DFC4,
        &&label_80A1DFC8,
        &&label_80A1DFCC,
        &&label_80A1DFD0,
        &&label_80A1DFD4,
        &&label_80A1DFD8,
        &&label_80A1DFDC,
        &&label_80A1DFE0,
        &&label_80A1DFE4,
        &&label_80A1DFE8,
        &&label_80A1DFEC,
        &&label_80A1DFF0,
        &&label_80A1DFF4,
        &&label_80A1DFF8,
        &&label_80A1DFFC,
        &&label_80A1E000,
        &&label_80A1E004,
        &&label_80A1E008,
        &&label_80A1E00C,
        &&label_80A1E010,
        &&label_80A1E014,
        &&label_80A1E018,
        &&label_80A1E01C,
        &&label_80A1E020,
        &&label_80A1E024,
        &&label_80A1E028,
        &&label_80A1E02C,
        &&label_80A1E030,
        &&label_80A1E034,
        &&label_80A1E038,
        &&label_80A1E03C,
        &&label_80A1E040,
        &&label_80A1E044,
        &&label_80A1E048,
        &&label_80A1E04C,
        &&label_80A1E050,
        &&label_80A1E054,
        &&label_80A1E058,
        &&label_80A1E05C,
        &&label_80A1E060,
        &&label_80A1E064,
        &&label_80A1E068,
        &&label_80A1E06C,
        &&label_80A1E070,
        &&label_80A1E074,
        &&label_80A1E078,
        &&label_80A1E07C,
        &&label_80A1E080,
        &&label_80A1E084,
        &&label_80A1E088,
        &&label_80A1E08C,
        &&label_80A1E090,
        &&label_80A1E094,
        &&label_80A1E098,
        &&label_80A1E09C,
        &&label_80A1E0A0,
        &&label_80A1E0A4,
        &&label_80A1E0A8,
        &&label_80A1E0AC,
        &&label_80A1E0B0,
        &&label_80A1E0B4,
        &&label_80A1E0B8,
        &&label_80A1E0BC,
        &&label_80A1E0C0,
        &&label_80A1E0C4,
        &&label_80A1E0C8,
        &&label_80A1E0CC,
        &&label_80A1E0D0,
        &&label_80A1E0D4,
        &&label_80A1E0D8,
        &&label_80A1E0DC,
        &&label_80A1E0E0,
        &&label_80A1E0E4,
        &&label_80A1E0E8,
        &&label_80A1E0EC,
        &&label_80A1E0F0,
        &&label_80A1E0F4,
        &&label_80A1E0F8,
        &&label_80A1E0FC,
        &&label_80A1E100,
        &&label_80A1E104,
        &&label_80A1E108,
        &&label_80A1E10C,
        &&label_80A1E110,
        &&label_80A1E114,
        &&label_80A1E118,
        &&label_80A1E11C,
        &&label_80A1E120,
        &&label_80A1E124,
        &&label_80A1E128,
        &&label_80A1E12C,
        &&label_80A1E130,
        &&label_80A1E134,
        &&label_80A1E138,
        &&label_80A1E13C,
        &&label_80A1E140,
        &&label_80A1E144,
        &&label_80A1E148,
        &&label_80A1E14C,
        &&label_80A1E150,
        &&label_80A1E154,
        &&label_80A1E158,
        &&label_80A1E15C,
        &&label_80A1E160,
        &&label_80A1E164,
        &&label_80A1E168,
        &&label_80A1E16C,
        &&label_80A1E170,
        &&label_80A1E174,
        &&label_80A1E178,
        &&label_80A1E17C,
        &&label_80A1E180,
        &&label_80A1E184,
        &&label_80A1E188,
        &&label_80A1E18C,
        &&label_80A1E190,
        &&label_80A1E194,
        &&label_80A1E198,
        &&label_80A1E19C,
        &&label_80A1E1A0,
        &&label_80A1E1A4,
        &&label_80A1E1A8,
        &&label_80A1E1AC,
        &&label_80A1E1B0,
        &&label_80A1E1B4,
        &&label_80A1E1B8,
        &&label_80A1E1BC,
        &&label_80A1E1C0,
        &&label_80A1E1C4,
        &&label_80A1E1C8,
        &&label_80A1E1CC,
        &&label_80A1E1D0,
        &&label_80A1E1D4,
        &&label_80A1E1D8,
        &&label_80A1E1DC,
        &&label_80A1E1E0,
        &&label_80A1E1E4,
        &&label_80A1E1E8,
        &&label_80A1E1EC,
        &&label_80A1E1F0,
        &&label_80A1E1F4,
        &&label_80A1E1F8,
        &&label_80A1E1FC,
        &&label_80A1E200,
        &&label_80A1E204,
        &&label_80A1E208,
        &&label_80A1E20C,
        &&label_80A1E210,
        &&label_80A1E214,
        &&label_80A1E218,
        &&label_80A1E21C,
        &&label_80A1E220,
        &&label_80A1E224,
        &&label_80A1E228,
        &&label_80A1E22C,
        &&label_80A1E230,
        &&label_80A1E234,
        &&label_80A1E238,
        &&label_80A1E23C,
        &&label_80A1E240,
        &&label_80A1E244,
        &&label_80A1E248,
        &&label_80A1E24C,
        &&label_80A1E250,
        &&label_80A1E254,
        &&label_80A1E258,
        &&label_80A1E25C,
        &&label_80A1E260,
        &&label_80A1E264,
        &&label_80A1E268,
        &&label_80A1E26C,
        &&label_80A1E270,
        &&label_80A1E274,
        &&label_80A1E278,
        &&label_80A1E27C,
        &&label_80A1E280,
        &&label_80A1E284,
        &&label_80A1E288,
        &&label_80A1E28C,
        &&label_80A1E290,
        &&label_80A1E294,
        &&label_80A1E298,
        &&label_80A1E29C,
        &&label_80A1E2A0,
        &&label_80A1E2A4,
        &&label_80A1E2A8,
        &&label_80A1E2AC,
        &&label_80A1E2B0,
        &&label_80A1E2B4,
        &&label_80A1E2B8,
        &&label_80A1E2BC,
        &&label_80A1E2C0,
        &&label_80A1E2C4,
        &&label_80A1E2C8,
        &&label_80A1E2CC,
        &&label_80A1E2D0,
        &&label_80A1E2D4,
        &&label_80A1E2D8,
        &&label_80A1E2DC,
        &&label_80A1E2E0,
        &&label_80A1E2E4,
        &&label_80A1E2E8,
        &&label_80A1E2EC,
        &&label_80A1E2F0,
        &&label_80A1E2F4,
        &&label_80A1E2F8,
        &&label_80A1E2FC,
        &&label_80A1E300,
        &&label_80A1E304,
        &&label_80A1E308,
        &&label_80A1E30C,
        &&label_80A1E310,
        &&label_80A1E314,
        &&label_80A1E318,
        &&label_80A1E31C,
        &&label_80A1E320,
        &&label_80A1E324,
        &&label_80A1E328,
        &&label_80A1E32C,
        &&label_80A1E330,
        &&label_80A1E334,
        &&label_80A1E338,
        &&label_80A1E33C,
        &&label_80A1E340,
        &&label_80A1E344,
        &&label_80A1E348,
        &&label_80A1E34C,
        &&label_80A1E350,
        &&label_80A1E354,
        &&label_80A1E358,
        &&label_80A1E35C,
        &&label_80A1E360,
        &&label_80A1E364,
        &&label_80A1E368,
        &&label_80A1E36C,
        &&label_80A1E370,
        &&label_80A1E374,
        &&label_80A1E378,
        &&label_80A1E37C,
        &&label_80A1E380,
        &&label_80A1E384,
        &&label_80A1E388,
        &&label_80A1E38C,
        &&label_80A1E390,
        &&label_80A1E394,
        &&label_80A1E398,
        &&label_80A1E39C,
        &&label_80A1E3A0,
        &&label_80A1E3A4,
        &&label_80A1E3A8,
        &&label_80A1E3AC,
        &&label_80A1E3B0,
        &&label_80A1E3B4,
        &&label_80A1E3B8,
        &&label_80A1E3BC,
        &&label_80A1E3C0,
        &&label_80A1E3C4,
        &&label_80A1E3C8,
        &&label_80A1E3CC,
        &&label_80A1E3D0,
        &&label_80A1E3D4,
        &&label_80A1E3D8,
        &&label_80A1E3DC,
        &&label_80A1E3E0,
        &&label_80A1E3E4,
        &&label_80A1E3E8,
        &&label_80A1E3EC,
        &&label_80A1E3F0,
        &&label_80A1E3F4,
        &&label_80A1E3F8,
        &&label_80A1E3FC,
        &&label_80A1E400,
        &&label_80A1E404,
        &&label_80A1E408,
        &&label_80A1E40C,
        &&label_80A1E410,
        &&label_80A1E414,
        &&label_80A1E418,
        &&label_80A1E41C,
        &&label_80A1E420,
        &&label_80A1E424,
        &&label_80A1E428,
        &&label_80A1E42C
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80A1C6E0u && pc <= 0x80A1E42Cu && ((pc - 0x80A1C6E0u) & 3u) == 0u)
            goto *pc_table_80A1C6E0[(pc - 0x80A1C6E0u) >> 2];
    }
    return;
label_80A1C6E0:
    ctx->pc = 0x80A1C6E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1C6E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A1C6E0: stw     r0, 15924(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(15924);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1C6E4:
    ctx->pc = 0x80A1C6E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C6E4u)) return;
    // 80A1C6E4: bc    12, 0, 0x80A1C6F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80A1C6F0;
        }
    }

label_80A1C6E8:
    ctx->pc = 0x80A1C6E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1C6E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A1C6E8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80A1C6EC:
    ctx->pc = 0x80A1C6ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C6ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80A1C6EC: stw     r0, 0(r6)
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
label_80A1C6F0:
    ctx->pc = 0x80A1C6F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1C6F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A1C6F0: lwz     r0, 36(r1)
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
label_80A1C6F4:
    ctx->pc = 0x80A1C6F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C6F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A1C6F4: lwz     r31, 28(r1)
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
label_80A1C6F8:
    ctx->pc = 0x80A1C6F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80A1C6F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1C6F8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1C6FC:
    ctx->pc = 0x80A1C6FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C6FCu)) return;
    // 80A1C6FC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80A1C700:
    ctx->pc = 0x80A1C700u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C700u)) return;
    // 80A1C700: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80A1C6E0;
        }
    }

label_80A1C704:
    ctx->pc = 0x80A1C704u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1C704u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A1C704: stwu     r1, -16(r1)
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
label_80A1C708:
    ctx->pc = 0x80A1C708u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C708u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A1C708: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1C70C:
    ctx->pc = 0x80A1C70Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C70Cu)) return;
    // 80A1C70C: lis     r4, -32606
    ctx->gpr[4] = ((u32)(s32)(-32606) << 16);

label_80A1C710:
    ctx->pc = 0x80A1C710u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C710u)) return;
    // 80A1C710: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80A1C714:
    ctx->pc = 0x80A1C714u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C714u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A1C714: stw     r0, 20(r1)
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
label_80A1C718:
    ctx->pc = 0x80A1C718u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C718u)) return;
    // 80A1C718: addi    r5, r4, -14804
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-14804);

label_80A1C71C:
    ctx->pc = 0x80A1C71Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C71Cu)) return;
    // 80A1C71C: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80A1C720:
    ctx->pc = 0x80A1C720u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C720u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A1C720: stw     r31, 12(r1)
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
label_80A1C724:
    ctx->pc = 0x80A1C724u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C724u)) return;
    // 80A1C724: bl      0x8050FD60
    {
            ctx->lr = 0x80A1C728u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80A1C728:
    ctx->pc = 0x80A1C728u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1C728u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A1C728: or.   r31, r3, r3
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

label_80A1C72C:
    ctx->pc = 0x80A1C72Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C72Cu)) return;
    // 80A1C72C: bc    12, 2, 0x80A1C774
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80A1C774;
        }
    }

label_80A1C730:
    ctx->pc = 0x80A1C730u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1C730u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A1C730: lwz     r4, 32(r31)
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
label_80A1C734:
    ctx->pc = 0x80A1C734u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C734u)) return;
    // 80A1C734: bl      0x804551B4
    {
            ctx->lr = 0x80A1C738u;
            ctx->pc = 0x804551B4u;
            return;
    }

label_80A1C738:
    ctx->pc = 0x80A1C738u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 15u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1C738u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 15u : 1u;
    // 80A1C738: lis     r4, -27734
    ctx->gpr[4] = ((u32)(s32)(-27734) << 16);

label_80A1C73C:
    ctx->pc = 0x80A1C73Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C73Cu)) return;
    // 80A1C73C: lis     r5, -27736
    ctx->gpr[5] = ((u32)(s32)(-27736) << 16);

label_80A1C740:
    ctx->pc = 0x80A1C740u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C740u)) return;
    // 80A1C740: lis     r3, -27736
    ctx->gpr[3] = ((u32)(s32)(-27736) << 16);

label_80A1C744:
    ctx->pc = 0x80A1C744u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C744u)) return;
    // 80A1C744: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80A1C748:
    ctx->pc = 0x80A1C748u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C748u)) return;
    // 80A1C748: addi    r6, r4, -9812
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(-9812);

label_80A1C74C:
    ctx->pc = 0x80A1C74Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C74Cu)) return;
    // 80A1C74C: lis     r4, -32606
    ctx->gpr[4] = ((u32)(s32)(-32606) << 16);

label_80A1C750:
    ctx->pc = 0x80A1C750u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C750u)) return;
    // 80A1C750: addi    r0, r5, -1888
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(-1888);

label_80A1C754:
    ctx->pc = 0x80A1C754u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C754u)) return;
    // 80A1C754: addi    r5, r3, 5900
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(5900);

label_80A1C758:
    ctx->pc = 0x80A1C758u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C758u)) return;
    // 80A1C758: lis     r3, -32606
    ctx->gpr[3] = ((u32)(s32)(-32606) << 16);

label_80A1C75C:
    ctx->pc = 0x80A1C75Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C75Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A1C75C: stw     r7, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1C760:
    ctx->pc = 0x80A1C760u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C760u)) return;
    // 80A1C760: addi    r4, r4, -14804
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14804);

label_80A1C764:
    ctx->pc = 0x80A1C764u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C764u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1C764: stw     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1C768:
    ctx->pc = 0x80A1C768u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C768u)) return;
    // 80A1C768: addi    r0, r3, -14932
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-14932);

label_80A1C76C:
    ctx->pc = 0x80A1C76Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C76Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A1C76C: stw     r4, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1C770:
    ctx->pc = 0x80A1C770u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C770u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80A1C770: stw     r0, 20(r31)
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
label_80A1C774:
    ctx->pc = 0x80A1C774u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1C774u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A1C774: lwz     r0, 20(r1)
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
label_80A1C778:
    ctx->pc = 0x80A1C778u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C778u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A1C778: lwz     r31, 12(r1)
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
label_80A1C77C:
    ctx->pc = 0x80A1C77Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80A1C77Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1C77C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1C780:
    ctx->pc = 0x80A1C780u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C780u)) return;
    // 80A1C780: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80A1C784:
    ctx->pc = 0x80A1C784u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C784u)) return;
    // 80A1C784: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80A1C6E0;
        }
    }

label_80A1C788:
    ctx->pc = 0x80A1C788u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1C788u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80A1C788: lis     r4, -27734
    ctx->gpr[4] = ((u32)(s32)(-27734) << 16);

label_80A1C78C:
    ctx->pc = 0x80A1C78Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C78Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1C78C: lwz     r6, -9800(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-9800);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1C790:
    ctx->pc = 0x80A1C790u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C790u)) return;
    // 80A1C790: cmplwi  r6, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[6]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80A1C794:
    ctx->pc = 0x80A1C794u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C794u)) return;
    // 80A1C794: bclr  12, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80A1C6E0;
        }
    }

label_80A1C798:
    ctx->pc = 0x80A1C798u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1C798u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80A1C798: lis     r4, -27740
    ctx->gpr[4] = ((u32)(s32)(-27740) << 16);

label_80A1C79C:
    ctx->pc = 0x80A1C79Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C79Cu)) return;
    // 80A1C79C: li      r0, 16
    ctx->gpr[0] = (u32)(s32)(16);

label_80A1C7A0:
    ctx->pc = 0x80A1C7A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C7A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1C7A0: lfs     f0, 2600(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A1C7A0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2600);
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
label_80A1C7A4:
    ctx->pc = 0x80A1C7A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80A1C7A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80A1C7A4: mtctr    r0
    ctx->ctr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1C7A8:
    ctx->pc = 0x80A1C7A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1C7A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1C7A8: lfs     f1, 16(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A1C7A8u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1C7AC:
    ctx->pc = 0x80A1C7ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C7ACu)) return;
    // 80A1C7AC: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80A1C7ACu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80A1C7B0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C7B0u)) return;
    // 80A1C7B0: cror    2, 0, 2
    {
        u32 a = (ctx->cr >> (31u - 0u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80A1C7B4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C7B4u)) return;
    // 80A1C7B4: bc    4, 2, 0x80A1C7F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A1C7F0;
        }
    }

label_80A1C7B8:
    ctx->pc = 0x80A1C7B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 14u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1C7B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 14u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80A1C7B8: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A1C7B8u)) return;
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
label_80A1C7BC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C7BCu)) return;
    // 80A1C7BC: lis     r4, -27740
    ctx->gpr[4] = ((u32)(s32)(-27740) << 16);

label_80A1C7C0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C7C0u)) return;
    // 80A1C7C0: addi    r5, r4, 2616
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(2616);

label_80A1C7C4:
    ctx->pc = 0x80A1C7C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C7C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80A1C7C4: stfs     f0, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A1C7C4u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1C7C8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C7C8u)) return;
    // 80A1C7C8: lis     r4, -27740
    ctx->gpr[4] = ((u32)(s32)(-27740) << 16);

label_80A1C7CC:
    ctx->pc = 0x80A1C7CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C7CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A1C7CC: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A1C7CCu)) return;
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
label_80A1C7D0:
    ctx->pc = 0x80A1C7D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C7D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A1C7D0: lfs     f2, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A1C7D0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
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
label_80A1C7D4:
    ctx->pc = 0x80A1C7D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C7D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A1C7D4: lfs     f0, 2600(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A1C7D4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2600);
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
label_80A1C7D8:
    ctx->pc = 0x80A1C7D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C7D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A1C7D8: stfs     f2, 4(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A1C7D8u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1C7DC:
    ctx->pc = 0x80A1C7DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C7DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A1C7DC: lfs     f2, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A1C7DCu)) return;
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
label_80A1C7E0:
    ctx->pc = 0x80A1C7E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C7E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1C7E0: stfs     f2, 8(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A1C7E0u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1C7E4:
    ctx->pc = 0x80A1C7E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C7E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1C7E4: stfs     f1, 16(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A1C7E4u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1C7E8:
    ctx->pc = 0x80A1C7E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C7E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A1C7E8: stfs     f0, 12(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A1C7E8u)) return;
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
label_80A1C7EC:
    ctx->pc = 0x80A1C7ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C7ECu)) return;
    // 80A1C7EC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80A1C6E0;
        }
    }

label_80A1C7F0:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1C7F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A1C7F0: addi    r6, r6, 20
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(20);

label_80A1C7F4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C7F4u)) return;
    // 80A1C7F4: bc    16, 0, 0x80A1C7A8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80A1C7A8u;
                return;
            }
            goto label_80A1C7A8;
        }
    }

label_80A1C7F8:
    ctx->pc = 0x80A1C7F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1C7F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A1C7F8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80A1C6E0;
        }
    }

label_80A1C7FC:
    ctx->pc = 0x80A1C7FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1C7FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A1C7FC: stwu     r1, -16(r1)
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
label_80A1C800:
    ctx->pc = 0x80A1C800u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C800u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A1C800: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1C804:
    ctx->pc = 0x80A1C804u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C804u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A1C804: stw     r0, 20(r1)
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
label_80A1C808:
    ctx->pc = 0x80A1C808u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C808u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1C808: stw     r31, 12(r1)
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
label_80A1C80C:
    ctx->pc = 0x80A1C80Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C80Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1C80C: lwz     r31, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1C810:
    ctx->pc = 0x80A1C810u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C810u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A1C810: lwz     r3, 0(r31)
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
label_80A1C814:
    ctx->pc = 0x80A1C814u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C814u)) return;
    // 80A1C814: bl      0x8047EA34
    {
            ctx->lr = 0x80A1C818u;
            ctx->pc = 0x8047EA34u;
            return;
    }

label_80A1C818:
    ctx->pc = 0x80A1C818u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1C818u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A1C818: lwz     r3, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1C81C:
    ctx->pc = 0x80A1C81Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C81Cu)) return;
    // 80A1C81C: bl      0x8047EA34
    {
            ctx->lr = 0x80A1C820u;
            ctx->pc = 0x8047EA34u;
            return;
    }

label_80A1C820:
    ctx->pc = 0x80A1C820u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1C820u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A1C820: lwz     r3, 364(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(364);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1C824:
    ctx->pc = 0x80A1C824u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C824u)) return;
    // 80A1C824: bl      0x8050ED40
    {
            ctx->lr = 0x80A1C828u;
            ctx->pc = 0x8050ED40u;
            return;
    }

label_80A1C828:
    ctx->pc = 0x80A1C828u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1C828u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A1C828: lwz     r3, 360(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(360);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1C82C:
    ctx->pc = 0x80A1C82Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C82Cu)) return;
    // 80A1C82C: bl      0x8050ED40
    {
            ctx->lr = 0x80A1C830u;
            ctx->pc = 0x8050ED40u;
            return;
    }

label_80A1C830:
    ctx->pc = 0x80A1C830u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1C830u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A1C830: lwz     r3, 356(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(356);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1C834:
    ctx->pc = 0x80A1C834u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C834u)) return;
    // 80A1C834: bl      0x8050ED40
    {
            ctx->lr = 0x80A1C838u;
            ctx->pc = 0x8050ED40u;
            return;
    }

label_80A1C838:
    ctx->pc = 0x80A1C838u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1C838u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1C838: lwz     r3, 0(r31)
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
label_80A1C83C:
    ctx->pc = 0x80A1C83Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C83Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1C83C: lwz     r3, 4(r3)
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
label_80A1C840:
    ctx->pc = 0x80A1C840u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C840u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A1C840: lwz     r3, 0(r3)
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
label_80A1C844:
    ctx->pc = 0x80A1C844u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C844u)) return;
    // 80A1C844: bl      0x8050ED40
    {
            ctx->lr = 0x80A1C848u;
            ctx->pc = 0x8050ED40u;
            return;
    }

label_80A1C848:
    ctx->pc = 0x80A1C848u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1C848u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1C848: lwz     r3, 0(r31)
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
label_80A1C84C:
    ctx->pc = 0x80A1C84Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C84Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A1C84C: lwz     r3, 4(r3)
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
label_80A1C850:
    ctx->pc = 0x80A1C850u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C850u)) return;
    // 80A1C850: bl      0x8050ED40
    {
            ctx->lr = 0x80A1C854u;
            ctx->pc = 0x8050ED40u;
            return;
    }

label_80A1C854:
    ctx->pc = 0x80A1C854u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1C854u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    // 80A1C854: lis     r4, -27734
    ctx->gpr[4] = ((u32)(s32)(-27734) << 16);

label_80A1C858:
    ctx->pc = 0x80A1C858u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C858u)) return;
    // 80A1C858: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80A1C85C:
    ctx->pc = 0x80A1C85Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C85Cu)) return;
    // 80A1C85C: lis     r3, -27734
    ctx->gpr[3] = ((u32)(s32)(-27734) << 16);

label_80A1C860:
    ctx->pc = 0x80A1C860u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C860u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A1C860: stw     r0, -9800(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-9800);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1C864:
    ctx->pc = 0x80A1C864u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C864u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A1C864: stw     r0, -9804(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-9804);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1C868:
    ctx->pc = 0x80A1C868u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C868u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A1C868: lwz     r0, 20(r1)
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
label_80A1C86C:
    ctx->pc = 0x80A1C86Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C86Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A1C86C: lwz     r31, 12(r1)
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
label_80A1C870:
    ctx->pc = 0x80A1C870u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80A1C870u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1C870: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1C874:
    ctx->pc = 0x80A1C874u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C874u)) return;
    // 80A1C874: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80A1C878:
    ctx->pc = 0x80A1C878u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C878u)) return;
    // 80A1C878: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80A1C6E0;
        }
    }

label_80A1C87C:
    ctx->pc = 0x80A1C87Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1C87Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80A1C87C: stwu     r1, -16(r1)
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
label_80A1C880:
    ctx->pc = 0x80A1C880u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C880u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80A1C880: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1C884:
    ctx->pc = 0x80A1C884u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C884u)) return;
    // 80A1C884: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80A1C888:
    ctx->pc = 0x80A1C888u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C888u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A1C888: stw     r0, 20(r1)
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
label_80A1C88C:
    ctx->pc = 0x80A1C88Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C88Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A1C88C: stw     r31, 12(r1)
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
label_80A1C890:
    ctx->pc = 0x80A1C890u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C890u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A1C890: stw     r30, 8(r1)
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
label_80A1C894:
    ctx->pc = 0x80A1C894u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C894u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A1C894: lwz     r0, 4120(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4120);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1C898:
    ctx->pc = 0x80A1C898u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C898u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1C898: lwz     r30, 32(r3)
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
label_80A1C89C:
    ctx->pc = 0x80A1C89Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C89Cu)) return;
    // 80A1C89C: cmpwi   r0, 0
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

label_80A1C8A0:
    ctx->pc = 0x80A1C8A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C8A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A1C8A0: lwz     r31, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1C8A4:
    ctx->pc = 0x80A1C8A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C8A4u)) return;
    // 80A1C8A4: bc    4, 2, 0x80A1C98C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A1C98C;
        }
    }

label_80A1C8A8:
    ctx->pc = 0x80A1C8A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1C8A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80A1C8A8: lis     r4, -27734
    ctx->gpr[4] = ((u32)(s32)(-27734) << 16);

label_80A1C8AC:
    ctx->pc = 0x80A1C8ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C8ACu)) return;
    // 80A1C8AC: lis     r3, -27740
    ctx->gpr[3] = ((u32)(s32)(-27740) << 16);

label_80A1C8B0:
    ctx->pc = 0x80A1C8B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C8B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1C8B0: lfs     f1, -9820(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A1C8B0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-9820);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1C8B4:
    ctx->pc = 0x80A1C8B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C8B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1C8B4: lfs     f0, 2604(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A1C8B4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2604);
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
label_80A1C8B8:
    ctx->pc = 0x80A1C8B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C8B8u)) return;
    // 80A1C8B8: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80A1C8B8u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80A1C8BC:
    ctx->pc = 0x80A1C8BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C8BCu)) return;
    // 80A1C8BC: bc    4, 1, 0x80A1C98C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A1C98C;
        }
    }

label_80A1C8C0:
    ctx->pc = 0x80A1C8C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1C8C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80A1C8C0: lis     r3, -27740
    ctx->gpr[3] = ((u32)(s32)(-27740) << 16);

label_80A1C8C4:
    ctx->pc = 0x80A1C8C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C8C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A1C8C4: stfs     f1, 340(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A1C8C4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(340);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1C8C8:
    ctx->pc = 0x80A1C8C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C8C8u)) return;
    // 80A1C8C8: addi    r4, r3, 2600
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(2600);

label_80A1C8CC:
    ctx->pc = 0x80A1C8CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C8CCu)) return;
    // 80A1C8CC: addi    r3, r31, 340
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(340);

label_80A1C8D0:
    ctx->pc = 0x80A1C8D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C8D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A1C8D0: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A1C8D0u)) return;
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
label_80A1C8D4:
    ctx->pc = 0x80A1C8D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C8D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1C8D4: stfs     f0, 344(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A1C8D4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(344);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1C8D8:
    ctx->pc = 0x80A1C8D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C8D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1C8D8: stfs     f0, 348(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A1C8D8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(348);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1C8DC:
    ctx->pc = 0x80A1C8DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C8DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A1C8DC: stfs     f0, 352(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A1C8DCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(352);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1C8E0:
    ctx->pc = 0x80A1C8E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C8E0u)) return;
    // 80A1C8E0: bl      0x8060F5C8
    {
            ctx->lr = 0x80A1C8E4u;
            ctx->pc = 0x8060F5C8u;
            return;
    }

label_80A1C8E4:
    ctx->pc = 0x80A1C8E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1C8E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80A1C8E4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A1C8E8:
    ctx->pc = 0x80A1C8E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C8E8u)) return;
    // 80A1C8E8: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_80A1C8EC:
    ctx->pc = 0x80A1C8ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C8ECu)) return;
    // 80A1C8EC: bl      0x8060F4F8
    {
            ctx->lr = 0x80A1C8F0u;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80A1C8F0:
    ctx->pc = 0x80A1C8F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1C8F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80A1C8F0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80A1C8F4:
    ctx->pc = 0x80A1C8F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C8F4u)) return;
    // 80A1C8F4: li      r4, 10
    ctx->gpr[4] = (u32)(s32)(10);

label_80A1C8F8:
    ctx->pc = 0x80A1C8F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C8F8u)) return;
    // 80A1C8F8: bl      0x8060F4F8
    {
            ctx->lr = 0x80A1C8FCu;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80A1C8FC:
    ctx->pc = 0x80A1C8FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1C8FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80A1C8FC: lis     r3, -27739
    ctx->gpr[3] = ((u32)(s32)(-27739) << 16);

label_80A1C900:
    ctx->pc = 0x80A1C900u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C900u)) return;
    // 80A1C900: addi    r3, r3, -24860
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24860);

label_80A1C904:
    ctx->pc = 0x80A1C904u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C904u)) return;
    // 80A1C904: bl      0x8060F594
    {
            ctx->lr = 0x80A1C908u;
            ctx->pc = 0x8060F594u;
            return;
    }

label_80A1C908:
    ctx->pc = 0x80A1C908u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1C908u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A1C908: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A1C90C:
    ctx->pc = 0x80A1C90Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C90Cu)) return;
    // 80A1C90C: bl      0x8004B49C
    {
            ctx->lr = 0x80A1C910u;
            ctx->pc = 0x8004B49Cu;
            return;
    }

label_80A1C910:
    ctx->pc = 0x80A1C910u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1C910u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80A1C910: addi    r4, r30, 32
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(32);

label_80A1C914:
    ctx->pc = 0x80A1C914u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C914u)) return;
    // 80A1C914: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A1C918:
    ctx->pc = 0x80A1C918u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C918u)) return;
    // 80A1C918: bl      0x8004AA9C
    {
            ctx->lr = 0x80A1C91Cu;
            ctx->pc = 0x8004AA9Cu;
            return;
    }

label_80A1C91C:
    ctx->pc = 0x80A1C91Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1C91Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80A1C91C: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_80A1C920:
    ctx->pc = 0x80A1C920u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C920u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1C920: lwz     r0, -25420(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-25420);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1C924:
    ctx->pc = 0x80A1C924u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C924u)) return;
    // 80A1C924: cmpwi   r0, 0
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

label_80A1C928:
    ctx->pc = 0x80A1C928u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C928u)) return;
    // 80A1C928: bc    12, 2, 0x80A1C93C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80A1C93C;
        }
    }

label_80A1C92C:
    ctx->pc = 0x80A1C92Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1C92Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80A1C92C: lis     r4, -27740
    ctx->gpr[4] = ((u32)(s32)(-27740) << 16);

label_80A1C930:
    ctx->pc = 0x80A1C930u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C930u)) return;
    // 80A1C930: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_80A1C934:
    ctx->pc = 0x80A1C934u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C934u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A1C934: lfs     f0, 2620(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A1C934u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2620);
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
label_80A1C938:
    ctx->pc = 0x80A1C938u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C938u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80A1C938: stfs     f0, -25432(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A1C938u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-25432);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1C93C:
    ctx->pc = 0x80A1C93Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1C93Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80A1C93C: lis     r4, -27740
    ctx->gpr[4] = ((u32)(s32)(-27740) << 16);

label_80A1C940:
    ctx->pc = 0x80A1C940u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C940u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A1C940: lwz     r3, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1C944:
    ctx->pc = 0x80A1C944u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C944u)) return;
    // 80A1C944: addi    r5, r4, 2616
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(2616);

label_80A1C948:
    ctx->pc = 0x80A1C948u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C948u)) return;
    // 80A1C948: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80A1C94C:
    ctx->pc = 0x80A1C94Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C94Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A1C94C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A1C94Cu)) return;
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
label_80A1C950:
    ctx->pc = 0x80A1C950u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C950u)) return;
    // 80A1C950: bl      0x805FFDD8
    {
            ctx->lr = 0x80A1C954u;
            ctx->pc = 0x805FFDD8u;
            return;
    }

label_80A1C954:
    ctx->pc = 0x80A1C954u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1C954u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80A1C954: lis     r3, -27740
    ctx->gpr[3] = ((u32)(s32)(-27740) << 16);

label_80A1C958:
    ctx->pc = 0x80A1C958u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C958u)) return;
    // 80A1C958: lis     r4, -28618
    ctx->gpr[4] = ((u32)(s32)(-28618) << 16);

label_80A1C95C:
    ctx->pc = 0x80A1C95Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C95Cu)) return;
    // 80A1C95C: addi    r5, r3, 2600
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(2600);

label_80A1C960:
    ctx->pc = 0x80A1C960u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C960u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1C960: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A1C960u)) return;
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
label_80A1C964:
    ctx->pc = 0x80A1C964u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C964u)) return;
    // 80A1C964: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80A1C968:
    ctx->pc = 0x80A1C968u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C968u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A1C968: stfs     f0, -25432(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A1C968u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-25432);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1C96C:
    ctx->pc = 0x80A1C96Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C96Cu)) return;
    // 80A1C96C: bl      0x8004B504
    {
            ctx->lr = 0x80A1C970u;
            ctx->pc = 0x8004B504u;
            return;
    }

label_80A1C970:
    ctx->pc = 0x80A1C970u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1C970u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80A1C970: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A1C974:
    ctx->pc = 0x80A1C974u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C974u)) return;
    // 80A1C974: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_80A1C978:
    ctx->pc = 0x80A1C978u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C978u)) return;
    // 80A1C978: bl      0x8060F4F8
    {
            ctx->lr = 0x80A1C97Cu;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80A1C97C:
    ctx->pc = 0x80A1C97Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1C97Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80A1C97C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80A1C980:
    ctx->pc = 0x80A1C980u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C980u)) return;
    // 80A1C980: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80A1C984:
    ctx->pc = 0x80A1C984u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C984u)) return;
    // 80A1C984: bl      0x8060F4F8
    {
            ctx->lr = 0x80A1C988u;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80A1C988:
    ctx->pc = 0x80A1C988u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1C988u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A1C988: bl      0x80450D68
    {
            ctx->lr = 0x80A1C98Cu;
            ctx->pc = 0x80450D68u;
            return;
    }

label_80A1C98C:
    ctx->pc = 0x80A1C98Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1C98Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A1C98C: lwz     r0, 20(r1)
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
label_80A1C990:
    ctx->pc = 0x80A1C990u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C990u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A1C990: lwz     r31, 12(r1)
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
label_80A1C994:
    ctx->pc = 0x80A1C994u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C994u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A1C994: lwz     r30, 8(r1)
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
label_80A1C998:
    ctx->pc = 0x80A1C998u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80A1C998u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1C998: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1C99C:
    ctx->pc = 0x80A1C99Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C99Cu)) return;
    // 80A1C99C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80A1C9A0:
    ctx->pc = 0x80A1C9A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C9A0u)) return;
    // 80A1C9A0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80A1C6E0;
        }
    }

label_80A1C9A4:
    ctx->pc = 0x80A1C9A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 31u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1C9A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 31u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 30u : 0u;
    // 80A1C9A4: stwu     r1, -112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-112);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1C9A8:
    ctx->pc = 0x80A1C9A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C9A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 80A1C9A8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1C9AC:
    ctx->pc = 0x80A1C9ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C9ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80A1C9AC: stw     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1C9B0:
    ctx->pc = 0x80A1C9B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C9B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 80A1C9B0: stfd     f31, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1C9B0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1C9B4:
    ctx->pc = 0x80A1C9B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C9B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 80A1C9B4: psq_st   f31, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80A1C9B4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80A1C9B4u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1C9B8:
    ctx->pc = 0x80A1C9B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C9B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80A1C9B8: stfd     f30, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1C9B8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1C9BC:
    ctx->pc = 0x80A1C9BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C9BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80A1C9BC: psq_st   f30, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80A1C9BCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x80A1C9BCu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1C9C0:
    ctx->pc = 0x80A1C9C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C9C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80A1C9C0: stfd     f29, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1C9C0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1C9C4:
    ctx->pc = 0x80A1C9C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C9C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80A1C9C4: psq_st   f29, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80A1C9C4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x80A1C9C4u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1C9C8:
    ctx->pc = 0x80A1C9C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C9C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80A1C9C8: stfd     f28, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1C9C8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[28]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1C9CC:
    ctx->pc = 0x80A1C9CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C9CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80A1C9CC: psq_st   f28, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80A1C9CCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x80A1C9CCu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1C9D0:
    ctx->pc = 0x80A1C9D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C9D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80A1C9D0: stw     r31, 44(r1)
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
label_80A1C9D4:
    ctx->pc = 0x80A1C9D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C9D4u)) return;
    // 80A1C9D4: lis     r5, -27740
    ctx->gpr[5] = ((u32)(s32)(-27740) << 16);

label_80A1C9D8:
    ctx->pc = 0x80A1C9D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C9D8u)) return;
    // 80A1C9D8: lis     r4, -27740
    ctx->gpr[4] = ((u32)(s32)(-27740) << 16);

label_80A1C9DC:
    ctx->pc = 0x80A1C9DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C9DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80A1C9DC: lfs     f2, 2624(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A1C9DCu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(2624);
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
label_80A1C9E0:
    ctx->pc = 0x80A1C9E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C9E0u)) return;
    // 80A1C9E0: lis     r3, -27740
    ctx->gpr[3] = ((u32)(s32)(-27740) << 16);

label_80A1C9E4:
    ctx->pc = 0x80A1C9E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C9E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80A1C9E4: lfs     f1, 2628(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A1C9E4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2628);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1C9E8:
    ctx->pc = 0x80A1C9E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C9E8u)) return;
    // 80A1C9E8: lis     r6, -27740
    ctx->gpr[6] = ((u32)(s32)(-27740) << 16);

label_80A1C9EC:
    ctx->pc = 0x80A1C9ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C9ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80A1C9EC: lfs     f0, 2632(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A1C9ECu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2632);
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
label_80A1C9F0:
    ctx->pc = 0x80A1C9F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C9F0u)) return;
    // 80A1C9F0: lis     r5, -27740
    ctx->gpr[5] = ((u32)(s32)(-27740) << 16);

label_80A1C9F4:
    ctx->pc = 0x80A1C9F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C9F4u)) return;
    // 80A1C9F4: lis     r4, -27740
    ctx->gpr[4] = ((u32)(s32)(-27740) << 16);

label_80A1C9F8:
    ctx->pc = 0x80A1C9F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C9F8u)) return;
    // 80A1C9F8: lis     r3, -27740
    ctx->gpr[3] = ((u32)(s32)(-27740) << 16);

label_80A1C9FC:
    ctx->pc = 0x80A1C9FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1C9FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A1C9FC: stfs     f2, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1C9FCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CA00:
    ctx->pc = 0x80A1CA00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CA00u)) return;
    // 80A1CA00: lis     r31, 17200
    ctx->gpr[31] = ((u32)(s32)(17200) << 16);

label_80A1CA04:
    ctx->pc = 0x80A1CA04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CA04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A1CA04: lfd     f28, 2648(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A1CA04u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2648);
        ctx->fpr[28] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CA08:
    ctx->pc = 0x80A1CA08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CA08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A1CA08: stfs     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1CA08u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CA0C:
    ctx->pc = 0x80A1CA0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CA0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A1CA0C: lfs     f29, 2640(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A1CA0Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(2640);
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
label_80A1CA10:
    ctx->pc = 0x80A1CA10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CA10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1CA10: stfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1CA10u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CA14:
    ctx->pc = 0x80A1CA14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CA14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1CA14: lfs     f30, 2636(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A1CA14u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2636);
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
label_80A1CA18:
    ctx->pc = 0x80A1CA18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CA18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A1CA18: lfs     f31, 2644(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A1CA18u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2644);
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
label_80A1CA1C:
    ctx->pc = 0x80A1CA1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CA1Cu)) return;
    // 80A1CA1C: bl      0x8000DD2C
    {
            ctx->lr = 0x80A1CA20u;
            ctx->pc = 0x8000DD2Cu;
            return;
    }

label_80A1CA20:
    ctx->pc = 0x80A1CA20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1CA20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    // 80A1CA20: xoris   r0, r3, 0x8000
    ctx->gpr[0] = ctx->gpr[3] ^ (0x8000u << 16);

label_80A1CA24:
    ctx->pc = 0x80A1CA24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CA24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80A1CA24: stw     r31, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CA28:
    ctx->pc = 0x80A1CA28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CA28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A1CA28: lfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1CA28u)) return;
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
label_80A1CA2C:
    ctx->pc = 0x80A1CA2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CA2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A1CA2C: stw     r0, 28(r1)
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
label_80A1CA30:
    ctx->pc = 0x80A1CA30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CA30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A1CA30: lfd     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1CA30u)) return;
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
label_80A1CA34:
    ctx->pc = 0x80A1CA34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CA34u)) return;
    // 80A1CA34: fsubs   f1, f1, f28
    if (!ppc_fp_available_inline(ctx, 0x80A1CA34u)) return;
    ppc_fsubs(ctx, 1, 1, 28);

label_80A1CA38:
    ctx->pc = 0x80A1CA38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CA38u)) return;
    // 80A1CA38: fmuls   f1, f29, f1
    if (!ppc_fp_available_inline(ctx, 0x80A1CA38u)) return;
    ppc_fmuls(ctx, 1, 29, 1);

label_80A1CA3C:
    ctx->pc = 0x80A1CA3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CA3Cu)) return;
    // 80A1CA3C: fmsubs f1, f30, f1, f31
    if (!ppc_fp_available_inline(ctx, 0x80A1CA3Cu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[30], ctx->fpr[1], ctx->fpr[31], true, true, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_80A1CA40:
    ctx->pc = 0x80A1CA40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CA40u)) return;
    // 80A1CA40: fadds   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80A1CA40u)) return;
    ppc_fadds(ctx, 0, 0, 1);

label_80A1CA44:
    ctx->pc = 0x80A1CA44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CA44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A1CA44: stfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1CA44u)) return;
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
label_80A1CA48:
    ctx->pc = 0x80A1CA48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CA48u)) return;
    // 80A1CA48: bl      0x8000DD2C
    {
            ctx->lr = 0x80A1CA4Cu;
            ctx->pc = 0x8000DD2Cu;
            return;
    }

label_80A1CA4C:
    ctx->pc = 0x80A1CA4Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1CA4Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80A1CA4C: xoris   r0, r3, 0x8000
    ctx->gpr[0] = ctx->gpr[3] ^ (0x8000u << 16);

label_80A1CA50:
    ctx->pc = 0x80A1CA50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CA50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80A1CA50: stw     r31, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CA54:
    ctx->pc = 0x80A1CA54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CA54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80A1CA54: lfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1CA54u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
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
label_80A1CA58:
    ctx->pc = 0x80A1CA58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CA58u)) return;
    // 80A1CA58: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80A1CA5C:
    ctx->pc = 0x80A1CA5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CA5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A1CA5C: stw     r0, 36(r1)
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
label_80A1CA60:
    ctx->pc = 0x80A1CA60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CA60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A1CA60: lfd     f1, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1CA60u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CA64:
    ctx->pc = 0x80A1CA64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CA64u)) return;
    // 80A1CA64: fsubs   f1, f1, f28
    if (!ppc_fp_available_inline(ctx, 0x80A1CA64u)) return;
    ppc_fsubs(ctx, 1, 1, 28);

label_80A1CA68:
    ctx->pc = 0x80A1CA68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CA68u)) return;
    // 80A1CA68: fmuls   f1, f29, f1
    if (!ppc_fp_available_inline(ctx, 0x80A1CA68u)) return;
    ppc_fmuls(ctx, 1, 29, 1);

label_80A1CA6C:
    ctx->pc = 0x80A1CA6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CA6Cu)) return;
    // 80A1CA6C: fmsubs f1, f30, f1, f31
    if (!ppc_fp_available_inline(ctx, 0x80A1CA6Cu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[30], ctx->fpr[1], ctx->fpr[31], true, true, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_80A1CA70:
    ctx->pc = 0x80A1CA70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CA70u)) return;
    // 80A1CA70: fadds   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80A1CA70u)) return;
    ppc_fadds(ctx, 0, 0, 1);

label_80A1CA74:
    ctx->pc = 0x80A1CA74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CA74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A1CA74: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1CA74u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CA78:
    ctx->pc = 0x80A1CA78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CA78u)) return;
    // 80A1CA78: bl      0x80A15AEC
    {
            ctx->lr = 0x80A1CA7Cu;
            ctx->pc = 0x80A15AECu;
            return;
    }

label_80A1CA7C:
    ctx->pc = 0x80A1CA7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 14u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1CA7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 14u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80A1CA7C: psq_l   f31, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80A1CA7Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80A1CA7Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CA80:
    ctx->pc = 0x80A1CA80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CA80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80A1CA80: lfd     f31, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1CA80u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CA84:
    ctx->pc = 0x80A1CA84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CA84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80A1CA84: psq_l   f30, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80A1CA84u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x80A1CA84u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CA88:
    ctx->pc = 0x80A1CA88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CA88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80A1CA88: lfd     f30, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1CA88u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CA8C:
    ctx->pc = 0x80A1CA8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CA8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80A1CA8C: psq_l   f29, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80A1CA8Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x80A1CA8Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CA90:
    ctx->pc = 0x80A1CA90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CA90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A1CA90: lfd     f29, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1CA90u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CA94:
    ctx->pc = 0x80A1CA94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CA94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A1CA94: psq_l   f28, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80A1CA94u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x80A1CA94u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CA98:
    ctx->pc = 0x80A1CA98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CA98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A1CA98: lfd     f28, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1CA98u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[28] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CA9C:
    ctx->pc = 0x80A1CA9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CA9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A1CA9C: lwz     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CAA0:
    ctx->pc = 0x80A1CAA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CAA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A1CAA0: lwz     r31, 44(r1)
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
label_80A1CAA4:
    ctx->pc = 0x80A1CAA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80A1CAA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1CAA4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CAA8:
    ctx->pc = 0x80A1CAA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CAA8u)) return;
    // 80A1CAA8: addi    r1, r1, 112
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(112);

label_80A1CAAC:
    ctx->pc = 0x80A1CAACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CAACu)) return;
    // 80A1CAAC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80A1C6E0;
        }
    }

label_80A1CAB0:
    ctx->pc = 0x80A1CAB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1CAB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80A1CAB0: lis     r6, -27740
    ctx->gpr[6] = ((u32)(s32)(-27740) << 16);

label_80A1CAB4:
    ctx->pc = 0x80A1CAB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CAB4u)) return;
    // 80A1CAB4: lis     r5, -27740
    ctx->gpr[5] = ((u32)(s32)(-27740) << 16);

label_80A1CAB8:
    ctx->pc = 0x80A1CAB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CAB8u)) return;
    // 80A1CAB8: lis     r4, -27740
    ctx->gpr[4] = ((u32)(s32)(-27740) << 16);

label_80A1CABC:
    ctx->pc = 0x80A1CABCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CABCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A1CABC: lfs     f2, 2656(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A1CABCu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(2656);
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
label_80A1CAC0:
    ctx->pc = 0x80A1CAC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CAC0u)) return;
    // 80A1CAC0: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_80A1CAC4:
    ctx->pc = 0x80A1CAC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CAC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A1CAC4: lfs     f3, 2600(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A1CAC4u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2600);
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
label_80A1CAC8:
    ctx->pc = 0x80A1CAC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CAC8u)) return;
    // 80A1CAC8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80A1CACC:
    ctx->pc = 0x80A1CACCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CACCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1CACC: lfs     f1, 2660(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A1CACCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2660);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CAD0:
    ctx->pc = 0x80A1CAD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80A1CAD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80A1CAD0: mtctr    r0
    ctx->ctr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CAD4:
    ctx->pc = 0x80A1CAD4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1CAD4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1CAD4: lfs     f0, 24(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A1CAD4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
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
label_80A1CAD8:
    ctx->pc = 0x80A1CAD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CAD8u)) return;
    // 80A1CAD8: fcmpo   cr0, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x80A1CAD8u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[3], true);

label_80A1CADC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CADCu)) return;
    // 80A1CADC: bc    4, 1, 0x80A1CAF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A1CAF8;
        }
    }

label_80A1CAE0:
    ctx->pc = 0x80A1CAE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1CAE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A1CAE0: lfs     f0, 20(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A1CAE0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
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
label_80A1CAE4:
    ctx->pc = 0x80A1CAE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CAE4u)) return;
    // 80A1CAE4: fadds   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x80A1CAE4u)) return;
    ppc_fadds(ctx, 0, 0, 2);

label_80A1CAE8:
    ctx->pc = 0x80A1CAE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CAE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1CAE8: stfs     f0, 20(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A1CAE8u)) return;
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
label_80A1CAEC:
    ctx->pc = 0x80A1CAECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CAECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1CAEC: lfs     f0, 24(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A1CAECu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
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
label_80A1CAF0:
    ctx->pc = 0x80A1CAF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CAF0u)) return;
    // 80A1CAF0: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80A1CAF0u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_80A1CAF4:
    ctx->pc = 0x80A1CAF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CAF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80A1CAF4: stfs     f0, 24(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A1CAF4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CAF8:
    ctx->pc = 0x80A1CAF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1CAF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1CAF8: lfs     f0, 44(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A1CAF8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
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
label_80A1CAFC:
    ctx->pc = 0x80A1CAFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CAFCu)) return;
    // 80A1CAFC: fcmpo   cr0, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x80A1CAFCu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[3], true);

label_80A1CB00:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CB00u)) return;
    // 80A1CB00: bc    4, 1, 0x80A1CB1C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A1CB1C;
        }
    }

label_80A1CB04:
    ctx->pc = 0x80A1CB04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1CB04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A1CB04: lfs     f0, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A1CB04u)) return;
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
label_80A1CB08:
    ctx->pc = 0x80A1CB08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CB08u)) return;
    // 80A1CB08: fadds   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x80A1CB08u)) return;
    ppc_fadds(ctx, 0, 0, 2);

label_80A1CB0C:
    ctx->pc = 0x80A1CB0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CB0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1CB0C: stfs     f0, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A1CB0Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CB10:
    ctx->pc = 0x80A1CB10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CB10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1CB10: lfs     f0, 44(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A1CB10u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
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
label_80A1CB14:
    ctx->pc = 0x80A1CB14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CB14u)) return;
    // 80A1CB14: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80A1CB14u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_80A1CB18:
    ctx->pc = 0x80A1CB18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CB18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80A1CB18: stfs     f0, 44(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A1CB18u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CB1C:
    ctx->pc = 0x80A1CB1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1CB1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1CB1C: lfs     f0, 64(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A1CB1Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(64);
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
label_80A1CB20:
    ctx->pc = 0x80A1CB20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CB20u)) return;
    // 80A1CB20: fcmpo   cr0, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x80A1CB20u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[3], true);

label_80A1CB24:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CB24u)) return;
    // 80A1CB24: bc    4, 1, 0x80A1CB40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A1CB40;
        }
    }

label_80A1CB28:
    ctx->pc = 0x80A1CB28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1CB28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A1CB28: lfs     f0, 60(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A1CB28u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(60);
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
label_80A1CB2C:
    ctx->pc = 0x80A1CB2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CB2Cu)) return;
    // 80A1CB2C: fadds   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x80A1CB2Cu)) return;
    ppc_fadds(ctx, 0, 0, 2);

label_80A1CB30:
    ctx->pc = 0x80A1CB30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CB30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1CB30: stfs     f0, 60(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A1CB30u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(60);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CB34:
    ctx->pc = 0x80A1CB34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CB34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1CB34: lfs     f0, 64(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A1CB34u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(64);
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
label_80A1CB38:
    ctx->pc = 0x80A1CB38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CB38u)) return;
    // 80A1CB38: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80A1CB38u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_80A1CB3C:
    ctx->pc = 0x80A1CB3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CB3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80A1CB3C: stfs     f0, 64(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A1CB3Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(64);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CB40:
    ctx->pc = 0x80A1CB40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1CB40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1CB40: lfs     f0, 84(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A1CB40u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(84);
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
label_80A1CB44:
    ctx->pc = 0x80A1CB44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CB44u)) return;
    // 80A1CB44: fcmpo   cr0, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x80A1CB44u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[3], true);

label_80A1CB48:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CB48u)) return;
    // 80A1CB48: bc    4, 1, 0x80A1CB64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A1CB64;
        }
    }

label_80A1CB4C:
    ctx->pc = 0x80A1CB4Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1CB4Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A1CB4C: lfs     f0, 80(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A1CB4Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
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
label_80A1CB50:
    ctx->pc = 0x80A1CB50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CB50u)) return;
    // 80A1CB50: fadds   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x80A1CB50u)) return;
    ppc_fadds(ctx, 0, 0, 2);

label_80A1CB54:
    ctx->pc = 0x80A1CB54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CB54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1CB54: stfs     f0, 80(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A1CB54u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CB58:
    ctx->pc = 0x80A1CB58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CB58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1CB58: lfs     f0, 84(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A1CB58u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(84);
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
label_80A1CB5C:
    ctx->pc = 0x80A1CB5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CB5Cu)) return;
    // 80A1CB5C: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80A1CB5Cu)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_80A1CB60:
    ctx->pc = 0x80A1CB60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CB60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80A1CB60: stfs     f0, 84(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A1CB60u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(84);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CB64:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1CB64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80A1CB64: addi    r3, r3, 80
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(80);

label_80A1CB68:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CB68u)) return;
    // 80A1CB68: addi    r5, r5, 3
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(3);

label_80A1CB6C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CB6Cu)) return;
    // 80A1CB6C: bc    16, 0, 0x80A1CAD4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80A1CAD4u;
                return;
            }
            goto label_80A1CAD4;
        }
    }

label_80A1CB70:
    ctx->pc = 0x80A1CB70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1CB70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A1CB70: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80A1C6E0;
        }
    }

label_80A1CB74:
    ctx->pc = 0x80A1CB74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 15u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1CB74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 15u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80A1CB74: stwu     r1, -32(r1)
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
label_80A1CB78:
    ctx->pc = 0x80A1CB78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CB78u)) return;
    // 80A1CB78: lis     r6, -27740
    ctx->gpr[6] = ((u32)(s32)(-27740) << 16);

label_80A1CB7C:
    ctx->pc = 0x80A1CB7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CB7Cu)) return;
    // 80A1CB7C: lis     r5, -27740
    ctx->gpr[5] = ((u32)(s32)(-27740) << 16);

label_80A1CB80:
    ctx->pc = 0x80A1CB80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CB80u)) return;
    // 80A1CB80: lis     r4, -27740
    ctx->gpr[4] = ((u32)(s32)(-27740) << 16);

label_80A1CB84:
    ctx->pc = 0x80A1CB84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CB84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80A1CB84: stw     r31, 28(r1)
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
label_80A1CB88:
    ctx->pc = 0x80A1CB88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CB88u)) return;
    // 80A1CB88: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_80A1CB8C:
    ctx->pc = 0x80A1CB8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CB8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A1CB8C: lfs     f0, 2600(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A1CB8Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2600);
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
label_80A1CB90:
    ctx->pc = 0x80A1CB90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CB90u)) return;
    // 80A1CB90: or   r11, r10, r10
    {
        ctx->gpr[11] = ctx->gpr[10] | ctx->gpr[10];
    }

label_80A1CB94:
    ctx->pc = 0x80A1CB94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CB94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A1CB94: stw     r30, 24(r1)
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
label_80A1CB98:
    ctx->pc = 0x80A1CB98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CB98u)) return;
    // 80A1CB98: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_80A1CB9C:
    ctx->pc = 0x80A1CB9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CB9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A1CB9C: lfs     f4, 2688(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A1CB9Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(2688);
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
label_80A1CBA0:
    ctx->pc = 0x80A1CBA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CBA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1CBA0: lwz     r7, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CBA4:
    ctx->pc = 0x80A1CBA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CBA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1CBA4: lfs     f3, 2660(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A1CBA4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2660);
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
label_80A1CBA8:
    ctx->pc = 0x80A1CBA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CBA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A1CBA8: lwz     r12, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CBAC:
    ctx->pc = 0x80A1CBACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CBACu)) return;
    // 80A1CBAC: b       0x80A1CCF0
    {
            goto label_80A1CCF0;
    }

label_80A1CBB0:
    ctx->pc = 0x80A1CBB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1CBB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A1CBB0: lwz     r4, 0(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CBB4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CBB4u)) return;
    // 80A1CBB4: li      r0, 16
    ctx->gpr[0] = (u32)(s32)(16);

label_80A1CBB8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CBB8u)) return;
    // 80A1CBB8: or   r9, r3, r3
    {
        ctx->gpr[9] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80A1CBBC:
    ctx->pc = 0x80A1CBBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CBBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A1CBBC: lwz     r8, 356(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(356);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CBC0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CBC0u)) return;
    // 80A1CBC0: add   r30, r4, r10
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[10];
        u32 res = a + b;
        ctx->gpr[30] = res;
    }

label_80A1CBC4:
    ctx->pc = 0x80A1CBC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CBC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1CBC4: lwz     r7, 360(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(360);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CBC8:
    ctx->pc = 0x80A1CBC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CBC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1CBC8: lwz     r6, 364(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(364);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CBCC:
    ctx->pc = 0x80A1CBCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80A1CBCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80A1CBCC: mtctr    r0
    ctx->ctr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CBD0:
    ctx->pc = 0x80A1CBD0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1CBD0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1CBD0: lfs     f1, 24(r9)
    if (!ppc_fp_available_inline(ctx, 0x80A1CBD0u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CBD4:
    ctx->pc = 0x80A1CBD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CBD4u)) return;
    // 80A1CBD4: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80A1CBD4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80A1CBD8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CBD8u)) return;
    // 80A1CBD8: bc    4, 1, 0x80A1CCA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A1CCA0;
        }
    }

label_80A1CBDC:
    ctx->pc = 0x80A1CBDCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1CBDCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80A1CBDC: lfs     f2, 8(r30)
    if (!ppc_fp_available_inline(ctx, 0x80A1CBDCu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
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
label_80A1CBE0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CBE0u)) return;
    // 80A1CBE0: lis     r4, -27740
    ctx->gpr[4] = ((u32)(s32)(-27740) << 16);

label_80A1CBE4:
    ctx->pc = 0x80A1CBE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CBE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80A1CBE4: lfs     f1, 16(r9)
    if (!ppc_fp_available_inline(ctx, 0x80A1CBE4u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CBE8:
    ctx->pc = 0x80A1CBE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CBE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A1CBE8: lfs     f5, 0(r30)
    if (!ppc_fp_available_inline(ctx, 0x80A1CBE8u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
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
label_80A1CBEC:
    ctx->pc = 0x80A1CBECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CBECu)) return;
    // 80A1CBEC: fsubs   f6, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80A1CBECu)) return;
    ppc_fsubs(ctx, 6, 2, 1);

label_80A1CBF0:
    ctx->pc = 0x80A1CBF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CBF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A1CBF0: lfs     f2, 8(r9)
    if (!ppc_fp_available_inline(ctx, 0x80A1CBF0u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(8);
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
label_80A1CBF4:
    ctx->pc = 0x80A1CBF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CBF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A1CBF4: lfs     f1, 2600(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A1CBF4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2600);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CBF8:
    ctx->pc = 0x80A1CBF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CBF8u)) return;
    // 80A1CBF8: fsubs   f5, f5, f2
    if (!ppc_fp_available_inline(ctx, 0x80A1CBF8u)) return;
    ppc_fsubs(ctx, 5, 5, 2);

label_80A1CBFC:
    ctx->pc = 0x80A1CBFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CBFCu)) return;
    // 80A1CBFC: fmuls   f2, f6, f6
    if (!ppc_fp_available_inline(ctx, 0x80A1CBFCu)) return;
    ppc_fmuls(ctx, 2, 6, 6);

label_80A1CC00:
    ctx->pc = 0x80A1CC00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CC00u)) return;
    // 80A1CC00: fmadds f7, f5, f5, f2
    if (!ppc_fp_available_inline(ctx, 0x80A1CC00u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[5], ctx->fpr[5], ctx->fpr[2], true, false, false, &result))
            ctx->fpr[7] = ctx->ps1[7] = result;
    }

label_80A1CC04:
    ctx->pc = 0x80A1CC04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CC04u)) return;
    // 80A1CC04: fcmpo   cr0, f7, f1
    if (!ppc_fp_available_inline(ctx, 0x80A1CC04u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[7], ctx->fpr[1], true);

label_80A1CC08:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CC08u)) return;
    // 80A1CC08: bc    4, 1, 0x80A1CC60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A1CC60;
        }
    }

label_80A1CC0C:
    ctx->pc = 0x80A1CC0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 21u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1CC0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 21u : 1u;
    // 80A1CC0C: frsqrte    f2, f7
    if (!ppc_fp_available_inline(ctx, 0x80A1CC0Cu)) return;
    { f64 result; if (ppc_frsqrte(ctx, ctx->fpr[7], &result)) ctx->fpr[2] = result; }

label_80A1CC10:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CC10u)) return;
    // 80A1CC10: lis     r5, -27740
    ctx->gpr[5] = ((u32)(s32)(-27740) << 16);

label_80A1CC14:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CC14u)) return;
    // 80A1CC14: lis     r4, -27740
    ctx->gpr[4] = ((u32)(s32)(-27740) << 16);

label_80A1CC18:
    ctx->pc = 0x80A1CC18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CC18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80A1CC18: lfd     f6, 2664(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A1CC18u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(2664);
        ctx->fpr[6] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CC1C:
    ctx->pc = 0x80A1CC1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CC1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80A1CC1C: lfd     f5, 2672(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A1CC1Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2672);
        ctx->fpr[5] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CC20:
    ctx->pc = 0x80A1CC20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CC20u)) return;
    // 80A1CC20: fmul   f1, f2, f2
    if (!ppc_fp_available_inline(ctx, 0x80A1CC20u)) return;
    ppc_fmul(ctx, 1, 2, 2);

label_80A1CC24:
    ctx->pc = 0x80A1CC24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CC24u)) return;
    // 80A1CC24: fmul   f2, f6, f2
    if (!ppc_fp_available_inline(ctx, 0x80A1CC24u)) return;
    ppc_fmul(ctx, 2, 6, 2);

label_80A1CC28:
    ctx->pc = 0x80A1CC28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CC28u)) return;
    // 80A1CC28: fnmsub f1, f7, f1, f5
    if (!ppc_fp_available_inline(ctx, 0x80A1CC28u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[7], ctx->fpr[1], ctx->fpr[5], false, true, true, &result))
            ctx->fpr[1] = result;
    }

label_80A1CC2C:
    ctx->pc = 0x80A1CC2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CC2Cu)) return;
    // 80A1CC2C: fmul   f2, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80A1CC2Cu)) return;
    ppc_fmul(ctx, 2, 2, 1);

label_80A1CC30:
    ctx->pc = 0x80A1CC30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CC30u)) return;
    // 80A1CC30: fmul   f1, f2, f2
    if (!ppc_fp_available_inline(ctx, 0x80A1CC30u)) return;
    ppc_fmul(ctx, 1, 2, 2);

label_80A1CC34:
    ctx->pc = 0x80A1CC34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CC34u)) return;
    // 80A1CC34: fmul   f2, f6, f2
    if (!ppc_fp_available_inline(ctx, 0x80A1CC34u)) return;
    ppc_fmul(ctx, 2, 6, 2);

label_80A1CC38:
    ctx->pc = 0x80A1CC38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CC38u)) return;
    // 80A1CC38: fnmsub f1, f7, f1, f5
    if (!ppc_fp_available_inline(ctx, 0x80A1CC38u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[7], ctx->fpr[1], ctx->fpr[5], false, true, true, &result))
            ctx->fpr[1] = result;
    }

label_80A1CC3C:
    ctx->pc = 0x80A1CC3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CC3Cu)) return;
    // 80A1CC3C: fmul   f2, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80A1CC3Cu)) return;
    ppc_fmul(ctx, 2, 2, 1);

label_80A1CC40:
    ctx->pc = 0x80A1CC40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CC40u)) return;
    // 80A1CC40: fmul   f1, f2, f2
    if (!ppc_fp_available_inline(ctx, 0x80A1CC40u)) return;
    ppc_fmul(ctx, 1, 2, 2);

label_80A1CC44:
    ctx->pc = 0x80A1CC44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CC44u)) return;
    // 80A1CC44: fmul   f2, f6, f2
    if (!ppc_fp_available_inline(ctx, 0x80A1CC44u)) return;
    ppc_fmul(ctx, 2, 6, 2);

label_80A1CC48:
    ctx->pc = 0x80A1CC48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CC48u)) return;
    // 80A1CC48: fnmsub f1, f7, f1, f5
    if (!ppc_fp_available_inline(ctx, 0x80A1CC48u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[7], ctx->fpr[1], ctx->fpr[5], false, true, true, &result))
            ctx->fpr[1] = result;
    }

label_80A1CC4C:
    ctx->pc = 0x80A1CC4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CC4Cu)) return;
    // 80A1CC4C: fmul   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80A1CC4Cu)) return;
    ppc_fmul(ctx, 1, 2, 1);

label_80A1CC50:
    ctx->pc = 0x80A1CC50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CC50u)) return;
    // 80A1CC50: fmul   f1, f7, f1
    if (!ppc_fp_available_inline(ctx, 0x80A1CC50u)) return;
    ppc_fmul(ctx, 1, 7, 1);

label_80A1CC54:
    ctx->pc = 0x80A1CC54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CC54u)) return;
    // 80A1CC54: frsp    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x80A1CC54u)) return;
    ppc_frsp(ctx, 1, 1);

label_80A1CC58:
    ctx->pc = 0x80A1CC58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CC58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A1CC58: stfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1CC58u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CC5C:
    ctx->pc = 0x80A1CC5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CC5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80A1CC5C: lfs     f7, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1CC5Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[7] = value;
        ctx->ps1[7] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CC60:
    ctx->pc = 0x80A1CC60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1CC60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A1CC60: lfs     f1, 20(r9)
    if (!ppc_fp_available_inline(ctx, 0x80A1CC60u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CC64:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CC64u)) return;
    // 80A1CC64: lis     r4, -27740
    ctx->gpr[4] = ((u32)(s32)(-27740) << 16);

label_80A1CC68:
    ctx->pc = 0x80A1CC68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CC68u)) return;
    // 80A1CC68: fsubs   f2, f7, f1
    if (!ppc_fp_available_inline(ctx, 0x80A1CC68u)) return;
    ppc_fsubs(ctx, 2, 7, 1);

label_80A1CC6C:
    ctx->pc = 0x80A1CC6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CC6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A1CC6C: lfs     f1, 2680(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A1CC6Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2680);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CC70:
    ctx->pc = 0x80A1CC70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CC70u)) return;
    // 80A1CC70: fabs    f2, f2
    if (!ppc_fp_available_inline(ctx, 0x80A1CC70u)) return;
    ctx->fpr[2] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[2]) & 0x7FFFFFFFFFFFFFFFull);

label_80A1CC74:
    ctx->pc = 0x80A1CC74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CC74u)) return;
    // 80A1CC74: frsp    f2, f2
    if (!ppc_fp_available_inline(ctx, 0x80A1CC74u)) return;
    ppc_frsp(ctx, 2, 2);

label_80A1CC78:
    ctx->pc = 0x80A1CC78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CC78u)) return;
    // 80A1CC78: fcmpo   cr0, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80A1CC78u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[1], true);

label_80A1CC7C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CC7Cu)) return;
    // 80A1CC7C: bc    4, 0, 0x80A1CCA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A1CCA0;
        }
    }

label_80A1CC80:
    ctx->pc = 0x80A1CC80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 24u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1CC80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 24u : 17u;
    // 80A1CC80: fdivs   f5, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80A1CC80u)) return;
    ppc_fdivs(ctx, 5, 2, 1);

label_80A1CC84:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CC84u)) return;
    // 80A1CC84: lis     r4, -27740
    ctx->gpr[4] = ((u32)(s32)(-27740) << 16);

label_80A1CC88:
    ctx->pc = 0x80A1CC88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CC88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A1CC88: lfs     f6, 2684(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A1CC88u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2684);
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
label_80A1CC8C:
    ctx->pc = 0x80A1CC8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CC8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A1CC8C: lfs     f2, 24(r9)
    if (!ppc_fp_available_inline(ctx, 0x80A1CC8Cu)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(24);
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
label_80A1CC90:
    ctx->pc = 0x80A1CC90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CC90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1CC90: lfsx    f1, r8, r11
    if (!ppc_fp_available_inline(ctx, 0x80A1CC90u)) return;
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[11];
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CC94:
    ctx->pc = 0x80A1CC94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CC94u)) return;
    // 80A1CC94: fmuls   f5, f6, f5
    if (!ppc_fp_available_inline(ctx, 0x80A1CC94u)) return;
    ppc_fmuls(ctx, 5, 6, 5);

label_80A1CC98:
    ctx->pc = 0x80A1CC98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CC98u)) return;
    // 80A1CC98: fmadds f1, f5, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80A1CC98u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[5], ctx->fpr[2], ctx->fpr[1], true, false, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_80A1CC9C:
    ctx->pc = 0x80A1CC9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CC9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80A1CC9C: stfsx    f1, r8, r11
    if (!ppc_fp_available_inline(ctx, 0x80A1CC9Cu)) return;
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[11];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CCA0:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1CCA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A1CCA0: addi    r9, r9, 20
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(20);

label_80A1CCA4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CCA4u)) return;
    // 80A1CCA4: bc    16, 0, 0x80A1CBD0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80A1CBD0u;
                return;
            }
            goto label_80A1CBD0;
        }
    }

label_80A1CCA8:
    ctx->pc = 0x80A1CCA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 18u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1CCA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 18u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80A1CCA8: lfsx    f1, r8, r11
    if (!ppc_fp_available_inline(ctx, 0x80A1CCA8u)) return;
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[11];
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CCAC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CCACu)) return;
    // 80A1CCAC: addi    r10, r10, 12
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(12);

label_80A1CCB0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CCB0u)) return;
    // 80A1CCB0: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_80A1CCB4:
    ctx->pc = 0x80A1CCB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CCB4u)) return;
    // 80A1CCB4: fmuls   f1, f1, f4
    if (!ppc_fp_available_inline(ctx, 0x80A1CCB4u)) return;
    ppc_fmuls(ctx, 1, 1, 4);

label_80A1CCB8:
    ctx->pc = 0x80A1CCB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CCB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80A1CCB8: stfsx    f1, r8, r11
    if (!ppc_fp_available_inline(ctx, 0x80A1CCB8u)) return;
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[11];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CCBC:
    ctx->pc = 0x80A1CCBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CCBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80A1CCBC: lfsx    f2, r7, r11
    if (!ppc_fp_available_inline(ctx, 0x80A1CCBCu)) return;
    {
        u32 ea = ctx->gpr[7] + ctx->gpr[11];
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
label_80A1CCC0:
    ctx->pc = 0x80A1CCC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CCC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80A1CCC0: lfsx    f1, r8, r11
    if (!ppc_fp_available_inline(ctx, 0x80A1CCC0u)) return;
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[11];
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CCC4:
    ctx->pc = 0x80A1CCC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CCC4u)) return;
    // 80A1CCC4: fnmsubs f1, f3, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80A1CCC4u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[3], ctx->fpr[2], ctx->fpr[1], true, true, true, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_80A1CCC8:
    ctx->pc = 0x80A1CCC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CCC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80A1CCC8: stfsx    f1, r8, r11
    if (!ppc_fp_available_inline(ctx, 0x80A1CCC8u)) return;
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[11];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CCCC:
    ctx->pc = 0x80A1CCCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CCCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A1CCCC: lfsx    f2, r7, r11
    if (!ppc_fp_available_inline(ctx, 0x80A1CCCCu)) return;
    {
        u32 ea = ctx->gpr[7] + ctx->gpr[11];
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
label_80A1CCD0:
    ctx->pc = 0x80A1CCD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CCD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A1CCD0: lfsx    f1, r8, r11
    if (!ppc_fp_available_inline(ctx, 0x80A1CCD0u)) return;
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[11];
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CCD4:
    ctx->pc = 0x80A1CCD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CCD4u)) return;
    // 80A1CCD4: fadds   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80A1CCD4u)) return;
    ppc_fadds(ctx, 1, 2, 1);

label_80A1CCD8:
    ctx->pc = 0x80A1CCD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CCD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A1CCD8: stfsx    f1, r7, r11
    if (!ppc_fp_available_inline(ctx, 0x80A1CCD8u)) return;
    {
        u32 ea = ctx->gpr[7] + ctx->gpr[11];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CCDC:
    ctx->pc = 0x80A1CCDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CCDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A1CCDC: lfsx    f2, r6, r11
    if (!ppc_fp_available_inline(ctx, 0x80A1CCDCu)) return;
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[11];
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
label_80A1CCE0:
    ctx->pc = 0x80A1CCE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CCE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1CCE0: lfsx    f1, r7, r11
    if (!ppc_fp_available_inline(ctx, 0x80A1CCE0u)) return;
    {
        u32 ea = ctx->gpr[7] + ctx->gpr[11];
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CCE4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CCE4u)) return;
    // 80A1CCE4: addi    r11, r11, 4
    ctx->gpr[11] = ctx->gpr[11] + (u32)(s32)(4);

label_80A1CCE8:
    ctx->pc = 0x80A1CCE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CCE8u)) return;
    // 80A1CCE8: fadds   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80A1CCE8u)) return;
    ppc_fadds(ctx, 1, 2, 1);

label_80A1CCEC:
    ctx->pc = 0x80A1CCECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CCECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80A1CCEC: stfs     f1, 4(r30)
    if (!ppc_fp_available_inline(ctx, 0x80A1CCECu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CCF0:
    ctx->pc = 0x80A1CCF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1CCF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1CCF0: lwz     r0, 8(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CCF4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CCF4u)) return;
    // 80A1CCF4: cmpw    r31, r0
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80A1CCF8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CCF8u)) return;
    // 80A1CCF8: bc    12, 0, 0x80A1CBB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80A1CBB0u;
                return;
            }
            goto label_80A1CBB0;
        }
    }

label_80A1CCFC:
    ctx->pc = 0x80A1CCFCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1CCFCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1CCFC: lwz     r31, 28(r1)
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
label_80A1CD00:
    ctx->pc = 0x80A1CD00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CD00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1CD00: lwz     r30, 24(r1)
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
label_80A1CD04:
    ctx->pc = 0x80A1CD04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CD04u)) return;
    // 80A1CD04: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80A1CD08:
    ctx->pc = 0x80A1CD08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CD08u)) return;
    // 80A1CD08: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80A1C6E0;
        }
    }

label_80A1CD0C:
    ctx->pc = 0x80A1CD0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 18u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1CD0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 18u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80A1CD0C: stwu     r1, -48(r1)
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
label_80A1CD10:
    ctx->pc = 0x80A1CD10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CD10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80A1CD10: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CD14:
    ctx->pc = 0x80A1CD14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CD14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80A1CD14: stw     r0, 52(r1)
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
label_80A1CD18:
    ctx->pc = 0x80A1CD18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CD18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80A1CD18: stfd     f31, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1CD18u)) return;
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
label_80A1CD1C:
    ctx->pc = 0x80A1CD1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CD1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80A1CD1C: psq_st   f31, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80A1CD1Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80A1CD1Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CD20:
    ctx->pc = 0x80A1CD20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CD20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80A1CD20: stw     r31, 28(r1)
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
label_80A1CD24:
    ctx->pc = 0x80A1CD24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CD24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80A1CD24: stw     r30, 24(r1)
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
label_80A1CD28:
    ctx->pc = 0x80A1CD28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CD28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80A1CD28: stw     r29, 20(r1)
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
label_80A1CD2C:
    ctx->pc = 0x80A1CD2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CD2Cu)) return;
    // 80A1CD2C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80A1CD30:
    ctx->pc = 0x80A1CD30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CD30u)) return;
    // 80A1CD30: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80A1CD34:
    ctx->pc = 0x80A1CD34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CD34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A1CD34: lwz     r4, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CD38:
    ctx->pc = 0x80A1CD38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CD38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A1CD38: lwz     r31, 44(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(44);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CD3C:
    ctx->pc = 0x80A1CD3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CD3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A1CD3C: lha     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CD40:
    ctx->pc = 0x80A1CD40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CD40u)) return;
    // 80A1CD40: ori     r0, r0, 0x0100
    ctx->gpr[0] = ctx->gpr[0] | 0x0100u;

label_80A1CD44:
    ctx->pc = 0x80A1CD44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CD44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1CD44: sth     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CD48:
    ctx->pc = 0x80A1CD48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CD48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1CD48: lwz     r0, 4120(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4120);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CD4C:
    ctx->pc = 0x80A1CD4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CD4Cu)) return;
    // 80A1CD4C: cmpwi   r0, 0
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

label_80A1CD50:
    ctx->pc = 0x80A1CD50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CD50u)) return;
    // 80A1CD50: bc    4, 2, 0x80A1CFA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A1CFA0;
        }
    }

label_80A1CD54:
    ctx->pc = 0x80A1CD54u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1CD54u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A1CD54: bl      0x8046F3E8
    {
            ctx->lr = 0x80A1CD58u;
            ctx->pc = 0x8046F3E8u;
            return;
    }

label_80A1CD58:
    ctx->pc = 0x80A1CD58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1CD58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A1CD58: cmpwi   r3, 3
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(3);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80A1CD5C:
    ctx->pc = 0x80A1CD5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CD5Cu)) return;
    // 80A1CD5C: bc    12, 2, 0x80A1CFA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80A1CFA0;
        }
    }

label_80A1CD60:
    ctx->pc = 0x80A1CD60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1CD60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80A1CD60: lwz     r6, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CD64:
    ctx->pc = 0x80A1CD64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CD64u)) return;
    // 80A1CD64: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_80A1CD68:
    ctx->pc = 0x80A1CD68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CD68u)) return;
    // 80A1CD68: lis     r5, -27740
    ctx->gpr[5] = ((u32)(s32)(-27740) << 16);

label_80A1CD6C:
    ctx->pc = 0x80A1CD6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CD6Cu)) return;
    // 80A1CD6C: lis     r4, -27740
    ctx->gpr[4] = ((u32)(s32)(-27740) << 16);

label_80A1CD70:
    ctx->pc = 0x80A1CD70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CD70u)) return;
    // 80A1CD70: lis     r3, -27740
    ctx->gpr[3] = ((u32)(s32)(-27740) << 16);

label_80A1CD74:
    ctx->pc = 0x80A1CD74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CD74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A1CD74: lwz     r10, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CD78:
    ctx->pc = 0x80A1CD78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CD78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A1CD78: lfs     f0, 2600(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A1CD78u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(2600);
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
label_80A1CD7C:
    ctx->pc = 0x80A1CD7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CD7Cu)) return;
    // 80A1CD7C: or   r12, r9, r9
    {
        ctx->gpr[12] = ctx->gpr[9] | ctx->gpr[9];
    }

label_80A1CD80:
    ctx->pc = 0x80A1CD80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CD80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1CD80: lfs     f4, 2688(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A1CD80u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2688);
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
label_80A1CD84:
    ctx->pc = 0x80A1CD84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CD84u)) return;
    // 80A1CD84: or   r29, r9, r9
    {
        ctx->gpr[29] = ctx->gpr[9] | ctx->gpr[9];
    }

label_80A1CD88:
    ctx->pc = 0x80A1CD88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CD88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A1CD88: lfs     f3, 2660(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A1CD88u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2660);
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
label_80A1CD8C:
    ctx->pc = 0x80A1CD8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CD8Cu)) return;
    // 80A1CD8C: b       0x80A1CED0
    {
            goto label_80A1CED0;
    }

label_80A1CD90:
    ctx->pc = 0x80A1CD90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1CD90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A1CD90: lwz     r3, 0(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CD94:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CD94u)) return;
    // 80A1CD94: li      r0, 16
    ctx->gpr[0] = (u32)(s32)(16);

label_80A1CD98:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CD98u)) return;
    // 80A1CD98: or   r11, r31, r31
    {
        ctx->gpr[11] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80A1CD9C:
    ctx->pc = 0x80A1CD9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CD9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A1CD9C: lwz     r7, 356(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(356);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CDA0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CDA0u)) return;
    // 80A1CDA0: add   r8, r3, r12
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[12];
        u32 res = a + b;
        ctx->gpr[8] = res;
    }

label_80A1CDA4:
    ctx->pc = 0x80A1CDA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CDA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1CDA4: lwz     r6, 360(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(360);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CDA8:
    ctx->pc = 0x80A1CDA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CDA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1CDA8: lwz     r5, 364(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(364);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CDAC:
    ctx->pc = 0x80A1CDACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80A1CDACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80A1CDAC: mtctr    r0
    ctx->ctr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CDB0:
    ctx->pc = 0x80A1CDB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1CDB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1CDB0: lfs     f1, 24(r11)
    if (!ppc_fp_available_inline(ctx, 0x80A1CDB0u)) return;
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CDB4:
    ctx->pc = 0x80A1CDB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CDB4u)) return;
    // 80A1CDB4: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80A1CDB4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80A1CDB8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CDB8u)) return;
    // 80A1CDB8: bc    4, 1, 0x80A1CE80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A1CE80;
        }
    }

label_80A1CDBC:
    ctx->pc = 0x80A1CDBCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1CDBCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80A1CDBC: lfs     f2, 8(r8)
    if (!ppc_fp_available_inline(ctx, 0x80A1CDBCu)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
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
label_80A1CDC0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CDC0u)) return;
    // 80A1CDC0: lis     r3, -27740
    ctx->gpr[3] = ((u32)(s32)(-27740) << 16);

label_80A1CDC4:
    ctx->pc = 0x80A1CDC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CDC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80A1CDC4: lfs     f1, 16(r11)
    if (!ppc_fp_available_inline(ctx, 0x80A1CDC4u)) return;
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CDC8:
    ctx->pc = 0x80A1CDC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CDC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A1CDC8: lfs     f5, 0(r8)
    if (!ppc_fp_available_inline(ctx, 0x80A1CDC8u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
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
label_80A1CDCC:
    ctx->pc = 0x80A1CDCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CDCCu)) return;
    // 80A1CDCC: fsubs   f6, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80A1CDCCu)) return;
    ppc_fsubs(ctx, 6, 2, 1);

label_80A1CDD0:
    ctx->pc = 0x80A1CDD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CDD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A1CDD0: lfs     f2, 8(r11)
    if (!ppc_fp_available_inline(ctx, 0x80A1CDD0u)) return;
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(8);
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
label_80A1CDD4:
    ctx->pc = 0x80A1CDD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CDD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A1CDD4: lfs     f1, 2600(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A1CDD4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2600);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CDD8:
    ctx->pc = 0x80A1CDD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CDD8u)) return;
    // 80A1CDD8: fsubs   f5, f5, f2
    if (!ppc_fp_available_inline(ctx, 0x80A1CDD8u)) return;
    ppc_fsubs(ctx, 5, 5, 2);

label_80A1CDDC:
    ctx->pc = 0x80A1CDDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CDDCu)) return;
    // 80A1CDDC: fmuls   f2, f6, f6
    if (!ppc_fp_available_inline(ctx, 0x80A1CDDCu)) return;
    ppc_fmuls(ctx, 2, 6, 6);

label_80A1CDE0:
    ctx->pc = 0x80A1CDE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CDE0u)) return;
    // 80A1CDE0: fmadds f7, f5, f5, f2
    if (!ppc_fp_available_inline(ctx, 0x80A1CDE0u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[5], ctx->fpr[5], ctx->fpr[2], true, false, false, &result))
            ctx->fpr[7] = ctx->ps1[7] = result;
    }

label_80A1CDE4:
    ctx->pc = 0x80A1CDE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CDE4u)) return;
    // 80A1CDE4: fcmpo   cr0, f7, f1
    if (!ppc_fp_available_inline(ctx, 0x80A1CDE4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[7], ctx->fpr[1], true);

label_80A1CDE8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CDE8u)) return;
    // 80A1CDE8: bc    4, 1, 0x80A1CE40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A1CE40;
        }
    }

label_80A1CDEC:
    ctx->pc = 0x80A1CDECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 21u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1CDECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 21u : 1u;
    // 80A1CDEC: frsqrte    f2, f7
    if (!ppc_fp_available_inline(ctx, 0x80A1CDECu)) return;
    { f64 result; if (ppc_frsqrte(ctx, ctx->fpr[7], &result)) ctx->fpr[2] = result; }

label_80A1CDF0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CDF0u)) return;
    // 80A1CDF0: lis     r4, -27740
    ctx->gpr[4] = ((u32)(s32)(-27740) << 16);

label_80A1CDF4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CDF4u)) return;
    // 80A1CDF4: lis     r3, -27740
    ctx->gpr[3] = ((u32)(s32)(-27740) << 16);

label_80A1CDF8:
    ctx->pc = 0x80A1CDF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CDF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80A1CDF8: lfd     f6, 2664(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A1CDF8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2664);
        ctx->fpr[6] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CDFC:
    ctx->pc = 0x80A1CDFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CDFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80A1CDFC: lfd     f5, 2672(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A1CDFCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2672);
        ctx->fpr[5] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CE00:
    ctx->pc = 0x80A1CE00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CE00u)) return;
    // 80A1CE00: fmul   f1, f2, f2
    if (!ppc_fp_available_inline(ctx, 0x80A1CE00u)) return;
    ppc_fmul(ctx, 1, 2, 2);

label_80A1CE04:
    ctx->pc = 0x80A1CE04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CE04u)) return;
    // 80A1CE04: fmul   f2, f6, f2
    if (!ppc_fp_available_inline(ctx, 0x80A1CE04u)) return;
    ppc_fmul(ctx, 2, 6, 2);

label_80A1CE08:
    ctx->pc = 0x80A1CE08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CE08u)) return;
    // 80A1CE08: fnmsub f1, f7, f1, f5
    if (!ppc_fp_available_inline(ctx, 0x80A1CE08u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[7], ctx->fpr[1], ctx->fpr[5], false, true, true, &result))
            ctx->fpr[1] = result;
    }

label_80A1CE0C:
    ctx->pc = 0x80A1CE0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CE0Cu)) return;
    // 80A1CE0C: fmul   f2, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80A1CE0Cu)) return;
    ppc_fmul(ctx, 2, 2, 1);

label_80A1CE10:
    ctx->pc = 0x80A1CE10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CE10u)) return;
    // 80A1CE10: fmul   f1, f2, f2
    if (!ppc_fp_available_inline(ctx, 0x80A1CE10u)) return;
    ppc_fmul(ctx, 1, 2, 2);

label_80A1CE14:
    ctx->pc = 0x80A1CE14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CE14u)) return;
    // 80A1CE14: fmul   f2, f6, f2
    if (!ppc_fp_available_inline(ctx, 0x80A1CE14u)) return;
    ppc_fmul(ctx, 2, 6, 2);

label_80A1CE18:
    ctx->pc = 0x80A1CE18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CE18u)) return;
    // 80A1CE18: fnmsub f1, f7, f1, f5
    if (!ppc_fp_available_inline(ctx, 0x80A1CE18u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[7], ctx->fpr[1], ctx->fpr[5], false, true, true, &result))
            ctx->fpr[1] = result;
    }

label_80A1CE1C:
    ctx->pc = 0x80A1CE1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CE1Cu)) return;
    // 80A1CE1C: fmul   f2, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80A1CE1Cu)) return;
    ppc_fmul(ctx, 2, 2, 1);

label_80A1CE20:
    ctx->pc = 0x80A1CE20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CE20u)) return;
    // 80A1CE20: fmul   f1, f2, f2
    if (!ppc_fp_available_inline(ctx, 0x80A1CE20u)) return;
    ppc_fmul(ctx, 1, 2, 2);

label_80A1CE24:
    ctx->pc = 0x80A1CE24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CE24u)) return;
    // 80A1CE24: fmul   f2, f6, f2
    if (!ppc_fp_available_inline(ctx, 0x80A1CE24u)) return;
    ppc_fmul(ctx, 2, 6, 2);

label_80A1CE28:
    ctx->pc = 0x80A1CE28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CE28u)) return;
    // 80A1CE28: fnmsub f1, f7, f1, f5
    if (!ppc_fp_available_inline(ctx, 0x80A1CE28u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[7], ctx->fpr[1], ctx->fpr[5], false, true, true, &result))
            ctx->fpr[1] = result;
    }

label_80A1CE2C:
    ctx->pc = 0x80A1CE2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CE2Cu)) return;
    // 80A1CE2C: fmul   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80A1CE2Cu)) return;
    ppc_fmul(ctx, 1, 2, 1);

label_80A1CE30:
    ctx->pc = 0x80A1CE30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CE30u)) return;
    // 80A1CE30: fmul   f1, f7, f1
    if (!ppc_fp_available_inline(ctx, 0x80A1CE30u)) return;
    ppc_fmul(ctx, 1, 7, 1);

label_80A1CE34:
    ctx->pc = 0x80A1CE34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CE34u)) return;
    // 80A1CE34: frsp    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x80A1CE34u)) return;
    ppc_frsp(ctx, 1, 1);

label_80A1CE38:
    ctx->pc = 0x80A1CE38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CE38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A1CE38: stfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1CE38u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CE3C:
    ctx->pc = 0x80A1CE3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CE3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80A1CE3C: lfs     f7, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1CE3Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[7] = value;
        ctx->ps1[7] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CE40:
    ctx->pc = 0x80A1CE40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1CE40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A1CE40: lfs     f1, 20(r11)
    if (!ppc_fp_available_inline(ctx, 0x80A1CE40u)) return;
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CE44:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CE44u)) return;
    // 80A1CE44: lis     r3, -27740
    ctx->gpr[3] = ((u32)(s32)(-27740) << 16);

label_80A1CE48:
    ctx->pc = 0x80A1CE48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CE48u)) return;
    // 80A1CE48: fsubs   f2, f7, f1
    if (!ppc_fp_available_inline(ctx, 0x80A1CE48u)) return;
    ppc_fsubs(ctx, 2, 7, 1);

label_80A1CE4C:
    ctx->pc = 0x80A1CE4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CE4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A1CE4C: lfs     f1, 2680(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A1CE4Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2680);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CE50:
    ctx->pc = 0x80A1CE50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CE50u)) return;
    // 80A1CE50: fabs    f2, f2
    if (!ppc_fp_available_inline(ctx, 0x80A1CE50u)) return;
    ctx->fpr[2] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[2]) & 0x7FFFFFFFFFFFFFFFull);

label_80A1CE54:
    ctx->pc = 0x80A1CE54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CE54u)) return;
    // 80A1CE54: frsp    f2, f2
    if (!ppc_fp_available_inline(ctx, 0x80A1CE54u)) return;
    ppc_frsp(ctx, 2, 2);

label_80A1CE58:
    ctx->pc = 0x80A1CE58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CE58u)) return;
    // 80A1CE58: fcmpo   cr0, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80A1CE58u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[1], true);

label_80A1CE5C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CE5Cu)) return;
    // 80A1CE5C: bc    4, 0, 0x80A1CE80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A1CE80;
        }
    }

label_80A1CE60:
    ctx->pc = 0x80A1CE60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 24u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1CE60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 24u : 17u;
    // 80A1CE60: fdivs   f5, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80A1CE60u)) return;
    ppc_fdivs(ctx, 5, 2, 1);

label_80A1CE64:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CE64u)) return;
    // 80A1CE64: lis     r3, -27740
    ctx->gpr[3] = ((u32)(s32)(-27740) << 16);

label_80A1CE68:
    ctx->pc = 0x80A1CE68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CE68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A1CE68: lfs     f6, 2684(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A1CE68u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2684);
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
label_80A1CE6C:
    ctx->pc = 0x80A1CE6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CE6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A1CE6C: lfs     f2, 24(r11)
    if (!ppc_fp_available_inline(ctx, 0x80A1CE6Cu)) return;
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(24);
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
label_80A1CE70:
    ctx->pc = 0x80A1CE70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CE70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1CE70: lfsx    f1, r7, r29
    if (!ppc_fp_available_inline(ctx, 0x80A1CE70u)) return;
    {
        u32 ea = ctx->gpr[7] + ctx->gpr[29];
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CE74:
    ctx->pc = 0x80A1CE74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CE74u)) return;
    // 80A1CE74: fmuls   f5, f6, f5
    if (!ppc_fp_available_inline(ctx, 0x80A1CE74u)) return;
    ppc_fmuls(ctx, 5, 6, 5);

label_80A1CE78:
    ctx->pc = 0x80A1CE78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CE78u)) return;
    // 80A1CE78: fmadds f1, f5, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80A1CE78u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[5], ctx->fpr[2], ctx->fpr[1], true, false, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_80A1CE7C:
    ctx->pc = 0x80A1CE7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CE7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80A1CE7C: stfsx    f1, r7, r29
    if (!ppc_fp_available_inline(ctx, 0x80A1CE7Cu)) return;
    {
        u32 ea = ctx->gpr[7] + ctx->gpr[29];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CE80:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1CE80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A1CE80: addi    r11, r11, 20
    ctx->gpr[11] = ctx->gpr[11] + (u32)(s32)(20);

label_80A1CE84:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CE84u)) return;
    // 80A1CE84: bc    16, 0, 0x80A1CDB0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80A1CDB0u;
                return;
            }
            goto label_80A1CDB0;
        }
    }

label_80A1CE88:
    ctx->pc = 0x80A1CE88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 18u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1CE88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 18u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80A1CE88: lfsx    f1, r7, r29
    if (!ppc_fp_available_inline(ctx, 0x80A1CE88u)) return;
    {
        u32 ea = ctx->gpr[7] + ctx->gpr[29];
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CE8C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CE8Cu)) return;
    // 80A1CE8C: addi    r12, r12, 12
    ctx->gpr[12] = ctx->gpr[12] + (u32)(s32)(12);

label_80A1CE90:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CE90u)) return;
    // 80A1CE90: addi    r9, r9, 1
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(1);

label_80A1CE94:
    ctx->pc = 0x80A1CE94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CE94u)) return;
    // 80A1CE94: fmuls   f1, f1, f4
    if (!ppc_fp_available_inline(ctx, 0x80A1CE94u)) return;
    ppc_fmuls(ctx, 1, 1, 4);

label_80A1CE98:
    ctx->pc = 0x80A1CE98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CE98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80A1CE98: stfsx    f1, r7, r29
    if (!ppc_fp_available_inline(ctx, 0x80A1CE98u)) return;
    {
        u32 ea = ctx->gpr[7] + ctx->gpr[29];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CE9C:
    ctx->pc = 0x80A1CE9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CE9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80A1CE9C: lfsx    f2, r6, r29
    if (!ppc_fp_available_inline(ctx, 0x80A1CE9Cu)) return;
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[29];
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
label_80A1CEA0:
    ctx->pc = 0x80A1CEA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CEA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80A1CEA0: lfsx    f1, r7, r29
    if (!ppc_fp_available_inline(ctx, 0x80A1CEA0u)) return;
    {
        u32 ea = ctx->gpr[7] + ctx->gpr[29];
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CEA4:
    ctx->pc = 0x80A1CEA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CEA4u)) return;
    // 80A1CEA4: fnmsubs f1, f3, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80A1CEA4u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[3], ctx->fpr[2], ctx->fpr[1], true, true, true, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_80A1CEA8:
    ctx->pc = 0x80A1CEA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CEA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80A1CEA8: stfsx    f1, r7, r29
    if (!ppc_fp_available_inline(ctx, 0x80A1CEA8u)) return;
    {
        u32 ea = ctx->gpr[7] + ctx->gpr[29];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CEAC:
    ctx->pc = 0x80A1CEACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CEACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A1CEAC: lfsx    f2, r6, r29
    if (!ppc_fp_available_inline(ctx, 0x80A1CEACu)) return;
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[29];
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
label_80A1CEB0:
    ctx->pc = 0x80A1CEB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CEB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A1CEB0: lfsx    f1, r7, r29
    if (!ppc_fp_available_inline(ctx, 0x80A1CEB0u)) return;
    {
        u32 ea = ctx->gpr[7] + ctx->gpr[29];
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CEB4:
    ctx->pc = 0x80A1CEB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CEB4u)) return;
    // 80A1CEB4: fadds   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80A1CEB4u)) return;
    ppc_fadds(ctx, 1, 2, 1);

label_80A1CEB8:
    ctx->pc = 0x80A1CEB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CEB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A1CEB8: stfsx    f1, r6, r29
    if (!ppc_fp_available_inline(ctx, 0x80A1CEB8u)) return;
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[29];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CEBC:
    ctx->pc = 0x80A1CEBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CEBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A1CEBC: lfsx    f2, r5, r29
    if (!ppc_fp_available_inline(ctx, 0x80A1CEBCu)) return;
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[29];
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
label_80A1CEC0:
    ctx->pc = 0x80A1CEC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CEC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1CEC0: lfsx    f1, r6, r29
    if (!ppc_fp_available_inline(ctx, 0x80A1CEC0u)) return;
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[29];
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CEC4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CEC4u)) return;
    // 80A1CEC4: addi    r29, r29, 4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4);

label_80A1CEC8:
    ctx->pc = 0x80A1CEC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CEC8u)) return;
    // 80A1CEC8: fadds   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80A1CEC8u)) return;
    ppc_fadds(ctx, 1, 2, 1);

label_80A1CECC:
    ctx->pc = 0x80A1CECCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CECCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80A1CECC: stfs     f1, 4(r8)
    if (!ppc_fp_available_inline(ctx, 0x80A1CECCu)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CED0:
    ctx->pc = 0x80A1CED0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1CED0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1CED0: lwz     r0, 8(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CED4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CED4u)) return;
    // 80A1CED4: cmpw    r9, r0
    {
        s32 val_a = (s32)(ctx->gpr[9]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80A1CED8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CED8u)) return;
    // 80A1CED8: bc    12, 0, 0x80A1CD90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80A1CD90u;
                return;
            }
            goto label_80A1CD90;
        }
    }

label_80A1CEDC:
    ctx->pc = 0x80A1CEDCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1CEDCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    // 80A1CEDC: lis     r5, -27740
    ctx->gpr[5] = ((u32)(s32)(-27740) << 16);

label_80A1CEE0:
    ctx->pc = 0x80A1CEE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CEE0u)) return;
    // 80A1CEE0: lis     r4, -27740
    ctx->gpr[4] = ((u32)(s32)(-27740) << 16);

label_80A1CEE4:
    ctx->pc = 0x80A1CEE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CEE4u)) return;
    // 80A1CEE4: lis     r3, -27740
    ctx->gpr[3] = ((u32)(s32)(-27740) << 16);

label_80A1CEE8:
    ctx->pc = 0x80A1CEE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CEE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A1CEE8: lfs     f3, 2600(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A1CEE8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(2600);
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
label_80A1CEEC:
    ctx->pc = 0x80A1CEECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CEECu)) return;
    // 80A1CEEC: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_80A1CEF0:
    ctx->pc = 0x80A1CEF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CEF0u)) return;
    // 80A1CEF0: or   r6, r31, r31
    {
        ctx->gpr[6] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80A1CEF4:
    ctx->pc = 0x80A1CEF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CEF4u)) return;
    // 80A1CEF4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80A1CEF8:
    ctx->pc = 0x80A1CEF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CEF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1CEF8: lfs     f2, 2656(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A1CEF8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2656);
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
label_80A1CEFC:
    ctx->pc = 0x80A1CEFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CEFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1CEFC: lfs     f1, 2660(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A1CEFCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2660);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CF00:
    ctx->pc = 0x80A1CF00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80A1CF00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80A1CF00: mtctr    r0
    ctx->ctr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CF04:
    ctx->pc = 0x80A1CF04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1CF04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1CF04: lfs     f0, 24(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A1CF04u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(24);
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
label_80A1CF08:
    ctx->pc = 0x80A1CF08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CF08u)) return;
    // 80A1CF08: fcmpo   cr0, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x80A1CF08u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[3], true);

label_80A1CF0C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CF0Cu)) return;
    // 80A1CF0C: bc    4, 1, 0x80A1CF28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A1CF28;
        }
    }

label_80A1CF10:
    ctx->pc = 0x80A1CF10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1CF10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A1CF10: lfs     f0, 20(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A1CF10u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(20);
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
label_80A1CF14:
    ctx->pc = 0x80A1CF14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CF14u)) return;
    // 80A1CF14: fadds   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x80A1CF14u)) return;
    ppc_fadds(ctx, 0, 0, 2);

label_80A1CF18:
    ctx->pc = 0x80A1CF18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CF18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1CF18: stfs     f0, 20(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A1CF18u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CF1C:
    ctx->pc = 0x80A1CF1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CF1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1CF1C: lfs     f0, 24(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A1CF1Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(24);
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
label_80A1CF20:
    ctx->pc = 0x80A1CF20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CF20u)) return;
    // 80A1CF20: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80A1CF20u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_80A1CF24:
    ctx->pc = 0x80A1CF24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CF24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80A1CF24: stfs     f0, 24(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A1CF24u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CF28:
    ctx->pc = 0x80A1CF28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1CF28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1CF28: lfs     f0, 44(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A1CF28u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(44);
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
label_80A1CF2C:
    ctx->pc = 0x80A1CF2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CF2Cu)) return;
    // 80A1CF2C: fcmpo   cr0, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x80A1CF2Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[3], true);

label_80A1CF30:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CF30u)) return;
    // 80A1CF30: bc    4, 1, 0x80A1CF4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A1CF4C;
        }
    }

label_80A1CF34:
    ctx->pc = 0x80A1CF34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1CF34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A1CF34: lfs     f0, 40(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A1CF34u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(40);
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
label_80A1CF38:
    ctx->pc = 0x80A1CF38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CF38u)) return;
    // 80A1CF38: fadds   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x80A1CF38u)) return;
    ppc_fadds(ctx, 0, 0, 2);

label_80A1CF3C:
    ctx->pc = 0x80A1CF3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CF3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1CF3C: stfs     f0, 40(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A1CF3Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CF40:
    ctx->pc = 0x80A1CF40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CF40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1CF40: lfs     f0, 44(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A1CF40u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(44);
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
label_80A1CF44:
    ctx->pc = 0x80A1CF44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CF44u)) return;
    // 80A1CF44: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80A1CF44u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_80A1CF48:
    ctx->pc = 0x80A1CF48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CF48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80A1CF48: stfs     f0, 44(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A1CF48u)) return;
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
label_80A1CF4C:
    ctx->pc = 0x80A1CF4Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1CF4Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1CF4C: lfs     f0, 64(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A1CF4Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(64);
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
label_80A1CF50:
    ctx->pc = 0x80A1CF50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CF50u)) return;
    // 80A1CF50: fcmpo   cr0, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x80A1CF50u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[3], true);

label_80A1CF54:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CF54u)) return;
    // 80A1CF54: bc    4, 1, 0x80A1CF70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A1CF70;
        }
    }

label_80A1CF58:
    ctx->pc = 0x80A1CF58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1CF58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A1CF58: lfs     f0, 60(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A1CF58u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(60);
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
label_80A1CF5C:
    ctx->pc = 0x80A1CF5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CF5Cu)) return;
    // 80A1CF5C: fadds   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x80A1CF5Cu)) return;
    ppc_fadds(ctx, 0, 0, 2);

label_80A1CF60:
    ctx->pc = 0x80A1CF60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CF60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1CF60: stfs     f0, 60(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A1CF60u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(60);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CF64:
    ctx->pc = 0x80A1CF64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CF64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1CF64: lfs     f0, 64(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A1CF64u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(64);
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
label_80A1CF68:
    ctx->pc = 0x80A1CF68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CF68u)) return;
    // 80A1CF68: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80A1CF68u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_80A1CF6C:
    ctx->pc = 0x80A1CF6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CF6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80A1CF6C: stfs     f0, 64(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A1CF6Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(64);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CF70:
    ctx->pc = 0x80A1CF70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1CF70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1CF70: lfs     f0, 84(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A1CF70u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(84);
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
label_80A1CF74:
    ctx->pc = 0x80A1CF74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CF74u)) return;
    // 80A1CF74: fcmpo   cr0, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x80A1CF74u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[3], true);

label_80A1CF78:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CF78u)) return;
    // 80A1CF78: bc    4, 1, 0x80A1CF94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A1CF94;
        }
    }

label_80A1CF7C:
    ctx->pc = 0x80A1CF7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1CF7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A1CF7C: lfs     f0, 80(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A1CF7Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(80);
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
label_80A1CF80:
    ctx->pc = 0x80A1CF80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CF80u)) return;
    // 80A1CF80: fadds   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x80A1CF80u)) return;
    ppc_fadds(ctx, 0, 0, 2);

label_80A1CF84:
    ctx->pc = 0x80A1CF84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CF84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1CF84: stfs     f0, 80(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A1CF84u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(80);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CF88:
    ctx->pc = 0x80A1CF88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CF88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1CF88: lfs     f0, 84(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A1CF88u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(84);
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
label_80A1CF8C:
    ctx->pc = 0x80A1CF8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CF8Cu)) return;
    // 80A1CF8C: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80A1CF8Cu)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_80A1CF90:
    ctx->pc = 0x80A1CF90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CF90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80A1CF90: stfs     f0, 84(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A1CF90u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(84);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CF94:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1CF94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80A1CF94: addi    r6, r6, 80
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(80);

label_80A1CF98:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CF98u)) return;
    // 80A1CF98: addi    r5, r5, 3
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(3);

label_80A1CF9C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CF9Cu)) return;
    // 80A1CF9C: bc    16, 0, 0x80A1CF04
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80A1CF04u;
                return;
            }
            goto label_80A1CF04;
        }
    }

label_80A1CFA0:
    ctx->pc = 0x80A1CFA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1CFA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1CFA0: lwz     r4, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CFA4:
    ctx->pc = 0x80A1CFA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CFA4u)) return;
    // 80A1CFA4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A1CFA8:
    ctx->pc = 0x80A1CFA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CFA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A1CFA8: lfs     f31, 12(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A1CFA8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
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
label_80A1CFAC:
    ctx->pc = 0x80A1CFACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CFACu)) return;
    // 80A1CFAC: bl      0x804C9040
    {
            ctx->lr = 0x80A1CFB0u;
            ctx->pc = 0x804C9040u;
            return;
    }

label_80A1CFB0:
    ctx->pc = 0x80A1CFB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1CFB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1CFB0: lwz     r0, 108(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(108);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CFB4:
    ctx->pc = 0x80A1CFB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CFB4u)) return;
    // 80A1CFB4: cmplwi  r0, 0x0000
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

label_80A1CFB8:
    ctx->pc = 0x80A1CFB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CFB8u)) return;
    // 80A1CFB8: bc    12, 2, 0x80A1D020
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80A1D020;
        }
    }

label_80A1CFBC:
    ctx->pc = 0x80A1CFBCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1CFBCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80A1CFBC: lis     r4, -28619
    ctx->gpr[4] = ((u32)(s32)(-28619) << 16);

label_80A1CFC0:
    ctx->pc = 0x80A1CFC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CFC0u)) return;
    // 80A1CFC0: lis     r3, -27740
    ctx->gpr[3] = ((u32)(s32)(-27740) << 16);

label_80A1CFC4:
    ctx->pc = 0x80A1CFC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CFC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1CFC4: lfs     f1, 27892(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A1CFC4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(27892);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CFC8:
    ctx->pc = 0x80A1CFC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CFC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1CFC8: lfs     f0, 2600(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A1CFC8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2600);
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
label_80A1CFCC:
    ctx->pc = 0x80A1CFCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CFCCu)) return;
    // 80A1CFCC: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80A1CFCCu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80A1CFD0:
    ctx->pc = 0x80A1CFD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CFD0u)) return;
    // 80A1CFD0: bc    4, 1, 0x80A1D020
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A1D020;
        }
    }

label_80A1CFD4:
    ctx->pc = 0x80A1CFD4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 15u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1CFD4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 15u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80A1CFD4: lwz     r6, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CFD8:
    ctx->pc = 0x80A1CFD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CFD8u)) return;
    // 80A1CFD8: lis     r3, -27740
    ctx->gpr[3] = ((u32)(s32)(-27740) << 16);

label_80A1CFDC:
    ctx->pc = 0x80A1CFDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CFDCu)) return;
    // 80A1CFDC: addi    r5, r3, 2692
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(2692);

label_80A1CFE0:
    ctx->pc = 0x80A1CFE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CFE0u)) return;
    // 80A1CFE0: lis     r4, -28628
    ctx->gpr[4] = ((u32)(s32)(-28628) << 16);

label_80A1CFE4:
    ctx->pc = 0x80A1CFE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CFE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80A1CFE4: lfs     f2, 12(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A1CFE4u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
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
label_80A1CFE8:
    ctx->pc = 0x80A1CFE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CFE8u)) return;
    // 80A1CFE8: lis     r3, -27740
    ctx->gpr[3] = ((u32)(s32)(-27740) << 16);

label_80A1CFEC:
    ctx->pc = 0x80A1CFECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CFECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A1CFEC: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A1CFECu)) return;
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
label_80A1CFF0:
    ctx->pc = 0x80A1CFF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CFF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A1CFF0: lfs     f0, 2696(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A1CFF0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2696);
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
label_80A1CFF4:
    ctx->pc = 0x80A1CFF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CFF4u)) return;
    // 80A1CFF4: fadds   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80A1CFF4u)) return;
    ppc_fadds(ctx, 1, 2, 1);

label_80A1CFF8:
    ctx->pc = 0x80A1CFF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CFF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A1CFF8: stfs     f1, 12(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A1CFF8u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1CFFC:
    ctx->pc = 0x80A1CFFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1CFFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A1CFFC: lwz     r3, -14944(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-14944);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D000:
    ctx->pc = 0x80A1D000u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D000u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1D000: lfs     f1, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A1D000u)) return;
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
label_80A1D004:
    ctx->pc = 0x80A1D004u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D004u)) return;
    // 80A1D004: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80A1D004u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80A1D008:
    ctx->pc = 0x80A1D008u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D008u)) return;
    // 80A1D008: cror    2, 0, 2
    {
        u32 a = (ctx->cr >> (31u - 0u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80A1D00C:
    ctx->pc = 0x80A1D00Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D00Cu)) return;
    // 80A1D00C: bc    4, 2, 0x80A1D030
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A1D030;
        }
    }

label_80A1D010:
    ctx->pc = 0x80A1D010u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D010u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80A1D010: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A1D014:
    ctx->pc = 0x80A1D014u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D014u)) return;
    // 80A1D014: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80A1D018:
    ctx->pc = 0x80A1D018u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D018u)) return;
    // 80A1D018: bl      0x804C5AB4
    {
            ctx->lr = 0x80A1D01Cu;
            ctx->pc = 0x804C5AB4u;
            return;
    }

label_80A1D01C:
    ctx->pc = 0x80A1D01Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D01Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A1D01C: b       0x80A1D030
    {
            goto label_80A1D030;
    }

label_80A1D020:
    ctx->pc = 0x80A1D020u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D020u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80A1D020: lis     r4, -27740
    ctx->gpr[4] = ((u32)(s32)(-27740) << 16);

label_80A1D024:
    ctx->pc = 0x80A1D024u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D024u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1D024: lwz     r3, 0(r31)
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
label_80A1D028:
    ctx->pc = 0x80A1D028u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D028u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A1D028: lfs     f0, 2700(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A1D028u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2700);
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
label_80A1D02C:
    ctx->pc = 0x80A1D02Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D02Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80A1D02C: stfs     f0, 12(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A1D02Cu)) return;
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
label_80A1D030:
    ctx->pc = 0x80A1D030u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D030u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80A1D030: lwz     r4, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D034:
    ctx->pc = 0x80A1D034u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D034u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80A1D034: lwz     r3, 40(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D038:
    ctx->pc = 0x80A1D038u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D038u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80A1D038: lfs     f0, 12(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A1D038u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
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
label_80A1D03C:
    ctx->pc = 0x80A1D03Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D03Cu)) return;
    // 80A1D03C: fsubs   f0, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x80A1D03Cu)) return;
    ppc_fsubs(ctx, 0, 0, 31);

label_80A1D040:
    ctx->pc = 0x80A1D040u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D040u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A1D040: stfs     f0, 20(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A1D040u)) return;
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
label_80A1D044:
    ctx->pc = 0x80A1D044u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D044u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A1D044: lwz     r3, 0(r31)
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
label_80A1D048:
    ctx->pc = 0x80A1D048u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D048u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A1D048: lwz     r3, 4(r3)
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
label_80A1D04C:
    ctx->pc = 0x80A1D04Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D04Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A1D04C: lwz     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D050:
    ctx->pc = 0x80A1D050u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D050u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A1D050: lwz     r3, 0(r3)
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
label_80A1D054:
    ctx->pc = 0x80A1D054u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x80A1D054u)) return;
    // 80A1D054: mulli   r4, r0, 12
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_80A1D058:
    ctx->pc = 0x80A1D058u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D058u)) return;
    // 80A1D058: bl      0x8003CB50
    {
            ctx->lr = 0x80A1D05Cu;
            ctx->pc = 0x8003CB50u;
            return;
    }

label_80A1D05C:
    ctx->pc = 0x80A1D05Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D05Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80A1D05C: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80A1D060:
    ctx->pc = 0x80A1D060u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D060u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A1D060: lwz     r29, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D064:
    ctx->pc = 0x80A1D064u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D064u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1D064: lwz     r0, 4120(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4120);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D068:
    ctx->pc = 0x80A1D068u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D068u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1D068: lwz     r31, 44(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(44);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D06C:
    ctx->pc = 0x80A1D06Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D06Cu)) return;
    // 80A1D06C: cmpwi   r0, 0
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

label_80A1D070:
    ctx->pc = 0x80A1D070u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D070u)) return;
    // 80A1D070: bc    4, 2, 0x80A1D158
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A1D158;
        }
    }

label_80A1D074:
    ctx->pc = 0x80A1D074u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D074u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80A1D074: lis     r4, -27734
    ctx->gpr[4] = ((u32)(s32)(-27734) << 16);

label_80A1D078:
    ctx->pc = 0x80A1D078u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D078u)) return;
    // 80A1D078: lis     r3, -27740
    ctx->gpr[3] = ((u32)(s32)(-27740) << 16);

label_80A1D07C:
    ctx->pc = 0x80A1D07Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D07Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1D07C: lfs     f1, -9820(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A1D07Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-9820);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D080:
    ctx->pc = 0x80A1D080u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D080u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1D080: lfs     f0, 2604(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A1D080u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2604);
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
label_80A1D084:
    ctx->pc = 0x80A1D084u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D084u)) return;
    // 80A1D084: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80A1D084u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80A1D088:
    ctx->pc = 0x80A1D088u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D088u)) return;
    // 80A1D088: bc    4, 1, 0x80A1D158
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A1D158;
        }
    }

label_80A1D08C:
    ctx->pc = 0x80A1D08Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D08Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80A1D08C: lis     r3, -27740
    ctx->gpr[3] = ((u32)(s32)(-27740) << 16);

label_80A1D090:
    ctx->pc = 0x80A1D090u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D090u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A1D090: stfs     f1, 340(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A1D090u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(340);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D094:
    ctx->pc = 0x80A1D094u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D094u)) return;
    // 80A1D094: addi    r4, r3, 2600
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(2600);

label_80A1D098:
    ctx->pc = 0x80A1D098u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D098u)) return;
    // 80A1D098: addi    r3, r31, 340
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(340);

label_80A1D09C:
    ctx->pc = 0x80A1D09Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D09Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A1D09C: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A1D09Cu)) return;
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
label_80A1D0A0:
    ctx->pc = 0x80A1D0A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D0A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1D0A0: stfs     f0, 344(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A1D0A0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(344);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D0A4:
    ctx->pc = 0x80A1D0A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D0A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1D0A4: stfs     f0, 348(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A1D0A4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(348);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D0A8:
    ctx->pc = 0x80A1D0A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D0A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A1D0A8: stfs     f0, 352(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A1D0A8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(352);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D0AC:
    ctx->pc = 0x80A1D0ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D0ACu)) return;
    // 80A1D0AC: bl      0x8060F5C8
    {
            ctx->lr = 0x80A1D0B0u;
            ctx->pc = 0x8060F5C8u;
            return;
    }

label_80A1D0B0:
    ctx->pc = 0x80A1D0B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D0B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80A1D0B0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A1D0B4:
    ctx->pc = 0x80A1D0B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D0B4u)) return;
    // 80A1D0B4: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_80A1D0B8:
    ctx->pc = 0x80A1D0B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D0B8u)) return;
    // 80A1D0B8: bl      0x8060F4F8
    {
            ctx->lr = 0x80A1D0BCu;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80A1D0BC:
    ctx->pc = 0x80A1D0BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D0BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80A1D0BC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80A1D0C0:
    ctx->pc = 0x80A1D0C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D0C0u)) return;
    // 80A1D0C0: li      r4, 10
    ctx->gpr[4] = (u32)(s32)(10);

label_80A1D0C4:
    ctx->pc = 0x80A1D0C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D0C4u)) return;
    // 80A1D0C4: bl      0x8060F4F8
    {
            ctx->lr = 0x80A1D0C8u;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80A1D0C8:
    ctx->pc = 0x80A1D0C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D0C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80A1D0C8: lis     r3, -27739
    ctx->gpr[3] = ((u32)(s32)(-27739) << 16);

label_80A1D0CC:
    ctx->pc = 0x80A1D0CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D0CCu)) return;
    // 80A1D0CC: addi    r3, r3, -24860
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24860);

label_80A1D0D0:
    ctx->pc = 0x80A1D0D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D0D0u)) return;
    // 80A1D0D0: bl      0x8060F594
    {
            ctx->lr = 0x80A1D0D4u;
            ctx->pc = 0x8060F594u;
            return;
    }

label_80A1D0D4:
    ctx->pc = 0x80A1D0D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D0D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A1D0D4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A1D0D8:
    ctx->pc = 0x80A1D0D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D0D8u)) return;
    // 80A1D0D8: bl      0x8004B49C
    {
            ctx->lr = 0x80A1D0DCu;
            ctx->pc = 0x8004B49Cu;
            return;
    }

label_80A1D0DC:
    ctx->pc = 0x80A1D0DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D0DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80A1D0DC: addi    r4, r29, 32
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(32);

label_80A1D0E0:
    ctx->pc = 0x80A1D0E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D0E0u)) return;
    // 80A1D0E0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A1D0E4:
    ctx->pc = 0x80A1D0E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D0E4u)) return;
    // 80A1D0E4: bl      0x8004AA9C
    {
            ctx->lr = 0x80A1D0E8u;
            ctx->pc = 0x8004AA9Cu;
            return;
    }

label_80A1D0E8:
    ctx->pc = 0x80A1D0E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D0E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80A1D0E8: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_80A1D0EC:
    ctx->pc = 0x80A1D0ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D0ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1D0EC: lwz     r0, -25420(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-25420);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D0F0:
    ctx->pc = 0x80A1D0F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D0F0u)) return;
    // 80A1D0F0: cmpwi   r0, 0
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

label_80A1D0F4:
    ctx->pc = 0x80A1D0F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D0F4u)) return;
    // 80A1D0F4: bc    12, 2, 0x80A1D108
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80A1D108;
        }
    }

label_80A1D0F8:
    ctx->pc = 0x80A1D0F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D0F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80A1D0F8: lis     r4, -27740
    ctx->gpr[4] = ((u32)(s32)(-27740) << 16);

label_80A1D0FC:
    ctx->pc = 0x80A1D0FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D0FCu)) return;
    // 80A1D0FC: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_80A1D100:
    ctx->pc = 0x80A1D100u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D100u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A1D100: lfs     f0, 2620(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A1D100u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2620);
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
label_80A1D104:
    ctx->pc = 0x80A1D104u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D104u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80A1D104: stfs     f0, -25432(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A1D104u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-25432);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D108:
    ctx->pc = 0x80A1D108u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D108u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80A1D108: lis     r4, -27740
    ctx->gpr[4] = ((u32)(s32)(-27740) << 16);

label_80A1D10C:
    ctx->pc = 0x80A1D10Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D10Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A1D10C: lwz     r3, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D110:
    ctx->pc = 0x80A1D110u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D110u)) return;
    // 80A1D110: addi    r5, r4, 2616
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(2616);

label_80A1D114:
    ctx->pc = 0x80A1D114u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D114u)) return;
    // 80A1D114: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80A1D118:
    ctx->pc = 0x80A1D118u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D118u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A1D118: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A1D118u)) return;
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
label_80A1D11C:
    ctx->pc = 0x80A1D11Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D11Cu)) return;
    // 80A1D11C: bl      0x805FFDD8
    {
            ctx->lr = 0x80A1D120u;
            ctx->pc = 0x805FFDD8u;
            return;
    }

label_80A1D120:
    ctx->pc = 0x80A1D120u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D120u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80A1D120: lis     r3, -27740
    ctx->gpr[3] = ((u32)(s32)(-27740) << 16);

label_80A1D124:
    ctx->pc = 0x80A1D124u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D124u)) return;
    // 80A1D124: lis     r4, -28618
    ctx->gpr[4] = ((u32)(s32)(-28618) << 16);

label_80A1D128:
    ctx->pc = 0x80A1D128u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D128u)) return;
    // 80A1D128: addi    r5, r3, 2600
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(2600);

label_80A1D12C:
    ctx->pc = 0x80A1D12Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D12Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1D12C: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A1D12Cu)) return;
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
label_80A1D130:
    ctx->pc = 0x80A1D130u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D130u)) return;
    // 80A1D130: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80A1D134:
    ctx->pc = 0x80A1D134u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D134u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A1D134: stfs     f0, -25432(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A1D134u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-25432);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D138:
    ctx->pc = 0x80A1D138u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D138u)) return;
    // 80A1D138: bl      0x8004B504
    {
            ctx->lr = 0x80A1D13Cu;
            ctx->pc = 0x8004B504u;
            return;
    }

label_80A1D13C:
    ctx->pc = 0x80A1D13Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D13Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80A1D13C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A1D140:
    ctx->pc = 0x80A1D140u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D140u)) return;
    // 80A1D140: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_80A1D144:
    ctx->pc = 0x80A1D144u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D144u)) return;
    // 80A1D144: bl      0x8060F4F8
    {
            ctx->lr = 0x80A1D148u;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80A1D148:
    ctx->pc = 0x80A1D148u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D148u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80A1D148: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80A1D14C:
    ctx->pc = 0x80A1D14Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D14Cu)) return;
    // 80A1D14C: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80A1D150:
    ctx->pc = 0x80A1D150u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D150u)) return;
    // 80A1D150: bl      0x8060F4F8
    {
            ctx->lr = 0x80A1D154u;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80A1D154:
    ctx->pc = 0x80A1D154u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D154u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A1D154: bl      0x80450D68
    {
            ctx->lr = 0x80A1D158u;
            ctx->pc = 0x80450D68u;
            return;
    }

label_80A1D158:
    ctx->pc = 0x80A1D158u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D158u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80A1D158: psq_l   f31, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80A1D158u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80A1D158u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D15C:
    ctx->pc = 0x80A1D15Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D15Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A1D15C: lwz     r0, 52(r1)
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
label_80A1D160:
    ctx->pc = 0x80A1D160u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D160u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A1D160: lfd     f31, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1D160u)) return;
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
label_80A1D164:
    ctx->pc = 0x80A1D164u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D164u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A1D164: lwz     r31, 28(r1)
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
label_80A1D168:
    ctx->pc = 0x80A1D168u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D168u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A1D168: lwz     r30, 24(r1)
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
label_80A1D16C:
    ctx->pc = 0x80A1D16Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D16Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A1D16C: lwz     r29, 20(r1)
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
label_80A1D170:
    ctx->pc = 0x80A1D170u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80A1D170u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1D170: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D174:
    ctx->pc = 0x80A1D174u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D174u)) return;
    // 80A1D174: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_80A1D178:
    ctx->pc = 0x80A1D178u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D178u)) return;
    // 80A1D178: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80A1C6E0;
        }
    }

label_80A1D17C:
    ctx->pc = 0x80A1D17Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 17u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D17Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 17u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80A1D17C: stwu     r1, -32(r1)
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
label_80A1D180:
    ctx->pc = 0x80A1D180u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D180u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80A1D180: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D184:
    ctx->pc = 0x80A1D184u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D184u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80A1D184: stw     r0, 36(r1)
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
label_80A1D188:
    ctx->pc = 0x80A1D188u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 11u, 0x80A1D188u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1D188: stmw     r27, 12(r1)
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
label_80A1D18C:
    ctx->pc = 0x80A1D18Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D18Cu)) return;
    // 80A1D18C: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80A1D190:
    ctx->pc = 0x80A1D190u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D190u)) return;
    // 80A1D190: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80A1D194:
    ctx->pc = 0x80A1D194u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D194u)) return;
    // 80A1D194: bl      0x8047EA80
    {
            ctx->lr = 0x80A1D198u;
            ctx->pc = 0x8047EA80u;
            return;
    }

label_80A1D198:
    ctx->pc = 0x80A1D198u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 35u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D198u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 35u : 1u;
    // 80A1D198: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80A1D19C:
    ctx->pc = 0x80A1D19Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D19Cu)) return;
    // 80A1D19C: lis     r4, -27736
    ctx->gpr[4] = ((u32)(s32)(-27736) << 16);

label_80A1D1A0:
    ctx->pc = 0x80A1D1A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D1A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 32u : 0u;
    // 80A1D1A0: stw     r30, 0(r27)
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
label_80A1D1A4:
    ctx->pc = 0x80A1D1A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D1A4u)) return;
    // 80A1D1A4: addi    r6, r4, -2884
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(-2884);

label_80A1D1A8:
    ctx->pc = 0x80A1D1A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D1A8u)) return;
    // 80A1D1A8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80A1D1AC:
    ctx->pc = 0x80A1D1ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D1ACu)) return;
    // 80A1D1AC: li      r4, 40
    ctx->gpr[4] = (u32)(s32)(40);

label_80A1D1B0:
    ctx->pc = 0x80A1D1B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D1B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80A1D1B0: lwz     r5, 0(r6)
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
label_80A1D1B4:
    ctx->pc = 0x80A1D1B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D1B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 80A1D1B4: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D1B8:
    ctx->pc = 0x80A1D1B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D1B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 80A1D1B8: stw     r5, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D1BC:
    ctx->pc = 0x80A1D1BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D1BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80A1D1BC: stw     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D1C0:
    ctx->pc = 0x80A1D1C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D1C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80A1D1C0: lwz     r5, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D1C4:
    ctx->pc = 0x80A1D1C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D1C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80A1D1C4: lwz     r0, 12(r6)
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
label_80A1D1C8:
    ctx->pc = 0x80A1D1C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D1C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80A1D1C8: stw     r5, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D1CC:
    ctx->pc = 0x80A1D1CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D1CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80A1D1CC: stw     r0, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D1D0:
    ctx->pc = 0x80A1D1D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D1D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80A1D1D0: lwz     r5, 16(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(16);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D1D4:
    ctx->pc = 0x80A1D1D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D1D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80A1D1D4: lwz     r0, 20(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D1D8:
    ctx->pc = 0x80A1D1D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D1D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80A1D1D8: stw     r5, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D1DC:
    ctx->pc = 0x80A1D1DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D1DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80A1D1DC: stw     r0, 20(r30)
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
label_80A1D1E0:
    ctx->pc = 0x80A1D1E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D1E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80A1D1E0: lwz     r5, 24(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(24);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D1E4:
    ctx->pc = 0x80A1D1E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D1E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80A1D1E4: lwz     r0, 28(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D1E8:
    ctx->pc = 0x80A1D1E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D1E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80A1D1E8: stw     r5, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D1EC:
    ctx->pc = 0x80A1D1ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D1ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80A1D1EC: stw     r0, 28(r30)
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
label_80A1D1F0:
    ctx->pc = 0x80A1D1F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D1F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80A1D1F0: lwz     r5, 32(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D1F4:
    ctx->pc = 0x80A1D1F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D1F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80A1D1F4: lwz     r0, 36(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D1F8:
    ctx->pc = 0x80A1D1F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D1F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80A1D1F8: stw     r5, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D1FC:
    ctx->pc = 0x80A1D1FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D1FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80A1D1FC: stw     r0, 36(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D200:
    ctx->pc = 0x80A1D200u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D200u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A1D200: lwz     r5, 40(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(40);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D204:
    ctx->pc = 0x80A1D204u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D204u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A1D204: lwz     r0, 44(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D208:
    ctx->pc = 0x80A1D208u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D208u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A1D208: stw     r5, 40(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D20C:
    ctx->pc = 0x80A1D20Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D20Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A1D20C: stw     r0, 44(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D210:
    ctx->pc = 0x80A1D210u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D210u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A1D210: lwz     r5, 48(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(48);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D214:
    ctx->pc = 0x80A1D214u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D214u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1D214: lwz     r0, 52(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D218:
    ctx->pc = 0x80A1D218u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D218u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1D218: stw     r5, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D21C:
    ctx->pc = 0x80A1D21Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D21Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A1D21C: stw     r0, 52(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D220:
    ctx->pc = 0x80A1D220u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D220u)) return;
    // 80A1D220: bl      0x8050EEC0
    {
            ctx->lr = 0x80A1D224u;
            ctx->pc = 0x8050EEC0u;
            return;
    }

label_80A1D224:
    ctx->pc = 0x80A1D224u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 32u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D224u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 32u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 31u : 0u;
    // 80A1D224: stw     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D228:
    ctx->pc = 0x80A1D228u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D228u)) return;
    // 80A1D228: lis     r3, -27736
    ctx->gpr[3] = ((u32)(s32)(-27736) << 16);

label_80A1D22C:
    ctx->pc = 0x80A1D22Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D22Cu)) return;
    // 80A1D22C: addi    r31, r3, -2884
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(-2884);

label_80A1D230:
    ctx->pc = 0x80A1D230u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D230u)) return;
    // 80A1D230: li      r4, 12
    ctx->gpr[4] = (u32)(s32)(12);

label_80A1D234:
    ctx->pc = 0x80A1D234u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D234u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 80A1D234: lwz     r0, 0(r30)
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
label_80A1D238:
    ctx->pc = 0x80A1D238u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D238u)) return;
    // 80A1D238: rlwinm r0, r0, 0, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFFCu;
    }

label_80A1D23C:
    ctx->pc = 0x80A1D23Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D23Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80A1D23C: stw     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D240:
    ctx->pc = 0x80A1D240u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D240u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80A1D240: lwz     r5, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D244:
    ctx->pc = 0x80A1D244u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D244u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80A1D244: lwz     r29, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D248:
    ctx->pc = 0x80A1D248u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D248u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80A1D248: lwz     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D24C:
    ctx->pc = 0x80A1D24Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D24Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80A1D24C: lwz     r0, 4(r5)
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
label_80A1D250:
    ctx->pc = 0x80A1D250u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D250u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80A1D250: stw     r3, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D254:
    ctx->pc = 0x80A1D254u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D254u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80A1D254: stw     r0, 4(r29)
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
label_80A1D258:
    ctx->pc = 0x80A1D258u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D258u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80A1D258: lwz     r3, 8(r5)
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
label_80A1D25C:
    ctx->pc = 0x80A1D25Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D25Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80A1D25C: lwz     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D260:
    ctx->pc = 0x80A1D260u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D260u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80A1D260: stw     r3, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D264:
    ctx->pc = 0x80A1D264u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D264u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80A1D264: stw     r0, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D268:
    ctx->pc = 0x80A1D268u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D268u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80A1D268: lwz     r3, 16(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D26C:
    ctx->pc = 0x80A1D26Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D26Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80A1D26C: lwz     r0, 20(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D270:
    ctx->pc = 0x80A1D270u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D270u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80A1D270: stw     r3, 16(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D274:
    ctx->pc = 0x80A1D274u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D274u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80A1D274: stw     r0, 20(r29)
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
label_80A1D278:
    ctx->pc = 0x80A1D278u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D278u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80A1D278: lwz     r3, 24(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D27C:
    ctx->pc = 0x80A1D27Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D27Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80A1D27C: lwz     r0, 28(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D280:
    ctx->pc = 0x80A1D280u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D280u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A1D280: stw     r3, 24(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D284:
    ctx->pc = 0x80A1D284u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D284u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A1D284: stw     r0, 28(r29)
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
label_80A1D288:
    ctx->pc = 0x80A1D288u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D288u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A1D288: lwz     r3, 32(r5)
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
label_80A1D28C:
    ctx->pc = 0x80A1D28Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D28Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A1D28C: lwz     r0, 36(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D290:
    ctx->pc = 0x80A1D290u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D290u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A1D290: stw     r3, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D294:
    ctx->pc = 0x80A1D294u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D294u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1D294: stw     r0, 36(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D298:
    ctx->pc = 0x80A1D298u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D298u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1D298: lwz     r3, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D29C:
    ctx->pc = 0x80A1D29Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D29Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A1D29C: lwz     r3, 8(r3)
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
label_80A1D2A0:
    ctx->pc = 0x80A1D2A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D2A0u)) return;
    // 80A1D2A0: bl      0x8050EEC0
    {
            ctx->lr = 0x80A1D2A4u;
            ctx->pc = 0x8050EEC0u;
            return;
    }

label_80A1D2A4:
    ctx->pc = 0x80A1D2A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D2A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1D2A4: stw     r3, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D2A8:
    ctx->pc = 0x80A1D2A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D2A8u)) return;
    // 80A1D2A8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80A1D2AC:
    ctx->pc = 0x80A1D2ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D2ACu)) return;
    // 80A1D2AC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80A1D2B0:
    ctx->pc = 0x80A1D2B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D2B0u)) return;
    // 80A1D2B0: b       0x80A1D2FC
    {
            goto label_80A1D2FC;
    }

label_80A1D2B4:
    ctx->pc = 0x80A1D2B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 18u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D2B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 18u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80A1D2B4: lwz     r5, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D2B8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D2B8u)) return;
    // 80A1D2B8: addi    r4, r6, 4
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(4);

label_80A1D2BC:
    ctx->pc = 0x80A1D2BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D2BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80A1D2BC: lwz     r3, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D2C0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D2C0u)) return;
    // 80A1D2C0: addi    r0, r6, 8
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(8);

label_80A1D2C4:
    ctx->pc = 0x80A1D2C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D2C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80A1D2C4: lfsx    f0, r5, r6
    if (!ppc_fp_available_inline(ctx, 0x80A1D2C4u)) return;
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[6];
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
label_80A1D2C8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D2C8u)) return;
    // 80A1D2C8: addi    r7, r7, 1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1);

label_80A1D2CC:
    ctx->pc = 0x80A1D2CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D2CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80A1D2CC: stfsx    f0, r3, r6
    if (!ppc_fp_available_inline(ctx, 0x80A1D2CCu)) return;
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[6];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D2D0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D2D0u)) return;
    // 80A1D2D0: addi    r6, r6, 12
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(12);

label_80A1D2D4:
    ctx->pc = 0x80A1D2D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D2D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80A1D2D4: lwz     r5, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D2D8:
    ctx->pc = 0x80A1D2D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D2D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A1D2D8: lwz     r3, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D2DC:
    ctx->pc = 0x80A1D2DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D2DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A1D2DC: lwz     r5, 0(r5)
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
label_80A1D2E0:
    ctx->pc = 0x80A1D2E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D2E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A1D2E0: lfsx    f0, r5, r4
    if (!ppc_fp_available_inline(ctx, 0x80A1D2E0u)) return;
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[4];
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
label_80A1D2E4:
    ctx->pc = 0x80A1D2E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D2E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A1D2E4: stfsx    f0, r3, r4
    if (!ppc_fp_available_inline(ctx, 0x80A1D2E4u)) return;
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[4];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D2E8:
    ctx->pc = 0x80A1D2E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D2E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A1D2E8: lwz     r4, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D2EC:
    ctx->pc = 0x80A1D2ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D2ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1D2EC: lwz     r3, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D2F0:
    ctx->pc = 0x80A1D2F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D2F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1D2F0: lwz     r4, 0(r4)
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
label_80A1D2F4:
    ctx->pc = 0x80A1D2F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D2F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A1D2F4: lfsx    f0, r4, r0
    if (!ppc_fp_available_inline(ctx, 0x80A1D2F4u)) return;
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
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
label_80A1D2F8:
    ctx->pc = 0x80A1D2F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D2F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80A1D2F8: stfsx    f0, r3, r0
    if (!ppc_fp_available_inline(ctx, 0x80A1D2F8u)) return;
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D2FC:
    ctx->pc = 0x80A1D2FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D2FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1D2FC: lwz     r3, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D300:
    ctx->pc = 0x80A1D300u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D300u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1D300: lwz     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D304:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D304u)) return;
    // 80A1D304: cmpw    r7, r0
    {
        s32 val_a = (s32)(ctx->gpr[7]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80A1D308:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D308u)) return;
    // 80A1D308: bc    12, 0, 0x80A1D2B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80A1D2B4u;
                return;
            }
            goto label_80A1D2B4;
        }
    }

label_80A1D30C:
    ctx->pc = 0x80A1D30Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D30Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A1D30C: lwz     r6, 32(r28)
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
label_80A1D310:
    ctx->pc = 0x80A1D310u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D310u)) return;
    // 80A1D310: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80A1D314:
    ctx->pc = 0x80A1D314u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D314u)) return;
    // 80A1D314: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80A1D318:
    ctx->pc = 0x80A1D318u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D318u)) return;
    // 80A1D318: lis     r3, 26624
    ctx->gpr[3] = ((u32)(s32)(26624) << 16);

label_80A1D31C:
    ctx->pc = 0x80A1D31Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D31Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1D31C: lha     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D320:
    ctx->pc = 0x80A1D320u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D320u)) return;
    // 80A1D320: ori     r0, r0, 0x0100
    ctx->gpr[0] = ctx->gpr[0] | 0x0100u;

label_80A1D324:
    ctx->pc = 0x80A1D324u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D324u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A1D324: sth     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D328:
    ctx->pc = 0x80A1D328u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D328u)) return;
    // 80A1D328: bl      0x8047EBFC
    {
            ctx->lr = 0x80A1D32Cu;
            ctx->pc = 0x8047EBFCu;
            return;
    }

label_80A1D32C:
    ctx->pc = 0x80A1D32Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D32Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A1D32C: bl      0x8047EA80
    {
            ctx->lr = 0x80A1D330u;
            ctx->pc = 0x8047EA80u;
            return;
    }

label_80A1D330:
    ctx->pc = 0x80A1D330u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 42u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D330u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 42u : 1u;
    // 80A1D330: lis     r4, -27736
    ctx->gpr[4] = ((u32)(s32)(-27736) << 16);

label_80A1D334:
    ctx->pc = 0x80A1D334u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D334u)) return;
    // 80A1D334: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80A1D338:
    ctx->pc = 0x80A1D338u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D338u)) return;
    // 80A1D338: addi    r7, r4, -2884
    ctx->gpr[7] = ctx->gpr[4] + (u32)(s32)(-2884);

label_80A1D33C:
    ctx->pc = 0x80A1D33Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D33Cu)) return;
    // 80A1D33C: lis     r3, 2112
    ctx->gpr[3] = ((u32)(s32)(2112) << 16);

label_80A1D340:
    ctx->pc = 0x80A1D340u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D340u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 37u : 0u;
    // 80A1D340: lwz     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D344:
    ctx->pc = 0x80A1D344u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D344u)) return;
    // 80A1D344: lis     r4, -27740
    ctx->gpr[4] = ((u32)(s32)(-27740) << 16);

label_80A1D348:
    ctx->pc = 0x80A1D348u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D348u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 35u : 0u;
    // 80A1D348: lwz     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D34C:
    ctx->pc = 0x80A1D34Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D34Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 34u : 0u;
    // 80A1D34C: lfs     f0, 2704(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A1D34Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2704);
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
label_80A1D350:
    ctx->pc = 0x80A1D350u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D350u)) return;
    // 80A1D350: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80A1D354:
    ctx->pc = 0x80A1D354u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D354u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 32u : 0u;
    // 80A1D354: stw     r6, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D358:
    ctx->pc = 0x80A1D358u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D358u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 31u : 0u;
    // 80A1D358: stw     r0, 4(r5)
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
label_80A1D35C:
    ctx->pc = 0x80A1D35Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D35Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 30u : 0u;
    // 80A1D35C: lwz     r6, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D360:
    ctx->pc = 0x80A1D360u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D360u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 80A1D360: lwz     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D364:
    ctx->pc = 0x80A1D364u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D364u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80A1D364: stw     r6, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D368:
    ctx->pc = 0x80A1D368u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D368u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 80A1D368: stw     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D36C:
    ctx->pc = 0x80A1D36Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D36Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 80A1D36C: lwz     r6, 16(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(16);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D370:
    ctx->pc = 0x80A1D370u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D370u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80A1D370: lwz     r0, 20(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D374:
    ctx->pc = 0x80A1D374u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D374u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80A1D374: stw     r6, 16(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D378:
    ctx->pc = 0x80A1D378u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D378u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80A1D378: stw     r0, 20(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D37C:
    ctx->pc = 0x80A1D37Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D37Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80A1D37C: lwz     r6, 24(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(24);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D380:
    ctx->pc = 0x80A1D380u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D380u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80A1D380: lwz     r0, 28(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D384:
    ctx->pc = 0x80A1D384u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D384u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80A1D384: stw     r6, 24(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D388:
    ctx->pc = 0x80A1D388u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D388u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80A1D388: stw     r0, 28(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D38C:
    ctx->pc = 0x80A1D38Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D38Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80A1D38C: lwz     r6, 32(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(32);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D390:
    ctx->pc = 0x80A1D390u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D390u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80A1D390: lwz     r0, 36(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D394:
    ctx->pc = 0x80A1D394u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D394u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80A1D394: stw     r6, 32(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D398:
    ctx->pc = 0x80A1D398u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D398u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80A1D398: stw     r0, 36(r5)
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
label_80A1D39C:
    ctx->pc = 0x80A1D39Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D39Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80A1D39C: lwz     r6, 40(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(40);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D3A0:
    ctx->pc = 0x80A1D3A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D3A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80A1D3A0: lwz     r0, 44(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D3A4:
    ctx->pc = 0x80A1D3A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D3A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80A1D3A4: stw     r6, 40(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D3A8:
    ctx->pc = 0x80A1D3A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D3A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80A1D3A8: stw     r0, 44(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D3AC:
    ctx->pc = 0x80A1D3ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D3ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80A1D3AC: lwz     r6, 48(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(48);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D3B0:
    ctx->pc = 0x80A1D3B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D3B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80A1D3B0: lwz     r0, 52(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D3B4:
    ctx->pc = 0x80A1D3B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D3B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A1D3B4: stw     r6, 48(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D3B8:
    ctx->pc = 0x80A1D3B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D3B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A1D3B8: stw     r0, 52(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D3BC:
    ctx->pc = 0x80A1D3BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D3BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A1D3BC: lwz     r0, 4(r30)
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
label_80A1D3C0:
    ctx->pc = 0x80A1D3C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D3C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A1D3C0: stw     r0, 4(r5)
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
label_80A1D3C4:
    ctx->pc = 0x80A1D3C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D3C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A1D3C4: lfs     f1, 12(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A1D3C4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D3C8:
    ctx->pc = 0x80A1D3C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D3C8u)) return;
    // 80A1D3C8: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80A1D3C8u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80A1D3CC:
    ctx->pc = 0x80A1D3CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D3CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1D3CC: stfs     f0, 12(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A1D3CCu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D3D0:
    ctx->pc = 0x80A1D3D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D3D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A1D3D0: stw     r5, 4(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D3D4:
    ctx->pc = 0x80A1D3D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D3D4u)) return;
    // 80A1D3D4: bl      0x8047EBFC
    {
            ctx->lr = 0x80A1D3D8u;
            ctx->pc = 0x8047EBFCu;
            return;
    }

label_80A1D3D8:
    ctx->pc = 0x80A1D3D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D3D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 11u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A1D3D8: lmw     r27, 12(r1)
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
label_80A1D3DC:
    ctx->pc = 0x80A1D3DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D3DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A1D3DC: lwz     r0, 36(r1)
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
label_80A1D3E0:
    ctx->pc = 0x80A1D3E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80A1D3E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1D3E0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D3E4:
    ctx->pc = 0x80A1D3E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D3E4u)) return;
    // 80A1D3E4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80A1D3E8:
    ctx->pc = 0x80A1D3E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D3E8u)) return;
    // 80A1D3E8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80A1C6E0;
        }
    }

label_80A1D3EC:
    ctx->pc = 0x80A1D3ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 26u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D3ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 26u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80A1D3EC: stwu     r1, -48(r1)
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
label_80A1D3F0:
    ctx->pc = 0x80A1D3F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D3F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80A1D3F0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D3F4:
    ctx->pc = 0x80A1D3F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D3F4u)) return;
    // 80A1D3F4: lis     r3, -32606
    ctx->gpr[3] = ((u32)(s32)(-32606) << 16);

label_80A1D3F8:
    ctx->pc = 0x80A1D3F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D3F8u)) return;
    // 80A1D3F8: lis     r4, -27734
    ctx->gpr[4] = ((u32)(s32)(-27734) << 16);

label_80A1D3FC:
    ctx->pc = 0x80A1D3FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D3FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80A1D3FC: stw     r0, 52(r1)
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
label_80A1D400:
    ctx->pc = 0x80A1D400u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D400u)) return;
    // 80A1D400: addi    r5, r3, -13044
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-13044);

label_80A1D404:
    ctx->pc = 0x80A1D404u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D404u)) return;
    // 80A1D404: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80A1D408:
    ctx->pc = 0x80A1D408u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D408u)) return;
    // 80A1D408: lis     r3, -27736
    ctx->gpr[3] = ((u32)(s32)(-27736) << 16);

label_80A1D40C:
    ctx->pc = 0x80A1D40Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 11u, 0x80A1D40Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A1D40C: stmw     r24, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 24; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D410:
    ctx->pc = 0x80A1D410u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D410u)) return;
    // 80A1D410: addi    r29, r4, -9824
    ctx->gpr[29] = ctx->gpr[4] + (u32)(s32)(-9824);

label_80A1D414:
    ctx->pc = 0x80A1D414u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D414u)) return;
    // 80A1D414: addi    r30, r3, -10024
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(-10024);

label_80A1D418:
    ctx->pc = 0x80A1D418u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D418u)) return;
    // 80A1D418: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_80A1D41C:
    ctx->pc = 0x80A1D41Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D41Cu)) return;
    // 80A1D41C: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80A1D420:
    ctx->pc = 0x80A1D420u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D420u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1D420: stw     r0, 20(r29)
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
label_80A1D424:
    ctx->pc = 0x80A1D424u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D424u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A1D424: stw     r0, 24(r29)
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
label_80A1D428:
    ctx->pc = 0x80A1D428u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D428u)) return;
    // 80A1D428: bl      0x8050FD60
    {
            ctx->lr = 0x80A1D42Cu;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80A1D42C:
    ctx->pc = 0x80A1D42Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D42Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A1D42C: or.   r25, r3, r3
    {
        ctx->gpr[25] = ctx->gpr[3] | ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[25];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80A1D430:
    ctx->pc = 0x80A1D430u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D430u)) return;
    // 80A1D430: bc    12, 2, 0x80A1D7C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80A1D7C8;
        }
    }

label_80A1D434:
    ctx->pc = 0x80A1D434u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D434u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1D434: lwz     r24, 32(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(32);
        ctx->gpr[24] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D438:
    ctx->pc = 0x80A1D438u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D438u)) return;
    // 80A1D438: or   r4, r24, r24
    {
        ctx->gpr[4] = ctx->gpr[24] | ctx->gpr[24];
    }

label_80A1D43C:
    ctx->pc = 0x80A1D43Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D43Cu)) return;
    // 80A1D43C: bl      0x804551B4
    {
            ctx->lr = 0x80A1D440u;
            ctx->pc = 0x804551B4u;
            return;
    }

label_80A1D440:
    ctx->pc = 0x80A1D440u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D440u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80A1D440: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80A1D444:
    ctx->pc = 0x80A1D444u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D444u)) return;
    // 80A1D444: li      r4, 368
    ctx->gpr[4] = (u32)(s32)(368);

label_80A1D448:
    ctx->pc = 0x80A1D448u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D448u)) return;
    // 80A1D448: bl      0x8050EEC0
    {
            ctx->lr = 0x80A1D44Cu;
            ctx->pc = 0x8050EEC0u;
            return;
    }

label_80A1D44C:
    ctx->pc = 0x80A1D44Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D44Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A1D44C: or.   r31, r3, r3
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

label_80A1D450:
    ctx->pc = 0x80A1D450u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D450u)) return;
    // 80A1D450: bc    12, 2, 0x80A1D82C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80A1D82C;
        }
    }

label_80A1D454:
    ctx->pc = 0x80A1D454u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D454u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A1D454: stw     r31, 44(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D458:
    ctx->pc = 0x80A1D458u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D458u)) return;
    // 80A1D458: addi    r26, r30, 7140
    ctx->gpr[26] = ctx->gpr[30] + (u32)(s32)(7140);

label_80A1D45C:
    ctx->pc = 0x80A1D45Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D45Cu)) return;
    // 80A1D45C: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80A1D460:
    ctx->pc = 0x80A1D460u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D460u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1D460: lwz     r3, 4(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D464:
    ctx->pc = 0x80A1D464u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D464u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A1D464: lwz     r3, 8(r3)
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
label_80A1D468:
    ctx->pc = 0x80A1D468u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D468u)) return;
    // 80A1D468: bl      0x8050EEC0
    {
            ctx->lr = 0x80A1D46Cu;
            ctx->pc = 0x8050EEC0u;
            return;
    }

label_80A1D46C:
    ctx->pc = 0x80A1D46Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D46Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A1D46C: stw     r3, 356(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(356);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D470:
    ctx->pc = 0x80A1D470u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D470u)) return;
    // 80A1D470: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80A1D474:
    ctx->pc = 0x80A1D474u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D474u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1D474: lwz     r3, 4(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D478:
    ctx->pc = 0x80A1D478u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D478u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A1D478: lwz     r3, 8(r3)
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
label_80A1D47C:
    ctx->pc = 0x80A1D47Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D47Cu)) return;
    // 80A1D47C: bl      0x8050EEC0
    {
            ctx->lr = 0x80A1D480u;
            ctx->pc = 0x8050EEC0u;
            return;
    }

label_80A1D480:
    ctx->pc = 0x80A1D480u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D480u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A1D480: stw     r3, 360(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(360);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D484:
    ctx->pc = 0x80A1D484u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D484u)) return;
    // 80A1D484: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80A1D488:
    ctx->pc = 0x80A1D488u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D488u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1D488: lwz     r3, 4(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D48C:
    ctx->pc = 0x80A1D48Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D48Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A1D48C: lwz     r3, 8(r3)
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
label_80A1D490:
    ctx->pc = 0x80A1D490u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D490u)) return;
    // 80A1D490: bl      0x8050EEC0
    {
            ctx->lr = 0x80A1D494u;
            ctx->pc = 0x8050EEC0u;
            return;
    }

label_80A1D494:
    ctx->pc = 0x80A1D494u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D494u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1D494: stw     r3, 364(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(364);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D498:
    ctx->pc = 0x80A1D498u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D498u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1D498: lwz     r3, 356(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(356);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D49C:
    ctx->pc = 0x80A1D49Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D49Cu)) return;
    // 80A1D49C: cmplwi  r3, 0x0000
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

label_80A1D4A0:
    ctx->pc = 0x80A1D4A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D4A0u)) return;
    // 80A1D4A0: bc    12, 2, 0x80A1D4BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80A1D4BC;
        }
    }

label_80A1D4A4:
    ctx->pc = 0x80A1D4A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D4A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1D4A4: lwz     r0, 360(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(360);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D4A8:
    ctx->pc = 0x80A1D4A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D4A8u)) return;
    // 80A1D4A8: cmplwi  r0, 0x0000
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

label_80A1D4AC:
    ctx->pc = 0x80A1D4ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D4ACu)) return;
    // 80A1D4AC: bc    12, 2, 0x80A1D4BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80A1D4BC;
        }
    }

label_80A1D4B0:
    ctx->pc = 0x80A1D4B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D4B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1D4B0: lwz     r0, 364(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(364);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D4B4:
    ctx->pc = 0x80A1D4B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D4B4u)) return;
    // 80A1D4B4: cmplwi  r0, 0x0000
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

label_80A1D4B8:
    ctx->pc = 0x80A1D4B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D4B8u)) return;
    // 80A1D4B8: bc    4, 2, 0x80A1D4F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A1D4F4;
        }
    }

label_80A1D4BC:
    ctx->pc = 0x80A1D4BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D4BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A1D4BC: cmplwi  r3, 0x0000
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

label_80A1D4C0:
    ctx->pc = 0x80A1D4C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D4C0u)) return;
    // 80A1D4C0: bc    12, 2, 0x80A1D4C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80A1D4C8;
        }
    }

label_80A1D4C4:
    ctx->pc = 0x80A1D4C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D4C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A1D4C4: bl      0x8050ED40
    {
            ctx->lr = 0x80A1D4C8u;
            ctx->pc = 0x8050ED40u;
            return;
    }

label_80A1D4C8:
    ctx->pc = 0x80A1D4C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D4C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1D4C8: lwz     r3, 360(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(360);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D4CC:
    ctx->pc = 0x80A1D4CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D4CCu)) return;
    // 80A1D4CC: cmplwi  r3, 0x0000
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

label_80A1D4D0:
    ctx->pc = 0x80A1D4D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D4D0u)) return;
    // 80A1D4D0: bc    12, 2, 0x80A1D4D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80A1D4D8;
        }
    }

label_80A1D4D4:
    ctx->pc = 0x80A1D4D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D4D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A1D4D4: bl      0x8050ED40
    {
            ctx->lr = 0x80A1D4D8u;
            ctx->pc = 0x8050ED40u;
            return;
    }

label_80A1D4D8:
    ctx->pc = 0x80A1D4D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D4D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1D4D8: lwz     r3, 364(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(364);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D4DC:
    ctx->pc = 0x80A1D4DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D4DCu)) return;
    // 80A1D4DC: cmplwi  r3, 0x0000
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

label_80A1D4E0:
    ctx->pc = 0x80A1D4E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D4E0u)) return;
    // 80A1D4E0: bc    12, 2, 0x80A1D4E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80A1D4E8;
        }
    }

label_80A1D4E4:
    ctx->pc = 0x80A1D4E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D4E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A1D4E4: bl      0x8050ED40
    {
            ctx->lr = 0x80A1D4E8u;
            ctx->pc = 0x8050ED40u;
            return;
    }

label_80A1D4E8:
    ctx->pc = 0x80A1D4E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D4E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A1D4E8: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_80A1D4EC:
    ctx->pc = 0x80A1D4ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D4ECu)) return;
    // 80A1D4EC: bl      0x8050F9E0
    {
            ctx->lr = 0x80A1D4F0u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80A1D4F0:
    ctx->pc = 0x80A1D4F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D4F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A1D4F0: b       0x80A1D82C
    {
            goto label_80A1D82C;
    }

label_80A1D4F4:
    ctx->pc = 0x80A1D4F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D4F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A1D4F4: bl      0x8047EA80
    {
            ctx->lr = 0x80A1D4F8u;
            ctx->pc = 0x8047EA80u;
            return;
    }

label_80A1D4F8:
    ctx->pc = 0x80A1D4F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 33u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D4F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 33u : 1u;
    // 80A1D4F8: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80A1D4FC:
    ctx->pc = 0x80A1D4FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D4FCu)) return;
    // 80A1D4FC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80A1D500:
    ctx->pc = 0x80A1D500u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D500u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 30u : 0u;
    // 80A1D500: stw     r27, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D504:
    ctx->pc = 0x80A1D504u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D504u)) return;
    // 80A1D504: li      r4, 40
    ctx->gpr[4] = (u32)(s32)(40);

label_80A1D508:
    ctx->pc = 0x80A1D508u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D508u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80A1D508: lwz     r5, 7140(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(7140);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D50C:
    ctx->pc = 0x80A1D50Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D50Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 80A1D50C: lwz     r0, 7144(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(7144);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D510:
    ctx->pc = 0x80A1D510u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D510u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 80A1D510: stw     r5, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D514:
    ctx->pc = 0x80A1D514u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D514u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80A1D514: stw     r0, 4(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D518:
    ctx->pc = 0x80A1D518u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D518u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80A1D518: lwz     r5, 7148(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(7148);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D51C:
    ctx->pc = 0x80A1D51Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D51Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80A1D51C: lwz     r0, 7152(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(7152);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D520:
    ctx->pc = 0x80A1D520u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D520u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80A1D520: stw     r5, 8(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D524:
    ctx->pc = 0x80A1D524u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D524u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80A1D524: stw     r0, 12(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D528:
    ctx->pc = 0x80A1D528u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D528u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80A1D528: lwz     r5, 7156(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(7156);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D52C:
    ctx->pc = 0x80A1D52Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D52Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80A1D52C: lwz     r0, 7160(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(7160);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D530:
    ctx->pc = 0x80A1D530u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D530u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80A1D530: stw     r5, 16(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D534:
    ctx->pc = 0x80A1D534u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D534u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80A1D534: stw     r0, 20(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D538:
    ctx->pc = 0x80A1D538u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D538u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80A1D538: lwz     r5, 7164(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(7164);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D53C:
    ctx->pc = 0x80A1D53Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D53Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80A1D53C: lwz     r0, 7168(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(7168);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D540:
    ctx->pc = 0x80A1D540u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D540u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80A1D540: stw     r5, 24(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D544:
    ctx->pc = 0x80A1D544u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D544u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80A1D544: stw     r0, 28(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D548:
    ctx->pc = 0x80A1D548u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D548u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80A1D548: lwz     r5, 7172(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(7172);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D54C:
    ctx->pc = 0x80A1D54Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D54Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80A1D54C: lwz     r0, 7176(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(7176);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D550:
    ctx->pc = 0x80A1D550u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D550u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80A1D550: stw     r5, 32(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D554:
    ctx->pc = 0x80A1D554u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D554u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80A1D554: stw     r0, 36(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D558:
    ctx->pc = 0x80A1D558u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D558u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A1D558: lwz     r5, 7180(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(7180);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D55C:
    ctx->pc = 0x80A1D55Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D55Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A1D55C: lwz     r0, 7184(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(7184);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D560:
    ctx->pc = 0x80A1D560u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D560u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A1D560: stw     r5, 40(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D564:
    ctx->pc = 0x80A1D564u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D564u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A1D564: stw     r0, 44(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D568:
    ctx->pc = 0x80A1D568u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D568u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A1D568: lwz     r5, 7188(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(7188);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D56C:
    ctx->pc = 0x80A1D56Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D56Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1D56C: lwz     r0, 7192(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(7192);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D570:
    ctx->pc = 0x80A1D570u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D570u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1D570: stw     r5, 48(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D574:
    ctx->pc = 0x80A1D574u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D574u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A1D574: stw     r0, 52(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D578:
    ctx->pc = 0x80A1D578u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D578u)) return;
    // 80A1D578: bl      0x8050EEC0
    {
            ctx->lr = 0x80A1D57Cu;
            ctx->pc = 0x8050EEC0u;
            return;
    }

label_80A1D57C:
    ctx->pc = 0x80A1D57Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 30u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D57Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 30u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 80A1D57C: stw     r3, 4(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D580:
    ctx->pc = 0x80A1D580u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D580u)) return;
    // 80A1D580: li      r4, 12
    ctx->gpr[4] = (u32)(s32)(12);

label_80A1D584:
    ctx->pc = 0x80A1D584u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D584u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 80A1D584: lwz     r0, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D588:
    ctx->pc = 0x80A1D588u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D588u)) return;
    // 80A1D588: rlwinm r0, r0, 0, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFFCu;
    }

label_80A1D58C:
    ctx->pc = 0x80A1D58Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D58Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80A1D58C: stw     r0, 0(r27)
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
label_80A1D590:
    ctx->pc = 0x80A1D590u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D590u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80A1D590: lwz     r5, 4(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D594:
    ctx->pc = 0x80A1D594u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D594u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80A1D594: lwz     r28, 4(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D598:
    ctx->pc = 0x80A1D598u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D598u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80A1D598: lwz     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D59C:
    ctx->pc = 0x80A1D59Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D59Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80A1D59C: lwz     r0, 4(r5)
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
label_80A1D5A0:
    ctx->pc = 0x80A1D5A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D5A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80A1D5A0: stw     r3, 0(r28)
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
label_80A1D5A4:
    ctx->pc = 0x80A1D5A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D5A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80A1D5A4: stw     r0, 4(r28)
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
label_80A1D5A8:
    ctx->pc = 0x80A1D5A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D5A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80A1D5A8: lwz     r3, 8(r5)
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
label_80A1D5AC:
    ctx->pc = 0x80A1D5ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D5ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80A1D5AC: lwz     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D5B0:
    ctx->pc = 0x80A1D5B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D5B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80A1D5B0: stw     r3, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D5B4:
    ctx->pc = 0x80A1D5B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D5B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80A1D5B4: stw     r0, 12(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D5B8:
    ctx->pc = 0x80A1D5B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D5B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80A1D5B8: lwz     r3, 16(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D5BC:
    ctx->pc = 0x80A1D5BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D5BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80A1D5BC: lwz     r0, 20(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D5C0:
    ctx->pc = 0x80A1D5C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D5C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80A1D5C0: stw     r3, 16(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D5C4:
    ctx->pc = 0x80A1D5C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D5C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80A1D5C4: stw     r0, 20(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D5C8:
    ctx->pc = 0x80A1D5C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D5C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80A1D5C8: lwz     r3, 24(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D5CC:
    ctx->pc = 0x80A1D5CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D5CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80A1D5CC: lwz     r0, 28(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D5D0:
    ctx->pc = 0x80A1D5D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D5D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A1D5D0: stw     r3, 24(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D5D4:
    ctx->pc = 0x80A1D5D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D5D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A1D5D4: stw     r0, 28(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D5D8:
    ctx->pc = 0x80A1D5D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D5D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A1D5D8: lwz     r3, 32(r5)
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
label_80A1D5DC:
    ctx->pc = 0x80A1D5DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D5DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A1D5DC: lwz     r0, 36(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D5E0:
    ctx->pc = 0x80A1D5E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D5E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A1D5E0: stw     r3, 32(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D5E4:
    ctx->pc = 0x80A1D5E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D5E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1D5E4: stw     r0, 36(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D5E8:
    ctx->pc = 0x80A1D5E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D5E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1D5E8: lwz     r3, 4(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D5EC:
    ctx->pc = 0x80A1D5ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D5ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A1D5EC: lwz     r3, 8(r3)
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
label_80A1D5F0:
    ctx->pc = 0x80A1D5F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D5F0u)) return;
    // 80A1D5F0: bl      0x8050EEC0
    {
            ctx->lr = 0x80A1D5F4u;
            ctx->pc = 0x8050EEC0u;
            return;
    }

label_80A1D5F4:
    ctx->pc = 0x80A1D5F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D5F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80A1D5F4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80A1D5F8:
    ctx->pc = 0x80A1D5F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D5F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1D5F8: stw     r3, 0(r28)
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
label_80A1D5FC:
    ctx->pc = 0x80A1D5FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D5FCu)) return;
    // 80A1D5FC: or   r7, r6, r6
    {
        ctx->gpr[7] = ctx->gpr[6] | ctx->gpr[6];
    }

label_80A1D600:
    ctx->pc = 0x80A1D600u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D600u)) return;
    // 80A1D600: b       0x80A1D64C
    {
            goto label_80A1D64C;
    }

label_80A1D604:
    ctx->pc = 0x80A1D604u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 18u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D604u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 18u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80A1D604: lwz     r5, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D608:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D608u)) return;
    // 80A1D608: addi    r4, r7, 4
    ctx->gpr[4] = ctx->gpr[7] + (u32)(s32)(4);

label_80A1D60C:
    ctx->pc = 0x80A1D60Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D60Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80A1D60C: lwz     r3, 0(r28)
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
label_80A1D610:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D610u)) return;
    // 80A1D610: addi    r0, r7, 8
    ctx->gpr[0] = ctx->gpr[7] + (u32)(s32)(8);

label_80A1D614:
    ctx->pc = 0x80A1D614u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D614u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80A1D614: lfsx    f0, r5, r7
    if (!ppc_fp_available_inline(ctx, 0x80A1D614u)) return;
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[7];
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
label_80A1D618:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D618u)) return;
    // 80A1D618: addi    r6, r6, 1
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(1);

label_80A1D61C:
    ctx->pc = 0x80A1D61Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D61Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80A1D61C: stfsx    f0, r3, r7
    if (!ppc_fp_available_inline(ctx, 0x80A1D61Cu)) return;
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[7];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D620:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D620u)) return;
    // 80A1D620: addi    r7, r7, 12
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(12);

label_80A1D624:
    ctx->pc = 0x80A1D624u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D624u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80A1D624: lwz     r5, 4(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D628:
    ctx->pc = 0x80A1D628u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D628u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A1D628: lwz     r3, 0(r28)
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
label_80A1D62C:
    ctx->pc = 0x80A1D62Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D62Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A1D62C: lwz     r5, 0(r5)
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
label_80A1D630:
    ctx->pc = 0x80A1D630u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D630u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A1D630: lfsx    f0, r5, r4
    if (!ppc_fp_available_inline(ctx, 0x80A1D630u)) return;
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[4];
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
label_80A1D634:
    ctx->pc = 0x80A1D634u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D634u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A1D634: stfsx    f0, r3, r4
    if (!ppc_fp_available_inline(ctx, 0x80A1D634u)) return;
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[4];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D638:
    ctx->pc = 0x80A1D638u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D638u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A1D638: lwz     r4, 4(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D63C:
    ctx->pc = 0x80A1D63Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D63Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1D63C: lwz     r3, 0(r28)
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
label_80A1D640:
    ctx->pc = 0x80A1D640u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D640u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1D640: lwz     r4, 0(r4)
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
label_80A1D644:
    ctx->pc = 0x80A1D644u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D644u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A1D644: lfsx    f0, r4, r0
    if (!ppc_fp_available_inline(ctx, 0x80A1D644u)) return;
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
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
label_80A1D648:
    ctx->pc = 0x80A1D648u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D648u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80A1D648: stfsx    f0, r3, r0
    if (!ppc_fp_available_inline(ctx, 0x80A1D648u)) return;
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D64C:
    ctx->pc = 0x80A1D64Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D64Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1D64C: lwz     r3, 4(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D650:
    ctx->pc = 0x80A1D650u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D650u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1D650: lwz     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D654:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D654u)) return;
    // 80A1D654: cmpw    r6, r0
    {
        s32 val_a = (s32)(ctx->gpr[6]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80A1D658:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D658u)) return;
    // 80A1D658: bc    12, 0, 0x80A1D604
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80A1D604u;
                return;
            }
            goto label_80A1D604;
        }
    }

label_80A1D65C:
    ctx->pc = 0x80A1D65Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D65Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A1D65C: lwz     r6, 32(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(32);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D660:
    ctx->pc = 0x80A1D660u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D660u)) return;
    // 80A1D660: or   r4, r25, r25
    {
        ctx->gpr[4] = ctx->gpr[25] | ctx->gpr[25];
    }

label_80A1D664:
    ctx->pc = 0x80A1D664u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D664u)) return;
    // 80A1D664: or   r5, r27, r27
    {
        ctx->gpr[5] = ctx->gpr[27] | ctx->gpr[27];
    }

label_80A1D668:
    ctx->pc = 0x80A1D668u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D668u)) return;
    // 80A1D668: lis     r3, 26624
    ctx->gpr[3] = ((u32)(s32)(26624) << 16);

label_80A1D66C:
    ctx->pc = 0x80A1D66Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D66Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1D66C: lha     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D670:
    ctx->pc = 0x80A1D670u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D670u)) return;
    // 80A1D670: ori     r0, r0, 0x0100
    ctx->gpr[0] = ctx->gpr[0] | 0x0100u;

label_80A1D674:
    ctx->pc = 0x80A1D674u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D674u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A1D674: sth     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D678:
    ctx->pc = 0x80A1D678u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D678u)) return;
    // 80A1D678: bl      0x8047EBFC
    {
            ctx->lr = 0x80A1D67Cu;
            ctx->pc = 0x8047EBFCu;
            return;
    }

label_80A1D67C:
    ctx->pc = 0x80A1D67Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D67Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A1D67C: bl      0x8047EA80
    {
            ctx->lr = 0x80A1D680u;
            ctx->pc = 0x8047EA80u;
            return;
    }

label_80A1D680:
    ctx->pc = 0x80A1D680u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 40u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D680u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 40u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 39u : 0u;
    // 80A1D680: lwz     r6, 7140(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(7140);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D684:
    ctx->pc = 0x80A1D684u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D684u)) return;
    // 80A1D684: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80A1D688:
    ctx->pc = 0x80A1D688u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D688u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 37u : 0u;
    // 80A1D688: lwz     r0, 7144(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(7144);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D68C:
    ctx->pc = 0x80A1D68Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D68Cu)) return;
    // 80A1D68C: lis     r3, -27740
    ctx->gpr[3] = ((u32)(s32)(-27740) << 16);

label_80A1D690:
    ctx->pc = 0x80A1D690u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D690u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 35u : 0u;
    // 80A1D690: lfs     f0, 2704(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A1D690u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2704);
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
label_80A1D694:
    ctx->pc = 0x80A1D694u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D694u)) return;
    // 80A1D694: or   r4, r25, r25
    {
        ctx->gpr[4] = ctx->gpr[25] | ctx->gpr[25];
    }

label_80A1D698:
    ctx->pc = 0x80A1D698u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D698u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 33u : 0u;
    // 80A1D698: stw     r6, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D69C:
    ctx->pc = 0x80A1D69Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D69Cu)) return;
    // 80A1D69C: lis     r3, 2112
    ctx->gpr[3] = ((u32)(s32)(2112) << 16);

label_80A1D6A0:
    ctx->pc = 0x80A1D6A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D6A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 31u : 0u;
    // 80A1D6A0: stw     r0, 4(r5)
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
label_80A1D6A4:
    ctx->pc = 0x80A1D6A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D6A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 30u : 0u;
    // 80A1D6A4: lwz     r6, 7148(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(7148);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D6A8:
    ctx->pc = 0x80A1D6A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D6A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 80A1D6A8: lwz     r0, 7152(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(7152);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D6AC:
    ctx->pc = 0x80A1D6ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D6ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80A1D6AC: stw     r6, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D6B0:
    ctx->pc = 0x80A1D6B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D6B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 80A1D6B0: stw     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D6B4:
    ctx->pc = 0x80A1D6B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D6B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 80A1D6B4: lwz     r6, 7156(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(7156);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D6B8:
    ctx->pc = 0x80A1D6B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D6B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80A1D6B8: lwz     r0, 7160(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(7160);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D6BC:
    ctx->pc = 0x80A1D6BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D6BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80A1D6BC: stw     r6, 16(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D6C0:
    ctx->pc = 0x80A1D6C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D6C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80A1D6C0: stw     r0, 20(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D6C4:
    ctx->pc = 0x80A1D6C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D6C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80A1D6C4: lwz     r6, 7164(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(7164);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D6C8:
    ctx->pc = 0x80A1D6C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D6C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80A1D6C8: lwz     r0, 7168(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(7168);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D6CC:
    ctx->pc = 0x80A1D6CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D6CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80A1D6CC: stw     r6, 24(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D6D0:
    ctx->pc = 0x80A1D6D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D6D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80A1D6D0: stw     r0, 28(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D6D4:
    ctx->pc = 0x80A1D6D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D6D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80A1D6D4: lwz     r6, 7172(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(7172);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D6D8:
    ctx->pc = 0x80A1D6D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D6D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80A1D6D8: lwz     r0, 7176(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(7176);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D6DC:
    ctx->pc = 0x80A1D6DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D6DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80A1D6DC: stw     r6, 32(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D6E0:
    ctx->pc = 0x80A1D6E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D6E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80A1D6E0: stw     r0, 36(r5)
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
label_80A1D6E4:
    ctx->pc = 0x80A1D6E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D6E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80A1D6E4: lwz     r6, 7180(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(7180);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D6E8:
    ctx->pc = 0x80A1D6E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D6E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80A1D6E8: lwz     r0, 7184(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(7184);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D6EC:
    ctx->pc = 0x80A1D6ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D6ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80A1D6EC: stw     r6, 40(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D6F0:
    ctx->pc = 0x80A1D6F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D6F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80A1D6F0: stw     r0, 44(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D6F4:
    ctx->pc = 0x80A1D6F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D6F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80A1D6F4: lwz     r6, 7188(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(7188);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D6F8:
    ctx->pc = 0x80A1D6F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D6F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80A1D6F8: lwz     r0, 7192(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(7192);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D6FC:
    ctx->pc = 0x80A1D6FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D6FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A1D6FC: stw     r6, 48(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D700:
    ctx->pc = 0x80A1D700u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D700u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A1D700: stw     r0, 52(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D704:
    ctx->pc = 0x80A1D704u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D704u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A1D704: lwz     r0, 4(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D708:
    ctx->pc = 0x80A1D708u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D708u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A1D708: stw     r0, 4(r5)
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
label_80A1D70C:
    ctx->pc = 0x80A1D70Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D70Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A1D70C: lfs     f1, 12(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A1D70Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D710:
    ctx->pc = 0x80A1D710u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D710u)) return;
    // 80A1D710: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80A1D710u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80A1D714:
    ctx->pc = 0x80A1D714u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D714u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1D714: stfs     f0, 12(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A1D714u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D718:
    ctx->pc = 0x80A1D718u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D718u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A1D718: stw     r5, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D71C:
    ctx->pc = 0x80A1D71Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D71Cu)) return;
    // 80A1D71C: bl      0x8047EBFC
    {
            ctx->lr = 0x80A1D720u;
            ctx->pc = 0x8047EBFCu;
            return;
    }

label_80A1D720:
    ctx->pc = 0x80A1D720u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D720u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80A1D720: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80A1D724:
    ctx->pc = 0x80A1D724u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D724u)) return;
    // 80A1D724: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80A1D728:
    ctx->pc = 0x80A1D728u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D728u)) return;
    // 80A1D728: or   r6, r5, r5
    {
        ctx->gpr[6] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80A1D72C:
    ctx->pc = 0x80A1D72Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D72Cu)) return;
    // 80A1D72C: b       0x80A1D750
    {
            goto label_80A1D750;
    }

label_80A1D730:
    ctx->pc = 0x80A1D730u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D730u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A1D730: lwz     r4, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D734:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D734u)) return;
    // 80A1D734: addi    r0, r5, 4
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(4);

label_80A1D738:
    ctx->pc = 0x80A1D738u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D738u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A1D738: lwz     r3, 364(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(364);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D73C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D73Cu)) return;
    // 80A1D73C: addi    r5, r5, 12
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(12);

label_80A1D740:
    ctx->pc = 0x80A1D740u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D740u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1D740: lfsx    f0, r4, r0
    if (!ppc_fp_available_inline(ctx, 0x80A1D740u)) return;
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
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
label_80A1D744:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D744u)) return;
    // 80A1D744: addi    r7, r7, 1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1);

label_80A1D748:
    ctx->pc = 0x80A1D748u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D748u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A1D748: stfsx    f0, r3, r6
    if (!ppc_fp_available_inline(ctx, 0x80A1D748u)) return;
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[6];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D74C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D74Cu)) return;
    // 80A1D74C: addi    r6, r6, 4
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(4);

label_80A1D750:
    ctx->pc = 0x80A1D750u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D750u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1D750: lwz     r3, 4(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D754:
    ctx->pc = 0x80A1D754u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D754u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1D754: lwz     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D758:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D758u)) return;
    // 80A1D758: cmpw    r7, r0
    {
        s32 val_a = (s32)(ctx->gpr[7]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80A1D75C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D75Cu)) return;
    // 80A1D75C: bc    12, 0, 0x80A1D730
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80A1D730u;
                return;
            }
            goto label_80A1D730;
        }
    }

label_80A1D760:
    ctx->pc = 0x80A1D760u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 26u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D760u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 26u : 1u;
    // 80A1D760: addi    r0, r31, 8
    ctx->gpr[0] = ctx->gpr[31] + (u32)(s32)(8);

label_80A1D764:
    ctx->pc = 0x80A1D764u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D764u)) return;
    // 80A1D764: lis     r3, -27740
    ctx->gpr[3] = ((u32)(s32)(-27740) << 16);

label_80A1D768:
    ctx->pc = 0x80A1D768u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D768u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80A1D768: stw     r0, 24(r29)
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
label_80A1D76C:
    ctx->pc = 0x80A1D76Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D76Cu)) return;
    // 80A1D76C: addi    r5, r3, 2616
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(2616);

label_80A1D770:
    ctx->pc = 0x80A1D770u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D770u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80A1D770: lfs     f1, 4(r29)
    if (!ppc_fp_available_inline(ctx, 0x80A1D770u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D774:
    ctx->pc = 0x80A1D774u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D774u)) return;
    // 80A1D774: lis     r3, -27740
    ctx->gpr[3] = ((u32)(s32)(-27740) << 16);

label_80A1D778:
    ctx->pc = 0x80A1D778u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D778u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80A1D778: stw     r31, 20(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D77C:
    ctx->pc = 0x80A1D77Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D77Cu)) return;
    // 80A1D77C: addi    r4, r3, 2708
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(2708);

label_80A1D780:
    ctx->pc = 0x80A1D780u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D780u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80A1D780: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A1D780u)) return;
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
label_80A1D784:
    ctx->pc = 0x80A1D784u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D784u)) return;
    // 80A1D784: lis     r5, -32606
    ctx->gpr[5] = ((u32)(s32)(-32606) << 16);

label_80A1D788:
    ctx->pc = 0x80A1D788u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D788u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80A1D788: stfs     f1, 340(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A1D788u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(340);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D78C:
    ctx->pc = 0x80A1D78Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D78Cu)) return;
    // 80A1D78C: lis     r3, -27740
    ctx->gpr[3] = ((u32)(s32)(-27740) << 16);

label_80A1D790:
    ctx->pc = 0x80A1D790u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D790u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80A1D790: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A1D790u)) return;
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
label_80A1D794:
    ctx->pc = 0x80A1D794u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D794u)) return;
    // 80A1D794: lis     r4, -32606
    ctx->gpr[4] = ((u32)(s32)(-32606) << 16);

label_80A1D798:
    ctx->pc = 0x80A1D798u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D798u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80A1D798: stfs     f0, 344(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A1D798u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(344);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D79C:
    ctx->pc = 0x80A1D79Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D79Cu)) return;
    // 80A1D79C: addi    r5, r5, -13044
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-13044);

label_80A1D7A0:
    ctx->pc = 0x80A1D7A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D7A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80A1D7A0: lfs     f0, 2600(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A1D7A0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2600);
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
label_80A1D7A4:
    ctx->pc = 0x80A1D7A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D7A4u)) return;
    // 80A1D7A4: lis     r3, -32606
    ctx->gpr[3] = ((u32)(s32)(-32606) << 16);

label_80A1D7A8:
    ctx->pc = 0x80A1D7A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D7A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A1D7A8: stfs     f1, 348(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A1D7A8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(348);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D7AC:
    ctx->pc = 0x80A1D7ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D7ACu)) return;
    // 80A1D7AC: addi    r4, r4, -14212
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14212);

label_80A1D7B0:
    ctx->pc = 0x80A1D7B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D7B0u)) return;
    // 80A1D7B0: addi    r0, r3, -14340
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-14340);

label_80A1D7B4:
    ctx->pc = 0x80A1D7B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D7B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A1D7B4: stfs     f0, 352(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A1D7B4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(352);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D7B8:
    ctx->pc = 0x80A1D7B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D7B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1D7B8: stfs     f0, 16(r24)
    if (!ppc_fp_available_inline(ctx, 0x80A1D7B8u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D7BC:
    ctx->pc = 0x80A1D7BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D7BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1D7BC: stw     r5, 16(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D7C0:
    ctx->pc = 0x80A1D7C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D7C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A1D7C0: stw     r4, 20(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D7C4:
    ctx->pc = 0x80A1D7C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D7C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80A1D7C4: stw     r0, 24(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D7C8:
    ctx->pc = 0x80A1D7C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D7C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80A1D7C8: lis     r4, -32606
    ctx->gpr[4] = ((u32)(s32)(-32606) << 16);

label_80A1D7CC:
    ctx->pc = 0x80A1D7CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D7CCu)) return;
    // 80A1D7CC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80A1D7D0:
    ctx->pc = 0x80A1D7D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D7D0u)) return;
    // 80A1D7D0: addi    r5, r4, -14804
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-14804);

label_80A1D7D4:
    ctx->pc = 0x80A1D7D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D7D4u)) return;
    // 80A1D7D4: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80A1D7D8:
    ctx->pc = 0x80A1D7D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D7D8u)) return;
    // 80A1D7D8: bl      0x8050FD60
    {
            ctx->lr = 0x80A1D7DCu;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80A1D7DC:
    ctx->pc = 0x80A1D7DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D7DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A1D7DC: or.   r24, r3, r3
    {
        ctx->gpr[24] = ctx->gpr[3] | ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[24];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80A1D7E0:
    ctx->pc = 0x80A1D7E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D7E0u)) return;
    // 80A1D7E0: bc    12, 2, 0x80A1D814
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80A1D814;
        }
    }

label_80A1D7E4:
    ctx->pc = 0x80A1D7E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D7E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A1D7E4: lwz     r4, 32(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D7E8:
    ctx->pc = 0x80A1D7E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D7E8u)) return;
    // 80A1D7E8: bl      0x804551B4
    {
            ctx->lr = 0x80A1D7ECu;
            ctx->pc = 0x804551B4u;
            return;
    }

label_80A1D7EC:
    ctx->pc = 0x80A1D7ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D7ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80A1D7EC: addi    r0, r30, 8136
    ctx->gpr[0] = ctx->gpr[30] + (u32)(s32)(8136);

label_80A1D7F0:
    ctx->pc = 0x80A1D7F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D7F0u)) return;
    // 80A1D7F0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80A1D7F4:
    ctx->pc = 0x80A1D7F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D7F4u)) return;
    // 80A1D7F4: lis     r3, -32606
    ctx->gpr[3] = ((u32)(s32)(-32606) << 16);

label_80A1D7F8:
    ctx->pc = 0x80A1D7F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D7F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A1D7F8: stw     r4, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D7FC:
    ctx->pc = 0x80A1D7FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D7FCu)) return;
    // 80A1D7FC: addi    r4, r3, -14804
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-14804);

label_80A1D800:
    ctx->pc = 0x80A1D800u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D800u)) return;
    // 80A1D800: lis     r3, -32606
    ctx->gpr[3] = ((u32)(s32)(-32606) << 16);

label_80A1D804:
    ctx->pc = 0x80A1D804u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D804u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1D804: stw     r0, 15924(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(15924);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D808:
    ctx->pc = 0x80A1D808u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D808u)) return;
    // 80A1D808: addi    r0, r3, -14932
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-14932);

label_80A1D80C:
    ctx->pc = 0x80A1D80Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D80Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A1D80C: stw     r4, 16(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D810:
    ctx->pc = 0x80A1D810u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D810u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80A1D810: stw     r0, 20(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D814:
    ctx->pc = 0x80A1D814u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D814u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80A1D814: lis     r4, -27740
    ctx->gpr[4] = ((u32)(s32)(-27740) << 16);

label_80A1D818:
    ctx->pc = 0x80A1D818u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D818u)) return;
    // 80A1D818: lis     r3, -27740
    ctx->gpr[3] = ((u32)(s32)(-27740) << 16);

label_80A1D81C:
    ctx->pc = 0x80A1D81Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D81Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1D81C: lfs     f1, 2600(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A1D81Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2600);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D820:
    ctx->pc = 0x80A1D820u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D820u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1D820: lfs     f0, 2604(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A1D820u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2604);
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
label_80A1D824:
    ctx->pc = 0x80A1D824u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D824u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A1D824: stfs     f1, 0(r29)
    if (!ppc_fp_available_inline(ctx, 0x80A1D824u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D828:
    ctx->pc = 0x80A1D828u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D828u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80A1D828: stfs     f0, 4(r29)
    if (!ppc_fp_available_inline(ctx, 0x80A1D828u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D82C:
    ctx->pc = 0x80A1D82Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D82Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 11u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A1D82C: lmw     r24, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 24; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D830:
    ctx->pc = 0x80A1D830u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D830u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A1D830: lwz     r0, 52(r1)
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
label_80A1D834:
    ctx->pc = 0x80A1D834u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80A1D834u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1D834: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D838:
    ctx->pc = 0x80A1D838u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D838u)) return;
    // 80A1D838: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_80A1D83C:
    ctx->pc = 0x80A1D83Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D83Cu)) return;
    // 80A1D83C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80A1C6E0;
        }
    }

label_80A1D840:
    ctx->pc = 0x80A1D840u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D840u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80A1D840: stwu     r1, -16(r1)
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
label_80A1D844:
    ctx->pc = 0x80A1D844u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D844u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80A1D844: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D848:
    ctx->pc = 0x80A1D848u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D848u)) return;
    // 80A1D848: lis     r4, -28618
    ctx->gpr[4] = ((u32)(s32)(-28618) << 16);

label_80A1D84C:
    ctx->pc = 0x80A1D84Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D84Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A1D84C: stw     r0, 20(r1)
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
label_80A1D850:
    ctx->pc = 0x80A1D850u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D850u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A1D850: stw     r31, 12(r1)
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
label_80A1D854:
    ctx->pc = 0x80A1D854u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D854u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A1D854: stw     r30, 8(r1)
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
label_80A1D858:
    ctx->pc = 0x80A1D858u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D858u)) return;
    // 80A1D858: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80A1D85C:
    ctx->pc = 0x80A1D85Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D85Cu)) return;
    // 80A1D85C: addi    r3, r4, -25492
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(-25492);

label_80A1D860:
    ctx->pc = 0x80A1D860u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D860u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1D860: lwz     r31, 32(r30)
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
label_80A1D864:
    ctx->pc = 0x80A1D864u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D864u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1D864: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A1D864u)) return;
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
label_80A1D868:
    ctx->pc = 0x80A1D868u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D868u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A1D868: lfs     f2, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A1D868u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
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
label_80A1D86C:
    ctx->pc = 0x80A1D86Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D86Cu)) return;
    // 80A1D86C: bl      0x8060F438
    {
            ctx->lr = 0x80A1D870u;
            ctx->pc = 0x8060F438u;
            return;
    }

label_80A1D870:
    ctx->pc = 0x80A1D870u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D870u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1D870: lbz     r0, 0(r31)
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
label_80A1D874:
    ctx->pc = 0x80A1D874u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D874u)) return;
    // 80A1D874: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80A1D878:
    ctx->pc = 0x80A1D878u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D878u)) return;
    // 80A1D878: cmpwi   r0, 1
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

label_80A1D87C:
    ctx->pc = 0x80A1D87Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D87Cu)) return;
    // 80A1D87C: bc    12, 2, 0x80A1D8BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80A1D8BC;
        }
    }

label_80A1D880:
    ctx->pc = 0x80A1D880u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D880u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A1D880: bc    4, 0, 0x80A1D890
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A1D890;
        }
    }

label_80A1D884:
    ctx->pc = 0x80A1D884u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D884u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A1D884: cmpwi   r0, 0
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

label_80A1D888:
    ctx->pc = 0x80A1D888u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D888u)) return;
    // 80A1D888: bc    4, 0, 0x80A1D89C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A1D89C;
        }
    }

label_80A1D88C:
    ctx->pc = 0x80A1D88Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D88Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A1D88C: b       0x80A1D8D8
    {
            goto label_80A1D8D8;
    }

label_80A1D890:
    ctx->pc = 0x80A1D890u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D890u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A1D890: cmpwi   r0, 3
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

label_80A1D894:
    ctx->pc = 0x80A1D894u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D894u)) return;
    // 80A1D894: bc    4, 0, 0x80A1D8D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A1D8D8;
        }
    }

label_80A1D898:
    ctx->pc = 0x80A1D898u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D898u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A1D898: b       0x80A1D8CC
    {
            goto label_80A1D8CC;
    }

label_80A1D89C:
    ctx->pc = 0x80A1D89Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D89Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80A1D89C: lis     r3, 64
    ctx->gpr[3] = ((u32)(s32)(64) << 16);

label_80A1D8A0:
    ctx->pc = 0x80A1D8A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D8A0u)) return;
    // 80A1D8A0: lis     r5, 128
    ctx->gpr[5] = ((u32)(s32)(128) << 16);

label_80A1D8A4:
    ctx->pc = 0x80A1D8A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D8A4u)) return;
    // 80A1D8A4: addi    r4, r3, 4212
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(4212);

label_80A1D8A8:
    ctx->pc = 0x80A1D8A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D8A8u)) return;
    // 80A1D8A8: li      r3, 4160
    ctx->gpr[3] = (u32)(s32)(4160);

label_80A1D8AC:
    ctx->pc = 0x80A1D8ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D8ACu)) return;
    // 80A1D8AC: addi    r5, r5, 29812
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(29812);

label_80A1D8B0:
    ctx->pc = 0x80A1D8B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D8B0u)) return;
    // 80A1D8B0: bl      0x8060F71C
    {
            ctx->lr = 0x80A1D8B4u;
            ctx->pc = 0x8060F71Cu;
            return;
    }

label_80A1D8B4:
    ctx->pc = 0x80A1D8B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D8B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A1D8B4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80A1D8B8:
    ctx->pc = 0x80A1D8B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D8B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80A1D8B8: stb     r0, 0(r31)
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
label_80A1D8BC:
    ctx->pc = 0x80A1D8BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D8BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A1D8BC: bl      0x8046C8C4
    {
            ctx->lr = 0x80A1D8C0u;
            ctx->pc = 0x8046C8C4u;
            return;
    }

label_80A1D8C0:
    ctx->pc = 0x80A1D8C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D8C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A1D8C0: bl      0x80A11768
    {
            ctx->lr = 0x80A1D8C4u;
            ctx->pc = 0x80A11768u;
            return;
    }

label_80A1D8C4:
    ctx->pc = 0x80A1D8C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D8C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A1D8C4: bl      0x8046C930
    {
            ctx->lr = 0x80A1D8C8u;
            ctx->pc = 0x8046C930u;
            return;
    }

label_80A1D8C8:
    ctx->pc = 0x80A1D8C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D8C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A1D8C8: b       0x80A1D8E0
    {
            goto label_80A1D8E0;
    }

label_80A1D8CC:
    ctx->pc = 0x80A1D8CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D8CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80A1D8CC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80A1D8D0:
    ctx->pc = 0x80A1D8D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D8D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A1D8D0: stb     r0, 0(r31)
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
label_80A1D8D4:
    ctx->pc = 0x80A1D8D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D8D4u)) return;
    // 80A1D8D4: b       0x80A1D8E0
    {
            goto label_80A1D8E0;
    }

label_80A1D8D8:
    ctx->pc = 0x80A1D8D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D8D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A1D8D8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80A1D8DC:
    ctx->pc = 0x80A1D8DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D8DCu)) return;
    // 80A1D8DC: bl      0x8050ED40
    {
            ctx->lr = 0x80A1D8E0u;
            ctx->pc = 0x8050ED40u;
            return;
    }

label_80A1D8E0:
    ctx->pc = 0x80A1D8E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D8E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80A1D8E0: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_80A1D8E4:
    ctx->pc = 0x80A1D8E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D8E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1D8E4: lfsu     f1, -25500(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A1D8E4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-25500);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
        ctx->gpr[3] = ea;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D8E8:
    ctx->pc = 0x80A1D8E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D8E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A1D8E8: lfs     f2, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A1D8E8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
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
label_80A1D8EC:
    ctx->pc = 0x80A1D8ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D8ECu)) return;
    // 80A1D8EC: bl      0x8060F438
    {
            ctx->lr = 0x80A1D8F0u;
            ctx->pc = 0x8060F438u;
            return;
    }

label_80A1D8F0:
    ctx->pc = 0x80A1D8F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D8F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A1D8F0: lwz     r0, 20(r1)
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
label_80A1D8F4:
    ctx->pc = 0x80A1D8F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D8F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A1D8F4: lwz     r31, 12(r1)
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
label_80A1D8F8:
    ctx->pc = 0x80A1D8F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D8F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A1D8F8: lwz     r30, 8(r1)
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
label_80A1D8FC:
    ctx->pc = 0x80A1D8FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80A1D8FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1D8FC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D900:
    ctx->pc = 0x80A1D900u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D900u)) return;
    // 80A1D900: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80A1D904:
    ctx->pc = 0x80A1D904u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D904u)) return;
    // 80A1D904: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80A1C6E0;
        }
    }

label_80A1D908:
    ctx->pc = 0x80A1D908u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D908u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1D908: stwu     r1, -16(r1)
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
label_80A1D90C:
    ctx->pc = 0x80A1D90Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D90Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1D90C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D910:
    ctx->pc = 0x80A1D910u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D910u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A1D910: stw     r0, 20(r1)
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
label_80A1D914:
    ctx->pc = 0x80A1D914u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D914u)) return;
    // 80A1D914: bl      0x804060B0
    {
            ctx->lr = 0x80A1D918u;
            ctx->pc = 0x804060B0u;
            return;
    }

label_80A1D918:
    ctx->pc = 0x80A1D918u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D918u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80A1D918: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_80A1D91C:
    ctx->pc = 0x80A1D91Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D91Cu)) return;
    // 80A1D91C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80A1D920:
    ctx->pc = 0x80A1D920u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D920u)) return;
    // 80A1D920: addi    r4, r3, -25420
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-25420);

label_80A1D924:
    ctx->pc = 0x80A1D924u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D924u)) return;
    // 80A1D924: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A1D928:
    ctx->pc = 0x80A1D928u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D928u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A1D928: stw     r0, 0(r4)
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
label_80A1D92C:
    ctx->pc = 0x80A1D92Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D92Cu)) return;
    // 80A1D92C: bl      0x805FDF54
    {
            ctx->lr = 0x80A1D930u;
            ctx->pc = 0x805FDF54u;
            return;
    }

label_80A1D930:
    ctx->pc = 0x80A1D930u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D930u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A1D930: bl      0x8046C8C4
    {
            ctx->lr = 0x80A1D934u;
            ctx->pc = 0x8046C8C4u;
            return;
    }

label_80A1D934:
    ctx->pc = 0x80A1D934u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D934u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A1D934: lwz     r0, 20(r1)
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
label_80A1D938:
    ctx->pc = 0x80A1D938u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80A1D938u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1D938: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D93C:
    ctx->pc = 0x80A1D93Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D93Cu)) return;
    // 80A1D93C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80A1D940:
    ctx->pc = 0x80A1D940u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D940u)) return;
    // 80A1D940: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80A1C6E0;
        }
    }

label_80A1D944:
    ctx->pc = 0x80A1D944u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D944u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1D944: stwu     r1, -16(r1)
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
label_80A1D948:
    ctx->pc = 0x80A1D948u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D948u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1D948: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D94C:
    ctx->pc = 0x80A1D94Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D94Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A1D94C: stw     r0, 20(r1)
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
label_80A1D950:
    ctx->pc = 0x80A1D950u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D950u)) return;
    // 80A1D950: bl      0x80A11768
    {
            ctx->lr = 0x80A1D954u;
            ctx->pc = 0x80A11768u;
            return;
    }

label_80A1D954:
    ctx->pc = 0x80A1D954u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D954u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A1D954: lwz     r0, 20(r1)
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
label_80A1D958:
    ctx->pc = 0x80A1D958u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80A1D958u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1D958: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D95C:
    ctx->pc = 0x80A1D95Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D95Cu)) return;
    // 80A1D95C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80A1D960:
    ctx->pc = 0x80A1D960u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D960u)) return;
    // 80A1D960: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80A1C6E0;
        }
    }

label_80A1D964:
    ctx->pc = 0x80A1D964u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 25u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D964u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 25u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80A1D964: stwu     r1, -32(r1)
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
label_80A1D968:
    ctx->pc = 0x80A1D968u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D968u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80A1D968: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D96C:
    ctx->pc = 0x80A1D96Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D96Cu)) return;
    // 80A1D96C: lis     r5, -28634
    ctx->gpr[5] = ((u32)(s32)(-28634) << 16);

label_80A1D970:
    ctx->pc = 0x80A1D970u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D970u)) return;
    // 80A1D970: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80A1D974:
    ctx->pc = 0x80A1D974u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D974u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80A1D974: stw     r0, 36(r1)
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
label_80A1D978:
    ctx->pc = 0x80A1D978u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D978u)) return;
    // 80A1D978: addi    r5, r5, -5402
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-5402);

label_80A1D97C:
    ctx->pc = 0x80A1D97Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D97Cu)) return;
    // 80A1D97C: lis     r6, -27734
    ctx->gpr[6] = ((u32)(s32)(-27734) << 16);

label_80A1D980:
    ctx->pc = 0x80A1D980u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D980u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80A1D980: stw     r31, 28(r1)
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
label_80A1D984:
    ctx->pc = 0x80A1D984u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D984u)) return;
    // 80A1D984: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80A1D988:
    ctx->pc = 0x80A1D988u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D988u)) return;
    // 80A1D988: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_80A1D98C:
    ctx->pc = 0x80A1D98Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D98Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80A1D98C: stw     r30, 24(r1)
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
label_80A1D990:
    ctx->pc = 0x80A1D990u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D990u)) return;
    // 80A1D990: addi    r30, r6, -10152
    ctx->gpr[30] = ctx->gpr[6] + (u32)(s32)(-10152);

label_80A1D994:
    ctx->pc = 0x80A1D994u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D994u)) return;
    // 80A1D994: addi    r3, r3, -25468
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25468);

label_80A1D998:
    ctx->pc = 0x80A1D998u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D998u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80A1D998: stw     r29, 20(r1)
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
label_80A1D99C:
    ctx->pc = 0x80A1D99Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D99Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80A1D99C: stw     r28, 16(r1)
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
label_80A1D9A0:
    ctx->pc = 0x80A1D9A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D9A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80A1D9A0: lha     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D9A4:
    ctx->pc = 0x80A1D9A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D9A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A1D9A4: lha     r0, -5404(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-5404);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D9A8:
    ctx->pc = 0x80A1D9A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D9A8u)) return;
    // 80A1D9A8: rlwinm r4, r5, 8, 0, 23
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[5], 8u) & 0xFFFFFF00u;
    }

label_80A1D9AC:
    ctx->pc = 0x80A1D9ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D9ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A1D9AC: lwz     r28, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D9B0:
    ctx->pc = 0x80A1D9B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D9B0u)) return;
    // 80A1D9B0: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_80A1D9B4:
    ctx->pc = 0x80A1D9B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D9B4u)) return;
    // 80A1D9B4: li      r5, 24
    ctx->gpr[5] = (u32)(s32)(24);

label_80A1D9B8:
    ctx->pc = 0x80A1D9B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D9B8u)) return;
    // 80A1D9B8: rlwinm r29, r0, 2, 22, 29
    {
        ctx->gpr[29] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0x000003FCu;
    }

label_80A1D9BC:
    ctx->pc = 0x80A1D9BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D9BCu)) return;
    // 80A1D9BC: addi    r4, r30, 64
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(64);

label_80A1D9C0:
    ctx->pc = 0x80A1D9C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D9C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A1D9C0: lwzx    r4, r4, r29
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[29];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D9C4:
    ctx->pc = 0x80A1D9C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D9C4u)) return;
    // 80A1D9C4: bl      0x800031E8
    {
            ctx->lr = 0x80A1D9C8u;
            ctx->pc = 0x800031E8u;
            return;
    }

label_80A1D9C8:
    ctx->pc = 0x80A1D9C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D9C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80A1D9C8: addi    r4, r30, 56
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(56);

label_80A1D9CC:
    ctx->pc = 0x80A1D9CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D9CCu)) return;
    // 80A1D9CC: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_80A1D9D0:
    ctx->pc = 0x80A1D9D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D9D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1D9D0: lwzx    r4, r4, r29
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[29];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D9D4:
    ctx->pc = 0x80A1D9D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D9D4u)) return;
    // 80A1D9D4: addi    r3, r3, -25492
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25492);

label_80A1D9D8:
    ctx->pc = 0x80A1D9D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D9D8u)) return;
    // 80A1D9D8: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_80A1D9DC:
    ctx->pc = 0x80A1D9DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D9DCu)) return;
    // 80A1D9DC: bl      0x800031E8
    {
            ctx->lr = 0x80A1D9E0u;
            ctx->pc = 0x800031E8u;
            return;
    }

label_80A1D9E0:
    ctx->pc = 0x80A1D9E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D9E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80A1D9E0: addi    r4, r30, 60
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(60);

label_80A1D9E4:
    ctx->pc = 0x80A1D9E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D9E4u)) return;
    // 80A1D9E4: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_80A1D9E8:
    ctx->pc = 0x80A1D9E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D9E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1D9E8: lwzx    r4, r4, r29
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[29];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1D9EC:
    ctx->pc = 0x80A1D9ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D9ECu)) return;
    // 80A1D9EC: addi    r3, r3, -25500
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25500);

label_80A1D9F0:
    ctx->pc = 0x80A1D9F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D9F0u)) return;
    // 80A1D9F0: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_80A1D9F4:
    ctx->pc = 0x80A1D9F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D9F4u)) return;
    // 80A1D9F4: bl      0x800031E8
    {
            ctx->lr = 0x80A1D9F8u;
            ctx->pc = 0x800031E8u;
            return;
    }

label_80A1D9F8:
    ctx->pc = 0x80A1D9F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1D9F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80A1D9F8: addi    r4, r30, 52
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(52);

label_80A1D9FC:
    ctx->pc = 0x80A1D9FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1D9FCu)) return;
    // 80A1D9FC: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_80A1DA00:
    ctx->pc = 0x80A1DA00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DA00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1DA00: lwzx    r4, r4, r29
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[29];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1DA04:
    ctx->pc = 0x80A1DA04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DA04u)) return;
    // 80A1DA04: addi    r3, r3, -25484
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25484);

label_80A1DA08:
    ctx->pc = 0x80A1DA08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DA08u)) return;
    // 80A1DA08: li      r5, 12
    ctx->gpr[5] = (u32)(s32)(12);

label_80A1DA0C:
    ctx->pc = 0x80A1DA0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DA0Cu)) return;
    // 80A1DA0C: bl      0x800031E8
    {
            ctx->lr = 0x80A1DA10u;
            ctx->pc = 0x800031E8u;
            return;
    }

label_80A1DA10:
    ctx->pc = 0x80A1DA10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1DA10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A1DA10: bl      0x804F1FA4
    {
            ctx->lr = 0x80A1DA14u;
            ctx->pc = 0x804F1FA4u;
            return;
    }

label_80A1DA14:
    ctx->pc = 0x80A1DA14u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1DA14u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A1DA14: bl      0x80A1AD0C
    {
            ctx->lr = 0x80A1DA18u;
            ctx->pc = 0x80A1AD0Cu;
            return;
    }

label_80A1DA18:
    ctx->pc = 0x80A1DA18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1DA18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A1DA18: bl      0x80A19954
    {
            ctx->lr = 0x80A1DA1Cu;
            ctx->pc = 0x80A19954u;
            return;
    }

label_80A1DA1C:
    ctx->pc = 0x80A1DA1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1DA1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A1DA1C: bl      0x805C81A0
    {
            ctx->lr = 0x80A1DA20u;
            ctx->pc = 0x805C81A0u;
            return;
    }

label_80A1DA20:
    ctx->pc = 0x80A1DA20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1DA20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A1DA20: bl      0x80A15BC4
    {
            ctx->lr = 0x80A1DA24u;
            ctx->pc = 0x80A15BC4u;
            return;
    }

label_80A1DA24:
    ctx->pc = 0x80A1DA24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1DA24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80A1DA24: addi    r3, r30, 68
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(68);

label_80A1DA28:
    ctx->pc = 0x80A1DA28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DA28u)) return;
    // 80A1DA28: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_80A1DA2C:
    ctx->pc = 0x80A1DA2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DA2Cu)) return;
    // 80A1DA2C: li      r5, 240
    ctx->gpr[5] = (u32)(s32)(240);

label_80A1DA30:
    ctx->pc = 0x80A1DA30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DA30u)) return;
    // 80A1DA30: li      r6, 120
    ctx->gpr[6] = (u32)(s32)(120);

label_80A1DA34:
    ctx->pc = 0x80A1DA34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DA34u)) return;
    // 80A1DA34: bl      0x805C3F18
    {
            ctx->lr = 0x80A1DA38u;
            ctx->pc = 0x805C3F18u;
            return;
    }

label_80A1DA38:
    ctx->pc = 0x80A1DA38u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1DA38u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80A1DA38: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_80A1DA3C:
    ctx->pc = 0x80A1DA3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DA3Cu)) return;
    // 80A1DA3C: lis     r3, -32606
    ctx->gpr[3] = ((u32)(s32)(-32606) << 16);

label_80A1DA40:
    ctx->pc = 0x80A1DA40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DA40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A1DA40: stb     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1DA44:
    ctx->pc = 0x80A1DA44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DA44u)) return;
    // 80A1DA44: addi    r5, r3, -9572
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-9572);

label_80A1DA48:
    ctx->pc = 0x80A1DA48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DA48u)) return;
    // 80A1DA48: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80A1DA4C:
    ctx->pc = 0x80A1DA4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DA4Cu)) return;
    // 80A1DA4C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80A1DA50:
    ctx->pc = 0x80A1DA50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DA50u)) return;
    // 80A1DA50: bl      0x8050FD60
    {
            ctx->lr = 0x80A1DA54u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80A1DA54:
    ctx->pc = 0x80A1DA54u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1DA54u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A1DA54: lwz     r4, 32(r3)
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
label_80A1DA58:
    ctx->pc = 0x80A1DA58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DA58u)) return;
    // 80A1DA58: li      r5, 20
    ctx->gpr[5] = (u32)(s32)(20);

label_80A1DA5C:
    ctx->pc = 0x80A1DA5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DA5Cu)) return;
    // 80A1DA5C: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_80A1DA60:
    ctx->pc = 0x80A1DA60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DA60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1DA60: stb     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1DA64:
    ctx->pc = 0x80A1DA64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DA64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1DA64: lwz     r3, 32(r3)
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
label_80A1DA68:
    ctx->pc = 0x80A1DA68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DA68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A1DA68: sth     r0, 6(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1DA6C:
    ctx->pc = 0x80A1DA6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DA6Cu)) return;
    // 80A1DA6C: bl      0x80A1E164
    {
            ctx->lr = 0x80A1DA70u;
            goto label_80A1E164;
    }

label_80A1DA70:
    ctx->pc = 0x80A1DA70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1DA70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80A1DA70: lis     r3, -32606
    ctx->gpr[3] = ((u32)(s32)(-32606) << 16);

label_80A1DA74:
    ctx->pc = 0x80A1DA74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DA74u)) return;
    // 80A1DA74: addi    r0, r3, -9916
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-9916);

label_80A1DA78:
    ctx->pc = 0x80A1DA78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DA78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80A1DA78: stw     r0, 20(r31)
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
label_80A1DA7C:
    ctx->pc = 0x80A1DA7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DA7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A1DA7C: lwz     r31, 28(r1)
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
label_80A1DA80:
    ctx->pc = 0x80A1DA80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DA80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A1DA80: lwz     r30, 24(r1)
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
label_80A1DA84:
    ctx->pc = 0x80A1DA84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DA84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A1DA84: lwz     r29, 20(r1)
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
label_80A1DA88:
    ctx->pc = 0x80A1DA88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DA88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A1DA88: lwz     r28, 16(r1)
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
label_80A1DA8C:
    ctx->pc = 0x80A1DA8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DA8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A1DA8C: lwz     r0, 36(r1)
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
label_80A1DA90:
    ctx->pc = 0x80A1DA90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80A1DA90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1DA90: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1DA94:
    ctx->pc = 0x80A1DA94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DA94u)) return;
    // 80A1DA94: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80A1DA98:
    ctx->pc = 0x80A1DA98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DA98u)) return;
    // 80A1DA98: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80A1C6E0;
        }
    }

label_80A1DA9C:
    ctx->pc = 0x80A1DA9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1DA9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80A1DA9C: stwu     r1, -16(r1)
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
label_80A1DAA0:
    ctx->pc = 0x80A1DAA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DAA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80A1DAA0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1DAA4:
    ctx->pc = 0x80A1DAA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DAA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80A1DAA4: stw     r0, 20(r1)
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
label_80A1DAA8:
    ctx->pc = 0x80A1DAA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DAA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80A1DAA8: stw     r31, 12(r1)
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
label_80A1DAAC:
    ctx->pc = 0x80A1DAACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DAACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A1DAAC: stw     r30, 8(r1)
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
label_80A1DAB0:
    ctx->pc = 0x80A1DAB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DAB0u)) return;
    // 80A1DAB0: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80A1DAB4:
    ctx->pc = 0x80A1DAB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DAB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A1DAB4: lwz     r31, 32(r3)
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
label_80A1DAB8:
    ctx->pc = 0x80A1DAB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DAB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A1DAB8: lhz     r3, 6(r31)
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
label_80A1DABC:
    ctx->pc = 0x80A1DABCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DABCu)) return;
    // 80A1DABC: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80A1DAC0:
    ctx->pc = 0x80A1DAC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DAC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1DAC0: sth     r0, 6(r31)
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
label_80A1DAC4:
    ctx->pc = 0x80A1DAC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DAC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1DAC4: lhz     r0, 6(r31)
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
label_80A1DAC8:
    ctx->pc = 0x80A1DAC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DAC8u)) return;
    // 80A1DAC8: extsh. r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80A1DACC:
    ctx->pc = 0x80A1DACCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DACCu)) return;
    // 80A1DACC: bc    4, 0, 0x80A1DAE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A1DAE8;
        }
    }

label_80A1DAD0:
    ctx->pc = 0x80A1DAD0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1DAD0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A1DAD0: bl      0x80405C38
    {
            ctx->lr = 0x80A1DAD4u;
            ctx->pc = 0x80405C38u;
            return;
    }

label_80A1DAD4:
    ctx->pc = 0x80A1DAD4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1DAD4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1DAD4: lbz     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1DAD8:
    ctx->pc = 0x80A1DAD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DAD8u)) return;
    // 80A1DAD8: extsb r3, r3
    {
        ctx->gpr[3] = (u32)(s32)(s8)ctx->gpr[3];
    }

label_80A1DADC:
    ctx->pc = 0x80A1DADCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DADCu)) return;
    // 80A1DADC: bl      0x80406090
    {
            ctx->lr = 0x80A1DAE0u;
            ctx->pc = 0x80406090u;
            return;
    }

label_80A1DAE0:
    ctx->pc = 0x80A1DAE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1DAE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A1DAE0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80A1DAE4:
    ctx->pc = 0x80A1DAE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DAE4u)) return;
    // 80A1DAE4: bl      0x8050F9F0
    {
            ctx->lr = 0x80A1DAE8u;
            ctx->pc = 0x8050F9F0u;
            return;
    }

label_80A1DAE8:
    ctx->pc = 0x80A1DAE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1DAE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A1DAE8: lwz     r0, 20(r1)
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
label_80A1DAEC:
    ctx->pc = 0x80A1DAECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DAECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A1DAEC: lwz     r31, 12(r1)
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
label_80A1DAF0:
    ctx->pc = 0x80A1DAF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DAF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A1DAF0: lwz     r30, 8(r1)
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
label_80A1DAF4:
    ctx->pc = 0x80A1DAF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80A1DAF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1DAF4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1DAF8:
    ctx->pc = 0x80A1DAF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DAF8u)) return;
    // 80A1DAF8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80A1DAFC:
    ctx->pc = 0x80A1DAFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DAFCu)) return;
    // 80A1DAFC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80A1C6E0;
        }
    }

label_80A1DB00:
    ctx->pc = 0x80A1DB00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1DB00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80A1DB00: stwu     r1, -32(r1)
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
label_80A1DB04:
    ctx->pc = 0x80A1DB04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DB04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80A1DB04: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1DB08:
    ctx->pc = 0x80A1DB08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DB08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80A1DB08: stw     r0, 36(r1)
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
label_80A1DB0C:
    ctx->pc = 0x80A1DB0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DB0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80A1DB0C: stw     r31, 28(r1)
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
label_80A1DB10:
    ctx->pc = 0x80A1DB10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DB10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A1DB10: stw     r30, 24(r1)
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
label_80A1DB14:
    ctx->pc = 0x80A1DB14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DB14u)) return;
    // 80A1DB14: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80A1DB18:
    ctx->pc = 0x80A1DB18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DB18u)) return;
    // 80A1DB18: lis     r3, -27734
    ctx->gpr[3] = ((u32)(s32)(-27734) << 16);

label_80A1DB1C:
    ctx->pc = 0x80A1DB1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DB1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A1DB1C: stw     r29, 20(r1)
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
label_80A1DB20:
    ctx->pc = 0x80A1DB20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DB20u)) return;
    // 80A1DB20: addi    r31, r3, -10152
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(-10152);

label_80A1DB24:
    ctx->pc = 0x80A1DB24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DB24u)) return;
    // 80A1DB24: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A1DB28:
    ctx->pc = 0x80A1DB28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DB28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1DB28: stw     r28, 16(r1)
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
label_80A1DB2C:
    ctx->pc = 0x80A1DB2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DB2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A1DB2C: lwz     r28, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1DB30:
    ctx->pc = 0x80A1DB30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DB30u)) return;
    // 80A1DB30: bl      0x804242E8
    {
            ctx->lr = 0x80A1DB34u;
            ctx->pc = 0x804242E8u;
            return;
    }

label_80A1DB34:
    ctx->pc = 0x80A1DB34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1DB34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1DB34: lbz     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1DB38:
    ctx->pc = 0x80A1DB38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DB38u)) return;
    // 80A1DB38: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80A1DB3C:
    ctx->pc = 0x80A1DB3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DB3Cu)) return;
    // 80A1DB3C: cmpwi   r0, 2
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

label_80A1DB40:
    ctx->pc = 0x80A1DB40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DB40u)) return;
    // 80A1DB40: bc    12, 2, 0x80A1DC84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80A1DC84;
        }
    }

label_80A1DB44:
    ctx->pc = 0x80A1DB44u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1DB44u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A1DB44: bc    4, 0, 0x80A1DB58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A1DB58;
        }
    }

label_80A1DB48:
    ctx->pc = 0x80A1DB48u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1DB48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A1DB48: cmpwi   r0, 0
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

label_80A1DB4C:
    ctx->pc = 0x80A1DB4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DB4Cu)) return;
    // 80A1DB4C: bc    12, 2, 0x80A1DB64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80A1DB64;
        }
    }

label_80A1DB50:
    ctx->pc = 0x80A1DB50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1DB50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A1DB50: bc    4, 0, 0x80A1DB70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A1DB70;
        }
    }

label_80A1DB54:
    ctx->pc = 0x80A1DB54u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1DB54u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A1DB54: b       0x80A1DC84
    {
            goto label_80A1DC84;
    }

label_80A1DB58:
    ctx->pc = 0x80A1DB58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1DB58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A1DB58: cmpwi   r0, 4
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

label_80A1DB5C:
    ctx->pc = 0x80A1DB5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DB5Cu)) return;
    // 80A1DB5C: bc    4, 0, 0x80A1DC84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80A1DC84;
        }
    }

label_80A1DB60:
    ctx->pc = 0x80A1DB60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1DB60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A1DB60: b       0x80A1DC64
    {
            goto label_80A1DC64;
    }

label_80A1DB64:
    ctx->pc = 0x80A1DB64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1DB64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80A1DB64: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80A1DB68:
    ctx->pc = 0x80A1DB68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DB68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A1DB68: stb     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1DB6C:
    ctx->pc = 0x80A1DB6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DB6Cu)) return;
    // 80A1DB6C: b       0x80A1DC84
    {
            goto label_80A1DC84;
    }

label_80A1DB70:
    ctx->pc = 0x80A1DB70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 15u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1DB70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 15u : 1u;
    // 80A1DB70: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80A1DB74:
    ctx->pc = 0x80A1DB74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DB74u)) return;
    // 80A1DB74: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80A1DB78:
    ctx->pc = 0x80A1DB78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DB78u)) return;
    // 80A1DB78: addi    r4, r4, -5402
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5402);

label_80A1DB7C:
    ctx->pc = 0x80A1DB7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DB7Cu)) return;
    // 80A1DB7C: lis     r5, -28618
    ctx->gpr[5] = ((u32)(s32)(-28618) << 16);

label_80A1DB80:
    ctx->pc = 0x80A1DB80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DB80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80A1DB80: lha     r4, 0(r4)
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
label_80A1DB84:
    ctx->pc = 0x80A1DB84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DB84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80A1DB84: lha     r0, -5404(r3)
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
label_80A1DB88:
    ctx->pc = 0x80A1DB88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DB88u)) return;
    // 80A1DB88: addi    r3, r5, -25468
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-25468);

label_80A1DB8C:
    ctx->pc = 0x80A1DB8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DB8Cu)) return;
    // 80A1DB8C: rlwinm r5, r4, 8, 0, 23
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[4], 8u) & 0xFFFFFF00u;
    }

label_80A1DB90:
    ctx->pc = 0x80A1DB90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DB90u)) return;
    // 80A1DB90: addi    r4, r31, 64
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(64);

label_80A1DB94:
    ctx->pc = 0x80A1DB94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DB94u)) return;
    // 80A1DB94: or   r0, r5, r0
    {
        ctx->gpr[0] = ctx->gpr[5] | ctx->gpr[0];
    }

label_80A1DB98:
    ctx->pc = 0x80A1DB98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DB98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A1DB98: lwz     r29, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1DB9C:
    ctx->pc = 0x80A1DB9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DB9Cu)) return;
    // 80A1DB9C: rlwinm r28, r0, 2, 22, 29
    {
        ctx->gpr[28] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0x000003FCu;
    }

label_80A1DBA0:
    ctx->pc = 0x80A1DBA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DBA0u)) return;
    // 80A1DBA0: li      r5, 24
    ctx->gpr[5] = (u32)(s32)(24);

label_80A1DBA4:
    ctx->pc = 0x80A1DBA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DBA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A1DBA4: lwzx    r4, r4, r28
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[28];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1DBA8:
    ctx->pc = 0x80A1DBA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DBA8u)) return;
    // 80A1DBA8: bl      0x800031E8
    {
            ctx->lr = 0x80A1DBACu;
            ctx->pc = 0x800031E8u;
            return;
    }

label_80A1DBAC:
    ctx->pc = 0x80A1DBACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1DBACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80A1DBAC: addi    r4, r31, 56
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(56);

label_80A1DBB0:
    ctx->pc = 0x80A1DBB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DBB0u)) return;
    // 80A1DBB0: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_80A1DBB4:
    ctx->pc = 0x80A1DBB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DBB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1DBB4: lwzx    r4, r4, r28
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[28];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1DBB8:
    ctx->pc = 0x80A1DBB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DBB8u)) return;
    // 80A1DBB8: addi    r3, r3, -25492
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25492);

label_80A1DBBC:
    ctx->pc = 0x80A1DBBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DBBCu)) return;
    // 80A1DBBC: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_80A1DBC0:
    ctx->pc = 0x80A1DBC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DBC0u)) return;
    // 80A1DBC0: bl      0x800031E8
    {
            ctx->lr = 0x80A1DBC4u;
            ctx->pc = 0x800031E8u;
            return;
    }

label_80A1DBC4:
    ctx->pc = 0x80A1DBC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1DBC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80A1DBC4: addi    r4, r31, 60
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(60);

label_80A1DBC8:
    ctx->pc = 0x80A1DBC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DBC8u)) return;
    // 80A1DBC8: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_80A1DBCC:
    ctx->pc = 0x80A1DBCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DBCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1DBCC: lwzx    r4, r4, r28
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[28];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1DBD0:
    ctx->pc = 0x80A1DBD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DBD0u)) return;
    // 80A1DBD0: addi    r3, r3, -25500
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25500);

label_80A1DBD4:
    ctx->pc = 0x80A1DBD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DBD4u)) return;
    // 80A1DBD4: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_80A1DBD8:
    ctx->pc = 0x80A1DBD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DBD8u)) return;
    // 80A1DBD8: bl      0x800031E8
    {
            ctx->lr = 0x80A1DBDCu;
            ctx->pc = 0x800031E8u;
            return;
    }

label_80A1DBDC:
    ctx->pc = 0x80A1DBDCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1DBDCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80A1DBDC: addi    r4, r31, 52
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(52);

label_80A1DBE0:
    ctx->pc = 0x80A1DBE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DBE0u)) return;
    // 80A1DBE0: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_80A1DBE4:
    ctx->pc = 0x80A1DBE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DBE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1DBE4: lwzx    r4, r4, r28
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[28];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1DBE8:
    ctx->pc = 0x80A1DBE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DBE8u)) return;
    // 80A1DBE8: addi    r3, r3, -25484
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25484);

label_80A1DBEC:
    ctx->pc = 0x80A1DBECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DBECu)) return;
    // 80A1DBEC: li      r5, 12
    ctx->gpr[5] = (u32)(s32)(12);

label_80A1DBF0:
    ctx->pc = 0x80A1DBF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DBF0u)) return;
    // 80A1DBF0: bl      0x800031E8
    {
            ctx->lr = 0x80A1DBF4u;
            ctx->pc = 0x800031E8u;
            return;
    }

label_80A1DBF4:
    ctx->pc = 0x80A1DBF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1DBF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A1DBF4: bl      0x804F1FA4
    {
            ctx->lr = 0x80A1DBF8u;
            ctx->pc = 0x804F1FA4u;
            return;
    }

label_80A1DBF8:
    ctx->pc = 0x80A1DBF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1DBF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A1DBF8: bl      0x80A1AD0C
    {
            ctx->lr = 0x80A1DBFCu;
            ctx->pc = 0x80A1AD0Cu;
            return;
    }

label_80A1DBFC:
    ctx->pc = 0x80A1DBFCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1DBFCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A1DBFC: bl      0x80A19954
    {
            ctx->lr = 0x80A1DC00u;
            ctx->pc = 0x80A19954u;
            return;
    }

label_80A1DC00:
    ctx->pc = 0x80A1DC00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1DC00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A1DC00: bl      0x805C81A0
    {
            ctx->lr = 0x80A1DC04u;
            ctx->pc = 0x805C81A0u;
            return;
    }

label_80A1DC04:
    ctx->pc = 0x80A1DC04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1DC04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A1DC04: bl      0x80A15BC4
    {
            ctx->lr = 0x80A1DC08u;
            ctx->pc = 0x80A15BC4u;
            return;
    }

label_80A1DC08:
    ctx->pc = 0x80A1DC08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1DC08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80A1DC08: addi    r3, r31, 68
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(68);

label_80A1DC0C:
    ctx->pc = 0x80A1DC0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DC0Cu)) return;
    // 80A1DC0C: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_80A1DC10:
    ctx->pc = 0x80A1DC10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DC10u)) return;
    // 80A1DC10: li      r5, 240
    ctx->gpr[5] = (u32)(s32)(240);

label_80A1DC14:
    ctx->pc = 0x80A1DC14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DC14u)) return;
    // 80A1DC14: li      r6, 120
    ctx->gpr[6] = (u32)(s32)(120);

label_80A1DC18:
    ctx->pc = 0x80A1DC18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DC18u)) return;
    // 80A1DC18: bl      0x805C3F18
    {
            ctx->lr = 0x80A1DC1Cu;
            ctx->pc = 0x805C3F18u;
            return;
    }

label_80A1DC1C:
    ctx->pc = 0x80A1DC1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1DC1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80A1DC1C: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_80A1DC20:
    ctx->pc = 0x80A1DC20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DC20u)) return;
    // 80A1DC20: lis     r3, -32606
    ctx->gpr[3] = ((u32)(s32)(-32606) << 16);

label_80A1DC24:
    ctx->pc = 0x80A1DC24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DC24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A1DC24: stb     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1DC28:
    ctx->pc = 0x80A1DC28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DC28u)) return;
    // 80A1DC28: addi    r5, r3, -9572
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-9572);

label_80A1DC2C:
    ctx->pc = 0x80A1DC2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DC2Cu)) return;
    // 80A1DC2C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80A1DC30:
    ctx->pc = 0x80A1DC30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DC30u)) return;
    // 80A1DC30: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80A1DC34:
    ctx->pc = 0x80A1DC34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DC34u)) return;
    // 80A1DC34: bl      0x8050FD60
    {
            ctx->lr = 0x80A1DC38u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80A1DC38:
    ctx->pc = 0x80A1DC38u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1DC38u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A1DC38: lwz     r4, 32(r3)
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
label_80A1DC3C:
    ctx->pc = 0x80A1DC3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DC3Cu)) return;
    // 80A1DC3C: li      r5, 20
    ctx->gpr[5] = (u32)(s32)(20);

label_80A1DC40:
    ctx->pc = 0x80A1DC40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DC40u)) return;
    // 80A1DC40: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_80A1DC44:
    ctx->pc = 0x80A1DC44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DC44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1DC44: stb     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1DC48:
    ctx->pc = 0x80A1DC48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DC48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1DC48: lwz     r3, 32(r3)
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
label_80A1DC4C:
    ctx->pc = 0x80A1DC4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DC4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A1DC4C: sth     r0, 6(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1DC50:
    ctx->pc = 0x80A1DC50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DC50u)) return;
    // 80A1DC50: bl      0x80A1E164
    {
            ctx->lr = 0x80A1DC54u;
            goto label_80A1E164;
    }

label_80A1DC54:
    ctx->pc = 0x80A1DC54u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1DC54u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80A1DC54: lis     r3, -32606
    ctx->gpr[3] = ((u32)(s32)(-32606) << 16);

label_80A1DC58:
    ctx->pc = 0x80A1DC58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DC58u)) return;
    // 80A1DC58: addi    r0, r3, -9916
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-9916);

label_80A1DC5C:
    ctx->pc = 0x80A1DC5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DC5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A1DC5C: stw     r0, 20(r30)
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
label_80A1DC60:
    ctx->pc = 0x80A1DC60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DC60u)) return;
    // 80A1DC60: b       0x80A1DC84
    {
            goto label_80A1DC84;
    }

label_80A1DC64:
    ctx->pc = 0x80A1DC64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1DC64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A1DC64: bl      0x804060B0
    {
            ctx->lr = 0x80A1DC68u;
            ctx->pc = 0x804060B0u;
            return;
    }

label_80A1DC68:
    ctx->pc = 0x80A1DC68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1DC68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80A1DC68: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_80A1DC6C:
    ctx->pc = 0x80A1DC6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DC6Cu)) return;
    // 80A1DC6C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80A1DC70:
    ctx->pc = 0x80A1DC70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DC70u)) return;
    // 80A1DC70: addi    r4, r3, -25420
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-25420);

label_80A1DC74:
    ctx->pc = 0x80A1DC74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DC74u)) return;
    // 80A1DC74: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A1DC78:
    ctx->pc = 0x80A1DC78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DC78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A1DC78: stw     r0, 0(r4)
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
label_80A1DC7C:
    ctx->pc = 0x80A1DC7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DC7Cu)) return;
    // 80A1DC7C: bl      0x805FDF54
    {
            ctx->lr = 0x80A1DC80u;
            ctx->pc = 0x805FDF54u;
            return;
    }

label_80A1DC80:
    ctx->pc = 0x80A1DC80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1DC80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A1DC80: bl      0x8046C8C4
    {
            ctx->lr = 0x80A1DC84u;
            ctx->pc = 0x8046C8C4u;
            return;
    }

label_80A1DC84:
    ctx->pc = 0x80A1DC84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1DC84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A1DC84: lwz     r0, 36(r1)
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
label_80A1DC88:
    ctx->pc = 0x80A1DC88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DC88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A1DC88: lwz     r31, 28(r1)
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
label_80A1DC8C:
    ctx->pc = 0x80A1DC8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DC8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A1DC8C: lwz     r30, 24(r1)
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
label_80A1DC90:
    ctx->pc = 0x80A1DC90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DC90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A1DC90: lwz     r29, 20(r1)
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
label_80A1DC94:
    ctx->pc = 0x80A1DC94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DC94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A1DC94: lwz     r28, 16(r1)
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
label_80A1DC98:
    ctx->pc = 0x80A1DC98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80A1DC98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1DC98: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1DC9C:
    ctx->pc = 0x80A1DC9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DC9Cu)) return;
    // 80A1DC9C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80A1DCA0:
    ctx->pc = 0x80A1DCA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DCA0u)) return;
    // 80A1DCA0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80A1C6E0;
        }
    }

label_80A1DCA4:
    ctx->pc = 0x80A1DCA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 21u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1DCA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 21u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80A1DCA4: stwu     r1, -16(r1)
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
label_80A1DCA8:
    ctx->pc = 0x80A1DCA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DCA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80A1DCA8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1DCAC:
    ctx->pc = 0x80A1DCACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DCACu)) return;
    // 80A1DCAC: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80A1DCB0:
    ctx->pc = 0x80A1DCB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DCB0u)) return;
    // 80A1DCB0: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80A1DCB4:
    ctx->pc = 0x80A1DCB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DCB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80A1DCB4: stw     r0, 20(r1)
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
label_80A1DCB8:
    ctx->pc = 0x80A1DCB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DCB8u)) return;
    // 80A1DCB8: addi    r4, r4, -5402
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5402);

label_80A1DCBC:
    ctx->pc = 0x80A1DCBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DCBCu)) return;
    // 80A1DCBC: lis     r5, -27734
    ctx->gpr[5] = ((u32)(s32)(-27734) << 16);

label_80A1DCC0:
    ctx->pc = 0x80A1DCC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DCC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80A1DCC0: stw     r31, 12(r1)
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
label_80A1DCC4:
    ctx->pc = 0x80A1DCC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DCC4u)) return;
    // 80A1DCC4: addi    r31, r5, -10152
    ctx->gpr[31] = ctx->gpr[5] + (u32)(s32)(-10152);

label_80A1DCC8:
    ctx->pc = 0x80A1DCC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DCC8u)) return;
    // 80A1DCC8: lis     r5, -28618
    ctx->gpr[5] = ((u32)(s32)(-28618) << 16);

label_80A1DCCC:
    ctx->pc = 0x80A1DCCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DCCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80A1DCCC: stw     r30, 8(r1)
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
label_80A1DCD0:
    ctx->pc = 0x80A1DCD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DCD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80A1DCD0: lha     r4, 0(r4)
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
label_80A1DCD4:
    ctx->pc = 0x80A1DCD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DCD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A1DCD4: lha     r0, -5404(r3)
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
label_80A1DCD8:
    ctx->pc = 0x80A1DCD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DCD8u)) return;
    // 80A1DCD8: rlwinm r3, r4, 8, 0, 23
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[4], 8u) & 0xFFFFFF00u;
    }

label_80A1DCDC:
    ctx->pc = 0x80A1DCDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DCDCu)) return;
    // 80A1DCDC: addi    r4, r31, 64
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(64);

label_80A1DCE0:
    ctx->pc = 0x80A1DCE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DCE0u)) return;
    // 80A1DCE0: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80A1DCE4:
    ctx->pc = 0x80A1DCE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DCE4u)) return;
    // 80A1DCE4: rlwinm r30, r0, 2, 22, 29
    {
        ctx->gpr[30] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0x000003FCu;
    }

label_80A1DCE8:
    ctx->pc = 0x80A1DCE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DCE8u)) return;
    // 80A1DCE8: addi    r3, r5, -25468
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-25468);

label_80A1DCEC:
    ctx->pc = 0x80A1DCECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DCECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1DCEC: lwzx    r4, r4, r30
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[30];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1DCF0:
    ctx->pc = 0x80A1DCF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DCF0u)) return;
    // 80A1DCF0: li      r5, 24
    ctx->gpr[5] = (u32)(s32)(24);

label_80A1DCF4:
    ctx->pc = 0x80A1DCF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DCF4u)) return;
    // 80A1DCF4: bl      0x800031E8
    {
            ctx->lr = 0x80A1DCF8u;
            ctx->pc = 0x800031E8u;
            return;
    }

label_80A1DCF8:
    ctx->pc = 0x80A1DCF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1DCF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80A1DCF8: addi    r4, r31, 56
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(56);

label_80A1DCFC:
    ctx->pc = 0x80A1DCFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DCFCu)) return;
    // 80A1DCFC: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_80A1DD00:
    ctx->pc = 0x80A1DD00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DD00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1DD00: lwzx    r4, r4, r30
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[30];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1DD04:
    ctx->pc = 0x80A1DD04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DD04u)) return;
    // 80A1DD04: addi    r3, r3, -25492
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25492);

label_80A1DD08:
    ctx->pc = 0x80A1DD08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DD08u)) return;
    // 80A1DD08: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_80A1DD0C:
    ctx->pc = 0x80A1DD0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DD0Cu)) return;
    // 80A1DD0C: bl      0x800031E8
    {
            ctx->lr = 0x80A1DD10u;
            ctx->pc = 0x800031E8u;
            return;
    }

label_80A1DD10:
    ctx->pc = 0x80A1DD10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1DD10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80A1DD10: addi    r4, r31, 60
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(60);

label_80A1DD14:
    ctx->pc = 0x80A1DD14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DD14u)) return;
    // 80A1DD14: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_80A1DD18:
    ctx->pc = 0x80A1DD18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DD18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1DD18: lwzx    r4, r4, r30
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[30];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1DD1C:
    ctx->pc = 0x80A1DD1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DD1Cu)) return;
    // 80A1DD1C: addi    r3, r3, -25500
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25500);

label_80A1DD20:
    ctx->pc = 0x80A1DD20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DD20u)) return;
    // 80A1DD20: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_80A1DD24:
    ctx->pc = 0x80A1DD24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DD24u)) return;
    // 80A1DD24: bl      0x800031E8
    {
            ctx->lr = 0x80A1DD28u;
            ctx->pc = 0x800031E8u;
            return;
    }

label_80A1DD28:
    ctx->pc = 0x80A1DD28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1DD28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80A1DD28: addi    r4, r31, 52
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(52);

label_80A1DD2C:
    ctx->pc = 0x80A1DD2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DD2Cu)) return;
    // 80A1DD2C: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_80A1DD30:
    ctx->pc = 0x80A1DD30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DD30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1DD30: lwzx    r4, r4, r30
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[30];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1DD34:
    ctx->pc = 0x80A1DD34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DD34u)) return;
    // 80A1DD34: addi    r3, r3, -25484
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25484);

label_80A1DD38:
    ctx->pc = 0x80A1DD38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DD38u)) return;
    // 80A1DD38: li      r5, 12
    ctx->gpr[5] = (u32)(s32)(12);

label_80A1DD3C:
    ctx->pc = 0x80A1DD3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DD3Cu)) return;
    // 80A1DD3C: bl      0x800031E8
    {
            ctx->lr = 0x80A1DD40u;
            ctx->pc = 0x800031E8u;
            return;
    }

label_80A1DD40:
    ctx->pc = 0x80A1DD40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1DD40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A1DD40: lwz     r0, 20(r1)
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
label_80A1DD44:
    ctx->pc = 0x80A1DD44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DD44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A1DD44: lwz     r31, 12(r1)
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
label_80A1DD48:
    ctx->pc = 0x80A1DD48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DD48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A1DD48: lwz     r30, 8(r1)
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
label_80A1DD4C:
    ctx->pc = 0x80A1DD4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80A1DD4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1DD4C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1DD50:
    ctx->pc = 0x80A1DD50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DD50u)) return;
    // 80A1DD50: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80A1DD54:
    ctx->pc = 0x80A1DD54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DD54u)) return;
    // 80A1DD54: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80A1C6E0;
        }
    }

label_80A1DD58:
    ctx->pc = 0x80A1DD58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1DD58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A1DD58: stwu     r1, -320(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-320);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1DD5C:
    ctx->pc = 0x80A1DD5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DD5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A1DD5C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1DD60:
    ctx->pc = 0x80A1DD60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DD60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A1DD60: stw     r0, 324(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1DD64:
    ctx->pc = 0x80A1DD64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DD64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A1DD64: stfd     f31, 304(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1DD64u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(304);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1DD68:
    ctx->pc = 0x80A1DD68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DD68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1DD68: psq_st   f31, 312(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80A1DD68u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(312);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80A1DD68u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1DD6C:
    ctx->pc = 0x80A1DD6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DD6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1DD6C: stw     r31, 300(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(300);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1DD70:
    ctx->pc = 0x80A1DD70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DD70u)) return;
    // 80A1DD70: lis     r3, 8192
    ctx->gpr[3] = ((u32)(s32)(8192) << 16);

label_80A1DD74:
    ctx->pc = 0x80A1DD74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DD74u)) return;
    // 80A1DD74: bl      0x8004D37C
    {
            ctx->lr = 0x80A1DD78u;
            ctx->pc = 0x8004D37Cu;
            return;
    }

label_80A1DD78:
    ctx->pc = 0x80A1DD78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1DD78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A1DD78: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A1DD7C:
    ctx->pc = 0x80A1DD7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DD7Cu)) return;
    // 80A1DD7C: bl      0x8004D394
    {
            ctx->lr = 0x80A1DD80u;
            ctx->pc = 0x8004D394u;
            return;
    }

label_80A1DD80:
    ctx->pc = 0x80A1DD80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1DD80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80A1DD80: lis     r3, -28663
    ctx->gpr[3] = ((u32)(s32)(-28663) << 16);

label_80A1DD84:
    ctx->pc = 0x80A1DD84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DD84u)) return;
    // 80A1DD84: addi    r3, r3, 9740
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9740);

label_80A1DD88:
    ctx->pc = 0x80A1DD88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DD88u)) return;
    // 80A1DD88: bl      0x8060F594
    {
            ctx->lr = 0x80A1DD8Cu;
            ctx->pc = 0x8060F594u;
            return;
    }

label_80A1DD8C:
    ctx->pc = 0x80A1DD8Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1DD8Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A1DD8C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A1DD90:
    ctx->pc = 0x80A1DD90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DD90u)) return;
    // 80A1DD90: bl      0x8060F55C
    {
            ctx->lr = 0x80A1DD94u;
            ctx->pc = 0x8060F55Cu;
            return;
    }

label_80A1DD94:
    ctx->pc = 0x80A1DD94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1DD94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A1DD94: bl      0x8004B7D8
    {
            ctx->lr = 0x80A1DD98u;
            ctx->pc = 0x8004B7D8u;
            return;
    }

label_80A1DD98:
    ctx->pc = 0x80A1DD98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1DD98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80A1DD98: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_80A1DD9C:
    ctx->pc = 0x80A1DD9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DD9Cu)) return;
    // 80A1DD9C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80A1DDA0:
    ctx->pc = 0x80A1DDA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DDA0u)) return;
    // 80A1DDA0: addi    r3, r3, 20440
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(20440);

label_80A1DDA4:
    ctx->pc = 0x80A1DDA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DDA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A1DDA4: lwz     r3, 0(r3)
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
label_80A1DDA8:
    ctx->pc = 0x80A1DDA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DDA8u)) return;
    // 80A1DDA8: bl      0x80034A7C
    {
            ctx->lr = 0x80A1DDACu;
            ctx->pc = 0x80034A7Cu;
            return;
    }

label_80A1DDAC:
    ctx->pc = 0x80A1DDACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1DDACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A1DDAC: bl      0x8004B7D8
    {
            ctx->lr = 0x80A1DDB0u;
            ctx->pc = 0x8004B7D8u;
            return;
    }

label_80A1DDB0:
    ctx->pc = 0x80A1DDB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 34u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1DDB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 34u : 1u;
    // 80A1DDB0: lis     r3, -28643
    ctx->gpr[3] = ((u32)(s32)(-28643) << 16);

label_80A1DDB4:
    ctx->pc = 0x80A1DDB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DDB4u)) return;
    // 80A1DDB4: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_80A1DDB8:
    ctx->pc = 0x80A1DDB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DDB8u)) return;
    // 80A1DDB8: addi    r4, r3, -30764
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-30764);

label_80A1DDBC:
    ctx->pc = 0x80A1DDBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DDBCu)) return;
    // 80A1DDBC: lis     r5, -27740
    ctx->gpr[5] = ((u32)(s32)(-27740) << 16);

label_80A1DDC0:
    ctx->pc = 0x80A1DDC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DDC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 80A1DDC0: lwz     r4, 0(r4)
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
label_80A1DDC4:
    ctx->pc = 0x80A1DDC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DDC4u)) return;
    // 80A1DDC4: lis     r3, -27740
    ctx->gpr[3] = ((u32)(s32)(-27740) << 16);

label_80A1DDC8:
    ctx->pc = 0x80A1DDC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DDC8u)) return;
    // 80A1DDC8: addi    r6, r3, 2760
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(2760);

label_80A1DDCC:
    ctx->pc = 0x80A1DDCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DDCCu)) return;
    // 80A1DDCC: addi    r7, r5, 2720
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(2720);

label_80A1DDD0:
    ctx->pc = 0x80A1DDD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DDD0u)) return;
    // 80A1DDD0: xoris   r4, r4, 0x8000
    ctx->gpr[4] = ctx->gpr[4] ^ (0x8000u << 16);

label_80A1DDD4:
    ctx->pc = 0x80A1DDD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DDD4u)) return;
    // 80A1DDD4: lis     r3, -27740
    ctx->gpr[3] = ((u32)(s32)(-27740) << 16);

label_80A1DDD8:
    ctx->pc = 0x80A1DDD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DDD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80A1DDD8: stw     r4, 276(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(276);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1DDDC:
    ctx->pc = 0x80A1DDDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DDDCu)) return;
    // 80A1DDDC: addi    r5, r3, 2732
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(2732);

label_80A1DDE0:
    ctx->pc = 0x80A1DDE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DDE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80A1DDE0: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A1DDE0u)) return;
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
label_80A1DDE4:
    ctx->pc = 0x80A1DDE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DDE4u)) return;
    // 80A1DDE4: lis     r8, -27740
    ctx->gpr[8] = ((u32)(s32)(-27740) << 16);

label_80A1DDE8:
    ctx->pc = 0x80A1DDE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DDE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80A1DDE8: stw     r0, 272(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(272);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1DDEC:
    ctx->pc = 0x80A1DDECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DDECu)) return;
    // 80A1DDEC: lis     r4, -27740
    ctx->gpr[4] = ((u32)(s32)(-27740) << 16);

label_80A1DDF0:
    ctx->pc = 0x80A1DDF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DDF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80A1DDF0: lfd     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A1DDF0u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1DDF4:
    ctx->pc = 0x80A1DDF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DDF4u)) return;
    // 80A1DDF4: addi    r6, r4, 2728
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(2728);

label_80A1DDF8:
    ctx->pc = 0x80A1DDF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DDF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80A1DDF8: lfd     f0, 272(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1DDF8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(272);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1DDFC:
    ctx->pc = 0x80A1DDFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DDFCu)) return;
    // 80A1DDFC: lis     r3, -27740
    ctx->gpr[3] = ((u32)(s32)(-27740) << 16);

label_80A1DE00:
    ctx->pc = 0x80A1DE00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DE00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80A1DE00: lfd     f4, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x80A1DE00u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->fpr[4] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1DE04:
    ctx->pc = 0x80A1DE04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DE04u)) return;
    // 80A1DE04: addi    r4, r3, 2736
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(2736);

label_80A1DE08:
    ctx->pc = 0x80A1DE08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DE08u)) return;
    // 80A1DE08: fsub   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80A1DE08u)) return;
    ppc_fsub(ctx, 0, 0, 1);

label_80A1DE0C:
    ctx->pc = 0x80A1DE0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DE0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80A1DE0C: lfd     f1, 2712(r8)
    if (!ppc_fp_available_inline(ctx, 0x80A1DE0Cu)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(2712);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1DE10:
    ctx->pc = 0x80A1DE10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DE10u)) return;
    // 80A1DE10: fmr    f5, f3
    if (!ppc_fp_available_inline(ctx, 0x80A1DE10u)) return;
    ctx->fpr[5] = ctx->fpr[3];

label_80A1DE14:
    ctx->pc = 0x80A1DE14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DE14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A1DE14: lfs     f2, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A1DE14u)) return;
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
label_80A1DE18:
    ctx->pc = 0x80A1DE18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DE18u)) return;
    // 80A1DE18: fmr    f6, f3
    if (!ppc_fp_available_inline(ctx, 0x80A1DE18u)) return;
    ctx->fpr[6] = ctx->fpr[3];

label_80A1DE1C:
    ctx->pc = 0x80A1DE1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DE1Cu)) return;
    // 80A1DE1C: addi    r3, r1, 128
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(128);

label_80A1DE20:
    ctx->pc = 0x80A1DE20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DE20u)) return;
    // 80A1DE20: fmul   f0, f4, f0
    if (!ppc_fp_available_inline(ctx, 0x80A1DE20u)) return;
    ppc_fmul(ctx, 0, 4, 0);

label_80A1DE24:
    ctx->pc = 0x80A1DE24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DE24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A1DE24: lfs     f4, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A1DE24u)) return;
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
label_80A1DE28:
    ctx->pc = 0x80A1DE28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DE28u)) return;
    // 80A1DE28: frsp    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80A1DE28u)) return;
    ppc_frsp(ctx, 0, 0);

label_80A1DE2C:
    ctx->pc = 0x80A1DE2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DE2Cu)) return;
    // 80A1DE2C: fmul   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80A1DE2Cu)) return;
    ppc_fmul(ctx, 1, 1, 0);

label_80A1DE30:
    ctx->pc = 0x80A1DE30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DE30u)) return;
    // 80A1DE30: frsp    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x80A1DE30u)) return;
    ppc_frsp(ctx, 1, 1);

label_80A1DE34:
    ctx->pc = 0x80A1DE34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DE34u)) return;
    // 80A1DE34: bl      0x8003AB14
    {
            ctx->lr = 0x80A1DE38u;
            ctx->pc = 0x8003AB14u;
            return;
    }

label_80A1DE38:
    ctx->pc = 0x80A1DE38u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1DE38u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80A1DE38: lis     r4, -32756
    ctx->gpr[4] = ((u32)(s32)(-32756) << 16);

label_80A1DE3C:
    ctx->pc = 0x80A1DE3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DE3Cu)) return;
    // 80A1DE3C: addi    r3, r1, 128
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(128);

label_80A1DE40:
    ctx->pc = 0x80A1DE40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DE40u)) return;
    // 80A1DE40: addi    r4, r4, 17844
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(17844);

label_80A1DE44:
    ctx->pc = 0x80A1DE44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DE44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1DE44: lwz     r4, 0(r4)
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
label_80A1DE48:
    ctx->pc = 0x80A1DE48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DE48u)) return;
    // 80A1DE48: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80A1DE4C:
    ctx->pc = 0x80A1DE4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DE4Cu)) return;
    // 80A1DE4C: bl      0x8003A434
    {
            ctx->lr = 0x80A1DE50u;
            ctx->pc = 0x8003A434u;
            return;
    }

label_80A1DE50:
    ctx->pc = 0x80A1DE50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1DE50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A1DE50: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A1DE54:
    ctx->pc = 0x80A1DE54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DE54u)) return;
    // 80A1DE54: bl      0x8004F324
    {
            ctx->lr = 0x80A1DE58u;
            ctx->pc = 0x8004F324u;
            return;
    }

label_80A1DE58:
    ctx->pc = 0x80A1DE58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1DE58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A1DE58: bl      0x8004B824
    {
            ctx->lr = 0x80A1DE5Cu;
            ctx->pc = 0x8004B824u;
            return;
    }

label_80A1DE5C:
    ctx->pc = 0x80A1DE5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1DE5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A1DE5C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A1DE60:
    ctx->pc = 0x80A1DE60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DE60u)) return;
    // 80A1DE60: bl      0x80050104
    {
            ctx->lr = 0x80A1DE64u;
            ctx->pc = 0x80050104u;
            return;
    }

label_80A1DE64:
    ctx->pc = 0x80A1DE64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1DE64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A1DE64: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80A1DE68:
    ctx->pc = 0x80A1DE68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DE68u)) return;
    // 80A1DE68: bl      0x80036C00
    {
            ctx->lr = 0x80A1DE6Cu;
            ctx->pc = 0x80036C00u;
            return;
    }

label_80A1DE6C:
    ctx->pc = 0x80A1DE6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1DE6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A1DE6C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80A1DE70:
    ctx->pc = 0x80A1DE70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DE70u)) return;
    // 80A1DE70: bl      0x800336E8
    {
            ctx->lr = 0x80A1DE74u;
            ctx->pc = 0x800336E8u;
            return;
    }

label_80A1DE74:
    ctx->pc = 0x80A1DE74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1DE74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A1DE74: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80A1DE78:
    ctx->pc = 0x80A1DE78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DE78u)) return;
    // 80A1DE78: bl      0x800363E4
    {
            ctx->lr = 0x80A1DE7Cu;
            ctx->pc = 0x800363E4u;
            return;
    }

label_80A1DE7C:
    ctx->pc = 0x80A1DE7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1DE7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80A1DE7C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A1DE80:
    ctx->pc = 0x80A1DE80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DE80u)) return;
    // 80A1DE80: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80A1DE84:
    ctx->pc = 0x80A1DE84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DE84u)) return;
    // 80A1DE84: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80A1DE88:
    ctx->pc = 0x80A1DE88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DE88u)) return;
    // 80A1DE88: li      r6, 30
    ctx->gpr[6] = (u32)(s32)(30);

label_80A1DE8C:
    ctx->pc = 0x80A1DE8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DE8Cu)) return;
    // 80A1DE8C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80A1DE90:
    ctx->pc = 0x80A1DE90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DE90u)) return;
    // 80A1DE90: li      r8, 125
    ctx->gpr[8] = (u32)(s32)(125);

label_80A1DE94:
    ctx->pc = 0x80A1DE94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DE94u)) return;
    // 80A1DE94: bl      0x80033418
    {
            ctx->lr = 0x80A1DE98u;
            ctx->pc = 0x80033418u;
            return;
    }

label_80A1DE98:
    ctx->pc = 0x80A1DE98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1DE98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80A1DE98: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80A1DE9C:
    ctx->pc = 0x80A1DE9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DE9Cu)) return;
    // 80A1DE9C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80A1DEA0:
    ctx->pc = 0x80A1DEA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DEA0u)) return;
    // 80A1DEA0: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_80A1DEA4:
    ctx->pc = 0x80A1DEA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DEA4u)) return;
    // 80A1DEA4: li      r6, 33
    ctx->gpr[6] = (u32)(s32)(33);

label_80A1DEA8:
    ctx->pc = 0x80A1DEA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DEA8u)) return;
    // 80A1DEA8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80A1DEAC:
    ctx->pc = 0x80A1DEACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DEACu)) return;
    // 80A1DEAC: li      r8, 125
    ctx->gpr[8] = (u32)(s32)(125);

label_80A1DEB0:
    ctx->pc = 0x80A1DEB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DEB0u)) return;
    // 80A1DEB0: bl      0x80033418
    {
            ctx->lr = 0x80A1DEB4u;
            ctx->pc = 0x80033418u;
            return;
    }

label_80A1DEB4:
    ctx->pc = 0x80A1DEB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1DEB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80A1DEB4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A1DEB8:
    ctx->pc = 0x80A1DEB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DEB8u)) return;
    // 80A1DEB8: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80A1DEBC:
    ctx->pc = 0x80A1DEBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DEBCu)) return;
    // 80A1DEBC: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80A1DEC0:
    ctx->pc = 0x80A1DEC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DEC0u)) return;
    // 80A1DEC0: bl      0x800362D0
    {
            ctx->lr = 0x80A1DEC4u;
            ctx->pc = 0x800362D0u;
            return;
    }

label_80A1DEC4:
    ctx->pc = 0x80A1DEC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1DEC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80A1DEC4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A1DEC8:
    ctx->pc = 0x80A1DEC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DEC8u)) return;
    // 80A1DEC8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80A1DECC:
    ctx->pc = 0x80A1DECCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DECCu)) return;
    // 80A1DECC: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80A1DED0:
    ctx->pc = 0x80A1DED0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DED0u)) return;
    // 80A1DED0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80A1DED4:
    ctx->pc = 0x80A1DED4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DED4u)) return;
    // 80A1DED4: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_80A1DED8:
    ctx->pc = 0x80A1DED8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DED8u)) return;
    // 80A1DED8: bl      0x80036454
    {
            ctx->lr = 0x80A1DEDCu;
            ctx->pc = 0x80036454u;
            return;
    }

label_80A1DEDC:
    ctx->pc = 0x80A1DEDCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1DEDCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80A1DEDC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A1DEE0:
    ctx->pc = 0x80A1DEE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DEE0u)) return;
    // 80A1DEE0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80A1DEE4:
    ctx->pc = 0x80A1DEE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DEE4u)) return;
    // 80A1DEE4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80A1DEE8:
    ctx->pc = 0x80A1DEE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DEE8u)) return;
    // 80A1DEE8: li      r6, 255
    ctx->gpr[6] = (u32)(s32)(255);

label_80A1DEEC:
    ctx->pc = 0x80A1DEECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DEECu)) return;
    // 80A1DEEC: bl      0x80036A28
    {
            ctx->lr = 0x80A1DEF0u;
            ctx->pc = 0x80036A28u;
            return;
    }

label_80A1DEF0:
    ctx->pc = 0x80A1DEF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1DEF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80A1DEF0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A1DEF4:
    ctx->pc = 0x80A1DEF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DEF4u)) return;
    // 80A1DEF4: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80A1DEF8:
    ctx->pc = 0x80A1DEF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DEF8u)) return;
    // 80A1DEF8: bl      0x800365A8
    {
            ctx->lr = 0x80A1DEFCu;
            ctx->pc = 0x800365A8u;
            return;
    }

label_80A1DEFC:
    ctx->pc = 0x80A1DEFCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1DEFCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80A1DEFC: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_80A1DF00:
    ctx->pc = 0x80A1DF00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DF00u)) return;
    // 80A1DF00: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80A1DF04:
    ctx->pc = 0x80A1DF04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DF04u)) return;
    // 80A1DF04: addi    r3, r3, 20452
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(20452);

label_80A1DF08:
    ctx->pc = 0x80A1DF08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DF08u)) return;
    // 80A1DF08: bl      0x800357D4
    {
            ctx->lr = 0x80A1DF0Cu;
            ctx->pc = 0x800357D4u;
            return;
    }

label_80A1DF0C:
    ctx->pc = 0x80A1DF0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1DF0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80A1DF0C: li      r3, 97
    ctx->gpr[3] = (u32)(s32)(97);

label_80A1DF10:
    ctx->pc = 0x80A1DF10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DF10u)) return;
    // 80A1DF10: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80A1DF14:
    ctx->pc = 0x80A1DF14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DF14u)) return;
    // 80A1DF14: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80A1DF18:
    ctx->pc = 0x80A1DF18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DF18u)) return;
    // 80A1DF18: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80A1DF1C:
    ctx->pc = 0x80A1DF1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DF1Cu)) return;
    // 80A1DF1C: bl      0x8004F360
    {
            ctx->lr = 0x80A1DF20u;
            ctx->pc = 0x8004F360u;
            return;
    }

label_80A1DF20:
    ctx->pc = 0x80A1DF20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1DF20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A1DF20: lis     r3, 8192
    ctx->gpr[3] = ((u32)(s32)(8192) << 16);

label_80A1DF24:
    ctx->pc = 0x80A1DF24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DF24u)) return;
    // 80A1DF24: bl      0x8004D37C
    {
            ctx->lr = 0x80A1DF28u;
            ctx->pc = 0x8004D37Cu;
            return;
    }

label_80A1DF28:
    ctx->pc = 0x80A1DF28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1DF28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A1DF28: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A1DF2C:
    ctx->pc = 0x80A1DF2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DF2Cu)) return;
    // 80A1DF2C: bl      0x8004D394
    {
            ctx->lr = 0x80A1DF30u;
            ctx->pc = 0x8004D394u;
            return;
    }

label_80A1DF30:
    ctx->pc = 0x80A1DF30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 15u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1DF30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 15u : 1u;
    // 80A1DF30: lis     r4, -27734
    ctx->gpr[4] = ((u32)(s32)(-27734) << 16);

label_80A1DF34:
    ctx->pc = 0x80A1DF34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DF34u)) return;
    // 80A1DF34: lis     r3, -27740
    ctx->gpr[3] = ((u32)(s32)(-27740) << 16);

label_80A1DF38:
    ctx->pc = 0x80A1DF38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DF38u)) return;
    // 80A1DF38: addi    r5, r4, -9792
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-9792);

label_80A1DF3C:
    ctx->pc = 0x80A1DF3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DF3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80A1DF3C: lfs     f0, 2740(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A1DF3Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2740);
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
label_80A1DF40:
    ctx->pc = 0x80A1DF40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DF40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80A1DF40: lfs     f1, 48(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A1DF40u)) return;
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
label_80A1DF44:
    ctx->pc = 0x80A1DF44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DF44u)) return;
    // 80A1DF44: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_80A1DF48:
    ctx->pc = 0x80A1DF48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DF48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A1DF48: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1DF48u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1DF4C:
    ctx->pc = 0x80A1DF4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DF4Cu)) return;
    // 80A1DF4C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80A1DF50:
    ctx->pc = 0x80A1DF50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DF50u)) return;
    // 80A1DF50: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80A1DF54:
    ctx->pc = 0x80A1DF54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DF54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A1DF54: stfs     f1, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1DF54u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1DF58:
    ctx->pc = 0x80A1DF58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DF58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A1DF58: stfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1DF58u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1DF5C:
    ctx->pc = 0x80A1DF5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DF5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1DF5C: stfs     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1DF5Cu)) return;
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
label_80A1DF60:
    ctx->pc = 0x80A1DF60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DF60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1DF60: stfs     f1, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1DF60u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1DF64:
    ctx->pc = 0x80A1DF64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DF64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A1DF64: stfs     f0, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1DF64u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1DF68:
    ctx->pc = 0x80A1DF68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DF68u)) return;
    // 80A1DF68: bl      0x80035FF4
    {
            ctx->lr = 0x80A1DF6Cu;
            ctx->pc = 0x80035FF4u;
            return;
    }

label_80A1DF6C:
    ctx->pc = 0x80A1DF6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 18u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1DF6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 18u : 1u;
    // 80A1DF6C: lis     r3, -27734
    ctx->gpr[3] = ((u32)(s32)(-27734) << 16);

label_80A1DF70:
    ctx->pc = 0x80A1DF70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DF70u)) return;
    // 80A1DF70: lis     r4, -28618
    ctx->gpr[4] = ((u32)(s32)(-28618) << 16);

label_80A1DF74:
    ctx->pc = 0x80A1DF74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DF74u)) return;
    // 80A1DF74: addi    r31, r3, -9792
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(-9792);

label_80A1DF78:
    ctx->pc = 0x80A1DF78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DF78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80A1DF78: lwz     r5, -26724(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-26724);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1DF7C:
    ctx->pc = 0x80A1DF7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DF7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80A1DF7C: lbz     r4, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1DF80:
    ctx->pc = 0x80A1DF80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DF80u)) return;
    // 80A1DF80: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_80A1DF84:
    ctx->pc = 0x80A1DF84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DF84u)) return;
    // 80A1DF84: lis     r3, -27740
    ctx->gpr[3] = ((u32)(s32)(-27740) << 16);

label_80A1DF88:
    ctx->pc = 0x80A1DF88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DF88u)) return;
    // 80A1DF88: lis     r6, -27740
    ctx->gpr[6] = ((u32)(s32)(-27740) << 16);

label_80A1DF8C:
    ctx->pc = 0x80A1DF8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DF8Cu)) return;
    // 80A1DF8C: slw   r4, r5, r4
    {
        u32 sh = ctx->gpr[4] & 0x3Fu;
        ctx->gpr[4] = sh > 31 ? 0u : (ctx->gpr[5] << sh);
    }

label_80A1DF90:
    ctx->pc = 0x80A1DF90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DF90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A1DF90: stw     r0, 280(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(280);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1DF94:
    ctx->pc = 0x80A1DF94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DF94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A1DF94: lfd     f1, 2768(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A1DF94u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2768);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1DF98:
    ctx->pc = 0x80A1DF98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DF98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A1DF98: stw     r4, 284(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(284);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1DF9C:
    ctx->pc = 0x80A1DF9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DF9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A1DF9C: lfd     f2, 2744(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A1DF9Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2744);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1DFA0:
    ctx->pc = 0x80A1DFA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DFA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A1DFA0: lfd     f0, 280(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1DFA0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(280);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1DFA4:
    ctx->pc = 0x80A1DFA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DFA4u)) return;
    // 80A1DFA4: fsub   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80A1DFA4u)) return;
    ppc_fsub(ctx, 0, 0, 1);

label_80A1DFA8:
    ctx->pc = 0x80A1DFA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DFA8u)) return;
    // 80A1DFA8: fmul   f1, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80A1DFA8u)) return;
    ppc_fmul(ctx, 1, 2, 0);

label_80A1DFAC:
    ctx->pc = 0x80A1DFACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DFACu)) return;
    // 80A1DFAC: frsp    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x80A1DFACu)) return;
    ppc_frsp(ctx, 1, 1);

label_80A1DFB0:
    ctx->pc = 0x80A1DFB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DFB0u)) return;
    // 80A1DFB0: bl      0x80014034
    {
            ctx->lr = 0x80A1DFB4u;
            ctx->pc = 0x80014034u;
            return;
    }

label_80A1DFB4:
    ctx->pc = 0x80A1DFB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 18u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1DFB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 18u : 1u;
    // 80A1DFB4: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_80A1DFB8:
    ctx->pc = 0x80A1DFB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DFB8u)) return;
    // 80A1DFB8: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_80A1DFBC:
    ctx->pc = 0x80A1DFBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DFBCu)) return;
    // 80A1DFBC: addi    r4, r3, -26724
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-26724);

label_80A1DFC0:
    ctx->pc = 0x80A1DFC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DFC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80A1DFC0: stw     r0, 288(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(288);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1DFC4:
    ctx->pc = 0x80A1DFC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DFC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80A1DFC4: lwz     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1DFC8:
    ctx->pc = 0x80A1DFC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DFC8u)) return;
    // 80A1DFC8: lis     r3, -27740
    ctx->gpr[3] = ((u32)(s32)(-27740) << 16);

label_80A1DFCC:
    ctx->pc = 0x80A1DFCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DFCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80A1DFCC: lbz     r4, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1DFD0:
    ctx->pc = 0x80A1DFD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DFD0u)) return;
    // 80A1DFD0: lis     r6, -27740
    ctx->gpr[6] = ((u32)(s32)(-27740) << 16);

label_80A1DFD4:
    ctx->pc = 0x80A1DFD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DFD4u)) return;
    // 80A1DFD4: frsp    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x80A1DFD4u)) return;
    ppc_frsp(ctx, 31, 1);

label_80A1DFD8:
    ctx->pc = 0x80A1DFD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DFD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A1DFD8: lfd     f2, 2768(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A1DFD8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2768);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1DFDC:
    ctx->pc = 0x80A1DFDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DFDCu)) return;
    // 80A1DFDC: slw   r0, r5, r4
    {
        u32 sh = ctx->gpr[4] & 0x3Fu;
        ctx->gpr[0] = sh > 31 ? 0u : (ctx->gpr[5] << sh);
    }

label_80A1DFE0:
    ctx->pc = 0x80A1DFE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DFE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A1DFE0: lfd     f1, 2744(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A1DFE0u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2744);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1DFE4:
    ctx->pc = 0x80A1DFE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DFE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A1DFE4: stw     r0, 292(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(292);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1DFE8:
    ctx->pc = 0x80A1DFE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DFE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A1DFE8: lfd     f0, 288(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1DFE8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(288);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1DFEC:
    ctx->pc = 0x80A1DFECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DFECu)) return;
    // 80A1DFEC: fsub   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x80A1DFECu)) return;
    ppc_fsub(ctx, 0, 0, 2);

label_80A1DFF0:
    ctx->pc = 0x80A1DFF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DFF0u)) return;
    // 80A1DFF0: fmul   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80A1DFF0u)) return;
    ppc_fmul(ctx, 1, 1, 0);

label_80A1DFF4:
    ctx->pc = 0x80A1DFF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DFF4u)) return;
    // 80A1DFF4: frsp    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x80A1DFF4u)) return;
    ppc_frsp(ctx, 1, 1);

label_80A1DFF8:
    ctx->pc = 0x80A1DFF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1DFF8u)) return;
    // 80A1DFF8: bl      0x80013948
    {
            ctx->lr = 0x80A1DFFCu;
            ctx->pc = 0x80013948u;
            return;
    }

label_80A1DFFC:
    ctx->pc = 0x80A1DFFCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1DFFCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80A1DFFC: lis     r3, -27740
    ctx->gpr[3] = ((u32)(s32)(-27740) << 16);

label_80A1E000:
    ctx->pc = 0x80A1E000u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E000u)) return;
    // 80A1E000: frsp    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x80A1E000u)) return;
    ppc_frsp(ctx, 1, 1);

label_80A1E004:
    ctx->pc = 0x80A1E004u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E004u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1E004: lfs     f3, 2740(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A1E004u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2740);
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
label_80A1E008:
    ctx->pc = 0x80A1E008u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E008u)) return;
    // 80A1E008: fmr    f2, f31
    if (!ppc_fp_available_inline(ctx, 0x80A1E008u)) return;
    ctx->fpr[2] = ctx->fpr[31];

label_80A1E00C:
    ctx->pc = 0x80A1E00Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E00Cu)) return;
    // 80A1E00C: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_80A1E010:
    ctx->pc = 0x80A1E010u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E010u)) return;
    // 80A1E010: bl      0x8003A888
    {
            ctx->lr = 0x80A1E014u;
            ctx->pc = 0x8003A888u;
            return;
    }

label_80A1E014:
    ctx->pc = 0x80A1E014u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1E014u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    // 80A1E014: lis     r3, -27734
    ctx->gpr[3] = ((u32)(s32)(-27734) << 16);

label_80A1E018:
    ctx->pc = 0x80A1E018u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E018u)) return;
    // 80A1E018: lis     r4, -27740
    ctx->gpr[4] = ((u32)(s32)(-27740) << 16);

label_80A1E01C:
    ctx->pc = 0x80A1E01Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E01Cu)) return;
    // 80A1E01C: addi    r5, r3, -9792
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-9792);

label_80A1E020:
    ctx->pc = 0x80A1E020u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E020u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A1E020: lfs     f3, 2740(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A1E020u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2740);
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
label_80A1E024:
    ctx->pc = 0x80A1E024u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E024u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A1E024: lfs     f2, 52(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A1E024u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(52);
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
label_80A1E028:
    ctx->pc = 0x80A1E028u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E028u)) return;
    // 80A1E028: addi    r3, r1, 80
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(80);

label_80A1E02C:
    ctx->pc = 0x80A1E02Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E02Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A1E02C: lfs     f1, 40(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A1E02Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E030:
    ctx->pc = 0x80A1E030u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E030u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1E030: lfs     f0, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A1E030u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(44);
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
label_80A1E034:
    ctx->pc = 0x80A1E034u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E034u)) return;
    // 80A1E034: fmuls   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x80A1E034u)) return;
    ppc_fmuls(ctx, 1, 1, 2);

label_80A1E038:
    ctx->pc = 0x80A1E038u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E038u)) return;
    // 80A1E038: fmuls   f2, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x80A1E038u)) return;
    ppc_fmuls(ctx, 2, 0, 2);

label_80A1E03C:
    ctx->pc = 0x80A1E03Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E03Cu)) return;
    // 80A1E03C: bl      0x8003A8BC
    {
            ctx->lr = 0x80A1E040u;
            ctx->pc = 0x8003A8BCu;
            return;
    }

label_80A1E040:
    ctx->pc = 0x80A1E040u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1E040u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80A1E040: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_80A1E044:
    ctx->pc = 0x80A1E044u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E044u)) return;
    // 80A1E044: addi    r4, r1, 80
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(80);

label_80A1E048:
    ctx->pc = 0x80A1E048u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E048u)) return;
    // 80A1E048: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80A1E04C:
    ctx->pc = 0x80A1E04Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E04Cu)) return;
    // 80A1E04C: bl      0x8003A434
    {
            ctx->lr = 0x80A1E050u;
            ctx->pc = 0x8003A434u;
            return;
    }

label_80A1E050:
    ctx->pc = 0x80A1E050u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1E050u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80A1E050: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_80A1E054:
    ctx->pc = 0x80A1E054u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E054u)) return;
    // 80A1E054: li      r4, 33
    ctx->gpr[4] = (u32)(s32)(33);

label_80A1E058:
    ctx->pc = 0x80A1E058u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E058u)) return;
    // 80A1E058: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80A1E05C:
    ctx->pc = 0x80A1E05Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E05Cu)) return;
    // 80A1E05C: bl      0x8003768C
    {
            ctx->lr = 0x80A1E060u;
            ctx->pc = 0x8003768Cu;
            return;
    }

label_80A1E060:
    ctx->pc = 0x80A1E060u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 44u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1E060u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 44u : 1u;
    // 80A1E060: lis     r3, -27734
    ctx->gpr[3] = ((u32)(s32)(-27734) << 16);

label_80A1E064:
    ctx->pc = 0x80A1E064u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E064u)) return;
    // 80A1E064: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_80A1E068:
    ctx->pc = 0x80A1E068u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E068u)) return;
    // 80A1E068: addi    r5, r3, -9792
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-9792);

label_80A1E06C:
    ctx->pc = 0x80A1E06Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E06Cu)) return;
    // 80A1E06C: lis     r4, -27740
    ctx->gpr[4] = ((u32)(s32)(-27740) << 16);

label_80A1E070:
    ctx->pc = 0x80A1E070u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E070u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 39u : 0u;
    // 80A1E070: lfs     f1, 2740(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A1E070u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2740);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E074:
    ctx->pc = 0x80A1E074u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E074u)) return;
    // 80A1E074: lis     r3, -27740
    ctx->gpr[3] = ((u32)(s32)(-27740) << 16);

label_80A1E078:
    ctx->pc = 0x80A1E078u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E078u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 37u : 0u;
    // 80A1E078: lfs     f0, 2752(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A1E078u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2752);
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
label_80A1E07C:
    ctx->pc = 0x80A1E07Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E07Cu)) return;
    // 80A1E07C: addi    r3, r1, 176
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(176);

label_80A1E080:
    ctx->pc = 0x80A1E080u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E080u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 35u : 0u;
    // 80A1E080: lfs     f7, 16(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A1E080u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[7] = value;
        ctx->ps1[7] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E084:
    ctx->pc = 0x80A1E084u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E084u)) return;
    // 80A1E084: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80A1E088:
    ctx->pc = 0x80A1E088u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E088u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 33u : 0u;
    // 80A1E088: lfs     f6, 20(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A1E088u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20);
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
label_80A1E08C:
    ctx->pc = 0x80A1E08Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E08Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 32u : 0u;
    // 80A1E08C: lfs     f11, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A1E08Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[11] = value;
        ctx->ps1[11] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E090:
    ctx->pc = 0x80A1E090u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E090u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 31u : 0u;
    // 80A1E090: lfs     f10, 4(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A1E090u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
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
label_80A1E094:
    ctx->pc = 0x80A1E094u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E094u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 30u : 0u;
    // 80A1E094: lfs     f9, 8(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A1E094u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[9] = value;
        ctx->ps1[9] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E098:
    ctx->pc = 0x80A1E098u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E098u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 80A1E098: lfs     f8, 12(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A1E098u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[8] = value;
        ctx->ps1[8] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E09C:
    ctx->pc = 0x80A1E09Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E09Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80A1E09C: lfs     f5, 24(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A1E09Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(24);
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
label_80A1E0A0:
    ctx->pc = 0x80A1E0A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E0A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 80A1E0A0: lfs     f4, 28(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A1E0A0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(28);
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
label_80A1E0A4:
    ctx->pc = 0x80A1E0A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E0A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 80A1E0A4: lfs     f3, 32(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A1E0A4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(32);
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
label_80A1E0A8:
    ctx->pc = 0x80A1E0A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E0A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80A1E0A8: lfs     f2, 36(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A1E0A8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(36);
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
label_80A1E0AC:
    ctx->pc = 0x80A1E0ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E0ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80A1E0AC: stfs     f11, 176(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1E0ACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[11]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E0B0:
    ctx->pc = 0x80A1E0B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E0B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80A1E0B0: stfs     f10, 200(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1E0B0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[10]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E0B4:
    ctx->pc = 0x80A1E0B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E0B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80A1E0B4: stfs     f9, 224(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1E0B4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(224);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[9]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E0B8:
    ctx->pc = 0x80A1E0B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E0B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80A1E0B8: stfs     f8, 248(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1E0B8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(248);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[8]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E0BC:
    ctx->pc = 0x80A1E0BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E0BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80A1E0BC: stfs     f7, 228(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1E0BCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(228);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[7]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E0C0:
    ctx->pc = 0x80A1E0C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E0C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80A1E0C0: stfs     f7, 180(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1E0C0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[7]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E0C4:
    ctx->pc = 0x80A1E0C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E0C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80A1E0C4: stfs     f6, 252(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1E0C4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(252);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[6]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E0C8:
    ctx->pc = 0x80A1E0C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E0C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80A1E0C8: stfs     f6, 204(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1E0C8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(204);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[6]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E0CC:
    ctx->pc = 0x80A1E0CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E0CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80A1E0CC: stfs     f5, 184(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1E0CCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E0D0:
    ctx->pc = 0x80A1E0D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E0D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80A1E0D0: stfs     f4, 208(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1E0D0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E0D4:
    ctx->pc = 0x80A1E0D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E0D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80A1E0D4: stfs     f3, 232(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1E0D4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(232);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E0D8:
    ctx->pc = 0x80A1E0D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E0D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80A1E0D8: stfs     f2, 256(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1E0D8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(256);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E0DC:
    ctx->pc = 0x80A1E0DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E0DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80A1E0DC: stfs     f1, 240(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1E0DCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(240);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E0E0:
    ctx->pc = 0x80A1E0E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E0E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80A1E0E0: stfs     f1, 192(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1E0E0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(192);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E0E4:
    ctx->pc = 0x80A1E0E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E0E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80A1E0E4: stfs     f1, 212(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1E0E4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(212);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E0E8:
    ctx->pc = 0x80A1E0E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E0E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80A1E0E8: stfs     f1, 188(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1E0E8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(188);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E0EC:
    ctx->pc = 0x80A1E0ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E0ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A1E0EC: stfs     f0, 264(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1E0ECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(264);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E0F0:
    ctx->pc = 0x80A1E0F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E0F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A1E0F0: stfs     f0, 216(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1E0F0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E0F4:
    ctx->pc = 0x80A1E0F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E0F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A1E0F4: stfs     f0, 260(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1E0F4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(260);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E0F8:
    ctx->pc = 0x80A1E0F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E0F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A1E0F8: stfs     f0, 236(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1E0F8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(236);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E0FC:
    ctx->pc = 0x80A1E0FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E0FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A1E0FC: stw     r0, 268(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(268);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E100:
    ctx->pc = 0x80A1E100u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E100u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1E100: stw     r0, 244(r1)
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
label_80A1E104:
    ctx->pc = 0x80A1E104u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E104u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1E104: stw     r0, 220(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(220);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E108:
    ctx->pc = 0x80A1E108u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E108u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A1E108: stw     r0, 196(r1)
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
label_80A1E10C:
    ctx->pc = 0x80A1E10Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E10Cu)) return;
    // 80A1E10C: bl      0x80050070
    {
            ctx->lr = 0x80A1E110u;
            ctx->pc = 0x80050070u;
            return;
    }

label_80A1E110:
    ctx->pc = 0x80A1E110u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1E110u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A1E110: lis     r3, 8192
    ctx->gpr[3] = ((u32)(s32)(8192) << 16);

label_80A1E114:
    ctx->pc = 0x80A1E114u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E114u)) return;
    // 80A1E114: bl      0x8004D37C
    {
            ctx->lr = 0x80A1E118u;
            ctx->pc = 0x8004D37Cu;
            return;
    }

label_80A1E118:
    ctx->pc = 0x80A1E118u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1E118u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A1E118: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A1E11C:
    ctx->pc = 0x80A1E11Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E11Cu)) return;
    // 80A1E11C: bl      0x8004D394
    {
            ctx->lr = 0x80A1E120u;
            ctx->pc = 0x8004D394u;
            return;
    }

label_80A1E120:
    ctx->pc = 0x80A1E120u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1E120u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A1E120: bl      0x80050050
    {
            ctx->lr = 0x80A1E124u;
            ctx->pc = 0x80050050u;
            return;
    }

label_80A1E124:
    ctx->pc = 0x80A1E124u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1E124u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A1E124: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A1E128:
    ctx->pc = 0x80A1E128u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E128u)) return;
    // 80A1E128: bl      0x8003640C
    {
            ctx->lr = 0x80A1E12Cu;
            ctx->pc = 0x8003640Cu;
            return;
    }

label_80A1E12C:
    ctx->pc = 0x80A1E12Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1E12Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A1E12C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80A1E130:
    ctx->pc = 0x80A1E130u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E130u)) return;
    // 80A1E130: bl      0x800363E4
    {
            ctx->lr = 0x80A1E134u;
            ctx->pc = 0x800363E4u;
            return;
    }

label_80A1E134:
    ctx->pc = 0x80A1E134u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1E134u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80A1E134: bl      0x8004B824
    {
            ctx->lr = 0x80A1E138u;
            ctx->pc = 0x8004B824u;
            return;
    }

label_80A1E138:
    ctx->pc = 0x80A1E138u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1E138u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A1E138: lis     r3, 8192
    ctx->gpr[3] = ((u32)(s32)(8192) << 16);

label_80A1E13C:
    ctx->pc = 0x80A1E13Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E13Cu)) return;
    // 80A1E13C: bl      0x8004D37C
    {
            ctx->lr = 0x80A1E140u;
            ctx->pc = 0x8004D37Cu;
            return;
    }

label_80A1E140:
    ctx->pc = 0x80A1E140u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1E140u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80A1E140: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80A1E144:
    ctx->pc = 0x80A1E144u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E144u)) return;
    // 80A1E144: bl      0x8004D394
    {
            ctx->lr = 0x80A1E148u;
            ctx->pc = 0x8004D394u;
            return;
    }

label_80A1E148:
    ctx->pc = 0x80A1E148u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1E148u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A1E148: psq_l   f31, 312(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80A1E148u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(312);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80A1E148u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E14C:
    ctx->pc = 0x80A1E14Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E14Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A1E14C: lwz     r0, 324(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(324);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E150:
    ctx->pc = 0x80A1E150u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E150u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A1E150: lfd     f31, 304(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1E150u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(304);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E154:
    ctx->pc = 0x80A1E154u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E154u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A1E154: lwz     r31, 300(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(300);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E158:
    ctx->pc = 0x80A1E158u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80A1E158u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1E158: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E15C:
    ctx->pc = 0x80A1E15Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E15Cu)) return;
    // 80A1E15C: addi    r1, r1, 320
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(320);

label_80A1E160:
    ctx->pc = 0x80A1E160u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E160u)) return;
    // 80A1E160: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80A1C6E0;
        }
    }

label_80A1E164:
    ctx->pc = 0x80A1E164u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 65u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1E164u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 65u : 1u;
    // 80A1E164: lis     r6, -27740
    ctx->gpr[6] = ((u32)(s32)(-27740) << 16);

label_80A1E168:
    ctx->pc = 0x80A1E168u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E168u)) return;
    // 80A1E168: lis     r5, -27740
    ctx->gpr[5] = ((u32)(s32)(-27740) << 16);

label_80A1E16C:
    ctx->pc = 0x80A1E16Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E16Cu)) return;
    // 80A1E16C: lis     r4, -27740
    ctx->gpr[4] = ((u32)(s32)(-27740) << 16);

label_80A1E170:
    ctx->pc = 0x80A1E170u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E170u)) return;
    // 80A1E170: lis     r3, -27740
    ctx->gpr[3] = ((u32)(s32)(-27740) << 16);

label_80A1E174:
    ctx->pc = 0x80A1E174u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E174u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 60u : 0u;
    // 80A1E174: lfs     f8, 2780(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A1E174u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2780);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[8] = value;
        ctx->ps1[8] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E178:
    ctx->pc = 0x80A1E178u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E178u)) return;
    // 80A1E178: lis     r7, -27740
    ctx->gpr[7] = ((u32)(s32)(-27740) << 16);

label_80A1E17C:
    ctx->pc = 0x80A1E17Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E17Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 58u : 0u;
    // 80A1E17C: lfs     f7, 2784(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A1E17Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(2784);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[7] = value;
        ctx->ps1[7] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E180:
    ctx->pc = 0x80A1E180u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E180u)) return;
    // 80A1E180: addi    r9, r7, 2776
    ctx->gpr[9] = ctx->gpr[7] + (u32)(s32)(2776);

label_80A1E184:
    ctx->pc = 0x80A1E184u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E184u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 56u : 0u;
    // 80A1E184: lfs     f6, 2788(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A1E184u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2788);
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
label_80A1E188:
    ctx->pc = 0x80A1E188u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E188u)) return;
    // 80A1E188: lis     r6, -27740
    ctx->gpr[6] = ((u32)(s32)(-27740) << 16);

label_80A1E18C:
    ctx->pc = 0x80A1E18Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E18Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 54u : 0u;
    // 80A1E18C: lfs     f5, 2792(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A1E18Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2792);
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
label_80A1E190:
    ctx->pc = 0x80A1E190u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E190u)) return;
    // 80A1E190: fsubs   f0, f7, f8
    if (!ppc_fp_available_inline(ctx, 0x80A1E190u)) return;
    ppc_fsubs(ctx, 0, 7, 8);

label_80A1E194:
    ctx->pc = 0x80A1E194u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E194u)) return;
    // 80A1E194: lis     r5, -27740
    ctx->gpr[5] = ((u32)(s32)(-27740) << 16);

label_80A1E198:
    ctx->pc = 0x80A1E198u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E198u)) return;
    // 80A1E198: lis     r7, -27734
    ctx->gpr[7] = ((u32)(s32)(-27734) << 16);

label_80A1E19C:
    ctx->pc = 0x80A1E19Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E19Cu)) return;
    // 80A1E19C: fsubs   f1, f5, f6
    if (!ppc_fp_available_inline(ctx, 0x80A1E19Cu)) return;
    ppc_fsubs(ctx, 1, 5, 6);

label_80A1E1A0:
    ctx->pc = 0x80A1E1A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E1A0u)) return;
    // 80A1E1A0: addi    r7, r7, -9792
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-9792);

label_80A1E1A4:
    ctx->pc = 0x80A1E1A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E1A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 48u : 0u;
    // 80A1E1A4: lfs     f4, 2796(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A1E1A4u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2796);
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
label_80A1E1A8:
    ctx->pc = 0x80A1E1A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E1A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 47u : 0u;
    // 80A1E1A8: lfs     f3, 2752(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A1E1A8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(2752);
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
label_80A1E1AC:
    ctx->pc = 0x80A1E1ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E1ACu)) return;
    // 80A1E1AC: lis     r11, -32606
    ctx->gpr[11] = ((u32)(s32)(-32606) << 16);

label_80A1E1B0:
    ctx->pc = 0x80A1E1B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 17u, 0x80A1E1B0u)) return;
    // 80A1E1B0: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80A1E1B0u)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_80A1E1B4:
    ctx->pc = 0x80A1E1B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E1B4u)) return;
    // 80A1E1B4: lis     r4, -27740
    ctx->gpr[4] = ((u32)(s32)(-27740) << 16);

label_80A1E1B8:
    ctx->pc = 0x80A1E1B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E1B8u)) return;
    // 80A1E1B8: li      r0, 7
    ctx->gpr[0] = (u32)(s32)(7);

label_80A1E1BC:
    ctx->pc = 0x80A1E1BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E1BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 80A1E1BC: lfs     f1, 2800(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A1E1BCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2800);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E1C0:
    ctx->pc = 0x80A1E1C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E1C0u)) return;
    // 80A1E1C0: lis     r3, -27740
    ctx->gpr[3] = ((u32)(s32)(-27740) << 16);

label_80A1E1C4:
    ctx->pc = 0x80A1E1C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E1C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80A1E1C4: lfs     f9, 0(r9)
    if (!ppc_fp_available_inline(ctx, 0x80A1E1C4u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[9] = value;
        ctx->ps1[9] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E1C8:
    ctx->pc = 0x80A1E1C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E1C8u)) return;
    // 80A1E1C8: fabs    f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80A1E1C8u)) return;
    ctx->fpr[2] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[0]) & 0x7FFFFFFFFFFFFFFFull);

label_80A1E1CC:
    ctx->pc = 0x80A1E1CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E1CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80A1E1CC: lfs     f0, 2804(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A1E1CCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2804);
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
label_80A1E1D0:
    ctx->pc = 0x80A1E1D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E1D0u)) return;
    // 80A1E1D0: lis     r8, -28618
    ctx->gpr[8] = ((u32)(s32)(-28618) << 16);

label_80A1E1D4:
    ctx->pc = 0x80A1E1D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E1D4u)) return;
    // 80A1E1D4: lis     r10, -28618
    ctx->gpr[10] = ((u32)(s32)(-28618) << 16);

label_80A1E1D8:
    ctx->pc = 0x80A1E1D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E1D8u)) return;
    // 80A1E1D8: addi    r5, r11, -8872
    ctx->gpr[5] = ctx->gpr[11] + (u32)(s32)(-8872);

label_80A1E1DC:
    ctx->pc = 0x80A1E1DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E1DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80A1E1DC: stfs     f9, 20444(r8)
    if (!ppc_fp_available_inline(ctx, 0x80A1E1DCu)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(20444);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[9]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E1E0:
    ctx->pc = 0x80A1E1E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E1E0u)) return;
    // 80A1E1E0: frsp    f2, f2
    if (!ppc_fp_available_inline(ctx, 0x80A1E1E0u)) return;
    ppc_frsp(ctx, 2, 2);

label_80A1E1E4:
    ctx->pc = 0x80A1E1E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E1E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80A1E1E4: stw     r5, 20448(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(20448);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E1E8:
    ctx->pc = 0x80A1E1E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E1E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80A1E1E8: stfs     f8, 4(r7)
    if (!ppc_fp_available_inline(ctx, 0x80A1E1E8u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[8]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E1EC:
    ctx->pc = 0x80A1E1ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E1ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80A1E1EC: stfs     f8, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x80A1E1ECu)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[8]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E1F0:
    ctx->pc = 0x80A1E1F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E1F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80A1E1F0: stfs     f7, 12(r7)
    if (!ppc_fp_available_inline(ctx, 0x80A1E1F0u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[7]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E1F4:
    ctx->pc = 0x80A1E1F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E1F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80A1E1F4: stfs     f7, 8(r7)
    if (!ppc_fp_available_inline(ctx, 0x80A1E1F4u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[7]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E1F8:
    ctx->pc = 0x80A1E1F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E1F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80A1E1F8: stfs     f6, 32(r7)
    if (!ppc_fp_available_inline(ctx, 0x80A1E1F8u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[6]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E1FC:
    ctx->pc = 0x80A1E1FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E1FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80A1E1FC: stfs     f6, 24(r7)
    if (!ppc_fp_available_inline(ctx, 0x80A1E1FCu)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[6]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E200:
    ctx->pc = 0x80A1E200u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E200u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80A1E200: stfs     f5, 36(r7)
    if (!ppc_fp_available_inline(ctx, 0x80A1E200u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E204:
    ctx->pc = 0x80A1E204u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E204u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A1E204: stfs     f5, 28(r7)
    if (!ppc_fp_available_inline(ctx, 0x80A1E204u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E208:
    ctx->pc = 0x80A1E208u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E208u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A1E208: stfs     f4, 20(r7)
    if (!ppc_fp_available_inline(ctx, 0x80A1E208u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E20C:
    ctx->pc = 0x80A1E20Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E20Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A1E20C: stfs     f4, 16(r7)
    if (!ppc_fp_available_inline(ctx, 0x80A1E20Cu)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E210:
    ctx->pc = 0x80A1E210u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E210u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A1E210: stfs     f3, 40(r7)
    if (!ppc_fp_available_inline(ctx, 0x80A1E210u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E214:
    ctx->pc = 0x80A1E214u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E214u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A1E214: stfs     f2, 44(r7)
    if (!ppc_fp_available_inline(ctx, 0x80A1E214u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E218:
    ctx->pc = 0x80A1E218u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E218u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1E218: stfs     f1, 48(r7)
    if (!ppc_fp_available_inline(ctx, 0x80A1E218u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E21C:
    ctx->pc = 0x80A1E21Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E21Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1E21C: stfs     f0, 52(r7)
    if (!ppc_fp_available_inline(ctx, 0x80A1E21Cu)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E220:
    ctx->pc = 0x80A1E220u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E220u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A1E220: stb     r0, 56(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(56);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E224:
    ctx->pc = 0x80A1E224u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E224u)) return;
    // 80A1E224: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80A1C6E0;
        }
    }

label_80A1E228:
    ctx->pc = 0x80A1E228u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 20u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1E228u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 20u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80A1E228: stwu     r1, -272(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-272);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E22C:
    ctx->pc = 0x80A1E22Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E22Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80A1E22C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E230:
    ctx->pc = 0x80A1E230u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E230u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80A1E230: stw     r0, 276(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(276);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E234:
    ctx->pc = 0x80A1E234u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E234u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80A1E234: stfd     f31, 256(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1E234u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(256);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E238:
    ctx->pc = 0x80A1E238u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E238u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80A1E238: psq_st   f31, 264(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80A1E238u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(264);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80A1E238u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E23C:
    ctx->pc = 0x80A1E23Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E23Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80A1E23C: stw     r31, 252(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(252);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E240:
    ctx->pc = 0x80A1E240u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E240u)) return;
    // 80A1E240: lis     r4, -27740
    ctx->gpr[4] = ((u32)(s32)(-27740) << 16);

label_80A1E244:
    ctx->pc = 0x80A1E244u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E244u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80A1E244: lfs     f1, 48(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A1E244u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E248:
    ctx->pc = 0x80A1E248u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E248u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80A1E248: lfs     f0, 2740(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A1E248u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2740);
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
label_80A1E24C:
    ctx->pc = 0x80A1E24Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E24Cu)) return;
    // 80A1E24C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80A1E250:
    ctx->pc = 0x80A1E250u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E250u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80A1E250: stfs     f1, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1E250u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E254:
    ctx->pc = 0x80A1E254u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E254u)) return;
    // 80A1E254: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_80A1E258:
    ctx->pc = 0x80A1E258u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E258u)) return;
    // 80A1E258: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80A1E25C:
    ctx->pc = 0x80A1E25Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E25Cu)) return;
    // 80A1E25C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80A1E260:
    ctx->pc = 0x80A1E260u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E260u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A1E260: stfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1E260u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E264:
    ctx->pc = 0x80A1E264u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E264u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A1E264: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1E264u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E268:
    ctx->pc = 0x80A1E268u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E268u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1E268: stfs     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1E268u)) return;
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
label_80A1E26C:
    ctx->pc = 0x80A1E26Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E26Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1E26C: stfs     f1, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1E26Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E270:
    ctx->pc = 0x80A1E270u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E270u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A1E270: stfs     f0, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1E270u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E274:
    ctx->pc = 0x80A1E274u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E274u)) return;
    // 80A1E274: bl      0x80035FF4
    {
            ctx->lr = 0x80A1E278u;
            ctx->pc = 0x80035FF4u;
            return;
    }

label_80A1E278:
    ctx->pc = 0x80A1E278u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 17u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1E278u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 17u : 1u;
    // 80A1E278: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_80A1E27C:
    ctx->pc = 0x80A1E27Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E27Cu)) return;
    // 80A1E27C: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_80A1E280:
    ctx->pc = 0x80A1E280u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E280u)) return;
    // 80A1E280: addi    r4, r3, -26724
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-26724);

label_80A1E284:
    ctx->pc = 0x80A1E284u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E284u)) return;
    // 80A1E284: lis     r6, -27740
    ctx->gpr[6] = ((u32)(s32)(-27740) << 16);

label_80A1E288:
    ctx->pc = 0x80A1E288u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E288u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80A1E288: lwz     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E28C:
    ctx->pc = 0x80A1E28Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E28Cu)) return;
    // 80A1E28C: lis     r3, -27740
    ctx->gpr[3] = ((u32)(s32)(-27740) << 16);

label_80A1E290:
    ctx->pc = 0x80A1E290u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E290u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80A1E290: lbz     r4, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E294:
    ctx->pc = 0x80A1E294u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E294u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80A1E294: stw     r0, 224(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(224);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E298:
    ctx->pc = 0x80A1E298u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E298u)) return;
    // 80A1E298: slw   r0, r5, r4
    {
        u32 sh = ctx->gpr[4] & 0x3Fu;
        ctx->gpr[0] = sh > 31 ? 0u : (ctx->gpr[5] << sh);
    }

label_80A1E29C:
    ctx->pc = 0x80A1E29Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E29Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A1E29C: lfd     f1, 2768(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A1E29Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2768);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E2A0:
    ctx->pc = 0x80A1E2A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E2A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A1E2A0: stw     r0, 228(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(228);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E2A4:
    ctx->pc = 0x80A1E2A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E2A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A1E2A4: lfd     f2, 2744(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A1E2A4u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2744);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E2A8:
    ctx->pc = 0x80A1E2A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E2A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A1E2A8: lfd     f0, 224(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1E2A8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(224);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E2AC:
    ctx->pc = 0x80A1E2ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E2ACu)) return;
    // 80A1E2AC: fsub   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80A1E2ACu)) return;
    ppc_fsub(ctx, 0, 0, 1);

label_80A1E2B0:
    ctx->pc = 0x80A1E2B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E2B0u)) return;
    // 80A1E2B0: fmul   f1, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80A1E2B0u)) return;
    ppc_fmul(ctx, 1, 2, 0);

label_80A1E2B4:
    ctx->pc = 0x80A1E2B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E2B4u)) return;
    // 80A1E2B4: frsp    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x80A1E2B4u)) return;
    ppc_frsp(ctx, 1, 1);

label_80A1E2B8:
    ctx->pc = 0x80A1E2B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E2B8u)) return;
    // 80A1E2B8: bl      0x80014034
    {
            ctx->lr = 0x80A1E2BCu;
            ctx->pc = 0x80014034u;
            return;
    }

label_80A1E2BC:
    ctx->pc = 0x80A1E2BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 18u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1E2BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 18u : 1u;
    // 80A1E2BC: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_80A1E2C0:
    ctx->pc = 0x80A1E2C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E2C0u)) return;
    // 80A1E2C0: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_80A1E2C4:
    ctx->pc = 0x80A1E2C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E2C4u)) return;
    // 80A1E2C4: addi    r4, r3, -26724
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-26724);

label_80A1E2C8:
    ctx->pc = 0x80A1E2C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E2C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80A1E2C8: stw     r0, 232(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(232);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E2CC:
    ctx->pc = 0x80A1E2CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E2CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80A1E2CC: lwz     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E2D0:
    ctx->pc = 0x80A1E2D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E2D0u)) return;
    // 80A1E2D0: lis     r3, -27740
    ctx->gpr[3] = ((u32)(s32)(-27740) << 16);

label_80A1E2D4:
    ctx->pc = 0x80A1E2D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E2D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80A1E2D4: lbz     r4, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E2D8:
    ctx->pc = 0x80A1E2D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E2D8u)) return;
    // 80A1E2D8: lis     r6, -27740
    ctx->gpr[6] = ((u32)(s32)(-27740) << 16);

label_80A1E2DC:
    ctx->pc = 0x80A1E2DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E2DCu)) return;
    // 80A1E2DC: frsp    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x80A1E2DCu)) return;
    ppc_frsp(ctx, 31, 1);

label_80A1E2E0:
    ctx->pc = 0x80A1E2E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E2E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A1E2E0: lfd     f2, 2768(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A1E2E0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2768);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E2E4:
    ctx->pc = 0x80A1E2E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E2E4u)) return;
    // 80A1E2E4: slw   r0, r5, r4
    {
        u32 sh = ctx->gpr[4] & 0x3Fu;
        ctx->gpr[0] = sh > 31 ? 0u : (ctx->gpr[5] << sh);
    }

label_80A1E2E8:
    ctx->pc = 0x80A1E2E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E2E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A1E2E8: lfd     f1, 2744(r6)
    if (!ppc_fp_available_inline(ctx, 0x80A1E2E8u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2744);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E2EC:
    ctx->pc = 0x80A1E2ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E2ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A1E2EC: stw     r0, 236(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(236);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E2F0:
    ctx->pc = 0x80A1E2F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E2F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A1E2F0: lfd     f0, 232(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1E2F0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(232);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E2F4:
    ctx->pc = 0x80A1E2F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E2F4u)) return;
    // 80A1E2F4: fsub   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x80A1E2F4u)) return;
    ppc_fsub(ctx, 0, 0, 2);

label_80A1E2F8:
    ctx->pc = 0x80A1E2F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E2F8u)) return;
    // 80A1E2F8: fmul   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80A1E2F8u)) return;
    ppc_fmul(ctx, 1, 1, 0);

label_80A1E2FC:
    ctx->pc = 0x80A1E2FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E2FCu)) return;
    // 80A1E2FC: frsp    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x80A1E2FCu)) return;
    ppc_frsp(ctx, 1, 1);

label_80A1E300:
    ctx->pc = 0x80A1E300u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E300u)) return;
    // 80A1E300: bl      0x80013948
    {
            ctx->lr = 0x80A1E304u;
            ctx->pc = 0x80013948u;
            return;
    }

label_80A1E304:
    ctx->pc = 0x80A1E304u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1E304u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80A1E304: lis     r3, -27740
    ctx->gpr[3] = ((u32)(s32)(-27740) << 16);

label_80A1E308:
    ctx->pc = 0x80A1E308u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E308u)) return;
    // 80A1E308: frsp    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x80A1E308u)) return;
    ppc_frsp(ctx, 1, 1);

label_80A1E30C:
    ctx->pc = 0x80A1E30Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E30Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1E30C: lfs     f3, 2740(r3)
    if (!ppc_fp_available_inline(ctx, 0x80A1E30Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2740);
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
label_80A1E310:
    ctx->pc = 0x80A1E310u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E310u)) return;
    // 80A1E310: fmr    f2, f31
    if (!ppc_fp_available_inline(ctx, 0x80A1E310u)) return;
    ctx->fpr[2] = ctx->fpr[31];

label_80A1E314:
    ctx->pc = 0x80A1E314u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E314u)) return;
    // 80A1E314: addi    r3, r1, 80
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(80);

label_80A1E318:
    ctx->pc = 0x80A1E318u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E318u)) return;
    // 80A1E318: bl      0x8003A888
    {
            ctx->lr = 0x80A1E31Cu;
            ctx->pc = 0x8003A888u;
            return;
    }

label_80A1E31C:
    ctx->pc = 0x80A1E31Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1E31Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80A1E31C: lfs     f2, 52(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A1E31Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
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
label_80A1E320:
    ctx->pc = 0x80A1E320u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E320u)) return;
    // 80A1E320: lis     r3, -27740
    ctx->gpr[3] = ((u32)(s32)(-27740) << 16);

label_80A1E324:
    ctx->pc = 0x80A1E324u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E324u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A1E324: lfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A1E324u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E328:
    ctx->pc = 0x80A1E328u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E328u)) return;
    // 80A1E328: addi    r4, r3, 2740
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(2740);

label_80A1E32C:
    ctx->pc = 0x80A1E32Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E32Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A1E32C: lfs     f0, 44(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A1E32Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
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
label_80A1E330:
    ctx->pc = 0x80A1E330u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E330u)) return;
    // 80A1E330: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_80A1E334:
    ctx->pc = 0x80A1E334u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E334u)) return;
    // 80A1E334: fmuls   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x80A1E334u)) return;
    ppc_fmuls(ctx, 1, 1, 2);

label_80A1E338:
    ctx->pc = 0x80A1E338u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E338u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1E338: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A1E338u)) return;
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
label_80A1E33C:
    ctx->pc = 0x80A1E33Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E33Cu)) return;
    // 80A1E33C: fmuls   f2, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x80A1E33Cu)) return;
    ppc_fmuls(ctx, 2, 0, 2);

label_80A1E340:
    ctx->pc = 0x80A1E340u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E340u)) return;
    // 80A1E340: bl      0x8003A8BC
    {
            ctx->lr = 0x80A1E344u;
            ctx->pc = 0x8003A8BCu;
            return;
    }

label_80A1E344:
    ctx->pc = 0x80A1E344u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1E344u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80A1E344: addi    r3, r1, 80
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(80);

label_80A1E348:
    ctx->pc = 0x80A1E348u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E348u)) return;
    // 80A1E348: addi    r4, r1, 32
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(32);

label_80A1E34C:
    ctx->pc = 0x80A1E34Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E34Cu)) return;
    // 80A1E34C: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80A1E350:
    ctx->pc = 0x80A1E350u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E350u)) return;
    // 80A1E350: bl      0x8003A434
    {
            ctx->lr = 0x80A1E354u;
            ctx->pc = 0x8003A434u;
            return;
    }

label_80A1E354:
    ctx->pc = 0x80A1E354u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1E354u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80A1E354: addi    r3, r1, 80
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(80);

label_80A1E358:
    ctx->pc = 0x80A1E358u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E358u)) return;
    // 80A1E358: li      r4, 33
    ctx->gpr[4] = (u32)(s32)(33);

label_80A1E35C:
    ctx->pc = 0x80A1E35Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E35Cu)) return;
    // 80A1E35C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80A1E360:
    ctx->pc = 0x80A1E360u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E360u)) return;
    // 80A1E360: bl      0x8003768C
    {
            ctx->lr = 0x80A1E364u;
            ctx->pc = 0x8003768Cu;
            return;
    }

label_80A1E364:
    ctx->pc = 0x80A1E364u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 44u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1E364u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 44u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 43u : 0u;
    // 80A1E364: lfs     f0, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A1E364u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
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
label_80A1E368:
    ctx->pc = 0x80A1E368u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E368u)) return;
    // 80A1E368: lis     r4, -27740
    ctx->gpr[4] = ((u32)(s32)(-27740) << 16);

label_80A1E36C:
    ctx->pc = 0x80A1E36Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E36Cu)) return;
    // 80A1E36C: lis     r3, -27740
    ctx->gpr[3] = ((u32)(s32)(-27740) << 16);

label_80A1E370:
    ctx->pc = 0x80A1E370u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E370u)) return;
    // 80A1E370: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_80A1E374:
    ctx->pc = 0x80A1E374u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E374u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 39u : 0u;
    // 80A1E374: stfs     f0, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1E374u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E378:
    ctx->pc = 0x80A1E378u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E378u)) return;
    // 80A1E378: addi    r5, r4, 2740
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(2740);

label_80A1E37C:
    ctx->pc = 0x80A1E37Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E37Cu)) return;
    // 80A1E37C: addi    r4, r3, 2752
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(2752);

label_80A1E380:
    ctx->pc = 0x80A1E380u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E380u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 36u : 0u;
    // 80A1E380: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80A1E380u)) return;
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
label_80A1E384:
    ctx->pc = 0x80A1E384u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E384u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 35u : 0u;
    // 80A1E384: lfs     f2, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A1E384u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
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
label_80A1E388:
    ctx->pc = 0x80A1E388u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E388u)) return;
    // 80A1E388: addi    r3, r1, 128
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(128);

label_80A1E38C:
    ctx->pc = 0x80A1E38Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E38Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 33u : 0u;
    // 80A1E38C: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80A1E38Cu)) return;
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
label_80A1E390:
    ctx->pc = 0x80A1E390u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E390u)) return;
    // 80A1E390: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80A1E394:
    ctx->pc = 0x80A1E394u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E394u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 31u : 0u;
    // 80A1E394: stfs     f2, 152(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1E394u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E398:
    ctx->pc = 0x80A1E398u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E398u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 30u : 0u;
    // 80A1E398: lfs     f2, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A1E398u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
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
label_80A1E39C:
    ctx->pc = 0x80A1E39Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E39Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 80A1E39C: stfs     f2, 176(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1E39Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E3A0:
    ctx->pc = 0x80A1E3A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E3A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80A1E3A0: lfs     f2, 12(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A1E3A0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
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
label_80A1E3A4:
    ctx->pc = 0x80A1E3A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E3A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 80A1E3A4: stfs     f2, 200(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1E3A4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E3A8:
    ctx->pc = 0x80A1E3A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E3A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 80A1E3A8: lfs     f2, 16(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A1E3A8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
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
label_80A1E3AC:
    ctx->pc = 0x80A1E3ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E3ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80A1E3AC: stfs     f2, 180(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1E3ACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E3B0:
    ctx->pc = 0x80A1E3B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E3B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80A1E3B0: stfs     f2, 132(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1E3B0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E3B4:
    ctx->pc = 0x80A1E3B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E3B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80A1E3B4: lfs     f2, 20(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A1E3B4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
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
label_80A1E3B8:
    ctx->pc = 0x80A1E3B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E3B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80A1E3B8: stfs     f2, 204(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1E3B8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(204);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E3BC:
    ctx->pc = 0x80A1E3BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E3BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80A1E3BC: stfs     f2, 156(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1E3BCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(156);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E3C0:
    ctx->pc = 0x80A1E3C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E3C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80A1E3C0: lfs     f2, 24(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A1E3C0u)) return;
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
label_80A1E3C4:
    ctx->pc = 0x80A1E3C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E3C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80A1E3C4: stfs     f2, 136(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1E3C4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E3C8:
    ctx->pc = 0x80A1E3C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E3C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80A1E3C8: lfs     f2, 28(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A1E3C8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
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
label_80A1E3CC:
    ctx->pc = 0x80A1E3CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E3CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80A1E3CC: stfs     f2, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1E3CCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E3D0:
    ctx->pc = 0x80A1E3D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E3D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80A1E3D0: lfs     f2, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A1E3D0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
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
label_80A1E3D4:
    ctx->pc = 0x80A1E3D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E3D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80A1E3D4: stfs     f2, 184(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1E3D4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E3D8:
    ctx->pc = 0x80A1E3D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E3D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80A1E3D8: lfs     f2, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x80A1E3D8u)) return;
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
label_80A1E3DC:
    ctx->pc = 0x80A1E3DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E3DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80A1E3DC: stfs     f2, 208(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1E3DCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E3E0:
    ctx->pc = 0x80A1E3E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E3E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80A1E3E0: stfs     f1, 192(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1E3E0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(192);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E3E4:
    ctx->pc = 0x80A1E3E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E3E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80A1E3E4: stfs     f1, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1E3E4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E3E8:
    ctx->pc = 0x80A1E3E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E3E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80A1E3E8: stfs     f1, 164(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1E3E8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(164);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E3EC:
    ctx->pc = 0x80A1E3ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E3ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80A1E3EC: stfs     f1, 140(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1E3ECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E3F0:
    ctx->pc = 0x80A1E3F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E3F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80A1E3F0: stfs     f0, 216(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1E3F0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E3F4:
    ctx->pc = 0x80A1E3F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E3F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A1E3F4: stfs     f0, 168(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1E3F4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E3F8:
    ctx->pc = 0x80A1E3F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E3F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A1E3F8: stfs     f0, 212(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1E3F8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(212);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E3FC:
    ctx->pc = 0x80A1E3FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E3FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A1E3FC: stfs     f0, 188(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1E3FCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(188);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E400:
    ctx->pc = 0x80A1E400u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E400u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A1E400: stw     r0, 220(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(220);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E404:
    ctx->pc = 0x80A1E404u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E404u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80A1E404: stw     r0, 196(r1)
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
label_80A1E408:
    ctx->pc = 0x80A1E408u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E408u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1E408: stw     r0, 172(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(172);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E40C:
    ctx->pc = 0x80A1E40Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E40Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80A1E40C: stw     r0, 148(r1)
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
label_80A1E410:
    ctx->pc = 0x80A1E410u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E410u)) return;
    // 80A1E410: bl      0x80050070
    {
            ctx->lr = 0x80A1E414u;
            ctx->pc = 0x80050070u;
            return;
    }

label_80A1E414:
    ctx->pc = 0x80A1E414u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80A1E414u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80A1E414: psq_l   f31, 264(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80A1E414u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(264);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80A1E414u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E418:
    ctx->pc = 0x80A1E418u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E418u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80A1E418: lwz     r0, 276(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(276);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E41C:
    ctx->pc = 0x80A1E41Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E41Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80A1E41C: lfd     f31, 256(r1)
    if (!ppc_fp_available_inline(ctx, 0x80A1E41Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(256);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E420:
    ctx->pc = 0x80A1E420u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E420u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80A1E420: lwz     r31, 252(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(252);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E424:
    ctx->pc = 0x80A1E424u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80A1E424u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80A1E424: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80A1E428:
    ctx->pc = 0x80A1E428u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E428u)) return;
    // 80A1E428: addi    r1, r1, 272
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(272);

label_80A1E42C:
    ctx->pc = 0x80A1E42Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80A1E42Cu)) return;
    // 80A1E42C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80A1C6E0;
        }
    }

    ctx->pc = 0x80A1E430u;
    return;
return_dispatch_80A1C6E0:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80A1C728u: goto label_80A1C728;
    case 0x80A1C738u: goto label_80A1C738;
    case 0x80A1C818u: goto label_80A1C818;
    case 0x80A1C820u: goto label_80A1C820;
    case 0x80A1C828u: goto label_80A1C828;
    case 0x80A1C830u: goto label_80A1C830;
    case 0x80A1C838u: goto label_80A1C838;
    case 0x80A1C848u: goto label_80A1C848;
    case 0x80A1C854u: goto label_80A1C854;
    case 0x80A1C8E4u: goto label_80A1C8E4;
    case 0x80A1C8F0u: goto label_80A1C8F0;
    case 0x80A1C8FCu: goto label_80A1C8FC;
    case 0x80A1C908u: goto label_80A1C908;
    case 0x80A1C910u: goto label_80A1C910;
    case 0x80A1C91Cu: goto label_80A1C91C;
    case 0x80A1C954u: goto label_80A1C954;
    case 0x80A1C970u: goto label_80A1C970;
    case 0x80A1C97Cu: goto label_80A1C97C;
    case 0x80A1C988u: goto label_80A1C988;
    case 0x80A1C98Cu: goto label_80A1C98C;
    case 0x80A1CA20u: goto label_80A1CA20;
    case 0x80A1CA4Cu: goto label_80A1CA4C;
    case 0x80A1CA7Cu: goto label_80A1CA7C;
    case 0x80A1CD58u: goto label_80A1CD58;
    case 0x80A1CFB0u: goto label_80A1CFB0;
    case 0x80A1D01Cu: goto label_80A1D01C;
    case 0x80A1D05Cu: goto label_80A1D05C;
    case 0x80A1D0B0u: goto label_80A1D0B0;
    case 0x80A1D0BCu: goto label_80A1D0BC;
    case 0x80A1D0C8u: goto label_80A1D0C8;
    case 0x80A1D0D4u: goto label_80A1D0D4;
    case 0x80A1D0DCu: goto label_80A1D0DC;
    case 0x80A1D0E8u: goto label_80A1D0E8;
    case 0x80A1D120u: goto label_80A1D120;
    case 0x80A1D13Cu: goto label_80A1D13C;
    case 0x80A1D148u: goto label_80A1D148;
    case 0x80A1D154u: goto label_80A1D154;
    case 0x80A1D158u: goto label_80A1D158;
    case 0x80A1D198u: goto label_80A1D198;
    case 0x80A1D224u: goto label_80A1D224;
    case 0x80A1D2A4u: goto label_80A1D2A4;
    case 0x80A1D32Cu: goto label_80A1D32C;
    case 0x80A1D330u: goto label_80A1D330;
    case 0x80A1D3D8u: goto label_80A1D3D8;
    case 0x80A1D42Cu: goto label_80A1D42C;
    case 0x80A1D440u: goto label_80A1D440;
    case 0x80A1D44Cu: goto label_80A1D44C;
    case 0x80A1D46Cu: goto label_80A1D46C;
    case 0x80A1D480u: goto label_80A1D480;
    case 0x80A1D494u: goto label_80A1D494;
    case 0x80A1D4C8u: goto label_80A1D4C8;
    case 0x80A1D4D8u: goto label_80A1D4D8;
    case 0x80A1D4E8u: goto label_80A1D4E8;
    case 0x80A1D4F0u: goto label_80A1D4F0;
    case 0x80A1D4F8u: goto label_80A1D4F8;
    case 0x80A1D57Cu: goto label_80A1D57C;
    case 0x80A1D5F4u: goto label_80A1D5F4;
    case 0x80A1D67Cu: goto label_80A1D67C;
    case 0x80A1D680u: goto label_80A1D680;
    case 0x80A1D720u: goto label_80A1D720;
    case 0x80A1D7DCu: goto label_80A1D7DC;
    case 0x80A1D7ECu: goto label_80A1D7EC;
    case 0x80A1D870u: goto label_80A1D870;
    case 0x80A1D8B4u: goto label_80A1D8B4;
    case 0x80A1D8C0u: goto label_80A1D8C0;
    case 0x80A1D8C4u: goto label_80A1D8C4;
    case 0x80A1D8C8u: goto label_80A1D8C8;
    case 0x80A1D8E0u: goto label_80A1D8E0;
    case 0x80A1D8F0u: goto label_80A1D8F0;
    case 0x80A1D918u: goto label_80A1D918;
    case 0x80A1D930u: goto label_80A1D930;
    case 0x80A1D934u: goto label_80A1D934;
    case 0x80A1D954u: goto label_80A1D954;
    case 0x80A1D9C8u: goto label_80A1D9C8;
    case 0x80A1D9E0u: goto label_80A1D9E0;
    case 0x80A1D9F8u: goto label_80A1D9F8;
    case 0x80A1DA10u: goto label_80A1DA10;
    case 0x80A1DA14u: goto label_80A1DA14;
    case 0x80A1DA18u: goto label_80A1DA18;
    case 0x80A1DA1Cu: goto label_80A1DA1C;
    case 0x80A1DA20u: goto label_80A1DA20;
    case 0x80A1DA24u: goto label_80A1DA24;
    case 0x80A1DA38u: goto label_80A1DA38;
    case 0x80A1DA54u: goto label_80A1DA54;
    case 0x80A1DA70u: goto label_80A1DA70;
    case 0x80A1DAD4u: goto label_80A1DAD4;
    case 0x80A1DAE0u: goto label_80A1DAE0;
    case 0x80A1DAE8u: goto label_80A1DAE8;
    case 0x80A1DB34u: goto label_80A1DB34;
    case 0x80A1DBACu: goto label_80A1DBAC;
    case 0x80A1DBC4u: goto label_80A1DBC4;
    case 0x80A1DBDCu: goto label_80A1DBDC;
    case 0x80A1DBF4u: goto label_80A1DBF4;
    case 0x80A1DBF8u: goto label_80A1DBF8;
    case 0x80A1DBFCu: goto label_80A1DBFC;
    case 0x80A1DC00u: goto label_80A1DC00;
    case 0x80A1DC04u: goto label_80A1DC04;
    case 0x80A1DC08u: goto label_80A1DC08;
    case 0x80A1DC1Cu: goto label_80A1DC1C;
    case 0x80A1DC38u: goto label_80A1DC38;
    case 0x80A1DC54u: goto label_80A1DC54;
    case 0x80A1DC68u: goto label_80A1DC68;
    case 0x80A1DC80u: goto label_80A1DC80;
    case 0x80A1DC84u: goto label_80A1DC84;
    case 0x80A1DCF8u: goto label_80A1DCF8;
    case 0x80A1DD10u: goto label_80A1DD10;
    case 0x80A1DD28u: goto label_80A1DD28;
    case 0x80A1DD40u: goto label_80A1DD40;
    case 0x80A1DD78u: goto label_80A1DD78;
    case 0x80A1DD80u: goto label_80A1DD80;
    case 0x80A1DD8Cu: goto label_80A1DD8C;
    case 0x80A1DD94u: goto label_80A1DD94;
    case 0x80A1DD98u: goto label_80A1DD98;
    case 0x80A1DDACu: goto label_80A1DDAC;
    case 0x80A1DDB0u: goto label_80A1DDB0;
    case 0x80A1DE38u: goto label_80A1DE38;
    case 0x80A1DE50u: goto label_80A1DE50;
    case 0x80A1DE58u: goto label_80A1DE58;
    case 0x80A1DE5Cu: goto label_80A1DE5C;
    case 0x80A1DE64u: goto label_80A1DE64;
    case 0x80A1DE6Cu: goto label_80A1DE6C;
    case 0x80A1DE74u: goto label_80A1DE74;
    case 0x80A1DE7Cu: goto label_80A1DE7C;
    case 0x80A1DE98u: goto label_80A1DE98;
    case 0x80A1DEB4u: goto label_80A1DEB4;
    case 0x80A1DEC4u: goto label_80A1DEC4;
    case 0x80A1DEDCu: goto label_80A1DEDC;
    case 0x80A1DEF0u: goto label_80A1DEF0;
    case 0x80A1DEFCu: goto label_80A1DEFC;
    case 0x80A1DF0Cu: goto label_80A1DF0C;
    case 0x80A1DF20u: goto label_80A1DF20;
    case 0x80A1DF28u: goto label_80A1DF28;
    case 0x80A1DF30u: goto label_80A1DF30;
    case 0x80A1DF6Cu: goto label_80A1DF6C;
    case 0x80A1DFB4u: goto label_80A1DFB4;
    case 0x80A1DFFCu: goto label_80A1DFFC;
    case 0x80A1E014u: goto label_80A1E014;
    case 0x80A1E040u: goto label_80A1E040;
    case 0x80A1E050u: goto label_80A1E050;
    case 0x80A1E060u: goto label_80A1E060;
    case 0x80A1E110u: goto label_80A1E110;
    case 0x80A1E118u: goto label_80A1E118;
    case 0x80A1E120u: goto label_80A1E120;
    case 0x80A1E124u: goto label_80A1E124;
    case 0x80A1E12Cu: goto label_80A1E12C;
    case 0x80A1E134u: goto label_80A1E134;
    case 0x80A1E138u: goto label_80A1E138;
    case 0x80A1E140u: goto label_80A1E140;
    case 0x80A1E148u: goto label_80A1E148;
    case 0x80A1E278u: goto label_80A1E278;
    case 0x80A1E2BCu: goto label_80A1E2BC;
    case 0x80A1E304u: goto label_80A1E304;
    case 0x80A1E31Cu: goto label_80A1E31C;
    case 0x80A1E344u: goto label_80A1E344;
    case 0x80A1E354u: goto label_80A1E354;
    case 0x80A1E364u: goto label_80A1E364;
    case 0x80A1E414u: goto label_80A1E414;
    default: return;
    }
}

