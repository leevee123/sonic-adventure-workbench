// DolRecomp output
#include "../generated.h"

void func_80CCB8E0(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80CCB8E0[1371] = {
        &&label_80CCB8E0,
        &&label_80CCB8E4,
        &&label_80CCB8E8,
        &&label_80CCB8EC,
        &&label_80CCB8F0,
        &&label_80CCB8F4,
        &&label_80CCB8F8,
        &&label_80CCB8FC,
        &&label_80CCB900,
        &&label_80CCB904,
        &&label_80CCB908,
        &&label_80CCB90C,
        &&label_80CCB910,
        &&label_80CCB914,
        &&label_80CCB918,
        &&label_80CCB91C,
        &&label_80CCB920,
        &&label_80CCB924,
        &&label_80CCB928,
        &&label_80CCB92C,
        &&label_80CCB930,
        &&label_80CCB934,
        &&label_80CCB938,
        &&label_80CCB93C,
        &&label_80CCB940,
        &&label_80CCB944,
        &&label_80CCB948,
        &&label_80CCB94C,
        &&label_80CCB950,
        &&label_80CCB954,
        &&label_80CCB958,
        &&label_80CCB95C,
        &&label_80CCB960,
        &&label_80CCB964,
        &&label_80CCB968,
        &&label_80CCB96C,
        &&label_80CCB970,
        &&label_80CCB974,
        &&label_80CCB978,
        &&label_80CCB97C,
        &&label_80CCB980,
        &&label_80CCB984,
        &&label_80CCB988,
        &&label_80CCB98C,
        &&label_80CCB990,
        &&label_80CCB994,
        &&label_80CCB998,
        &&label_80CCB99C,
        &&label_80CCB9A0,
        &&label_80CCB9A4,
        &&label_80CCB9A8,
        &&label_80CCB9AC,
        &&label_80CCB9B0,
        &&label_80CCB9B4,
        &&label_80CCB9B8,
        &&label_80CCB9BC,
        &&label_80CCB9C0,
        &&label_80CCB9C4,
        &&label_80CCB9C8,
        &&label_80CCB9CC,
        &&label_80CCB9D0,
        &&label_80CCB9D4,
        &&label_80CCB9D8,
        &&label_80CCB9DC,
        &&label_80CCB9E0,
        &&label_80CCB9E4,
        &&label_80CCB9E8,
        &&label_80CCB9EC,
        &&label_80CCB9F0,
        &&label_80CCB9F4,
        &&label_80CCB9F8,
        &&label_80CCB9FC,
        &&label_80CCBA00,
        &&label_80CCBA04,
        &&label_80CCBA08,
        &&label_80CCBA0C,
        &&label_80CCBA10,
        &&label_80CCBA14,
        &&label_80CCBA18,
        &&label_80CCBA1C,
        &&label_80CCBA20,
        &&label_80CCBA24,
        &&label_80CCBA28,
        &&label_80CCBA2C,
        &&label_80CCBA30,
        &&label_80CCBA34,
        &&label_80CCBA38,
        &&label_80CCBA3C,
        &&label_80CCBA40,
        &&label_80CCBA44,
        &&label_80CCBA48,
        &&label_80CCBA4C,
        &&label_80CCBA50,
        &&label_80CCBA54,
        &&label_80CCBA58,
        &&label_80CCBA5C,
        &&label_80CCBA60,
        &&label_80CCBA64,
        &&label_80CCBA68,
        &&label_80CCBA6C,
        &&label_80CCBA70,
        &&label_80CCBA74,
        &&label_80CCBA78,
        &&label_80CCBA7C,
        &&label_80CCBA80,
        &&label_80CCBA84,
        &&label_80CCBA88,
        &&label_80CCBA8C,
        &&label_80CCBA90,
        &&label_80CCBA94,
        &&label_80CCBA98,
        &&label_80CCBA9C,
        &&label_80CCBAA0,
        &&label_80CCBAA4,
        &&label_80CCBAA8,
        &&label_80CCBAAC,
        &&label_80CCBAB0,
        &&label_80CCBAB4,
        &&label_80CCBAB8,
        &&label_80CCBABC,
        &&label_80CCBAC0,
        &&label_80CCBAC4,
        &&label_80CCBAC8,
        &&label_80CCBACC,
        &&label_80CCBAD0,
        &&label_80CCBAD4,
        &&label_80CCBAD8,
        &&label_80CCBADC,
        &&label_80CCBAE0,
        &&label_80CCBAE4,
        &&label_80CCBAE8,
        &&label_80CCBAEC,
        &&label_80CCBAF0,
        &&label_80CCBAF4,
        &&label_80CCBAF8,
        &&label_80CCBAFC,
        &&label_80CCBB00,
        &&label_80CCBB04,
        &&label_80CCBB08,
        &&label_80CCBB0C,
        &&label_80CCBB10,
        &&label_80CCBB14,
        &&label_80CCBB18,
        &&label_80CCBB1C,
        &&label_80CCBB20,
        &&label_80CCBB24,
        &&label_80CCBB28,
        &&label_80CCBB2C,
        &&label_80CCBB30,
        &&label_80CCBB34,
        &&label_80CCBB38,
        &&label_80CCBB3C,
        &&label_80CCBB40,
        &&label_80CCBB44,
        &&label_80CCBB48,
        &&label_80CCBB4C,
        &&label_80CCBB50,
        &&label_80CCBB54,
        &&label_80CCBB58,
        &&label_80CCBB5C,
        &&label_80CCBB60,
        &&label_80CCBB64,
        &&label_80CCBB68,
        &&label_80CCBB6C,
        &&label_80CCBB70,
        &&label_80CCBB74,
        &&label_80CCBB78,
        &&label_80CCBB7C,
        &&label_80CCBB80,
        &&label_80CCBB84,
        &&label_80CCBB88,
        &&label_80CCBB8C,
        &&label_80CCBB90,
        &&label_80CCBB94,
        &&label_80CCBB98,
        &&label_80CCBB9C,
        &&label_80CCBBA0,
        &&label_80CCBBA4,
        &&label_80CCBBA8,
        &&label_80CCBBAC,
        &&label_80CCBBB0,
        &&label_80CCBBB4,
        &&label_80CCBBB8,
        &&label_80CCBBBC,
        &&label_80CCBBC0,
        &&label_80CCBBC4,
        &&label_80CCBBC8,
        &&label_80CCBBCC,
        &&label_80CCBBD0,
        &&label_80CCBBD4,
        &&label_80CCBBD8,
        &&label_80CCBBDC,
        &&label_80CCBBE0,
        &&label_80CCBBE4,
        &&label_80CCBBE8,
        &&label_80CCBBEC,
        &&label_80CCBBF0,
        &&label_80CCBBF4,
        &&label_80CCBBF8,
        &&label_80CCBBFC,
        &&label_80CCBC00,
        &&label_80CCBC04,
        &&label_80CCBC08,
        &&label_80CCBC0C,
        &&label_80CCBC10,
        &&label_80CCBC14,
        &&label_80CCBC18,
        &&label_80CCBC1C,
        &&label_80CCBC20,
        &&label_80CCBC24,
        &&label_80CCBC28,
        &&label_80CCBC2C,
        &&label_80CCBC30,
        &&label_80CCBC34,
        &&label_80CCBC38,
        &&label_80CCBC3C,
        &&label_80CCBC40,
        &&label_80CCBC44,
        &&label_80CCBC48,
        &&label_80CCBC4C,
        &&label_80CCBC50,
        &&label_80CCBC54,
        &&label_80CCBC58,
        &&label_80CCBC5C,
        &&label_80CCBC60,
        &&label_80CCBC64,
        &&label_80CCBC68,
        &&label_80CCBC6C,
        &&label_80CCBC70,
        &&label_80CCBC74,
        &&label_80CCBC78,
        &&label_80CCBC7C,
        &&label_80CCBC80,
        &&label_80CCBC84,
        &&label_80CCBC88,
        &&label_80CCBC8C,
        &&label_80CCBC90,
        &&label_80CCBC94,
        &&label_80CCBC98,
        &&label_80CCBC9C,
        &&label_80CCBCA0,
        &&label_80CCBCA4,
        &&label_80CCBCA8,
        &&label_80CCBCAC,
        &&label_80CCBCB0,
        &&label_80CCBCB4,
        &&label_80CCBCB8,
        &&label_80CCBCBC,
        &&label_80CCBCC0,
        &&label_80CCBCC4,
        &&label_80CCBCC8,
        &&label_80CCBCCC,
        &&label_80CCBCD0,
        &&label_80CCBCD4,
        &&label_80CCBCD8,
        &&label_80CCBCDC,
        &&label_80CCBCE0,
        &&label_80CCBCE4,
        &&label_80CCBCE8,
        &&label_80CCBCEC,
        &&label_80CCBCF0,
        &&label_80CCBCF4,
        &&label_80CCBCF8,
        &&label_80CCBCFC,
        &&label_80CCBD00,
        &&label_80CCBD04,
        &&label_80CCBD08,
        &&label_80CCBD0C,
        &&label_80CCBD10,
        &&label_80CCBD14,
        &&label_80CCBD18,
        &&label_80CCBD1C,
        &&label_80CCBD20,
        &&label_80CCBD24,
        &&label_80CCBD28,
        &&label_80CCBD2C,
        &&label_80CCBD30,
        &&label_80CCBD34,
        &&label_80CCBD38,
        &&label_80CCBD3C,
        &&label_80CCBD40,
        &&label_80CCBD44,
        &&label_80CCBD48,
        &&label_80CCBD4C,
        &&label_80CCBD50,
        &&label_80CCBD54,
        &&label_80CCBD58,
        &&label_80CCBD5C,
        &&label_80CCBD60,
        &&label_80CCBD64,
        &&label_80CCBD68,
        &&label_80CCBD6C,
        &&label_80CCBD70,
        &&label_80CCBD74,
        &&label_80CCBD78,
        &&label_80CCBD7C,
        &&label_80CCBD80,
        &&label_80CCBD84,
        &&label_80CCBD88,
        &&label_80CCBD8C,
        &&label_80CCBD90,
        &&label_80CCBD94,
        &&label_80CCBD98,
        &&label_80CCBD9C,
        &&label_80CCBDA0,
        &&label_80CCBDA4,
        &&label_80CCBDA8,
        &&label_80CCBDAC,
        &&label_80CCBDB0,
        &&label_80CCBDB4,
        &&label_80CCBDB8,
        &&label_80CCBDBC,
        &&label_80CCBDC0,
        &&label_80CCBDC4,
        &&label_80CCBDC8,
        &&label_80CCBDCC,
        &&label_80CCBDD0,
        &&label_80CCBDD4,
        &&label_80CCBDD8,
        &&label_80CCBDDC,
        &&label_80CCBDE0,
        &&label_80CCBDE4,
        &&label_80CCBDE8,
        &&label_80CCBDEC,
        &&label_80CCBDF0,
        &&label_80CCBDF4,
        &&label_80CCBDF8,
        &&label_80CCBDFC,
        &&label_80CCBE00,
        &&label_80CCBE04,
        &&label_80CCBE08,
        &&label_80CCBE0C,
        &&label_80CCBE10,
        &&label_80CCBE14,
        &&label_80CCBE18,
        &&label_80CCBE1C,
        &&label_80CCBE20,
        &&label_80CCBE24,
        &&label_80CCBE28,
        &&label_80CCBE2C,
        &&label_80CCBE30,
        &&label_80CCBE34,
        &&label_80CCBE38,
        &&label_80CCBE3C,
        &&label_80CCBE40,
        &&label_80CCBE44,
        &&label_80CCBE48,
        &&label_80CCBE4C,
        &&label_80CCBE50,
        &&label_80CCBE54,
        &&label_80CCBE58,
        &&label_80CCBE5C,
        &&label_80CCBE60,
        &&label_80CCBE64,
        &&label_80CCBE68,
        &&label_80CCBE6C,
        &&label_80CCBE70,
        &&label_80CCBE74,
        &&label_80CCBE78,
        &&label_80CCBE7C,
        &&label_80CCBE80,
        &&label_80CCBE84,
        &&label_80CCBE88,
        &&label_80CCBE8C,
        &&label_80CCBE90,
        &&label_80CCBE94,
        &&label_80CCBE98,
        &&label_80CCBE9C,
        &&label_80CCBEA0,
        &&label_80CCBEA4,
        &&label_80CCBEA8,
        &&label_80CCBEAC,
        &&label_80CCBEB0,
        &&label_80CCBEB4,
        &&label_80CCBEB8,
        &&label_80CCBEBC,
        &&label_80CCBEC0,
        &&label_80CCBEC4,
        &&label_80CCBEC8,
        &&label_80CCBECC,
        &&label_80CCBED0,
        &&label_80CCBED4,
        &&label_80CCBED8,
        &&label_80CCBEDC,
        &&label_80CCBEE0,
        &&label_80CCBEE4,
        &&label_80CCBEE8,
        &&label_80CCBEEC,
        &&label_80CCBEF0,
        &&label_80CCBEF4,
        &&label_80CCBEF8,
        &&label_80CCBEFC,
        &&label_80CCBF00,
        &&label_80CCBF04,
        &&label_80CCBF08,
        &&label_80CCBF0C,
        &&label_80CCBF10,
        &&label_80CCBF14,
        &&label_80CCBF18,
        &&label_80CCBF1C,
        &&label_80CCBF20,
        &&label_80CCBF24,
        &&label_80CCBF28,
        &&label_80CCBF2C,
        &&label_80CCBF30,
        &&label_80CCBF34,
        &&label_80CCBF38,
        &&label_80CCBF3C,
        &&label_80CCBF40,
        &&label_80CCBF44,
        &&label_80CCBF48,
        &&label_80CCBF4C,
        &&label_80CCBF50,
        &&label_80CCBF54,
        &&label_80CCBF58,
        &&label_80CCBF5C,
        &&label_80CCBF60,
        &&label_80CCBF64,
        &&label_80CCBF68,
        &&label_80CCBF6C,
        &&label_80CCBF70,
        &&label_80CCBF74,
        &&label_80CCBF78,
        &&label_80CCBF7C,
        &&label_80CCBF80,
        &&label_80CCBF84,
        &&label_80CCBF88,
        &&label_80CCBF8C,
        &&label_80CCBF90,
        &&label_80CCBF94,
        &&label_80CCBF98,
        &&label_80CCBF9C,
        &&label_80CCBFA0,
        &&label_80CCBFA4,
        &&label_80CCBFA8,
        &&label_80CCBFAC,
        &&label_80CCBFB0,
        &&label_80CCBFB4,
        &&label_80CCBFB8,
        &&label_80CCBFBC,
        &&label_80CCBFC0,
        &&label_80CCBFC4,
        &&label_80CCBFC8,
        &&label_80CCBFCC,
        &&label_80CCBFD0,
        &&label_80CCBFD4,
        &&label_80CCBFD8,
        &&label_80CCBFDC,
        &&label_80CCBFE0,
        &&label_80CCBFE4,
        &&label_80CCBFE8,
        &&label_80CCBFEC,
        &&label_80CCBFF0,
        &&label_80CCBFF4,
        &&label_80CCBFF8,
        &&label_80CCBFFC,
        &&label_80CCC000,
        &&label_80CCC004,
        &&label_80CCC008,
        &&label_80CCC00C,
        &&label_80CCC010,
        &&label_80CCC014,
        &&label_80CCC018,
        &&label_80CCC01C,
        &&label_80CCC020,
        &&label_80CCC024,
        &&label_80CCC028,
        &&label_80CCC02C,
        &&label_80CCC030,
        &&label_80CCC034,
        &&label_80CCC038,
        &&label_80CCC03C,
        &&label_80CCC040,
        &&label_80CCC044,
        &&label_80CCC048,
        &&label_80CCC04C,
        &&label_80CCC050,
        &&label_80CCC054,
        &&label_80CCC058,
        &&label_80CCC05C,
        &&label_80CCC060,
        &&label_80CCC064,
        &&label_80CCC068,
        &&label_80CCC06C,
        &&label_80CCC070,
        &&label_80CCC074,
        &&label_80CCC078,
        &&label_80CCC07C,
        &&label_80CCC080,
        &&label_80CCC084,
        &&label_80CCC088,
        &&label_80CCC08C,
        &&label_80CCC090,
        &&label_80CCC094,
        &&label_80CCC098,
        &&label_80CCC09C,
        &&label_80CCC0A0,
        &&label_80CCC0A4,
        &&label_80CCC0A8,
        &&label_80CCC0AC,
        &&label_80CCC0B0,
        &&label_80CCC0B4,
        &&label_80CCC0B8,
        &&label_80CCC0BC,
        &&label_80CCC0C0,
        &&label_80CCC0C4,
        &&label_80CCC0C8,
        &&label_80CCC0CC,
        &&label_80CCC0D0,
        &&label_80CCC0D4,
        &&label_80CCC0D8,
        &&label_80CCC0DC,
        &&label_80CCC0E0,
        &&label_80CCC0E4,
        &&label_80CCC0E8,
        &&label_80CCC0EC,
        &&label_80CCC0F0,
        &&label_80CCC0F4,
        &&label_80CCC0F8,
        &&label_80CCC0FC,
        &&label_80CCC100,
        &&label_80CCC104,
        &&label_80CCC108,
        &&label_80CCC10C,
        &&label_80CCC110,
        &&label_80CCC114,
        &&label_80CCC118,
        &&label_80CCC11C,
        &&label_80CCC120,
        &&label_80CCC124,
        &&label_80CCC128,
        &&label_80CCC12C,
        &&label_80CCC130,
        &&label_80CCC134,
        &&label_80CCC138,
        &&label_80CCC13C,
        &&label_80CCC140,
        &&label_80CCC144,
        &&label_80CCC148,
        &&label_80CCC14C,
        &&label_80CCC150,
        &&label_80CCC154,
        &&label_80CCC158,
        &&label_80CCC15C,
        &&label_80CCC160,
        &&label_80CCC164,
        &&label_80CCC168,
        &&label_80CCC16C,
        &&label_80CCC170,
        &&label_80CCC174,
        &&label_80CCC178,
        &&label_80CCC17C,
        &&label_80CCC180,
        &&label_80CCC184,
        &&label_80CCC188,
        &&label_80CCC18C,
        &&label_80CCC190,
        &&label_80CCC194,
        &&label_80CCC198,
        &&label_80CCC19C,
        &&label_80CCC1A0,
        &&label_80CCC1A4,
        &&label_80CCC1A8,
        &&label_80CCC1AC,
        &&label_80CCC1B0,
        &&label_80CCC1B4,
        &&label_80CCC1B8,
        &&label_80CCC1BC,
        &&label_80CCC1C0,
        &&label_80CCC1C4,
        &&label_80CCC1C8,
        &&label_80CCC1CC,
        &&label_80CCC1D0,
        &&label_80CCC1D4,
        &&label_80CCC1D8,
        &&label_80CCC1DC,
        &&label_80CCC1E0,
        &&label_80CCC1E4,
        &&label_80CCC1E8,
        &&label_80CCC1EC,
        &&label_80CCC1F0,
        &&label_80CCC1F4,
        &&label_80CCC1F8,
        &&label_80CCC1FC,
        &&label_80CCC200,
        &&label_80CCC204,
        &&label_80CCC208,
        &&label_80CCC20C,
        &&label_80CCC210,
        &&label_80CCC214,
        &&label_80CCC218,
        &&label_80CCC21C,
        &&label_80CCC220,
        &&label_80CCC224,
        &&label_80CCC228,
        &&label_80CCC22C,
        &&label_80CCC230,
        &&label_80CCC234,
        &&label_80CCC238,
        &&label_80CCC23C,
        &&label_80CCC240,
        &&label_80CCC244,
        &&label_80CCC248,
        &&label_80CCC24C,
        &&label_80CCC250,
        &&label_80CCC254,
        &&label_80CCC258,
        &&label_80CCC25C,
        &&label_80CCC260,
        &&label_80CCC264,
        &&label_80CCC268,
        &&label_80CCC26C,
        &&label_80CCC270,
        &&label_80CCC274,
        &&label_80CCC278,
        &&label_80CCC27C,
        &&label_80CCC280,
        &&label_80CCC284,
        &&label_80CCC288,
        &&label_80CCC28C,
        &&label_80CCC290,
        &&label_80CCC294,
        &&label_80CCC298,
        &&label_80CCC29C,
        &&label_80CCC2A0,
        &&label_80CCC2A4,
        &&label_80CCC2A8,
        &&label_80CCC2AC,
        &&label_80CCC2B0,
        &&label_80CCC2B4,
        &&label_80CCC2B8,
        &&label_80CCC2BC,
        &&label_80CCC2C0,
        &&label_80CCC2C4,
        &&label_80CCC2C8,
        &&label_80CCC2CC,
        &&label_80CCC2D0,
        &&label_80CCC2D4,
        &&label_80CCC2D8,
        &&label_80CCC2DC,
        &&label_80CCC2E0,
        &&label_80CCC2E4,
        &&label_80CCC2E8,
        &&label_80CCC2EC,
        &&label_80CCC2F0,
        &&label_80CCC2F4,
        &&label_80CCC2F8,
        &&label_80CCC2FC,
        &&label_80CCC300,
        &&label_80CCC304,
        &&label_80CCC308,
        &&label_80CCC30C,
        &&label_80CCC310,
        &&label_80CCC314,
        &&label_80CCC318,
        &&label_80CCC31C,
        &&label_80CCC320,
        &&label_80CCC324,
        &&label_80CCC328,
        &&label_80CCC32C,
        &&label_80CCC330,
        &&label_80CCC334,
        &&label_80CCC338,
        &&label_80CCC33C,
        &&label_80CCC340,
        &&label_80CCC344,
        &&label_80CCC348,
        &&label_80CCC34C,
        &&label_80CCC350,
        &&label_80CCC354,
        &&label_80CCC358,
        &&label_80CCC35C,
        &&label_80CCC360,
        &&label_80CCC364,
        &&label_80CCC368,
        &&label_80CCC36C,
        &&label_80CCC370,
        &&label_80CCC374,
        &&label_80CCC378,
        &&label_80CCC37C,
        &&label_80CCC380,
        &&label_80CCC384,
        &&label_80CCC388,
        &&label_80CCC38C,
        &&label_80CCC390,
        &&label_80CCC394,
        &&label_80CCC398,
        &&label_80CCC39C,
        &&label_80CCC3A0,
        &&label_80CCC3A4,
        &&label_80CCC3A8,
        &&label_80CCC3AC,
        &&label_80CCC3B0,
        &&label_80CCC3B4,
        &&label_80CCC3B8,
        &&label_80CCC3BC,
        &&label_80CCC3C0,
        &&label_80CCC3C4,
        &&label_80CCC3C8,
        &&label_80CCC3CC,
        &&label_80CCC3D0,
        &&label_80CCC3D4,
        &&label_80CCC3D8,
        &&label_80CCC3DC,
        &&label_80CCC3E0,
        &&label_80CCC3E4,
        &&label_80CCC3E8,
        &&label_80CCC3EC,
        &&label_80CCC3F0,
        &&label_80CCC3F4,
        &&label_80CCC3F8,
        &&label_80CCC3FC,
        &&label_80CCC400,
        &&label_80CCC404,
        &&label_80CCC408,
        &&label_80CCC40C,
        &&label_80CCC410,
        &&label_80CCC414,
        &&label_80CCC418,
        &&label_80CCC41C,
        &&label_80CCC420,
        &&label_80CCC424,
        &&label_80CCC428,
        &&label_80CCC42C,
        &&label_80CCC430,
        &&label_80CCC434,
        &&label_80CCC438,
        &&label_80CCC43C,
        &&label_80CCC440,
        &&label_80CCC444,
        &&label_80CCC448,
        &&label_80CCC44C,
        &&label_80CCC450,
        &&label_80CCC454,
        &&label_80CCC458,
        &&label_80CCC45C,
        &&label_80CCC460,
        &&label_80CCC464,
        &&label_80CCC468,
        &&label_80CCC46C,
        &&label_80CCC470,
        &&label_80CCC474,
        &&label_80CCC478,
        &&label_80CCC47C,
        &&label_80CCC480,
        &&label_80CCC484,
        &&label_80CCC488,
        &&label_80CCC48C,
        &&label_80CCC490,
        &&label_80CCC494,
        &&label_80CCC498,
        &&label_80CCC49C,
        &&label_80CCC4A0,
        &&label_80CCC4A4,
        &&label_80CCC4A8,
        &&label_80CCC4AC,
        &&label_80CCC4B0,
        &&label_80CCC4B4,
        &&label_80CCC4B8,
        &&label_80CCC4BC,
        &&label_80CCC4C0,
        &&label_80CCC4C4,
        &&label_80CCC4C8,
        &&label_80CCC4CC,
        &&label_80CCC4D0,
        &&label_80CCC4D4,
        &&label_80CCC4D8,
        &&label_80CCC4DC,
        &&label_80CCC4E0,
        &&label_80CCC4E4,
        &&label_80CCC4E8,
        &&label_80CCC4EC,
        &&label_80CCC4F0,
        &&label_80CCC4F4,
        &&label_80CCC4F8,
        &&label_80CCC4FC,
        &&label_80CCC500,
        &&label_80CCC504,
        &&label_80CCC508,
        &&label_80CCC50C,
        &&label_80CCC510,
        &&label_80CCC514,
        &&label_80CCC518,
        &&label_80CCC51C,
        &&label_80CCC520,
        &&label_80CCC524,
        &&label_80CCC528,
        &&label_80CCC52C,
        &&label_80CCC530,
        &&label_80CCC534,
        &&label_80CCC538,
        &&label_80CCC53C,
        &&label_80CCC540,
        &&label_80CCC544,
        &&label_80CCC548,
        &&label_80CCC54C,
        &&label_80CCC550,
        &&label_80CCC554,
        &&label_80CCC558,
        &&label_80CCC55C,
        &&label_80CCC560,
        &&label_80CCC564,
        &&label_80CCC568,
        &&label_80CCC56C,
        &&label_80CCC570,
        &&label_80CCC574,
        &&label_80CCC578,
        &&label_80CCC57C,
        &&label_80CCC580,
        &&label_80CCC584,
        &&label_80CCC588,
        &&label_80CCC58C,
        &&label_80CCC590,
        &&label_80CCC594,
        &&label_80CCC598,
        &&label_80CCC59C,
        &&label_80CCC5A0,
        &&label_80CCC5A4,
        &&label_80CCC5A8,
        &&label_80CCC5AC,
        &&label_80CCC5B0,
        &&label_80CCC5B4,
        &&label_80CCC5B8,
        &&label_80CCC5BC,
        &&label_80CCC5C0,
        &&label_80CCC5C4,
        &&label_80CCC5C8,
        &&label_80CCC5CC,
        &&label_80CCC5D0,
        &&label_80CCC5D4,
        &&label_80CCC5D8,
        &&label_80CCC5DC,
        &&label_80CCC5E0,
        &&label_80CCC5E4,
        &&label_80CCC5E8,
        &&label_80CCC5EC,
        &&label_80CCC5F0,
        &&label_80CCC5F4,
        &&label_80CCC5F8,
        &&label_80CCC5FC,
        &&label_80CCC600,
        &&label_80CCC604,
        &&label_80CCC608,
        &&label_80CCC60C,
        &&label_80CCC610,
        &&label_80CCC614,
        &&label_80CCC618,
        &&label_80CCC61C,
        &&label_80CCC620,
        &&label_80CCC624,
        &&label_80CCC628,
        &&label_80CCC62C,
        &&label_80CCC630,
        &&label_80CCC634,
        &&label_80CCC638,
        &&label_80CCC63C,
        &&label_80CCC640,
        &&label_80CCC644,
        &&label_80CCC648,
        &&label_80CCC64C,
        &&label_80CCC650,
        &&label_80CCC654,
        &&label_80CCC658,
        &&label_80CCC65C,
        &&label_80CCC660,
        &&label_80CCC664,
        &&label_80CCC668,
        &&label_80CCC66C,
        &&label_80CCC670,
        &&label_80CCC674,
        &&label_80CCC678,
        &&label_80CCC67C,
        &&label_80CCC680,
        &&label_80CCC684,
        &&label_80CCC688,
        &&label_80CCC68C,
        &&label_80CCC690,
        &&label_80CCC694,
        &&label_80CCC698,
        &&label_80CCC69C,
        &&label_80CCC6A0,
        &&label_80CCC6A4,
        &&label_80CCC6A8,
        &&label_80CCC6AC,
        &&label_80CCC6B0,
        &&label_80CCC6B4,
        &&label_80CCC6B8,
        &&label_80CCC6BC,
        &&label_80CCC6C0,
        &&label_80CCC6C4,
        &&label_80CCC6C8,
        &&label_80CCC6CC,
        &&label_80CCC6D0,
        &&label_80CCC6D4,
        &&label_80CCC6D8,
        &&label_80CCC6DC,
        &&label_80CCC6E0,
        &&label_80CCC6E4,
        &&label_80CCC6E8,
        &&label_80CCC6EC,
        &&label_80CCC6F0,
        &&label_80CCC6F4,
        &&label_80CCC6F8,
        &&label_80CCC6FC,
        &&label_80CCC700,
        &&label_80CCC704,
        &&label_80CCC708,
        &&label_80CCC70C,
        &&label_80CCC710,
        &&label_80CCC714,
        &&label_80CCC718,
        &&label_80CCC71C,
        &&label_80CCC720,
        &&label_80CCC724,
        &&label_80CCC728,
        &&label_80CCC72C,
        &&label_80CCC730,
        &&label_80CCC734,
        &&label_80CCC738,
        &&label_80CCC73C,
        &&label_80CCC740,
        &&label_80CCC744,
        &&label_80CCC748,
        &&label_80CCC74C,
        &&label_80CCC750,
        &&label_80CCC754,
        &&label_80CCC758,
        &&label_80CCC75C,
        &&label_80CCC760,
        &&label_80CCC764,
        &&label_80CCC768,
        &&label_80CCC76C,
        &&label_80CCC770,
        &&label_80CCC774,
        &&label_80CCC778,
        &&label_80CCC77C,
        &&label_80CCC780,
        &&label_80CCC784,
        &&label_80CCC788,
        &&label_80CCC78C,
        &&label_80CCC790,
        &&label_80CCC794,
        &&label_80CCC798,
        &&label_80CCC79C,
        &&label_80CCC7A0,
        &&label_80CCC7A4,
        &&label_80CCC7A8,
        &&label_80CCC7AC,
        &&label_80CCC7B0,
        &&label_80CCC7B4,
        &&label_80CCC7B8,
        &&label_80CCC7BC,
        &&label_80CCC7C0,
        &&label_80CCC7C4,
        &&label_80CCC7C8,
        &&label_80CCC7CC,
        &&label_80CCC7D0,
        &&label_80CCC7D4,
        &&label_80CCC7D8,
        &&label_80CCC7DC,
        &&label_80CCC7E0,
        &&label_80CCC7E4,
        &&label_80CCC7E8,
        &&label_80CCC7EC,
        &&label_80CCC7F0,
        &&label_80CCC7F4,
        &&label_80CCC7F8,
        &&label_80CCC7FC,
        &&label_80CCC800,
        &&label_80CCC804,
        &&label_80CCC808,
        &&label_80CCC80C,
        &&label_80CCC810,
        &&label_80CCC814,
        &&label_80CCC818,
        &&label_80CCC81C,
        &&label_80CCC820,
        &&label_80CCC824,
        &&label_80CCC828,
        &&label_80CCC82C,
        &&label_80CCC830,
        &&label_80CCC834,
        &&label_80CCC838,
        &&label_80CCC83C,
        &&label_80CCC840,
        &&label_80CCC844,
        &&label_80CCC848,
        &&label_80CCC84C,
        &&label_80CCC850,
        &&label_80CCC854,
        &&label_80CCC858,
        &&label_80CCC85C,
        &&label_80CCC860,
        &&label_80CCC864,
        &&label_80CCC868,
        &&label_80CCC86C,
        &&label_80CCC870,
        &&label_80CCC874,
        &&label_80CCC878,
        &&label_80CCC87C,
        &&label_80CCC880,
        &&label_80CCC884,
        &&label_80CCC888,
        &&label_80CCC88C,
        &&label_80CCC890,
        &&label_80CCC894,
        &&label_80CCC898,
        &&label_80CCC89C,
        &&label_80CCC8A0,
        &&label_80CCC8A4,
        &&label_80CCC8A8,
        &&label_80CCC8AC,
        &&label_80CCC8B0,
        &&label_80CCC8B4,
        &&label_80CCC8B8,
        &&label_80CCC8BC,
        &&label_80CCC8C0,
        &&label_80CCC8C4,
        &&label_80CCC8C8,
        &&label_80CCC8CC,
        &&label_80CCC8D0,
        &&label_80CCC8D4,
        &&label_80CCC8D8,
        &&label_80CCC8DC,
        &&label_80CCC8E0,
        &&label_80CCC8E4,
        &&label_80CCC8E8,
        &&label_80CCC8EC,
        &&label_80CCC8F0,
        &&label_80CCC8F4,
        &&label_80CCC8F8,
        &&label_80CCC8FC,
        &&label_80CCC900,
        &&label_80CCC904,
        &&label_80CCC908,
        &&label_80CCC90C,
        &&label_80CCC910,
        &&label_80CCC914,
        &&label_80CCC918,
        &&label_80CCC91C,
        &&label_80CCC920,
        &&label_80CCC924,
        &&label_80CCC928,
        &&label_80CCC92C,
        &&label_80CCC930,
        &&label_80CCC934,
        &&label_80CCC938,
        &&label_80CCC93C,
        &&label_80CCC940,
        &&label_80CCC944,
        &&label_80CCC948,
        &&label_80CCC94C,
        &&label_80CCC950,
        &&label_80CCC954,
        &&label_80CCC958,
        &&label_80CCC95C,
        &&label_80CCC960,
        &&label_80CCC964,
        &&label_80CCC968,
        &&label_80CCC96C,
        &&label_80CCC970,
        &&label_80CCC974,
        &&label_80CCC978,
        &&label_80CCC97C,
        &&label_80CCC980,
        &&label_80CCC984,
        &&label_80CCC988,
        &&label_80CCC98C,
        &&label_80CCC990,
        &&label_80CCC994,
        &&label_80CCC998,
        &&label_80CCC99C,
        &&label_80CCC9A0,
        &&label_80CCC9A4,
        &&label_80CCC9A8,
        &&label_80CCC9AC,
        &&label_80CCC9B0,
        &&label_80CCC9B4,
        &&label_80CCC9B8,
        &&label_80CCC9BC,
        &&label_80CCC9C0,
        &&label_80CCC9C4,
        &&label_80CCC9C8,
        &&label_80CCC9CC,
        &&label_80CCC9D0,
        &&label_80CCC9D4,
        &&label_80CCC9D8,
        &&label_80CCC9DC,
        &&label_80CCC9E0,
        &&label_80CCC9E4,
        &&label_80CCC9E8,
        &&label_80CCC9EC,
        &&label_80CCC9F0,
        &&label_80CCC9F4,
        &&label_80CCC9F8,
        &&label_80CCC9FC,
        &&label_80CCCA00,
        &&label_80CCCA04,
        &&label_80CCCA08,
        &&label_80CCCA0C,
        &&label_80CCCA10,
        &&label_80CCCA14,
        &&label_80CCCA18,
        &&label_80CCCA1C,
        &&label_80CCCA20,
        &&label_80CCCA24,
        &&label_80CCCA28,
        &&label_80CCCA2C,
        &&label_80CCCA30,
        &&label_80CCCA34,
        &&label_80CCCA38,
        &&label_80CCCA3C,
        &&label_80CCCA40,
        &&label_80CCCA44,
        &&label_80CCCA48,
        &&label_80CCCA4C,
        &&label_80CCCA50,
        &&label_80CCCA54,
        &&label_80CCCA58,
        &&label_80CCCA5C,
        &&label_80CCCA60,
        &&label_80CCCA64,
        &&label_80CCCA68,
        &&label_80CCCA6C,
        &&label_80CCCA70,
        &&label_80CCCA74,
        &&label_80CCCA78,
        &&label_80CCCA7C,
        &&label_80CCCA80,
        &&label_80CCCA84,
        &&label_80CCCA88,
        &&label_80CCCA8C,
        &&label_80CCCA90,
        &&label_80CCCA94,
        &&label_80CCCA98,
        &&label_80CCCA9C,
        &&label_80CCCAA0,
        &&label_80CCCAA4,
        &&label_80CCCAA8,
        &&label_80CCCAAC,
        &&label_80CCCAB0,
        &&label_80CCCAB4,
        &&label_80CCCAB8,
        &&label_80CCCABC,
        &&label_80CCCAC0,
        &&label_80CCCAC4,
        &&label_80CCCAC8,
        &&label_80CCCACC,
        &&label_80CCCAD0,
        &&label_80CCCAD4,
        &&label_80CCCAD8,
        &&label_80CCCADC,
        &&label_80CCCAE0,
        &&label_80CCCAE4,
        &&label_80CCCAE8,
        &&label_80CCCAEC,
        &&label_80CCCAF0,
        &&label_80CCCAF4,
        &&label_80CCCAF8,
        &&label_80CCCAFC,
        &&label_80CCCB00,
        &&label_80CCCB04,
        &&label_80CCCB08,
        &&label_80CCCB0C,
        &&label_80CCCB10,
        &&label_80CCCB14,
        &&label_80CCCB18,
        &&label_80CCCB1C,
        &&label_80CCCB20,
        &&label_80CCCB24,
        &&label_80CCCB28,
        &&label_80CCCB2C,
        &&label_80CCCB30,
        &&label_80CCCB34,
        &&label_80CCCB38,
        &&label_80CCCB3C,
        &&label_80CCCB40,
        &&label_80CCCB44,
        &&label_80CCCB48,
        &&label_80CCCB4C,
        &&label_80CCCB50,
        &&label_80CCCB54,
        &&label_80CCCB58,
        &&label_80CCCB5C,
        &&label_80CCCB60,
        &&label_80CCCB64,
        &&label_80CCCB68,
        &&label_80CCCB6C,
        &&label_80CCCB70,
        &&label_80CCCB74,
        &&label_80CCCB78,
        &&label_80CCCB7C,
        &&label_80CCCB80,
        &&label_80CCCB84,
        &&label_80CCCB88,
        &&label_80CCCB8C,
        &&label_80CCCB90,
        &&label_80CCCB94,
        &&label_80CCCB98,
        &&label_80CCCB9C,
        &&label_80CCCBA0,
        &&label_80CCCBA4,
        &&label_80CCCBA8,
        &&label_80CCCBAC,
        &&label_80CCCBB0,
        &&label_80CCCBB4,
        &&label_80CCCBB8,
        &&label_80CCCBBC,
        &&label_80CCCBC0,
        &&label_80CCCBC4,
        &&label_80CCCBC8,
        &&label_80CCCBCC,
        &&label_80CCCBD0,
        &&label_80CCCBD4,
        &&label_80CCCBD8,
        &&label_80CCCBDC,
        &&label_80CCCBE0,
        &&label_80CCCBE4,
        &&label_80CCCBE8,
        &&label_80CCCBEC,
        &&label_80CCCBF0,
        &&label_80CCCBF4,
        &&label_80CCCBF8,
        &&label_80CCCBFC,
        &&label_80CCCC00,
        &&label_80CCCC04,
        &&label_80CCCC08,
        &&label_80CCCC0C,
        &&label_80CCCC10,
        &&label_80CCCC14,
        &&label_80CCCC18,
        &&label_80CCCC1C,
        &&label_80CCCC20,
        &&label_80CCCC24,
        &&label_80CCCC28,
        &&label_80CCCC2C,
        &&label_80CCCC30,
        &&label_80CCCC34,
        &&label_80CCCC38,
        &&label_80CCCC3C,
        &&label_80CCCC40,
        &&label_80CCCC44,
        &&label_80CCCC48,
        &&label_80CCCC4C,
        &&label_80CCCC50,
        &&label_80CCCC54,
        &&label_80CCCC58,
        &&label_80CCCC5C,
        &&label_80CCCC60,
        &&label_80CCCC64,
        &&label_80CCCC68,
        &&label_80CCCC6C,
        &&label_80CCCC70,
        &&label_80CCCC74,
        &&label_80CCCC78,
        &&label_80CCCC7C,
        &&label_80CCCC80,
        &&label_80CCCC84,
        &&label_80CCCC88,
        &&label_80CCCC8C,
        &&label_80CCCC90,
        &&label_80CCCC94,
        &&label_80CCCC98,
        &&label_80CCCC9C,
        &&label_80CCCCA0,
        &&label_80CCCCA4,
        &&label_80CCCCA8,
        &&label_80CCCCAC,
        &&label_80CCCCB0,
        &&label_80CCCCB4,
        &&label_80CCCCB8,
        &&label_80CCCCBC,
        &&label_80CCCCC0,
        &&label_80CCCCC4,
        &&label_80CCCCC8,
        &&label_80CCCCCC,
        &&label_80CCCCD0,
        &&label_80CCCCD4,
        &&label_80CCCCD8,
        &&label_80CCCCDC,
        &&label_80CCCCE0,
        &&label_80CCCCE4,
        &&label_80CCCCE8,
        &&label_80CCCCEC,
        &&label_80CCCCF0,
        &&label_80CCCCF4,
        &&label_80CCCCF8,
        &&label_80CCCCFC,
        &&label_80CCCD00,
        &&label_80CCCD04,
        &&label_80CCCD08,
        &&label_80CCCD0C,
        &&label_80CCCD10,
        &&label_80CCCD14,
        &&label_80CCCD18,
        &&label_80CCCD1C,
        &&label_80CCCD20,
        &&label_80CCCD24,
        &&label_80CCCD28,
        &&label_80CCCD2C,
        &&label_80CCCD30,
        &&label_80CCCD34,
        &&label_80CCCD38,
        &&label_80CCCD3C,
        &&label_80CCCD40,
        &&label_80CCCD44,
        &&label_80CCCD48,
        &&label_80CCCD4C,
        &&label_80CCCD50,
        &&label_80CCCD54,
        &&label_80CCCD58,
        &&label_80CCCD5C,
        &&label_80CCCD60,
        &&label_80CCCD64,
        &&label_80CCCD68,
        &&label_80CCCD6C,
        &&label_80CCCD70,
        &&label_80CCCD74,
        &&label_80CCCD78,
        &&label_80CCCD7C,
        &&label_80CCCD80,
        &&label_80CCCD84,
        &&label_80CCCD88,
        &&label_80CCCD8C,
        &&label_80CCCD90,
        &&label_80CCCD94,
        &&label_80CCCD98,
        &&label_80CCCD9C,
        &&label_80CCCDA0,
        &&label_80CCCDA4,
        &&label_80CCCDA8,
        &&label_80CCCDAC,
        &&label_80CCCDB0,
        &&label_80CCCDB4,
        &&label_80CCCDB8,
        &&label_80CCCDBC,
        &&label_80CCCDC0,
        &&label_80CCCDC4,
        &&label_80CCCDC8,
        &&label_80CCCDCC,
        &&label_80CCCDD0,
        &&label_80CCCDD4,
        &&label_80CCCDD8,
        &&label_80CCCDDC,
        &&label_80CCCDE0,
        &&label_80CCCDE4,
        &&label_80CCCDE8,
        &&label_80CCCDEC,
        &&label_80CCCDF0,
        &&label_80CCCDF4,
        &&label_80CCCDF8,
        &&label_80CCCDFC,
        &&label_80CCCE00,
        &&label_80CCCE04,
        &&label_80CCCE08,
        &&label_80CCCE0C,
        &&label_80CCCE10,
        &&label_80CCCE14,
        &&label_80CCCE18,
        &&label_80CCCE1C,
        &&label_80CCCE20,
        &&label_80CCCE24,
        &&label_80CCCE28,
        &&label_80CCCE2C,
        &&label_80CCCE30,
        &&label_80CCCE34,
        &&label_80CCCE38,
        &&label_80CCCE3C,
        &&label_80CCCE40,
        &&label_80CCCE44,
        &&label_80CCCE48
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80CCB8E0u && pc <= 0x80CCCE48u && ((pc - 0x80CCB8E0u) & 3u) == 0u)
            goto *pc_table_80CCB8E0[(pc - 0x80CCB8E0u) >> 2];
    }
    return;
label_80CCB8E0:
    ctx->pc = 0x80CCB8E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB8E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCB8E0: stwu     r1, -48(r1)
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
label_80CCB8E4:
    ctx->pc = 0x80CCB8E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB8E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CCB8E4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCB8E8:
    ctx->pc = 0x80CCB8E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB8E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCB8E8: stw     r0, 52(r1)
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
label_80CCB8EC:
    ctx->pc = 0x80CCB8ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB8ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CCB8EC: stfd     f31, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CCB8ECu)) return;
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
label_80CCB8F0:
    ctx->pc = 0x80CCB8F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB8F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCB8F0: psq_st   f31, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80CCB8F0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80CCB8F0u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCB8F4:
    ctx->pc = 0x80CCB8F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB8F4u)) return;
    // 80CCB8F4: addi    r11, r1, 32
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(32);

label_80CCB8F8:
    ctx->pc = 0x80CCB8F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB8F8u)) return;
    // 80CCB8F8: bl      0x80006DD4
    {
            ctx->lr = 0x80CCB8FCu;
            ctx->pc = 0x80006DD4u;
            return;
    }

label_80CCB8FC:
    ctx->pc = 0x80CCB8FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB8FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCB8FC: cmpwi   r3, 2
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

label_80CCB900:
    ctx->pc = 0x80CCB900u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB900u)) return;
    // 80CCB900: bc    12, 2, 0x80CCC464
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CCC464;
        }
    }

label_80CCB904:
    ctx->pc = 0x80CCB904u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB904u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CCB904: bc    4, 0, 0x80CCB918
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CCB918;
        }
    }

label_80CCB908:
    ctx->pc = 0x80CCB908u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB908u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCB908: cmpwi   r3, 0
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

label_80CCB90C:
    ctx->pc = 0x80CCB90Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB90Cu)) return;
    // 80CCB90C: bc    12, 2, 0x80CCC4B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CCC4B0;
        }
    }

label_80CCB910:
    ctx->pc = 0x80CCB910u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB910u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CCB910: bc    4, 0, 0x80CCB920
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CCB920;
        }
    }

label_80CCB914:
    ctx->pc = 0x80CCB914u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB914u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CCB914: b       0x80CCC4B0
    {
            goto label_80CCC4B0;
    }

label_80CCB918:
    ctx->pc = 0x80CCB918u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB918u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCB918: cmpwi   r3, 4
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

label_80CCB91C:
    ctx->pc = 0x80CCB91Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB91Cu)) return;
    // 80CCB91C: b       0x80CCC4B0
    {
            goto label_80CCC4B0;
    }

label_80CCB920:
    ctx->pc = 0x80CCB920u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB920u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CCB920: bl      0x8045DE7C
    {
            ctx->lr = 0x80CCB924u;
            ctx->pc = 0x8045DE7Cu;
            return;
    }

label_80CCB924:
    ctx->pc = 0x80CCB924u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB924u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CCB924: bl      0x80460A60
    {
            ctx->lr = 0x80CCB928u;
            ctx->pc = 0x80460A60u;
            return;
    }

label_80CCB928:
    ctx->pc = 0x80CCB928u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB928u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CCB928: bl      0x80460A24
    {
            ctx->lr = 0x80CCB92Cu;
            ctx->pc = 0x80460A24u;
            return;
    }

label_80CCB92C:
    ctx->pc = 0x80CCB92Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB92Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCB92C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CCB930:
    ctx->pc = 0x80CCB930u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB930u)) return;
    // 80CCB930: bl      0x8045F7C8
    {
            ctx->lr = 0x80CCB934u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CCB934:
    ctx->pc = 0x80CCB934u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB934u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCB934: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCB938:
    ctx->pc = 0x80CCB938u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB938u)) return;
    // 80CCB938: bl      0x8045EC10
    {
            ctx->lr = 0x80CCB93Cu;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80CCB93C:
    ctx->pc = 0x80CCB93Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB93Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCB93C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CCB940:
    ctx->pc = 0x80CCB940u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB940u)) return;
    // 80CCB940: bl      0x80CCCABC
    {
            ctx->lr = 0x80CCB944u;
            goto label_80CCCABC;
    }

label_80CCB944:
    ctx->pc = 0x80CCB944u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB944u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CCB944: lis     r3, -27375
    ctx->gpr[3] = ((u32)(s32)(-27375) << 16);

label_80CCB948:
    ctx->pc = 0x80CCB948u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB948u)) return;
    // 80CCB948: addi    r3, r3, -28816
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28816);

label_80CCB94C:
    ctx->pc = 0x80CCB94Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB94Cu)) return;
    // 80CCB94C: bl      0x8050AF58
    {
            ctx->lr = 0x80CCB950u;
            ctx->pc = 0x8050AF58u;
            return;
    }

label_80CCB950:
    ctx->pc = 0x80CCB950u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB950u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CCB950: lis     r3, -27375
    ctx->gpr[3] = ((u32)(s32)(-27375) << 16);

label_80CCB954:
    ctx->pc = 0x80CCB954u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB954u)) return;
    // 80CCB954: addi    r3, r3, -30000
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-30000);

label_80CCB958:
    ctx->pc = 0x80CCB958u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB958u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCB958: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CCB958u)) return;
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
label_80CCB95C:
    ctx->pc = 0x80CCB95Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB95Cu)) return;
    // 80CCB95C: lis     r3, -27375
    ctx->gpr[3] = ((u32)(s32)(-27375) << 16);

label_80CCB960:
    ctx->pc = 0x80CCB960u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB960u)) return;
    // 80CCB960: addi    r3, r3, -29996
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-29996);

label_80CCB964:
    ctx->pc = 0x80CCB964u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB964u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCB964: lfs     f2, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CCB964u)) return;
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
label_80CCB968:
    ctx->pc = 0x80CCB968u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB968u)) return;
    // 80CCB968: fmr    f3, f2
    if (!ppc_fp_available_inline(ctx, 0x80CCB968u)) return;
    ctx->fpr[3] = ctx->fpr[2];

label_80CCB96C:
    ctx->pc = 0x80CCB96Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB96Cu)) return;
    // 80CCB96C: fmr    f4, f2
    if (!ppc_fp_available_inline(ctx, 0x80CCB96Cu)) return;
    ctx->fpr[4] = ctx->fpr[2];

label_80CCB970:
    ctx->pc = 0x80CCB970u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB970u)) return;
    // 80CCB970: fmr    f5, f2
    if (!ppc_fp_available_inline(ctx, 0x80CCB970u)) return;
    ctx->fpr[5] = ctx->fpr[2];

label_80CCB974:
    ctx->pc = 0x80CCB974u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB974u)) return;
    // 80CCB974: bl      0x80CCC6D4
    {
            ctx->lr = 0x80CCB978u;
            goto label_80CCC6D4;
    }

label_80CCB978:
    ctx->pc = 0x80CCB978u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB978u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80CCB978: lis     r4, -27375
    ctx->gpr[4] = ((u32)(s32)(-27375) << 16);

label_80CCB97C:
    ctx->pc = 0x80CCB97Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB97Cu)) return;
    // 80CCB97C: addi    r4, r4, -7804
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-7804);

label_80CCB980:
    ctx->pc = 0x80CCB980u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB980u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCB980: stw     r3, 0(r4)
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
label_80CCB984:
    ctx->pc = 0x80CCB984u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB984u)) return;
    // 80CCB984: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCB988:
    ctx->pc = 0x80CCB988u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB988u)) return;
    // 80CCB988: li      r4, 760
    ctx->gpr[4] = (u32)(s32)(760);

label_80CCB98C:
    ctx->pc = 0x80CCB98Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB98Cu)) return;
    // 80CCB98C: li      r5, 1800
    ctx->gpr[5] = (u32)(s32)(1800);

label_80CCB990:
    ctx->pc = 0x80CCB990u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB990u)) return;
    // 80CCB990: bl      0x80CCCBC4
    {
            ctx->lr = 0x80CCB994u;
            goto label_80CCCBC4;
    }

label_80CCB994:
    ctx->pc = 0x80CCB994u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB994u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80CCB994: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCB998:
    ctx->pc = 0x80CCB998u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB998u)) return;
    // 80CCB998: li      r4, -120
    ctx->gpr[4] = (u32)(s32)(-120);

label_80CCB99C:
    ctx->pc = 0x80CCB99Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB99Cu)) return;
    // 80CCB99C: li      r5, 120
    ctx->gpr[5] = (u32)(s32)(120);

label_80CCB9A0:
    ctx->pc = 0x80CCB9A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB9A0u)) return;
    // 80CCB9A0: bl      0x80CCCCA0
    {
            ctx->lr = 0x80CCB9A4u;
            goto label_80CCCCA0;
    }

label_80CCB9A4:
    ctx->pc = 0x80CCB9A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB9A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCB9A4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCB9A8:
    ctx->pc = 0x80CCB9A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB9A8u)) return;
    // 80CCB9A8: bl      0x8045F220
    {
            ctx->lr = 0x80CCB9ACu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CCB9AC:
    ctx->pc = 0x80CCB9ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB9ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 80CCB9AC: lis     r4, -27375
    ctx->gpr[4] = ((u32)(s32)(-27375) << 16);

label_80CCB9B0:
    ctx->pc = 0x80CCB9B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB9B0u)) return;
    // 80CCB9B0: addi    r4, r4, -29992
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-29992);

label_80CCB9B4:
    ctx->pc = 0x80CCB9B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB9B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CCB9B4: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CCB9B4u)) return;
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
label_80CCB9B8:
    ctx->pc = 0x80CCB9B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB9B8u)) return;
    // 80CCB9B8: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80CCB9B8u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_80CCB9BC:
    ctx->pc = 0x80CCB9BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB9BCu)) return;
    // 80CCB9BC: lis     r4, -27375
    ctx->gpr[4] = ((u32)(s32)(-27375) << 16);

label_80CCB9C0:
    ctx->pc = 0x80CCB9C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB9C0u)) return;
    // 80CCB9C0: addi    r4, r4, -29988
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-29988);

label_80CCB9C4:
    ctx->pc = 0x80CCB9C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB9C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCB9C4: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CCB9C4u)) return;
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
label_80CCB9C8:
    ctx->pc = 0x80CCB9C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB9C8u)) return;
    // 80CCB9C8: bl      0x8045EF2C
    {
            ctx->lr = 0x80CCB9CCu;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80CCB9CC:
    ctx->pc = 0x80CCB9CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB9CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCB9CC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCB9D0:
    ctx->pc = 0x80CCB9D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB9D0u)) return;
    // 80CCB9D0: bl      0x8045F220
    {
            ctx->lr = 0x80CCB9D4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CCB9D4:
    ctx->pc = 0x80CCB9D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB9D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80CCB9D4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CCB9D8:
    ctx->pc = 0x80CCB9D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB9D8u)) return;
    // 80CCB9D8: li      r5, 32633
    ctx->gpr[5] = (u32)(s32)(32633);

label_80CCB9DC:
    ctx->pc = 0x80CCB9DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB9DCu)) return;
    // 80CCB9DC: li      r6, 281
    ctx->gpr[6] = (u32)(s32)(281);

label_80CCB9E0:
    ctx->pc = 0x80CCB9E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB9E0u)) return;
    // 80CCB9E0: bl      0x8045EEA8
    {
            ctx->lr = 0x80CCB9E4u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80CCB9E4:
    ctx->pc = 0x80CCB9E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB9E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCB9E4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CCB9E8:
    ctx->pc = 0x80CCB9E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB9E8u)) return;
    // 80CCB9E8: bl      0x8045F7C8
    {
            ctx->lr = 0x80CCB9ECu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CCB9EC:
    ctx->pc = 0x80CCB9ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB9ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCB9EC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCB9F0:
    ctx->pc = 0x80CCB9F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB9F0u)) return;
    // 80CCB9F0: bl      0x8045F220
    {
            ctx->lr = 0x80CCB9F4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CCB9F4:
    ctx->pc = 0x80CCB9F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB9F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CCB9F4: bl      0x8045EB8C
    {
            ctx->lr = 0x80CCB9F8u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80CCB9F8:
    ctx->pc = 0x80CCB9F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCB9F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCB9F8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCB9FC:
    ctx->pc = 0x80CCB9FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCB9FCu)) return;
    // 80CCB9FC: bl      0x8045F220
    {
            ctx->lr = 0x80CCBA00u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CCBA00:
    ctx->pc = 0x80CCBA00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCBA00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CCBA00: lis     r4, -27375
    ctx->gpr[4] = ((u32)(s32)(-27375) << 16);

label_80CCBA04:
    ctx->pc = 0x80CCBA04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBA04u)) return;
    // 80CCBA04: addi    r4, r4, -22844
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-22844);

label_80CCBA08:
    ctx->pc = 0x80CCBA08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBA08u)) return;
    // 80CCBA08: lis     r5, -28598
    ctx->gpr[5] = ((u32)(s32)(-28598) << 16);

label_80CCBA0C:
    ctx->pc = 0x80CCBA0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBA0Cu)) return;
    // 80CCBA0C: addi    r5, r5, 24904
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(24904);

label_80CCBA10:
    ctx->pc = 0x80CCBA10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBA10u)) return;
    // 80CCBA10: lis     r6, -27375
    ctx->gpr[6] = ((u32)(s32)(-27375) << 16);

label_80CCBA14:
    ctx->pc = 0x80CCBA14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBA14u)) return;
    // 80CCBA14: addi    r6, r6, -29996
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-29996);

label_80CCBA18:
    ctx->pc = 0x80CCBA18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBA18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CCBA18: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80CCBA18u)) return;
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
label_80CCBA1C:
    ctx->pc = 0x80CCBA1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBA1Cu)) return;
    // 80CCBA1C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80CCBA20:
    ctx->pc = 0x80CCBA20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBA20u)) return;
    // 80CCBA20: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CCBA24:
    ctx->pc = 0x80CCBA24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBA24u)) return;
    // 80CCBA24: bl      0x8045EBE4
    {
            ctx->lr = 0x80CCBA28u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80CCBA28:
    ctx->pc = 0x80CCBA28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCBA28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCBA28: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCBA2C:
    ctx->pc = 0x80CCBA2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBA2Cu)) return;
    // 80CCBA2C: bl      0x8045F220
    {
            ctx->lr = 0x80CCBA30u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CCBA30:
    ctx->pc = 0x80CCBA30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCBA30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCBA30: lwz     r27, 32(r3)
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
label_80CCBA34:
    ctx->pc = 0x80CCBA34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBA34u)) return;
    // 80CCBA34: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCBA38:
    ctx->pc = 0x80CCBA38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBA38u)) return;
    // 80CCBA38: bl      0x8045F220
    {
            ctx->lr = 0x80CCBA3Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CCBA3C:
    ctx->pc = 0x80CCBA3Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCBA3Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCBA3C: lwz     r3, 32(r3)
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
label_80CCBA40:
    ctx->pc = 0x80CCBA40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBA40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CCBA40: lwz     r0, 24(r3)
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
label_80CCBA44:
    ctx->pc = 0x80CCBA44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBA44u)) return;
    // 80CCBA44: subfic  r28, r0, 16384
    {
        u64 res = (u64)(u32)(s32)(16384) + (u64)(~ctx->gpr[0]) + 1u;
        ctx->gpr[28] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80CCBA48:
    ctx->pc = 0x80CCBA48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBA48u)) return;
    // 80CCBA48: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCBA4C:
    ctx->pc = 0x80CCBA4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBA4Cu)) return;
    // 80CCBA4C: bl      0x8045F220
    {
            ctx->lr = 0x80CCBA50u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CCBA50:
    ctx->pc = 0x80CCBA50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCBA50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCBA50: lwz     r29, 32(r3)
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
label_80CCBA54:
    ctx->pc = 0x80CCBA54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBA54u)) return;
    // 80CCBA54: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCBA58:
    ctx->pc = 0x80CCBA58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBA58u)) return;
    // 80CCBA58: bl      0x8045F220
    {
            ctx->lr = 0x80CCBA5Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CCBA5C:
    ctx->pc = 0x80CCBA5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCBA5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCBA5C: lwz     r31, 32(r3)
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
label_80CCBA60:
    ctx->pc = 0x80CCBA60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBA60u)) return;
    // 80CCBA60: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCBA64:
    ctx->pc = 0x80CCBA64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBA64u)) return;
    // 80CCBA64: bl      0x8045F220
    {
            ctx->lr = 0x80CCBA68u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CCBA68:
    ctx->pc = 0x80CCBA68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCBA68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCBA68: lwz     r30, 32(r3)
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
label_80CCBA6C:
    ctx->pc = 0x80CCBA6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBA6Cu)) return;
    // 80CCBA6C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCBA70:
    ctx->pc = 0x80CCBA70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBA70u)) return;
    // 80CCBA70: bl      0x8045F220
    {
            ctx->lr = 0x80CCBA74u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CCBA74:
    ctx->pc = 0x80CCBA74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCBA74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CCBA74: lwz     r4, 32(r3)
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
label_80CCBA78:
    ctx->pc = 0x80CCBA78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBA78u)) return;
    // 80CCBA78: lis     r3, -27375
    ctx->gpr[3] = ((u32)(s32)(-27375) << 16);

label_80CCBA7C:
    ctx->pc = 0x80CCBA7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBA7Cu)) return;
    // 80CCBA7C: addi    r3, r3, -7808
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-7808);

label_80CCBA80:
    ctx->pc = 0x80CCBA80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBA80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCBA80: lfs     f1, 32(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CCBA80u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCBA84:
    ctx->pc = 0x80CCBA84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBA84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CCBA84: lfs     f2, 36(r30)
    if (!ppc_fp_available_inline(ctx, 0x80CCBA84u)) return;
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
label_80CCBA88:
    ctx->pc = 0x80CCBA88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBA88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCBA88: lfs     f3, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x80CCBA88u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
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
label_80CCBA8C:
    ctx->pc = 0x80CCBA8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBA8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CCBA8C: lwz     r4, 20(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(20);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCBA90:
    ctx->pc = 0x80CCBA90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBA90u)) return;
    // 80CCBA90: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80CCBA94:
    ctx->pc = 0x80CCBA94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBA94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCBA94: lwz     r6, 28(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(28);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCBA98:
    ctx->pc = 0x80CCBA98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBA98u)) return;
    // 80CCBA98: bl      0x8045F170
    {
            ctx->lr = 0x80CCBA9Cu;
            ctx->pc = 0x8045F170u;
            return;
    }

label_80CCBA9C:
    ctx->pc = 0x80CCBA9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCBA9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCBA9C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CCBAA0:
    ctx->pc = 0x80CCBAA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBAA0u)) return;
    // 80CCBAA0: bl      0x8045F7C8
    {
            ctx->lr = 0x80CCBAA4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CCBAA4:
    ctx->pc = 0x80CCBAA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCBAA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80CCBAA4: lis     r3, -27375
    ctx->gpr[3] = ((u32)(s32)(-27375) << 16);

label_80CCBAA8:
    ctx->pc = 0x80CCBAA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBAA8u)) return;
    // 80CCBAA8: addi    r3, r3, -7808
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-7808);

label_80CCBAAC:
    ctx->pc = 0x80CCBAACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBAACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCBAAC: lwz     r3, 0(r3)
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
label_80CCBAB0:
    ctx->pc = 0x80CCBAB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBAB0u)) return;
    // 80CCBAB0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CCBAB4:
    ctx->pc = 0x80CCBAB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBAB4u)) return;
    // 80CCBAB4: bl      0x8045EE90
    {
            ctx->lr = 0x80CCBAB8u;
            ctx->pc = 0x8045EE90u;
            return;
    }

label_80CCBAB8:
    ctx->pc = 0x80CCBAB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCBAB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCBAB8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCBABC:
    ctx->pc = 0x80CCBABCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBABCu)) return;
    // 80CCBABC: bl      0x8045F220
    {
            ctx->lr = 0x80CCBAC0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CCBAC0:
    ctx->pc = 0x80CCBAC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCBAC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCBAC0: lwz     r30, 32(r3)
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
label_80CCBAC4:
    ctx->pc = 0x80CCBAC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBAC4u)) return;
    // 80CCBAC4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCBAC8:
    ctx->pc = 0x80CCBAC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBAC8u)) return;
    // 80CCBAC8: bl      0x8045F220
    {
            ctx->lr = 0x80CCBACCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CCBACC:
    ctx->pc = 0x80CCBACCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCBACCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCBACC: lwz     r3, 32(r3)
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
label_80CCBAD0:
    ctx->pc = 0x80CCBAD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBAD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCBAD0: lfs     f1, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CCBAD0u)) return;
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
label_80CCBAD4:
    ctx->pc = 0x80CCBAD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBAD4u)) return;
    // 80CCBAD4: lis     r3, -27375
    ctx->gpr[3] = ((u32)(s32)(-27375) << 16);

label_80CCBAD8:
    ctx->pc = 0x80CCBAD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBAD8u)) return;
    // 80CCBAD8: addi    r3, r3, -29984
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-29984);

label_80CCBADC:
    ctx->pc = 0x80CCBADCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBADCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CCBADC: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CCBADCu)) return;
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
label_80CCBAE0:
    ctx->pc = 0x80CCBAE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBAE0u)) return;
    // 80CCBAE0: fsubs   f31, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80CCBAE0u)) return;
    ppc_fsubs(ctx, 31, 1, 0);

label_80CCBAE4:
    ctx->pc = 0x80CCBAE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBAE4u)) return;
    // 80CCBAE4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCBAE8:
    ctx->pc = 0x80CCBAE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBAE8u)) return;
    // 80CCBAE8: bl      0x8045F220
    {
            ctx->lr = 0x80CCBAECu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CCBAEC:
    ctx->pc = 0x80CCBAECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCBAECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCBAEC: lwz     r4, 32(r3)
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
label_80CCBAF0:
    ctx->pc = 0x80CCBAF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBAF0u)) return;
    // 80CCBAF0: lis     r3, -27375
    ctx->gpr[3] = ((u32)(s32)(-27375) << 16);

label_80CCBAF4:
    ctx->pc = 0x80CCBAF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBAF4u)) return;
    // 80CCBAF4: addi    r3, r3, -7808
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-7808);

label_80CCBAF8:
    ctx->pc = 0x80CCBAF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBAF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCBAF8: lwz     r3, 0(r3)
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
label_80CCBAFC:
    ctx->pc = 0x80CCBAFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBAFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CCBAFC: lfs     f1, 32(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CCBAFCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCBB00:
    ctx->pc = 0x80CCBB00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBB00u)) return;
    // 80CCBB00: fmr    f2, f31
    if (!ppc_fp_available_inline(ctx, 0x80CCBB00u)) return;
    ctx->fpr[2] = ctx->fpr[31];

label_80CCBB04:
    ctx->pc = 0x80CCBB04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBB04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCBB04: lfs     f3, 40(r30)
    if (!ppc_fp_available_inline(ctx, 0x80CCBB04u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
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
label_80CCBB08:
    ctx->pc = 0x80CCBB08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBB08u)) return;
    // 80CCBB08: bl      0x8045EF2C
    {
            ctx->lr = 0x80CCBB0Cu;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80CCBB0C:
    ctx->pc = 0x80CCBB0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCBB0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCBB0C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCBB10:
    ctx->pc = 0x80CCBB10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBB10u)) return;
    // 80CCBB10: bl      0x8045F220
    {
            ctx->lr = 0x80CCBB14u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CCBB14:
    ctx->pc = 0x80CCBB14u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCBB14u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCBB14: lwz     r30, 32(r3)
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
label_80CCBB18:
    ctx->pc = 0x80CCBB18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBB18u)) return;
    // 80CCBB18: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCBB1C:
    ctx->pc = 0x80CCBB1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBB1Cu)) return;
    // 80CCBB1C: bl      0x8045F220
    {
            ctx->lr = 0x80CCBB20u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CCBB20:
    ctx->pc = 0x80CCBB20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCBB20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCBB20: lwz     r3, 32(r3)
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
label_80CCBB24:
    ctx->pc = 0x80CCBB24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBB24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CCBB24: lwz     r0, 24(r3)
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
label_80CCBB28:
    ctx->pc = 0x80CCBB28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBB28u)) return;
    // 80CCBB28: subfic  r31, r0, 16384
    {
        u64 res = (u64)(u32)(s32)(16384) + (u64)(~ctx->gpr[0]) + 1u;
        ctx->gpr[31] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80CCBB2C:
    ctx->pc = 0x80CCBB2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBB2Cu)) return;
    // 80CCBB2C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCBB30:
    ctx->pc = 0x80CCBB30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBB30u)) return;
    // 80CCBB30: bl      0x8045F220
    {
            ctx->lr = 0x80CCBB34u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80CCBB34:
    ctx->pc = 0x80CCBB34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCBB34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCBB34: lwz     r4, 32(r3)
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
label_80CCBB38:
    ctx->pc = 0x80CCBB38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBB38u)) return;
    // 80CCBB38: lis     r3, -27375
    ctx->gpr[3] = ((u32)(s32)(-27375) << 16);

label_80CCBB3C:
    ctx->pc = 0x80CCBB3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBB3Cu)) return;
    // 80CCBB3C: addi    r3, r3, -7808
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-7808);

label_80CCBB40:
    ctx->pc = 0x80CCBB40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBB40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCBB40: lwz     r3, 0(r3)
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
label_80CCBB44:
    ctx->pc = 0x80CCBB44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBB44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CCBB44: lwz     r4, 20(r4)
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
label_80CCBB48:
    ctx->pc = 0x80CCBB48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBB48u)) return;
    // 80CCBB48: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80CCBB4C:
    ctx->pc = 0x80CCBB4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBB4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCBB4C: lwz     r6, 28(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(28);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCBB50:
    ctx->pc = 0x80CCBB50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBB50u)) return;
    // 80CCBB50: bl      0x8045EEA8
    {
            ctx->lr = 0x80CCBB54u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80CCBB54:
    ctx->pc = 0x80CCBB54u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCBB54u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80CCBB54: lis     r3, -27375
    ctx->gpr[3] = ((u32)(s32)(-27375) << 16);

label_80CCBB58:
    ctx->pc = 0x80CCBB58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBB58u)) return;
    // 80CCBB58: addi    r3, r3, -7808
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-7808);

label_80CCBB5C:
    ctx->pc = 0x80CCBB5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBB5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CCBB5C: lwz     r3, 0(r3)
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
label_80CCBB60:
    ctx->pc = 0x80CCBB60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBB60u)) return;
    // 80CCBB60: lis     r4, -27375
    ctx->gpr[4] = ((u32)(s32)(-27375) << 16);

label_80CCBB64:
    ctx->pc = 0x80CCBB64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBB64u)) return;
    // 80CCBB64: addi    r4, r4, -7836
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-7836);

label_80CCBB68:
    ctx->pc = 0x80CCBB68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBB68u)) return;
    // 80CCBB68: lis     r5, -27375
    ctx->gpr[5] = ((u32)(s32)(-27375) << 16);

label_80CCBB6C:
    ctx->pc = 0x80CCBB6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBB6Cu)) return;
    // 80CCBB6C: addi    r5, r5, -22676
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-22676);

label_80CCBB70:
    ctx->pc = 0x80CCBB70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBB70u)) return;
    // 80CCBB70: lis     r6, -27375
    ctx->gpr[6] = ((u32)(s32)(-27375) << 16);

label_80CCBB74:
    ctx->pc = 0x80CCBB74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBB74u)) return;
    // 80CCBB74: addi    r6, r6, -29996
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-29996);

label_80CCBB78:
    ctx->pc = 0x80CCBB78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBB78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CCBB78: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80CCBB78u)) return;
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
label_80CCBB7C:
    ctx->pc = 0x80CCBB7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBB7Cu)) return;
    // 80CCBB7C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80CCBB80:
    ctx->pc = 0x80CCBB80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBB80u)) return;
    // 80CCBB80: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_80CCBB84:
    ctx->pc = 0x80CCBB84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBB84u)) return;
    // 80CCBB84: bl      0x8045EBE4
    {
            ctx->lr = 0x80CCBB88u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80CCBB88:
    ctx->pc = 0x80CCBB88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCBB88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CCBB88: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCBB8C:
    ctx->pc = 0x80CCBB8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBB8Cu)) return;
    // 80CCBB8C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CCBB90:
    ctx->pc = 0x80CCBB90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBB90u)) return;
    // 80CCBB90: lis     r5, -27375
    ctx->gpr[5] = ((u32)(s32)(-27375) << 16);

label_80CCBB94:
    ctx->pc = 0x80CCBB94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBB94u)) return;
    // 80CCBB94: addi    r5, r5, -29980
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-29980);

label_80CCBB98:
    ctx->pc = 0x80CCBB98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBB98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCBB98: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCBB98u)) return;
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
label_80CCBB9C:
    ctx->pc = 0x80CCBB9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBB9Cu)) return;
    // 80CCBB9C: lis     r5, -27375
    ctx->gpr[5] = ((u32)(s32)(-27375) << 16);

label_80CCBBA0:
    ctx->pc = 0x80CCBBA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBBA0u)) return;
    // 80CCBBA0: addi    r5, r5, -29976
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-29976);

label_80CCBBA4:
    ctx->pc = 0x80CCBBA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBBA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCBBA4: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCBBA4u)) return;
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
label_80CCBBA8:
    ctx->pc = 0x80CCBBA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBBA8u)) return;
    // 80CCBBA8: lis     r5, -27375
    ctx->gpr[5] = ((u32)(s32)(-27375) << 16);

label_80CCBBAC:
    ctx->pc = 0x80CCBBACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBBACu)) return;
    // 80CCBBAC: addi    r5, r5, -29972
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-29972);

label_80CCBBB0:
    ctx->pc = 0x80CCBBB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBBB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCBBB0: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCBBB0u)) return;
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
label_80CCBBB4:
    ctx->pc = 0x80CCBBB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBBB4u)) return;
    // 80CCBBB4: bl      0x8045C750
    {
            ctx->lr = 0x80CCBBB8u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80CCBBB8:
    ctx->pc = 0x80CCBBB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCBBB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80CCBBB8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCBBBC:
    ctx->pc = 0x80CCBBBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBBBCu)) return;
    // 80CCBBBC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CCBBC0:
    ctx->pc = 0x80CCBBC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBBC0u)) return;
    // 80CCBBC0: li      r5, 1412
    ctx->gpr[5] = (u32)(s32)(1412);

label_80CCBBC4:
    ctx->pc = 0x80CCBBC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBBC4u)) return;
    // 80CCBBC4: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80CCBBC8:
    ctx->pc = 0x80CCBBC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBBC8u)) return;
    // 80CCBBC8: addi    r6, r6, -28529
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-28529);

label_80CCBBCC:
    ctx->pc = 0x80CCBBCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBBCCu)) return;
    // 80CCBBCC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CCBBD0:
    ctx->pc = 0x80CCBBD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBBD0u)) return;
    // 80CCBBD0: bl      0x8045C7B4
    {
            ctx->lr = 0x80CCBBD4u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CCBBD4:
    ctx->pc = 0x80CCBBD4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCBBD4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCBBD4: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80CCBBD8:
    ctx->pc = 0x80CCBBD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBBD8u)) return;
    // 80CCBBD8: bl      0x8045F7C8
    {
            ctx->lr = 0x80CCBBDCu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CCBBDC:
    ctx->pc = 0x80CCBBDCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCBBDCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80CCBBDC: lis     r3, -27375
    ctx->gpr[3] = ((u32)(s32)(-27375) << 16);

label_80CCBBE0:
    ctx->pc = 0x80CCBBE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBBE0u)) return;
    // 80CCBBE0: addi    r3, r3, -7804
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-7804);

label_80CCBBE4:
    ctx->pc = 0x80CCBBE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBBE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCBBE4: lwz     r3, 0(r3)
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
label_80CCBBE8:
    ctx->pc = 0x80CCBBE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBBE8u)) return;
    // 80CCBBE8: cmplwi  r3, 0x0000
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

label_80CCBBEC:
    ctx->pc = 0x80CCBBECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBBECu)) return;
    // 80CCBBEC: bc    12, 2, 0x80CCBC00
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CCBC00;
        }
    }

label_80CCBBF0:
    ctx->pc = 0x80CCBBF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCBBF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80CCBBF0: lis     r4, -27375
    ctx->gpr[4] = ((u32)(s32)(-27375) << 16);

label_80CCBBF4:
    ctx->pc = 0x80CCBBF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBBF4u)) return;
    // 80CCBBF4: addi    r4, r4, -29968
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-29968);

label_80CCBBF8:
    ctx->pc = 0x80CCBBF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBBF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCBBF8: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CCBBF8u)) return;
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
label_80CCBBFC:
    ctx->pc = 0x80CCBBFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBBFCu)) return;
    // 80CCBBFC: bl      0x80CCC790
    {
            ctx->lr = 0x80CCBC00u;
            goto label_80CCC790;
    }

label_80CCBC00:
    ctx->pc = 0x80CCBC00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCBC00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CCBC00: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCBC04:
    ctx->pc = 0x80CCBC04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBC04u)) return;
    // 80CCBC04: li      r4, 200
    ctx->gpr[4] = (u32)(s32)(200);

label_80CCBC08:
    ctx->pc = 0x80CCBC08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBC08u)) return;
    // 80CCBC08: lis     r5, -27375
    ctx->gpr[5] = ((u32)(s32)(-27375) << 16);

label_80CCBC0C:
    ctx->pc = 0x80CCBC0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBC0Cu)) return;
    // 80CCBC0C: addi    r5, r5, -29964
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-29964);

label_80CCBC10:
    ctx->pc = 0x80CCBC10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBC10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCBC10: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCBC10u)) return;
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
label_80CCBC14:
    ctx->pc = 0x80CCBC14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBC14u)) return;
    // 80CCBC14: lis     r5, -27375
    ctx->gpr[5] = ((u32)(s32)(-27375) << 16);

label_80CCBC18:
    ctx->pc = 0x80CCBC18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBC18u)) return;
    // 80CCBC18: addi    r5, r5, -29960
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-29960);

label_80CCBC1C:
    ctx->pc = 0x80CCBC1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBC1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCBC1C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCBC1Cu)) return;
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
label_80CCBC20:
    ctx->pc = 0x80CCBC20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBC20u)) return;
    // 80CCBC20: lis     r5, -27375
    ctx->gpr[5] = ((u32)(s32)(-27375) << 16);

label_80CCBC24:
    ctx->pc = 0x80CCBC24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBC24u)) return;
    // 80CCBC24: addi    r5, r5, -29956
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-29956);

label_80CCBC28:
    ctx->pc = 0x80CCBC28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBC28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCBC28: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCBC28u)) return;
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
label_80CCBC2C:
    ctx->pc = 0x80CCBC2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBC2Cu)) return;
    // 80CCBC2C: bl      0x8045C750
    {
            ctx->lr = 0x80CCBC30u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80CCBC30:
    ctx->pc = 0x80CCBC30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCBC30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCBC30: li      r3, 120
    ctx->gpr[3] = (u32)(s32)(120);

label_80CCBC34:
    ctx->pc = 0x80CCBC34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBC34u)) return;
    // 80CCBC34: bl      0x8045F7C8
    {
            ctx->lr = 0x80CCBC38u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CCBC38:
    ctx->pc = 0x80CCBC38u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCBC38u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCBC38: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCBC3C:
    ctx->pc = 0x80CCBC3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBC3Cu)) return;
    // 80CCBC3C: bl      0x80CCCC34
    {
            ctx->lr = 0x80CCBC40u;
            goto label_80CCCC34;
    }

label_80CCBC40:
    ctx->pc = 0x80CCBC40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCBC40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CCBC40: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCBC44:
    ctx->pc = 0x80CCBC44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBC44u)) return;
    // 80CCBC44: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CCBC48:
    ctx->pc = 0x80CCBC48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBC48u)) return;
    // 80CCBC48: lis     r5, -27375
    ctx->gpr[5] = ((u32)(s32)(-27375) << 16);

label_80CCBC4C:
    ctx->pc = 0x80CCBC4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBC4Cu)) return;
    // 80CCBC4C: addi    r5, r5, -29952
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-29952);

label_80CCBC50:
    ctx->pc = 0x80CCBC50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBC50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCBC50: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCBC50u)) return;
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
label_80CCBC54:
    ctx->pc = 0x80CCBC54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBC54u)) return;
    // 80CCBC54: lis     r5, -27375
    ctx->gpr[5] = ((u32)(s32)(-27375) << 16);

label_80CCBC58:
    ctx->pc = 0x80CCBC58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBC58u)) return;
    // 80CCBC58: addi    r5, r5, -29948
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-29948);

label_80CCBC5C:
    ctx->pc = 0x80CCBC5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBC5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCBC5C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCBC5Cu)) return;
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
label_80CCBC60:
    ctx->pc = 0x80CCBC60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBC60u)) return;
    // 80CCBC60: lis     r5, -27375
    ctx->gpr[5] = ((u32)(s32)(-27375) << 16);

label_80CCBC64:
    ctx->pc = 0x80CCBC64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBC64u)) return;
    // 80CCBC64: addi    r5, r5, -29944
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-29944);

label_80CCBC68:
    ctx->pc = 0x80CCBC68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBC68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCBC68: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCBC68u)) return;
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
label_80CCBC6C:
    ctx->pc = 0x80CCBC6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBC6Cu)) return;
    // 80CCBC6C: bl      0x8045C750
    {
            ctx->lr = 0x80CCBC70u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80CCBC70:
    ctx->pc = 0x80CCBC70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCBC70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80CCBC70: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCBC74:
    ctx->pc = 0x80CCBC74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBC74u)) return;
    // 80CCBC74: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CCBC78:
    ctx->pc = 0x80CCBC78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBC78u)) return;
    // 80CCBC78: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80CCBC7C:
    ctx->pc = 0x80CCBC7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBC7Cu)) return;
    // 80CCBC7C: addi    r5, r6, -53
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-53);

label_80CCBC80:
    ctx->pc = 0x80CCBC80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBC80u)) return;
    // 80CCBC80: addi    r6, r6, -5938
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-5938);

label_80CCBC84:
    ctx->pc = 0x80CCBC84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBC84u)) return;
    // 80CCBC84: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CCBC88:
    ctx->pc = 0x80CCBC88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBC88u)) return;
    // 80CCBC88: bl      0x8045C7B4
    {
            ctx->lr = 0x80CCBC8Cu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CCBC8C:
    ctx->pc = 0x80CCBC8Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCBC8Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CCBC8C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCBC90:
    ctx->pc = 0x80CCBC90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBC90u)) return;
    // 80CCBC90: li      r4, 180
    ctx->gpr[4] = (u32)(s32)(180);

label_80CCBC94:
    ctx->pc = 0x80CCBC94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBC94u)) return;
    // 80CCBC94: lis     r5, -27375
    ctx->gpr[5] = ((u32)(s32)(-27375) << 16);

label_80CCBC98:
    ctx->pc = 0x80CCBC98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBC98u)) return;
    // 80CCBC98: addi    r5, r5, -29940
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-29940);

label_80CCBC9C:
    ctx->pc = 0x80CCBC9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBC9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCBC9C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCBC9Cu)) return;
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
label_80CCBCA0:
    ctx->pc = 0x80CCBCA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBCA0u)) return;
    // 80CCBCA0: lis     r5, -27375
    ctx->gpr[5] = ((u32)(s32)(-27375) << 16);

label_80CCBCA4:
    ctx->pc = 0x80CCBCA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBCA4u)) return;
    // 80CCBCA4: addi    r5, r5, -29936
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-29936);

label_80CCBCA8:
    ctx->pc = 0x80CCBCA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBCA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCBCA8: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCBCA8u)) return;
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
label_80CCBCAC:
    ctx->pc = 0x80CCBCACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBCACu)) return;
    // 80CCBCAC: lis     r5, -27375
    ctx->gpr[5] = ((u32)(s32)(-27375) << 16);

label_80CCBCB0:
    ctx->pc = 0x80CCBCB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBCB0u)) return;
    // 80CCBCB0: addi    r5, r5, -29932
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-29932);

label_80CCBCB4:
    ctx->pc = 0x80CCBCB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBCB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCBCB4: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCBCB4u)) return;
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
label_80CCBCB8:
    ctx->pc = 0x80CCBCB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBCB8u)) return;
    // 80CCBCB8: bl      0x8045C750
    {
            ctx->lr = 0x80CCBCBCu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80CCBCBC:
    ctx->pc = 0x80CCBCBCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCBCBCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80CCBCBC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCBCC0:
    ctx->pc = 0x80CCBCC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBCC0u)) return;
    // 80CCBCC0: li      r4, 180
    ctx->gpr[4] = (u32)(s32)(180);

label_80CCBCC4:
    ctx->pc = 0x80CCBCC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBCC4u)) return;
    // 80CCBCC4: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80CCBCC8:
    ctx->pc = 0x80CCBCC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBCC8u)) return;
    // 80CCBCC8: addi    r5, r6, -53
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-53);

label_80CCBCCC:
    ctx->pc = 0x80CCBCCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBCCCu)) return;
    // 80CCBCCC: addi    r6, r6, -4402
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-4402);

label_80CCBCD0:
    ctx->pc = 0x80CCBCD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBCD0u)) return;
    // 80CCBCD0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CCBCD4:
    ctx->pc = 0x80CCBCD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBCD4u)) return;
    // 80CCBCD4: bl      0x8045C7B4
    {
            ctx->lr = 0x80CCBCD8u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CCBCD8:
    ctx->pc = 0x80CCBCD8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCBCD8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCBCD8: li      r3, 1363
    ctx->gpr[3] = (u32)(s32)(1363);

label_80CCBCDC:
    ctx->pc = 0x80CCBCDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBCDCu)) return;
    // 80CCBCDC: bl      0x8045BFA0
    {
            ctx->lr = 0x80CCBCE0u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80CCBCE0:
    ctx->pc = 0x80CCBCE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCBCE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCBCE0: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_80CCBCE4:
    ctx->pc = 0x80CCBCE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBCE4u)) return;
    // 80CCBCE4: bl      0x8045F7C8
    {
            ctx->lr = 0x80CCBCE8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CCBCE8:
    ctx->pc = 0x80CCBCE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCBCE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CCBCE8: li      r3, 140
    ctx->gpr[3] = (u32)(s32)(140);

label_80CCBCEC:
    ctx->pc = 0x80CCBCECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBCECu)) return;
    // 80CCBCEC: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80CCBCF0:
    ctx->pc = 0x80CCBCF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBCF0u)) return;
    // 80CCBCF0: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80CCBCF4:
    ctx->pc = 0x80CCBCF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBCF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCBCF4: lwz     r0, 0(r4)
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
label_80CCBCF8:
    ctx->pc = 0x80CCBCF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBCF8u)) return;
    // 80CCBCF8: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80CCBCFC:
    ctx->pc = 0x80CCBCFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBCFCu)) return;
    // 80CCBCFC: lis     r4, -27375
    ctx->gpr[4] = ((u32)(s32)(-27375) << 16);

label_80CCBD00:
    ctx->pc = 0x80CCBD00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBD00u)) return;
    // 80CCBD00: addi    r4, r4, -28860
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-28860);

label_80CCBD04:
    ctx->pc = 0x80CCBD04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBD04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCBD04: lwzx    r4, r4, r0
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
label_80CCBD08:
    ctx->pc = 0x80CCBD08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBD08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCBD08: lwz     r4, 0(r4)
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
label_80CCBD0C:
    ctx->pc = 0x80CCBD0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBD0Cu)) return;
    // 80CCBD0C: bl      0x8045F608
    {
            ctx->lr = 0x80CCBD10u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80CCBD10:
    ctx->pc = 0x80CCBD10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCBD10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CCBD10: bl      0x8045F32C
    {
            ctx->lr = 0x80CCBD14u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80CCBD14:
    ctx->pc = 0x80CCBD14u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCBD14u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CCBD14: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCBD18:
    ctx->pc = 0x80CCBD18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBD18u)) return;
    // 80CCBD18: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CCBD1C:
    ctx->pc = 0x80CCBD1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBD1Cu)) return;
    // 80CCBD1C: lis     r5, -27375
    ctx->gpr[5] = ((u32)(s32)(-27375) << 16);

label_80CCBD20:
    ctx->pc = 0x80CCBD20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBD20u)) return;
    // 80CCBD20: addi    r5, r5, -29928
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-29928);

label_80CCBD24:
    ctx->pc = 0x80CCBD24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBD24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCBD24: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCBD24u)) return;
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
label_80CCBD28:
    ctx->pc = 0x80CCBD28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBD28u)) return;
    // 80CCBD28: lis     r5, -27375
    ctx->gpr[5] = ((u32)(s32)(-27375) << 16);

label_80CCBD2C:
    ctx->pc = 0x80CCBD2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBD2Cu)) return;
    // 80CCBD2C: addi    r5, r5, -29924
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-29924);

label_80CCBD30:
    ctx->pc = 0x80CCBD30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBD30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCBD30: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCBD30u)) return;
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
label_80CCBD34:
    ctx->pc = 0x80CCBD34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBD34u)) return;
    // 80CCBD34: lis     r5, -27375
    ctx->gpr[5] = ((u32)(s32)(-27375) << 16);

label_80CCBD38:
    ctx->pc = 0x80CCBD38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBD38u)) return;
    // 80CCBD38: addi    r5, r5, -29920
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-29920);

label_80CCBD3C:
    ctx->pc = 0x80CCBD3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBD3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCBD3C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCBD3Cu)) return;
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
label_80CCBD40:
    ctx->pc = 0x80CCBD40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBD40u)) return;
    // 80CCBD40: bl      0x8045C750
    {
            ctx->lr = 0x80CCBD44u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80CCBD44:
    ctx->pc = 0x80CCBD44u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCBD44u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80CCBD44: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCBD48:
    ctx->pc = 0x80CCBD48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBD48u)) return;
    // 80CCBD48: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CCBD4C:
    ctx->pc = 0x80CCBD4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBD4Cu)) return;
    // 80CCBD4C: li      r5, 1227
    ctx->gpr[5] = (u32)(s32)(1227);

label_80CCBD50:
    ctx->pc = 0x80CCBD50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBD50u)) return;
    // 80CCBD50: li      r6, 27027
    ctx->gpr[6] = (u32)(s32)(27027);

label_80CCBD54:
    ctx->pc = 0x80CCBD54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBD54u)) return;
    // 80CCBD54: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CCBD58:
    ctx->pc = 0x80CCBD58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBD58u)) return;
    // 80CCBD58: bl      0x8045C7B4
    {
            ctx->lr = 0x80CCBD5Cu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CCBD5C:
    ctx->pc = 0x80CCBD5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCBD5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCBD5C: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80CCBD60:
    ctx->pc = 0x80CCBD60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBD60u)) return;
    // 80CCBD60: bl      0x8045F7C8
    {
            ctx->lr = 0x80CCBD64u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CCBD64:
    ctx->pc = 0x80CCBD64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCBD64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CCBD64: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCBD68:
    ctx->pc = 0x80CCBD68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBD68u)) return;
    // 80CCBD68: li      r4, 160
    ctx->gpr[4] = (u32)(s32)(160);

label_80CCBD6C:
    ctx->pc = 0x80CCBD6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBD6Cu)) return;
    // 80CCBD6C: lis     r5, -27375
    ctx->gpr[5] = ((u32)(s32)(-27375) << 16);

label_80CCBD70:
    ctx->pc = 0x80CCBD70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBD70u)) return;
    // 80CCBD70: addi    r5, r5, -29916
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-29916);

label_80CCBD74:
    ctx->pc = 0x80CCBD74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBD74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCBD74: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCBD74u)) return;
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
label_80CCBD78:
    ctx->pc = 0x80CCBD78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBD78u)) return;
    // 80CCBD78: lis     r5, -27375
    ctx->gpr[5] = ((u32)(s32)(-27375) << 16);

label_80CCBD7C:
    ctx->pc = 0x80CCBD7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBD7Cu)) return;
    // 80CCBD7C: addi    r5, r5, -29912
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-29912);

label_80CCBD80:
    ctx->pc = 0x80CCBD80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBD80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCBD80: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCBD80u)) return;
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
label_80CCBD84:
    ctx->pc = 0x80CCBD84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBD84u)) return;
    // 80CCBD84: lis     r5, -27375
    ctx->gpr[5] = ((u32)(s32)(-27375) << 16);

label_80CCBD88:
    ctx->pc = 0x80CCBD88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBD88u)) return;
    // 80CCBD88: addi    r5, r5, -29908
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-29908);

label_80CCBD8C:
    ctx->pc = 0x80CCBD8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBD8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCBD8C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCBD8Cu)) return;
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
label_80CCBD90:
    ctx->pc = 0x80CCBD90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBD90u)) return;
    // 80CCBD90: bl      0x8045C750
    {
            ctx->lr = 0x80CCBD94u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80CCBD94:
    ctx->pc = 0x80CCBD94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCBD94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CCBD94: li      r3, 1333
    ctx->gpr[3] = (u32)(s32)(1333);

label_80CCBD98:
    ctx->pc = 0x80CCBD98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBD98u)) return;
    // 80CCBD98: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CCBD9C:
    ctx->pc = 0x80CCBD9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBD9Cu)) return;
    // 80CCBD9C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80CCBDA0:
    ctx->pc = 0x80CCBDA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBDA0u)) return;
    // 80CCBDA0: li      r6, 120
    ctx->gpr[6] = (u32)(s32)(120);

label_80CCBDA4:
    ctx->pc = 0x80CCBDA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBDA4u)) return;
    // 80CCBDA4: lis     r7, -27375
    ctx->gpr[7] = ((u32)(s32)(-27375) << 16);

label_80CCBDA8:
    ctx->pc = 0x80CCBDA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBDA8u)) return;
    // 80CCBDA8: addi    r7, r7, -29992
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-29992);

label_80CCBDAC:
    ctx->pc = 0x80CCBDACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBDACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CCBDAC: lfs     f1, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x80CCBDACu)) return;
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
label_80CCBDB0:
    ctx->pc = 0x80CCBDB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBDB0u)) return;
    // 80CCBDB0: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80CCBDB0u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_80CCBDB4:
    ctx->pc = 0x80CCBDB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBDB4u)) return;
    // 80CCBDB4: lis     r7, -27375
    ctx->gpr[7] = ((u32)(s32)(-27375) << 16);

label_80CCBDB8:
    ctx->pc = 0x80CCBDB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBDB8u)) return;
    // 80CCBDB8: addi    r7, r7, -29988
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-29988);

label_80CCBDBC:
    ctx->pc = 0x80CCBDBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBDBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCBDBC: lfs     f3, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x80CCBDBCu)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
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
label_80CCBDC0:
    ctx->pc = 0x80CCBDC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBDC0u)) return;
    // 80CCBDC0: bl      0x8050A2E0
    {
            ctx->lr = 0x80CCBDC4u;
            ctx->pc = 0x8050A2E0u;
            return;
    }

label_80CCBDC4:
    ctx->pc = 0x80CCBDC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCBDC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CCBDC4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCBDC8:
    ctx->pc = 0x80CCBDC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBDC8u)) return;
    // 80CCBDC8: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80CCBDCC:
    ctx->pc = 0x80CCBDCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBDCCu)) return;
    // 80CCBDCC: bl      0x804C5AB4
    {
            ctx->lr = 0x80CCBDD0u;
            ctx->pc = 0x804C5AB4u;
            return;
    }

label_80CCBDD0:
    ctx->pc = 0x80CCBDD0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCBDD0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80CCBDD0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCBDD4:
    ctx->pc = 0x80CCBDD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBDD4u)) return;
    // 80CCBDD4: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80CCBDD8:
    ctx->pc = 0x80CCBDD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBDD8u)) return;
    // 80CCBDD8: li      r5, 1227
    ctx->gpr[5] = (u32)(s32)(1227);

label_80CCBDDC:
    ctx->pc = 0x80CCBDDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBDDCu)) return;
    // 80CCBDDC: li      r6, 27027
    ctx->gpr[6] = (u32)(s32)(27027);

label_80CCBDE0:
    ctx->pc = 0x80CCBDE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBDE0u)) return;
    // 80CCBDE0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CCBDE4:
    ctx->pc = 0x80CCBDE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBDE4u)) return;
    // 80CCBDE4: bl      0x8045C7B4
    {
            ctx->lr = 0x80CCBDE8u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CCBDE8:
    ctx->pc = 0x80CCBDE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCBDE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCBDE8: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80CCBDEC:
    ctx->pc = 0x80CCBDECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBDECu)) return;
    // 80CCBDEC: bl      0x8045F7C8
    {
            ctx->lr = 0x80CCBDF0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CCBDF0:
    ctx->pc = 0x80CCBDF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCBDF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80CCBDF0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCBDF4:
    ctx->pc = 0x80CCBDF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBDF4u)) return;
    // 80CCBDF4: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80CCBDF8:
    ctx->pc = 0x80CCBDF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBDF8u)) return;
    // 80CCBDF8: li      r5, 4811
    ctx->gpr[5] = (u32)(s32)(4811);

label_80CCBDFC:
    ctx->pc = 0x80CCBDFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBDFCu)) return;
    // 80CCBDFC: li      r6, 27027
    ctx->gpr[6] = (u32)(s32)(27027);

label_80CCBE00:
    ctx->pc = 0x80CCBE00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBE00u)) return;
    // 80CCBE00: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CCBE04:
    ctx->pc = 0x80CCBE04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBE04u)) return;
    // 80CCBE04: bl      0x8045C7B4
    {
            ctx->lr = 0x80CCBE08u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CCBE08:
    ctx->pc = 0x80CCBE08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCBE08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCBE08: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80CCBE0C:
    ctx->pc = 0x80CCBE0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBE0Cu)) return;
    // 80CCBE0C: bl      0x8045F7C8
    {
            ctx->lr = 0x80CCBE10u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CCBE10:
    ctx->pc = 0x80CCBE10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCBE10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80CCBE10: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCBE14:
    ctx->pc = 0x80CCBE14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBE14u)) return;
    // 80CCBE14: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80CCBE18:
    ctx->pc = 0x80CCBE18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBE18u)) return;
    // 80CCBE18: li      r5, 1227
    ctx->gpr[5] = (u32)(s32)(1227);

label_80CCBE1C:
    ctx->pc = 0x80CCBE1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBE1Cu)) return;
    // 80CCBE1C: li      r6, 27027
    ctx->gpr[6] = (u32)(s32)(27027);

label_80CCBE20:
    ctx->pc = 0x80CCBE20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBE20u)) return;
    // 80CCBE20: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CCBE24:
    ctx->pc = 0x80CCBE24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBE24u)) return;
    // 80CCBE24: bl      0x8045C7B4
    {
            ctx->lr = 0x80CCBE28u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CCBE28:
    ctx->pc = 0x80CCBE28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCBE28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCBE28: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80CCBE2C:
    ctx->pc = 0x80CCBE2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBE2Cu)) return;
    // 80CCBE2C: bl      0x8045F7C8
    {
            ctx->lr = 0x80CCBE30u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CCBE30:
    ctx->pc = 0x80CCBE30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCBE30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80CCBE30: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCBE34:
    ctx->pc = 0x80CCBE34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBE34u)) return;
    // 80CCBE34: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80CCBE38:
    ctx->pc = 0x80CCBE38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBE38u)) return;
    // 80CCBE38: li      r5, 4811
    ctx->gpr[5] = (u32)(s32)(4811);

label_80CCBE3C:
    ctx->pc = 0x80CCBE3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBE3Cu)) return;
    // 80CCBE3C: li      r6, 27027
    ctx->gpr[6] = (u32)(s32)(27027);

label_80CCBE40:
    ctx->pc = 0x80CCBE40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBE40u)) return;
    // 80CCBE40: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CCBE44:
    ctx->pc = 0x80CCBE44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBE44u)) return;
    // 80CCBE44: bl      0x8045C7B4
    {
            ctx->lr = 0x80CCBE48u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CCBE48:
    ctx->pc = 0x80CCBE48u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCBE48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCBE48: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80CCBE4C:
    ctx->pc = 0x80CCBE4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBE4Cu)) return;
    // 80CCBE4C: bl      0x8045F7C8
    {
            ctx->lr = 0x80CCBE50u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CCBE50:
    ctx->pc = 0x80CCBE50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCBE50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80CCBE50: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCBE54:
    ctx->pc = 0x80CCBE54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBE54u)) return;
    // 80CCBE54: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80CCBE58:
    ctx->pc = 0x80CCBE58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBE58u)) return;
    // 80CCBE58: li      r5, 1227
    ctx->gpr[5] = (u32)(s32)(1227);

label_80CCBE5C:
    ctx->pc = 0x80CCBE5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBE5Cu)) return;
    // 80CCBE5C: li      r6, 27027
    ctx->gpr[6] = (u32)(s32)(27027);

label_80CCBE60:
    ctx->pc = 0x80CCBE60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBE60u)) return;
    // 80CCBE60: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CCBE64:
    ctx->pc = 0x80CCBE64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBE64u)) return;
    // 80CCBE64: bl      0x8045C7B4
    {
            ctx->lr = 0x80CCBE68u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CCBE68:
    ctx->pc = 0x80CCBE68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCBE68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCBE68: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80CCBE6C:
    ctx->pc = 0x80CCBE6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBE6Cu)) return;
    // 80CCBE6C: bl      0x8045F7C8
    {
            ctx->lr = 0x80CCBE70u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CCBE70:
    ctx->pc = 0x80CCBE70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCBE70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80CCBE70: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCBE74:
    ctx->pc = 0x80CCBE74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBE74u)) return;
    // 80CCBE74: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80CCBE78:
    ctx->pc = 0x80CCBE78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBE78u)) return;
    // 80CCBE78: li      r5, 4811
    ctx->gpr[5] = (u32)(s32)(4811);

label_80CCBE7C:
    ctx->pc = 0x80CCBE7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBE7Cu)) return;
    // 80CCBE7C: li      r6, 27027
    ctx->gpr[6] = (u32)(s32)(27027);

label_80CCBE80:
    ctx->pc = 0x80CCBE80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBE80u)) return;
    // 80CCBE80: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CCBE84:
    ctx->pc = 0x80CCBE84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBE84u)) return;
    // 80CCBE84: bl      0x8045C7B4
    {
            ctx->lr = 0x80CCBE88u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CCBE88:
    ctx->pc = 0x80CCBE88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCBE88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCBE88: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80CCBE8C:
    ctx->pc = 0x80CCBE8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBE8Cu)) return;
    // 80CCBE8C: bl      0x8045F7C8
    {
            ctx->lr = 0x80CCBE90u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CCBE90:
    ctx->pc = 0x80CCBE90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCBE90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80CCBE90: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCBE94:
    ctx->pc = 0x80CCBE94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBE94u)) return;
    // 80CCBE94: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80CCBE98:
    ctx->pc = 0x80CCBE98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBE98u)) return;
    // 80CCBE98: li      r5, 1227
    ctx->gpr[5] = (u32)(s32)(1227);

label_80CCBE9C:
    ctx->pc = 0x80CCBE9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBE9Cu)) return;
    // 80CCBE9C: li      r6, 27027
    ctx->gpr[6] = (u32)(s32)(27027);

label_80CCBEA0:
    ctx->pc = 0x80CCBEA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBEA0u)) return;
    // 80CCBEA0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CCBEA4:
    ctx->pc = 0x80CCBEA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBEA4u)) return;
    // 80CCBEA4: bl      0x8045C7B4
    {
            ctx->lr = 0x80CCBEA8u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CCBEA8:
    ctx->pc = 0x80CCBEA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCBEA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCBEA8: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80CCBEAC:
    ctx->pc = 0x80CCBEACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBEACu)) return;
    // 80CCBEAC: bl      0x8045F7C8
    {
            ctx->lr = 0x80CCBEB0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CCBEB0:
    ctx->pc = 0x80CCBEB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCBEB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80CCBEB0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCBEB4:
    ctx->pc = 0x80CCBEB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBEB4u)) return;
    // 80CCBEB4: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80CCBEB8:
    ctx->pc = 0x80CCBEB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBEB8u)) return;
    // 80CCBEB8: li      r5, 4811
    ctx->gpr[5] = (u32)(s32)(4811);

label_80CCBEBC:
    ctx->pc = 0x80CCBEBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBEBCu)) return;
    // 80CCBEBC: li      r6, 27027
    ctx->gpr[6] = (u32)(s32)(27027);

label_80CCBEC0:
    ctx->pc = 0x80CCBEC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBEC0u)) return;
    // 80CCBEC0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CCBEC4:
    ctx->pc = 0x80CCBEC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBEC4u)) return;
    // 80CCBEC4: bl      0x8045C7B4
    {
            ctx->lr = 0x80CCBEC8u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CCBEC8:
    ctx->pc = 0x80CCBEC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCBEC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCBEC8: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80CCBECC:
    ctx->pc = 0x80CCBECCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBECCu)) return;
    // 80CCBECC: bl      0x8045F7C8
    {
            ctx->lr = 0x80CCBED0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CCBED0:
    ctx->pc = 0x80CCBED0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCBED0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80CCBED0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCBED4:
    ctx->pc = 0x80CCBED4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBED4u)) return;
    // 80CCBED4: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80CCBED8:
    ctx->pc = 0x80CCBED8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBED8u)) return;
    // 80CCBED8: li      r5, 1227
    ctx->gpr[5] = (u32)(s32)(1227);

label_80CCBEDC:
    ctx->pc = 0x80CCBEDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBEDCu)) return;
    // 80CCBEDC: li      r6, 27027
    ctx->gpr[6] = (u32)(s32)(27027);

label_80CCBEE0:
    ctx->pc = 0x80CCBEE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBEE0u)) return;
    // 80CCBEE0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CCBEE4:
    ctx->pc = 0x80CCBEE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBEE4u)) return;
    // 80CCBEE4: bl      0x8045C7B4
    {
            ctx->lr = 0x80CCBEE8u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CCBEE8:
    ctx->pc = 0x80CCBEE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCBEE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCBEE8: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80CCBEEC:
    ctx->pc = 0x80CCBEECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBEECu)) return;
    // 80CCBEEC: bl      0x8045F7C8
    {
            ctx->lr = 0x80CCBEF0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CCBEF0:
    ctx->pc = 0x80CCBEF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCBEF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80CCBEF0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCBEF4:
    ctx->pc = 0x80CCBEF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBEF4u)) return;
    // 80CCBEF4: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80CCBEF8:
    ctx->pc = 0x80CCBEF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBEF8u)) return;
    // 80CCBEF8: li      r5, 4811
    ctx->gpr[5] = (u32)(s32)(4811);

label_80CCBEFC:
    ctx->pc = 0x80CCBEFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBEFCu)) return;
    // 80CCBEFC: li      r6, 27027
    ctx->gpr[6] = (u32)(s32)(27027);

label_80CCBF00:
    ctx->pc = 0x80CCBF00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBF00u)) return;
    // 80CCBF00: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CCBF04:
    ctx->pc = 0x80CCBF04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBF04u)) return;
    // 80CCBF04: bl      0x8045C7B4
    {
            ctx->lr = 0x80CCBF08u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CCBF08:
    ctx->pc = 0x80CCBF08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCBF08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCBF08: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80CCBF0C:
    ctx->pc = 0x80CCBF0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBF0Cu)) return;
    // 80CCBF0C: bl      0x8045F7C8
    {
            ctx->lr = 0x80CCBF10u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CCBF10:
    ctx->pc = 0x80CCBF10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCBF10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CCBF10: li      r3, 1333
    ctx->gpr[3] = (u32)(s32)(1333);

label_80CCBF14:
    ctx->pc = 0x80CCBF14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBF14u)) return;
    // 80CCBF14: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CCBF18:
    ctx->pc = 0x80CCBF18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBF18u)) return;
    // 80CCBF18: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80CCBF1C:
    ctx->pc = 0x80CCBF1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBF1Cu)) return;
    // 80CCBF1C: li      r6, 80
    ctx->gpr[6] = (u32)(s32)(80);

label_80CCBF20:
    ctx->pc = 0x80CCBF20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBF20u)) return;
    // 80CCBF20: lis     r7, -27375
    ctx->gpr[7] = ((u32)(s32)(-27375) << 16);

label_80CCBF24:
    ctx->pc = 0x80CCBF24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBF24u)) return;
    // 80CCBF24: addi    r7, r7, -29992
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-29992);

label_80CCBF28:
    ctx->pc = 0x80CCBF28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBF28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CCBF28: lfs     f1, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x80CCBF28u)) return;
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
label_80CCBF2C:
    ctx->pc = 0x80CCBF2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBF2Cu)) return;
    // 80CCBF2C: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80CCBF2Cu)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_80CCBF30:
    ctx->pc = 0x80CCBF30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBF30u)) return;
    // 80CCBF30: lis     r7, -27375
    ctx->gpr[7] = ((u32)(s32)(-27375) << 16);

label_80CCBF34:
    ctx->pc = 0x80CCBF34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBF34u)) return;
    // 80CCBF34: addi    r7, r7, -29988
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-29988);

label_80CCBF38:
    ctx->pc = 0x80CCBF38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBF38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCBF38: lfs     f3, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x80CCBF38u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
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
label_80CCBF3C:
    ctx->pc = 0x80CCBF3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBF3Cu)) return;
    // 80CCBF3C: bl      0x8050A2E0
    {
            ctx->lr = 0x80CCBF40u;
            ctx->pc = 0x8050A2E0u;
            return;
    }

label_80CCBF40:
    ctx->pc = 0x80CCBF40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCBF40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80CCBF40: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCBF44:
    ctx->pc = 0x80CCBF44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBF44u)) return;
    // 80CCBF44: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80CCBF48:
    ctx->pc = 0x80CCBF48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBF48u)) return;
    // 80CCBF48: li      r5, 1227
    ctx->gpr[5] = (u32)(s32)(1227);

label_80CCBF4C:
    ctx->pc = 0x80CCBF4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBF4Cu)) return;
    // 80CCBF4C: li      r6, 27027
    ctx->gpr[6] = (u32)(s32)(27027);

label_80CCBF50:
    ctx->pc = 0x80CCBF50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBF50u)) return;
    // 80CCBF50: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CCBF54:
    ctx->pc = 0x80CCBF54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBF54u)) return;
    // 80CCBF54: bl      0x8045C7B4
    {
            ctx->lr = 0x80CCBF58u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CCBF58:
    ctx->pc = 0x80CCBF58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCBF58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCBF58: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80CCBF5C:
    ctx->pc = 0x80CCBF5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBF5Cu)) return;
    // 80CCBF5C: bl      0x8045F7C8
    {
            ctx->lr = 0x80CCBF60u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CCBF60:
    ctx->pc = 0x80CCBF60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCBF60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80CCBF60: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCBF64:
    ctx->pc = 0x80CCBF64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBF64u)) return;
    // 80CCBF64: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80CCBF68:
    ctx->pc = 0x80CCBF68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBF68u)) return;
    // 80CCBF68: li      r5, 2507
    ctx->gpr[5] = (u32)(s32)(2507);

label_80CCBF6C:
    ctx->pc = 0x80CCBF6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBF6Cu)) return;
    // 80CCBF6C: li      r6, 27027
    ctx->gpr[6] = (u32)(s32)(27027);

label_80CCBF70:
    ctx->pc = 0x80CCBF70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBF70u)) return;
    // 80CCBF70: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CCBF74:
    ctx->pc = 0x80CCBF74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBF74u)) return;
    // 80CCBF74: bl      0x8045C7B4
    {
            ctx->lr = 0x80CCBF78u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CCBF78:
    ctx->pc = 0x80CCBF78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCBF78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCBF78: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80CCBF7C:
    ctx->pc = 0x80CCBF7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBF7Cu)) return;
    // 80CCBF7C: bl      0x8045F7C8
    {
            ctx->lr = 0x80CCBF80u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CCBF80:
    ctx->pc = 0x80CCBF80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCBF80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80CCBF80: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCBF84:
    ctx->pc = 0x80CCBF84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBF84u)) return;
    // 80CCBF84: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80CCBF88:
    ctx->pc = 0x80CCBF88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBF88u)) return;
    // 80CCBF88: li      r5, 1227
    ctx->gpr[5] = (u32)(s32)(1227);

label_80CCBF8C:
    ctx->pc = 0x80CCBF8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBF8Cu)) return;
    // 80CCBF8C: li      r6, 27027
    ctx->gpr[6] = (u32)(s32)(27027);

label_80CCBF90:
    ctx->pc = 0x80CCBF90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBF90u)) return;
    // 80CCBF90: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CCBF94:
    ctx->pc = 0x80CCBF94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBF94u)) return;
    // 80CCBF94: bl      0x8045C7B4
    {
            ctx->lr = 0x80CCBF98u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CCBF98:
    ctx->pc = 0x80CCBF98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCBF98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCBF98: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80CCBF9C:
    ctx->pc = 0x80CCBF9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBF9Cu)) return;
    // 80CCBF9C: bl      0x8045F7C8
    {
            ctx->lr = 0x80CCBFA0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CCBFA0:
    ctx->pc = 0x80CCBFA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCBFA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80CCBFA0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCBFA4:
    ctx->pc = 0x80CCBFA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBFA4u)) return;
    // 80CCBFA4: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80CCBFA8:
    ctx->pc = 0x80CCBFA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBFA8u)) return;
    // 80CCBFA8: li      r5, 2507
    ctx->gpr[5] = (u32)(s32)(2507);

label_80CCBFAC:
    ctx->pc = 0x80CCBFACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBFACu)) return;
    // 80CCBFAC: li      r6, 27027
    ctx->gpr[6] = (u32)(s32)(27027);

label_80CCBFB0:
    ctx->pc = 0x80CCBFB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBFB0u)) return;
    // 80CCBFB0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CCBFB4:
    ctx->pc = 0x80CCBFB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBFB4u)) return;
    // 80CCBFB4: bl      0x8045C7B4
    {
            ctx->lr = 0x80CCBFB8u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CCBFB8:
    ctx->pc = 0x80CCBFB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCBFB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCBFB8: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80CCBFBC:
    ctx->pc = 0x80CCBFBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBFBCu)) return;
    // 80CCBFBC: bl      0x8045F7C8
    {
            ctx->lr = 0x80CCBFC0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CCBFC0:
    ctx->pc = 0x80CCBFC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCBFC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80CCBFC0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCBFC4:
    ctx->pc = 0x80CCBFC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBFC4u)) return;
    // 80CCBFC4: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80CCBFC8:
    ctx->pc = 0x80CCBFC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBFC8u)) return;
    // 80CCBFC8: li      r5, 1227
    ctx->gpr[5] = (u32)(s32)(1227);

label_80CCBFCC:
    ctx->pc = 0x80CCBFCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBFCCu)) return;
    // 80CCBFCC: li      r6, 27027
    ctx->gpr[6] = (u32)(s32)(27027);

label_80CCBFD0:
    ctx->pc = 0x80CCBFD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBFD0u)) return;
    // 80CCBFD0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CCBFD4:
    ctx->pc = 0x80CCBFD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBFD4u)) return;
    // 80CCBFD4: bl      0x8045C7B4
    {
            ctx->lr = 0x80CCBFD8u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CCBFD8:
    ctx->pc = 0x80CCBFD8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCBFD8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCBFD8: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80CCBFDC:
    ctx->pc = 0x80CCBFDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBFDCu)) return;
    // 80CCBFDC: bl      0x8045F7C8
    {
            ctx->lr = 0x80CCBFE0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CCBFE0:
    ctx->pc = 0x80CCBFE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCBFE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CCBFE0: li      r3, 1333
    ctx->gpr[3] = (u32)(s32)(1333);

label_80CCBFE4:
    ctx->pc = 0x80CCBFE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBFE4u)) return;
    // 80CCBFE4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CCBFE8:
    ctx->pc = 0x80CCBFE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBFE8u)) return;
    // 80CCBFE8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80CCBFEC:
    ctx->pc = 0x80CCBFECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBFECu)) return;
    // 80CCBFEC: li      r6, 30
    ctx->gpr[6] = (u32)(s32)(30);

label_80CCBFF0:
    ctx->pc = 0x80CCBFF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBFF0u)) return;
    // 80CCBFF0: lis     r7, -27375
    ctx->gpr[7] = ((u32)(s32)(-27375) << 16);

label_80CCBFF4:
    ctx->pc = 0x80CCBFF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBFF4u)) return;
    // 80CCBFF4: addi    r7, r7, -29992
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-29992);

label_80CCBFF8:
    ctx->pc = 0x80CCBFF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBFF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CCBFF8: lfs     f1, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x80CCBFF8u)) return;
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
label_80CCBFFC:
    ctx->pc = 0x80CCBFFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCBFFCu)) return;
    // 80CCBFFC: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80CCBFFCu)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_80CCC000:
    ctx->pc = 0x80CCC000u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC000u)) return;
    // 80CCC000: lis     r7, -27375
    ctx->gpr[7] = ((u32)(s32)(-27375) << 16);

label_80CCC004:
    ctx->pc = 0x80CCC004u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC004u)) return;
    // 80CCC004: addi    r7, r7, -29988
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-29988);

label_80CCC008:
    ctx->pc = 0x80CCC008u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC008u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCC008: lfs     f3, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x80CCC008u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
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
label_80CCC00C:
    ctx->pc = 0x80CCC00Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC00Cu)) return;
    // 80CCC00C: bl      0x8050A2E0
    {
            ctx->lr = 0x80CCC010u;
            ctx->pc = 0x8050A2E0u;
            return;
    }

label_80CCC010:
    ctx->pc = 0x80CCC010u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC010u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80CCC010: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCC014:
    ctx->pc = 0x80CCC014u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC014u)) return;
    // 80CCC014: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80CCC018:
    ctx->pc = 0x80CCC018u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC018u)) return;
    // 80CCC018: li      r5, 1483
    ctx->gpr[5] = (u32)(s32)(1483);

label_80CCC01C:
    ctx->pc = 0x80CCC01Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC01Cu)) return;
    // 80CCC01C: li      r6, 27027
    ctx->gpr[6] = (u32)(s32)(27027);

label_80CCC020:
    ctx->pc = 0x80CCC020u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC020u)) return;
    // 80CCC020: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CCC024:
    ctx->pc = 0x80CCC024u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC024u)) return;
    // 80CCC024: bl      0x8045C7B4
    {
            ctx->lr = 0x80CCC028u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CCC028:
    ctx->pc = 0x80CCC028u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC028u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCC028: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80CCC02C:
    ctx->pc = 0x80CCC02Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC02Cu)) return;
    // 80CCC02C: bl      0x8045F7C8
    {
            ctx->lr = 0x80CCC030u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CCC030:
    ctx->pc = 0x80CCC030u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC030u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80CCC030: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCC034:
    ctx->pc = 0x80CCC034u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC034u)) return;
    // 80CCC034: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80CCC038:
    ctx->pc = 0x80CCC038u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC038u)) return;
    // 80CCC038: li      r5, 1227
    ctx->gpr[5] = (u32)(s32)(1227);

label_80CCC03C:
    ctx->pc = 0x80CCC03Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC03Cu)) return;
    // 80CCC03C: li      r6, 27027
    ctx->gpr[6] = (u32)(s32)(27027);

label_80CCC040:
    ctx->pc = 0x80CCC040u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC040u)) return;
    // 80CCC040: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CCC044:
    ctx->pc = 0x80CCC044u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC044u)) return;
    // 80CCC044: bl      0x8045C7B4
    {
            ctx->lr = 0x80CCC048u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CCC048:
    ctx->pc = 0x80CCC048u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC048u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCC048: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80CCC04C:
    ctx->pc = 0x80CCC04Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC04Cu)) return;
    // 80CCC04C: bl      0x8045F7C8
    {
            ctx->lr = 0x80CCC050u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CCC050:
    ctx->pc = 0x80CCC050u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC050u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80CCC050: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCC054:
    ctx->pc = 0x80CCC054u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC054u)) return;
    // 80CCC054: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80CCC058:
    ctx->pc = 0x80CCC058u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC058u)) return;
    // 80CCC058: li      r5, 1483
    ctx->gpr[5] = (u32)(s32)(1483);

label_80CCC05C:
    ctx->pc = 0x80CCC05Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC05Cu)) return;
    // 80CCC05C: li      r6, 27027
    ctx->gpr[6] = (u32)(s32)(27027);

label_80CCC060:
    ctx->pc = 0x80CCC060u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC060u)) return;
    // 80CCC060: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CCC064:
    ctx->pc = 0x80CCC064u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC064u)) return;
    // 80CCC064: bl      0x8045C7B4
    {
            ctx->lr = 0x80CCC068u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CCC068:
    ctx->pc = 0x80CCC068u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC068u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCC068: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80CCC06C:
    ctx->pc = 0x80CCC06Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC06Cu)) return;
    // 80CCC06C: bl      0x8045F7C8
    {
            ctx->lr = 0x80CCC070u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CCC070:
    ctx->pc = 0x80CCC070u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC070u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80CCC070: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCC074:
    ctx->pc = 0x80CCC074u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC074u)) return;
    // 80CCC074: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80CCC078:
    ctx->pc = 0x80CCC078u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC078u)) return;
    // 80CCC078: li      r5, 1227
    ctx->gpr[5] = (u32)(s32)(1227);

label_80CCC07C:
    ctx->pc = 0x80CCC07Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC07Cu)) return;
    // 80CCC07C: li      r6, 27027
    ctx->gpr[6] = (u32)(s32)(27027);

label_80CCC080:
    ctx->pc = 0x80CCC080u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC080u)) return;
    // 80CCC080: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CCC084:
    ctx->pc = 0x80CCC084u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC084u)) return;
    // 80CCC084: bl      0x8045C7B4
    {
            ctx->lr = 0x80CCC088u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CCC088:
    ctx->pc = 0x80CCC088u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC088u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCC088: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80CCC08C:
    ctx->pc = 0x80CCC08Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC08Cu)) return;
    // 80CCC08C: bl      0x8045F7C8
    {
            ctx->lr = 0x80CCC090u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CCC090:
    ctx->pc = 0x80CCC090u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC090u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80CCC090: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCC094:
    ctx->pc = 0x80CCC094u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC094u)) return;
    // 80CCC094: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80CCC098:
    ctx->pc = 0x80CCC098u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC098u)) return;
    // 80CCC098: li      r5, 1483
    ctx->gpr[5] = (u32)(s32)(1483);

label_80CCC09C:
    ctx->pc = 0x80CCC09Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC09Cu)) return;
    // 80CCC09C: li      r6, 27027
    ctx->gpr[6] = (u32)(s32)(27027);

label_80CCC0A0:
    ctx->pc = 0x80CCC0A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC0A0u)) return;
    // 80CCC0A0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CCC0A4:
    ctx->pc = 0x80CCC0A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC0A4u)) return;
    // 80CCC0A4: bl      0x8045C7B4
    {
            ctx->lr = 0x80CCC0A8u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CCC0A8:
    ctx->pc = 0x80CCC0A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC0A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCC0A8: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80CCC0AC:
    ctx->pc = 0x80CCC0ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC0ACu)) return;
    // 80CCC0AC: bl      0x8045F7C8
    {
            ctx->lr = 0x80CCC0B0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CCC0B0:
    ctx->pc = 0x80CCC0B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC0B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80CCC0B0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCC0B4:
    ctx->pc = 0x80CCC0B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC0B4u)) return;
    // 80CCC0B4: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80CCC0B8:
    ctx->pc = 0x80CCC0B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC0B8u)) return;
    // 80CCC0B8: li      r5, 1227
    ctx->gpr[5] = (u32)(s32)(1227);

label_80CCC0BC:
    ctx->pc = 0x80CCC0BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC0BCu)) return;
    // 80CCC0BC: li      r6, 27027
    ctx->gpr[6] = (u32)(s32)(27027);

label_80CCC0C0:
    ctx->pc = 0x80CCC0C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC0C0u)) return;
    // 80CCC0C0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CCC0C4:
    ctx->pc = 0x80CCC0C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC0C4u)) return;
    // 80CCC0C4: bl      0x8045C7B4
    {
            ctx->lr = 0x80CCC0C8u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CCC0C8:
    ctx->pc = 0x80CCC0C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC0C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCC0C8: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80CCC0CC:
    ctx->pc = 0x80CCC0CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC0CCu)) return;
    // 80CCC0CC: bl      0x8045F7C8
    {
            ctx->lr = 0x80CCC0D0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CCC0D0:
    ctx->pc = 0x80CCC0D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC0D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80CCC0D0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCC0D4:
    ctx->pc = 0x80CCC0D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC0D4u)) return;
    // 80CCC0D4: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80CCC0D8:
    ctx->pc = 0x80CCC0D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC0D8u)) return;
    // 80CCC0D8: li      r5, 1483
    ctx->gpr[5] = (u32)(s32)(1483);

label_80CCC0DC:
    ctx->pc = 0x80CCC0DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC0DCu)) return;
    // 80CCC0DC: li      r6, 27027
    ctx->gpr[6] = (u32)(s32)(27027);

label_80CCC0E0:
    ctx->pc = 0x80CCC0E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC0E0u)) return;
    // 80CCC0E0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CCC0E4:
    ctx->pc = 0x80CCC0E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC0E4u)) return;
    // 80CCC0E4: bl      0x8045C7B4
    {
            ctx->lr = 0x80CCC0E8u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CCC0E8:
    ctx->pc = 0x80CCC0E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC0E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCC0E8: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80CCC0EC:
    ctx->pc = 0x80CCC0ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC0ECu)) return;
    // 80CCC0EC: bl      0x8045F7C8
    {
            ctx->lr = 0x80CCC0F0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CCC0F0:
    ctx->pc = 0x80CCC0F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC0F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80CCC0F0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCC0F4:
    ctx->pc = 0x80CCC0F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC0F4u)) return;
    // 80CCC0F4: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80CCC0F8:
    ctx->pc = 0x80CCC0F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC0F8u)) return;
    // 80CCC0F8: li      r5, 1227
    ctx->gpr[5] = (u32)(s32)(1227);

label_80CCC0FC:
    ctx->pc = 0x80CCC0FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC0FCu)) return;
    // 80CCC0FC: li      r6, 27027
    ctx->gpr[6] = (u32)(s32)(27027);

label_80CCC100:
    ctx->pc = 0x80CCC100u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC100u)) return;
    // 80CCC100: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CCC104:
    ctx->pc = 0x80CCC104u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC104u)) return;
    // 80CCC104: bl      0x8045C7B4
    {
            ctx->lr = 0x80CCC108u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CCC108:
    ctx->pc = 0x80CCC108u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC108u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCC108: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80CCC10C:
    ctx->pc = 0x80CCC10Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC10Cu)) return;
    // 80CCC10C: bl      0x8045F7C8
    {
            ctx->lr = 0x80CCC110u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CCC110:
    ctx->pc = 0x80CCC110u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC110u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CCC110: li      r3, 1333
    ctx->gpr[3] = (u32)(s32)(1333);

label_80CCC114:
    ctx->pc = 0x80CCC114u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC114u)) return;
    // 80CCC114: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CCC118:
    ctx->pc = 0x80CCC118u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC118u)) return;
    // 80CCC118: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80CCC11C:
    ctx->pc = 0x80CCC11Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC11Cu)) return;
    // 80CCC11C: li      r6, 60
    ctx->gpr[6] = (u32)(s32)(60);

label_80CCC120:
    ctx->pc = 0x80CCC120u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC120u)) return;
    // 80CCC120: lis     r7, -27375
    ctx->gpr[7] = ((u32)(s32)(-27375) << 16);

label_80CCC124:
    ctx->pc = 0x80CCC124u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC124u)) return;
    // 80CCC124: addi    r7, r7, -29992
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-29992);

label_80CCC128:
    ctx->pc = 0x80CCC128u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC128u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CCC128: lfs     f1, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x80CCC128u)) return;
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
label_80CCC12C:
    ctx->pc = 0x80CCC12Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC12Cu)) return;
    // 80CCC12C: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80CCC12Cu)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_80CCC130:
    ctx->pc = 0x80CCC130u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC130u)) return;
    // 80CCC130: lis     r7, -27375
    ctx->gpr[7] = ((u32)(s32)(-27375) << 16);

label_80CCC134:
    ctx->pc = 0x80CCC134u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC134u)) return;
    // 80CCC134: addi    r7, r7, -29988
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-29988);

label_80CCC138:
    ctx->pc = 0x80CCC138u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC138u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCC138: lfs     f3, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x80CCC138u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
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
label_80CCC13C:
    ctx->pc = 0x80CCC13Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC13Cu)) return;
    // 80CCC13C: bl      0x8050A2E0
    {
            ctx->lr = 0x80CCC140u;
            ctx->pc = 0x8050A2E0u;
            return;
    }

label_80CCC140:
    ctx->pc = 0x80CCC140u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC140u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80CCC140: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCC144:
    ctx->pc = 0x80CCC144u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC144u)) return;
    // 80CCC144: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80CCC148:
    ctx->pc = 0x80CCC148u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC148u)) return;
    // 80CCC148: li      r5, 1483
    ctx->gpr[5] = (u32)(s32)(1483);

label_80CCC14C:
    ctx->pc = 0x80CCC14Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC14Cu)) return;
    // 80CCC14C: li      r6, 27027
    ctx->gpr[6] = (u32)(s32)(27027);

label_80CCC150:
    ctx->pc = 0x80CCC150u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC150u)) return;
    // 80CCC150: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CCC154:
    ctx->pc = 0x80CCC154u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC154u)) return;
    // 80CCC154: bl      0x8045C7B4
    {
            ctx->lr = 0x80CCC158u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CCC158:
    ctx->pc = 0x80CCC158u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC158u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCC158: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80CCC15C:
    ctx->pc = 0x80CCC15Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC15Cu)) return;
    // 80CCC15C: bl      0x8045F7C8
    {
            ctx->lr = 0x80CCC160u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CCC160:
    ctx->pc = 0x80CCC160u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC160u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80CCC160: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCC164:
    ctx->pc = 0x80CCC164u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC164u)) return;
    // 80CCC164: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80CCC168:
    ctx->pc = 0x80CCC168u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC168u)) return;
    // 80CCC168: li      r5, 1227
    ctx->gpr[5] = (u32)(s32)(1227);

label_80CCC16C:
    ctx->pc = 0x80CCC16Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC16Cu)) return;
    // 80CCC16C: li      r6, 27027
    ctx->gpr[6] = (u32)(s32)(27027);

label_80CCC170:
    ctx->pc = 0x80CCC170u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC170u)) return;
    // 80CCC170: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CCC174:
    ctx->pc = 0x80CCC174u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC174u)) return;
    // 80CCC174: bl      0x8045C7B4
    {
            ctx->lr = 0x80CCC178u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CCC178:
    ctx->pc = 0x80CCC178u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC178u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCC178: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80CCC17C:
    ctx->pc = 0x80CCC17Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC17Cu)) return;
    // 80CCC17C: bl      0x8045F7C8
    {
            ctx->lr = 0x80CCC180u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CCC180:
    ctx->pc = 0x80CCC180u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC180u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80CCC180: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCC184:
    ctx->pc = 0x80CCC184u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC184u)) return;
    // 80CCC184: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80CCC188:
    ctx->pc = 0x80CCC188u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC188u)) return;
    // 80CCC188: li      r5, 1483
    ctx->gpr[5] = (u32)(s32)(1483);

label_80CCC18C:
    ctx->pc = 0x80CCC18Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC18Cu)) return;
    // 80CCC18C: li      r6, 27027
    ctx->gpr[6] = (u32)(s32)(27027);

label_80CCC190:
    ctx->pc = 0x80CCC190u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC190u)) return;
    // 80CCC190: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CCC194:
    ctx->pc = 0x80CCC194u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC194u)) return;
    // 80CCC194: bl      0x8045C7B4
    {
            ctx->lr = 0x80CCC198u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CCC198:
    ctx->pc = 0x80CCC198u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC198u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCC198: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80CCC19C:
    ctx->pc = 0x80CCC19Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC19Cu)) return;
    // 80CCC19C: bl      0x8045F7C8
    {
            ctx->lr = 0x80CCC1A0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CCC1A0:
    ctx->pc = 0x80CCC1A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC1A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80CCC1A0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCC1A4:
    ctx->pc = 0x80CCC1A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC1A4u)) return;
    // 80CCC1A4: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80CCC1A8:
    ctx->pc = 0x80CCC1A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC1A8u)) return;
    // 80CCC1A8: li      r5, 1227
    ctx->gpr[5] = (u32)(s32)(1227);

label_80CCC1AC:
    ctx->pc = 0x80CCC1ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC1ACu)) return;
    // 80CCC1AC: li      r6, 27027
    ctx->gpr[6] = (u32)(s32)(27027);

label_80CCC1B0:
    ctx->pc = 0x80CCC1B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC1B0u)) return;
    // 80CCC1B0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CCC1B4:
    ctx->pc = 0x80CCC1B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC1B4u)) return;
    // 80CCC1B4: bl      0x8045C7B4
    {
            ctx->lr = 0x80CCC1B8u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CCC1B8:
    ctx->pc = 0x80CCC1B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC1B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCC1B8: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80CCC1BC:
    ctx->pc = 0x80CCC1BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC1BCu)) return;
    // 80CCC1BC: bl      0x8045F7C8
    {
            ctx->lr = 0x80CCC1C0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CCC1C0:
    ctx->pc = 0x80CCC1C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC1C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80CCC1C0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCC1C4:
    ctx->pc = 0x80CCC1C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC1C4u)) return;
    // 80CCC1C4: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80CCC1C8:
    ctx->pc = 0x80CCC1C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC1C8u)) return;
    // 80CCC1C8: li      r5, 1483
    ctx->gpr[5] = (u32)(s32)(1483);

label_80CCC1CC:
    ctx->pc = 0x80CCC1CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC1CCu)) return;
    // 80CCC1CC: li      r6, 27027
    ctx->gpr[6] = (u32)(s32)(27027);

label_80CCC1D0:
    ctx->pc = 0x80CCC1D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC1D0u)) return;
    // 80CCC1D0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CCC1D4:
    ctx->pc = 0x80CCC1D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC1D4u)) return;
    // 80CCC1D4: bl      0x8045C7B4
    {
            ctx->lr = 0x80CCC1D8u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CCC1D8:
    ctx->pc = 0x80CCC1D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC1D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCC1D8: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80CCC1DC:
    ctx->pc = 0x80CCC1DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC1DCu)) return;
    // 80CCC1DC: bl      0x8045F7C8
    {
            ctx->lr = 0x80CCC1E0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CCC1E0:
    ctx->pc = 0x80CCC1E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC1E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80CCC1E0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCC1E4:
    ctx->pc = 0x80CCC1E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC1E4u)) return;
    // 80CCC1E4: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80CCC1E8:
    ctx->pc = 0x80CCC1E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC1E8u)) return;
    // 80CCC1E8: li      r5, 1227
    ctx->gpr[5] = (u32)(s32)(1227);

label_80CCC1EC:
    ctx->pc = 0x80CCC1ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC1ECu)) return;
    // 80CCC1EC: li      r6, 27027
    ctx->gpr[6] = (u32)(s32)(27027);

label_80CCC1F0:
    ctx->pc = 0x80CCC1F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC1F0u)) return;
    // 80CCC1F0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CCC1F4:
    ctx->pc = 0x80CCC1F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC1F4u)) return;
    // 80CCC1F4: bl      0x8045C7B4
    {
            ctx->lr = 0x80CCC1F8u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CCC1F8:
    ctx->pc = 0x80CCC1F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC1F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCC1F8: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80CCC1FC:
    ctx->pc = 0x80CCC1FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC1FCu)) return;
    // 80CCC1FC: bl      0x8045F7C8
    {
            ctx->lr = 0x80CCC200u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CCC200:
    ctx->pc = 0x80CCC200u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC200u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80CCC200: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCC204:
    ctx->pc = 0x80CCC204u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC204u)) return;
    // 80CCC204: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80CCC208:
    ctx->pc = 0x80CCC208u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC208u)) return;
    // 80CCC208: li      r5, 1483
    ctx->gpr[5] = (u32)(s32)(1483);

label_80CCC20C:
    ctx->pc = 0x80CCC20Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC20Cu)) return;
    // 80CCC20C: li      r6, 27027
    ctx->gpr[6] = (u32)(s32)(27027);

label_80CCC210:
    ctx->pc = 0x80CCC210u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC210u)) return;
    // 80CCC210: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CCC214:
    ctx->pc = 0x80CCC214u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC214u)) return;
    // 80CCC214: bl      0x8045C7B4
    {
            ctx->lr = 0x80CCC218u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CCC218:
    ctx->pc = 0x80CCC218u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC218u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCC218: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80CCC21C:
    ctx->pc = 0x80CCC21Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC21Cu)) return;
    // 80CCC21C: bl      0x8045F7C8
    {
            ctx->lr = 0x80CCC220u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CCC220:
    ctx->pc = 0x80CCC220u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC220u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80CCC220: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCC224:
    ctx->pc = 0x80CCC224u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC224u)) return;
    // 80CCC224: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80CCC228:
    ctx->pc = 0x80CCC228u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC228u)) return;
    // 80CCC228: li      r5, 1227
    ctx->gpr[5] = (u32)(s32)(1227);

label_80CCC22C:
    ctx->pc = 0x80CCC22Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC22Cu)) return;
    // 80CCC22C: li      r6, 27027
    ctx->gpr[6] = (u32)(s32)(27027);

label_80CCC230:
    ctx->pc = 0x80CCC230u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC230u)) return;
    // 80CCC230: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CCC234:
    ctx->pc = 0x80CCC234u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC234u)) return;
    // 80CCC234: bl      0x8045C7B4
    {
            ctx->lr = 0x80CCC238u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CCC238:
    ctx->pc = 0x80CCC238u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC238u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCC238: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80CCC23C:
    ctx->pc = 0x80CCC23Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC23Cu)) return;
    // 80CCC23C: bl      0x8045F7C8
    {
            ctx->lr = 0x80CCC240u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CCC240:
    ctx->pc = 0x80CCC240u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC240u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80CCC240: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCC244:
    ctx->pc = 0x80CCC244u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC244u)) return;
    // 80CCC244: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80CCC248:
    ctx->pc = 0x80CCC248u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC248u)) return;
    // 80CCC248: li      r5, 1483
    ctx->gpr[5] = (u32)(s32)(1483);

label_80CCC24C:
    ctx->pc = 0x80CCC24Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC24Cu)) return;
    // 80CCC24C: li      r6, 27027
    ctx->gpr[6] = (u32)(s32)(27027);

label_80CCC250:
    ctx->pc = 0x80CCC250u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC250u)) return;
    // 80CCC250: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CCC254:
    ctx->pc = 0x80CCC254u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC254u)) return;
    // 80CCC254: bl      0x8045C7B4
    {
            ctx->lr = 0x80CCC258u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CCC258:
    ctx->pc = 0x80CCC258u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC258u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCC258: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80CCC25C:
    ctx->pc = 0x80CCC25Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC25Cu)) return;
    // 80CCC25C: bl      0x8045F7C8
    {
            ctx->lr = 0x80CCC260u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CCC260:
    ctx->pc = 0x80CCC260u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC260u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80CCC260: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCC264:
    ctx->pc = 0x80CCC264u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC264u)) return;
    // 80CCC264: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80CCC268:
    ctx->pc = 0x80CCC268u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC268u)) return;
    // 80CCC268: li      r5, 1227
    ctx->gpr[5] = (u32)(s32)(1227);

label_80CCC26C:
    ctx->pc = 0x80CCC26Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC26Cu)) return;
    // 80CCC26C: li      r6, 27027
    ctx->gpr[6] = (u32)(s32)(27027);

label_80CCC270:
    ctx->pc = 0x80CCC270u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC270u)) return;
    // 80CCC270: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CCC274:
    ctx->pc = 0x80CCC274u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC274u)) return;
    // 80CCC274: bl      0x8045C7B4
    {
            ctx->lr = 0x80CCC278u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CCC278:
    ctx->pc = 0x80CCC278u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC278u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCC278: li      r3, 1364
    ctx->gpr[3] = (u32)(s32)(1364);

label_80CCC27C:
    ctx->pc = 0x80CCC27Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC27Cu)) return;
    // 80CCC27C: bl      0x8045BFA0
    {
            ctx->lr = 0x80CCC280u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80CCC280:
    ctx->pc = 0x80CCC280u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC280u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCC280: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80CCC284:
    ctx->pc = 0x80CCC284u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC284u)) return;
    // 80CCC284: bl      0x8045F7C8
    {
            ctx->lr = 0x80CCC288u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CCC288:
    ctx->pc = 0x80CCC288u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC288u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80CCC288: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCC28C:
    ctx->pc = 0x80CCC28Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC28Cu)) return;
    // 80CCC28C: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80CCC290:
    ctx->pc = 0x80CCC290u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC290u)) return;
    // 80CCC290: li      r5, 1483
    ctx->gpr[5] = (u32)(s32)(1483);

label_80CCC294:
    ctx->pc = 0x80CCC294u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC294u)) return;
    // 80CCC294: li      r6, 27027
    ctx->gpr[6] = (u32)(s32)(27027);

label_80CCC298:
    ctx->pc = 0x80CCC298u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC298u)) return;
    // 80CCC298: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CCC29C:
    ctx->pc = 0x80CCC29Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC29Cu)) return;
    // 80CCC29C: bl      0x8045C7B4
    {
            ctx->lr = 0x80CCC2A0u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CCC2A0:
    ctx->pc = 0x80CCC2A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC2A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCC2A0: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80CCC2A4:
    ctx->pc = 0x80CCC2A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC2A4u)) return;
    // 80CCC2A4: bl      0x8045F7C8
    {
            ctx->lr = 0x80CCC2A8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CCC2A8:
    ctx->pc = 0x80CCC2A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC2A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80CCC2A8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCC2AC:
    ctx->pc = 0x80CCC2ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC2ACu)) return;
    // 80CCC2AC: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80CCC2B0:
    ctx->pc = 0x80CCC2B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC2B0u)) return;
    // 80CCC2B0: li      r5, 1227
    ctx->gpr[5] = (u32)(s32)(1227);

label_80CCC2B4:
    ctx->pc = 0x80CCC2B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC2B4u)) return;
    // 80CCC2B4: li      r6, 27027
    ctx->gpr[6] = (u32)(s32)(27027);

label_80CCC2B8:
    ctx->pc = 0x80CCC2B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC2B8u)) return;
    // 80CCC2B8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CCC2BC:
    ctx->pc = 0x80CCC2BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC2BCu)) return;
    // 80CCC2BC: bl      0x8045C7B4
    {
            ctx->lr = 0x80CCC2C0u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CCC2C0:
    ctx->pc = 0x80CCC2C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC2C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCC2C0: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80CCC2C4:
    ctx->pc = 0x80CCC2C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC2C4u)) return;
    // 80CCC2C4: bl      0x8045F7C8
    {
            ctx->lr = 0x80CCC2C8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CCC2C8:
    ctx->pc = 0x80CCC2C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC2C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80CCC2C8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCC2CC:
    ctx->pc = 0x80CCC2CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC2CCu)) return;
    // 80CCC2CC: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80CCC2D0:
    ctx->pc = 0x80CCC2D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC2D0u)) return;
    // 80CCC2D0: li      r5, 1227
    ctx->gpr[5] = (u32)(s32)(1227);

label_80CCC2D4:
    ctx->pc = 0x80CCC2D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC2D4u)) return;
    // 80CCC2D4: li      r6, 27027
    ctx->gpr[6] = (u32)(s32)(27027);

label_80CCC2D8:
    ctx->pc = 0x80CCC2D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC2D8u)) return;
    // 80CCC2D8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CCC2DC:
    ctx->pc = 0x80CCC2DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC2DCu)) return;
    // 80CCC2DC: bl      0x8045C7B4
    {
            ctx->lr = 0x80CCC2E0u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CCC2E0:
    ctx->pc = 0x80CCC2E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC2E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CCC2E0: li      r3, 1333
    ctx->gpr[3] = (u32)(s32)(1333);

label_80CCC2E4:
    ctx->pc = 0x80CCC2E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC2E4u)) return;
    // 80CCC2E4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CCC2E8:
    ctx->pc = 0x80CCC2E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC2E8u)) return;
    // 80CCC2E8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80CCC2EC:
    ctx->pc = 0x80CCC2ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC2ECu)) return;
    // 80CCC2EC: li      r6, 20
    ctx->gpr[6] = (u32)(s32)(20);

label_80CCC2F0:
    ctx->pc = 0x80CCC2F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC2F0u)) return;
    // 80CCC2F0: lis     r7, -27375
    ctx->gpr[7] = ((u32)(s32)(-27375) << 16);

label_80CCC2F4:
    ctx->pc = 0x80CCC2F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC2F4u)) return;
    // 80CCC2F4: addi    r7, r7, -29992
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-29992);

label_80CCC2F8:
    ctx->pc = 0x80CCC2F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC2F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CCC2F8: lfs     f1, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x80CCC2F8u)) return;
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
label_80CCC2FC:
    ctx->pc = 0x80CCC2FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC2FCu)) return;
    // 80CCC2FC: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80CCC2FCu)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_80CCC300:
    ctx->pc = 0x80CCC300u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC300u)) return;
    // 80CCC300: lis     r7, -27375
    ctx->gpr[7] = ((u32)(s32)(-27375) << 16);

label_80CCC304:
    ctx->pc = 0x80CCC304u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC304u)) return;
    // 80CCC304: addi    r7, r7, -29988
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-29988);

label_80CCC308:
    ctx->pc = 0x80CCC308u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC308u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCC308: lfs     f3, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x80CCC308u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
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
label_80CCC30C:
    ctx->pc = 0x80CCC30Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC30Cu)) return;
    // 80CCC30C: bl      0x8050A2E0
    {
            ctx->lr = 0x80CCC310u;
            ctx->pc = 0x8050A2E0u;
            return;
    }

label_80CCC310:
    ctx->pc = 0x80CCC310u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC310u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CCC310: li      r3, 120
    ctx->gpr[3] = (u32)(s32)(120);

label_80CCC314:
    ctx->pc = 0x80CCC314u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC314u)) return;
    // 80CCC314: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80CCC318:
    ctx->pc = 0x80CCC318u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC318u)) return;
    // 80CCC318: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80CCC31C:
    ctx->pc = 0x80CCC31Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC31Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCC31C: lwz     r0, 0(r4)
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
label_80CCC320:
    ctx->pc = 0x80CCC320u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC320u)) return;
    // 80CCC320: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80CCC324:
    ctx->pc = 0x80CCC324u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC324u)) return;
    // 80CCC324: lis     r4, -27375
    ctx->gpr[4] = ((u32)(s32)(-27375) << 16);

label_80CCC328:
    ctx->pc = 0x80CCC328u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC328u)) return;
    // 80CCC328: addi    r4, r4, -28860
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-28860);

label_80CCC32C:
    ctx->pc = 0x80CCC32Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC32Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCC32C: lwzx    r4, r4, r0
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
label_80CCC330:
    ctx->pc = 0x80CCC330u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC330u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCC330: lwz     r4, 4(r4)
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
label_80CCC334:
    ctx->pc = 0x80CCC334u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC334u)) return;
    // 80CCC334: bl      0x8045F608
    {
            ctx->lr = 0x80CCC338u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80CCC338:
    ctx->pc = 0x80CCC338u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC338u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CCC338: bl      0x8045F32C
    {
            ctx->lr = 0x80CCC33Cu;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80CCC33C:
    ctx->pc = 0x80CCC33Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC33Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CCC33C: li      r3, 1333
    ctx->gpr[3] = (u32)(s32)(1333);

label_80CCC340:
    ctx->pc = 0x80CCC340u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC340u)) return;
    // 80CCC340: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CCC344:
    ctx->pc = 0x80CCC344u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC344u)) return;
    // 80CCC344: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80CCC348:
    ctx->pc = 0x80CCC348u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC348u)) return;
    // 80CCC348: li      r6, 10
    ctx->gpr[6] = (u32)(s32)(10);

label_80CCC34C:
    ctx->pc = 0x80CCC34Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC34Cu)) return;
    // 80CCC34C: lis     r7, -27375
    ctx->gpr[7] = ((u32)(s32)(-27375) << 16);

label_80CCC350:
    ctx->pc = 0x80CCC350u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC350u)) return;
    // 80CCC350: addi    r7, r7, -29992
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-29992);

label_80CCC354:
    ctx->pc = 0x80CCC354u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC354u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CCC354: lfs     f1, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x80CCC354u)) return;
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
label_80CCC358:
    ctx->pc = 0x80CCC358u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC358u)) return;
    // 80CCC358: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80CCC358u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_80CCC35C:
    ctx->pc = 0x80CCC35Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC35Cu)) return;
    // 80CCC35C: lis     r7, -27375
    ctx->gpr[7] = ((u32)(s32)(-27375) << 16);

label_80CCC360:
    ctx->pc = 0x80CCC360u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC360u)) return;
    // 80CCC360: addi    r7, r7, -29988
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-29988);

label_80CCC364:
    ctx->pc = 0x80CCC364u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC364u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCC364: lfs     f3, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x80CCC364u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
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
label_80CCC368:
    ctx->pc = 0x80CCC368u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC368u)) return;
    // 80CCC368: bl      0x8050A2E0
    {
            ctx->lr = 0x80CCC36Cu;
            ctx->pc = 0x8050A2E0u;
            return;
    }

label_80CCC36C:
    ctx->pc = 0x80CCC36Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC36Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCC36C: li      r3, 1365
    ctx->gpr[3] = (u32)(s32)(1365);

label_80CCC370:
    ctx->pc = 0x80CCC370u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC370u)) return;
    // 80CCC370: bl      0x8045BFA0
    {
            ctx->lr = 0x80CCC374u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80CCC374:
    ctx->pc = 0x80CCC374u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC374u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CCC374: li      r3, 200
    ctx->gpr[3] = (u32)(s32)(200);

label_80CCC378:
    ctx->pc = 0x80CCC378u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC378u)) return;
    // 80CCC378: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80CCC37C:
    ctx->pc = 0x80CCC37Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC37Cu)) return;
    // 80CCC37C: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80CCC380:
    ctx->pc = 0x80CCC380u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC380u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCC380: lwz     r0, 0(r4)
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
label_80CCC384:
    ctx->pc = 0x80CCC384u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC384u)) return;
    // 80CCC384: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80CCC388:
    ctx->pc = 0x80CCC388u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC388u)) return;
    // 80CCC388: lis     r4, -27375
    ctx->gpr[4] = ((u32)(s32)(-27375) << 16);

label_80CCC38C:
    ctx->pc = 0x80CCC38Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC38Cu)) return;
    // 80CCC38C: addi    r4, r4, -28860
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-28860);

label_80CCC390:
    ctx->pc = 0x80CCC390u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC390u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCC390: lwzx    r4, r4, r0
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
label_80CCC394:
    ctx->pc = 0x80CCC394u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC394u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCC394: lwz     r4, 8(r4)
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
label_80CCC398:
    ctx->pc = 0x80CCC398u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC398u)) return;
    // 80CCC398: bl      0x8045F608
    {
            ctx->lr = 0x80CCC39Cu;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80CCC39C:
    ctx->pc = 0x80CCC39Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC39Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CCC39C: bl      0x8045F32C
    {
            ctx->lr = 0x80CCC3A0u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80CCC3A0:
    ctx->pc = 0x80CCC3A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC3A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CCC3A0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCC3A4:
    ctx->pc = 0x80CCC3A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC3A4u)) return;
    // 80CCC3A4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CCC3A8:
    ctx->pc = 0x80CCC3A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC3A8u)) return;
    // 80CCC3A8: lis     r5, -27375
    ctx->gpr[5] = ((u32)(s32)(-27375) << 16);

label_80CCC3AC:
    ctx->pc = 0x80CCC3ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC3ACu)) return;
    // 80CCC3AC: addi    r5, r5, -29904
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-29904);

label_80CCC3B0:
    ctx->pc = 0x80CCC3B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC3B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCC3B0: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCC3B0u)) return;
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
label_80CCC3B4:
    ctx->pc = 0x80CCC3B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC3B4u)) return;
    // 80CCC3B4: lis     r5, -27375
    ctx->gpr[5] = ((u32)(s32)(-27375) << 16);

label_80CCC3B8:
    ctx->pc = 0x80CCC3B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC3B8u)) return;
    // 80CCC3B8: addi    r5, r5, -29900
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-29900);

label_80CCC3BC:
    ctx->pc = 0x80CCC3BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC3BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCC3BC: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCC3BCu)) return;
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
label_80CCC3C0:
    ctx->pc = 0x80CCC3C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC3C0u)) return;
    // 80CCC3C0: lis     r5, -27375
    ctx->gpr[5] = ((u32)(s32)(-27375) << 16);

label_80CCC3C4:
    ctx->pc = 0x80CCC3C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC3C4u)) return;
    // 80CCC3C4: addi    r5, r5, -29896
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-29896);

label_80CCC3C8:
    ctx->pc = 0x80CCC3C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC3C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCC3C8: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCC3C8u)) return;
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
label_80CCC3CC:
    ctx->pc = 0x80CCC3CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC3CCu)) return;
    // 80CCC3CC: bl      0x8045C750
    {
            ctx->lr = 0x80CCC3D0u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80CCC3D0:
    ctx->pc = 0x80CCC3D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC3D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80CCC3D0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCC3D4:
    ctx->pc = 0x80CCC3D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC3D4u)) return;
    // 80CCC3D4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80CCC3D8:
    ctx->pc = 0x80CCC3D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC3D8u)) return;
    // 80CCC3D8: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80CCC3DC:
    ctx->pc = 0x80CCC3DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC3DCu)) return;
    // 80CCC3DC: addi    r5, r6, -2613
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-2613);

label_80CCC3E0:
    ctx->pc = 0x80CCC3E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC3E0u)) return;
    // 80CCC3E0: addi    r6, r6, -4717
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-4717);

label_80CCC3E4:
    ctx->pc = 0x80CCC3E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC3E4u)) return;
    // 80CCC3E4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80CCC3E8:
    ctx->pc = 0x80CCC3E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC3E8u)) return;
    // 80CCC3E8: bl      0x8045C7B4
    {
            ctx->lr = 0x80CCC3ECu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80CCC3EC:
    ctx->pc = 0x80CCC3ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC3ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CCC3EC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCC3F0:
    ctx->pc = 0x80CCC3F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC3F0u)) return;
    // 80CCC3F0: li      r4, 120
    ctx->gpr[4] = (u32)(s32)(120);

label_80CCC3F4:
    ctx->pc = 0x80CCC3F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC3F4u)) return;
    // 80CCC3F4: lis     r5, -27375
    ctx->gpr[5] = ((u32)(s32)(-27375) << 16);

label_80CCC3F8:
    ctx->pc = 0x80CCC3F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC3F8u)) return;
    // 80CCC3F8: addi    r5, r5, -29892
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-29892);

label_80CCC3FC:
    ctx->pc = 0x80CCC3FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC3FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCC3FC: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCC3FCu)) return;
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
label_80CCC400:
    ctx->pc = 0x80CCC400u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC400u)) return;
    // 80CCC400: lis     r5, -27375
    ctx->gpr[5] = ((u32)(s32)(-27375) << 16);

label_80CCC404:
    ctx->pc = 0x80CCC404u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC404u)) return;
    // 80CCC404: addi    r5, r5, -29888
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-29888);

label_80CCC408:
    ctx->pc = 0x80CCC408u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC408u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCC408: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCC408u)) return;
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
label_80CCC40C:
    ctx->pc = 0x80CCC40Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC40Cu)) return;
    // 80CCC40C: lis     r5, -27375
    ctx->gpr[5] = ((u32)(s32)(-27375) << 16);

label_80CCC410:
    ctx->pc = 0x80CCC410u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC410u)) return;
    // 80CCC410: addi    r5, r5, -29884
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-29884);

label_80CCC414:
    ctx->pc = 0x80CCC414u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC414u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCC414: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCC414u)) return;
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
label_80CCC418:
    ctx->pc = 0x80CCC418u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC418u)) return;
    // 80CCC418: bl      0x8045C750
    {
            ctx->lr = 0x80CCC41Cu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80CCC41C:
    ctx->pc = 0x80CCC41Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC41Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCC41C: li      r3, 1366
    ctx->gpr[3] = (u32)(s32)(1366);

label_80CCC420:
    ctx->pc = 0x80CCC420u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC420u)) return;
    // 80CCC420: bl      0x8045BFA0
    {
            ctx->lr = 0x80CCC424u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80CCC424:
    ctx->pc = 0x80CCC424u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC424u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCC424: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_80CCC428:
    ctx->pc = 0x80CCC428u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC428u)) return;
    // 80CCC428: bl      0x8045F7C8
    {
            ctx->lr = 0x80CCC42Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CCC42C:
    ctx->pc = 0x80CCC42Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC42Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CCC42C: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80CCC430:
    ctx->pc = 0x80CCC430u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC430u)) return;
    // 80CCC430: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80CCC434:
    ctx->pc = 0x80CCC434u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC434u)) return;
    // 80CCC434: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80CCC438:
    ctx->pc = 0x80CCC438u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC438u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCC438: lwz     r0, 0(r4)
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
label_80CCC43C:
    ctx->pc = 0x80CCC43Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC43Cu)) return;
    // 80CCC43C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80CCC440:
    ctx->pc = 0x80CCC440u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC440u)) return;
    // 80CCC440: lis     r4, -27375
    ctx->gpr[4] = ((u32)(s32)(-27375) << 16);

label_80CCC444:
    ctx->pc = 0x80CCC444u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC444u)) return;
    // 80CCC444: addi    r4, r4, -28860
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-28860);

label_80CCC448:
    ctx->pc = 0x80CCC448u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC448u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCC448: lwzx    r4, r4, r0
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
label_80CCC44C:
    ctx->pc = 0x80CCC44Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC44Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCC44C: lwz     r4, 12(r4)
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
label_80CCC450:
    ctx->pc = 0x80CCC450u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC450u)) return;
    // 80CCC450: bl      0x8045F608
    {
            ctx->lr = 0x80CCC454u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80CCC454:
    ctx->pc = 0x80CCC454u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC454u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CCC454: bl      0x8045F32C
    {
            ctx->lr = 0x80CCC458u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80CCC458:
    ctx->pc = 0x80CCC458u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC458u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCC458: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80CCC45C:
    ctx->pc = 0x80CCC45Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC45Cu)) return;
    // 80CCC45C: bl      0x8045F7C8
    {
            ctx->lr = 0x80CCC460u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80CCC460:
    ctx->pc = 0x80CCC460u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC460u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CCC460: b       0x80CCC4B0
    {
            goto label_80CCC4B0;
    }

label_80CCC464:
    ctx->pc = 0x80CCC464u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC464u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CCC464: bl      0x805097D8
    {
            ctx->lr = 0x80CCC468u;
            ctx->pc = 0x805097D8u;
            return;
    }

label_80CCC468:
    ctx->pc = 0x80CCC468u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC468u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CCC468: bl      0x80CCCB18
    {
            ctx->lr = 0x80CCC46Cu;
            goto label_80CCCB18;
    }

label_80CCC46C:
    ctx->pc = 0x80CCC46Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC46Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80CCC46C: lis     r3, -27375
    ctx->gpr[3] = ((u32)(s32)(-27375) << 16);

label_80CCC470:
    ctx->pc = 0x80CCC470u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC470u)) return;
    // 80CCC470: addi    r3, r3, -7804
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-7804);

label_80CCC474:
    ctx->pc = 0x80CCC474u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC474u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCC474: lwz     r3, 0(r3)
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
label_80CCC478:
    ctx->pc = 0x80CCC478u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC478u)) return;
    // 80CCC478: cmplwi  r3, 0x0000
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

label_80CCC47C:
    ctx->pc = 0x80CCC47Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC47Cu)) return;
    // 80CCC47C: bc    12, 2, 0x80CCC494
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CCC494;
        }
    }

label_80CCC480:
    ctx->pc = 0x80CCC480u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC480u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CCC480: bl      0x8050F9E0
    {
            ctx->lr = 0x80CCC484u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80CCC484:
    ctx->pc = 0x80CCC484u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC484u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80CCC484: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80CCC488:
    ctx->pc = 0x80CCC488u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC488u)) return;
    // 80CCC488: lis     r3, -27375
    ctx->gpr[3] = ((u32)(s32)(-27375) << 16);

label_80CCC48C:
    ctx->pc = 0x80CCC48Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC48Cu)) return;
    // 80CCC48C: addi    r3, r3, -7804
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-7804);

label_80CCC490:
    ctx->pc = 0x80CCC490u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC490u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CCC490: stw     r0, 0(r3)
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
label_80CCC494:
    ctx->pc = 0x80CCC494u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC494u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCC494: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCC498:
    ctx->pc = 0x80CCC498u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC498u)) return;
    // 80CCC498: bl      0x8045EC10
    {
            ctx->lr = 0x80CCC49Cu;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80CCC49C:
    ctx->pc = 0x80CCC49Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC49Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CCC49C: lis     r3, -27375
    ctx->gpr[3] = ((u32)(s32)(-27375) << 16);

label_80CCC4A0:
    ctx->pc = 0x80CCC4A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC4A0u)) return;
    // 80CCC4A0: addi    r3, r3, -7808
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-7808);

label_80CCC4A4:
    ctx->pc = 0x80CCC4A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC4A4u)) return;
    // 80CCC4A4: bl      0x8045F070
    {
            ctx->lr = 0x80CCC4A8u;
            ctx->pc = 0x8045F070u;
            return;
    }

label_80CCC4A8:
    ctx->pc = 0x80CCC4A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC4A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CCC4A8: bl      0x8045DE34
    {
            ctx->lr = 0x80CCC4ACu;
            ctx->pc = 0x8045DE34u;
            return;
    }

label_80CCC4AC:
    ctx->pc = 0x80CCC4ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC4ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CCC4AC: bl      0x80460A80
    {
            ctx->lr = 0x80CCC4B0u;
            ctx->pc = 0x80460A80u;
            return;
    }

label_80CCC4B0:
    ctx->pc = 0x80CCC4B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC4B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CCC4B0: psq_l   f31, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80CCC4B0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80CCC4B0u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCC4B4:
    ctx->pc = 0x80CCC4B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC4B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCC4B4: lfd     f31, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CCC4B4u)) return;
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
label_80CCC4B8:
    ctx->pc = 0x80CCC4B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC4B8u)) return;
    // 80CCC4B8: addi    r11, r1, 32
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(32);

label_80CCC4BC:
    ctx->pc = 0x80CCC4BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC4BCu)) return;
    // 80CCC4BC: bl      0x80006E20
    {
            ctx->lr = 0x80CCC4C0u;
            ctx->pc = 0x80006E20u;
            return;
    }

label_80CCC4C0:
    ctx->pc = 0x80CCC4C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC4C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCC4C0: lwz     r0, 52(r1)
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
label_80CCC4C4:
    ctx->pc = 0x80CCC4C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CCC4C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCC4C4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCC4C8:
    ctx->pc = 0x80CCC4C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC4C8u)) return;
    // 80CCC4C8: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_80CCC4CC:
    ctx->pc = 0x80CCC4CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC4CCu)) return;
    // 80CCC4CC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CCB8E0;
        }
    }

label_80CCC4D0:
    ctx->pc = 0x80CCC4D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC4D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCC4D0: stwu     r1, -64(r1)
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
label_80CCC4D4:
    ctx->pc = 0x80CCC4D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC4D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CCC4D4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCC4D8:
    ctx->pc = 0x80CCC4D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC4D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCC4D8: stw     r0, 68(r1)
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
label_80CCC4DC:
    ctx->pc = 0x80CCC4DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC4DCu)) return;
    // 80CCC4DC: addi    r11, r1, 64
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(64);

label_80CCC4E0:
    ctx->pc = 0x80CCC4E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC4E0u)) return;
    // 80CCC4E0: bl      0x80006DD4
    {
            ctx->lr = 0x80CCC4E4u;
            ctx->pc = 0x80006DD4u;
            return;
    }

label_80CCC4E4:
    ctx->pc = 0x80CCC4E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 29u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC4E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 29u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80CCC4E4: lwz     r27, 32(r3)
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
label_80CCC4E8:
    ctx->pc = 0x80CCC4E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC4E8u)) return;
    // 80CCC4E8: lis     r3, -27375
    ctx->gpr[3] = ((u32)(s32)(-27375) << 16);

label_80CCC4EC:
    ctx->pc = 0x80CCC4ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC4ECu)) return;
    // 80CCC4EC: addi    r3, r3, -29880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-29880);

label_80CCC4F0:
    ctx->pc = 0x80CCC4F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC4F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80CCC4F0: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CCC4F0u)) return;
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
label_80CCC4F4:
    ctx->pc = 0x80CCC4F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC4F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80CCC4F4: lfs     f0, 44(r27)
    if (!ppc_fp_available_inline(ctx, 0x80CCC4F4u)) return;
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
label_80CCC4F8:
    ctx->pc = 0x80CCC4F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC4F8u)) return;
    // 80CCC4F8: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80CCC4F8u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80CCC4FC:
    ctx->pc = 0x80CCC4FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC4FCu)) return;
    // 80CCC4FC: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80CCC4FCu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80CCC500:
    ctx->pc = 0x80CCC500u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC500u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80CCC500: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CCC500u)) return;
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
label_80CCC504:
    ctx->pc = 0x80CCC504u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC504u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80CCC504: lwz     r31, 12(r1)
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
label_80CCC508:
    ctx->pc = 0x80CCC508u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC508u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80CCC508: lfs     f0, 32(r27)
    if (!ppc_fp_available_inline(ctx, 0x80CCC508u)) return;
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
label_80CCC50C:
    ctx->pc = 0x80CCC50Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC50Cu)) return;
    // 80CCC50C: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80CCC50Cu)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80CCC510:
    ctx->pc = 0x80CCC510u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC510u)) return;
    // 80CCC510: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80CCC510u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80CCC514:
    ctx->pc = 0x80CCC514u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC514u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80CCC514: stfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CCC514u)) return;
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
label_80CCC518:
    ctx->pc = 0x80CCC518u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC518u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80CCC518: lwz     r30, 20(r1)
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
label_80CCC51C:
    ctx->pc = 0x80CCC51Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC51Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80CCC51C: lfs     f0, 36(r27)
    if (!ppc_fp_available_inline(ctx, 0x80CCC51Cu)) return;
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
label_80CCC520:
    ctx->pc = 0x80CCC520u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC520u)) return;
    // 80CCC520: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80CCC520u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80CCC524:
    ctx->pc = 0x80CCC524u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC524u)) return;
    // 80CCC524: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80CCC524u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80CCC528:
    ctx->pc = 0x80CCC528u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC528u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CCC528: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CCC528u)) return;
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
label_80CCC52C:
    ctx->pc = 0x80CCC52Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC52Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CCC52C: lwz     r29, 28(r1)
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
label_80CCC530:
    ctx->pc = 0x80CCC530u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC530u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CCC530: lfs     f0, 40(r27)
    if (!ppc_fp_available_inline(ctx, 0x80CCC530u)) return;
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
label_80CCC534:
    ctx->pc = 0x80CCC534u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC534u)) return;
    // 80CCC534: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80CCC534u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80CCC538:
    ctx->pc = 0x80CCC538u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC538u)) return;
    // 80CCC538: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80CCC538u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80CCC53C:
    ctx->pc = 0x80CCC53Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC53Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCC53C: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CCC53Cu)) return;
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
label_80CCC540:
    ctx->pc = 0x80CCC540u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC540u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CCC540: lwz     r28, 36(r1)
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
label_80CCC544:
    ctx->pc = 0x80CCC544u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC544u)) return;
    // 80CCC544: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80CCC548:
    ctx->pc = 0x80CCC548u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC548u)) return;
    // 80CCC548: addi    r3, r3, 4120
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4120);

label_80CCC54C:
    ctx->pc = 0x80CCC54Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC54Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCC54C: lwz     r0, 0(r3)
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
label_80CCC550:
    ctx->pc = 0x80CCC550u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC550u)) return;
    // 80CCC550: cmpwi   r0, 0
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

label_80CCC554:
    ctx->pc = 0x80CCC554u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC554u)) return;
    // 80CCC554: bc    4, 2, 0x80CCC60C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CCC60C;
        }
    }

label_80CCC558:
    ctx->pc = 0x80CCC558u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC558u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CCC558: rlwinm r0, r31, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_80CCC55C:
    ctx->pc = 0x80CCC55Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC55Cu)) return;
    // 80CCC55C: cmplwi  r0, 0x0000
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

label_80CCC560:
    ctx->pc = 0x80CCC560u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC560u)) return;
    // 80CCC560: bc    12, 2, 0x80CCC60C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CCC60C;
        }
    }

label_80CCC564:
    ctx->pc = 0x80CCC564u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC564u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CCC564: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCC568:
    ctx->pc = 0x80CCC568u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC568u)) return;
    // 80CCC568: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_80CCC56C:
    ctx->pc = 0x80CCC56Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC56Cu)) return;
    // 80CCC56C: bl      0x8060F4F8
    {
            ctx->lr = 0x80CCC570u;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80CCC570:
    ctx->pc = 0x80CCC570u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC570u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CCC570: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CCC574:
    ctx->pc = 0x80CCC574u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC574u)) return;
    // 80CCC574: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80CCC578:
    ctx->pc = 0x80CCC578u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC578u)) return;
    // 80CCC578: bl      0x8060F4F8
    {
            ctx->lr = 0x80CCC57Cu;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80CCC57C:
    ctx->pc = 0x80CCC57Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC57Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCC57C: lfs     f5, 52(r27)
    if (!ppc_fp_available_inline(ctx, 0x80CCC57Cu)) return;
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
label_80CCC580:
    ctx->pc = 0x80CCC580u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC580u)) return;
    // 80CCC580: lis     r3, -27375
    ctx->gpr[3] = ((u32)(s32)(-27375) << 16);

label_80CCC584:
    ctx->pc = 0x80CCC584u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC584u)) return;
    // 80CCC584: addi    r3, r3, -29872
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-29872);

label_80CCC588:
    ctx->pc = 0x80CCC588u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC588u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CCC588: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CCC588u)) return;
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
label_80CCC58C:
    ctx->pc = 0x80CCC58Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC58Cu)) return;
    // 80CCC58C: fcmpo   cr0, f5, f0
    if (!ppc_fp_available_inline(ctx, 0x80CCC58Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[5], ctx->fpr[0], true);

label_80CCC590:
    ctx->pc = 0x80CCC590u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC590u)) return;
    // 80CCC590: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80CCC594:
    ctx->pc = 0x80CCC594u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC594u)) return;
    // 80CCC594: bc    4, 2, 0x80CCC5A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CCC5A8;
        }
    }

label_80CCC598:
    ctx->pc = 0x80CCC598u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC598u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80CCC598: lis     r3, -27375
    ctx->gpr[3] = ((u32)(s32)(-27375) << 16);

label_80CCC59C:
    ctx->pc = 0x80CCC59Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC59Cu)) return;
    // 80CCC59C: addi    r3, r3, -29876
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-29876);

label_80CCC5A0:
    ctx->pc = 0x80CCC5A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC5A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCC5A0: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CCC5A0u)) return;
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
label_80CCC5A4:
    ctx->pc = 0x80CCC5A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC5A4u)) return;
    // 80CCC5A4: fadds   f5, f5, f0
    if (!ppc_fp_available_inline(ctx, 0x80CCC5A4u)) return;
    ppc_fadds(ctx, 5, 5, 0);

label_80CCC5A8:
    ctx->pc = 0x80CCC5A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC5A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CCC5A8: rlwinm r0, r31, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_80CCC5AC:
    ctx->pc = 0x80CCC5ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC5ACu)) return;
    // 80CCC5AC: cmplwi  r0, 0x00FF
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

label_80CCC5B0:
    ctx->pc = 0x80CCC5B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC5B0u)) return;
    // 80CCC5B0: bc    4, 1, 0x80CCC5B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CCC5B8;
        }
    }

label_80CCC5B4:
    ctx->pc = 0x80CCC5B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC5B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CCC5B4: li      r31, 255
    ctx->gpr[31] = (u32)(s32)(255);

label_80CCC5B8:
    ctx->pc = 0x80CCC5B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 21u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC5B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 21u : 1u;
    // 80CCC5B8: lis     r3, -27375
    ctx->gpr[3] = ((u32)(s32)(-27375) << 16);

label_80CCC5BC:
    ctx->pc = 0x80CCC5BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC5BCu)) return;
    // 80CCC5BC: addi    r3, r3, -29868
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-29868);

label_80CCC5C0:
    ctx->pc = 0x80CCC5C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC5C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80CCC5C0: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CCC5C0u)) return;
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
label_80CCC5C4:
    ctx->pc = 0x80CCC5C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC5C4u)) return;
    // 80CCC5C4: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80CCC5C4u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_80CCC5C8:
    ctx->pc = 0x80CCC5C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC5C8u)) return;
    // 80CCC5C8: lis     r3, -27375
    ctx->gpr[3] = ((u32)(s32)(-27375) << 16);

label_80CCC5CC:
    ctx->pc = 0x80CCC5CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC5CCu)) return;
    // 80CCC5CC: addi    r3, r3, -29864
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-29864);

label_80CCC5D0:
    ctx->pc = 0x80CCC5D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC5D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80CCC5D0: lfs     f3, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CCC5D0u)) return;
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
label_80CCC5D4:
    ctx->pc = 0x80CCC5D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC5D4u)) return;
    // 80CCC5D4: lis     r3, -27375
    ctx->gpr[3] = ((u32)(s32)(-27375) << 16);

label_80CCC5D8:
    ctx->pc = 0x80CCC5D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC5D8u)) return;
    // 80CCC5D8: addi    r3, r3, -29860
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-29860);

label_80CCC5DC:
    ctx->pc = 0x80CCC5DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC5DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CCC5DC: lfs     f4, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CCC5DCu)) return;
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
label_80CCC5E0:
    ctx->pc = 0x80CCC5E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC5E0u)) return;
    // 80CCC5E0: rlwinm r5, r28, 0, 24, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[28], 0u) & 0x000000FFu;
    }

label_80CCC5E4:
    ctx->pc = 0x80CCC5E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC5E4u)) return;
    // 80CCC5E4: rlwinm r0, r29, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[29], 0u) & 0x000000FFu;
    }

label_80CCC5E8:
    ctx->pc = 0x80CCC5E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC5E8u)) return;
    // 80CCC5E8: rlwinm r4, r0, 8, 0, 23
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 8u) & 0xFFFFFF00u;
    }

label_80CCC5EC:
    ctx->pc = 0x80CCC5ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC5ECu)) return;
    // 80CCC5EC: rlwinm r0, r31, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_80CCC5F0:
    ctx->pc = 0x80CCC5F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC5F0u)) return;
    // 80CCC5F0: rlwinm r3, r0, 24, 0, 7
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 24u) & 0xFF000000u;
    }

label_80CCC5F4:
    ctx->pc = 0x80CCC5F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC5F4u)) return;
    // 80CCC5F4: rlwinm r0, r30, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0x000000FFu;
    }

label_80CCC5F8:
    ctx->pc = 0x80CCC5F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC5F8u)) return;
    // 80CCC5F8: rlwinm r0, r0, 16, 0, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 16u) & 0xFFFF0000u;
    }

label_80CCC5FC:
    ctx->pc = 0x80CCC5FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC5FCu)) return;
    // 80CCC5FC: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80CCC600:
    ctx->pc = 0x80CCC600u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC600u)) return;
    // 80CCC600: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_80CCC604:
    ctx->pc = 0x80CCC604u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC604u)) return;
    // 80CCC604: or   r3, r5, r0
    {
        ctx->gpr[3] = ctx->gpr[5] | ctx->gpr[0];
    }

label_80CCC608:
    ctx->pc = 0x80CCC608u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC608u)) return;
    // 80CCC608: bl      0x80CCC7C8
    {
            ctx->lr = 0x80CCC60Cu;
            goto label_80CCC7C8;
    }

label_80CCC60C:
    ctx->pc = 0x80CCC60Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC60Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCC60C: addi    r11, r1, 64
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(64);

label_80CCC610:
    ctx->pc = 0x80CCC610u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC610u)) return;
    // 80CCC610: bl      0x80006E20
    {
            ctx->lr = 0x80CCC614u;
            ctx->pc = 0x80006E20u;
            return;
    }

label_80CCC614:
    ctx->pc = 0x80CCC614u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC614u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCC614: lwz     r0, 68(r1)
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
label_80CCC618:
    ctx->pc = 0x80CCC618u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CCC618u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCC618: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCC61C:
    ctx->pc = 0x80CCC61Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC61Cu)) return;
    // 80CCC61C: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_80CCC620:
    ctx->pc = 0x80CCC620u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC620u)) return;
    // 80CCC620: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CCB8E0;
        }
    }

label_80CCC624:
    ctx->pc = 0x80CCC624u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC624u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CCC624: stwu     r1, -16(r1)
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
label_80CCC628:
    ctx->pc = 0x80CCC628u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC628u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CCC628: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCC62C:
    ctx->pc = 0x80CCC62Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC62Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CCC62C: stw     r0, 20(r1)
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
label_80CCC630:
    ctx->pc = 0x80CCC630u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC630u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CCC630: lwz     r5, 32(r3)
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
label_80CCC634:
    ctx->pc = 0x80CCC634u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC634u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCC634: lfs     f1, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCC634u)) return;
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
label_80CCC638:
    ctx->pc = 0x80CCC638u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC638u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCC638: lfs     f0, 48(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCC638u)) return;
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
label_80CCC63C:
    ctx->pc = 0x80CCC63Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC63Cu)) return;
    // 80CCC63C: fadds   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80CCC63Cu)) return;
    ppc_fadds(ctx, 1, 1, 0);

label_80CCC640:
    ctx->pc = 0x80CCC640u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC640u)) return;
    // 80CCC640: lis     r4, -27375
    ctx->gpr[4] = ((u32)(s32)(-27375) << 16);

label_80CCC644:
    ctx->pc = 0x80CCC644u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC644u)) return;
    // 80CCC644: addi    r4, r4, -29856
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-29856);

label_80CCC648:
    ctx->pc = 0x80CCC648u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC648u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCC648: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CCC648u)) return;
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
label_80CCC64C:
    ctx->pc = 0x80CCC64Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC64Cu)) return;
    // 80CCC64C: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80CCC64Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80CCC650:
    ctx->pc = 0x80CCC650u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC650u)) return;
    // 80CCC650: bc    4, 1, 0x80CCC65C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CCC65C;
        }
    }

label_80CCC654:
    ctx->pc = 0x80CCC654u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC654u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCC654: fmr    f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80CCC654u)) return;
    ctx->fpr[1] = ctx->fpr[0];

label_80CCC658:
    ctx->pc = 0x80CCC658u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC658u)) return;
    // 80CCC658: b       0x80CCC674
    {
            goto label_80CCC674;
    }

label_80CCC65C:
    ctx->pc = 0x80CCC65Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC65Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80CCC65C: lis     r4, -27375
    ctx->gpr[4] = ((u32)(s32)(-27375) << 16);

label_80CCC660:
    ctx->pc = 0x80CCC660u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC660u)) return;
    // 80CCC660: addi    r4, r4, -29868
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-29868);

label_80CCC664:
    ctx->pc = 0x80CCC664u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC664u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCC664: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CCC664u)) return;
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
label_80CCC668:
    ctx->pc = 0x80CCC668u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC668u)) return;
    // 80CCC668: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80CCC668u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80CCC66C:
    ctx->pc = 0x80CCC66Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC66Cu)) return;
    // 80CCC66C: bc    4, 0, 0x80CCC674
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CCC674;
        }
    }

label_80CCC670:
    ctx->pc = 0x80CCC670u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC670u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CCC670: fmr    f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80CCC670u)) return;
    ctx->fpr[1] = ctx->fpr[0];

label_80CCC674:
    ctx->pc = 0x80CCC674u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC674u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCC674: stfs     f1, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCC674u)) return;
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
label_80CCC678:
    ctx->pc = 0x80CCC678u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC678u)) return;
    // 80CCC678: bl      0x80CCC4D0
    {
            ctx->lr = 0x80CCC67Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80CCC4D0u;
                return;
            }
            goto label_80CCC4D0;
    }

label_80CCC67C:
    ctx->pc = 0x80CCC67Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC67Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCC67C: lwz     r0, 20(r1)
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
label_80CCC680:
    ctx->pc = 0x80CCC680u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CCC680u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCC680: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCC684:
    ctx->pc = 0x80CCC684u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC684u)) return;
    // 80CCC684: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CCC688:
    ctx->pc = 0x80CCC688u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC688u)) return;
    // 80CCC688: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CCB8E0;
        }
    }

label_80CCC68C:
    ctx->pc = 0x80CCC68Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC68Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CCC68C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CCB8E0;
        }
    }

label_80CCC690:
    ctx->pc = 0x80CCC690u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC690u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80CCC690: stwu     r1, -16(r1)
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
label_80CCC694:
    ctx->pc = 0x80CCC694u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC694u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CCC694: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCC698:
    ctx->pc = 0x80CCC698u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC698u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CCC698: stw     r0, 20(r1)
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
label_80CCC69C:
    ctx->pc = 0x80CCC69Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC69Cu)) return;
    // 80CCC69C: lis     r4, -32563
    ctx->gpr[4] = ((u32)(s32)(-32563) << 16);

label_80CCC6A0:
    ctx->pc = 0x80CCC6A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC6A0u)) return;
    // 80CCC6A0: addi    r0, r4, -14812
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-14812);

label_80CCC6A4:
    ctx->pc = 0x80CCC6A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC6A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCC6A4: stw     r0, 16(r3)
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
label_80CCC6A8:
    ctx->pc = 0x80CCC6A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC6A8u)) return;
    // 80CCC6A8: lis     r4, -32563
    ctx->gpr[4] = ((u32)(s32)(-32563) << 16);

label_80CCC6AC:
    ctx->pc = 0x80CCC6ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC6ACu)) return;
    // 80CCC6AC: addi    r0, r4, -15152
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-15152);

label_80CCC6B0:
    ctx->pc = 0x80CCC6B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC6B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCC6B0: stw     r0, 20(r3)
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
label_80CCC6B4:
    ctx->pc = 0x80CCC6B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC6B4u)) return;
    // 80CCC6B4: lis     r4, -32563
    ctx->gpr[4] = ((u32)(s32)(-32563) << 16);

label_80CCC6B8:
    ctx->pc = 0x80CCC6B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC6B8u)) return;
    // 80CCC6B8: addi    r0, r4, -14708
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-14708);

label_80CCC6BC:
    ctx->pc = 0x80CCC6BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC6BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCC6BC: stw     r0, 24(r3)
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
label_80CCC6C0:
    ctx->pc = 0x80CCC6C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC6C0u)) return;
    // 80CCC6C0: bl      0x80CCC624
    {
            ctx->lr = 0x80CCC6C4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80CCC624u;
                return;
            }
            goto label_80CCC624;
    }

label_80CCC6C4:
    ctx->pc = 0x80CCC6C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC6C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCC6C4: lwz     r0, 20(r1)
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
label_80CCC6C8:
    ctx->pc = 0x80CCC6C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CCC6C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCC6C8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCC6CC:
    ctx->pc = 0x80CCC6CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC6CCu)) return;
    // 80CCC6CC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CCC6D0:
    ctx->pc = 0x80CCC6D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC6D0u)) return;
    // 80CCC6D0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CCB8E0;
        }
    }

label_80CCC6D4:
    ctx->pc = 0x80CCC6D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 23u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC6D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 23u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80CCC6D4: stwu     r1, -96(r1)
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
label_80CCC6D8:
    ctx->pc = 0x80CCC6D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC6D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80CCC6D8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCC6DC:
    ctx->pc = 0x80CCC6DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC6DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80CCC6DC: stw     r0, 100(r1)
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
label_80CCC6E0:
    ctx->pc = 0x80CCC6E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC6E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80CCC6E0: stfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CCC6E0u)) return;
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
label_80CCC6E4:
    ctx->pc = 0x80CCC6E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC6E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80CCC6E4: psq_st   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80CCC6E4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80CCC6E4u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCC6E8:
    ctx->pc = 0x80CCC6E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC6E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80CCC6E8: stfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CCC6E8u)) return;
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
label_80CCC6EC:
    ctx->pc = 0x80CCC6ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC6ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80CCC6EC: psq_st   f30, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80CCC6ECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x80CCC6ECu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCC6F0:
    ctx->pc = 0x80CCC6F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC6F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80CCC6F0: stfd     f29, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CCC6F0u)) return;
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
label_80CCC6F4:
    ctx->pc = 0x80CCC6F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC6F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80CCC6F4: psq_st   f29, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80CCC6F4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x80CCC6F4u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCC6F8:
    ctx->pc = 0x80CCC6F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC6F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80CCC6F8: stfd     f28, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CCC6F8u)) return;
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
label_80CCC6FC:
    ctx->pc = 0x80CCC6FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC6FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80CCC6FC: psq_st   f28, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80CCC6FCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x80CCC6FCu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCC700:
    ctx->pc = 0x80CCC700u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC700u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CCC700: stfd     f27, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CCC700u)) return;
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
label_80CCC704:
    ctx->pc = 0x80CCC704u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC704u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CCC704: psq_st   f27, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80CCC704u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_store_inline(ctx, 27u, ea, false, 0u, false, 0x80CCC704u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCC708:
    ctx->pc = 0x80CCC708u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC708u)) return;
    // 80CCC708: fmr    f27, f1
    if (!ppc_fp_available_inline(ctx, 0x80CCC708u)) return;
    ctx->fpr[27] = ctx->fpr[1];

label_80CCC70C:
    ctx->pc = 0x80CCC70Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC70Cu)) return;
    // 80CCC70C: fmr    f28, f2
    if (!ppc_fp_available_inline(ctx, 0x80CCC70Cu)) return;
    ctx->fpr[28] = ctx->fpr[2];

label_80CCC710:
    ctx->pc = 0x80CCC710u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC710u)) return;
    // 80CCC710: fmr    f29, f3
    if (!ppc_fp_available_inline(ctx, 0x80CCC710u)) return;
    ctx->fpr[29] = ctx->fpr[3];

label_80CCC714:
    ctx->pc = 0x80CCC714u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC714u)) return;
    // 80CCC714: fmr    f30, f4
    if (!ppc_fp_available_inline(ctx, 0x80CCC714u)) return;
    ctx->fpr[30] = ctx->fpr[4];

label_80CCC718:
    ctx->pc = 0x80CCC718u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC718u)) return;
    // 80CCC718: fmr    f31, f5
    if (!ppc_fp_available_inline(ctx, 0x80CCC718u)) return;
    ctx->fpr[31] = ctx->fpr[5];

label_80CCC71C:
    ctx->pc = 0x80CCC71Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC71Cu)) return;
    // 80CCC71C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CCC720:
    ctx->pc = 0x80CCC720u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC720u)) return;
    // 80CCC720: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80CCC724:
    ctx->pc = 0x80CCC724u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC724u)) return;
    // 80CCC724: lis     r5, -32563
    ctx->gpr[5] = ((u32)(s32)(-32563) << 16);

label_80CCC728:
    ctx->pc = 0x80CCC728u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC728u)) return;
    // 80CCC728: addi    r5, r5, -14704
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-14704);

label_80CCC72C:
    ctx->pc = 0x80CCC72Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC72Cu)) return;
    // 80CCC72C: bl      0x8050FD60
    {
            ctx->lr = 0x80CCC730u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80CCC730:
    ctx->pc = 0x80CCC730u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 25u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC730u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 25u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80CCC730: lwz     r5, 32(r3)
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
label_80CCC734:
    ctx->pc = 0x80CCC734u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC734u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80CCC734: stfs     f27, 48(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCC734u)) return;
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
label_80CCC738:
    ctx->pc = 0x80CCC738u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC738u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80CCC738: stfs     f28, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCC738u)) return;
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
label_80CCC73C:
    ctx->pc = 0x80CCC73Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC73Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80CCC73C: stfs     f29, 32(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCC73Cu)) return;
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
label_80CCC740:
    ctx->pc = 0x80CCC740u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC740u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80CCC740: stfs     f30, 36(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCC740u)) return;
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
label_80CCC744:
    ctx->pc = 0x80CCC744u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC744u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80CCC744: stfs     f31, 40(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCC744u)) return;
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
label_80CCC748:
    ctx->pc = 0x80CCC748u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC748u)) return;
    // 80CCC748: lis     r4, -27375
    ctx->gpr[4] = ((u32)(s32)(-27375) << 16);

label_80CCC74C:
    ctx->pc = 0x80CCC74Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC74Cu)) return;
    // 80CCC74C: addi    r4, r4, -29872
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-29872);

label_80CCC750:
    ctx->pc = 0x80CCC750u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC750u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80CCC750: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CCC750u)) return;
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
label_80CCC754:
    ctx->pc = 0x80CCC754u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC754u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80CCC754: stfs     f0, 52(r5)
    if (!ppc_fp_available_inline(ctx, 0x80CCC754u)) return;
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
label_80CCC758:
    ctx->pc = 0x80CCC758u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC758u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80CCC758: psq_l   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80CCC758u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80CCC758u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCC75C:
    ctx->pc = 0x80CCC75Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC75Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80CCC75C: lfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CCC75Cu)) return;
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
label_80CCC760:
    ctx->pc = 0x80CCC760u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC760u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80CCC760: psq_l   f30, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80CCC760u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x80CCC760u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCC764:
    ctx->pc = 0x80CCC764u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC764u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CCC764: lfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CCC764u)) return;
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
label_80CCC768:
    ctx->pc = 0x80CCC768u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC768u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CCC768: psq_l   f29, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80CCC768u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x80CCC768u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCC76C:
    ctx->pc = 0x80CCC76Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC76Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CCC76C: lfd     f29, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CCC76Cu)) return;
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
label_80CCC770:
    ctx->pc = 0x80CCC770u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC770u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CCC770: psq_l   f28, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80CCC770u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x80CCC770u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCC774:
    ctx->pc = 0x80CCC774u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC774u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCC774: lfd     f28, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CCC774u)) return;
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
label_80CCC778:
    ctx->pc = 0x80CCC778u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC778u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCC778: psq_l   f27, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80CCC778u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_load_inline(ctx, 27u, ea, false, 0u, false, 0x80CCC778u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCC77C:
    ctx->pc = 0x80CCC77Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC77Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CCC77C: lfd     f27, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CCC77Cu)) return;
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
label_80CCC780:
    ctx->pc = 0x80CCC780u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC780u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCC780: lwz     r0, 100(r1)
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
label_80CCC784:
    ctx->pc = 0x80CCC784u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CCC784u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCC784: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCC788:
    ctx->pc = 0x80CCC788u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC788u)) return;
    // 80CCC788: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_80CCC78C:
    ctx->pc = 0x80CCC78Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC78Cu)) return;
    // 80CCC78C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CCB8E0;
        }
    }

label_80CCC790:
    ctx->pc = 0x80CCC790u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC790u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCC790: lwz     r3, 32(r3)
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
label_80CCC794:
    ctx->pc = 0x80CCC794u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC794u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCC794: stfs     f1, 48(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CCC794u)) return;
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
label_80CCC798:
    ctx->pc = 0x80CCC798u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC798u)) return;
    // 80CCC798: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CCB8E0;
        }
    }

label_80CCC79C:
    ctx->pc = 0x80CCC79Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC79Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCC79C: lwz     r3, 32(r3)
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
label_80CCC7A0:
    ctx->pc = 0x80CCC7A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC7A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCC7A0: stfs     f1, 44(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CCC7A0u)) return;
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
label_80CCC7A4:
    ctx->pc = 0x80CCC7A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC7A4u)) return;
    // 80CCC7A4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CCB8E0;
        }
    }

label_80CCC7A8:
    ctx->pc = 0x80CCC7A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC7A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCC7A8: lwz     r3, 32(r3)
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
label_80CCC7AC:
    ctx->pc = 0x80CCC7ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC7ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CCC7AC: stfs     f1, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CCC7ACu)) return;
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
label_80CCC7B0:
    ctx->pc = 0x80CCC7B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC7B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCC7B0: stfs     f2, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CCC7B0u)) return;
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
label_80CCC7B4:
    ctx->pc = 0x80CCC7B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC7B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCC7B4: stfs     f3, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CCC7B4u)) return;
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
label_80CCC7B8:
    ctx->pc = 0x80CCC7B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC7B8u)) return;
    // 80CCC7B8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CCB8E0;
        }
    }

label_80CCC7BC:
    ctx->pc = 0x80CCC7BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC7BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCC7BC: lwz     r3, 32(r3)
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
label_80CCC7C0:
    ctx->pc = 0x80CCC7C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC7C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCC7C0: stfs     f1, 52(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CCC7C0u)) return;
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
label_80CCC7C4:
    ctx->pc = 0x80CCC7C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC7C4u)) return;
    // 80CCC7C4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CCB8E0;
        }
    }

label_80CCC7C8:
    ctx->pc = 0x80CCC7C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC7C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCC7C8: stwu     r1, -16(r1)
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
label_80CCC7CC:
    ctx->pc = 0x80CCC7CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC7CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CCC7CC: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCC7D0:
    ctx->pc = 0x80CCC7D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC7D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCC7D0: stw     r0, 20(r1)
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
label_80CCC7D4:
    ctx->pc = 0x80CCC7D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC7D4u)) return;
    // 80CCC7D4: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80CCC7D8:
    ctx->pc = 0x80CCC7D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC7D8u)) return;
    // 80CCC7D8: bl      0x80607948
    {
            ctx->lr = 0x80CCC7DCu;
            ctx->pc = 0x80607948u;
            return;
    }

label_80CCC7DC:
    ctx->pc = 0x80CCC7DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC7DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCC7DC: lwz     r0, 20(r1)
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
label_80CCC7E0:
    ctx->pc = 0x80CCC7E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CCC7E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCC7E0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCC7E4:
    ctx->pc = 0x80CCC7E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC7E4u)) return;
    // 80CCC7E4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CCC7E8:
    ctx->pc = 0x80CCC7E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC7E8u)) return;
    // 80CCC7E8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CCB8E0;
        }
    }

label_80CCC7EC:
    ctx->pc = 0x80CCC7ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC7ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CCC7EC: stwu     r1, -16(r1)
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
label_80CCC7F0:
    ctx->pc = 0x80CCC7F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC7F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCC7F0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCC7F4:
    ctx->pc = 0x80CCC7F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC7F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CCC7F4: stw     r0, 20(r1)
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
label_80CCC7F8:
    ctx->pc = 0x80CCC7F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC7F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCC7F8: lwz     r3, 32(r3)
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
label_80CCC7FC:
    ctx->pc = 0x80CCC7FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC7FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCC7FC: lwz     r3, 16(r3)
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
label_80CCC800:
    ctx->pc = 0x80CCC800u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC800u)) return;
    // 80CCC800: bl      0x80509CF0
    {
            ctx->lr = 0x80CCC804u;
            ctx->pc = 0x80509CF0u;
            return;
    }

label_80CCC804:
    ctx->pc = 0x80CCC804u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC804u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCC804: lwz     r0, 20(r1)
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
label_80CCC808:
    ctx->pc = 0x80CCC808u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CCC808u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCC808: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCC80C:
    ctx->pc = 0x80CCC80Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC80Cu)) return;
    // 80CCC80C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CCC810:
    ctx->pc = 0x80CCC810u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC810u)) return;
    // 80CCC810: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CCB8E0;
        }
    }

label_80CCC814:
    ctx->pc = 0x80CCC814u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC814u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CCC814: stwu     r1, -32(r1)
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
label_80CCC818:
    ctx->pc = 0x80CCC818u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC818u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CCC818: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCC81C:
    ctx->pc = 0x80CCC81Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC81Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CCC81C: stw     r0, 36(r1)
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
label_80CCC820:
    ctx->pc = 0x80CCC820u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC820u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCC820: stw     r31, 28(r1)
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
label_80CCC824:
    ctx->pc = 0x80CCC824u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC824u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCC824: stw     r30, 24(r1)
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
label_80CCC828:
    ctx->pc = 0x80CCC828u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC828u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CCC828: stw     r29, 20(r1)
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
label_80CCC82C:
    ctx->pc = 0x80CCC82Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC82Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCC82C: lwz     r31, 32(r3)
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
label_80CCC830:
    ctx->pc = 0x80CCC830u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC830u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CCC830: lwz     r30, 16(r31)
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
label_80CCC834:
    ctx->pc = 0x80CCC834u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC834u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCC834: lwz     r5, 28(r31)
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
label_80CCC838:
    ctx->pc = 0x80CCC838u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC838u)) return;
    // 80CCC838: cmpwi   r5, 0
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

label_80CCC83C:
    ctx->pc = 0x80CCC83Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC83Cu)) return;
    // 80CCC83C: bc    4, 1, 0x80CCC874
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CCC874;
        }
    }

label_80CCC840:
    ctx->pc = 0x80CCC840u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC840u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80CCC840: lwz     r4, 24(r31)
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
label_80CCC844:
    ctx->pc = 0x80CCC844u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC844u)) return;
    // 80CCC844: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80CCC848:
    ctx->pc = 0x80CCC848u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC848u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80CCC848: lwz     r0, 20(r31)
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
label_80CCC84C:
    ctx->pc = 0x80CCC84Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80CCC84Cu)) return;
    // 80CCC84C: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80CCC850:
    ctx->pc = 0x80CCC850u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC850u)) return;
    // 80CCC850: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80CCC854:
    ctx->pc = 0x80CCC854u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80CCC854u)) return;
    // 80CCC854: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80CCC858:
    ctx->pc = 0x80CCC858u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC858u)) return;
    // 80CCC858: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80CCC85C:
    ctx->pc = 0x80CCC85Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC85Cu)) return;
    // 80CCC85C: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80CCC860:
    ctx->pc = 0x80CCC860u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC860u)) return;
    // 80CCC860: bl      0x80509C74
    {
            ctx->lr = 0x80CCC864u;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80CCC864:
    ctx->pc = 0x80CCC864u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC864u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CCC864: stw     r29, 20(r31)
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
label_80CCC868:
    ctx->pc = 0x80CCC868u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC868u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCC868: lwz     r3, 28(r31)
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
label_80CCC86C:
    ctx->pc = 0x80CCC86Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC86Cu)) return;
    // 80CCC86C: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80CCC870:
    ctx->pc = 0x80CCC870u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC870u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CCC870: stw     r0, 28(r31)
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
label_80CCC874:
    ctx->pc = 0x80CCC874u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC874u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCC874: lwz     r5, 40(r31)
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
label_80CCC878:
    ctx->pc = 0x80CCC878u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC878u)) return;
    // 80CCC878: cmpwi   r5, 0
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

label_80CCC87C:
    ctx->pc = 0x80CCC87Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC87Cu)) return;
    // 80CCC87C: bc    4, 1, 0x80CCC8B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CCC8B4;
        }
    }

label_80CCC880:
    ctx->pc = 0x80CCC880u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC880u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80CCC880: lwz     r4, 36(r31)
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
label_80CCC884:
    ctx->pc = 0x80CCC884u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC884u)) return;
    // 80CCC884: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80CCC888:
    ctx->pc = 0x80CCC888u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC888u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80CCC888: lwz     r0, 32(r31)
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
label_80CCC88C:
    ctx->pc = 0x80CCC88Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80CCC88Cu)) return;
    // 80CCC88C: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80CCC890:
    ctx->pc = 0x80CCC890u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC890u)) return;
    // 80CCC890: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80CCC894:
    ctx->pc = 0x80CCC894u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80CCC894u)) return;
    // 80CCC894: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80CCC898:
    ctx->pc = 0x80CCC898u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC898u)) return;
    // 80CCC898: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80CCC89C:
    ctx->pc = 0x80CCC89Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC89Cu)) return;
    // 80CCC89C: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80CCC8A0:
    ctx->pc = 0x80CCC8A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC8A0u)) return;
    // 80CCC8A0: bl      0x80509BF8
    {
            ctx->lr = 0x80CCC8A4u;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80CCC8A4:
    ctx->pc = 0x80CCC8A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC8A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CCC8A4: stw     r29, 32(r31)
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
label_80CCC8A8:
    ctx->pc = 0x80CCC8A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC8A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCC8A8: lwz     r3, 40(r31)
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
label_80CCC8AC:
    ctx->pc = 0x80CCC8ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC8ACu)) return;
    // 80CCC8AC: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80CCC8B0:
    ctx->pc = 0x80CCC8B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC8B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CCC8B0: stw     r0, 40(r31)
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
label_80CCC8B4:
    ctx->pc = 0x80CCC8B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC8B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCC8B4: lwz     r5, 52(r31)
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
label_80CCC8B8:
    ctx->pc = 0x80CCC8B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC8B8u)) return;
    // 80CCC8B8: cmpwi   r5, 0
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

label_80CCC8BC:
    ctx->pc = 0x80CCC8BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC8BCu)) return;
    // 80CCC8BC: bc    4, 1, 0x80CCC8F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CCC8F4;
        }
    }

label_80CCC8C0:
    ctx->pc = 0x80CCC8C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC8C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80CCC8C0: lwz     r4, 48(r31)
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
label_80CCC8C4:
    ctx->pc = 0x80CCC8C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC8C4u)) return;
    // 80CCC8C4: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80CCC8C8:
    ctx->pc = 0x80CCC8C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC8C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80CCC8C8: lwz     r0, 44(r31)
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
label_80CCC8CC:
    ctx->pc = 0x80CCC8CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80CCC8CCu)) return;
    // 80CCC8CC: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80CCC8D0:
    ctx->pc = 0x80CCC8D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC8D0u)) return;
    // 80CCC8D0: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80CCC8D4:
    ctx->pc = 0x80CCC8D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80CCC8D4u)) return;
    // 80CCC8D4: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80CCC8D8:
    ctx->pc = 0x80CCC8D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC8D8u)) return;
    // 80CCC8D8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80CCC8DC:
    ctx->pc = 0x80CCC8DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC8DCu)) return;
    // 80CCC8DC: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80CCC8E0:
    ctx->pc = 0x80CCC8E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC8E0u)) return;
    // 80CCC8E0: bl      0x80509B94
    {
            ctx->lr = 0x80CCC8E4u;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80CCC8E4:
    ctx->pc = 0x80CCC8E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC8E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CCC8E4: stw     r29, 44(r31)
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
label_80CCC8E8:
    ctx->pc = 0x80CCC8E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC8E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCC8E8: lwz     r3, 52(r31)
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
label_80CCC8EC:
    ctx->pc = 0x80CCC8ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC8ECu)) return;
    // 80CCC8EC: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80CCC8F0:
    ctx->pc = 0x80CCC8F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC8F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CCC8F0: stw     r0, 52(r31)
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
label_80CCC8F4:
    ctx->pc = 0x80CCC8F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC8F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCC8F4: lwz     r31, 28(r1)
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
label_80CCC8F8:
    ctx->pc = 0x80CCC8F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC8F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCC8F8: lwz     r30, 24(r1)
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
label_80CCC8FC:
    ctx->pc = 0x80CCC8FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC8FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CCC8FC: lwz     r29, 20(r1)
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
label_80CCC900:
    ctx->pc = 0x80CCC900u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC900u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCC900: lwz     r0, 36(r1)
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
label_80CCC904:
    ctx->pc = 0x80CCC904u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CCC904u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCC904: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCC908:
    ctx->pc = 0x80CCC908u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC908u)) return;
    // 80CCC908: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80CCC90C:
    ctx->pc = 0x80CCC90Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC90Cu)) return;
    // 80CCC90C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CCB8E0;
        }
    }

label_80CCC910:
    ctx->pc = 0x80CCC910u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC910u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CCC910: stwu     r1, -32(r1)
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
label_80CCC914:
    ctx->pc = 0x80CCC914u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC914u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CCC914: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCC918:
    ctx->pc = 0x80CCC918u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC918u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CCC918: stw     r0, 36(r1)
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
label_80CCC91C:
    ctx->pc = 0x80CCC91Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC91Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CCC91C: stw     r31, 28(r1)
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
label_80CCC920:
    ctx->pc = 0x80CCC920u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC920u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCC920: stw     r30, 24(r1)
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
label_80CCC924:
    ctx->pc = 0x80CCC924u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC924u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCC924: stw     r29, 20(r1)
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
label_80CCC928:
    ctx->pc = 0x80CCC928u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC928u)) return;
    // 80CCC928: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80CCC92C:
    ctx->pc = 0x80CCC92Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC92Cu)) return;
    // 80CCC92C: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80CCC930:
    ctx->pc = 0x80CCC930u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC930u)) return;
    // 80CCC930: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CCC934:
    ctx->pc = 0x80CCC934u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC934u)) return;
    // 80CCC934: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80CCC938:
    ctx->pc = 0x80CCC938u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC938u)) return;
    // 80CCC938: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80CCC93C:
    ctx->pc = 0x80CCC93Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC93Cu)) return;
    // 80CCC93C: bl      0x8050FD60
    {
            ctx->lr = 0x80CCC940u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80CCC940:
    ctx->pc = 0x80CCC940u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC940u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CCC940: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80CCC944:
    ctx->pc = 0x80CCC944u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC944u)) return;
    // 80CCC944: cmplwi  r31, 0x0000
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

label_80CCC948:
    ctx->pc = 0x80CCC948u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC948u)) return;
    // 80CCC948: bc    12, 2, 0x80CCC9AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CCC9AC;
        }
    }

label_80CCC94C:
    ctx->pc = 0x80CCC94Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC94Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80CCC94C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80CCC950:
    ctx->pc = 0x80CCC950u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC950u)) return;
    // 80CCC950: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80CCC954:
    ctx->pc = 0x80CCC954u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC954u)) return;
    // 80CCC954: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80CCC958:
    ctx->pc = 0x80CCC958u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC958u)) return;
    // 80CCC958: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80CCC95C:
    ctx->pc = 0x80CCC95Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC95Cu)) return;
    // 80CCC95C: or   r7, r30, r30
    {
        ctx->gpr[7] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80CCC960:
    ctx->pc = 0x80CCC960u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC960u)) return;
    // 80CCC960: bl      0x8050A0D4
    {
            ctx->lr = 0x80CCC964u;
            ctx->pc = 0x8050A0D4u;
            return;
    }

label_80CCC964:
    ctx->pc = 0x80CCC964u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 18u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC964u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 18u : 1u;
    // 80CCC964: lis     r3, -32563
    ctx->gpr[3] = ((u32)(s32)(-32563) << 16);

label_80CCC968:
    ctx->pc = 0x80CCC968u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC968u)) return;
    // 80CCC968: addi    r0, r3, -14316
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-14316);

label_80CCC96C:
    ctx->pc = 0x80CCC96Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC96Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80CCC96C: stw     r0, 16(r31)
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
label_80CCC970:
    ctx->pc = 0x80CCC970u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC970u)) return;
    // 80CCC970: lis     r3, -32563
    ctx->gpr[3] = ((u32)(s32)(-32563) << 16);

label_80CCC974:
    ctx->pc = 0x80CCC974u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC974u)) return;
    // 80CCC974: addi    r0, r3, -14356
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-14356);

label_80CCC978:
    ctx->pc = 0x80CCC978u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC978u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80CCC978: stw     r0, 24(r31)
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
label_80CCC97C:
    ctx->pc = 0x80CCC97Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC97Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CCC97C: lwz     r3, 32(r31)
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
label_80CCC980:
    ctx->pc = 0x80CCC980u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC980u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CCC980: stw     r31, 16(r3)
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
label_80CCC984:
    ctx->pc = 0x80CCC984u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC984u)) return;
    // 80CCC984: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80CCC988:
    ctx->pc = 0x80CCC988u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC988u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CCC988: stw     r0, 20(r3)
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
label_80CCC98C:
    ctx->pc = 0x80CCC98Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC98Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCC98C: stw     r0, 24(r3)
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
label_80CCC990:
    ctx->pc = 0x80CCC990u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC990u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCC990: stw     r0, 28(r3)
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
label_80CCC994:
    ctx->pc = 0x80CCC994u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC994u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CCC994: stw     r0, 32(r3)
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
label_80CCC998:
    ctx->pc = 0x80CCC998u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC998u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCC998: stw     r0, 36(r3)
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
label_80CCC99C:
    ctx->pc = 0x80CCC99Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC99Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CCC99C: stw     r0, 40(r3)
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
label_80CCC9A0:
    ctx->pc = 0x80CCC9A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC9A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCC9A0: stw     r0, 44(r3)
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
label_80CCC9A4:
    ctx->pc = 0x80CCC9A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC9A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCC9A4: stw     r0, 48(r3)
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
label_80CCC9A8:
    ctx->pc = 0x80CCC9A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC9A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CCC9A8: stw     r0, 52(r3)
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
label_80CCC9AC:
    ctx->pc = 0x80CCC9ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC9ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80CCC9AC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80CCC9B0:
    ctx->pc = 0x80CCC9B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC9B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCC9B0: lwz     r31, 28(r1)
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
label_80CCC9B4:
    ctx->pc = 0x80CCC9B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC9B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCC9B4: lwz     r30, 24(r1)
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
label_80CCC9B8:
    ctx->pc = 0x80CCC9B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC9B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CCC9B8: lwz     r29, 20(r1)
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
label_80CCC9BC:
    ctx->pc = 0x80CCC9BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC9BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCC9BC: lwz     r0, 36(r1)
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
label_80CCC9C0:
    ctx->pc = 0x80CCC9C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CCC9C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCC9C0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCC9C4:
    ctx->pc = 0x80CCC9C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC9C4u)) return;
    // 80CCC9C4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80CCC9C8:
    ctx->pc = 0x80CCC9C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC9C8u)) return;
    // 80CCC9C8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CCB8E0;
        }
    }

label_80CCC9CC:
    ctx->pc = 0x80CCC9CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC9CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CCC9CC: stwu     r1, -16(r1)
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
label_80CCC9D0:
    ctx->pc = 0x80CCC9D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC9D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CCC9D0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCC9D4:
    ctx->pc = 0x80CCC9D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC9D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CCC9D4: stw     r0, 20(r1)
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
label_80CCC9D8:
    ctx->pc = 0x80CCC9D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC9D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCC9D8: stw     r31, 12(r1)
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
label_80CCC9DC:
    ctx->pc = 0x80CCC9DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC9DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCC9DC: stw     r30, 8(r1)
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
label_80CCC9E0:
    ctx->pc = 0x80CCC9E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC9E0u)) return;
    // 80CCC9E0: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80CCC9E4:
    ctx->pc = 0x80CCC9E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC9E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCC9E4: lwz     r31, 32(r3)
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
label_80CCC9E8:
    ctx->pc = 0x80CCC9E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC9E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CCC9E8: stw     r30, 24(r31)
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
label_80CCC9EC:
    ctx->pc = 0x80CCC9ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC9ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCC9EC: stw     r5, 28(r31)
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
label_80CCC9F0:
    ctx->pc = 0x80CCC9F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC9F0u)) return;
    // 80CCC9F0: cmpwi   r5, 0
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

label_80CCC9F4:
    ctx->pc = 0x80CCC9F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC9F4u)) return;
    // 80CCC9F4: bc    12, 1, 0x80CCCA04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CCCA04;
        }
    }

label_80CCC9F8:
    ctx->pc = 0x80CCC9F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCC9F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCC9F8: lwz     r3, 16(r31)
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
label_80CCC9FC:
    ctx->pc = 0x80CCC9FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCC9FCu)) return;
    // 80CCC9FC: bl      0x80509C74
    {
            ctx->lr = 0x80CCCA00u;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80CCCA00:
    ctx->pc = 0x80CCCA00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCCA00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CCCA00: stw     r30, 20(r31)
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
label_80CCCA04:
    ctx->pc = 0x80CCCA04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCCA04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCCA04: lwz     r31, 12(r1)
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
label_80CCCA08:
    ctx->pc = 0x80CCCA08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCA08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CCCA08: lwz     r30, 8(r1)
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
label_80CCCA0C:
    ctx->pc = 0x80CCCA0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCA0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCCA0C: lwz     r0, 20(r1)
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
label_80CCCA10:
    ctx->pc = 0x80CCCA10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CCCA10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCCA10: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCCA14:
    ctx->pc = 0x80CCCA14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCA14u)) return;
    // 80CCCA14: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CCCA18:
    ctx->pc = 0x80CCCA18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCA18u)) return;
    // 80CCCA18: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CCB8E0;
        }
    }

label_80CCCA1C:
    ctx->pc = 0x80CCCA1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCCA1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CCCA1C: stwu     r1, -16(r1)
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
label_80CCCA20:
    ctx->pc = 0x80CCCA20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCA20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CCCA20: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCCA24:
    ctx->pc = 0x80CCCA24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCA24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CCCA24: stw     r0, 20(r1)
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
label_80CCCA28:
    ctx->pc = 0x80CCCA28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCA28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCCA28: stw     r31, 12(r1)
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
label_80CCCA2C:
    ctx->pc = 0x80CCCA2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCA2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCCA2C: stw     r30, 8(r1)
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
label_80CCCA30:
    ctx->pc = 0x80CCCA30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCA30u)) return;
    // 80CCCA30: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80CCCA34:
    ctx->pc = 0x80CCCA34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCA34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCCA34: lwz     r31, 32(r3)
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
label_80CCCA38:
    ctx->pc = 0x80CCCA38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCA38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CCCA38: stw     r30, 36(r31)
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
label_80CCCA3C:
    ctx->pc = 0x80CCCA3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCA3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCCA3C: stw     r5, 40(r31)
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
label_80CCCA40:
    ctx->pc = 0x80CCCA40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCA40u)) return;
    // 80CCCA40: cmpwi   r5, 0
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

label_80CCCA44:
    ctx->pc = 0x80CCCA44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCA44u)) return;
    // 80CCCA44: bc    12, 1, 0x80CCCA54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CCCA54;
        }
    }

label_80CCCA48:
    ctx->pc = 0x80CCCA48u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCCA48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCCA48: lwz     r3, 16(r31)
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
label_80CCCA4C:
    ctx->pc = 0x80CCCA4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCA4Cu)) return;
    // 80CCCA4C: bl      0x80509BF8
    {
            ctx->lr = 0x80CCCA50u;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80CCCA50:
    ctx->pc = 0x80CCCA50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCCA50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CCCA50: stw     r30, 32(r31)
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
label_80CCCA54:
    ctx->pc = 0x80CCCA54u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCCA54u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCCA54: lwz     r31, 12(r1)
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
label_80CCCA58:
    ctx->pc = 0x80CCCA58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCA58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CCCA58: lwz     r30, 8(r1)
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
label_80CCCA5C:
    ctx->pc = 0x80CCCA5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCA5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCCA5C: lwz     r0, 20(r1)
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
label_80CCCA60:
    ctx->pc = 0x80CCCA60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CCCA60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCCA60: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCCA64:
    ctx->pc = 0x80CCCA64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCA64u)) return;
    // 80CCCA64: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CCCA68:
    ctx->pc = 0x80CCCA68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCA68u)) return;
    // 80CCCA68: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CCB8E0;
        }
    }

label_80CCCA6C:
    ctx->pc = 0x80CCCA6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCCA6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CCCA6C: stwu     r1, -16(r1)
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
label_80CCCA70:
    ctx->pc = 0x80CCCA70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCA70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CCCA70: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCCA74:
    ctx->pc = 0x80CCCA74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCA74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CCCA74: stw     r0, 20(r1)
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
label_80CCCA78:
    ctx->pc = 0x80CCCA78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCA78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCCA78: stw     r31, 12(r1)
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
label_80CCCA7C:
    ctx->pc = 0x80CCCA7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCA7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCCA7C: stw     r30, 8(r1)
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
label_80CCCA80:
    ctx->pc = 0x80CCCA80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCA80u)) return;
    // 80CCCA80: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80CCCA84:
    ctx->pc = 0x80CCCA84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCA84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCCA84: lwz     r31, 32(r3)
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
label_80CCCA88:
    ctx->pc = 0x80CCCA88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCA88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CCCA88: stw     r30, 48(r31)
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
label_80CCCA8C:
    ctx->pc = 0x80CCCA8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCA8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCCA8C: stw     r5, 52(r31)
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
label_80CCCA90:
    ctx->pc = 0x80CCCA90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCA90u)) return;
    // 80CCCA90: cmpwi   r5, 0
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

label_80CCCA94:
    ctx->pc = 0x80CCCA94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCA94u)) return;
    // 80CCCA94: bc    12, 1, 0x80CCCAA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CCCAA4;
        }
    }

label_80CCCA98:
    ctx->pc = 0x80CCCA98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCCA98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCCA98: lwz     r3, 16(r31)
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
label_80CCCA9C:
    ctx->pc = 0x80CCCA9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCA9Cu)) return;
    // 80CCCA9C: bl      0x80509B94
    {
            ctx->lr = 0x80CCCAA0u;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80CCCAA0:
    ctx->pc = 0x80CCCAA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCCAA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CCCAA0: stw     r30, 44(r31)
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
label_80CCCAA4:
    ctx->pc = 0x80CCCAA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCCAA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCCAA4: lwz     r31, 12(r1)
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
label_80CCCAA8:
    ctx->pc = 0x80CCCAA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCAA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CCCAA8: lwz     r30, 8(r1)
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
label_80CCCAAC:
    ctx->pc = 0x80CCCAACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCAACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCCAAC: lwz     r0, 20(r1)
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
label_80CCCAB0:
    ctx->pc = 0x80CCCAB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CCCAB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCCAB0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCCAB4:
    ctx->pc = 0x80CCCAB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCAB4u)) return;
    // 80CCCAB4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CCCAB8:
    ctx->pc = 0x80CCCAB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCAB8u)) return;
    // 80CCCAB8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CCB8E0;
        }
    }

label_80CCCABC:
    ctx->pc = 0x80CCCABCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCCABCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CCCABC: stwu     r1, -16(r1)
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
label_80CCCAC0:
    ctx->pc = 0x80CCCAC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCAC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CCCAC0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCCAC4:
    ctx->pc = 0x80CCCAC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCAC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCCAC4: stw     r0, 20(r1)
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
label_80CCCAC8:
    ctx->pc = 0x80CCCAC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCAC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCCAC8: stw     r31, 12(r1)
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
label_80CCCACC:
    ctx->pc = 0x80CCCACCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCACCu)) return;
    // 80CCCACC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80CCCAD0:
    ctx->pc = 0x80CCCAD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCAD0u)) return;
    // 80CCCAD0: lis     r4, -27375
    ctx->gpr[4] = ((u32)(s32)(-27375) << 16);

label_80CCCAD4:
    ctx->pc = 0x80CCCAD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCAD4u)) return;
    // 80CCCAD4: addi    r4, r4, -7796
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-7796);

label_80CCCAD8:
    ctx->pc = 0x80CCCAD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCAD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCCAD8: lwz     r0, 0(r4)
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
label_80CCCADC:
    ctx->pc = 0x80CCCADCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCADCu)) return;
    // 80CCCADC: cmplwi  r0, 0x0000
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

label_80CCCAE0:
    ctx->pc = 0x80CCCAE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCAE0u)) return;
    // 80CCCAE0: bc    4, 2, 0x80CCCB04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CCCB04;
        }
    }

label_80CCCAE4:
    ctx->pc = 0x80CCCAE4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCCAE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCCAE4: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80CCCAE8:
    ctx->pc = 0x80CCCAE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCAE8u)) return;
    // 80CCCAE8: bl      0x8050EEC0
    {
            ctx->lr = 0x80CCCAECu;
            ctx->pc = 0x8050EEC0u;
            return;
    }

label_80CCCAEC:
    ctx->pc = 0x80CCCAECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCCAECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80CCCAEC: lis     r4, -27375
    ctx->gpr[4] = ((u32)(s32)(-27375) << 16);

label_80CCCAF0:
    ctx->pc = 0x80CCCAF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCAF0u)) return;
    // 80CCCAF0: addi    r4, r4, -7796
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-7796);

label_80CCCAF4:
    ctx->pc = 0x80CCCAF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCAF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CCCAF4: stw     r3, 0(r4)
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
label_80CCCAF8:
    ctx->pc = 0x80CCCAF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCAF8u)) return;
    // 80CCCAF8: lis     r3, -27375
    ctx->gpr[3] = ((u32)(s32)(-27375) << 16);

label_80CCCAFC:
    ctx->pc = 0x80CCCAFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCAFCu)) return;
    // 80CCCAFC: addi    r3, r3, -7800
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-7800);

label_80CCCB00:
    ctx->pc = 0x80CCCB00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCB00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CCCB00: stw     r31, 0(r3)
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
label_80CCCB04:
    ctx->pc = 0x80CCCB04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCCB04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CCCB04: lwz     r31, 12(r1)
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
label_80CCCB08:
    ctx->pc = 0x80CCCB08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCB08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCCB08: lwz     r0, 20(r1)
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
label_80CCCB0C:
    ctx->pc = 0x80CCCB0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CCCB0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCCB0C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCCB10:
    ctx->pc = 0x80CCCB10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCB10u)) return;
    // 80CCCB10: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CCCB14:
    ctx->pc = 0x80CCCB14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCB14u)) return;
    // 80CCCB14: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CCB8E0;
        }
    }

label_80CCCB18:
    ctx->pc = 0x80CCCB18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCCB18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CCCB18: stwu     r1, -32(r1)
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
label_80CCCB1C:
    ctx->pc = 0x80CCCB1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCB1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CCCB1C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCCB20:
    ctx->pc = 0x80CCCB20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCB20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CCCB20: stw     r0, 36(r1)
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
label_80CCCB24:
    ctx->pc = 0x80CCCB24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCB24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CCCB24: stw     r31, 28(r1)
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
label_80CCCB28:
    ctx->pc = 0x80CCCB28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCB28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCCB28: stw     r30, 24(r1)
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
label_80CCCB2C:
    ctx->pc = 0x80CCCB2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCB2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCCB2C: stw     r29, 20(r1)
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
label_80CCCB30:
    ctx->pc = 0x80CCCB30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCB30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CCCB30: stw     r28, 16(r1)
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
label_80CCCB34:
    ctx->pc = 0x80CCCB34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCB34u)) return;
    // 80CCCB34: lis     r3, -27375
    ctx->gpr[3] = ((u32)(s32)(-27375) << 16);

label_80CCCB38:
    ctx->pc = 0x80CCCB38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCB38u)) return;
    // 80CCCB38: addi    r30, r3, -7796
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(-7796);

label_80CCCB3C:
    ctx->pc = 0x80CCCB3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCB3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCCB3C: lwz     r0, 0(r30)
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
label_80CCCB40:
    ctx->pc = 0x80CCCB40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCB40u)) return;
    // 80CCCB40: cmplwi  r0, 0x0000
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

label_80CCCB44:
    ctx->pc = 0x80CCCB44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCB44u)) return;
    // 80CCCB44: bc    12, 2, 0x80CCCBA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CCCBA4;
        }
    }

label_80CCCB48:
    ctx->pc = 0x80CCCB48u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCCB48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80CCCB48: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_80CCCB4C:
    ctx->pc = 0x80CCCB4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCB4Cu)) return;
    // 80CCCB4C: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_80CCCB50:
    ctx->pc = 0x80CCCB50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCB50u)) return;
    // 80CCCB50: lis     r3, -27375
    ctx->gpr[3] = ((u32)(s32)(-27375) << 16);

label_80CCCB54:
    ctx->pc = 0x80CCCB54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCB54u)) return;
    // 80CCCB54: addi    r31, r3, -7800
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(-7800);

label_80CCCB58:
    ctx->pc = 0x80CCCB58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCB58u)) return;
    // 80CCCB58: b       0x80CCCB78
    {
            goto label_80CCCB78;
    }

label_80CCCB5C:
    ctx->pc = 0x80CCCB5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCCB5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CCCB5C: lwz     r3, 0(r30)
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
label_80CCCB60:
    ctx->pc = 0x80CCCB60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCB60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCCB60: lwzx    r3, r3, r29
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
label_80CCCB64:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCB64u)) return;
    // 80CCCB64: cmplwi  r3, 0x0000
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

label_80CCCB68:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCB68u)) return;
    // 80CCCB68: bc    12, 2, 0x80CCCB70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CCCB70;
        }
    }

label_80CCCB6C:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCCB6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CCCB6C: bl      0x8050F9E0
    {
            ctx->lr = 0x80CCCB70u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80CCCB70:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCCB70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CCCB70: addi    r29, r29, 4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4);

label_80CCCB74:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCB74u)) return;
    // 80CCCB74: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_80CCCB78:
    ctx->pc = 0x80CCCB78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCCB78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCCB78: lwz     r0, 0(r31)
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
label_80CCCB7C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCB7Cu)) return;
    // 80CCCB7C: cmpw    r28, r0
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

label_80CCCB80:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCB80u)) return;
    // 80CCCB80: bc    12, 0, 0x80CCCB5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80CCCB5Cu;
                return;
            }
            goto label_80CCCB5C;
        }
    }

label_80CCCB84:
    ctx->pc = 0x80CCCB84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCCB84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80CCCB84: lis     r3, -27375
    ctx->gpr[3] = ((u32)(s32)(-27375) << 16);

label_80CCCB88:
    ctx->pc = 0x80CCCB88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCB88u)) return;
    // 80CCCB88: addi    r3, r3, -7796
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-7796);

label_80CCCB8C:
    ctx->pc = 0x80CCCB8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCB8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCCB8C: lwz     r3, 0(r3)
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
label_80CCCB90:
    ctx->pc = 0x80CCCB90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCB90u)) return;
    // 80CCCB90: bl      0x8050ED40
    {
            ctx->lr = 0x80CCCB94u;
            ctx->pc = 0x8050ED40u;
            return;
    }

label_80CCCB94:
    ctx->pc = 0x80CCCB94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCCB94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80CCCB94: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80CCCB98:
    ctx->pc = 0x80CCCB98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCB98u)) return;
    // 80CCCB98: lis     r3, -27375
    ctx->gpr[3] = ((u32)(s32)(-27375) << 16);

label_80CCCB9C:
    ctx->pc = 0x80CCCB9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCB9Cu)) return;
    // 80CCCB9C: addi    r3, r3, -7796
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-7796);

label_80CCCBA0:
    ctx->pc = 0x80CCCBA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCBA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CCCBA0: stw     r0, 0(r3)
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
label_80CCCBA4:
    ctx->pc = 0x80CCCBA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCCBA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CCCBA4: lwz     r31, 28(r1)
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
label_80CCCBA8:
    ctx->pc = 0x80CCCBA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCBA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCCBA8: lwz     r30, 24(r1)
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
label_80CCCBAC:
    ctx->pc = 0x80CCCBACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCBACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCCBAC: lwz     r29, 20(r1)
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
label_80CCCBB0:
    ctx->pc = 0x80CCCBB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCBB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CCCBB0: lwz     r28, 16(r1)
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
label_80CCCBB4:
    ctx->pc = 0x80CCCBB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCBB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCCBB4: lwz     r0, 36(r1)
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
label_80CCCBB8:
    ctx->pc = 0x80CCCBB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CCCBB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCCBB8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCCBBC:
    ctx->pc = 0x80CCCBBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCBBCu)) return;
    // 80CCCBBC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80CCCBC0:
    ctx->pc = 0x80CCCBC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCBC0u)) return;
    // 80CCCBC0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CCB8E0;
        }
    }

label_80CCCBC4:
    ctx->pc = 0x80CCCBC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCCBC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CCCBC4: stwu     r1, -16(r1)
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
label_80CCCBC8:
    ctx->pc = 0x80CCCBC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCBC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCCBC8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCCBCC:
    ctx->pc = 0x80CCCBCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCBCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCCBCC: stw     r0, 20(r1)
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
label_80CCCBD0:
    ctx->pc = 0x80CCCBD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCBD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CCCBD0: stw     r31, 12(r1)
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
label_80CCCBD4:
    ctx->pc = 0x80CCCBD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCBD4u)) return;
    // 80CCCBD4: lis     r6, -27375
    ctx->gpr[6] = ((u32)(s32)(-27375) << 16);

label_80CCCBD8:
    ctx->pc = 0x80CCCBD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCBD8u)) return;
    // 80CCCBD8: addi    r6, r6, -7800
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-7800);

label_80CCCBDC:
    ctx->pc = 0x80CCCBDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCBDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCCBDC: lwz     r0, 0(r6)
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
label_80CCCBE0:
    ctx->pc = 0x80CCCBE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCBE0u)) return;
    // 80CCCBE0: cmpw    r3, r0
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

label_80CCCBE4:
    ctx->pc = 0x80CCCBE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCBE4u)) return;
    // 80CCCBE4: bc    4, 0, 0x80CCCC20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CCCC20;
        }
    }

label_80CCCBE8:
    ctx->pc = 0x80CCCBE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCCBE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80CCCBE8: lis     r6, -27375
    ctx->gpr[6] = ((u32)(s32)(-27375) << 16);

label_80CCCBEC:
    ctx->pc = 0x80CCCBECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCBECu)) return;
    // 80CCCBEC: addi    r6, r6, -7796
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-7796);

label_80CCCBF0:
    ctx->pc = 0x80CCCBF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCBF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCCBF0: lwz     r6, 0(r6)
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
label_80CCCBF4:
    ctx->pc = 0x80CCCBF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCBF4u)) return;
    // 80CCCBF4: rlwinm r31, r3, 2, 0, 29
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80CCCBF8:
    ctx->pc = 0x80CCCBF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCBF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCCBF8: lwzx    r0, r6, r31
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
label_80CCCBFC:
    ctx->pc = 0x80CCCBFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCBFCu)) return;
    // 80CCCBFC: cmplwi  r0, 0x0000
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

label_80CCCC00:
    ctx->pc = 0x80CCCC00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCC00u)) return;
    // 80CCCC00: bc    4, 2, 0x80CCCC20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CCCC20;
        }
    }

label_80CCCC04:
    ctx->pc = 0x80CCCC04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCCC04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CCCC04: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80CCCC08:
    ctx->pc = 0x80CCCC08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCC08u)) return;
    // 80CCCC08: or   r4, r5, r5
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80CCCC0C:
    ctx->pc = 0x80CCCC0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCC0Cu)) return;
    // 80CCCC0C: bl      0x80CCC910
    {
            ctx->lr = 0x80CCCC10u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80CCC910u;
                return;
            }
            goto label_80CCC910;
    }

label_80CCCC10:
    ctx->pc = 0x80CCCC10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCCC10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80CCCC10: lis     r4, -27375
    ctx->gpr[4] = ((u32)(s32)(-27375) << 16);

label_80CCCC14:
    ctx->pc = 0x80CCCC14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCC14u)) return;
    // 80CCCC14: addi    r4, r4, -7796
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-7796);

label_80CCCC18:
    ctx->pc = 0x80CCCC18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCC18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCCC18: lwz     r4, 0(r4)
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
label_80CCCC1C:
    ctx->pc = 0x80CCCC1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCC1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CCCC1C: stwx    r3, r4, r31
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
label_80CCCC20:
    ctx->pc = 0x80CCCC20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCCC20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CCCC20: lwz     r31, 12(r1)
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
label_80CCCC24:
    ctx->pc = 0x80CCCC24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCC24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCCC24: lwz     r0, 20(r1)
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
label_80CCCC28:
    ctx->pc = 0x80CCCC28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CCCC28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCCC28: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCCC2C:
    ctx->pc = 0x80CCCC2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCC2Cu)) return;
    // 80CCCC2C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CCCC30:
    ctx->pc = 0x80CCCC30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCC30u)) return;
    // 80CCCC30: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CCB8E0;
        }
    }

label_80CCCC34:
    ctx->pc = 0x80CCCC34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCCC34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CCCC34: stwu     r1, -16(r1)
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
label_80CCCC38:
    ctx->pc = 0x80CCCC38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCC38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCCC38: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCCC3C:
    ctx->pc = 0x80CCCC3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCC3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCCC3C: stw     r0, 20(r1)
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
label_80CCCC40:
    ctx->pc = 0x80CCCC40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCC40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CCCC40: stw     r31, 12(r1)
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
label_80CCCC44:
    ctx->pc = 0x80CCCC44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCC44u)) return;
    // 80CCCC44: lis     r4, -27375
    ctx->gpr[4] = ((u32)(s32)(-27375) << 16);

label_80CCCC48:
    ctx->pc = 0x80CCCC48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCC48u)) return;
    // 80CCCC48: addi    r4, r4, -7800
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-7800);

label_80CCCC4C:
    ctx->pc = 0x80CCCC4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCC4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCCC4C: lwz     r0, 0(r4)
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
label_80CCCC50:
    ctx->pc = 0x80CCCC50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCC50u)) return;
    // 80CCCC50: cmpw    r3, r0
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

label_80CCCC54:
    ctx->pc = 0x80CCCC54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCC54u)) return;
    // 80CCCC54: bc    4, 0, 0x80CCCC8C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CCCC8C;
        }
    }

label_80CCCC58:
    ctx->pc = 0x80CCCC58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCCC58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80CCCC58: lis     r4, -27375
    ctx->gpr[4] = ((u32)(s32)(-27375) << 16);

label_80CCCC5C:
    ctx->pc = 0x80CCCC5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCC5Cu)) return;
    // 80CCCC5C: addi    r4, r4, -7796
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-7796);

label_80CCCC60:
    ctx->pc = 0x80CCCC60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCC60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCCC60: lwz     r4, 0(r4)
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
label_80CCCC64:
    ctx->pc = 0x80CCCC64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCC64u)) return;
    // 80CCCC64: rlwinm r31, r3, 2, 0, 29
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80CCCC68:
    ctx->pc = 0x80CCCC68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCC68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCCC68: lwzx    r3, r4, r31
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
label_80CCCC6C:
    ctx->pc = 0x80CCCC6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCC6Cu)) return;
    // 80CCCC6C: cmplwi  r3, 0x0000
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

label_80CCCC70:
    ctx->pc = 0x80CCCC70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCC70u)) return;
    // 80CCCC70: bc    12, 2, 0x80CCCC8C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CCCC8C;
        }
    }

label_80CCCC74:
    ctx->pc = 0x80CCCC74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCCC74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CCCC74: bl      0x8050F9E0
    {
            ctx->lr = 0x80CCCC78u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80CCCC78:
    ctx->pc = 0x80CCCC78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCCC78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80CCCC78: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80CCCC7C:
    ctx->pc = 0x80CCCC7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCC7Cu)) return;
    // 80CCCC7C: lis     r3, -27375
    ctx->gpr[3] = ((u32)(s32)(-27375) << 16);

label_80CCCC80:
    ctx->pc = 0x80CCCC80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCC80u)) return;
    // 80CCCC80: addi    r3, r3, -7796
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-7796);

label_80CCCC84:
    ctx->pc = 0x80CCCC84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCC84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CCCC84: lwz     r3, 0(r3)
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
label_80CCCC88:
    ctx->pc = 0x80CCCC88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCC88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CCCC88: stwx    r0, r3, r31
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
label_80CCCC8C:
    ctx->pc = 0x80CCCC8Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCCC8Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CCCC8C: lwz     r31, 12(r1)
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
label_80CCCC90:
    ctx->pc = 0x80CCCC90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCC90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCCC90: lwz     r0, 20(r1)
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
label_80CCCC94:
    ctx->pc = 0x80CCCC94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CCCC94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCCC94: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCCC98:
    ctx->pc = 0x80CCCC98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCC98u)) return;
    // 80CCCC98: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CCCC9C:
    ctx->pc = 0x80CCCC9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCC9Cu)) return;
    // 80CCCC9C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CCB8E0;
        }
    }

label_80CCCCA0:
    ctx->pc = 0x80CCCCA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCCCA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCCCA0: stwu     r1, -16(r1)
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
label_80CCCCA4:
    ctx->pc = 0x80CCCCA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCCA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCCCA4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCCCA8:
    ctx->pc = 0x80CCCCA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCCA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CCCCA8: stw     r0, 20(r1)
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
label_80CCCCAC:
    ctx->pc = 0x80CCCCACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCCACu)) return;
    // 80CCCCAC: lis     r6, -27375
    ctx->gpr[6] = ((u32)(s32)(-27375) << 16);

label_80CCCCB0:
    ctx->pc = 0x80CCCCB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCCB0u)) return;
    // 80CCCCB0: addi    r6, r6, -7800
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-7800);

label_80CCCCB4:
    ctx->pc = 0x80CCCCB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCCB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCCCB4: lwz     r0, 0(r6)
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
label_80CCCCB8:
    ctx->pc = 0x80CCCCB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCCB8u)) return;
    // 80CCCCB8: cmpw    r3, r0
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

label_80CCCCBC:
    ctx->pc = 0x80CCCCBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCCBCu)) return;
    // 80CCCCBC: bc    4, 0, 0x80CCCCE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CCCCE0;
        }
    }

label_80CCCCC0:
    ctx->pc = 0x80CCCCC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCCCC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80CCCCC0: lis     r6, -27375
    ctx->gpr[6] = ((u32)(s32)(-27375) << 16);

label_80CCCCC4:
    ctx->pc = 0x80CCCCC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCCC4u)) return;
    // 80CCCCC4: addi    r6, r6, -7796
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-7796);

label_80CCCCC8:
    ctx->pc = 0x80CCCCC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCCC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCCCC8: lwz     r6, 0(r6)
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
label_80CCCCCC:
    ctx->pc = 0x80CCCCCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCCCCu)) return;
    // 80CCCCCC: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80CCCCD0:
    ctx->pc = 0x80CCCCD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCCD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCCCD0: lwzx    r3, r6, r0
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
label_80CCCCD4:
    ctx->pc = 0x80CCCCD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCCD4u)) return;
    // 80CCCCD4: cmplwi  r3, 0x0000
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

label_80CCCCD8:
    ctx->pc = 0x80CCCCD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCCD8u)) return;
    // 80CCCCD8: bc    12, 2, 0x80CCCCE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CCCCE0;
        }
    }

label_80CCCCDC:
    ctx->pc = 0x80CCCCDCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCCCDCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CCCCDC: bl      0x80CCC9CC
    {
            ctx->lr = 0x80CCCCE0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80CCC9CCu;
                return;
            }
            goto label_80CCC9CC;
    }

label_80CCCCE0:
    ctx->pc = 0x80CCCCE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCCCE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCCCE0: lwz     r0, 20(r1)
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
label_80CCCCE4:
    ctx->pc = 0x80CCCCE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CCCCE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCCCE4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCCCE8:
    ctx->pc = 0x80CCCCE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCCE8u)) return;
    // 80CCCCE8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CCCCEC:
    ctx->pc = 0x80CCCCECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCCECu)) return;
    // 80CCCCEC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CCB8E0;
        }
    }

label_80CCCCF0:
    ctx->pc = 0x80CCCCF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCCCF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCCCF0: stwu     r1, -16(r1)
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
label_80CCCCF4:
    ctx->pc = 0x80CCCCF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCCF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCCCF4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCCCF8:
    ctx->pc = 0x80CCCCF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCCF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CCCCF8: stw     r0, 20(r1)
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
label_80CCCCFC:
    ctx->pc = 0x80CCCCFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCCFCu)) return;
    // 80CCCCFC: lis     r6, -27375
    ctx->gpr[6] = ((u32)(s32)(-27375) << 16);

label_80CCCD00:
    ctx->pc = 0x80CCCD00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCD00u)) return;
    // 80CCCD00: addi    r6, r6, -7800
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-7800);

label_80CCCD04:
    ctx->pc = 0x80CCCD04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCD04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCCD04: lwz     r0, 0(r6)
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
label_80CCCD08:
    ctx->pc = 0x80CCCD08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCD08u)) return;
    // 80CCCD08: cmpw    r3, r0
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

label_80CCCD0C:
    ctx->pc = 0x80CCCD0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCD0Cu)) return;
    // 80CCCD0C: bc    4, 0, 0x80CCCD30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CCCD30;
        }
    }

label_80CCCD10:
    ctx->pc = 0x80CCCD10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCCD10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80CCCD10: lis     r6, -27375
    ctx->gpr[6] = ((u32)(s32)(-27375) << 16);

label_80CCCD14:
    ctx->pc = 0x80CCCD14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCD14u)) return;
    // 80CCCD14: addi    r6, r6, -7796
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-7796);

label_80CCCD18:
    ctx->pc = 0x80CCCD18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCD18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCCD18: lwz     r6, 0(r6)
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
label_80CCCD1C:
    ctx->pc = 0x80CCCD1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCD1Cu)) return;
    // 80CCCD1C: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80CCCD20:
    ctx->pc = 0x80CCCD20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCD20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCCD20: lwzx    r3, r6, r0
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
label_80CCCD24:
    ctx->pc = 0x80CCCD24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCD24u)) return;
    // 80CCCD24: cmplwi  r3, 0x0000
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

label_80CCCD28:
    ctx->pc = 0x80CCCD28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCD28u)) return;
    // 80CCCD28: bc    12, 2, 0x80CCCD30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CCCD30;
        }
    }

label_80CCCD2C:
    ctx->pc = 0x80CCCD2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCCD2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CCCD2C: bl      0x80CCCA1C
    {
            ctx->lr = 0x80CCCD30u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80CCCA1Cu;
                return;
            }
            goto label_80CCCA1C;
    }

label_80CCCD30:
    ctx->pc = 0x80CCCD30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCCD30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCCD30: lwz     r0, 20(r1)
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
label_80CCCD34:
    ctx->pc = 0x80CCCD34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CCCD34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCCD34: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCCD38:
    ctx->pc = 0x80CCCD38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCD38u)) return;
    // 80CCCD38: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CCCD3C:
    ctx->pc = 0x80CCCD3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCD3Cu)) return;
    // 80CCCD3C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CCB8E0;
        }
    }

label_80CCCD40:
    ctx->pc = 0x80CCCD40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCCD40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCCD40: stwu     r1, -16(r1)
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
label_80CCCD44:
    ctx->pc = 0x80CCCD44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCD44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCCD44: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCCD48:
    ctx->pc = 0x80CCCD48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCD48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CCCD48: stw     r0, 20(r1)
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
label_80CCCD4C:
    ctx->pc = 0x80CCCD4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCD4Cu)) return;
    // 80CCCD4C: lis     r6, -27375
    ctx->gpr[6] = ((u32)(s32)(-27375) << 16);

label_80CCCD50:
    ctx->pc = 0x80CCCD50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCD50u)) return;
    // 80CCCD50: addi    r6, r6, -7800
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-7800);

label_80CCCD54:
    ctx->pc = 0x80CCCD54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCD54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCCD54: lwz     r0, 0(r6)
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
label_80CCCD58:
    ctx->pc = 0x80CCCD58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCD58u)) return;
    // 80CCCD58: cmpw    r3, r0
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

label_80CCCD5C:
    ctx->pc = 0x80CCCD5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCD5Cu)) return;
    // 80CCCD5C: bc    4, 0, 0x80CCCD80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CCCD80;
        }
    }

label_80CCCD60:
    ctx->pc = 0x80CCCD60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCCD60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80CCCD60: lis     r6, -27375
    ctx->gpr[6] = ((u32)(s32)(-27375) << 16);

label_80CCCD64:
    ctx->pc = 0x80CCCD64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCD64u)) return;
    // 80CCCD64: addi    r6, r6, -7796
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-7796);

label_80CCCD68:
    ctx->pc = 0x80CCCD68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCD68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCCD68: lwz     r6, 0(r6)
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
label_80CCCD6C:
    ctx->pc = 0x80CCCD6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCD6Cu)) return;
    // 80CCCD6C: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80CCCD70:
    ctx->pc = 0x80CCCD70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCD70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCCD70: lwzx    r3, r6, r0
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
label_80CCCD74:
    ctx->pc = 0x80CCCD74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCD74u)) return;
    // 80CCCD74: cmplwi  r3, 0x0000
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

label_80CCCD78:
    ctx->pc = 0x80CCCD78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCD78u)) return;
    // 80CCCD78: bc    12, 2, 0x80CCCD80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CCCD80;
        }
    }

label_80CCCD7C:
    ctx->pc = 0x80CCCD7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCCD7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CCCD7C: bl      0x80CCCA6C
    {
            ctx->lr = 0x80CCCD80u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80CCCA6Cu;
                return;
            }
            goto label_80CCCA6C;
    }

label_80CCCD80:
    ctx->pc = 0x80CCCD80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCCD80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCCD80: lwz     r0, 20(r1)
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
label_80CCCD84:
    ctx->pc = 0x80CCCD84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CCCD84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCCD84: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCCD88:
    ctx->pc = 0x80CCCD88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCD88u)) return;
    // 80CCCD88: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CCCD8C:
    ctx->pc = 0x80CCCD8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCD8Cu)) return;
    // 80CCCD8C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CCB8E0;
        }
    }

label_80CCCD90:
    ctx->pc = 0x80CCCD90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCCD90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80CCCD90: stwu     r1, -32(r1)
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
label_80CCCD94:
    ctx->pc = 0x80CCCD94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCD94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CCCD94: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCCD98:
    ctx->pc = 0x80CCCD98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCD98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CCCD98: stw     r0, 36(r1)
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
label_80CCCD9C:
    ctx->pc = 0x80CCCD9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCD9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CCCD9C: stw     r31, 28(r1)
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
label_80CCCDA0:
    ctx->pc = 0x80CCCDA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCDA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CCCDA0: stw     r30, 24(r1)
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
label_80CCCDA4:
    ctx->pc = 0x80CCCDA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCDA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCCDA4: stw     r29, 20(r1)
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
label_80CCCDA8:
    ctx->pc = 0x80CCCDA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCDA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCCDA8: stw     r28, 16(r1)
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
label_80CCCDAC:
    ctx->pc = 0x80CCCDACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCDACu)) return;
    // 80CCCDAC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80CCCDB0:
    ctx->pc = 0x80CCCDB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCDB0u)) return;
    // 80CCCDB0: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80CCCDB4:
    ctx->pc = 0x80CCCDB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCDB4u)) return;
    // 80CCCDB4: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80CCCDB8:
    ctx->pc = 0x80CCCDB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCDB8u)) return;
    // 80CCCDB8: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_80CCCDBC:
    ctx->pc = 0x80CCCDBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCDBCu)) return;
    // 80CCCDBC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CCCDC0:
    ctx->pc = 0x80CCCDC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCDC0u)) return;
    // 80CCCDC0: bl      0x80401DB0
    {
            ctx->lr = 0x80CCCDC4u;
            ctx->pc = 0x80401DB0u;
            return;
    }

label_80CCCDC4:
    ctx->pc = 0x80CCCDC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCCDC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80CCCDC4: lis     r4, -27375
    ctx->gpr[4] = ((u32)(s32)(-27375) << 16);

label_80CCCDC8:
    ctx->pc = 0x80CCCDC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCDC8u)) return;
    // 80CCCDC8: addi    r4, r4, -7792
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-7792);

label_80CCCDCC:
    ctx->pc = 0x80CCCDCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCDCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCCDCC: lwz     r0, 0(r4)
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
label_80CCCDD0:
    ctx->pc = 0x80CCCDD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCDD0u)) return;
    // 80CCCDD0: add   r4, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80CCCDD4:
    ctx->pc = 0x80CCCDD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCDD4u)) return;
    // 80CCCDD4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80CCCDD8:
    ctx->pc = 0x80CCCDD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCDD8u)) return;
    // 80CCCDD8: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80CCCDDC:
    ctx->pc = 0x80CCCDDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCDDCu)) return;
    // 80CCCDDC: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80CCCDE0:
    ctx->pc = 0x80CCCDE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCDE0u)) return;
    // 80CCCDE0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80CCCDE4:
    ctx->pc = 0x80CCCDE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCDE4u)) return;
    // 80CCCDE4: li      r7, 120
    ctx->gpr[7] = (u32)(s32)(120);

label_80CCCDE8:
    ctx->pc = 0x80CCCDE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCDE8u)) return;
    // 80CCCDE8: bl      0x8050A0D4
    {
            ctx->lr = 0x80CCCDECu;
            ctx->pc = 0x8050A0D4u;
            return;
    }

label_80CCCDEC:
    ctx->pc = 0x80CCCDECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCCDECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CCCDEC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80CCCDF0:
    ctx->pc = 0x80CCCDF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCDF0u)) return;
    // 80CCCDF0: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80CCCDF4:
    ctx->pc = 0x80CCCDF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCDF4u)) return;
    // 80CCCDF4: bl      0x80509C74
    {
            ctx->lr = 0x80CCCDF8u;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80CCCDF8:
    ctx->pc = 0x80CCCDF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCCDF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CCCDF8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80CCCDFC:
    ctx->pc = 0x80CCCDFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCDFCu)) return;
    // 80CCCDFC: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80CCCE00:
    ctx->pc = 0x80CCCE00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCE00u)) return;
    // 80CCCE00: bl      0x80509BF8
    {
            ctx->lr = 0x80CCCE04u;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80CCCE04:
    ctx->pc = 0x80CCCE04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCCE04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CCCE04: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80CCCE08:
    ctx->pc = 0x80CCCE08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCE08u)) return;
    // 80CCCE08: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80CCCE0C:
    ctx->pc = 0x80CCCE0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCE0Cu)) return;
    // 80CCCE0C: bl      0x80509B94
    {
            ctx->lr = 0x80CCCE10u;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80CCCE10:
    ctx->pc = 0x80CCCE10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CCCE10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80CCCE10: lis     r3, -27375
    ctx->gpr[3] = ((u32)(s32)(-27375) << 16);

label_80CCCE14:
    ctx->pc = 0x80CCCE14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCE14u)) return;
    // 80CCCE14: addi    r4, r3, -7792
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-7792);

label_80CCCE18:
    ctx->pc = 0x80CCCE18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCE18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80CCCE18: lwz     r3, 0(r4)
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
label_80CCCE1C:
    ctx->pc = 0x80CCCE1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCE1Cu)) return;
    // 80CCCE1C: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_80CCCE20:
    ctx->pc = 0x80CCCE20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCE20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CCCE20: stw     r0, 0(r4)
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
label_80CCCE24:
    ctx->pc = 0x80CCCE24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCE24u)) return;
    // 80CCCE24: rlwinm r0, r0, 0, 27, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000001Fu;
    }

label_80CCCE28:
    ctx->pc = 0x80CCCE28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCE28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CCCE28: stw     r0, 0(r4)
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
label_80CCCE2C:
    ctx->pc = 0x80CCCE2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCE2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CCCE2C: lwz     r31, 28(r1)
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
label_80CCCE30:
    ctx->pc = 0x80CCCE30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCE30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CCCE30: lwz     r30, 24(r1)
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
label_80CCCE34:
    ctx->pc = 0x80CCCE34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCE34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CCCE34: lwz     r29, 20(r1)
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
label_80CCCE38:
    ctx->pc = 0x80CCCE38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCE38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CCCE38: lwz     r28, 16(r1)
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
label_80CCCE3C:
    ctx->pc = 0x80CCCE3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCE3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CCCE3C: lwz     r0, 36(r1)
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
label_80CCCE40:
    ctx->pc = 0x80CCCE40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CCCE40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CCCE40: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CCCE44:
    ctx->pc = 0x80CCCE44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCE44u)) return;
    // 80CCCE44: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80CCCE48:
    ctx->pc = 0x80CCCE48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CCCE48u)) return;
    // 80CCCE48: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CCB8E0;
        }
    }

    ctx->pc = 0x80CCCE4Cu;
    return;
return_dispatch_80CCB8E0:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80CCB8FCu: goto label_80CCB8FC;
    case 0x80CCB924u: goto label_80CCB924;
    case 0x80CCB928u: goto label_80CCB928;
    case 0x80CCB92Cu: goto label_80CCB92C;
    case 0x80CCB934u: goto label_80CCB934;
    case 0x80CCB93Cu: goto label_80CCB93C;
    case 0x80CCB944u: goto label_80CCB944;
    case 0x80CCB950u: goto label_80CCB950;
    case 0x80CCB978u: goto label_80CCB978;
    case 0x80CCB994u: goto label_80CCB994;
    case 0x80CCB9A4u: goto label_80CCB9A4;
    case 0x80CCB9ACu: goto label_80CCB9AC;
    case 0x80CCB9CCu: goto label_80CCB9CC;
    case 0x80CCB9D4u: goto label_80CCB9D4;
    case 0x80CCB9E4u: goto label_80CCB9E4;
    case 0x80CCB9ECu: goto label_80CCB9EC;
    case 0x80CCB9F4u: goto label_80CCB9F4;
    case 0x80CCB9F8u: goto label_80CCB9F8;
    case 0x80CCBA00u: goto label_80CCBA00;
    case 0x80CCBA28u: goto label_80CCBA28;
    case 0x80CCBA30u: goto label_80CCBA30;
    case 0x80CCBA3Cu: goto label_80CCBA3C;
    case 0x80CCBA50u: goto label_80CCBA50;
    case 0x80CCBA5Cu: goto label_80CCBA5C;
    case 0x80CCBA68u: goto label_80CCBA68;
    case 0x80CCBA74u: goto label_80CCBA74;
    case 0x80CCBA9Cu: goto label_80CCBA9C;
    case 0x80CCBAA4u: goto label_80CCBAA4;
    case 0x80CCBAB8u: goto label_80CCBAB8;
    case 0x80CCBAC0u: goto label_80CCBAC0;
    case 0x80CCBACCu: goto label_80CCBACC;
    case 0x80CCBAECu: goto label_80CCBAEC;
    case 0x80CCBB0Cu: goto label_80CCBB0C;
    case 0x80CCBB14u: goto label_80CCBB14;
    case 0x80CCBB20u: goto label_80CCBB20;
    case 0x80CCBB34u: goto label_80CCBB34;
    case 0x80CCBB54u: goto label_80CCBB54;
    case 0x80CCBB88u: goto label_80CCBB88;
    case 0x80CCBBB8u: goto label_80CCBBB8;
    case 0x80CCBBD4u: goto label_80CCBBD4;
    case 0x80CCBBDCu: goto label_80CCBBDC;
    case 0x80CCBC00u: goto label_80CCBC00;
    case 0x80CCBC30u: goto label_80CCBC30;
    case 0x80CCBC38u: goto label_80CCBC38;
    case 0x80CCBC40u: goto label_80CCBC40;
    case 0x80CCBC70u: goto label_80CCBC70;
    case 0x80CCBC8Cu: goto label_80CCBC8C;
    case 0x80CCBCBCu: goto label_80CCBCBC;
    case 0x80CCBCD8u: goto label_80CCBCD8;
    case 0x80CCBCE0u: goto label_80CCBCE0;
    case 0x80CCBCE8u: goto label_80CCBCE8;
    case 0x80CCBD10u: goto label_80CCBD10;
    case 0x80CCBD14u: goto label_80CCBD14;
    case 0x80CCBD44u: goto label_80CCBD44;
    case 0x80CCBD5Cu: goto label_80CCBD5C;
    case 0x80CCBD64u: goto label_80CCBD64;
    case 0x80CCBD94u: goto label_80CCBD94;
    case 0x80CCBDC4u: goto label_80CCBDC4;
    case 0x80CCBDD0u: goto label_80CCBDD0;
    case 0x80CCBDE8u: goto label_80CCBDE8;
    case 0x80CCBDF0u: goto label_80CCBDF0;
    case 0x80CCBE08u: goto label_80CCBE08;
    case 0x80CCBE10u: goto label_80CCBE10;
    case 0x80CCBE28u: goto label_80CCBE28;
    case 0x80CCBE30u: goto label_80CCBE30;
    case 0x80CCBE48u: goto label_80CCBE48;
    case 0x80CCBE50u: goto label_80CCBE50;
    case 0x80CCBE68u: goto label_80CCBE68;
    case 0x80CCBE70u: goto label_80CCBE70;
    case 0x80CCBE88u: goto label_80CCBE88;
    case 0x80CCBE90u: goto label_80CCBE90;
    case 0x80CCBEA8u: goto label_80CCBEA8;
    case 0x80CCBEB0u: goto label_80CCBEB0;
    case 0x80CCBEC8u: goto label_80CCBEC8;
    case 0x80CCBED0u: goto label_80CCBED0;
    case 0x80CCBEE8u: goto label_80CCBEE8;
    case 0x80CCBEF0u: goto label_80CCBEF0;
    case 0x80CCBF08u: goto label_80CCBF08;
    case 0x80CCBF10u: goto label_80CCBF10;
    case 0x80CCBF40u: goto label_80CCBF40;
    case 0x80CCBF58u: goto label_80CCBF58;
    case 0x80CCBF60u: goto label_80CCBF60;
    case 0x80CCBF78u: goto label_80CCBF78;
    case 0x80CCBF80u: goto label_80CCBF80;
    case 0x80CCBF98u: goto label_80CCBF98;
    case 0x80CCBFA0u: goto label_80CCBFA0;
    case 0x80CCBFB8u: goto label_80CCBFB8;
    case 0x80CCBFC0u: goto label_80CCBFC0;
    case 0x80CCBFD8u: goto label_80CCBFD8;
    case 0x80CCBFE0u: goto label_80CCBFE0;
    case 0x80CCC010u: goto label_80CCC010;
    case 0x80CCC028u: goto label_80CCC028;
    case 0x80CCC030u: goto label_80CCC030;
    case 0x80CCC048u: goto label_80CCC048;
    case 0x80CCC050u: goto label_80CCC050;
    case 0x80CCC068u: goto label_80CCC068;
    case 0x80CCC070u: goto label_80CCC070;
    case 0x80CCC088u: goto label_80CCC088;
    case 0x80CCC090u: goto label_80CCC090;
    case 0x80CCC0A8u: goto label_80CCC0A8;
    case 0x80CCC0B0u: goto label_80CCC0B0;
    case 0x80CCC0C8u: goto label_80CCC0C8;
    case 0x80CCC0D0u: goto label_80CCC0D0;
    case 0x80CCC0E8u: goto label_80CCC0E8;
    case 0x80CCC0F0u: goto label_80CCC0F0;
    case 0x80CCC108u: goto label_80CCC108;
    case 0x80CCC110u: goto label_80CCC110;
    case 0x80CCC140u: goto label_80CCC140;
    case 0x80CCC158u: goto label_80CCC158;
    case 0x80CCC160u: goto label_80CCC160;
    case 0x80CCC178u: goto label_80CCC178;
    case 0x80CCC180u: goto label_80CCC180;
    case 0x80CCC198u: goto label_80CCC198;
    case 0x80CCC1A0u: goto label_80CCC1A0;
    case 0x80CCC1B8u: goto label_80CCC1B8;
    case 0x80CCC1C0u: goto label_80CCC1C0;
    case 0x80CCC1D8u: goto label_80CCC1D8;
    case 0x80CCC1E0u: goto label_80CCC1E0;
    case 0x80CCC1F8u: goto label_80CCC1F8;
    case 0x80CCC200u: goto label_80CCC200;
    case 0x80CCC218u: goto label_80CCC218;
    case 0x80CCC220u: goto label_80CCC220;
    case 0x80CCC238u: goto label_80CCC238;
    case 0x80CCC240u: goto label_80CCC240;
    case 0x80CCC258u: goto label_80CCC258;
    case 0x80CCC260u: goto label_80CCC260;
    case 0x80CCC278u: goto label_80CCC278;
    case 0x80CCC280u: goto label_80CCC280;
    case 0x80CCC288u: goto label_80CCC288;
    case 0x80CCC2A0u: goto label_80CCC2A0;
    case 0x80CCC2A8u: goto label_80CCC2A8;
    case 0x80CCC2C0u: goto label_80CCC2C0;
    case 0x80CCC2C8u: goto label_80CCC2C8;
    case 0x80CCC2E0u: goto label_80CCC2E0;
    case 0x80CCC310u: goto label_80CCC310;
    case 0x80CCC338u: goto label_80CCC338;
    case 0x80CCC33Cu: goto label_80CCC33C;
    case 0x80CCC36Cu: goto label_80CCC36C;
    case 0x80CCC374u: goto label_80CCC374;
    case 0x80CCC39Cu: goto label_80CCC39C;
    case 0x80CCC3A0u: goto label_80CCC3A0;
    case 0x80CCC3D0u: goto label_80CCC3D0;
    case 0x80CCC3ECu: goto label_80CCC3EC;
    case 0x80CCC41Cu: goto label_80CCC41C;
    case 0x80CCC424u: goto label_80CCC424;
    case 0x80CCC42Cu: goto label_80CCC42C;
    case 0x80CCC454u: goto label_80CCC454;
    case 0x80CCC458u: goto label_80CCC458;
    case 0x80CCC460u: goto label_80CCC460;
    case 0x80CCC468u: goto label_80CCC468;
    case 0x80CCC46Cu: goto label_80CCC46C;
    case 0x80CCC484u: goto label_80CCC484;
    case 0x80CCC49Cu: goto label_80CCC49C;
    case 0x80CCC4A8u: goto label_80CCC4A8;
    case 0x80CCC4ACu: goto label_80CCC4AC;
    case 0x80CCC4B0u: goto label_80CCC4B0;
    case 0x80CCC4C0u: goto label_80CCC4C0;
    case 0x80CCC4E4u: goto label_80CCC4E4;
    case 0x80CCC570u: goto label_80CCC570;
    case 0x80CCC57Cu: goto label_80CCC57C;
    case 0x80CCC60Cu: goto label_80CCC60C;
    case 0x80CCC614u: goto label_80CCC614;
    case 0x80CCC67Cu: goto label_80CCC67C;
    case 0x80CCC6C4u: goto label_80CCC6C4;
    case 0x80CCC730u: goto label_80CCC730;
    case 0x80CCC7DCu: goto label_80CCC7DC;
    case 0x80CCC804u: goto label_80CCC804;
    case 0x80CCC864u: goto label_80CCC864;
    case 0x80CCC8A4u: goto label_80CCC8A4;
    case 0x80CCC8E4u: goto label_80CCC8E4;
    case 0x80CCC940u: goto label_80CCC940;
    case 0x80CCC964u: goto label_80CCC964;
    case 0x80CCCA00u: goto label_80CCCA00;
    case 0x80CCCA50u: goto label_80CCCA50;
    case 0x80CCCAA0u: goto label_80CCCAA0;
    case 0x80CCCAECu: goto label_80CCCAEC;
    case 0x80CCCB70u: goto label_80CCCB70;
    case 0x80CCCB94u: goto label_80CCCB94;
    case 0x80CCCC10u: goto label_80CCCC10;
    case 0x80CCCC78u: goto label_80CCCC78;
    case 0x80CCCCE0u: goto label_80CCCCE0;
    case 0x80CCCD30u: goto label_80CCCD30;
    case 0x80CCCD80u: goto label_80CCCD80;
    case 0x80CCCDC4u: goto label_80CCCDC4;
    case 0x80CCCDECu: goto label_80CCCDEC;
    case 0x80CCCDF8u: goto label_80CCCDF8;
    case 0x80CCCE04u: goto label_80CCCE04;
    case 0x80CCCE10u: goto label_80CCCE10;
    default: return;
    }
}

