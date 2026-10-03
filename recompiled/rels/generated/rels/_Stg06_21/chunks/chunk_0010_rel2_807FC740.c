// DolRecomp output
#include "../generated.h"

void func_807FC740(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_807FC740[918] = {
        &&label_807FC740,
        &&label_807FC744,
        &&label_807FC748,
        &&label_807FC74C,
        &&label_807FC750,
        &&label_807FC754,
        &&label_807FC758,
        &&label_807FC75C,
        &&label_807FC760,
        &&label_807FC764,
        &&label_807FC768,
        &&label_807FC76C,
        &&label_807FC770,
        &&label_807FC774,
        &&label_807FC778,
        &&label_807FC77C,
        &&label_807FC780,
        &&label_807FC784,
        &&label_807FC788,
        &&label_807FC78C,
        &&label_807FC790,
        &&label_807FC794,
        &&label_807FC798,
        &&label_807FC79C,
        &&label_807FC7A0,
        &&label_807FC7A4,
        &&label_807FC7A8,
        &&label_807FC7AC,
        &&label_807FC7B0,
        &&label_807FC7B4,
        &&label_807FC7B8,
        &&label_807FC7BC,
        &&label_807FC7C0,
        &&label_807FC7C4,
        &&label_807FC7C8,
        &&label_807FC7CC,
        &&label_807FC7D0,
        &&label_807FC7D4,
        &&label_807FC7D8,
        &&label_807FC7DC,
        &&label_807FC7E0,
        &&label_807FC7E4,
        &&label_807FC7E8,
        &&label_807FC7EC,
        &&label_807FC7F0,
        &&label_807FC7F4,
        &&label_807FC7F8,
        &&label_807FC7FC,
        &&label_807FC800,
        &&label_807FC804,
        &&label_807FC808,
        &&label_807FC80C,
        &&label_807FC810,
        &&label_807FC814,
        &&label_807FC818,
        &&label_807FC81C,
        &&label_807FC820,
        &&label_807FC824,
        &&label_807FC828,
        &&label_807FC82C,
        &&label_807FC830,
        &&label_807FC834,
        &&label_807FC838,
        &&label_807FC83C,
        &&label_807FC840,
        &&label_807FC844,
        &&label_807FC848,
        &&label_807FC84C,
        &&label_807FC850,
        &&label_807FC854,
        &&label_807FC858,
        &&label_807FC85C,
        &&label_807FC860,
        &&label_807FC864,
        &&label_807FC868,
        &&label_807FC86C,
        &&label_807FC870,
        &&label_807FC874,
        &&label_807FC878,
        &&label_807FC87C,
        &&label_807FC880,
        &&label_807FC884,
        &&label_807FC888,
        &&label_807FC88C,
        &&label_807FC890,
        &&label_807FC894,
        &&label_807FC898,
        &&label_807FC89C,
        &&label_807FC8A0,
        &&label_807FC8A4,
        &&label_807FC8A8,
        &&label_807FC8AC,
        &&label_807FC8B0,
        &&label_807FC8B4,
        &&label_807FC8B8,
        &&label_807FC8BC,
        &&label_807FC8C0,
        &&label_807FC8C4,
        &&label_807FC8C8,
        &&label_807FC8CC,
        &&label_807FC8D0,
        &&label_807FC8D4,
        &&label_807FC8D8,
        &&label_807FC8DC,
        &&label_807FC8E0,
        &&label_807FC8E4,
        &&label_807FC8E8,
        &&label_807FC8EC,
        &&label_807FC8F0,
        &&label_807FC8F4,
        &&label_807FC8F8,
        &&label_807FC8FC,
        &&label_807FC900,
        &&label_807FC904,
        &&label_807FC908,
        &&label_807FC90C,
        &&label_807FC910,
        &&label_807FC914,
        &&label_807FC918,
        &&label_807FC91C,
        &&label_807FC920,
        &&label_807FC924,
        &&label_807FC928,
        &&label_807FC92C,
        &&label_807FC930,
        &&label_807FC934,
        &&label_807FC938,
        &&label_807FC93C,
        &&label_807FC940,
        &&label_807FC944,
        &&label_807FC948,
        &&label_807FC94C,
        &&label_807FC950,
        &&label_807FC954,
        &&label_807FC958,
        &&label_807FC95C,
        &&label_807FC960,
        &&label_807FC964,
        &&label_807FC968,
        &&label_807FC96C,
        &&label_807FC970,
        &&label_807FC974,
        &&label_807FC978,
        &&label_807FC97C,
        &&label_807FC980,
        &&label_807FC984,
        &&label_807FC988,
        &&label_807FC98C,
        &&label_807FC990,
        &&label_807FC994,
        &&label_807FC998,
        &&label_807FC99C,
        &&label_807FC9A0,
        &&label_807FC9A4,
        &&label_807FC9A8,
        &&label_807FC9AC,
        &&label_807FC9B0,
        &&label_807FC9B4,
        &&label_807FC9B8,
        &&label_807FC9BC,
        &&label_807FC9C0,
        &&label_807FC9C4,
        &&label_807FC9C8,
        &&label_807FC9CC,
        &&label_807FC9D0,
        &&label_807FC9D4,
        &&label_807FC9D8,
        &&label_807FC9DC,
        &&label_807FC9E0,
        &&label_807FC9E4,
        &&label_807FC9E8,
        &&label_807FC9EC,
        &&label_807FC9F0,
        &&label_807FC9F4,
        &&label_807FC9F8,
        &&label_807FC9FC,
        &&label_807FCA00,
        &&label_807FCA04,
        &&label_807FCA08,
        &&label_807FCA0C,
        &&label_807FCA10,
        &&label_807FCA14,
        &&label_807FCA18,
        &&label_807FCA1C,
        &&label_807FCA20,
        &&label_807FCA24,
        &&label_807FCA28,
        &&label_807FCA2C,
        &&label_807FCA30,
        &&label_807FCA34,
        &&label_807FCA38,
        &&label_807FCA3C,
        &&label_807FCA40,
        &&label_807FCA44,
        &&label_807FCA48,
        &&label_807FCA4C,
        &&label_807FCA50,
        &&label_807FCA54,
        &&label_807FCA58,
        &&label_807FCA5C,
        &&label_807FCA60,
        &&label_807FCA64,
        &&label_807FCA68,
        &&label_807FCA6C,
        &&label_807FCA70,
        &&label_807FCA74,
        &&label_807FCA78,
        &&label_807FCA7C,
        &&label_807FCA80,
        &&label_807FCA84,
        &&label_807FCA88,
        &&label_807FCA8C,
        &&label_807FCA90,
        &&label_807FCA94,
        &&label_807FCA98,
        &&label_807FCA9C,
        &&label_807FCAA0,
        &&label_807FCAA4,
        &&label_807FCAA8,
        &&label_807FCAAC,
        &&label_807FCAB0,
        &&label_807FCAB4,
        &&label_807FCAB8,
        &&label_807FCABC,
        &&label_807FCAC0,
        &&label_807FCAC4,
        &&label_807FCAC8,
        &&label_807FCACC,
        &&label_807FCAD0,
        &&label_807FCAD4,
        &&label_807FCAD8,
        &&label_807FCADC,
        &&label_807FCAE0,
        &&label_807FCAE4,
        &&label_807FCAE8,
        &&label_807FCAEC,
        &&label_807FCAF0,
        &&label_807FCAF4,
        &&label_807FCAF8,
        &&label_807FCAFC,
        &&label_807FCB00,
        &&label_807FCB04,
        &&label_807FCB08,
        &&label_807FCB0C,
        &&label_807FCB10,
        &&label_807FCB14,
        &&label_807FCB18,
        &&label_807FCB1C,
        &&label_807FCB20,
        &&label_807FCB24,
        &&label_807FCB28,
        &&label_807FCB2C,
        &&label_807FCB30,
        &&label_807FCB34,
        &&label_807FCB38,
        &&label_807FCB3C,
        &&label_807FCB40,
        &&label_807FCB44,
        &&label_807FCB48,
        &&label_807FCB4C,
        &&label_807FCB50,
        &&label_807FCB54,
        &&label_807FCB58,
        &&label_807FCB5C,
        &&label_807FCB60,
        &&label_807FCB64,
        &&label_807FCB68,
        &&label_807FCB6C,
        &&label_807FCB70,
        &&label_807FCB74,
        &&label_807FCB78,
        &&label_807FCB7C,
        &&label_807FCB80,
        &&label_807FCB84,
        &&label_807FCB88,
        &&label_807FCB8C,
        &&label_807FCB90,
        &&label_807FCB94,
        &&label_807FCB98,
        &&label_807FCB9C,
        &&label_807FCBA0,
        &&label_807FCBA4,
        &&label_807FCBA8,
        &&label_807FCBAC,
        &&label_807FCBB0,
        &&label_807FCBB4,
        &&label_807FCBB8,
        &&label_807FCBBC,
        &&label_807FCBC0,
        &&label_807FCBC4,
        &&label_807FCBC8,
        &&label_807FCBCC,
        &&label_807FCBD0,
        &&label_807FCBD4,
        &&label_807FCBD8,
        &&label_807FCBDC,
        &&label_807FCBE0,
        &&label_807FCBE4,
        &&label_807FCBE8,
        &&label_807FCBEC,
        &&label_807FCBF0,
        &&label_807FCBF4,
        &&label_807FCBF8,
        &&label_807FCBFC,
        &&label_807FCC00,
        &&label_807FCC04,
        &&label_807FCC08,
        &&label_807FCC0C,
        &&label_807FCC10,
        &&label_807FCC14,
        &&label_807FCC18,
        &&label_807FCC1C,
        &&label_807FCC20,
        &&label_807FCC24,
        &&label_807FCC28,
        &&label_807FCC2C,
        &&label_807FCC30,
        &&label_807FCC34,
        &&label_807FCC38,
        &&label_807FCC3C,
        &&label_807FCC40,
        &&label_807FCC44,
        &&label_807FCC48,
        &&label_807FCC4C,
        &&label_807FCC50,
        &&label_807FCC54,
        &&label_807FCC58,
        &&label_807FCC5C,
        &&label_807FCC60,
        &&label_807FCC64,
        &&label_807FCC68,
        &&label_807FCC6C,
        &&label_807FCC70,
        &&label_807FCC74,
        &&label_807FCC78,
        &&label_807FCC7C,
        &&label_807FCC80,
        &&label_807FCC84,
        &&label_807FCC88,
        &&label_807FCC8C,
        &&label_807FCC90,
        &&label_807FCC94,
        &&label_807FCC98,
        &&label_807FCC9C,
        &&label_807FCCA0,
        &&label_807FCCA4,
        &&label_807FCCA8,
        &&label_807FCCAC,
        &&label_807FCCB0,
        &&label_807FCCB4,
        &&label_807FCCB8,
        &&label_807FCCBC,
        &&label_807FCCC0,
        &&label_807FCCC4,
        &&label_807FCCC8,
        &&label_807FCCCC,
        &&label_807FCCD0,
        &&label_807FCCD4,
        &&label_807FCCD8,
        &&label_807FCCDC,
        &&label_807FCCE0,
        &&label_807FCCE4,
        &&label_807FCCE8,
        &&label_807FCCEC,
        &&label_807FCCF0,
        &&label_807FCCF4,
        &&label_807FCCF8,
        &&label_807FCCFC,
        &&label_807FCD00,
        &&label_807FCD04,
        &&label_807FCD08,
        &&label_807FCD0C,
        &&label_807FCD10,
        &&label_807FCD14,
        &&label_807FCD18,
        &&label_807FCD1C,
        &&label_807FCD20,
        &&label_807FCD24,
        &&label_807FCD28,
        &&label_807FCD2C,
        &&label_807FCD30,
        &&label_807FCD34,
        &&label_807FCD38,
        &&label_807FCD3C,
        &&label_807FCD40,
        &&label_807FCD44,
        &&label_807FCD48,
        &&label_807FCD4C,
        &&label_807FCD50,
        &&label_807FCD54,
        &&label_807FCD58,
        &&label_807FCD5C,
        &&label_807FCD60,
        &&label_807FCD64,
        &&label_807FCD68,
        &&label_807FCD6C,
        &&label_807FCD70,
        &&label_807FCD74,
        &&label_807FCD78,
        &&label_807FCD7C,
        &&label_807FCD80,
        &&label_807FCD84,
        &&label_807FCD88,
        &&label_807FCD8C,
        &&label_807FCD90,
        &&label_807FCD94,
        &&label_807FCD98,
        &&label_807FCD9C,
        &&label_807FCDA0,
        &&label_807FCDA4,
        &&label_807FCDA8,
        &&label_807FCDAC,
        &&label_807FCDB0,
        &&label_807FCDB4,
        &&label_807FCDB8,
        &&label_807FCDBC,
        &&label_807FCDC0,
        &&label_807FCDC4,
        &&label_807FCDC8,
        &&label_807FCDCC,
        &&label_807FCDD0,
        &&label_807FCDD4,
        &&label_807FCDD8,
        &&label_807FCDDC,
        &&label_807FCDE0,
        &&label_807FCDE4,
        &&label_807FCDE8,
        &&label_807FCDEC,
        &&label_807FCDF0,
        &&label_807FCDF4,
        &&label_807FCDF8,
        &&label_807FCDFC,
        &&label_807FCE00,
        &&label_807FCE04,
        &&label_807FCE08,
        &&label_807FCE0C,
        &&label_807FCE10,
        &&label_807FCE14,
        &&label_807FCE18,
        &&label_807FCE1C,
        &&label_807FCE20,
        &&label_807FCE24,
        &&label_807FCE28,
        &&label_807FCE2C,
        &&label_807FCE30,
        &&label_807FCE34,
        &&label_807FCE38,
        &&label_807FCE3C,
        &&label_807FCE40,
        &&label_807FCE44,
        &&label_807FCE48,
        &&label_807FCE4C,
        &&label_807FCE50,
        &&label_807FCE54,
        &&label_807FCE58,
        &&label_807FCE5C,
        &&label_807FCE60,
        &&label_807FCE64,
        &&label_807FCE68,
        &&label_807FCE6C,
        &&label_807FCE70,
        &&label_807FCE74,
        &&label_807FCE78,
        &&label_807FCE7C,
        &&label_807FCE80,
        &&label_807FCE84,
        &&label_807FCE88,
        &&label_807FCE8C,
        &&label_807FCE90,
        &&label_807FCE94,
        &&label_807FCE98,
        &&label_807FCE9C,
        &&label_807FCEA0,
        &&label_807FCEA4,
        &&label_807FCEA8,
        &&label_807FCEAC,
        &&label_807FCEB0,
        &&label_807FCEB4,
        &&label_807FCEB8,
        &&label_807FCEBC,
        &&label_807FCEC0,
        &&label_807FCEC4,
        &&label_807FCEC8,
        &&label_807FCECC,
        &&label_807FCED0,
        &&label_807FCED4,
        &&label_807FCED8,
        &&label_807FCEDC,
        &&label_807FCEE0,
        &&label_807FCEE4,
        &&label_807FCEE8,
        &&label_807FCEEC,
        &&label_807FCEF0,
        &&label_807FCEF4,
        &&label_807FCEF8,
        &&label_807FCEFC,
        &&label_807FCF00,
        &&label_807FCF04,
        &&label_807FCF08,
        &&label_807FCF0C,
        &&label_807FCF10,
        &&label_807FCF14,
        &&label_807FCF18,
        &&label_807FCF1C,
        &&label_807FCF20,
        &&label_807FCF24,
        &&label_807FCF28,
        &&label_807FCF2C,
        &&label_807FCF30,
        &&label_807FCF34,
        &&label_807FCF38,
        &&label_807FCF3C,
        &&label_807FCF40,
        &&label_807FCF44,
        &&label_807FCF48,
        &&label_807FCF4C,
        &&label_807FCF50,
        &&label_807FCF54,
        &&label_807FCF58,
        &&label_807FCF5C,
        &&label_807FCF60,
        &&label_807FCF64,
        &&label_807FCF68,
        &&label_807FCF6C,
        &&label_807FCF70,
        &&label_807FCF74,
        &&label_807FCF78,
        &&label_807FCF7C,
        &&label_807FCF80,
        &&label_807FCF84,
        &&label_807FCF88,
        &&label_807FCF8C,
        &&label_807FCF90,
        &&label_807FCF94,
        &&label_807FCF98,
        &&label_807FCF9C,
        &&label_807FCFA0,
        &&label_807FCFA4,
        &&label_807FCFA8,
        &&label_807FCFAC,
        &&label_807FCFB0,
        &&label_807FCFB4,
        &&label_807FCFB8,
        &&label_807FCFBC,
        &&label_807FCFC0,
        &&label_807FCFC4,
        &&label_807FCFC8,
        &&label_807FCFCC,
        &&label_807FCFD0,
        &&label_807FCFD4,
        &&label_807FCFD8,
        &&label_807FCFDC,
        &&label_807FCFE0,
        &&label_807FCFE4,
        &&label_807FCFE8,
        &&label_807FCFEC,
        &&label_807FCFF0,
        &&label_807FCFF4,
        &&label_807FCFF8,
        &&label_807FCFFC,
        &&label_807FD000,
        &&label_807FD004,
        &&label_807FD008,
        &&label_807FD00C,
        &&label_807FD010,
        &&label_807FD014,
        &&label_807FD018,
        &&label_807FD01C,
        &&label_807FD020,
        &&label_807FD024,
        &&label_807FD028,
        &&label_807FD02C,
        &&label_807FD030,
        &&label_807FD034,
        &&label_807FD038,
        &&label_807FD03C,
        &&label_807FD040,
        &&label_807FD044,
        &&label_807FD048,
        &&label_807FD04C,
        &&label_807FD050,
        &&label_807FD054,
        &&label_807FD058,
        &&label_807FD05C,
        &&label_807FD060,
        &&label_807FD064,
        &&label_807FD068,
        &&label_807FD06C,
        &&label_807FD070,
        &&label_807FD074,
        &&label_807FD078,
        &&label_807FD07C,
        &&label_807FD080,
        &&label_807FD084,
        &&label_807FD088,
        &&label_807FD08C,
        &&label_807FD090,
        &&label_807FD094,
        &&label_807FD098,
        &&label_807FD09C,
        &&label_807FD0A0,
        &&label_807FD0A4,
        &&label_807FD0A8,
        &&label_807FD0AC,
        &&label_807FD0B0,
        &&label_807FD0B4,
        &&label_807FD0B8,
        &&label_807FD0BC,
        &&label_807FD0C0,
        &&label_807FD0C4,
        &&label_807FD0C8,
        &&label_807FD0CC,
        &&label_807FD0D0,
        &&label_807FD0D4,
        &&label_807FD0D8,
        &&label_807FD0DC,
        &&label_807FD0E0,
        &&label_807FD0E4,
        &&label_807FD0E8,
        &&label_807FD0EC,
        &&label_807FD0F0,
        &&label_807FD0F4,
        &&label_807FD0F8,
        &&label_807FD0FC,
        &&label_807FD100,
        &&label_807FD104,
        &&label_807FD108,
        &&label_807FD10C,
        &&label_807FD110,
        &&label_807FD114,
        &&label_807FD118,
        &&label_807FD11C,
        &&label_807FD120,
        &&label_807FD124,
        &&label_807FD128,
        &&label_807FD12C,
        &&label_807FD130,
        &&label_807FD134,
        &&label_807FD138,
        &&label_807FD13C,
        &&label_807FD140,
        &&label_807FD144,
        &&label_807FD148,
        &&label_807FD14C,
        &&label_807FD150,
        &&label_807FD154,
        &&label_807FD158,
        &&label_807FD15C,
        &&label_807FD160,
        &&label_807FD164,
        &&label_807FD168,
        &&label_807FD16C,
        &&label_807FD170,
        &&label_807FD174,
        &&label_807FD178,
        &&label_807FD17C,
        &&label_807FD180,
        &&label_807FD184,
        &&label_807FD188,
        &&label_807FD18C,
        &&label_807FD190,
        &&label_807FD194,
        &&label_807FD198,
        &&label_807FD19C,
        &&label_807FD1A0,
        &&label_807FD1A4,
        &&label_807FD1A8,
        &&label_807FD1AC,
        &&label_807FD1B0,
        &&label_807FD1B4,
        &&label_807FD1B8,
        &&label_807FD1BC,
        &&label_807FD1C0,
        &&label_807FD1C4,
        &&label_807FD1C8,
        &&label_807FD1CC,
        &&label_807FD1D0,
        &&label_807FD1D4,
        &&label_807FD1D8,
        &&label_807FD1DC,
        &&label_807FD1E0,
        &&label_807FD1E4,
        &&label_807FD1E8,
        &&label_807FD1EC,
        &&label_807FD1F0,
        &&label_807FD1F4,
        &&label_807FD1F8,
        &&label_807FD1FC,
        &&label_807FD200,
        &&label_807FD204,
        &&label_807FD208,
        &&label_807FD20C,
        &&label_807FD210,
        &&label_807FD214,
        &&label_807FD218,
        &&label_807FD21C,
        &&label_807FD220,
        &&label_807FD224,
        &&label_807FD228,
        &&label_807FD22C,
        &&label_807FD230,
        &&label_807FD234,
        &&label_807FD238,
        &&label_807FD23C,
        &&label_807FD240,
        &&label_807FD244,
        &&label_807FD248,
        &&label_807FD24C,
        &&label_807FD250,
        &&label_807FD254,
        &&label_807FD258,
        &&label_807FD25C,
        &&label_807FD260,
        &&label_807FD264,
        &&label_807FD268,
        &&label_807FD26C,
        &&label_807FD270,
        &&label_807FD274,
        &&label_807FD278,
        &&label_807FD27C,
        &&label_807FD280,
        &&label_807FD284,
        &&label_807FD288,
        &&label_807FD28C,
        &&label_807FD290,
        &&label_807FD294,
        &&label_807FD298,
        &&label_807FD29C,
        &&label_807FD2A0,
        &&label_807FD2A4,
        &&label_807FD2A8,
        &&label_807FD2AC,
        &&label_807FD2B0,
        &&label_807FD2B4,
        &&label_807FD2B8,
        &&label_807FD2BC,
        &&label_807FD2C0,
        &&label_807FD2C4,
        &&label_807FD2C8,
        &&label_807FD2CC,
        &&label_807FD2D0,
        &&label_807FD2D4,
        &&label_807FD2D8,
        &&label_807FD2DC,
        &&label_807FD2E0,
        &&label_807FD2E4,
        &&label_807FD2E8,
        &&label_807FD2EC,
        &&label_807FD2F0,
        &&label_807FD2F4,
        &&label_807FD2F8,
        &&label_807FD2FC,
        &&label_807FD300,
        &&label_807FD304,
        &&label_807FD308,
        &&label_807FD30C,
        &&label_807FD310,
        &&label_807FD314,
        &&label_807FD318,
        &&label_807FD31C,
        &&label_807FD320,
        &&label_807FD324,
        &&label_807FD328,
        &&label_807FD32C,
        &&label_807FD330,
        &&label_807FD334,
        &&label_807FD338,
        &&label_807FD33C,
        &&label_807FD340,
        &&label_807FD344,
        &&label_807FD348,
        &&label_807FD34C,
        &&label_807FD350,
        &&label_807FD354,
        &&label_807FD358,
        &&label_807FD35C,
        &&label_807FD360,
        &&label_807FD364,
        &&label_807FD368,
        &&label_807FD36C,
        &&label_807FD370,
        &&label_807FD374,
        &&label_807FD378,
        &&label_807FD37C,
        &&label_807FD380,
        &&label_807FD384,
        &&label_807FD388,
        &&label_807FD38C,
        &&label_807FD390,
        &&label_807FD394,
        &&label_807FD398,
        &&label_807FD39C,
        &&label_807FD3A0,
        &&label_807FD3A4,
        &&label_807FD3A8,
        &&label_807FD3AC,
        &&label_807FD3B0,
        &&label_807FD3B4,
        &&label_807FD3B8,
        &&label_807FD3BC,
        &&label_807FD3C0,
        &&label_807FD3C4,
        &&label_807FD3C8,
        &&label_807FD3CC,
        &&label_807FD3D0,
        &&label_807FD3D4,
        &&label_807FD3D8,
        &&label_807FD3DC,
        &&label_807FD3E0,
        &&label_807FD3E4,
        &&label_807FD3E8,
        &&label_807FD3EC,
        &&label_807FD3F0,
        &&label_807FD3F4,
        &&label_807FD3F8,
        &&label_807FD3FC,
        &&label_807FD400,
        &&label_807FD404,
        &&label_807FD408,
        &&label_807FD40C,
        &&label_807FD410,
        &&label_807FD414,
        &&label_807FD418,
        &&label_807FD41C,
        &&label_807FD420,
        &&label_807FD424,
        &&label_807FD428,
        &&label_807FD42C,
        &&label_807FD430,
        &&label_807FD434,
        &&label_807FD438,
        &&label_807FD43C,
        &&label_807FD440,
        &&label_807FD444,
        &&label_807FD448,
        &&label_807FD44C,
        &&label_807FD450,
        &&label_807FD454,
        &&label_807FD458,
        &&label_807FD45C,
        &&label_807FD460,
        &&label_807FD464,
        &&label_807FD468,
        &&label_807FD46C,
        &&label_807FD470,
        &&label_807FD474,
        &&label_807FD478,
        &&label_807FD47C,
        &&label_807FD480,
        &&label_807FD484,
        &&label_807FD488,
        &&label_807FD48C,
        &&label_807FD490,
        &&label_807FD494,
        &&label_807FD498,
        &&label_807FD49C,
        &&label_807FD4A0,
        &&label_807FD4A4,
        &&label_807FD4A8,
        &&label_807FD4AC,
        &&label_807FD4B0,
        &&label_807FD4B4,
        &&label_807FD4B8,
        &&label_807FD4BC,
        &&label_807FD4C0,
        &&label_807FD4C4,
        &&label_807FD4C8,
        &&label_807FD4CC,
        &&label_807FD4D0,
        &&label_807FD4D4,
        &&label_807FD4D8,
        &&label_807FD4DC,
        &&label_807FD4E0,
        &&label_807FD4E4,
        &&label_807FD4E8,
        &&label_807FD4EC,
        &&label_807FD4F0,
        &&label_807FD4F4,
        &&label_807FD4F8,
        &&label_807FD4FC,
        &&label_807FD500,
        &&label_807FD504,
        &&label_807FD508,
        &&label_807FD50C,
        &&label_807FD510,
        &&label_807FD514,
        &&label_807FD518,
        &&label_807FD51C,
        &&label_807FD520,
        &&label_807FD524,
        &&label_807FD528,
        &&label_807FD52C,
        &&label_807FD530,
        &&label_807FD534,
        &&label_807FD538,
        &&label_807FD53C,
        &&label_807FD540,
        &&label_807FD544,
        &&label_807FD548,
        &&label_807FD54C,
        &&label_807FD550,
        &&label_807FD554,
        &&label_807FD558,
        &&label_807FD55C,
        &&label_807FD560,
        &&label_807FD564,
        &&label_807FD568,
        &&label_807FD56C,
        &&label_807FD570,
        &&label_807FD574,
        &&label_807FD578,
        &&label_807FD57C,
        &&label_807FD580,
        &&label_807FD584,
        &&label_807FD588,
        &&label_807FD58C,
        &&label_807FD590,
        &&label_807FD594
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x807FC740u && pc <= 0x807FD594u && ((pc - 0x807FC740u) & 3u) == 0u)
            goto *pc_table_807FC740[(pc - 0x807FC740u) >> 2];
    }
    return;
label_807FC740:
    ctx->pc = 0x807FC740u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FC740u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 807FC740: addi    r28, r28, 4
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(4);

label_807FC744:
    ctx->pc = 0x807FC744u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC744u)) return;
    // 807FC744: bc    12, 0, 0x807FC644
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x807FC644u;
            return;
        }
    }

label_807FC748:
    ctx->pc = 0x807FC748u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FC748u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 11u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 807FC748: lmw     r27, 28(r1)
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
label_807FC74C:
    ctx->pc = 0x807FC74Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC74Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 807FC74C: lwz     r0, 52(r1)
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
label_807FC750:
    ctx->pc = 0x807FC750u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x807FC750u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807FC750: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC754:
    ctx->pc = 0x807FC754u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC754u)) return;
    // 807FC754: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_807FC758:
    ctx->pc = 0x807FC758u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC758u)) return;
    // 807FC758: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_807FC740;
        }
    }

label_807FC75C:
    ctx->pc = 0x807FC75Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 111u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FC75Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 111u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 110u : 0u;
    // 807FC75C: stwu     r1, -32(r1)
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
label_807FC760:
    ctx->pc = 0x807FC760u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC760u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 109u : 0u;
    // 807FC760: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC764:
    ctx->pc = 0x807FC764u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC764u)) return;
    // 807FC764: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_807FC768:
    ctx->pc = 0x807FC768u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC768u)) return;
    // 807FC768: lis     r5, -28634
    ctx->gpr[5] = ((u32)(s32)(-28634) << 16);

label_807FC76C:
    ctx->pc = 0x807FC76Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC76Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 106u : 0u;
    // 807FC76C: stw     r0, 36(r1)
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
label_807FC770:
    ctx->pc = 0x807FC770u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC770u)) return;
    // 807FC770: addi    r6, r4, -5404
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(-5404);

label_807FC774:
    ctx->pc = 0x807FC774u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC774u)) return;
    // 807FC774: lis     r4, -28099
    ctx->gpr[4] = ((u32)(s32)(-28099) << 16);

label_807FC778:
    ctx->pc = 0x807FC778u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC778u)) return;
    // 807FC778: lis     r7, -28099
    ctx->gpr[7] = ((u32)(s32)(-28099) << 16);

label_807FC77C:
    ctx->pc = 0x807FC77Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC77Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 102u : 0u;
    // 807FC77C: stw     r31, 28(r1)
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
label_807FC780:
    ctx->pc = 0x807FC780u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC780u)) return;
    // 807FC780: addi    r31, r4, -7336
    ctx->gpr[31] = ctx->gpr[4] + (u32)(s32)(-7336);

label_807FC784:
    ctx->pc = 0x807FC784u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC784u)) return;
    // 807FC784: addi    r8, r31, 1632
    ctx->gpr[8] = ctx->gpr[31] + (u32)(s32)(1632);

label_807FC788:
    ctx->pc = 0x807FC788u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC788u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 99u : 0u;
    // 807FC788: stw     r30, 24(r1)
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
label_807FC78C:
    ctx->pc = 0x807FC78Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC78Cu)) return;
    // 807FC78C: addi    r30, r7, -19488
    ctx->gpr[30] = ctx->gpr[7] + (u32)(s32)(-19488);

label_807FC790:
    ctx->pc = 0x807FC790u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC790u)) return;
    // 807FC790: addi    r9, r31, 992
    ctx->gpr[9] = ctx->gpr[31] + (u32)(s32)(992);

label_807FC794:
    ctx->pc = 0x807FC794u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC794u)) return;
    // 807FC794: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_807FC798:
    ctx->pc = 0x807FC798u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC798u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 95u : 0u;
    // 807FC798: stw     r29, 20(r1)
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
label_807FC79C:
    ctx->pc = 0x807FC79Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC79Cu)) return;
    // 807FC79C: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_807FC7A0:
    ctx->pc = 0x807FC7A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC7A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 93u : 0u;
    // 807FC7A0: lhau     r3, -5402(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-5402);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
        ctx->gpr[5] = ea;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC7A4:
    ctx->pc = 0x807FC7A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC7A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 92u : 0u;
    // 807FC7A4: lha     r0, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC7A8:
    ctx->pc = 0x807FC7A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC7A8u)) return;
    // 807FC7A8: rlwinm r3, r3, 8, 0, 23
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 8u) & 0xFFFFFF00u;
    }

label_807FC7AC:
    ctx->pc = 0x807FC7ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC7ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 90u : 0u;
    // 807FC7AC: lwz     r10, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC7B0:
    ctx->pc = 0x807FC7B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC7B0u)) return;
    // 807FC7B0: or   r4, r3, r0
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[0];
    }

label_807FC7B4:
    ctx->pc = 0x807FC7B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC7B4u)) return;
    // 807FC7B4: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_807FC7B8:
    ctx->pc = 0x807FC7B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC7B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 87u : 0u;
    // 807FC7B8: stw     r10, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC7BC:
    ctx->pc = 0x807FC7BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC7BCu)) return;
    // 807FC7BC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_807FC7C0:
    ctx->pc = 0x807FC7C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC7C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 85u : 0u;
    // 807FC7C0: stb     r4, 6240(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(6240);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC7C4:
    ctx->pc = 0x807FC7C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC7C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 84u : 0u;
    // 807FC7C4: stb     r4, 6241(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(6241);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC7C8:
    ctx->pc = 0x807FC7C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC7C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 83u : 0u;
    // 807FC7C8: stb     r3, 0(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC7CC:
    ctx->pc = 0x807FC7CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC7CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 82u : 0u;
    // 807FC7CC: stw     r0, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC7D0:
    ctx->pc = 0x807FC7D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC7D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 81u : 0u;
    // 807FC7D0: stw     r0, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC7D4:
    ctx->pc = 0x807FC7D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC7D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 80u : 0u;
    // 807FC7D4: stw     r0, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC7D8:
    ctx->pc = 0x807FC7D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC7D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 79u : 0u;
    // 807FC7D8: stw     r0, 12(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC7DC:
    ctx->pc = 0x807FC7DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC7DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 78u : 0u;
    // 807FC7DC: stw     r0, 16(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC7E0:
    ctx->pc = 0x807FC7E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC7E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 77u : 0u;
    // 807FC7E0: stw     r0, 20(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC7E4:
    ctx->pc = 0x807FC7E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC7E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 76u : 0u;
    // 807FC7E4: stw     r0, 24(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC7E8:
    ctx->pc = 0x807FC7E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC7E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 75u : 0u;
    // 807FC7E8: stw     r0, 28(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC7EC:
    ctx->pc = 0x807FC7ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC7ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 74u : 0u;
    // 807FC7EC: stw     r0, 32(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC7F0:
    ctx->pc = 0x807FC7F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC7F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 73u : 0u;
    // 807FC7F0: stw     r0, 36(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC7F4:
    ctx->pc = 0x807FC7F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC7F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 72u : 0u;
    // 807FC7F4: stw     r0, 40(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC7F8:
    ctx->pc = 0x807FC7F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC7F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 71u : 0u;
    // 807FC7F8: stw     r0, 44(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC7FC:
    ctx->pc = 0x807FC7FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC7FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 70u : 0u;
    // 807FC7FC: stw     r0, 48(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC800:
    ctx->pc = 0x807FC800u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC800u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 69u : 0u;
    // 807FC800: stw     r0, 4(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC804:
    ctx->pc = 0x807FC804u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC804u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 68u : 0u;
    // 807FC804: stw     r0, 52(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC808:
    ctx->pc = 0x807FC808u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC808u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 67u : 0u;
    // 807FC808: stw     r0, 36(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC80C:
    ctx->pc = 0x807FC80Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC80Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 66u : 0u;
    // 807FC80C: stw     r0, 56(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC810:
    ctx->pc = 0x807FC810u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC810u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 65u : 0u;
    // 807FC810: stw     r0, 68(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC814:
    ctx->pc = 0x807FC814u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC814u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 64u : 0u;
    // 807FC814: stw     r0, 60(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC818:
    ctx->pc = 0x807FC818u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC818u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 63u : 0u;
    // 807FC818: stw     r0, 100(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC81C:
    ctx->pc = 0x807FC81Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC81Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 62u : 0u;
    // 807FC81C: stw     r0, 64(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC820:
    ctx->pc = 0x807FC820u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC820u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 61u : 0u;
    // 807FC820: stw     r0, 132(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC824:
    ctx->pc = 0x807FC824u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC824u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 60u : 0u;
    // 807FC824: stw     r0, 68(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC828:
    ctx->pc = 0x807FC828u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC828u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 59u : 0u;
    // 807FC828: stw     r0, 164(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC82C:
    ctx->pc = 0x807FC82Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC82Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 58u : 0u;
    // 807FC82C: stw     r0, 72(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC830:
    ctx->pc = 0x807FC830u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC830u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 57u : 0u;
    // 807FC830: stw     r0, 196(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(196);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC834:
    ctx->pc = 0x807FC834u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC834u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 56u : 0u;
    // 807FC834: stw     r0, 76(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC838:
    ctx->pc = 0x807FC838u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC838u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 55u : 0u;
    // 807FC838: stw     r0, 228(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(228);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC83C:
    ctx->pc = 0x807FC83Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC83Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 54u : 0u;
    // 807FC83C: stw     r0, 80(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC840:
    ctx->pc = 0x807FC840u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC840u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 53u : 0u;
    // 807FC840: stw     r0, 260(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(260);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC844:
    ctx->pc = 0x807FC844u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC844u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 52u : 0u;
    // 807FC844: stw     r0, 84(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC848:
    ctx->pc = 0x807FC848u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC848u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 807FC848: stw     r0, 292(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(292);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC84C:
    ctx->pc = 0x807FC84Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC84Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 50u : 0u;
    // 807FC84C: stw     r0, 88(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC850:
    ctx->pc = 0x807FC850u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC850u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 807FC850: stw     r0, 324(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC854:
    ctx->pc = 0x807FC854u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC854u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 48u : 0u;
    // 807FC854: stw     r0, 92(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC858:
    ctx->pc = 0x807FC858u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC858u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 47u : 0u;
    // 807FC858: stw     r0, 356(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(356);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC85C:
    ctx->pc = 0x807FC85Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC85Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 46u : 0u;
    // 807FC85C: stw     r0, 96(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC860:
    ctx->pc = 0x807FC860u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC860u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 45u : 0u;
    // 807FC860: stw     r0, 388(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(388);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC864:
    ctx->pc = 0x807FC864u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC864u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 44u : 0u;
    // 807FC864: stw     r0, 100(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC868:
    ctx->pc = 0x807FC868u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC868u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 43u : 0u;
    // 807FC868: stw     r0, 420(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(420);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC86C:
    ctx->pc = 0x807FC86Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC86Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 42u : 0u;
    // 807FC86C: stw     r0, 104(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC870:
    ctx->pc = 0x807FC870u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC870u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 41u : 0u;
    // 807FC870: stw     r0, 452(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(452);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC874:
    ctx->pc = 0x807FC874u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC874u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 40u : 0u;
    // 807FC874: stw     r0, 108(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC878:
    ctx->pc = 0x807FC878u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC878u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 39u : 0u;
    // 807FC878: stw     r0, 484(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(484);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC87C:
    ctx->pc = 0x807FC87Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC87Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 38u : 0u;
    // 807FC87C: stw     r0, 112(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC880:
    ctx->pc = 0x807FC880u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC880u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 37u : 0u;
    // 807FC880: stw     r0, 516(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(516);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC884:
    ctx->pc = 0x807FC884u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC884u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 36u : 0u;
    // 807FC884: stw     r0, 116(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC888:
    ctx->pc = 0x807FC888u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC888u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 35u : 0u;
    // 807FC888: stw     r0, 548(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(548);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC88C:
    ctx->pc = 0x807FC88Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC88Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 34u : 0u;
    // 807FC88C: stw     r0, 120(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(120);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC890:
    ctx->pc = 0x807FC890u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC890u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 33u : 0u;
    // 807FC890: stw     r0, 580(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(580);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC894:
    ctx->pc = 0x807FC894u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC894u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 32u : 0u;
    // 807FC894: stw     r0, 124(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC898:
    ctx->pc = 0x807FC898u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC898u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 31u : 0u;
    // 807FC898: stw     r0, 612(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(612);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC89C:
    ctx->pc = 0x807FC89Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC89Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 30u : 0u;
    // 807FC89C: lha     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC8A0:
    ctx->pc = 0x807FC8A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC8A0u)) return;
    // 807FC8A0: lis     r5, -28132
    ctx->gpr[5] = ((u32)(s32)(-28132) << 16);

label_807FC8A4:
    ctx->pc = 0x807FC8A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC8A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 807FC8A4: lha     r0, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC8A8:
    ctx->pc = 0x807FC8A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC8A8u)) return;
    // 807FC8A8: lis     r4, -28132
    ctx->gpr[4] = ((u32)(s32)(-28132) << 16);

label_807FC8AC:
    ctx->pc = 0x807FC8ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC8ACu)) return;
    // 807FC8AC: rlwinm r3, r3, 8, 0, 23
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 8u) & 0xFFFFFF00u;
    }

label_807FC8B0:
    ctx->pc = 0x807FC8B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC8B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 807FC8B0: lfs     f0, -2320(r4)
    if (!ppc_fp_available_inline(ctx, 0x807FC8B0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-2320);
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
label_807FC8B4:
    ctx->pc = 0x807FC8B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC8B4u)) return;
    // 807FC8B4: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_807FC8B8:
    ctx->pc = 0x807FC8B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC8B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 807FC8B8: lfs     f1, -1960(r5)
    if (!ppc_fp_available_inline(ctx, 0x807FC8B8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-1960);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC8BC:
    ctx->pc = 0x807FC8BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC8BCu)) return;
    // 807FC8BC: rlwinm r0, r0, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
    }

label_807FC8C0:
    ctx->pc = 0x807FC8C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC8C0u)) return;
    // 807FC8C0: addi    r3, r31, 412
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(412);

label_807FC8C4:
    ctx->pc = 0x807FC8C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC8C4u)) return;
    // 807FC8C4: cmpwi   r0, 1
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

label_807FC8C8:
    ctx->pc = 0x807FC8C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC8C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 807FC8C8: stw     r7, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC8CC:
    ctx->pc = 0x807FC8CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC8CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 807FC8CC: stw     r7, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC8D0:
    ctx->pc = 0x807FC8D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC8D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 807FC8D0: stw     r7, 436(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(436);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC8D4:
    ctx->pc = 0x807FC8D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC8D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 807FC8D4: stw     r7, 432(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(432);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC8D8:
    ctx->pc = 0x807FC8D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC8D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 807FC8D8: stfs     f1, 444(r31)
    if (!ppc_fp_available_inline(ctx, 0x807FC8D8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(444);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC8DC:
    ctx->pc = 0x807FC8DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC8DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 807FC8DC: stw     r7, 428(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(428);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC8E0:
    ctx->pc = 0x807FC8E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC8E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 807FC8E0: stw     r7, 424(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(424);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC8E4:
    ctx->pc = 0x807FC8E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC8E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 807FC8E4: stw     r7, 400(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(400);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC8E8:
    ctx->pc = 0x807FC8E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC8E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 807FC8E8: stfs     f0, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x807FC8E8u)) return;
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
label_807FC8EC:
    ctx->pc = 0x807FC8ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC8ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 807FC8EC: stfs     f0, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x807FC8ECu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC8F0:
    ctx->pc = 0x807FC8F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC8F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 807FC8F0: stfs     f0, 412(r31)
    if (!ppc_fp_available_inline(ctx, 0x807FC8F0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(412);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC8F4:
    ctx->pc = 0x807FC8F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC8F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 807FC8F4: stfs     f0, 408(r31)
    if (!ppc_fp_available_inline(ctx, 0x807FC8F4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(408);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC8F8:
    ctx->pc = 0x807FC8F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC8F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 807FC8F8: stw     r7, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC8FC:
    ctx->pc = 0x807FC8FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC8FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 807FC8FC: stfs     f0, 16(r31)
    if (!ppc_fp_available_inline(ctx, 0x807FC8FCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC900:
    ctx->pc = 0x807FC900u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC900u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 807FC900: stfs     f0, 20(r31)
    if (!ppc_fp_available_inline(ctx, 0x807FC900u)) return;
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
label_807FC904:
    ctx->pc = 0x807FC904u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC904u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 807FC904: stw     r7, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC908:
    ctx->pc = 0x807FC908u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC908u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 807FC908: stw     r7, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC90C:
    ctx->pc = 0x807FC90Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC90Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807FC90C: stw     r7, 136(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(136);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC910:
    ctx->pc = 0x807FC910u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC910u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 807FC910: stw     r7, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC914:
    ctx->pc = 0x807FC914u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC914u)) return;
    // 807FC914: bc    12, 2, 0x807FC98C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_807FC98C;
        }
    }

label_807FC918:
    ctx->pc = 0x807FC918u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FC918u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 807FC918: bc    4, 0, 0x807FC928
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_807FC928;
        }
    }

label_807FC91C:
    ctx->pc = 0x807FC91Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FC91Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 807FC91C: cmpwi   r0, 0
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

label_807FC920:
    ctx->pc = 0x807FC920u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC920u)) return;
    // 807FC920: bc    4, 0, 0x807FC934
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_807FC934;
        }
    }

label_807FC924:
    ctx->pc = 0x807FC924u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FC924u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 807FC924: b       0x807FCA34
    {
            goto label_807FCA34;
    }

label_807FC928:
    ctx->pc = 0x807FC928u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FC928u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 807FC928: cmpwi   r0, 3
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

label_807FC92C:
    ctx->pc = 0x807FC92Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC92Cu)) return;
    // 807FC92C: bc    4, 0, 0x807FCA34
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_807FCA34;
        }
    }

label_807FC930:
    ctx->pc = 0x807FC930u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FC930u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 807FC930: b       0x807FC9E8
    {
            goto label_807FC9E8;
    }

label_807FC934:
    ctx->pc = 0x807FC934u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FC934u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 807FC934: lis     r3, -32640
    ctx->gpr[3] = ((u32)(s32)(-32640) << 16);

label_807FC938:
    ctx->pc = 0x807FC938u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC938u)) return;
    // 807FC938: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_807FC93C:
    ctx->pc = 0x807FC93Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC93Cu)) return;
    // 807FC93C: addi    r4, r3, -11204
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-11204);

label_807FC940:
    ctx->pc = 0x807FC940u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC940u)) return;
    // 807FC940: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_807FC944:
    ctx->pc = 0x807FC944u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC944u)) return;
    // 807FC944: bl      0x8050EC24
    {
            ctx->lr = 0x807FC948u;
            ctx->pc = 0x8050EC24u;
            return;
    }

label_807FC948:
    ctx->pc = 0x807FC948u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FC948u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 807FC948: lwz     r5, 32(r3)
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
label_807FC94C:
    ctx->pc = 0x807FC94Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC94Cu)) return;
    // 807FC94C: li      r6, 81
    ctx->gpr[6] = (u32)(s32)(81);

label_807FC950:
    ctx->pc = 0x807FC950u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC950u)) return;
    // 807FC950: li      r0, 10
    ctx->gpr[0] = (u32)(s32)(10);

label_807FC954:
    ctx->pc = 0x807FC954u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC954u)) return;
    // 807FC954: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_807FC958:
    ctx->pc = 0x807FC958u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC958u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 807FC958: stb     r6, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC95C:
    ctx->pc = 0x807FC95Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC95Cu)) return;
    // 807FC95C: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_807FC960:
    ctx->pc = 0x807FC960u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC960u)) return;
    // 807FC960: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_807FC964:
    ctx->pc = 0x807FC964u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC964u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 807FC964: lwz     r7, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC968:
    ctx->pc = 0x807FC968u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC968u)) return;
    // 807FC968: li      r3, 980
    ctx->gpr[3] = (u32)(s32)(980);

label_807FC96C:
    ctx->pc = 0x807FC96Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC96Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 807FC96C: sth     r0, 6(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC970:
    ctx->pc = 0x807FC970u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC970u)) return;
    // 807FC970: bl      0x8050A21C
    {
            ctx->lr = 0x807FC974u;
            ctx->pc = 0x8050A21Cu;
            return;
    }

label_807FC974:
    ctx->pc = 0x807FC974u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FC974u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 807FC974: lis     r3, -32641
    ctx->gpr[3] = ((u32)(s32)(-32641) << 16);

label_807FC978:
    ctx->pc = 0x807FC978u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC978u)) return;
    // 807FC978: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_807FC97C:
    ctx->pc = 0x807FC97Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC97Cu)) return;
    // 807FC97C: addi    r4, r3, 10960
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(10960);

label_807FC980:
    ctx->pc = 0x807FC980u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC980u)) return;
    // 807FC980: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_807FC984:
    ctx->pc = 0x807FC984u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC984u)) return;
    // 807FC984: bl      0x8050EC24
    {
            ctx->lr = 0x807FC988u;
            ctx->pc = 0x8050EC24u;
            return;
    }

label_807FC988:
    ctx->pc = 0x807FC988u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FC988u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 807FC988: b       0x807FCA34
    {
            goto label_807FCA34;
    }

label_807FC98C:
    ctx->pc = 0x807FC98Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FC98Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 807FC98C: lis     r3, -32640
    ctx->gpr[3] = ((u32)(s32)(-32640) << 16);

label_807FC990:
    ctx->pc = 0x807FC990u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC990u)) return;
    // 807FC990: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_807FC994:
    ctx->pc = 0x807FC994u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC994u)) return;
    // 807FC994: addi    r4, r3, -11204
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-11204);

label_807FC998:
    ctx->pc = 0x807FC998u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC998u)) return;
    // 807FC998: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_807FC99C:
    ctx->pc = 0x807FC99Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC99Cu)) return;
    // 807FC99C: bl      0x8050EC24
    {
            ctx->lr = 0x807FC9A0u;
            ctx->pc = 0x8050EC24u;
            return;
    }

label_807FC9A0:
    ctx->pc = 0x807FC9A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FC9A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 807FC9A0: lwz     r5, 32(r3)
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
label_807FC9A4:
    ctx->pc = 0x807FC9A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC9A4u)) return;
    // 807FC9A4: li      r6, 81
    ctx->gpr[6] = (u32)(s32)(81);

label_807FC9A8:
    ctx->pc = 0x807FC9A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC9A8u)) return;
    // 807FC9A8: li      r0, 10
    ctx->gpr[0] = (u32)(s32)(10);

label_807FC9AC:
    ctx->pc = 0x807FC9ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC9ACu)) return;
    // 807FC9AC: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_807FC9B0:
    ctx->pc = 0x807FC9B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC9B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 807FC9B0: stb     r6, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC9B4:
    ctx->pc = 0x807FC9B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC9B4u)) return;
    // 807FC9B4: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_807FC9B8:
    ctx->pc = 0x807FC9B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC9B8u)) return;
    // 807FC9B8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_807FC9BC:
    ctx->pc = 0x807FC9BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC9BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 807FC9BC: lwz     r7, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC9C0:
    ctx->pc = 0x807FC9C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC9C0u)) return;
    // 807FC9C0: li      r3, 980
    ctx->gpr[3] = (u32)(s32)(980);

label_807FC9C4:
    ctx->pc = 0x807FC9C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC9C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 807FC9C4: sth     r0, 6(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FC9C8:
    ctx->pc = 0x807FC9C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC9C8u)) return;
    // 807FC9C8: bl      0x8050A21C
    {
            ctx->lr = 0x807FC9CCu;
            ctx->pc = 0x8050A21Cu;
            return;
    }

label_807FC9CC:
    ctx->pc = 0x807FC9CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FC9CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 807FC9CC: bl      0x807F35C4
    {
            ctx->lr = 0x807FC9D0u;
            ctx->pc = 0x807F35C4u;
            return;
    }

label_807FC9D0:
    ctx->pc = 0x807FC9D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FC9D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 807FC9D0: lis     r3, -32641
    ctx->gpr[3] = ((u32)(s32)(-32641) << 16);

label_807FC9D4:
    ctx->pc = 0x807FC9D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC9D4u)) return;
    // 807FC9D4: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_807FC9D8:
    ctx->pc = 0x807FC9D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC9D8u)) return;
    // 807FC9D8: addi    r4, r3, 13124
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(13124);

label_807FC9DC:
    ctx->pc = 0x807FC9DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC9DCu)) return;
    // 807FC9DC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_807FC9E0:
    ctx->pc = 0x807FC9E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC9E0u)) return;
    // 807FC9E0: bl      0x8050EC24
    {
            ctx->lr = 0x807FC9E4u;
            ctx->pc = 0x8050EC24u;
            return;
    }

label_807FC9E4:
    ctx->pc = 0x807FC9E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FC9E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 807FC9E4: b       0x807FCA34
    {
            goto label_807FCA34;
    }

label_807FC9E8:
    ctx->pc = 0x807FC9E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FC9E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 807FC9E8: lis     r3, -32640
    ctx->gpr[3] = ((u32)(s32)(-32640) << 16);

label_807FC9EC:
    ctx->pc = 0x807FC9ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC9ECu)) return;
    // 807FC9EC: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_807FC9F0:
    ctx->pc = 0x807FC9F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC9F0u)) return;
    // 807FC9F0: addi    r4, r3, -11204
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-11204);

label_807FC9F4:
    ctx->pc = 0x807FC9F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC9F4u)) return;
    // 807FC9F4: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_807FC9F8:
    ctx->pc = 0x807FC9F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FC9F8u)) return;
    // 807FC9F8: bl      0x8050EC24
    {
            ctx->lr = 0x807FC9FCu;
            ctx->pc = 0x8050EC24u;
            return;
    }

label_807FC9FC:
    ctx->pc = 0x807FC9FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FC9FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 807FC9FC: lwz     r5, 32(r3)
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
label_807FCA00:
    ctx->pc = 0x807FCA00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCA00u)) return;
    // 807FCA00: li      r6, 82
    ctx->gpr[6] = (u32)(s32)(82);

label_807FCA04:
    ctx->pc = 0x807FCA04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCA04u)) return;
    // 807FCA04: li      r0, 10
    ctx->gpr[0] = (u32)(s32)(10);

label_807FCA08:
    ctx->pc = 0x807FCA08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCA08u)) return;
    // 807FCA08: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_807FCA0C:
    ctx->pc = 0x807FCA0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCA0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 807FCA0C: stb     r6, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCA10:
    ctx->pc = 0x807FCA10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCA10u)) return;
    // 807FCA10: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_807FCA14:
    ctx->pc = 0x807FCA14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCA14u)) return;
    // 807FCA14: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_807FCA18:
    ctx->pc = 0x807FCA18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCA18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 807FCA18: lwz     r7, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCA1C:
    ctx->pc = 0x807FCA1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCA1Cu)) return;
    // 807FCA1C: li      r3, 980
    ctx->gpr[3] = (u32)(s32)(980);

label_807FCA20:
    ctx->pc = 0x807FCA20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCA20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 807FCA20: sth     r0, 6(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCA24:
    ctx->pc = 0x807FCA24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCA24u)) return;
    // 807FCA24: bl      0x8050A21C
    {
            ctx->lr = 0x807FCA28u;
            ctx->pc = 0x8050A21Cu;
            return;
    }

label_807FCA28:
    ctx->pc = 0x807FCA28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FCA28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 807FCA28: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_807FCA2C:
    ctx->pc = 0x807FCA2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCA2Cu)) return;
    // 807FCA2C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_807FCA30:
    ctx->pc = 0x807FCA30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCA30u)) return;
    // 807FCA30: bl      0x804BD854
    {
            ctx->lr = 0x807FCA34u;
            ctx->pc = 0x804BD854u;
            return;
    }

label_807FCA34:
    ctx->pc = 0x807FCA34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 25u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FCA34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 25u : 1u;
    // 807FCA34: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_807FCA38:
    ctx->pc = 0x807FCA38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCA38u)) return;
    // 807FCA38: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_807FCA3C:
    ctx->pc = 0x807FCA3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCA3Cu)) return;
    // 807FCA3C: addi    r4, r4, -5402
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5402);

label_807FCA40:
    ctx->pc = 0x807FCA40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCA40u)) return;
    // 807FCA40: lis     r7, -28132
    ctx->gpr[7] = ((u32)(s32)(-28132) << 16);

label_807FCA44:
    ctx->pc = 0x807FCA44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCA44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 807FCA44: lha     r4, 0(r4)
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
label_807FCA48:
    ctx->pc = 0x807FCA48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCA48u)) return;
    // 807FCA48: lis     r6, -28132
    ctx->gpr[6] = ((u32)(s32)(-28132) << 16);

label_807FCA4C:
    ctx->pc = 0x807FCA4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCA4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 807FCA4C: lha     r0, -5404(r3)
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
label_807FCA50:
    ctx->pc = 0x807FCA50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCA50u)) return;
    // 807FCA50: lis     r5, -28132
    ctx->gpr[5] = ((u32)(s32)(-28132) << 16);

label_807FCA54:
    ctx->pc = 0x807FCA54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCA54u)) return;
    // 807FCA54: rlwinm r3, r4, 8, 0, 23
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[4], 8u) & 0xFFFFFF00u;
    }

label_807FCA58:
    ctx->pc = 0x807FCA58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCA58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 807FCA58: lfs     f0, -2244(r5)
    if (!ppc_fp_available_inline(ctx, 0x807FCA58u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-2244);
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
label_807FCA5C:
    ctx->pc = 0x807FCA5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCA5Cu)) return;
    // 807FCA5C: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_807FCA60:
    ctx->pc = 0x807FCA60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCA60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 807FCA60: lfs     f2, -2320(r7)
    if (!ppc_fp_available_inline(ctx, 0x807FCA60u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-2320);
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
label_807FCA64:
    ctx->pc = 0x807FCA64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCA64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 807FCA64: lfs     f1, -1936(r6)
    if (!ppc_fp_available_inline(ctx, 0x807FCA64u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-1936);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCA68:
    ctx->pc = 0x807FCA68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCA68u)) return;
    // 807FCA68: li      r5, -1
    ctx->gpr[5] = (u32)(s32)(-1);

label_807FCA6C:
    ctx->pc = 0x807FCA6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCA6Cu)) return;
    // 807FCA6C: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_807FCA70:
    ctx->pc = 0x807FCA70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCA70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 807FCA70: stw     r5, 476(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(476);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCA74:
    ctx->pc = 0x807FCA74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCA74u)) return;
    // 807FCA74: rlwinm r29, r0, 2, 22, 29
    {
        ctx->gpr[29] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0x000003FCu;
    }

label_807FCA78:
    ctx->pc = 0x807FCA78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCA78u)) return;
    // 807FCA78: addi    r4, r30, 192
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(192);

label_807FCA7C:
    ctx->pc = 0x807FCA7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCA7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 807FCA7C: lwzx    r4, r4, r29
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
label_807FCA80:
    ctx->pc = 0x807FCA80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCA80u)) return;
    // 807FCA80: addi    r3, r3, -25468
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25468);

label_807FCA84:
    ctx->pc = 0x807FCA84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCA84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 807FCA84: stfs     f2, 472(r31)
    if (!ppc_fp_available_inline(ctx, 0x807FCA84u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(472);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCA88:
    ctx->pc = 0x807FCA88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCA88u)) return;
    // 807FCA88: li      r5, 24
    ctx->gpr[5] = (u32)(s32)(24);

label_807FCA8C:
    ctx->pc = 0x807FCA8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCA8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807FCA8C: stfs     f1, 468(r31)
    if (!ppc_fp_available_inline(ctx, 0x807FCA8Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(468);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCA90:
    ctx->pc = 0x807FCA90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCA90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 807FCA90: stfs     f0, 464(r31)
    if (!ppc_fp_available_inline(ctx, 0x807FCA90u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(464);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCA94:
    ctx->pc = 0x807FCA94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCA94u)) return;
    // 807FCA94: bl      0x800031E8
    {
            ctx->lr = 0x807FCA98u;
            ctx->pc = 0x800031E8u;
            return;
    }

label_807FCA98:
    ctx->pc = 0x807FCA98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FCA98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 807FCA98: addi    r4, r30, 168
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(168);

label_807FCA9C:
    ctx->pc = 0x807FCA9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCA9Cu)) return;
    // 807FCA9C: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_807FCAA0:
    ctx->pc = 0x807FCAA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCAA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 807FCAA0: lwzx    r4, r4, r29
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
label_807FCAA4:
    ctx->pc = 0x807FCAA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCAA4u)) return;
    // 807FCAA4: addi    r3, r3, -25492
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25492);

label_807FCAA8:
    ctx->pc = 0x807FCAA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCAA8u)) return;
    // 807FCAA8: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_807FCAAC:
    ctx->pc = 0x807FCAACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCAACu)) return;
    // 807FCAAC: bl      0x800031E8
    {
            ctx->lr = 0x807FCAB0u;
            ctx->pc = 0x800031E8u;
            return;
    }

label_807FCAB0:
    ctx->pc = 0x807FCAB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FCAB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 807FCAB0: addi    r4, r30, 180
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(180);

label_807FCAB4:
    ctx->pc = 0x807FCAB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCAB4u)) return;
    // 807FCAB4: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_807FCAB8:
    ctx->pc = 0x807FCAB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCAB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 807FCAB8: lwzx    r4, r4, r29
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
label_807FCABC:
    ctx->pc = 0x807FCABCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCABCu)) return;
    // 807FCABC: addi    r3, r3, -25500
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25500);

label_807FCAC0:
    ctx->pc = 0x807FCAC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCAC0u)) return;
    // 807FCAC0: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_807FCAC4:
    ctx->pc = 0x807FCAC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCAC4u)) return;
    // 807FCAC4: bl      0x800031E8
    {
            ctx->lr = 0x807FCAC8u;
            ctx->pc = 0x800031E8u;
            return;
    }

label_807FCAC8:
    ctx->pc = 0x807FCAC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FCAC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 807FCAC8: addi    r4, r30, 156
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(156);

label_807FCACC:
    ctx->pc = 0x807FCACCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCACCu)) return;
    // 807FCACC: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_807FCAD0:
    ctx->pc = 0x807FCAD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCAD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 807FCAD0: lwzx    r4, r4, r29
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
label_807FCAD4:
    ctx->pc = 0x807FCAD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCAD4u)) return;
    // 807FCAD4: addi    r3, r3, -25484
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25484);

label_807FCAD8:
    ctx->pc = 0x807FCAD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCAD8u)) return;
    // 807FCAD8: li      r5, 12
    ctx->gpr[5] = (u32)(s32)(12);

label_807FCADC:
    ctx->pc = 0x807FCADCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCADCu)) return;
    // 807FCADC: bl      0x800031E8
    {
            ctx->lr = 0x807FCAE0u;
            ctx->pc = 0x800031E8u;
            return;
    }

label_807FCAE0:
    ctx->pc = 0x807FCAE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FCAE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 807FCAE0: bl      0x8046C930
    {
            ctx->lr = 0x807FCAE4u;
            ctx->pc = 0x8046C930u;
            return;
    }

label_807FCAE4:
    ctx->pc = 0x807FCAE4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FCAE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 807FCAE4: lwz     r0, 36(r1)
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
label_807FCAE8:
    ctx->pc = 0x807FCAE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCAE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 807FCAE8: lwz     r31, 28(r1)
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
label_807FCAEC:
    ctx->pc = 0x807FCAECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCAECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 807FCAEC: lwz     r30, 24(r1)
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
label_807FCAF0:
    ctx->pc = 0x807FCAF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCAF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 807FCAF0: lwz     r29, 20(r1)
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
label_807FCAF4:
    ctx->pc = 0x807FCAF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x807FCAF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807FCAF4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCAF8:
    ctx->pc = 0x807FCAF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCAF8u)) return;
    // 807FCAF8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_807FCAFC:
    ctx->pc = 0x807FCAFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCAFCu)) return;
    // 807FCAFC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_807FC740;
        }
    }

label_807FCB00:
    ctx->pc = 0x807FCB00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 17u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FCB00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 17u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 807FCB00: stwu     r1, -32(r1)
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
label_807FCB04:
    ctx->pc = 0x807FCB04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCB04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 807FCB04: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCB08:
    ctx->pc = 0x807FCB08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCB08u)) return;
    // 807FCB08: lis     r5, -28099
    ctx->gpr[5] = ((u32)(s32)(-28099) << 16);

label_807FCB0C:
    ctx->pc = 0x807FCB0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCB0Cu)) return;
    // 807FCB0C: lis     r4, -28099
    ctx->gpr[4] = ((u32)(s32)(-28099) << 16);

label_807FCB10:
    ctx->pc = 0x807FCB10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCB10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 807FCB10: stw     r0, 36(r1)
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
label_807FCB14:
    ctx->pc = 0x807FCB14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCB14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 807FCB14: stw     r31, 28(r1)
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
label_807FCB18:
    ctx->pc = 0x807FCB18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCB18u)) return;
    // 807FCB18: addi    r31, r4, -7336
    ctx->gpr[31] = ctx->gpr[4] + (u32)(s32)(-7336);

label_807FCB1C:
    ctx->pc = 0x807FCB1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCB1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 807FCB1C: stw     r30, 24(r1)
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
label_807FCB20:
    ctx->pc = 0x807FCB20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCB20u)) return;
    // 807FCB20: addi    r30, r5, -19488
    ctx->gpr[30] = ctx->gpr[5] + (u32)(s32)(-19488);

label_807FCB24:
    ctx->pc = 0x807FCB24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCB24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 807FCB24: stw     r29, 20(r1)
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
label_807FCB28:
    ctx->pc = 0x807FCB28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCB28u)) return;
    // 807FCB28: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_807FCB2C:
    ctx->pc = 0x807FCB2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCB2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 807FCB2C: stw     r28, 16(r1)
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
label_807FCB30:
    ctx->pc = 0x807FCB30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCB30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 807FCB30: lwz     r9, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCB34:
    ctx->pc = 0x807FCB34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCB34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 807FCB34: lbz     r0, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCB38:
    ctx->pc = 0x807FCB38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCB38u)) return;
    // 807FCB38: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_807FCB3C:
    ctx->pc = 0x807FCB3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCB3Cu)) return;
    // 807FCB3C: cmpwi   r0, 1
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

label_807FCB40:
    ctx->pc = 0x807FCB40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCB40u)) return;
    // 807FCB40: bc    12, 2, 0x807FCEBC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_807FCEBC;
        }
    }

label_807FCB44:
    ctx->pc = 0x807FCB44u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FCB44u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 807FCB44: bc    4, 0, 0x807FCEC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_807FCEC0;
        }
    }

label_807FCB48:
    ctx->pc = 0x807FCB48u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FCB48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 807FCB48: cmpwi   r0, 0
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

label_807FCB4C:
    ctx->pc = 0x807FCB4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCB4Cu)) return;
    // 807FCB4C: bc    4, 0, 0x807FCB58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_807FCB58;
        }
    }

label_807FCB50:
    ctx->pc = 0x807FCB50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FCB50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 807FCB50: b       0x807FCEC0
    {
            goto label_807FCEC0;
    }

label_807FCB54:
    ctx->pc = 0x807FCB54u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FCB54u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 807FCB54: b       0x807FCEC0
    {
            goto label_807FCEC0;
    }

label_807FCB58:
    ctx->pc = 0x807FCB58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 101u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FCB58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 101u : 1u;
    // 807FCB58: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_807FCB5C:
    ctx->pc = 0x807FCB5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCB5Cu)) return;
    // 807FCB5C: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_807FCB60:
    ctx->pc = 0x807FCB60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCB60u)) return;
    // 807FCB60: addi    r6, r4, -5402
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(-5402);

label_807FCB64:
    ctx->pc = 0x807FCB64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCB64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 97u : 0u;
    // 807FCB64: stw     r9, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCB68:
    ctx->pc = 0x807FCB68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCB68u)) return;
    // 807FCB68: addi    r5, r3, -5404
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-5404);

label_807FCB6C:
    ctx->pc = 0x807FCB6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCB6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 95u : 0u;
    // 807FCB6C: lha     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCB70:
    ctx->pc = 0x807FCB70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCB70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 94u : 0u;
    // 807FCB70: lha     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCB74:
    ctx->pc = 0x807FCB74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCB74u)) return;
    // 807FCB74: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_807FCB78:
    ctx->pc = 0x807FCB78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCB78u)) return;
    // 807FCB78: rlwinm r4, r4, 8, 0, 23
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 8u) & 0xFFFFFF00u;
    }

label_807FCB7C:
    ctx->pc = 0x807FCB7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCB7Cu)) return;
    // 807FCB7C: addi    r7, r31, 1632
    ctx->gpr[7] = ctx->gpr[31] + (u32)(s32)(1632);

label_807FCB80:
    ctx->pc = 0x807FCB80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCB80u)) return;
    // 807FCB80: or   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] | ctx->gpr[0];
    }

label_807FCB84:
    ctx->pc = 0x807FCB84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCB84u)) return;
    // 807FCB84: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_807FCB88:
    ctx->pc = 0x807FCB88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCB88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 88u : 0u;
    // 807FCB88: stb     r4, 6240(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(6240);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCB8C:
    ctx->pc = 0x807FCB8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCB8Cu)) return;
    // 807FCB8C: addi    r8, r31, 992
    ctx->gpr[8] = ctx->gpr[31] + (u32)(s32)(992);

label_807FCB90:
    ctx->pc = 0x807FCB90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCB90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 86u : 0u;
    // 807FCB90: stb     r4, 6241(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(6241);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCB94:
    ctx->pc = 0x807FCB94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCB94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 85u : 0u;
    // 807FCB94: stb     r3, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCB98:
    ctx->pc = 0x807FCB98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCB98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 84u : 0u;
    // 807FCB98: stw     r0, 0(r7)
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
label_807FCB9C:
    ctx->pc = 0x807FCB9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCB9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 83u : 0u;
    // 807FCB9C: stw     r0, 4(r7)
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
label_807FCBA0:
    ctx->pc = 0x807FCBA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCBA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 82u : 0u;
    // 807FCBA0: stw     r0, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCBA4:
    ctx->pc = 0x807FCBA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCBA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 81u : 0u;
    // 807FCBA4: stw     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCBA8:
    ctx->pc = 0x807FCBA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCBA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 80u : 0u;
    // 807FCBA8: stw     r0, 16(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCBAC:
    ctx->pc = 0x807FCBACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCBACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 79u : 0u;
    // 807FCBAC: stw     r0, 20(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCBB0:
    ctx->pc = 0x807FCBB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCBB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 78u : 0u;
    // 807FCBB0: stw     r0, 24(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCBB4:
    ctx->pc = 0x807FCBB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCBB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 77u : 0u;
    // 807FCBB4: stw     r0, 28(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCBB8:
    ctx->pc = 0x807FCBB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCBB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 76u : 0u;
    // 807FCBB8: stw     r0, 32(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCBBC:
    ctx->pc = 0x807FCBBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCBBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 75u : 0u;
    // 807FCBBC: stw     r0, 36(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCBC0:
    ctx->pc = 0x807FCBC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCBC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 74u : 0u;
    // 807FCBC0: stw     r0, 40(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCBC4:
    ctx->pc = 0x807FCBC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCBC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 73u : 0u;
    // 807FCBC4: stw     r0, 44(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCBC8:
    ctx->pc = 0x807FCBC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCBC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 72u : 0u;
    // 807FCBC8: stw     r0, 48(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCBCC:
    ctx->pc = 0x807FCBCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCBCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 71u : 0u;
    // 807FCBCC: stw     r0, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCBD0:
    ctx->pc = 0x807FCBD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCBD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 70u : 0u;
    // 807FCBD0: stw     r0, 52(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCBD4:
    ctx->pc = 0x807FCBD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCBD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 69u : 0u;
    // 807FCBD4: stw     r0, 36(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCBD8:
    ctx->pc = 0x807FCBD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCBD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 68u : 0u;
    // 807FCBD8: stw     r0, 56(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCBDC:
    ctx->pc = 0x807FCBDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCBDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 67u : 0u;
    // 807FCBDC: stw     r0, 68(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCBE0:
    ctx->pc = 0x807FCBE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCBE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 66u : 0u;
    // 807FCBE0: stw     r0, 60(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCBE4:
    ctx->pc = 0x807FCBE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCBE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 65u : 0u;
    // 807FCBE4: stw     r0, 100(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCBE8:
    ctx->pc = 0x807FCBE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCBE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 64u : 0u;
    // 807FCBE8: stw     r0, 64(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCBEC:
    ctx->pc = 0x807FCBECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCBECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 63u : 0u;
    // 807FCBEC: stw     r0, 132(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCBF0:
    ctx->pc = 0x807FCBF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCBF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 62u : 0u;
    // 807FCBF0: stw     r0, 68(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCBF4:
    ctx->pc = 0x807FCBF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCBF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 61u : 0u;
    // 807FCBF4: stw     r0, 164(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCBF8:
    ctx->pc = 0x807FCBF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCBF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 60u : 0u;
    // 807FCBF8: stw     r0, 72(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCBFC:
    ctx->pc = 0x807FCBFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCBFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 59u : 0u;
    // 807FCBFC: stw     r0, 196(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(196);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCC00:
    ctx->pc = 0x807FCC00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCC00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 58u : 0u;
    // 807FCC00: stw     r0, 76(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCC04:
    ctx->pc = 0x807FCC04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCC04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 57u : 0u;
    // 807FCC04: stw     r0, 228(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(228);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCC08:
    ctx->pc = 0x807FCC08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCC08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 56u : 0u;
    // 807FCC08: stw     r0, 80(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCC0C:
    ctx->pc = 0x807FCC0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCC0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 55u : 0u;
    // 807FCC0C: stw     r0, 260(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(260);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCC10:
    ctx->pc = 0x807FCC10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCC10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 54u : 0u;
    // 807FCC10: stw     r0, 84(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCC14:
    ctx->pc = 0x807FCC14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCC14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 53u : 0u;
    // 807FCC14: stw     r0, 292(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(292);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCC18:
    ctx->pc = 0x807FCC18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCC18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 52u : 0u;
    // 807FCC18: stw     r0, 88(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCC1C:
    ctx->pc = 0x807FCC1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCC1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 807FCC1C: stw     r0, 324(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCC20:
    ctx->pc = 0x807FCC20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCC20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 50u : 0u;
    // 807FCC20: stw     r0, 92(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCC24:
    ctx->pc = 0x807FCC24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCC24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 807FCC24: stw     r0, 356(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(356);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCC28:
    ctx->pc = 0x807FCC28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCC28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 48u : 0u;
    // 807FCC28: stw     r0, 96(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCC2C:
    ctx->pc = 0x807FCC2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCC2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 47u : 0u;
    // 807FCC2C: stw     r0, 388(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(388);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCC30:
    ctx->pc = 0x807FCC30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCC30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 46u : 0u;
    // 807FCC30: stw     r0, 100(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCC34:
    ctx->pc = 0x807FCC34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCC34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 45u : 0u;
    // 807FCC34: stw     r0, 420(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(420);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCC38:
    ctx->pc = 0x807FCC38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCC38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 44u : 0u;
    // 807FCC38: stw     r0, 104(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCC3C:
    ctx->pc = 0x807FCC3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCC3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 43u : 0u;
    // 807FCC3C: stw     r0, 452(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(452);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCC40:
    ctx->pc = 0x807FCC40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCC40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 42u : 0u;
    // 807FCC40: stw     r0, 108(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCC44:
    ctx->pc = 0x807FCC44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCC44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 41u : 0u;
    // 807FCC44: stw     r0, 484(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(484);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCC48:
    ctx->pc = 0x807FCC48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCC48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 40u : 0u;
    // 807FCC48: stw     r0, 112(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCC4C:
    ctx->pc = 0x807FCC4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCC4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 39u : 0u;
    // 807FCC4C: stw     r0, 516(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(516);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCC50:
    ctx->pc = 0x807FCC50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCC50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 38u : 0u;
    // 807FCC50: stw     r0, 116(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCC54:
    ctx->pc = 0x807FCC54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCC54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 37u : 0u;
    // 807FCC54: stw     r0, 548(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(548);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCC58:
    ctx->pc = 0x807FCC58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCC58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 36u : 0u;
    // 807FCC58: stw     r0, 120(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(120);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCC5C:
    ctx->pc = 0x807FCC5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCC5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 35u : 0u;
    // 807FCC5C: stw     r0, 580(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(580);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCC60:
    ctx->pc = 0x807FCC60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCC60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 34u : 0u;
    // 807FCC60: stw     r0, 124(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCC64:
    ctx->pc = 0x807FCC64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCC64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 33u : 0u;
    // 807FCC64: stw     r0, 612(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(612);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCC68:
    ctx->pc = 0x807FCC68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCC68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 32u : 0u;
    // 807FCC68: lha     r3, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCC6C:
    ctx->pc = 0x807FCC6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCC6Cu)) return;
    // 807FCC6C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_807FCC70:
    ctx->pc = 0x807FCC70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCC70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 30u : 0u;
    // 807FCC70: lha     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCC74:
    ctx->pc = 0x807FCC74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCC74u)) return;
    // 807FCC74: lis     r4, -28132
    ctx->gpr[4] = ((u32)(s32)(-28132) << 16);

label_807FCC78:
    ctx->pc = 0x807FCC78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCC78u)) return;
    // 807FCC78: rlwinm r3, r3, 8, 0, 23
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 8u) & 0xFFFFFF00u;
    }

label_807FCC7C:
    ctx->pc = 0x807FCC7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCC7Cu)) return;
    // 807FCC7C: lis     r5, -28132
    ctx->gpr[5] = ((u32)(s32)(-28132) << 16);

label_807FCC80:
    ctx->pc = 0x807FCC80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCC80u)) return;
    // 807FCC80: addi    r6, r4, -1960
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(-1960);

label_807FCC84:
    ctx->pc = 0x807FCC84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCC84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 807FCC84: lfs     f0, -2320(r5)
    if (!ppc_fp_available_inline(ctx, 0x807FCC84u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-2320);
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
label_807FCC88:
    ctx->pc = 0x807FCC88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCC88u)) return;
    // 807FCC88: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_807FCC8C:
    ctx->pc = 0x807FCC8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCC8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 807FCC8C: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x807FCC8Cu)) return;
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
label_807FCC90:
    ctx->pc = 0x807FCC90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCC90u)) return;
    // 807FCC90: addi    r4, r31, 412
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(412);

label_807FCC94:
    ctx->pc = 0x807FCC94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCC94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 807FCC94: stw     r7, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCC98:
    ctx->pc = 0x807FCC98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCC98u)) return;
    // 807FCC98: rlwinm r0, r0, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
    }

label_807FCC9C:
    ctx->pc = 0x807FCC9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCC9Cu)) return;
    // 807FCC9C: cmpwi   r0, 1
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

label_807FCCA0:
    ctx->pc = 0x807FCCA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCCA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 807FCCA0: stw     r7, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCCA4:
    ctx->pc = 0x807FCCA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCCA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 807FCCA4: stw     r7, 436(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(436);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCCA8:
    ctx->pc = 0x807FCCA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCCA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 807FCCA8: stw     r7, 432(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(432);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCCAC:
    ctx->pc = 0x807FCCACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCCACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 807FCCAC: stfs     f1, 444(r31)
    if (!ppc_fp_available_inline(ctx, 0x807FCCACu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(444);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCCB0:
    ctx->pc = 0x807FCCB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCCB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 807FCCB0: stw     r7, 428(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(428);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCCB4:
    ctx->pc = 0x807FCCB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCCB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 807FCCB4: stw     r7, 424(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(424);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCCB8:
    ctx->pc = 0x807FCCB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCCB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 807FCCB8: stw     r7, 400(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(400);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCCBC:
    ctx->pc = 0x807FCCBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCCBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 807FCCBC: stfs     f0, 8(r4)
    if (!ppc_fp_available_inline(ctx, 0x807FCCBCu)) return;
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
label_807FCCC0:
    ctx->pc = 0x807FCCC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCCC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 807FCCC0: stfs     f0, 4(r4)
    if (!ppc_fp_available_inline(ctx, 0x807FCCC0u)) return;
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
label_807FCCC4:
    ctx->pc = 0x807FCCC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCCC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 807FCCC4: stfs     f0, 412(r31)
    if (!ppc_fp_available_inline(ctx, 0x807FCCC4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(412);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCCC8:
    ctx->pc = 0x807FCCC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCCC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 807FCCC8: stfs     f0, 408(r31)
    if (!ppc_fp_available_inline(ctx, 0x807FCCC8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(408);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCCCC:
    ctx->pc = 0x807FCCCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCCCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 807FCCCC: stw     r7, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCCD0:
    ctx->pc = 0x807FCCD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCCD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 807FCCD0: stfs     f0, 16(r31)
    if (!ppc_fp_available_inline(ctx, 0x807FCCD0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCCD4:
    ctx->pc = 0x807FCCD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCCD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 807FCCD4: stfs     f0, 20(r31)
    if (!ppc_fp_available_inline(ctx, 0x807FCCD4u)) return;
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
label_807FCCD8:
    ctx->pc = 0x807FCCD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCCD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 807FCCD8: stw     r7, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCCDC:
    ctx->pc = 0x807FCCDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCCDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 807FCCDC: stw     r7, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCCE0:
    ctx->pc = 0x807FCCE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCCE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807FCCE0: stw     r7, 136(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(136);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCCE4:
    ctx->pc = 0x807FCCE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCCE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 807FCCE4: stw     r7, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCCE8:
    ctx->pc = 0x807FCCE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCCE8u)) return;
    // 807FCCE8: bc    12, 2, 0x807FCD60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_807FCD60;
        }
    }

label_807FCCEC:
    ctx->pc = 0x807FCCECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FCCECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 807FCCEC: bc    4, 0, 0x807FCCFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_807FCCFC;
        }
    }

label_807FCCF0:
    ctx->pc = 0x807FCCF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FCCF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 807FCCF0: cmpwi   r0, 0
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

label_807FCCF4:
    ctx->pc = 0x807FCCF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCCF4u)) return;
    // 807FCCF4: bc    4, 0, 0x807FCD08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_807FCD08;
        }
    }

label_807FCCF8:
    ctx->pc = 0x807FCCF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FCCF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 807FCCF8: b       0x807FCE08
    {
            goto label_807FCE08;
    }

label_807FCCFC:
    ctx->pc = 0x807FCCFCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FCCFCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 807FCCFC: cmpwi   r0, 3
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

label_807FCD00:
    ctx->pc = 0x807FCD00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCD00u)) return;
    // 807FCD00: bc    4, 0, 0x807FCE08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_807FCE08;
        }
    }

label_807FCD04:
    ctx->pc = 0x807FCD04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FCD04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 807FCD04: b       0x807FCDBC
    {
            goto label_807FCDBC;
    }

label_807FCD08:
    ctx->pc = 0x807FCD08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FCD08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 807FCD08: lis     r3, -32640
    ctx->gpr[3] = ((u32)(s32)(-32640) << 16);

label_807FCD0C:
    ctx->pc = 0x807FCD0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCD0Cu)) return;
    // 807FCD0C: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_807FCD10:
    ctx->pc = 0x807FCD10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCD10u)) return;
    // 807FCD10: addi    r4, r3, -11204
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-11204);

label_807FCD14:
    ctx->pc = 0x807FCD14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCD14u)) return;
    // 807FCD14: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_807FCD18:
    ctx->pc = 0x807FCD18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCD18u)) return;
    // 807FCD18: bl      0x8050EC24
    {
            ctx->lr = 0x807FCD1Cu;
            ctx->pc = 0x8050EC24u;
            return;
    }

label_807FCD1C:
    ctx->pc = 0x807FCD1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FCD1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 807FCD1C: lwz     r5, 32(r3)
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
label_807FCD20:
    ctx->pc = 0x807FCD20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCD20u)) return;
    // 807FCD20: li      r6, 81
    ctx->gpr[6] = (u32)(s32)(81);

label_807FCD24:
    ctx->pc = 0x807FCD24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCD24u)) return;
    // 807FCD24: li      r0, 10
    ctx->gpr[0] = (u32)(s32)(10);

label_807FCD28:
    ctx->pc = 0x807FCD28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCD28u)) return;
    // 807FCD28: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_807FCD2C:
    ctx->pc = 0x807FCD2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCD2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 807FCD2C: stb     r6, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCD30:
    ctx->pc = 0x807FCD30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCD30u)) return;
    // 807FCD30: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_807FCD34:
    ctx->pc = 0x807FCD34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCD34u)) return;
    // 807FCD34: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_807FCD38:
    ctx->pc = 0x807FCD38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCD38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 807FCD38: lwz     r7, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCD3C:
    ctx->pc = 0x807FCD3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCD3Cu)) return;
    // 807FCD3C: li      r3, 980
    ctx->gpr[3] = (u32)(s32)(980);

label_807FCD40:
    ctx->pc = 0x807FCD40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCD40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 807FCD40: sth     r0, 6(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCD44:
    ctx->pc = 0x807FCD44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCD44u)) return;
    // 807FCD44: bl      0x8050A21C
    {
            ctx->lr = 0x807FCD48u;
            ctx->pc = 0x8050A21Cu;
            return;
    }

label_807FCD48:
    ctx->pc = 0x807FCD48u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FCD48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 807FCD48: lis     r3, -32641
    ctx->gpr[3] = ((u32)(s32)(-32641) << 16);

label_807FCD4C:
    ctx->pc = 0x807FCD4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCD4Cu)) return;
    // 807FCD4C: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_807FCD50:
    ctx->pc = 0x807FCD50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCD50u)) return;
    // 807FCD50: addi    r4, r3, 10960
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(10960);

label_807FCD54:
    ctx->pc = 0x807FCD54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCD54u)) return;
    // 807FCD54: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_807FCD58:
    ctx->pc = 0x807FCD58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCD58u)) return;
    // 807FCD58: bl      0x8050EC24
    {
            ctx->lr = 0x807FCD5Cu;
            ctx->pc = 0x8050EC24u;
            return;
    }

label_807FCD5C:
    ctx->pc = 0x807FCD5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FCD5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 807FCD5C: b       0x807FCE08
    {
            goto label_807FCE08;
    }

label_807FCD60:
    ctx->pc = 0x807FCD60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FCD60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 807FCD60: lis     r3, -32640
    ctx->gpr[3] = ((u32)(s32)(-32640) << 16);

label_807FCD64:
    ctx->pc = 0x807FCD64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCD64u)) return;
    // 807FCD64: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_807FCD68:
    ctx->pc = 0x807FCD68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCD68u)) return;
    // 807FCD68: addi    r4, r3, -11204
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-11204);

label_807FCD6C:
    ctx->pc = 0x807FCD6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCD6Cu)) return;
    // 807FCD6C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_807FCD70:
    ctx->pc = 0x807FCD70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCD70u)) return;
    // 807FCD70: bl      0x8050EC24
    {
            ctx->lr = 0x807FCD74u;
            ctx->pc = 0x8050EC24u;
            return;
    }

label_807FCD74:
    ctx->pc = 0x807FCD74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FCD74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 807FCD74: lwz     r5, 32(r3)
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
label_807FCD78:
    ctx->pc = 0x807FCD78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCD78u)) return;
    // 807FCD78: li      r6, 81
    ctx->gpr[6] = (u32)(s32)(81);

label_807FCD7C:
    ctx->pc = 0x807FCD7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCD7Cu)) return;
    // 807FCD7C: li      r0, 10
    ctx->gpr[0] = (u32)(s32)(10);

label_807FCD80:
    ctx->pc = 0x807FCD80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCD80u)) return;
    // 807FCD80: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_807FCD84:
    ctx->pc = 0x807FCD84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCD84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 807FCD84: stb     r6, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCD88:
    ctx->pc = 0x807FCD88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCD88u)) return;
    // 807FCD88: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_807FCD8C:
    ctx->pc = 0x807FCD8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCD8Cu)) return;
    // 807FCD8C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_807FCD90:
    ctx->pc = 0x807FCD90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCD90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 807FCD90: lwz     r7, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCD94:
    ctx->pc = 0x807FCD94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCD94u)) return;
    // 807FCD94: li      r3, 980
    ctx->gpr[3] = (u32)(s32)(980);

label_807FCD98:
    ctx->pc = 0x807FCD98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCD98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 807FCD98: sth     r0, 6(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCD9C:
    ctx->pc = 0x807FCD9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCD9Cu)) return;
    // 807FCD9C: bl      0x8050A21C
    {
            ctx->lr = 0x807FCDA0u;
            ctx->pc = 0x8050A21Cu;
            return;
    }

label_807FCDA0:
    ctx->pc = 0x807FCDA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FCDA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 807FCDA0: bl      0x807F35C4
    {
            ctx->lr = 0x807FCDA4u;
            ctx->pc = 0x807F35C4u;
            return;
    }

label_807FCDA4:
    ctx->pc = 0x807FCDA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FCDA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 807FCDA4: lis     r3, -32641
    ctx->gpr[3] = ((u32)(s32)(-32641) << 16);

label_807FCDA8:
    ctx->pc = 0x807FCDA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCDA8u)) return;
    // 807FCDA8: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_807FCDAC:
    ctx->pc = 0x807FCDACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCDACu)) return;
    // 807FCDAC: addi    r4, r3, 13124
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(13124);

label_807FCDB0:
    ctx->pc = 0x807FCDB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCDB0u)) return;
    // 807FCDB0: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_807FCDB4:
    ctx->pc = 0x807FCDB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCDB4u)) return;
    // 807FCDB4: bl      0x8050EC24
    {
            ctx->lr = 0x807FCDB8u;
            ctx->pc = 0x8050EC24u;
            return;
    }

label_807FCDB8:
    ctx->pc = 0x807FCDB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FCDB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 807FCDB8: b       0x807FCE08
    {
            goto label_807FCE08;
    }

label_807FCDBC:
    ctx->pc = 0x807FCDBCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FCDBCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 807FCDBC: lis     r3, -32640
    ctx->gpr[3] = ((u32)(s32)(-32640) << 16);

label_807FCDC0:
    ctx->pc = 0x807FCDC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCDC0u)) return;
    // 807FCDC0: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_807FCDC4:
    ctx->pc = 0x807FCDC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCDC4u)) return;
    // 807FCDC4: addi    r4, r3, -11204
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-11204);

label_807FCDC8:
    ctx->pc = 0x807FCDC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCDC8u)) return;
    // 807FCDC8: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_807FCDCC:
    ctx->pc = 0x807FCDCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCDCCu)) return;
    // 807FCDCC: bl      0x8050EC24
    {
            ctx->lr = 0x807FCDD0u;
            ctx->pc = 0x8050EC24u;
            return;
    }

label_807FCDD0:
    ctx->pc = 0x807FCDD0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FCDD0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 807FCDD0: lwz     r5, 32(r3)
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
label_807FCDD4:
    ctx->pc = 0x807FCDD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCDD4u)) return;
    // 807FCDD4: li      r6, 82
    ctx->gpr[6] = (u32)(s32)(82);

label_807FCDD8:
    ctx->pc = 0x807FCDD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCDD8u)) return;
    // 807FCDD8: li      r0, 10
    ctx->gpr[0] = (u32)(s32)(10);

label_807FCDDC:
    ctx->pc = 0x807FCDDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCDDCu)) return;
    // 807FCDDC: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_807FCDE0:
    ctx->pc = 0x807FCDE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCDE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 807FCDE0: stb     r6, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCDE4:
    ctx->pc = 0x807FCDE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCDE4u)) return;
    // 807FCDE4: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_807FCDE8:
    ctx->pc = 0x807FCDE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCDE8u)) return;
    // 807FCDE8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_807FCDEC:
    ctx->pc = 0x807FCDECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCDECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 807FCDEC: lwz     r7, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCDF0:
    ctx->pc = 0x807FCDF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCDF0u)) return;
    // 807FCDF0: li      r3, 980
    ctx->gpr[3] = (u32)(s32)(980);

label_807FCDF4:
    ctx->pc = 0x807FCDF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCDF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 807FCDF4: sth     r0, 6(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCDF8:
    ctx->pc = 0x807FCDF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCDF8u)) return;
    // 807FCDF8: bl      0x8050A21C
    {
            ctx->lr = 0x807FCDFCu;
            ctx->pc = 0x8050A21Cu;
            return;
    }

label_807FCDFC:
    ctx->pc = 0x807FCDFCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FCDFCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 807FCDFC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_807FCE00:
    ctx->pc = 0x807FCE00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCE00u)) return;
    // 807FCE00: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_807FCE04:
    ctx->pc = 0x807FCE04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCE04u)) return;
    // 807FCE04: bl      0x804BD854
    {
            ctx->lr = 0x807FCE08u;
            ctx->pc = 0x804BD854u;
            return;
    }

label_807FCE08:
    ctx->pc = 0x807FCE08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 25u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FCE08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 25u : 1u;
    // 807FCE08: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_807FCE0C:
    ctx->pc = 0x807FCE0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCE0Cu)) return;
    // 807FCE0C: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_807FCE10:
    ctx->pc = 0x807FCE10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCE10u)) return;
    // 807FCE10: addi    r4, r4, -5402
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5402);

label_807FCE14:
    ctx->pc = 0x807FCE14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCE14u)) return;
    // 807FCE14: lis     r7, -28132
    ctx->gpr[7] = ((u32)(s32)(-28132) << 16);

label_807FCE18:
    ctx->pc = 0x807FCE18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCE18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 807FCE18: lha     r4, 0(r4)
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
label_807FCE1C:
    ctx->pc = 0x807FCE1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCE1Cu)) return;
    // 807FCE1C: lis     r6, -28132
    ctx->gpr[6] = ((u32)(s32)(-28132) << 16);

label_807FCE20:
    ctx->pc = 0x807FCE20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCE20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 807FCE20: lha     r0, -5404(r3)
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
label_807FCE24:
    ctx->pc = 0x807FCE24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCE24u)) return;
    // 807FCE24: lis     r5, -28132
    ctx->gpr[5] = ((u32)(s32)(-28132) << 16);

label_807FCE28:
    ctx->pc = 0x807FCE28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCE28u)) return;
    // 807FCE28: rlwinm r3, r4, 8, 0, 23
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[4], 8u) & 0xFFFFFF00u;
    }

label_807FCE2C:
    ctx->pc = 0x807FCE2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCE2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 807FCE2C: lfs     f0, -2244(r5)
    if (!ppc_fp_available_inline(ctx, 0x807FCE2Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-2244);
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
label_807FCE30:
    ctx->pc = 0x807FCE30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCE30u)) return;
    // 807FCE30: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_807FCE34:
    ctx->pc = 0x807FCE34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCE34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 807FCE34: lfs     f2, -2320(r7)
    if (!ppc_fp_available_inline(ctx, 0x807FCE34u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-2320);
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
label_807FCE38:
    ctx->pc = 0x807FCE38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCE38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 807FCE38: lfs     f1, -1936(r6)
    if (!ppc_fp_available_inline(ctx, 0x807FCE38u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-1936);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCE3C:
    ctx->pc = 0x807FCE3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCE3Cu)) return;
    // 807FCE3C: li      r5, -1
    ctx->gpr[5] = (u32)(s32)(-1);

label_807FCE40:
    ctx->pc = 0x807FCE40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCE40u)) return;
    // 807FCE40: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_807FCE44:
    ctx->pc = 0x807FCE44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCE44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 807FCE44: stw     r5, 476(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(476);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCE48:
    ctx->pc = 0x807FCE48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCE48u)) return;
    // 807FCE48: rlwinm r28, r0, 2, 22, 29
    {
        ctx->gpr[28] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0x000003FCu;
    }

label_807FCE4C:
    ctx->pc = 0x807FCE4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCE4Cu)) return;
    // 807FCE4C: addi    r4, r30, 192
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(192);

label_807FCE50:
    ctx->pc = 0x807FCE50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCE50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 807FCE50: lwzx    r4, r4, r28
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
label_807FCE54:
    ctx->pc = 0x807FCE54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCE54u)) return;
    // 807FCE54: addi    r3, r3, -25468
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25468);

label_807FCE58:
    ctx->pc = 0x807FCE58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCE58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 807FCE58: stfs     f2, 472(r31)
    if (!ppc_fp_available_inline(ctx, 0x807FCE58u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(472);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCE5C:
    ctx->pc = 0x807FCE5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCE5Cu)) return;
    // 807FCE5C: li      r5, 24
    ctx->gpr[5] = (u32)(s32)(24);

label_807FCE60:
    ctx->pc = 0x807FCE60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCE60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807FCE60: stfs     f1, 468(r31)
    if (!ppc_fp_available_inline(ctx, 0x807FCE60u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(468);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCE64:
    ctx->pc = 0x807FCE64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCE64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 807FCE64: stfs     f0, 464(r31)
    if (!ppc_fp_available_inline(ctx, 0x807FCE64u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(464);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCE68:
    ctx->pc = 0x807FCE68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCE68u)) return;
    // 807FCE68: bl      0x800031E8
    {
            ctx->lr = 0x807FCE6Cu;
            ctx->pc = 0x800031E8u;
            return;
    }

label_807FCE6C:
    ctx->pc = 0x807FCE6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FCE6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 807FCE6C: addi    r4, r30, 168
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(168);

label_807FCE70:
    ctx->pc = 0x807FCE70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCE70u)) return;
    // 807FCE70: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_807FCE74:
    ctx->pc = 0x807FCE74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCE74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 807FCE74: lwzx    r4, r4, r28
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
label_807FCE78:
    ctx->pc = 0x807FCE78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCE78u)) return;
    // 807FCE78: addi    r3, r3, -25492
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25492);

label_807FCE7C:
    ctx->pc = 0x807FCE7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCE7Cu)) return;
    // 807FCE7C: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_807FCE80:
    ctx->pc = 0x807FCE80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCE80u)) return;
    // 807FCE80: bl      0x800031E8
    {
            ctx->lr = 0x807FCE84u;
            ctx->pc = 0x800031E8u;
            return;
    }

label_807FCE84:
    ctx->pc = 0x807FCE84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FCE84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 807FCE84: addi    r4, r30, 180
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(180);

label_807FCE88:
    ctx->pc = 0x807FCE88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCE88u)) return;
    // 807FCE88: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_807FCE8C:
    ctx->pc = 0x807FCE8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCE8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 807FCE8C: lwzx    r4, r4, r28
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
label_807FCE90:
    ctx->pc = 0x807FCE90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCE90u)) return;
    // 807FCE90: addi    r3, r3, -25500
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25500);

label_807FCE94:
    ctx->pc = 0x807FCE94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCE94u)) return;
    // 807FCE94: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_807FCE98:
    ctx->pc = 0x807FCE98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCE98u)) return;
    // 807FCE98: bl      0x800031E8
    {
            ctx->lr = 0x807FCE9Cu;
            ctx->pc = 0x800031E8u;
            return;
    }

label_807FCE9C:
    ctx->pc = 0x807FCE9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FCE9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 807FCE9C: addi    r4, r30, 156
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(156);

label_807FCEA0:
    ctx->pc = 0x807FCEA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCEA0u)) return;
    // 807FCEA0: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_807FCEA4:
    ctx->pc = 0x807FCEA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCEA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 807FCEA4: lwzx    r4, r4, r28
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
label_807FCEA8:
    ctx->pc = 0x807FCEA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCEA8u)) return;
    // 807FCEA8: addi    r3, r3, -25484
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25484);

label_807FCEAC:
    ctx->pc = 0x807FCEACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCEACu)) return;
    // 807FCEAC: li      r5, 12
    ctx->gpr[5] = (u32)(s32)(12);

label_807FCEB0:
    ctx->pc = 0x807FCEB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCEB0u)) return;
    // 807FCEB0: bl      0x800031E8
    {
            ctx->lr = 0x807FCEB4u;
            ctx->pc = 0x800031E8u;
            return;
    }

label_807FCEB4:
    ctx->pc = 0x807FCEB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FCEB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 807FCEB4: bl      0x8046C930
    {
            ctx->lr = 0x807FCEB8u;
            ctx->pc = 0x8046C930u;
            return;
    }

label_807FCEB8:
    ctx->pc = 0x807FCEB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FCEB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 807FCEB8: b       0x807FCEC0
    {
            goto label_807FCEC0;
    }

label_807FCEBC:
    ctx->pc = 0x807FCEBCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FCEBCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 807FCEBC: bl      0x8050E95C
    {
            ctx->lr = 0x807FCEC0u;
            ctx->pc = 0x8050E95Cu;
            return;
    }

label_807FCEC0:
    ctx->pc = 0x807FCEC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FCEC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 807FCEC0: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_807FCEC4:
    ctx->pc = 0x807FCEC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCEC4u)) return;
    // 807FCEC4: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_807FCEC8:
    ctx->pc = 0x807FCEC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCEC8u)) return;
    // 807FCEC8: addi    r4, r4, -5402
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5402);

label_807FCECC:
    ctx->pc = 0x807FCECCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCECCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 807FCECC: lbz     r0, 6241(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(6241);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCED0:
    ctx->pc = 0x807FCED0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCED0u)) return;
    // 807FCED0: addi    r3, r3, -5404
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5404);

label_807FCED4:
    ctx->pc = 0x807FCED4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCED4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 807FCED4: lha     r4, 0(r4)
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
label_807FCED8:
    ctx->pc = 0x807FCED8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCED8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 807FCED8: lha     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCEDC:
    ctx->pc = 0x807FCEDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCEDCu)) return;
    // 807FCEDC: rlwinm r4, r4, 8, 0, 23
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 8u) & 0xFFFFFF00u;
    }

label_807FCEE0:
    ctx->pc = 0x807FCEE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCEE0u)) return;
    // 807FCEE0: or   r3, r4, r3
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[3];
    }

label_807FCEE4:
    ctx->pc = 0x807FCEE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCEE4u)) return;
    // 807FCEE4: rlwinm r6, r3, 0, 24, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x000000FFu;
    }

label_807FCEE8:
    ctx->pc = 0x807FCEE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCEE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807FCEE8: stb     r3, 6240(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(6240);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCEEC:
    ctx->pc = 0x807FCEECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCEECu)) return;
    // 807FCEEC: cmplw   r6, r0
    {
        u32 val_a = (u32)(ctx->gpr[6]);
        u32 val_b = (u32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_807FCEF0:
    ctx->pc = 0x807FCEF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCEF0u)) return;
    // 807FCEF0: bc    12, 2, 0x807FD168
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_807FD168;
        }
    }

label_807FCEF4:
    ctx->pc = 0x807FCEF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 82u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FCEF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 82u : 1u;
    // 807FCEF4: addi    r7, r31, 1632
    ctx->gpr[7] = ctx->gpr[31] + (u32)(s32)(1632);

label_807FCEF8:
    ctx->pc = 0x807FCEF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCEF8u)) return;
    // 807FCEF8: li      r5, -1
    ctx->gpr[5] = (u32)(s32)(-1);

label_807FCEFC:
    ctx->pc = 0x807FCEFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCEFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 79u : 0u;
    // 807FCEFC: stw     r5, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCF00:
    ctx->pc = 0x807FCF00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCF00u)) return;
    // 807FCF00: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_807FCF04:
    ctx->pc = 0x807FCF04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCF04u)) return;
    // 807FCF04: addi    r8, r31, 992
    ctx->gpr[8] = ctx->gpr[31] + (u32)(s32)(992);

label_807FCF08:
    ctx->pc = 0x807FCF08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCF08u)) return;
    // 807FCF08: lis     r4, -28132
    ctx->gpr[4] = ((u32)(s32)(-28132) << 16);

label_807FCF0C:
    ctx->pc = 0x807FCF0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCF0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 75u : 0u;
    // 807FCF0C: stw     r5, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCF10:
    ctx->pc = 0x807FCF10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCF10u)) return;
    // 807FCF10: lis     r3, -28132
    ctx->gpr[3] = ((u32)(s32)(-28132) << 16);

label_807FCF14:
    ctx->pc = 0x807FCF14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCF14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 73u : 0u;
    // 807FCF14: lfs     f0, -2320(r3)
    if (!ppc_fp_available_inline(ctx, 0x807FCF14u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-2320);
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
label_807FCF18:
    ctx->pc = 0x807FCF18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCF18u)) return;
    // 807FCF18: addi    r3, r31, 412
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(412);

label_807FCF1C:
    ctx->pc = 0x807FCF1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCF1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 71u : 0u;
    // 807FCF1C: stw     r5, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCF20:
    ctx->pc = 0x807FCF20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCF20u)) return;
    // 807FCF20: cmpwi   r6, 1
    {
        s32 val_a = (s32)(ctx->gpr[6]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_807FCF24:
    ctx->pc = 0x807FCF24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCF24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 69u : 0u;
    // 807FCF24: lfs     f1, -1960(r4)
    if (!ppc_fp_available_inline(ctx, 0x807FCF24u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-1960);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCF28:
    ctx->pc = 0x807FCF28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCF28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 68u : 0u;
    // 807FCF28: stw     r5, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCF2C:
    ctx->pc = 0x807FCF2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCF2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 67u : 0u;
    // 807FCF2C: stw     r5, 16(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCF30:
    ctx->pc = 0x807FCF30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCF30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 66u : 0u;
    // 807FCF30: stw     r5, 20(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCF34:
    ctx->pc = 0x807FCF34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCF34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 65u : 0u;
    // 807FCF34: stw     r5, 24(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCF38:
    ctx->pc = 0x807FCF38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCF38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 64u : 0u;
    // 807FCF38: stw     r5, 28(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCF3C:
    ctx->pc = 0x807FCF3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCF3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 63u : 0u;
    // 807FCF3C: stw     r5, 32(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCF40:
    ctx->pc = 0x807FCF40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCF40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 62u : 0u;
    // 807FCF40: stw     r5, 36(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCF44:
    ctx->pc = 0x807FCF44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCF44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 61u : 0u;
    // 807FCF44: stw     r5, 40(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCF48:
    ctx->pc = 0x807FCF48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCF48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 60u : 0u;
    // 807FCF48: stw     r5, 44(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCF4C:
    ctx->pc = 0x807FCF4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCF4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 59u : 0u;
    // 807FCF4C: stw     r5, 48(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCF50:
    ctx->pc = 0x807FCF50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCF50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 58u : 0u;
    // 807FCF50: stw     r5, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCF54:
    ctx->pc = 0x807FCF54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCF54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 57u : 0u;
    // 807FCF54: stw     r5, 52(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCF58:
    ctx->pc = 0x807FCF58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCF58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 56u : 0u;
    // 807FCF58: stw     r5, 36(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCF5C:
    ctx->pc = 0x807FCF5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCF5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 55u : 0u;
    // 807FCF5C: stw     r5, 56(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCF60:
    ctx->pc = 0x807FCF60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCF60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 54u : 0u;
    // 807FCF60: stw     r5, 68(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCF64:
    ctx->pc = 0x807FCF64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCF64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 53u : 0u;
    // 807FCF64: stw     r5, 60(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCF68:
    ctx->pc = 0x807FCF68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCF68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 52u : 0u;
    // 807FCF68: stw     r5, 100(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCF6C:
    ctx->pc = 0x807FCF6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCF6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 807FCF6C: stw     r5, 64(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCF70:
    ctx->pc = 0x807FCF70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCF70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 50u : 0u;
    // 807FCF70: stw     r5, 132(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCF74:
    ctx->pc = 0x807FCF74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCF74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 807FCF74: stw     r5, 68(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCF78:
    ctx->pc = 0x807FCF78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCF78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 48u : 0u;
    // 807FCF78: stw     r5, 164(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCF7C:
    ctx->pc = 0x807FCF7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCF7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 47u : 0u;
    // 807FCF7C: stw     r5, 72(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCF80:
    ctx->pc = 0x807FCF80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCF80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 46u : 0u;
    // 807FCF80: stw     r5, 196(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(196);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCF84:
    ctx->pc = 0x807FCF84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCF84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 45u : 0u;
    // 807FCF84: stw     r5, 76(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCF88:
    ctx->pc = 0x807FCF88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCF88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 44u : 0u;
    // 807FCF88: stw     r5, 228(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(228);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCF8C:
    ctx->pc = 0x807FCF8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCF8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 43u : 0u;
    // 807FCF8C: stw     r5, 80(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCF90:
    ctx->pc = 0x807FCF90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCF90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 42u : 0u;
    // 807FCF90: stw     r5, 260(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(260);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCF94:
    ctx->pc = 0x807FCF94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCF94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 41u : 0u;
    // 807FCF94: stw     r5, 84(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCF98:
    ctx->pc = 0x807FCF98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCF98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 40u : 0u;
    // 807FCF98: stw     r5, 292(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(292);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCF9C:
    ctx->pc = 0x807FCF9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCF9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 39u : 0u;
    // 807FCF9C: stw     r5, 88(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCFA0:
    ctx->pc = 0x807FCFA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCFA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 38u : 0u;
    // 807FCFA0: stw     r5, 324(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCFA4:
    ctx->pc = 0x807FCFA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCFA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 37u : 0u;
    // 807FCFA4: stw     r5, 92(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCFA8:
    ctx->pc = 0x807FCFA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCFA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 36u : 0u;
    // 807FCFA8: stw     r5, 356(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(356);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCFAC:
    ctx->pc = 0x807FCFACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCFACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 35u : 0u;
    // 807FCFAC: stw     r5, 96(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCFB0:
    ctx->pc = 0x807FCFB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCFB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 34u : 0u;
    // 807FCFB0: stw     r5, 388(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(388);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCFB4:
    ctx->pc = 0x807FCFB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCFB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 33u : 0u;
    // 807FCFB4: stw     r5, 100(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCFB8:
    ctx->pc = 0x807FCFB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCFB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 32u : 0u;
    // 807FCFB8: stw     r5, 420(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(420);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCFBC:
    ctx->pc = 0x807FCFBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCFBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 31u : 0u;
    // 807FCFBC: stw     r5, 104(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCFC0:
    ctx->pc = 0x807FCFC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCFC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 30u : 0u;
    // 807FCFC0: stw     r5, 452(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(452);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCFC4:
    ctx->pc = 0x807FCFC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCFC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 807FCFC4: stw     r5, 108(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCFC8:
    ctx->pc = 0x807FCFC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCFC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 807FCFC8: stw     r5, 484(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(484);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCFCC:
    ctx->pc = 0x807FCFCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCFCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 807FCFCC: stw     r5, 112(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCFD0:
    ctx->pc = 0x807FCFD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCFD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 807FCFD0: stw     r5, 516(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(516);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCFD4:
    ctx->pc = 0x807FCFD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCFD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 807FCFD4: stw     r5, 116(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCFD8:
    ctx->pc = 0x807FCFD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCFD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 807FCFD8: stw     r5, 548(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(548);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCFDC:
    ctx->pc = 0x807FCFDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCFDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 807FCFDC: stw     r5, 120(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(120);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCFE0:
    ctx->pc = 0x807FCFE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCFE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 807FCFE0: stw     r5, 580(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(580);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCFE4:
    ctx->pc = 0x807FCFE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCFE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 807FCFE4: stw     r5, 124(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCFE8:
    ctx->pc = 0x807FCFE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCFE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 807FCFE8: stw     r5, 612(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(612);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCFEC:
    ctx->pc = 0x807FCFECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCFECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 807FCFEC: stw     r0, 4(r31)
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
label_807FCFF0:
    ctx->pc = 0x807FCFF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCFF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 807FCFF0: stw     r0, 8(r31)
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
label_807FCFF4:
    ctx->pc = 0x807FCFF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCFF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 807FCFF4: stw     r0, 436(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(436);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCFF8:
    ctx->pc = 0x807FCFF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCFF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 807FCFF8: stw     r0, 432(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(432);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FCFFC:
    ctx->pc = 0x807FCFFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FCFFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 807FCFFC: stfs     f1, 444(r31)
    if (!ppc_fp_available_inline(ctx, 0x807FCFFCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(444);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD000:
    ctx->pc = 0x807FD000u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD000u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 807FD000: stw     r0, 428(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(428);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD004:
    ctx->pc = 0x807FD004u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD004u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 807FD004: stw     r0, 424(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(424);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD008:
    ctx->pc = 0x807FD008u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD008u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 807FD008: stw     r0, 400(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(400);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD00C:
    ctx->pc = 0x807FD00Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD00Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 807FD00C: stfs     f0, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x807FD00Cu)) return;
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
label_807FD010:
    ctx->pc = 0x807FD010u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD010u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 807FD010: stfs     f0, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x807FD010u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD014:
    ctx->pc = 0x807FD014u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD014u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 807FD014: stfs     f0, 412(r31)
    if (!ppc_fp_available_inline(ctx, 0x807FD014u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(412);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD018:
    ctx->pc = 0x807FD018u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD018u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 807FD018: stfs     f0, 408(r31)
    if (!ppc_fp_available_inline(ctx, 0x807FD018u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(408);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD01C:
    ctx->pc = 0x807FD01Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD01Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 807FD01C: stw     r0, 12(r31)
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
label_807FD020:
    ctx->pc = 0x807FD020u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD020u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 807FD020: stfs     f0, 16(r31)
    if (!ppc_fp_available_inline(ctx, 0x807FD020u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD024:
    ctx->pc = 0x807FD024u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD024u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 807FD024: stfs     f0, 20(r31)
    if (!ppc_fp_available_inline(ctx, 0x807FD024u)) return;
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
label_807FD028:
    ctx->pc = 0x807FD028u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD028u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 807FD028: stw     r0, 28(r31)
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
label_807FD02C:
    ctx->pc = 0x807FD02Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD02Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 807FD02C: stw     r0, 24(r31)
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
label_807FD030:
    ctx->pc = 0x807FD030u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD030u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807FD030: stw     r0, 136(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(136);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD034:
    ctx->pc = 0x807FD034u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD034u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 807FD034: stw     r0, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD038:
    ctx->pc = 0x807FD038u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD038u)) return;
    // 807FD038: bc    12, 2, 0x807FD0B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_807FD0B0;
        }
    }

label_807FD03C:
    ctx->pc = 0x807FD03Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FD03Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 807FD03C: bc    4, 0, 0x807FD04C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_807FD04C;
        }
    }

label_807FD040:
    ctx->pc = 0x807FD040u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FD040u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 807FD040: cmpwi   r6, 0
    {
        s32 val_a = (s32)(ctx->gpr[6]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_807FD044:
    ctx->pc = 0x807FD044u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD044u)) return;
    // 807FD044: bc    4, 0, 0x807FD058
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_807FD058;
        }
    }

label_807FD048:
    ctx->pc = 0x807FD048u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FD048u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 807FD048: b       0x807FD158
    {
            goto label_807FD158;
    }

label_807FD04C:
    ctx->pc = 0x807FD04Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FD04Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 807FD04C: cmpwi   r6, 3
    {
        s32 val_a = (s32)(ctx->gpr[6]);
        s32 val_b = (s32)(3);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_807FD050:
    ctx->pc = 0x807FD050u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD050u)) return;
    // 807FD050: bc    4, 0, 0x807FD158
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_807FD158;
        }
    }

label_807FD054:
    ctx->pc = 0x807FD054u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FD054u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 807FD054: b       0x807FD10C
    {
            goto label_807FD10C;
    }

label_807FD058:
    ctx->pc = 0x807FD058u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FD058u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 807FD058: lis     r3, -32640
    ctx->gpr[3] = ((u32)(s32)(-32640) << 16);

label_807FD05C:
    ctx->pc = 0x807FD05Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD05Cu)) return;
    // 807FD05C: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_807FD060:
    ctx->pc = 0x807FD060u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD060u)) return;
    // 807FD060: addi    r4, r3, -11204
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-11204);

label_807FD064:
    ctx->pc = 0x807FD064u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD064u)) return;
    // 807FD064: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_807FD068:
    ctx->pc = 0x807FD068u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD068u)) return;
    // 807FD068: bl      0x8050EC24
    {
            ctx->lr = 0x807FD06Cu;
            ctx->pc = 0x8050EC24u;
            return;
    }

label_807FD06C:
    ctx->pc = 0x807FD06Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FD06Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 807FD06C: lwz     r5, 32(r3)
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
label_807FD070:
    ctx->pc = 0x807FD070u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD070u)) return;
    // 807FD070: li      r6, 81
    ctx->gpr[6] = (u32)(s32)(81);

label_807FD074:
    ctx->pc = 0x807FD074u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD074u)) return;
    // 807FD074: li      r0, 10
    ctx->gpr[0] = (u32)(s32)(10);

label_807FD078:
    ctx->pc = 0x807FD078u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD078u)) return;
    // 807FD078: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_807FD07C:
    ctx->pc = 0x807FD07Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD07Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 807FD07C: stb     r6, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD080:
    ctx->pc = 0x807FD080u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD080u)) return;
    // 807FD080: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_807FD084:
    ctx->pc = 0x807FD084u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD084u)) return;
    // 807FD084: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_807FD088:
    ctx->pc = 0x807FD088u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD088u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 807FD088: lwz     r7, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD08C:
    ctx->pc = 0x807FD08Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD08Cu)) return;
    // 807FD08C: li      r3, 980
    ctx->gpr[3] = (u32)(s32)(980);

label_807FD090:
    ctx->pc = 0x807FD090u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD090u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 807FD090: sth     r0, 6(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD094:
    ctx->pc = 0x807FD094u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD094u)) return;
    // 807FD094: bl      0x8050A21C
    {
            ctx->lr = 0x807FD098u;
            ctx->pc = 0x8050A21Cu;
            return;
    }

label_807FD098:
    ctx->pc = 0x807FD098u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FD098u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 807FD098: lis     r3, -32641
    ctx->gpr[3] = ((u32)(s32)(-32641) << 16);

label_807FD09C:
    ctx->pc = 0x807FD09Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD09Cu)) return;
    // 807FD09C: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_807FD0A0:
    ctx->pc = 0x807FD0A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD0A0u)) return;
    // 807FD0A0: addi    r4, r3, 10960
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(10960);

label_807FD0A4:
    ctx->pc = 0x807FD0A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD0A4u)) return;
    // 807FD0A4: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_807FD0A8:
    ctx->pc = 0x807FD0A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD0A8u)) return;
    // 807FD0A8: bl      0x8050EC24
    {
            ctx->lr = 0x807FD0ACu;
            ctx->pc = 0x8050EC24u;
            return;
    }

label_807FD0AC:
    ctx->pc = 0x807FD0ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FD0ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 807FD0AC: b       0x807FD158
    {
            goto label_807FD158;
    }

label_807FD0B0:
    ctx->pc = 0x807FD0B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FD0B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 807FD0B0: lis     r3, -32640
    ctx->gpr[3] = ((u32)(s32)(-32640) << 16);

label_807FD0B4:
    ctx->pc = 0x807FD0B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD0B4u)) return;
    // 807FD0B4: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_807FD0B8:
    ctx->pc = 0x807FD0B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD0B8u)) return;
    // 807FD0B8: addi    r4, r3, -11204
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-11204);

label_807FD0BC:
    ctx->pc = 0x807FD0BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD0BCu)) return;
    // 807FD0BC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_807FD0C0:
    ctx->pc = 0x807FD0C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD0C0u)) return;
    // 807FD0C0: bl      0x8050EC24
    {
            ctx->lr = 0x807FD0C4u;
            ctx->pc = 0x8050EC24u;
            return;
    }

label_807FD0C4:
    ctx->pc = 0x807FD0C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FD0C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 807FD0C4: lwz     r5, 32(r3)
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
label_807FD0C8:
    ctx->pc = 0x807FD0C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD0C8u)) return;
    // 807FD0C8: li      r6, 81
    ctx->gpr[6] = (u32)(s32)(81);

label_807FD0CC:
    ctx->pc = 0x807FD0CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD0CCu)) return;
    // 807FD0CC: li      r0, 10
    ctx->gpr[0] = (u32)(s32)(10);

label_807FD0D0:
    ctx->pc = 0x807FD0D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD0D0u)) return;
    // 807FD0D0: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_807FD0D4:
    ctx->pc = 0x807FD0D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD0D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 807FD0D4: stb     r6, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD0D8:
    ctx->pc = 0x807FD0D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD0D8u)) return;
    // 807FD0D8: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_807FD0DC:
    ctx->pc = 0x807FD0DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD0DCu)) return;
    // 807FD0DC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_807FD0E0:
    ctx->pc = 0x807FD0E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD0E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 807FD0E0: lwz     r7, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD0E4:
    ctx->pc = 0x807FD0E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD0E4u)) return;
    // 807FD0E4: li      r3, 980
    ctx->gpr[3] = (u32)(s32)(980);

label_807FD0E8:
    ctx->pc = 0x807FD0E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD0E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 807FD0E8: sth     r0, 6(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD0EC:
    ctx->pc = 0x807FD0ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD0ECu)) return;
    // 807FD0EC: bl      0x8050A21C
    {
            ctx->lr = 0x807FD0F0u;
            ctx->pc = 0x8050A21Cu;
            return;
    }

label_807FD0F0:
    ctx->pc = 0x807FD0F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FD0F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 807FD0F0: bl      0x807F35C4
    {
            ctx->lr = 0x807FD0F4u;
            ctx->pc = 0x807F35C4u;
            return;
    }

label_807FD0F4:
    ctx->pc = 0x807FD0F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FD0F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 807FD0F4: lis     r3, -32641
    ctx->gpr[3] = ((u32)(s32)(-32641) << 16);

label_807FD0F8:
    ctx->pc = 0x807FD0F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD0F8u)) return;
    // 807FD0F8: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_807FD0FC:
    ctx->pc = 0x807FD0FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD0FCu)) return;
    // 807FD0FC: addi    r4, r3, 13124
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(13124);

label_807FD100:
    ctx->pc = 0x807FD100u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD100u)) return;
    // 807FD100: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_807FD104:
    ctx->pc = 0x807FD104u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD104u)) return;
    // 807FD104: bl      0x8050EC24
    {
            ctx->lr = 0x807FD108u;
            ctx->pc = 0x8050EC24u;
            return;
    }

label_807FD108:
    ctx->pc = 0x807FD108u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FD108u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 807FD108: b       0x807FD158
    {
            goto label_807FD158;
    }

label_807FD10C:
    ctx->pc = 0x807FD10Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FD10Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 807FD10C: lis     r3, -32640
    ctx->gpr[3] = ((u32)(s32)(-32640) << 16);

label_807FD110:
    ctx->pc = 0x807FD110u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD110u)) return;
    // 807FD110: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_807FD114:
    ctx->pc = 0x807FD114u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD114u)) return;
    // 807FD114: addi    r4, r3, -11204
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-11204);

label_807FD118:
    ctx->pc = 0x807FD118u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD118u)) return;
    // 807FD118: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_807FD11C:
    ctx->pc = 0x807FD11Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD11Cu)) return;
    // 807FD11C: bl      0x8050EC24
    {
            ctx->lr = 0x807FD120u;
            ctx->pc = 0x8050EC24u;
            return;
    }

label_807FD120:
    ctx->pc = 0x807FD120u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FD120u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 807FD120: lwz     r5, 32(r3)
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
label_807FD124:
    ctx->pc = 0x807FD124u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD124u)) return;
    // 807FD124: li      r6, 82
    ctx->gpr[6] = (u32)(s32)(82);

label_807FD128:
    ctx->pc = 0x807FD128u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD128u)) return;
    // 807FD128: li      r0, 10
    ctx->gpr[0] = (u32)(s32)(10);

label_807FD12C:
    ctx->pc = 0x807FD12Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD12Cu)) return;
    // 807FD12C: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_807FD130:
    ctx->pc = 0x807FD130u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD130u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 807FD130: stb     r6, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD134:
    ctx->pc = 0x807FD134u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD134u)) return;
    // 807FD134: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_807FD138:
    ctx->pc = 0x807FD138u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD138u)) return;
    // 807FD138: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_807FD13C:
    ctx->pc = 0x807FD13Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD13Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 807FD13C: lwz     r7, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD140:
    ctx->pc = 0x807FD140u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD140u)) return;
    // 807FD140: li      r3, 980
    ctx->gpr[3] = (u32)(s32)(980);

label_807FD144:
    ctx->pc = 0x807FD144u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD144u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 807FD144: sth     r0, 6(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD148:
    ctx->pc = 0x807FD148u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD148u)) return;
    // 807FD148: bl      0x8050A21C
    {
            ctx->lr = 0x807FD14Cu;
            ctx->pc = 0x8050A21Cu;
            return;
    }

label_807FD14C:
    ctx->pc = 0x807FD14Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FD14Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 807FD14C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_807FD150:
    ctx->pc = 0x807FD150u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD150u)) return;
    // 807FD150: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_807FD154:
    ctx->pc = 0x807FD154u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD154u)) return;
    // 807FD154: bl      0x804BD854
    {
            ctx->lr = 0x807FD158u;
            ctx->pc = 0x804BD854u;
            return;
    }

label_807FD158:
    ctx->pc = 0x807FD158u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FD158u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 807FD158: lbz     r0, 6240(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(6240);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD15C:
    ctx->pc = 0x807FD15Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD15Cu)) return;
    // 807FD15C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_807FD160:
    ctx->pc = 0x807FD160u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD160u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 807FD160: stb     r0, 6241(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(6241);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD164:
    ctx->pc = 0x807FD164u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD164u)) return;
    // 807FD164: bl      0x804C7950
    {
            ctx->lr = 0x807FD168u;
            ctx->pc = 0x804C7950u;
            return;
    }

label_807FD168:
    ctx->pc = 0x807FD168u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FD168u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 807FD168: lwz     r0, 36(r1)
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
label_807FD16C:
    ctx->pc = 0x807FD16Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD16Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 807FD16C: lwz     r31, 28(r1)
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
label_807FD170:
    ctx->pc = 0x807FD170u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD170u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 807FD170: lwz     r30, 24(r1)
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
label_807FD174:
    ctx->pc = 0x807FD174u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD174u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 807FD174: lwz     r29, 20(r1)
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
label_807FD178:
    ctx->pc = 0x807FD178u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD178u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 807FD178: lwz     r28, 16(r1)
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
label_807FD17C:
    ctx->pc = 0x807FD17Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x807FD17Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807FD17C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD180:
    ctx->pc = 0x807FD180u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD180u)) return;
    // 807FD180: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_807FD184:
    ctx->pc = 0x807FD184u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD184u)) return;
    // 807FD184: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_807FC740;
        }
    }

label_807FD188:
    ctx->pc = 0x807FD188u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 97u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FD188u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 97u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 96u : 0u;
    // 807FD188: stwu     r1, -16(r1)
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
label_807FD18C:
    ctx->pc = 0x807FD18Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD18Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 95u : 0u;
    // 807FD18C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD190:
    ctx->pc = 0x807FD190u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD190u)) return;
    // 807FD190: lis     r5, -28099
    ctx->gpr[5] = ((u32)(s32)(-28099) << 16);

label_807FD194:
    ctx->pc = 0x807FD194u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD194u)) return;
    // 807FD194: lis     r7, -28132
    ctx->gpr[7] = ((u32)(s32)(-28132) << 16);

label_807FD198:
    ctx->pc = 0x807FD198u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD198u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 92u : 0u;
    // 807FD198: stw     r0, 20(r1)
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
label_807FD19C:
    ctx->pc = 0x807FD19Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD19Cu)) return;
    // 807FD19C: addi    r9, r5, -7336
    ctx->gpr[9] = ctx->gpr[5] + (u32)(s32)(-7336);

label_807FD1A0:
    ctx->pc = 0x807FD1A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD1A0u)) return;
    // 807FD1A0: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_807FD1A4:
    ctx->pc = 0x807FD1A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD1A4u)) return;
    // 807FD1A4: lis     r6, -28132
    ctx->gpr[6] = ((u32)(s32)(-28132) << 16);

label_807FD1A8:
    ctx->pc = 0x807FD1A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD1A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 88u : 0u;
    // 807FD1A8: stw     r31, 12(r1)
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
label_807FD1AC:
    ctx->pc = 0x807FD1ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD1ACu)) return;
    // 807FD1AC: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_807FD1B0:
    ctx->pc = 0x807FD1B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD1B0u)) return;
    // 807FD1B0: addi    r11, r9, 1632
    ctx->gpr[11] = ctx->gpr[9] + (u32)(s32)(1632);

label_807FD1B4:
    ctx->pc = 0x807FD1B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD1B4u)) return;
    // 807FD1B4: li      r8, -1
    ctx->gpr[8] = (u32)(s32)(-1);

label_807FD1B8:
    ctx->pc = 0x807FD1B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD1B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 84u : 0u;
    // 807FD1B8: stw     r8, 0(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD1BC:
    ctx->pc = 0x807FD1BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD1BCu)) return;
    // 807FD1BC: addi    r5, r4, -5402
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-5402);

label_807FD1C0:
    ctx->pc = 0x807FD1C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD1C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 82u : 0u;
    // 807FD1C0: lfs     f0, -2320(r6)
    if (!ppc_fp_available_inline(ctx, 0x807FD1C0u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-2320);
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
label_807FD1C4:
    ctx->pc = 0x807FD1C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD1C4u)) return;
    // 807FD1C4: addi    r12, r9, 992
    ctx->gpr[12] = ctx->gpr[9] + (u32)(s32)(992);

label_807FD1C8:
    ctx->pc = 0x807FD1C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD1C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 80u : 0u;
    // 807FD1C8: stw     r8, 4(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD1CC:
    ctx->pc = 0x807FD1CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD1CCu)) return;
    // 807FD1CC: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_807FD1D0:
    ctx->pc = 0x807FD1D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD1D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 78u : 0u;
    // 807FD1D0: lfs     f1, -1960(r7)
    if (!ppc_fp_available_inline(ctx, 0x807FD1D0u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-1960);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD1D4:
    ctx->pc = 0x807FD1D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD1D4u)) return;
    // 807FD1D4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_807FD1D8:
    ctx->pc = 0x807FD1D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD1D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 76u : 0u;
    // 807FD1D8: stw     r8, 8(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD1DC:
    ctx->pc = 0x807FD1DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD1DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 75u : 0u;
    // 807FD1DC: lha     r5, 0(r5)
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
label_807FD1E0:
    ctx->pc = 0x807FD1E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD1E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 74u : 0u;
    // 807FD1E0: stw     r8, 12(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD1E4:
    ctx->pc = 0x807FD1E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD1E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 73u : 0u;
    // 807FD1E4: lha     r0, -5404(r4)
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
label_807FD1E8:
    ctx->pc = 0x807FD1E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD1E8u)) return;
    // 807FD1E8: rlwinm r4, r5, 8, 0, 23
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[5], 8u) & 0xFFFFFF00u;
    }

label_807FD1EC:
    ctx->pc = 0x807FD1ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD1ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 71u : 0u;
    // 807FD1EC: stw     r8, 16(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD1F0:
    ctx->pc = 0x807FD1F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD1F0u)) return;
    // 807FD1F0: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_807FD1F4:
    ctx->pc = 0x807FD1F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD1F4u)) return;
    // 807FD1F4: addi    r4, r9, 412
    ctx->gpr[4] = ctx->gpr[9] + (u32)(s32)(412);

label_807FD1F8:
    ctx->pc = 0x807FD1F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD1F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 68u : 0u;
    // 807FD1F8: stw     r8, 20(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD1FC:
    ctx->pc = 0x807FD1FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD1FCu)) return;
    // 807FD1FC: rlwinm r0, r0, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
    }

label_807FD200:
    ctx->pc = 0x807FD200u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD200u)) return;
    // 807FD200: cmpwi   r0, 1
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

label_807FD204:
    ctx->pc = 0x807FD204u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD204u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 65u : 0u;
    // 807FD204: stw     r8, 24(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD208:
    ctx->pc = 0x807FD208u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD208u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 64u : 0u;
    // 807FD208: stw     r8, 28(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD20C:
    ctx->pc = 0x807FD20Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD20Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 63u : 0u;
    // 807FD20C: stw     r8, 32(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD210:
    ctx->pc = 0x807FD210u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD210u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 62u : 0u;
    // 807FD210: stw     r8, 36(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD214:
    ctx->pc = 0x807FD214u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD214u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 61u : 0u;
    // 807FD214: stw     r8, 40(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD218:
    ctx->pc = 0x807FD218u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD218u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 60u : 0u;
    // 807FD218: stw     r8, 44(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD21C:
    ctx->pc = 0x807FD21Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD21Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 59u : 0u;
    // 807FD21C: stw     r8, 48(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD220:
    ctx->pc = 0x807FD220u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD220u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 58u : 0u;
    // 807FD220: stw     r8, 4(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD224:
    ctx->pc = 0x807FD224u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD224u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 57u : 0u;
    // 807FD224: stw     r8, 52(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD228:
    ctx->pc = 0x807FD228u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD228u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 56u : 0u;
    // 807FD228: stw     r8, 36(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD22C:
    ctx->pc = 0x807FD22Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD22Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 55u : 0u;
    // 807FD22C: stw     r8, 56(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD230:
    ctx->pc = 0x807FD230u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD230u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 54u : 0u;
    // 807FD230: stw     r8, 68(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD234:
    ctx->pc = 0x807FD234u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD234u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 53u : 0u;
    // 807FD234: stw     r8, 60(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD238:
    ctx->pc = 0x807FD238u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD238u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 52u : 0u;
    // 807FD238: stw     r8, 100(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD23C:
    ctx->pc = 0x807FD23Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD23Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 807FD23C: stw     r8, 64(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD240:
    ctx->pc = 0x807FD240u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD240u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 50u : 0u;
    // 807FD240: stw     r8, 132(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD244:
    ctx->pc = 0x807FD244u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD244u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 807FD244: stw     r8, 68(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD248:
    ctx->pc = 0x807FD248u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD248u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 48u : 0u;
    // 807FD248: stw     r8, 164(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD24C:
    ctx->pc = 0x807FD24Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD24Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 47u : 0u;
    // 807FD24C: stw     r8, 72(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD250:
    ctx->pc = 0x807FD250u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD250u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 46u : 0u;
    // 807FD250: stw     r8, 196(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(196);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD254:
    ctx->pc = 0x807FD254u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD254u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 45u : 0u;
    // 807FD254: stw     r8, 76(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD258:
    ctx->pc = 0x807FD258u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD258u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 44u : 0u;
    // 807FD258: stw     r8, 228(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(228);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD25C:
    ctx->pc = 0x807FD25Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD25Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 43u : 0u;
    // 807FD25C: stw     r8, 80(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD260:
    ctx->pc = 0x807FD260u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD260u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 42u : 0u;
    // 807FD260: stw     r8, 260(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(260);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD264:
    ctx->pc = 0x807FD264u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD264u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 41u : 0u;
    // 807FD264: stw     r8, 84(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD268:
    ctx->pc = 0x807FD268u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD268u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 40u : 0u;
    // 807FD268: stw     r8, 292(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(292);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD26C:
    ctx->pc = 0x807FD26Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD26Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 39u : 0u;
    // 807FD26C: stw     r8, 88(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD270:
    ctx->pc = 0x807FD270u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD270u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 38u : 0u;
    // 807FD270: stw     r8, 324(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD274:
    ctx->pc = 0x807FD274u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD274u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 37u : 0u;
    // 807FD274: stw     r8, 92(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD278:
    ctx->pc = 0x807FD278u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD278u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 36u : 0u;
    // 807FD278: stw     r8, 356(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(356);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD27C:
    ctx->pc = 0x807FD27Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD27Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 35u : 0u;
    // 807FD27C: stw     r8, 96(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD280:
    ctx->pc = 0x807FD280u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD280u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 34u : 0u;
    // 807FD280: stw     r8, 388(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(388);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD284:
    ctx->pc = 0x807FD284u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD284u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 33u : 0u;
    // 807FD284: stw     r8, 100(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD288:
    ctx->pc = 0x807FD288u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD288u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 32u : 0u;
    // 807FD288: stw     r8, 420(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(420);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD28C:
    ctx->pc = 0x807FD28Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD28Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 31u : 0u;
    // 807FD28C: stw     r8, 104(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD290:
    ctx->pc = 0x807FD290u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD290u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 30u : 0u;
    // 807FD290: stw     r8, 452(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(452);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD294:
    ctx->pc = 0x807FD294u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD294u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 807FD294: stw     r8, 108(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD298:
    ctx->pc = 0x807FD298u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD298u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 807FD298: stw     r8, 484(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(484);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD29C:
    ctx->pc = 0x807FD29Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD29Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 807FD29C: stw     r8, 112(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD2A0:
    ctx->pc = 0x807FD2A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD2A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 807FD2A0: stw     r8, 516(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(516);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD2A4:
    ctx->pc = 0x807FD2A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD2A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 807FD2A4: stw     r8, 116(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD2A8:
    ctx->pc = 0x807FD2A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD2A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 807FD2A8: stw     r8, 548(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(548);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD2AC:
    ctx->pc = 0x807FD2ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD2ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 807FD2AC: stw     r8, 120(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(120);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD2B0:
    ctx->pc = 0x807FD2B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD2B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 807FD2B0: stw     r8, 580(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(580);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD2B4:
    ctx->pc = 0x807FD2B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD2B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 807FD2B4: stw     r8, 124(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD2B8:
    ctx->pc = 0x807FD2B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD2B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 807FD2B8: stw     r8, 612(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(612);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD2BC:
    ctx->pc = 0x807FD2BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD2BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 807FD2BC: stw     r10, 4(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD2C0:
    ctx->pc = 0x807FD2C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD2C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 807FD2C0: stw     r10, 8(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD2C4:
    ctx->pc = 0x807FD2C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD2C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 807FD2C4: stw     r10, 436(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(436);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD2C8:
    ctx->pc = 0x807FD2C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD2C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 807FD2C8: stw     r10, 432(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(432);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD2CC:
    ctx->pc = 0x807FD2CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD2CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 807FD2CC: stfs     f1, 444(r9)
    if (!ppc_fp_available_inline(ctx, 0x807FD2CCu)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(444);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD2D0:
    ctx->pc = 0x807FD2D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD2D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 807FD2D0: stw     r10, 428(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(428);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD2D4:
    ctx->pc = 0x807FD2D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD2D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 807FD2D4: stw     r10, 424(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(424);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD2D8:
    ctx->pc = 0x807FD2D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD2D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 807FD2D8: stw     r10, 400(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(400);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD2DC:
    ctx->pc = 0x807FD2DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD2DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 807FD2DC: stfs     f0, 8(r4)
    if (!ppc_fp_available_inline(ctx, 0x807FD2DCu)) return;
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
label_807FD2E0:
    ctx->pc = 0x807FD2E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD2E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 807FD2E0: stfs     f0, 4(r4)
    if (!ppc_fp_available_inline(ctx, 0x807FD2E0u)) return;
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
label_807FD2E4:
    ctx->pc = 0x807FD2E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD2E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 807FD2E4: stfs     f0, 412(r9)
    if (!ppc_fp_available_inline(ctx, 0x807FD2E4u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(412);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD2E8:
    ctx->pc = 0x807FD2E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD2E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 807FD2E8: stfs     f0, 408(r9)
    if (!ppc_fp_available_inline(ctx, 0x807FD2E8u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(408);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD2EC:
    ctx->pc = 0x807FD2ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD2ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 807FD2EC: stw     r10, 12(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD2F0:
    ctx->pc = 0x807FD2F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD2F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 807FD2F0: stfs     f0, 16(r9)
    if (!ppc_fp_available_inline(ctx, 0x807FD2F0u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD2F4:
    ctx->pc = 0x807FD2F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD2F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 807FD2F4: stfs     f0, 20(r9)
    if (!ppc_fp_available_inline(ctx, 0x807FD2F4u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD2F8:
    ctx->pc = 0x807FD2F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD2F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 807FD2F8: stw     r10, 28(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD2FC:
    ctx->pc = 0x807FD2FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD2FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 807FD2FC: stw     r10, 24(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD300:
    ctx->pc = 0x807FD300u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD300u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807FD300: stw     r10, 136(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(136);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD304:
    ctx->pc = 0x807FD304u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD304u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 807FD304: stw     r10, 36(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD308:
    ctx->pc = 0x807FD308u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD308u)) return;
    // 807FD308: bc    12, 2, 0x807FD380
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_807FD380;
        }
    }

label_807FD30C:
    ctx->pc = 0x807FD30Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FD30Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 807FD30C: bc    4, 0, 0x807FD31C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_807FD31C;
        }
    }

label_807FD310:
    ctx->pc = 0x807FD310u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FD310u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 807FD310: cmpwi   r0, 0
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

label_807FD314:
    ctx->pc = 0x807FD314u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD314u)) return;
    // 807FD314: bc    4, 0, 0x807FD328
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_807FD328;
        }
    }

label_807FD318:
    ctx->pc = 0x807FD318u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FD318u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 807FD318: b       0x807FD428
    {
            goto label_807FD428;
    }

label_807FD31C:
    ctx->pc = 0x807FD31Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FD31Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 807FD31C: cmpwi   r0, 3
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

label_807FD320:
    ctx->pc = 0x807FD320u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD320u)) return;
    // 807FD320: bc    4, 0, 0x807FD428
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_807FD428;
        }
    }

label_807FD324:
    ctx->pc = 0x807FD324u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FD324u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 807FD324: b       0x807FD3DC
    {
            goto label_807FD3DC;
    }

label_807FD328:
    ctx->pc = 0x807FD328u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FD328u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 807FD328: lis     r3, -32640
    ctx->gpr[3] = ((u32)(s32)(-32640) << 16);

label_807FD32C:
    ctx->pc = 0x807FD32Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD32Cu)) return;
    // 807FD32C: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_807FD330:
    ctx->pc = 0x807FD330u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD330u)) return;
    // 807FD330: addi    r4, r3, -11204
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-11204);

label_807FD334:
    ctx->pc = 0x807FD334u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD334u)) return;
    // 807FD334: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_807FD338:
    ctx->pc = 0x807FD338u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD338u)) return;
    // 807FD338: bl      0x8050EC24
    {
            ctx->lr = 0x807FD33Cu;
            ctx->pc = 0x8050EC24u;
            return;
    }

label_807FD33C:
    ctx->pc = 0x807FD33Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FD33Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 807FD33C: lwz     r5, 32(r3)
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
label_807FD340:
    ctx->pc = 0x807FD340u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD340u)) return;
    // 807FD340: li      r6, 81
    ctx->gpr[6] = (u32)(s32)(81);

label_807FD344:
    ctx->pc = 0x807FD344u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD344u)) return;
    // 807FD344: li      r0, 10
    ctx->gpr[0] = (u32)(s32)(10);

label_807FD348:
    ctx->pc = 0x807FD348u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD348u)) return;
    // 807FD348: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_807FD34C:
    ctx->pc = 0x807FD34Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD34Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 807FD34C: stb     r6, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD350:
    ctx->pc = 0x807FD350u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD350u)) return;
    // 807FD350: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_807FD354:
    ctx->pc = 0x807FD354u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD354u)) return;
    // 807FD354: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_807FD358:
    ctx->pc = 0x807FD358u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD358u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 807FD358: lwz     r7, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD35C:
    ctx->pc = 0x807FD35Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD35Cu)) return;
    // 807FD35C: li      r3, 980
    ctx->gpr[3] = (u32)(s32)(980);

label_807FD360:
    ctx->pc = 0x807FD360u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD360u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 807FD360: sth     r0, 6(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD364:
    ctx->pc = 0x807FD364u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD364u)) return;
    // 807FD364: bl      0x8050A21C
    {
            ctx->lr = 0x807FD368u;
            ctx->pc = 0x8050A21Cu;
            return;
    }

label_807FD368:
    ctx->pc = 0x807FD368u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FD368u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 807FD368: lis     r3, -32641
    ctx->gpr[3] = ((u32)(s32)(-32641) << 16);

label_807FD36C:
    ctx->pc = 0x807FD36Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD36Cu)) return;
    // 807FD36C: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_807FD370:
    ctx->pc = 0x807FD370u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD370u)) return;
    // 807FD370: addi    r4, r3, 10960
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(10960);

label_807FD374:
    ctx->pc = 0x807FD374u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD374u)) return;
    // 807FD374: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_807FD378:
    ctx->pc = 0x807FD378u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD378u)) return;
    // 807FD378: bl      0x8050EC24
    {
            ctx->lr = 0x807FD37Cu;
            ctx->pc = 0x8050EC24u;
            return;
    }

label_807FD37C:
    ctx->pc = 0x807FD37Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FD37Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 807FD37C: b       0x807FD428
    {
            goto label_807FD428;
    }

label_807FD380:
    ctx->pc = 0x807FD380u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FD380u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 807FD380: lis     r3, -32640
    ctx->gpr[3] = ((u32)(s32)(-32640) << 16);

label_807FD384:
    ctx->pc = 0x807FD384u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD384u)) return;
    // 807FD384: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_807FD388:
    ctx->pc = 0x807FD388u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD388u)) return;
    // 807FD388: addi    r4, r3, -11204
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-11204);

label_807FD38C:
    ctx->pc = 0x807FD38Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD38Cu)) return;
    // 807FD38C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_807FD390:
    ctx->pc = 0x807FD390u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD390u)) return;
    // 807FD390: bl      0x8050EC24
    {
            ctx->lr = 0x807FD394u;
            ctx->pc = 0x8050EC24u;
            return;
    }

label_807FD394:
    ctx->pc = 0x807FD394u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FD394u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 807FD394: lwz     r5, 32(r3)
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
label_807FD398:
    ctx->pc = 0x807FD398u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD398u)) return;
    // 807FD398: li      r6, 81
    ctx->gpr[6] = (u32)(s32)(81);

label_807FD39C:
    ctx->pc = 0x807FD39Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD39Cu)) return;
    // 807FD39C: li      r0, 10
    ctx->gpr[0] = (u32)(s32)(10);

label_807FD3A0:
    ctx->pc = 0x807FD3A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD3A0u)) return;
    // 807FD3A0: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_807FD3A4:
    ctx->pc = 0x807FD3A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD3A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 807FD3A4: stb     r6, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD3A8:
    ctx->pc = 0x807FD3A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD3A8u)) return;
    // 807FD3A8: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_807FD3AC:
    ctx->pc = 0x807FD3ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD3ACu)) return;
    // 807FD3AC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_807FD3B0:
    ctx->pc = 0x807FD3B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD3B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 807FD3B0: lwz     r7, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD3B4:
    ctx->pc = 0x807FD3B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD3B4u)) return;
    // 807FD3B4: li      r3, 980
    ctx->gpr[3] = (u32)(s32)(980);

label_807FD3B8:
    ctx->pc = 0x807FD3B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD3B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 807FD3B8: sth     r0, 6(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD3BC:
    ctx->pc = 0x807FD3BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD3BCu)) return;
    // 807FD3BC: bl      0x8050A21C
    {
            ctx->lr = 0x807FD3C0u;
            ctx->pc = 0x8050A21Cu;
            return;
    }

label_807FD3C0:
    ctx->pc = 0x807FD3C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FD3C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 807FD3C0: bl      0x807F35C4
    {
            ctx->lr = 0x807FD3C4u;
            ctx->pc = 0x807F35C4u;
            return;
    }

label_807FD3C4:
    ctx->pc = 0x807FD3C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FD3C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 807FD3C4: lis     r3, -32641
    ctx->gpr[3] = ((u32)(s32)(-32641) << 16);

label_807FD3C8:
    ctx->pc = 0x807FD3C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD3C8u)) return;
    // 807FD3C8: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_807FD3CC:
    ctx->pc = 0x807FD3CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD3CCu)) return;
    // 807FD3CC: addi    r4, r3, 13124
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(13124);

label_807FD3D0:
    ctx->pc = 0x807FD3D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD3D0u)) return;
    // 807FD3D0: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_807FD3D4:
    ctx->pc = 0x807FD3D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD3D4u)) return;
    // 807FD3D4: bl      0x8050EC24
    {
            ctx->lr = 0x807FD3D8u;
            ctx->pc = 0x8050EC24u;
            return;
    }

label_807FD3D8:
    ctx->pc = 0x807FD3D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FD3D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 807FD3D8: b       0x807FD428
    {
            goto label_807FD428;
    }

label_807FD3DC:
    ctx->pc = 0x807FD3DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FD3DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 807FD3DC: lis     r3, -32640
    ctx->gpr[3] = ((u32)(s32)(-32640) << 16);

label_807FD3E0:
    ctx->pc = 0x807FD3E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD3E0u)) return;
    // 807FD3E0: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_807FD3E4:
    ctx->pc = 0x807FD3E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD3E4u)) return;
    // 807FD3E4: addi    r4, r3, -11204
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-11204);

label_807FD3E8:
    ctx->pc = 0x807FD3E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD3E8u)) return;
    // 807FD3E8: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_807FD3EC:
    ctx->pc = 0x807FD3ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD3ECu)) return;
    // 807FD3EC: bl      0x8050EC24
    {
            ctx->lr = 0x807FD3F0u;
            ctx->pc = 0x8050EC24u;
            return;
    }

label_807FD3F0:
    ctx->pc = 0x807FD3F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FD3F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 807FD3F0: lwz     r5, 32(r3)
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
label_807FD3F4:
    ctx->pc = 0x807FD3F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD3F4u)) return;
    // 807FD3F4: li      r6, 82
    ctx->gpr[6] = (u32)(s32)(82);

label_807FD3F8:
    ctx->pc = 0x807FD3F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD3F8u)) return;
    // 807FD3F8: li      r0, 10
    ctx->gpr[0] = (u32)(s32)(10);

label_807FD3FC:
    ctx->pc = 0x807FD3FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD3FCu)) return;
    // 807FD3FC: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_807FD400:
    ctx->pc = 0x807FD400u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD400u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 807FD400: stb     r6, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD404:
    ctx->pc = 0x807FD404u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD404u)) return;
    // 807FD404: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_807FD408:
    ctx->pc = 0x807FD408u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD408u)) return;
    // 807FD408: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_807FD40C:
    ctx->pc = 0x807FD40Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD40Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 807FD40C: lwz     r7, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD410:
    ctx->pc = 0x807FD410u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD410u)) return;
    // 807FD410: li      r3, 980
    ctx->gpr[3] = (u32)(s32)(980);

label_807FD414:
    ctx->pc = 0x807FD414u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD414u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 807FD414: sth     r0, 6(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD418:
    ctx->pc = 0x807FD418u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD418u)) return;
    // 807FD418: bl      0x8050A21C
    {
            ctx->lr = 0x807FD41Cu;
            ctx->pc = 0x8050A21Cu;
            return;
    }

label_807FD41C:
    ctx->pc = 0x807FD41Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FD41Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 807FD41C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_807FD420:
    ctx->pc = 0x807FD420u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD420u)) return;
    // 807FD420: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_807FD424:
    ctx->pc = 0x807FD424u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD424u)) return;
    // 807FD424: bl      0x804BD854
    {
            ctx->lr = 0x807FD428u;
            ctx->pc = 0x804BD854u;
            return;
    }

label_807FD428:
    ctx->pc = 0x807FD428u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FD428u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 807FD428: lwz     r0, 20(r1)
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
label_807FD42C:
    ctx->pc = 0x807FD42Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD42Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 807FD42C: lwz     r31, 12(r1)
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
label_807FD430:
    ctx->pc = 0x807FD430u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x807FD430u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807FD430: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD434:
    ctx->pc = 0x807FD434u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD434u)) return;
    // 807FD434: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_807FD438:
    ctx->pc = 0x807FD438u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD438u)) return;
    // 807FD438: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_807FC740;
        }
    }

label_807FD43C:
    ctx->pc = 0x807FD43Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FD43Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 807FD43C: stwu     r1, -16(r1)
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
label_807FD440:
    ctx->pc = 0x807FD440u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD440u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 807FD440: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD444:
    ctx->pc = 0x807FD444u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD444u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 807FD444: stw     r0, 20(r1)
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
label_807FD448:
    ctx->pc = 0x807FD448u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD448u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 807FD448: stw     r31, 12(r1)
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
label_807FD44C:
    ctx->pc = 0x807FD44Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD44Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 807FD44C: stw     r30, 8(r1)
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
label_807FD450:
    ctx->pc = 0x807FD450u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD450u)) return;
    // 807FD450: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_807FD454:
    ctx->pc = 0x807FD454u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD454u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 807FD454: lwz     r31, 32(r3)
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
label_807FD458:
    ctx->pc = 0x807FD458u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD458u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 807FD458: lhz     r3, 6(r31)
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
label_807FD45C:
    ctx->pc = 0x807FD45Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD45Cu)) return;
    // 807FD45C: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_807FD460:
    ctx->pc = 0x807FD460u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD460u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 807FD460: sth     r0, 6(r31)
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
label_807FD464:
    ctx->pc = 0x807FD464u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD464u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807FD464: lhz     r0, 6(r31)
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
label_807FD468:
    ctx->pc = 0x807FD468u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD468u)) return;
    // 807FD468: extsh. r0, r0
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

label_807FD46C:
    ctx->pc = 0x807FD46Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD46Cu)) return;
    // 807FD46C: bc    4, 0, 0x807FD488
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_807FD488;
        }
    }

label_807FD470:
    ctx->pc = 0x807FD470u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FD470u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 807FD470: bl      0x80405C38
    {
            ctx->lr = 0x807FD474u;
            ctx->pc = 0x80405C38u;
            return;
    }

label_807FD474:
    ctx->pc = 0x807FD474u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FD474u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807FD474: lbz     r3, 0(r31)
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
label_807FD478:
    ctx->pc = 0x807FD478u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD478u)) return;
    // 807FD478: extsb r3, r3
    {
        ctx->gpr[3] = (u32)(s32)(s8)ctx->gpr[3];
    }

label_807FD47C:
    ctx->pc = 0x807FD47Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD47Cu)) return;
    // 807FD47C: bl      0x80406090
    {
            ctx->lr = 0x807FD480u;
            ctx->pc = 0x80406090u;
            return;
    }

label_807FD480:
    ctx->pc = 0x807FD480u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FD480u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 807FD480: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_807FD484:
    ctx->pc = 0x807FD484u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD484u)) return;
    // 807FD484: bl      0x8050F9F0
    {
            ctx->lr = 0x807FD488u;
            ctx->pc = 0x8050F9F0u;
            return;
    }

label_807FD488:
    ctx->pc = 0x807FD488u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FD488u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 807FD488: lwz     r0, 20(r1)
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
label_807FD48C:
    ctx->pc = 0x807FD48Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD48Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 807FD48C: lwz     r31, 12(r1)
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
label_807FD490:
    ctx->pc = 0x807FD490u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD490u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 807FD490: lwz     r30, 8(r1)
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
label_807FD494:
    ctx->pc = 0x807FD494u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x807FD494u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807FD494: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD498:
    ctx->pc = 0x807FD498u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD498u)) return;
    // 807FD498: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_807FD49C:
    ctx->pc = 0x807FD49Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD49Cu)) return;
    // 807FD49C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_807FC740;
        }
    }

label_807FD4A0:
    ctx->pc = 0x807FD4A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 21u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FD4A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 21u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 807FD4A0: stwu     r1, -16(r1)
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
label_807FD4A4:
    ctx->pc = 0x807FD4A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD4A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 807FD4A4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD4A8:
    ctx->pc = 0x807FD4A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD4A8u)) return;
    // 807FD4A8: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_807FD4AC:
    ctx->pc = 0x807FD4ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD4ACu)) return;
    // 807FD4AC: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_807FD4B0:
    ctx->pc = 0x807FD4B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD4B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 807FD4B0: stw     r0, 20(r1)
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
label_807FD4B4:
    ctx->pc = 0x807FD4B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD4B4u)) return;
    // 807FD4B4: addi    r4, r4, -5402
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5402);

label_807FD4B8:
    ctx->pc = 0x807FD4B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD4B8u)) return;
    // 807FD4B8: lis     r5, -28099
    ctx->gpr[5] = ((u32)(s32)(-28099) << 16);

label_807FD4BC:
    ctx->pc = 0x807FD4BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD4BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 807FD4BC: stw     r31, 12(r1)
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
label_807FD4C0:
    ctx->pc = 0x807FD4C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD4C0u)) return;
    // 807FD4C0: addi    r31, r5, -19488
    ctx->gpr[31] = ctx->gpr[5] + (u32)(s32)(-19488);

label_807FD4C4:
    ctx->pc = 0x807FD4C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD4C4u)) return;
    // 807FD4C4: lis     r5, -28618
    ctx->gpr[5] = ((u32)(s32)(-28618) << 16);

label_807FD4C8:
    ctx->pc = 0x807FD4C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD4C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 807FD4C8: stw     r30, 8(r1)
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
label_807FD4CC:
    ctx->pc = 0x807FD4CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD4CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 807FD4CC: lha     r4, 0(r4)
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
label_807FD4D0:
    ctx->pc = 0x807FD4D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD4D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 807FD4D0: lha     r0, -5404(r3)
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
label_807FD4D4:
    ctx->pc = 0x807FD4D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD4D4u)) return;
    // 807FD4D4: rlwinm r3, r4, 8, 0, 23
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[4], 8u) & 0xFFFFFF00u;
    }

label_807FD4D8:
    ctx->pc = 0x807FD4D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD4D8u)) return;
    // 807FD4D8: addi    r4, r31, 192
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(192);

label_807FD4DC:
    ctx->pc = 0x807FD4DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD4DCu)) return;
    // 807FD4DC: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_807FD4E0:
    ctx->pc = 0x807FD4E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD4E0u)) return;
    // 807FD4E0: rlwinm r30, r0, 2, 22, 29
    {
        ctx->gpr[30] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0x000003FCu;
    }

label_807FD4E4:
    ctx->pc = 0x807FD4E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD4E4u)) return;
    // 807FD4E4: addi    r3, r5, -25468
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-25468);

label_807FD4E8:
    ctx->pc = 0x807FD4E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD4E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807FD4E8: lwzx    r4, r4, r30
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
label_807FD4EC:
    ctx->pc = 0x807FD4ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD4ECu)) return;
    // 807FD4EC: li      r5, 24
    ctx->gpr[5] = (u32)(s32)(24);

label_807FD4F0:
    ctx->pc = 0x807FD4F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD4F0u)) return;
    // 807FD4F0: bl      0x800031E8
    {
            ctx->lr = 0x807FD4F4u;
            ctx->pc = 0x800031E8u;
            return;
    }

label_807FD4F4:
    ctx->pc = 0x807FD4F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FD4F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 807FD4F4: addi    r4, r31, 168
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(168);

label_807FD4F8:
    ctx->pc = 0x807FD4F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD4F8u)) return;
    // 807FD4F8: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_807FD4FC:
    ctx->pc = 0x807FD4FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD4FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 807FD4FC: lwzx    r4, r4, r30
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
label_807FD500:
    ctx->pc = 0x807FD500u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD500u)) return;
    // 807FD500: addi    r3, r3, -25492
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25492);

label_807FD504:
    ctx->pc = 0x807FD504u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD504u)) return;
    // 807FD504: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_807FD508:
    ctx->pc = 0x807FD508u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD508u)) return;
    // 807FD508: bl      0x800031E8
    {
            ctx->lr = 0x807FD50Cu;
            ctx->pc = 0x800031E8u;
            return;
    }

label_807FD50C:
    ctx->pc = 0x807FD50Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FD50Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 807FD50C: addi    r4, r31, 180
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(180);

label_807FD510:
    ctx->pc = 0x807FD510u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD510u)) return;
    // 807FD510: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_807FD514:
    ctx->pc = 0x807FD514u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD514u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 807FD514: lwzx    r4, r4, r30
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
label_807FD518:
    ctx->pc = 0x807FD518u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD518u)) return;
    // 807FD518: addi    r3, r3, -25500
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25500);

label_807FD51C:
    ctx->pc = 0x807FD51Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD51Cu)) return;
    // 807FD51C: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_807FD520:
    ctx->pc = 0x807FD520u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD520u)) return;
    // 807FD520: bl      0x800031E8
    {
            ctx->lr = 0x807FD524u;
            ctx->pc = 0x800031E8u;
            return;
    }

label_807FD524:
    ctx->pc = 0x807FD524u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FD524u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 807FD524: addi    r4, r31, 156
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(156);

label_807FD528:
    ctx->pc = 0x807FD528u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD528u)) return;
    // 807FD528: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_807FD52C:
    ctx->pc = 0x807FD52Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD52Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 807FD52C: lwzx    r4, r4, r30
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
label_807FD530:
    ctx->pc = 0x807FD530u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD530u)) return;
    // 807FD530: addi    r3, r3, -25484
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25484);

label_807FD534:
    ctx->pc = 0x807FD534u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD534u)) return;
    // 807FD534: li      r5, 12
    ctx->gpr[5] = (u32)(s32)(12);

label_807FD538:
    ctx->pc = 0x807FD538u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD538u)) return;
    // 807FD538: bl      0x800031E8
    {
            ctx->lr = 0x807FD53Cu;
            ctx->pc = 0x800031E8u;
            return;
    }

label_807FD53C:
    ctx->pc = 0x807FD53Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FD53Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 807FD53C: lwz     r0, 20(r1)
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
label_807FD540:
    ctx->pc = 0x807FD540u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD540u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 807FD540: lwz     r31, 12(r1)
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
label_807FD544:
    ctx->pc = 0x807FD544u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD544u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 807FD544: lwz     r30, 8(r1)
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
label_807FD548:
    ctx->pc = 0x807FD548u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x807FD548u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807FD548: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD54C:
    ctx->pc = 0x807FD54Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD54Cu)) return;
    // 807FD54C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_807FD550:
    ctx->pc = 0x807FD550u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD550u)) return;
    // 807FD550: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_807FC740;
        }
    }

label_807FD554:
    ctx->pc = 0x807FD554u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FD554u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 807FD554: stwu     r1, -16(r1)
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
label_807FD558:
    ctx->pc = 0x807FD558u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD558u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 807FD558: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD55C:
    ctx->pc = 0x807FD55Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD55Cu)) return;
    // 807FD55C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_807FD560:
    ctx->pc = 0x807FD560u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD560u)) return;
    // 807FD560: li      r3, 984
    ctx->gpr[3] = (u32)(s32)(984);

label_807FD564:
    ctx->pc = 0x807FD564u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD564u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 807FD564: stw     r0, 20(r1)
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
label_807FD568:
    ctx->pc = 0x807FD568u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD568u)) return;
    // 807FD568: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_807FD56C:
    ctx->pc = 0x807FD56Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD56Cu)) return;
    // 807FD56C: li      r6, 48
    ctx->gpr[6] = (u32)(s32)(48);

label_807FD570:
    ctx->pc = 0x807FD570u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD570u)) return;
    // 807FD570: li      r7, 2
    ctx->gpr[7] = (u32)(s32)(2);

label_807FD574:
    ctx->pc = 0x807FD574u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD574u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 807FD574: lwz     r8, 32(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD578:
    ctx->pc = 0x807FD578u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD578u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 807FD578: lfs     f1, 32(r8)
    if (!ppc_fp_available_inline(ctx, 0x807FD578u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD57C:
    ctx->pc = 0x807FD57Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD57Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807FD57C: lfs     f2, 36(r8)
    if (!ppc_fp_available_inline(ctx, 0x807FD57Cu)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(36);
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
label_807FD580:
    ctx->pc = 0x807FD580u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD580u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 807FD580: lfs     f3, 40(r8)
    if (!ppc_fp_available_inline(ctx, 0x807FD580u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(40);
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
label_807FD584:
    ctx->pc = 0x807FD584u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD584u)) return;
    // 807FD584: bl      0x80509F50
    {
            ctx->lr = 0x807FD588u;
            ctx->pc = 0x80509F50u;
            return;
    }

label_807FD588:
    ctx->pc = 0x807FD588u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x807FD588u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 807FD588: lwz     r0, 20(r1)
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
label_807FD58C:
    ctx->pc = 0x807FD58Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x807FD58Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 807FD58C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_807FD590:
    ctx->pc = 0x807FD590u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD590u)) return;
    // 807FD590: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_807FD594:
    ctx->pc = 0x807FD594u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x807FD594u)) return;
    // 807FD594: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_807FC740;
        }
    }

    ctx->pc = 0x807FD598u;
    return;
return_dispatch_807FC740:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x807FC948u: goto label_807FC948;
    case 0x807FC974u: goto label_807FC974;
    case 0x807FC988u: goto label_807FC988;
    case 0x807FC9A0u: goto label_807FC9A0;
    case 0x807FC9CCu: goto label_807FC9CC;
    case 0x807FC9D0u: goto label_807FC9D0;
    case 0x807FC9E4u: goto label_807FC9E4;
    case 0x807FC9FCu: goto label_807FC9FC;
    case 0x807FCA28u: goto label_807FCA28;
    case 0x807FCA34u: goto label_807FCA34;
    case 0x807FCA98u: goto label_807FCA98;
    case 0x807FCAB0u: goto label_807FCAB0;
    case 0x807FCAC8u: goto label_807FCAC8;
    case 0x807FCAE0u: goto label_807FCAE0;
    case 0x807FCAE4u: goto label_807FCAE4;
    case 0x807FCD1Cu: goto label_807FCD1C;
    case 0x807FCD48u: goto label_807FCD48;
    case 0x807FCD5Cu: goto label_807FCD5C;
    case 0x807FCD74u: goto label_807FCD74;
    case 0x807FCDA0u: goto label_807FCDA0;
    case 0x807FCDA4u: goto label_807FCDA4;
    case 0x807FCDB8u: goto label_807FCDB8;
    case 0x807FCDD0u: goto label_807FCDD0;
    case 0x807FCDFCu: goto label_807FCDFC;
    case 0x807FCE08u: goto label_807FCE08;
    case 0x807FCE6Cu: goto label_807FCE6C;
    case 0x807FCE84u: goto label_807FCE84;
    case 0x807FCE9Cu: goto label_807FCE9C;
    case 0x807FCEB4u: goto label_807FCEB4;
    case 0x807FCEB8u: goto label_807FCEB8;
    case 0x807FCEC0u: goto label_807FCEC0;
    case 0x807FD06Cu: goto label_807FD06C;
    case 0x807FD098u: goto label_807FD098;
    case 0x807FD0ACu: goto label_807FD0AC;
    case 0x807FD0C4u: goto label_807FD0C4;
    case 0x807FD0F0u: goto label_807FD0F0;
    case 0x807FD0F4u: goto label_807FD0F4;
    case 0x807FD108u: goto label_807FD108;
    case 0x807FD120u: goto label_807FD120;
    case 0x807FD14Cu: goto label_807FD14C;
    case 0x807FD158u: goto label_807FD158;
    case 0x807FD168u: goto label_807FD168;
    case 0x807FD33Cu: goto label_807FD33C;
    case 0x807FD368u: goto label_807FD368;
    case 0x807FD37Cu: goto label_807FD37C;
    case 0x807FD394u: goto label_807FD394;
    case 0x807FD3C0u: goto label_807FD3C0;
    case 0x807FD3C4u: goto label_807FD3C4;
    case 0x807FD3D8u: goto label_807FD3D8;
    case 0x807FD3F0u: goto label_807FD3F0;
    case 0x807FD41Cu: goto label_807FD41C;
    case 0x807FD428u: goto label_807FD428;
    case 0x807FD474u: goto label_807FD474;
    case 0x807FD480u: goto label_807FD480;
    case 0x807FD488u: goto label_807FD488;
    case 0x807FD4F4u: goto label_807FD4F4;
    case 0x807FD50Cu: goto label_807FD50C;
    case 0x807FD524u: goto label_807FD524;
    case 0x807FD53Cu: goto label_807FD53C;
    case 0x807FD588u: goto label_807FD588;
    default: return;
    }
}

