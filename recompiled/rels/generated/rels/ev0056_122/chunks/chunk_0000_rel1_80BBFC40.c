// DolRecomp output
#include "../generated.h"

void func_80BBFC40(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80BBFC40[772] = {
        &&label_80BBFC40,
        &&label_80BBFC44,
        &&label_80BBFC48,
        &&label_80BBFC4C,
        &&label_80BBFC50,
        &&label_80BBFC54,
        &&label_80BBFC58,
        &&label_80BBFC5C,
        &&label_80BBFC60,
        &&label_80BBFC64,
        &&label_80BBFC68,
        &&label_80BBFC6C,
        &&label_80BBFC70,
        &&label_80BBFC74,
        &&label_80BBFC78,
        &&label_80BBFC7C,
        &&label_80BBFC80,
        &&label_80BBFC84,
        &&label_80BBFC88,
        &&label_80BBFC8C,
        &&label_80BBFC90,
        &&label_80BBFC94,
        &&label_80BBFC98,
        &&label_80BBFC9C,
        &&label_80BBFCA0,
        &&label_80BBFCA4,
        &&label_80BBFCA8,
        &&label_80BBFCAC,
        &&label_80BBFCB0,
        &&label_80BBFCB4,
        &&label_80BBFCB8,
        &&label_80BBFCBC,
        &&label_80BBFCC0,
        &&label_80BBFCC4,
        &&label_80BBFCC8,
        &&label_80BBFCCC,
        &&label_80BBFCD0,
        &&label_80BBFCD4,
        &&label_80BBFCD8,
        &&label_80BBFCDC,
        &&label_80BBFCE0,
        &&label_80BBFCE4,
        &&label_80BBFCE8,
        &&label_80BBFCEC,
        &&label_80BBFCF0,
        &&label_80BBFCF4,
        &&label_80BBFCF8,
        &&label_80BBFCFC,
        &&label_80BBFD00,
        &&label_80BBFD04,
        &&label_80BBFD08,
        &&label_80BBFD0C,
        &&label_80BBFD10,
        &&label_80BBFD14,
        &&label_80BBFD18,
        &&label_80BBFD1C,
        &&label_80BBFD20,
        &&label_80BBFD24,
        &&label_80BBFD28,
        &&label_80BBFD2C,
        &&label_80BBFD30,
        &&label_80BBFD34,
        &&label_80BBFD38,
        &&label_80BBFD3C,
        &&label_80BBFD40,
        &&label_80BBFD44,
        &&label_80BBFD48,
        &&label_80BBFD4C,
        &&label_80BBFD50,
        &&label_80BBFD54,
        &&label_80BBFD58,
        &&label_80BBFD5C,
        &&label_80BBFD60,
        &&label_80BBFD64,
        &&label_80BBFD68,
        &&label_80BBFD6C,
        &&label_80BBFD70,
        &&label_80BBFD74,
        &&label_80BBFD78,
        &&label_80BBFD7C,
        &&label_80BBFD80,
        &&label_80BBFD84,
        &&label_80BBFD88,
        &&label_80BBFD8C,
        &&label_80BBFD90,
        &&label_80BBFD94,
        &&label_80BBFD98,
        &&label_80BBFD9C,
        &&label_80BBFDA0,
        &&label_80BBFDA4,
        &&label_80BBFDA8,
        &&label_80BBFDAC,
        &&label_80BBFDB0,
        &&label_80BBFDB4,
        &&label_80BBFDB8,
        &&label_80BBFDBC,
        &&label_80BBFDC0,
        &&label_80BBFDC4,
        &&label_80BBFDC8,
        &&label_80BBFDCC,
        &&label_80BBFDD0,
        &&label_80BBFDD4,
        &&label_80BBFDD8,
        &&label_80BBFDDC,
        &&label_80BBFDE0,
        &&label_80BBFDE4,
        &&label_80BBFDE8,
        &&label_80BBFDEC,
        &&label_80BBFDF0,
        &&label_80BBFDF4,
        &&label_80BBFDF8,
        &&label_80BBFDFC,
        &&label_80BBFE00,
        &&label_80BBFE04,
        &&label_80BBFE08,
        &&label_80BBFE0C,
        &&label_80BBFE10,
        &&label_80BBFE14,
        &&label_80BBFE18,
        &&label_80BBFE1C,
        &&label_80BBFE20,
        &&label_80BBFE24,
        &&label_80BBFE28,
        &&label_80BBFE2C,
        &&label_80BBFE30,
        &&label_80BBFE34,
        &&label_80BBFE38,
        &&label_80BBFE3C,
        &&label_80BBFE40,
        &&label_80BBFE44,
        &&label_80BBFE48,
        &&label_80BBFE4C,
        &&label_80BBFE50,
        &&label_80BBFE54,
        &&label_80BBFE58,
        &&label_80BBFE5C,
        &&label_80BBFE60,
        &&label_80BBFE64,
        &&label_80BBFE68,
        &&label_80BBFE6C,
        &&label_80BBFE70,
        &&label_80BBFE74,
        &&label_80BBFE78,
        &&label_80BBFE7C,
        &&label_80BBFE80,
        &&label_80BBFE84,
        &&label_80BBFE88,
        &&label_80BBFE8C,
        &&label_80BBFE90,
        &&label_80BBFE94,
        &&label_80BBFE98,
        &&label_80BBFE9C,
        &&label_80BBFEA0,
        &&label_80BBFEA4,
        &&label_80BBFEA8,
        &&label_80BBFEAC,
        &&label_80BBFEB0,
        &&label_80BBFEB4,
        &&label_80BBFEB8,
        &&label_80BBFEBC,
        &&label_80BBFEC0,
        &&label_80BBFEC4,
        &&label_80BBFEC8,
        &&label_80BBFECC,
        &&label_80BBFED0,
        &&label_80BBFED4,
        &&label_80BBFED8,
        &&label_80BBFEDC,
        &&label_80BBFEE0,
        &&label_80BBFEE4,
        &&label_80BBFEE8,
        &&label_80BBFEEC,
        &&label_80BBFEF0,
        &&label_80BBFEF4,
        &&label_80BBFEF8,
        &&label_80BBFEFC,
        &&label_80BBFF00,
        &&label_80BBFF04,
        &&label_80BBFF08,
        &&label_80BBFF0C,
        &&label_80BBFF10,
        &&label_80BBFF14,
        &&label_80BBFF18,
        &&label_80BBFF1C,
        &&label_80BBFF20,
        &&label_80BBFF24,
        &&label_80BBFF28,
        &&label_80BBFF2C,
        &&label_80BBFF30,
        &&label_80BBFF34,
        &&label_80BBFF38,
        &&label_80BBFF3C,
        &&label_80BBFF40,
        &&label_80BBFF44,
        &&label_80BBFF48,
        &&label_80BBFF4C,
        &&label_80BBFF50,
        &&label_80BBFF54,
        &&label_80BBFF58,
        &&label_80BBFF5C,
        &&label_80BBFF60,
        &&label_80BBFF64,
        &&label_80BBFF68,
        &&label_80BBFF6C,
        &&label_80BBFF70,
        &&label_80BBFF74,
        &&label_80BBFF78,
        &&label_80BBFF7C,
        &&label_80BBFF80,
        &&label_80BBFF84,
        &&label_80BBFF88,
        &&label_80BBFF8C,
        &&label_80BBFF90,
        &&label_80BBFF94,
        &&label_80BBFF98,
        &&label_80BBFF9C,
        &&label_80BBFFA0,
        &&label_80BBFFA4,
        &&label_80BBFFA8,
        &&label_80BBFFAC,
        &&label_80BBFFB0,
        &&label_80BBFFB4,
        &&label_80BBFFB8,
        &&label_80BBFFBC,
        &&label_80BBFFC0,
        &&label_80BBFFC4,
        &&label_80BBFFC8,
        &&label_80BBFFCC,
        &&label_80BBFFD0,
        &&label_80BBFFD4,
        &&label_80BBFFD8,
        &&label_80BBFFDC,
        &&label_80BBFFE0,
        &&label_80BBFFE4,
        &&label_80BBFFE8,
        &&label_80BBFFEC,
        &&label_80BBFFF0,
        &&label_80BBFFF4,
        &&label_80BBFFF8,
        &&label_80BBFFFC,
        &&label_80BC0000,
        &&label_80BC0004,
        &&label_80BC0008,
        &&label_80BC000C,
        &&label_80BC0010,
        &&label_80BC0014,
        &&label_80BC0018,
        &&label_80BC001C,
        &&label_80BC0020,
        &&label_80BC0024,
        &&label_80BC0028,
        &&label_80BC002C,
        &&label_80BC0030,
        &&label_80BC0034,
        &&label_80BC0038,
        &&label_80BC003C,
        &&label_80BC0040,
        &&label_80BC0044,
        &&label_80BC0048,
        &&label_80BC004C,
        &&label_80BC0050,
        &&label_80BC0054,
        &&label_80BC0058,
        &&label_80BC005C,
        &&label_80BC0060,
        &&label_80BC0064,
        &&label_80BC0068,
        &&label_80BC006C,
        &&label_80BC0070,
        &&label_80BC0074,
        &&label_80BC0078,
        &&label_80BC007C,
        &&label_80BC0080,
        &&label_80BC0084,
        &&label_80BC0088,
        &&label_80BC008C,
        &&label_80BC0090,
        &&label_80BC0094,
        &&label_80BC0098,
        &&label_80BC009C,
        &&label_80BC00A0,
        &&label_80BC00A4,
        &&label_80BC00A8,
        &&label_80BC00AC,
        &&label_80BC00B0,
        &&label_80BC00B4,
        &&label_80BC00B8,
        &&label_80BC00BC,
        &&label_80BC00C0,
        &&label_80BC00C4,
        &&label_80BC00C8,
        &&label_80BC00CC,
        &&label_80BC00D0,
        &&label_80BC00D4,
        &&label_80BC00D8,
        &&label_80BC00DC,
        &&label_80BC00E0,
        &&label_80BC00E4,
        &&label_80BC00E8,
        &&label_80BC00EC,
        &&label_80BC00F0,
        &&label_80BC00F4,
        &&label_80BC00F8,
        &&label_80BC00FC,
        &&label_80BC0100,
        &&label_80BC0104,
        &&label_80BC0108,
        &&label_80BC010C,
        &&label_80BC0110,
        &&label_80BC0114,
        &&label_80BC0118,
        &&label_80BC011C,
        &&label_80BC0120,
        &&label_80BC0124,
        &&label_80BC0128,
        &&label_80BC012C,
        &&label_80BC0130,
        &&label_80BC0134,
        &&label_80BC0138,
        &&label_80BC013C,
        &&label_80BC0140,
        &&label_80BC0144,
        &&label_80BC0148,
        &&label_80BC014C,
        &&label_80BC0150,
        &&label_80BC0154,
        &&label_80BC0158,
        &&label_80BC015C,
        &&label_80BC0160,
        &&label_80BC0164,
        &&label_80BC0168,
        &&label_80BC016C,
        &&label_80BC0170,
        &&label_80BC0174,
        &&label_80BC0178,
        &&label_80BC017C,
        &&label_80BC0180,
        &&label_80BC0184,
        &&label_80BC0188,
        &&label_80BC018C,
        &&label_80BC0190,
        &&label_80BC0194,
        &&label_80BC0198,
        &&label_80BC019C,
        &&label_80BC01A0,
        &&label_80BC01A4,
        &&label_80BC01A8,
        &&label_80BC01AC,
        &&label_80BC01B0,
        &&label_80BC01B4,
        &&label_80BC01B8,
        &&label_80BC01BC,
        &&label_80BC01C0,
        &&label_80BC01C4,
        &&label_80BC01C8,
        &&label_80BC01CC,
        &&label_80BC01D0,
        &&label_80BC01D4,
        &&label_80BC01D8,
        &&label_80BC01DC,
        &&label_80BC01E0,
        &&label_80BC01E4,
        &&label_80BC01E8,
        &&label_80BC01EC,
        &&label_80BC01F0,
        &&label_80BC01F4,
        &&label_80BC01F8,
        &&label_80BC01FC,
        &&label_80BC0200,
        &&label_80BC0204,
        &&label_80BC0208,
        &&label_80BC020C,
        &&label_80BC0210,
        &&label_80BC0214,
        &&label_80BC0218,
        &&label_80BC021C,
        &&label_80BC0220,
        &&label_80BC0224,
        &&label_80BC0228,
        &&label_80BC022C,
        &&label_80BC0230,
        &&label_80BC0234,
        &&label_80BC0238,
        &&label_80BC023C,
        &&label_80BC0240,
        &&label_80BC0244,
        &&label_80BC0248,
        &&label_80BC024C,
        &&label_80BC0250,
        &&label_80BC0254,
        &&label_80BC0258,
        &&label_80BC025C,
        &&label_80BC0260,
        &&label_80BC0264,
        &&label_80BC0268,
        &&label_80BC026C,
        &&label_80BC0270,
        &&label_80BC0274,
        &&label_80BC0278,
        &&label_80BC027C,
        &&label_80BC0280,
        &&label_80BC0284,
        &&label_80BC0288,
        &&label_80BC028C,
        &&label_80BC0290,
        &&label_80BC0294,
        &&label_80BC0298,
        &&label_80BC029C,
        &&label_80BC02A0,
        &&label_80BC02A4,
        &&label_80BC02A8,
        &&label_80BC02AC,
        &&label_80BC02B0,
        &&label_80BC02B4,
        &&label_80BC02B8,
        &&label_80BC02BC,
        &&label_80BC02C0,
        &&label_80BC02C4,
        &&label_80BC02C8,
        &&label_80BC02CC,
        &&label_80BC02D0,
        &&label_80BC02D4,
        &&label_80BC02D8,
        &&label_80BC02DC,
        &&label_80BC02E0,
        &&label_80BC02E4,
        &&label_80BC02E8,
        &&label_80BC02EC,
        &&label_80BC02F0,
        &&label_80BC02F4,
        &&label_80BC02F8,
        &&label_80BC02FC,
        &&label_80BC0300,
        &&label_80BC0304,
        &&label_80BC0308,
        &&label_80BC030C,
        &&label_80BC0310,
        &&label_80BC0314,
        &&label_80BC0318,
        &&label_80BC031C,
        &&label_80BC0320,
        &&label_80BC0324,
        &&label_80BC0328,
        &&label_80BC032C,
        &&label_80BC0330,
        &&label_80BC0334,
        &&label_80BC0338,
        &&label_80BC033C,
        &&label_80BC0340,
        &&label_80BC0344,
        &&label_80BC0348,
        &&label_80BC034C,
        &&label_80BC0350,
        &&label_80BC0354,
        &&label_80BC0358,
        &&label_80BC035C,
        &&label_80BC0360,
        &&label_80BC0364,
        &&label_80BC0368,
        &&label_80BC036C,
        &&label_80BC0370,
        &&label_80BC0374,
        &&label_80BC0378,
        &&label_80BC037C,
        &&label_80BC0380,
        &&label_80BC0384,
        &&label_80BC0388,
        &&label_80BC038C,
        &&label_80BC0390,
        &&label_80BC0394,
        &&label_80BC0398,
        &&label_80BC039C,
        &&label_80BC03A0,
        &&label_80BC03A4,
        &&label_80BC03A8,
        &&label_80BC03AC,
        &&label_80BC03B0,
        &&label_80BC03B4,
        &&label_80BC03B8,
        &&label_80BC03BC,
        &&label_80BC03C0,
        &&label_80BC03C4,
        &&label_80BC03C8,
        &&label_80BC03CC,
        &&label_80BC03D0,
        &&label_80BC03D4,
        &&label_80BC03D8,
        &&label_80BC03DC,
        &&label_80BC03E0,
        &&label_80BC03E4,
        &&label_80BC03E8,
        &&label_80BC03EC,
        &&label_80BC03F0,
        &&label_80BC03F4,
        &&label_80BC03F8,
        &&label_80BC03FC,
        &&label_80BC0400,
        &&label_80BC0404,
        &&label_80BC0408,
        &&label_80BC040C,
        &&label_80BC0410,
        &&label_80BC0414,
        &&label_80BC0418,
        &&label_80BC041C,
        &&label_80BC0420,
        &&label_80BC0424,
        &&label_80BC0428,
        &&label_80BC042C,
        &&label_80BC0430,
        &&label_80BC0434,
        &&label_80BC0438,
        &&label_80BC043C,
        &&label_80BC0440,
        &&label_80BC0444,
        &&label_80BC0448,
        &&label_80BC044C,
        &&label_80BC0450,
        &&label_80BC0454,
        &&label_80BC0458,
        &&label_80BC045C,
        &&label_80BC0460,
        &&label_80BC0464,
        &&label_80BC0468,
        &&label_80BC046C,
        &&label_80BC0470,
        &&label_80BC0474,
        &&label_80BC0478,
        &&label_80BC047C,
        &&label_80BC0480,
        &&label_80BC0484,
        &&label_80BC0488,
        &&label_80BC048C,
        &&label_80BC0490,
        &&label_80BC0494,
        &&label_80BC0498,
        &&label_80BC049C,
        &&label_80BC04A0,
        &&label_80BC04A4,
        &&label_80BC04A8,
        &&label_80BC04AC,
        &&label_80BC04B0,
        &&label_80BC04B4,
        &&label_80BC04B8,
        &&label_80BC04BC,
        &&label_80BC04C0,
        &&label_80BC04C4,
        &&label_80BC04C8,
        &&label_80BC04CC,
        &&label_80BC04D0,
        &&label_80BC04D4,
        &&label_80BC04D8,
        &&label_80BC04DC,
        &&label_80BC04E0,
        &&label_80BC04E4,
        &&label_80BC04E8,
        &&label_80BC04EC,
        &&label_80BC04F0,
        &&label_80BC04F4,
        &&label_80BC04F8,
        &&label_80BC04FC,
        &&label_80BC0500,
        &&label_80BC0504,
        &&label_80BC0508,
        &&label_80BC050C,
        &&label_80BC0510,
        &&label_80BC0514,
        &&label_80BC0518,
        &&label_80BC051C,
        &&label_80BC0520,
        &&label_80BC0524,
        &&label_80BC0528,
        &&label_80BC052C,
        &&label_80BC0530,
        &&label_80BC0534,
        &&label_80BC0538,
        &&label_80BC053C,
        &&label_80BC0540,
        &&label_80BC0544,
        &&label_80BC0548,
        &&label_80BC054C,
        &&label_80BC0550,
        &&label_80BC0554,
        &&label_80BC0558,
        &&label_80BC055C,
        &&label_80BC0560,
        &&label_80BC0564,
        &&label_80BC0568,
        &&label_80BC056C,
        &&label_80BC0570,
        &&label_80BC0574,
        &&label_80BC0578,
        &&label_80BC057C,
        &&label_80BC0580,
        &&label_80BC0584,
        &&label_80BC0588,
        &&label_80BC058C,
        &&label_80BC0590,
        &&label_80BC0594,
        &&label_80BC0598,
        &&label_80BC059C,
        &&label_80BC05A0,
        &&label_80BC05A4,
        &&label_80BC05A8,
        &&label_80BC05AC,
        &&label_80BC05B0,
        &&label_80BC05B4,
        &&label_80BC05B8,
        &&label_80BC05BC,
        &&label_80BC05C0,
        &&label_80BC05C4,
        &&label_80BC05C8,
        &&label_80BC05CC,
        &&label_80BC05D0,
        &&label_80BC05D4,
        &&label_80BC05D8,
        &&label_80BC05DC,
        &&label_80BC05E0,
        &&label_80BC05E4,
        &&label_80BC05E8,
        &&label_80BC05EC,
        &&label_80BC05F0,
        &&label_80BC05F4,
        &&label_80BC05F8,
        &&label_80BC05FC,
        &&label_80BC0600,
        &&label_80BC0604,
        &&label_80BC0608,
        &&label_80BC060C,
        &&label_80BC0610,
        &&label_80BC0614,
        &&label_80BC0618,
        &&label_80BC061C,
        &&label_80BC0620,
        &&label_80BC0624,
        &&label_80BC0628,
        &&label_80BC062C,
        &&label_80BC0630,
        &&label_80BC0634,
        &&label_80BC0638,
        &&label_80BC063C,
        &&label_80BC0640,
        &&label_80BC0644,
        &&label_80BC0648,
        &&label_80BC064C,
        &&label_80BC0650,
        &&label_80BC0654,
        &&label_80BC0658,
        &&label_80BC065C,
        &&label_80BC0660,
        &&label_80BC0664,
        &&label_80BC0668,
        &&label_80BC066C,
        &&label_80BC0670,
        &&label_80BC0674,
        &&label_80BC0678,
        &&label_80BC067C,
        &&label_80BC0680,
        &&label_80BC0684,
        &&label_80BC0688,
        &&label_80BC068C,
        &&label_80BC0690,
        &&label_80BC0694,
        &&label_80BC0698,
        &&label_80BC069C,
        &&label_80BC06A0,
        &&label_80BC06A4,
        &&label_80BC06A8,
        &&label_80BC06AC,
        &&label_80BC06B0,
        &&label_80BC06B4,
        &&label_80BC06B8,
        &&label_80BC06BC,
        &&label_80BC06C0,
        &&label_80BC06C4,
        &&label_80BC06C8,
        &&label_80BC06CC,
        &&label_80BC06D0,
        &&label_80BC06D4,
        &&label_80BC06D8,
        &&label_80BC06DC,
        &&label_80BC06E0,
        &&label_80BC06E4,
        &&label_80BC06E8,
        &&label_80BC06EC,
        &&label_80BC06F0,
        &&label_80BC06F4,
        &&label_80BC06F8,
        &&label_80BC06FC,
        &&label_80BC0700,
        &&label_80BC0704,
        &&label_80BC0708,
        &&label_80BC070C,
        &&label_80BC0710,
        &&label_80BC0714,
        &&label_80BC0718,
        &&label_80BC071C,
        &&label_80BC0720,
        &&label_80BC0724,
        &&label_80BC0728,
        &&label_80BC072C,
        &&label_80BC0730,
        &&label_80BC0734,
        &&label_80BC0738,
        &&label_80BC073C,
        &&label_80BC0740,
        &&label_80BC0744,
        &&label_80BC0748,
        &&label_80BC074C,
        &&label_80BC0750,
        &&label_80BC0754,
        &&label_80BC0758,
        &&label_80BC075C,
        &&label_80BC0760,
        &&label_80BC0764,
        &&label_80BC0768,
        &&label_80BC076C,
        &&label_80BC0770,
        &&label_80BC0774,
        &&label_80BC0778,
        &&label_80BC077C,
        &&label_80BC0780,
        &&label_80BC0784,
        &&label_80BC0788,
        &&label_80BC078C,
        &&label_80BC0790,
        &&label_80BC0794,
        &&label_80BC0798,
        &&label_80BC079C,
        &&label_80BC07A0,
        &&label_80BC07A4,
        &&label_80BC07A8,
        &&label_80BC07AC,
        &&label_80BC07B0,
        &&label_80BC07B4,
        &&label_80BC07B8,
        &&label_80BC07BC,
        &&label_80BC07C0,
        &&label_80BC07C4,
        &&label_80BC07C8,
        &&label_80BC07CC,
        &&label_80BC07D0,
        &&label_80BC07D4,
        &&label_80BC07D8,
        &&label_80BC07DC,
        &&label_80BC07E0,
        &&label_80BC07E4,
        &&label_80BC07E8,
        &&label_80BC07EC,
        &&label_80BC07F0,
        &&label_80BC07F4,
        &&label_80BC07F8,
        &&label_80BC07FC,
        &&label_80BC0800,
        &&label_80BC0804,
        &&label_80BC0808,
        &&label_80BC080C,
        &&label_80BC0810,
        &&label_80BC0814,
        &&label_80BC0818,
        &&label_80BC081C,
        &&label_80BC0820,
        &&label_80BC0824,
        &&label_80BC0828,
        &&label_80BC082C,
        &&label_80BC0830,
        &&label_80BC0834,
        &&label_80BC0838,
        &&label_80BC083C,
        &&label_80BC0840,
        &&label_80BC0844,
        &&label_80BC0848,
        &&label_80BC084C
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80BBFC40u && pc <= 0x80BC084Cu && ((pc - 0x80BBFC40u) & 3u) == 0u)
            goto *pc_table_80BBFC40[(pc - 0x80BBFC40u) >> 2];
    }
    return;
label_80BBFC40:
    ctx->pc = 0x80BBFC40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BBFC40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BBFC40: stwu     r1, -16(r1)
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
label_80BBFC44:
    ctx->pc = 0x80BBFC44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFC44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BBFC44: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BBFC48:
    ctx->pc = 0x80BBFC48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFC48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BBFC48: stw     r0, 20(r1)
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
label_80BBFC4C:
    ctx->pc = 0x80BBFC4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFC4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BBFC4C: stw     r31, 12(r1)
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
label_80BBFC50:
    ctx->pc = 0x80BBFC50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFC50u)) return;
    // 80BBFC50: cmpwi   r3, 2
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

label_80BBFC54:
    ctx->pc = 0x80BBFC54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFC54u)) return;
    // 80BBFC54: bc    12, 2, 0x80BC0494
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80BC0494;
        }
    }

label_80BBFC58:
    ctx->pc = 0x80BBFC58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BBFC58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BBFC58: bc    4, 0, 0x80BBFC6C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80BBFC6C;
        }
    }

label_80BBFC5C:
    ctx->pc = 0x80BBFC5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BBFC5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BBFC5C: cmpwi   r3, 0
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

label_80BBFC60:
    ctx->pc = 0x80BBFC60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFC60u)) return;
    // 80BBFC60: bc    12, 2, 0x80BC0520
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80BC0520;
        }
    }

label_80BBFC64:
    ctx->pc = 0x80BBFC64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BBFC64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BBFC64: bc    4, 0, 0x80BBFC74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80BBFC74;
        }
    }

label_80BBFC68:
    ctx->pc = 0x80BBFC68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BBFC68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BBFC68: b       0x80BC0520
    {
            goto label_80BC0520;
    }

label_80BBFC6C:
    ctx->pc = 0x80BBFC6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BBFC6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BBFC6C: cmpwi   r3, 4
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

label_80BBFC70:
    ctx->pc = 0x80BBFC70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFC70u)) return;
    // 80BBFC70: b       0x80BC0520
    {
            goto label_80BC0520;
    }

label_80BBFC74:
    ctx->pc = 0x80BBFC74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BBFC74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BBFC74: bl      0x8045DE7C
    {
            ctx->lr = 0x80BBFC78u;
            ctx->pc = 0x8045DE7Cu;
            return;
    }

label_80BBFC78:
    ctx->pc = 0x80BBFC78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BBFC78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BBFC78: bl      0x80460A60
    {
            ctx->lr = 0x80BBFC7Cu;
            ctx->pc = 0x80460A60u;
            return;
    }

label_80BBFC7C:
    ctx->pc = 0x80BBFC7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BBFC7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BBFC7C: bl      0x80460A24
    {
            ctx->lr = 0x80BBFC80u;
            ctx->pc = 0x80460A24u;
            return;
    }

label_80BBFC80:
    ctx->pc = 0x80BBFC80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BBFC80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BBFC80: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BBFC84:
    ctx->pc = 0x80BBFC84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFC84u)) return;
    // 80BBFC84: bl      0x8045EC10
    {
            ctx->lr = 0x80BBFC88u;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80BBFC88:
    ctx->pc = 0x80BBFC88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BBFC88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BBFC88: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BBFC8C:
    ctx->pc = 0x80BBFC8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFC8Cu)) return;
    // 80BBFC8C: bl      0x8045F220
    {
            ctx->lr = 0x80BBFC90u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80BBFC90:
    ctx->pc = 0x80BBFC90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BBFC90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80BBFC90: lis     r4, -27514
    ctx->gpr[4] = ((u32)(s32)(-27514) << 16);

label_80BBFC94:
    ctx->pc = 0x80BBFC94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFC94u)) return;
    // 80BBFC94: addi    r4, r4, 20016
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(20016);

label_80BBFC98:
    ctx->pc = 0x80BBFC98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFC98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BBFC98: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BBFC98u)) return;
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
label_80BBFC9C:
    ctx->pc = 0x80BBFC9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFC9Cu)) return;
    // 80BBFC9C: lis     r4, -27514
    ctx->gpr[4] = ((u32)(s32)(-27514) << 16);

label_80BBFCA0:
    ctx->pc = 0x80BBFCA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFCA0u)) return;
    // 80BBFCA0: addi    r4, r4, 20020
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(20020);

label_80BBFCA4:
    ctx->pc = 0x80BBFCA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFCA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BBFCA4: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BBFCA4u)) return;
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
label_80BBFCA8:
    ctx->pc = 0x80BBFCA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFCA8u)) return;
    // 80BBFCA8: lis     r4, -27514
    ctx->gpr[4] = ((u32)(s32)(-27514) << 16);

label_80BBFCAC:
    ctx->pc = 0x80BBFCACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFCACu)) return;
    // 80BBFCAC: addi    r4, r4, 20024
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(20024);

label_80BBFCB0:
    ctx->pc = 0x80BBFCB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFCB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BBFCB0: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BBFCB0u)) return;
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
label_80BBFCB4:
    ctx->pc = 0x80BBFCB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFCB4u)) return;
    // 80BBFCB4: bl      0x8045EF2C
    {
            ctx->lr = 0x80BBFCB8u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80BBFCB8:
    ctx->pc = 0x80BBFCB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BBFCB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BBFCB8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BBFCBC:
    ctx->pc = 0x80BBFCBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFCBCu)) return;
    // 80BBFCBC: bl      0x8045F220
    {
            ctx->lr = 0x80BBFCC0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80BBFCC0:
    ctx->pc = 0x80BBFCC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BBFCC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80BBFCC0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80BBFCC4:
    ctx->pc = 0x80BBFCC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFCC4u)) return;
    // 80BBFCC4: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80BBFCC8:
    ctx->pc = 0x80BBFCC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFCC8u)) return;
    // 80BBFCC8: addi    r5, r5, -3584
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3584);

label_80BBFCCC:
    ctx->pc = 0x80BBFCCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFCCCu)) return;
    // 80BBFCCC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80BBFCD0:
    ctx->pc = 0x80BBFCD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFCD0u)) return;
    // 80BBFCD0: bl      0x8045EEA8
    {
            ctx->lr = 0x80BBFCD4u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80BBFCD4:
    ctx->pc = 0x80BBFCD4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BBFCD4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BBFCD4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BBFCD8:
    ctx->pc = 0x80BBFCD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFCD8u)) return;
    // 80BBFCD8: bl      0x8045EC10
    {
            ctx->lr = 0x80BBFCDCu;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80BBFCDC:
    ctx->pc = 0x80BBFCDCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 17u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BBFCDCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 17u : 1u;
    // 80BBFCDC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80BBFCE0:
    ctx->pc = 0x80BBFCE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFCE0u)) return;
    // 80BBFCE0: lis     r4, -32677
    ctx->gpr[4] = ((u32)(s32)(-32677) << 16);

label_80BBFCE4:
    ctx->pc = 0x80BBFCE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFCE4u)) return;
    // 80BBFCE4: addi    r4, r4, -3644
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-3644);

label_80BBFCE8:
    ctx->pc = 0x80BBFCE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFCE8u)) return;
    // 80BBFCE8: lis     r5, -27514
    ctx->gpr[5] = ((u32)(s32)(-27514) << 16);

label_80BBFCEC:
    ctx->pc = 0x80BBFCECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFCECu)) return;
    // 80BBFCEC: addi    r5, r5, 20028
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(20028);

label_80BBFCF0:
    ctx->pc = 0x80BBFCF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFCF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80BBFCF0: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BBFCF0u)) return;
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
label_80BBFCF4:
    ctx->pc = 0x80BBFCF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFCF4u)) return;
    // 80BBFCF4: lis     r5, -27514
    ctx->gpr[5] = ((u32)(s32)(-27514) << 16);

label_80BBFCF8:
    ctx->pc = 0x80BBFCF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFCF8u)) return;
    // 80BBFCF8: addi    r5, r5, 20020
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(20020);

label_80BBFCFC:
    ctx->pc = 0x80BBFCFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFCFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80BBFCFC: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BBFCFCu)) return;
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
label_80BBFD00:
    ctx->pc = 0x80BBFD00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFD00u)) return;
    // 80BBFD00: lis     r5, -27514
    ctx->gpr[5] = ((u32)(s32)(-27514) << 16);

label_80BBFD04:
    ctx->pc = 0x80BBFD04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFD04u)) return;
    // 80BBFD04: addi    r5, r5, 20032
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(20032);

label_80BBFD08:
    ctx->pc = 0x80BBFD08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFD08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BBFD08: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BBFD08u)) return;
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
label_80BBFD0C:
    ctx->pc = 0x80BBFD0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFD0Cu)) return;
    // 80BBFD0C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80BBFD10:
    ctx->pc = 0x80BBFD10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFD10u)) return;
    // 80BBFD10: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80BBFD14:
    ctx->pc = 0x80BBFD14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFD14u)) return;
    // 80BBFD14: addi    r6, r6, -1498
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-1498);

label_80BBFD18:
    ctx->pc = 0x80BBFD18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFD18u)) return;
    // 80BBFD18: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80BBFD1C:
    ctx->pc = 0x80BBFD1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFD1Cu)) return;
    // 80BBFD1C: bl      0x8045ED84
    {
            ctx->lr = 0x80BBFD20u;
            ctx->pc = 0x8045ED84u;
            return;
    }

label_80BBFD20:
    ctx->pc = 0x80BBFD20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BBFD20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80BBFD20: lis     r3, -27514
    ctx->gpr[3] = ((u32)(s32)(-27514) << 16);

label_80BBFD24:
    ctx->pc = 0x80BBFD24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFD24u)) return;
    // 80BBFD24: addi    r3, r3, 20036
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(20036);

label_80BBFD28:
    ctx->pc = 0x80BBFD28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFD28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BBFD28: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BBFD28u)) return;
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
label_80BBFD2C:
    ctx->pc = 0x80BBFD2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFD2Cu)) return;
    // 80BBFD2C: lis     r3, -27514
    ctx->gpr[3] = ((u32)(s32)(-27514) << 16);

label_80BBFD30:
    ctx->pc = 0x80BBFD30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFD30u)) return;
    // 80BBFD30: addi    r3, r3, 20040
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(20040);

label_80BBFD34:
    ctx->pc = 0x80BBFD34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFD34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BBFD34: lfs     f2, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BBFD34u)) return;
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
label_80BBFD38:
    ctx->pc = 0x80BBFD38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFD38u)) return;
    // 80BBFD38: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80BBFD38u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80BBFD3C:
    ctx->pc = 0x80BBFD3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFD3Cu)) return;
    // 80BBFD3C: fmr    f4, f1
    if (!ppc_fp_available_inline(ctx, 0x80BBFD3Cu)) return;
    ctx->fpr[4] = ctx->fpr[1];

label_80BBFD40:
    ctx->pc = 0x80BBFD40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFD40u)) return;
    // 80BBFD40: fmr    f5, f1
    if (!ppc_fp_available_inline(ctx, 0x80BBFD40u)) return;
    ctx->fpr[5] = ctx->fpr[1];

label_80BBFD44:
    ctx->pc = 0x80BBFD44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFD44u)) return;
    // 80BBFD44: bl      0x80BC075C
    {
            ctx->lr = 0x80BBFD48u;
            goto label_80BC075C;
    }

label_80BBFD48:
    ctx->pc = 0x80BBFD48u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BBFD48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80BBFD48: lis     r4, -27513
    ctx->gpr[4] = ((u32)(s32)(-27513) << 16);

label_80BBFD4C:
    ctx->pc = 0x80BBFD4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFD4Cu)) return;
    // 80BBFD4C: addi    r4, r4, 28480
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(28480);

label_80BBFD50:
    ctx->pc = 0x80BBFD50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFD50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BBFD50: stw     r3, 0(r4)
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
label_80BBFD54:
    ctx->pc = 0x80BBFD54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFD54u)) return;
    // 80BBFD54: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80BBFD58:
    ctx->pc = 0x80BBFD58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFD58u)) return;
    // 80BBFD58: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80BBFD5C:
    ctx->pc = 0x80BBFD5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFD5Cu)) return;
    // 80BBFD5C: li      r5, 10923
    ctx->gpr[5] = (u32)(s32)(10923);

label_80BBFD60:
    ctx->pc = 0x80BBFD60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFD60u)) return;
    // 80BBFD60: bl      0x8045C0F8
    {
            ctx->lr = 0x80BBFD64u;
            ctx->pc = 0x8045C0F8u;
            return;
    }

label_80BBFD64:
    ctx->pc = 0x80BBFD64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BBFD64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BBFD64: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80BBFD68:
    ctx->pc = 0x80BBFD68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFD68u)) return;
    // 80BBFD68: bl      0x8045F7C8
    {
            ctx->lr = 0x80BBFD6Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80BBFD6C:
    ctx->pc = 0x80BBFD6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BBFD6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BBFD6C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BBFD70:
    ctx->pc = 0x80BBFD70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFD70u)) return;
    // 80BBFD70: bl      0x8045F220
    {
            ctx->lr = 0x80BBFD74u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80BBFD74:
    ctx->pc = 0x80BBFD74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BBFD74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80BBFD74: lis     r4, -27513
    ctx->gpr[4] = ((u32)(s32)(-27513) << 16);

label_80BBFD78:
    ctx->pc = 0x80BBFD78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFD78u)) return;
    // 80BBFD78: addi    r4, r4, -4792
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-4792);

label_80BBFD7C:
    ctx->pc = 0x80BBFD7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFD7Cu)) return;
    // 80BBFD7C: lis     r5, -28615
    ctx->gpr[5] = ((u32)(s32)(-28615) << 16);

label_80BBFD80:
    ctx->pc = 0x80BBFD80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFD80u)) return;
    // 80BBFD80: addi    r5, r5, -7300
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-7300);

label_80BBFD84:
    ctx->pc = 0x80BBFD84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFD84u)) return;
    // 80BBFD84: lis     r6, -27514
    ctx->gpr[6] = ((u32)(s32)(-27514) << 16);

label_80BBFD88:
    ctx->pc = 0x80BBFD88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFD88u)) return;
    // 80BBFD88: addi    r6, r6, 20036
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(20036);

label_80BBFD8C:
    ctx->pc = 0x80BBFD8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFD8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BBFD8C: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80BBFD8Cu)) return;
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
label_80BBFD90:
    ctx->pc = 0x80BBFD90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFD90u)) return;
    // 80BBFD90: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80BBFD94:
    ctx->pc = 0x80BBFD94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFD94u)) return;
    // 80BBFD94: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80BBFD98:
    ctx->pc = 0x80BBFD98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFD98u)) return;
    // 80BBFD98: bl      0x8045EBE4
    {
            ctx->lr = 0x80BBFD9Cu;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80BBFD9C:
    ctx->pc = 0x80BBFD9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BBFD9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BBFD9C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BBFDA0:
    ctx->pc = 0x80BBFDA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFDA0u)) return;
    // 80BBFDA0: bl      0x8045F220
    {
            ctx->lr = 0x80BBFDA4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80BBFDA4:
    ctx->pc = 0x80BBFDA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BBFDA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80BBFDA4: lis     r4, -27514
    ctx->gpr[4] = ((u32)(s32)(-27514) << 16);

label_80BBFDA8:
    ctx->pc = 0x80BBFDA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFDA8u)) return;
    // 80BBFDA8: addi    r4, r4, 21432
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(21432);

label_80BBFDAC:
    ctx->pc = 0x80BBFDACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFDACu)) return;
    // 80BBFDAC: bl      0x8045C060
    {
            ctx->lr = 0x80BBFDB0u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80BBFDB0:
    ctx->pc = 0x80BBFDB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BBFDB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BBFDB0: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80BBFDB4:
    ctx->pc = 0x80BBFDB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFDB4u)) return;
    // 80BBFDB4: bl      0x8045F220
    {
            ctx->lr = 0x80BBFDB8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80BBFDB8:
    ctx->pc = 0x80BBFDB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BBFDB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80BBFDB8: lis     r4, -27514
    ctx->gpr[4] = ((u32)(s32)(-27514) << 16);

label_80BBFDBC:
    ctx->pc = 0x80BBFDBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFDBCu)) return;
    // 80BBFDBC: addi    r4, r4, 32424
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(32424);

label_80BBFDC0:
    ctx->pc = 0x80BBFDC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFDC0u)) return;
    // 80BBFDC0: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80BBFDC4:
    ctx->pc = 0x80BBFDC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFDC4u)) return;
    // 80BBFDC4: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80BBFDC8:
    ctx->pc = 0x80BBFDC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFDC8u)) return;
    // 80BBFDC8: lis     r6, -27514
    ctx->gpr[6] = ((u32)(s32)(-27514) << 16);

label_80BBFDCC:
    ctx->pc = 0x80BBFDCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFDCCu)) return;
    // 80BBFDCC: addi    r6, r6, 20044
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(20044);

label_80BBFDD0:
    ctx->pc = 0x80BBFDD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFDD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BBFDD0: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80BBFDD0u)) return;
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
label_80BBFDD4:
    ctx->pc = 0x80BBFDD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFDD4u)) return;
    // 80BBFDD4: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80BBFDD8:
    ctx->pc = 0x80BBFDD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFDD8u)) return;
    // 80BBFDD8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80BBFDDC:
    ctx->pc = 0x80BBFDDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFDDCu)) return;
    // 80BBFDDC: bl      0x8045EBE4
    {
            ctx->lr = 0x80BBFDE0u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80BBFDE0:
    ctx->pc = 0x80BBFDE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BBFDE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BBFDE0: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80BBFDE4:
    ctx->pc = 0x80BBFDE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFDE4u)) return;
    // 80BBFDE4: bl      0x8045F220
    {
            ctx->lr = 0x80BBFDE8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80BBFDE8:
    ctx->pc = 0x80BBFDE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BBFDE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80BBFDE8: lis     r4, -27514
    ctx->gpr[4] = ((u32)(s32)(-27514) << 16);

label_80BBFDEC:
    ctx->pc = 0x80BBFDECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFDECu)) return;
    // 80BBFDEC: addi    r4, r4, 21432
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(21432);

label_80BBFDF0:
    ctx->pc = 0x80BBFDF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFDF0u)) return;
    // 80BBFDF0: bl      0x8045C060
    {
            ctx->lr = 0x80BBFDF4u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80BBFDF4:
    ctx->pc = 0x80BBFDF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BBFDF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BBFDF4: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80BBFDF8:
    ctx->pc = 0x80BBFDF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFDF8u)) return;
    // 80BBFDF8: bl      0x8045F7C8
    {
            ctx->lr = 0x80BBFDFCu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80BBFDFC:
    ctx->pc = 0x80BBFDFCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BBFDFCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80BBFDFC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80BBFE00:
    ctx->pc = 0x80BBFE00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFE00u)) return;
    // 80BBFE00: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80BBFE04:
    ctx->pc = 0x80BBFE04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFE04u)) return;
    // 80BBFE04: lis     r5, -27514
    ctx->gpr[5] = ((u32)(s32)(-27514) << 16);

label_80BBFE08:
    ctx->pc = 0x80BBFE08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFE08u)) return;
    // 80BBFE08: addi    r5, r5, 20048
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(20048);

label_80BBFE0C:
    ctx->pc = 0x80BBFE0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFE0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BBFE0C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BBFE0Cu)) return;
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
label_80BBFE10:
    ctx->pc = 0x80BBFE10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFE10u)) return;
    // 80BBFE10: lis     r5, -27514
    ctx->gpr[5] = ((u32)(s32)(-27514) << 16);

label_80BBFE14:
    ctx->pc = 0x80BBFE14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFE14u)) return;
    // 80BBFE14: addi    r5, r5, 20052
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(20052);

label_80BBFE18:
    ctx->pc = 0x80BBFE18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFE18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BBFE18: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BBFE18u)) return;
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
label_80BBFE1C:
    ctx->pc = 0x80BBFE1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFE1Cu)) return;
    // 80BBFE1C: lis     r5, -27514
    ctx->gpr[5] = ((u32)(s32)(-27514) << 16);

label_80BBFE20:
    ctx->pc = 0x80BBFE20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFE20u)) return;
    // 80BBFE20: addi    r5, r5, 20056
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(20056);

label_80BBFE24:
    ctx->pc = 0x80BBFE24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFE24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BBFE24: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BBFE24u)) return;
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
label_80BBFE28:
    ctx->pc = 0x80BBFE28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFE28u)) return;
    // 80BBFE28: bl      0x8045C750
    {
            ctx->lr = 0x80BBFE2Cu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80BBFE2C:
    ctx->pc = 0x80BBFE2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BBFE2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80BBFE2C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80BBFE30:
    ctx->pc = 0x80BBFE30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFE30u)) return;
    // 80BBFE30: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80BBFE34:
    ctx->pc = 0x80BBFE34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFE34u)) return;
    // 80BBFE34: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80BBFE38:
    ctx->pc = 0x80BBFE38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFE38u)) return;
    // 80BBFE38: addi    r5, r5, -5914
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-5914);

label_80BBFE3C:
    ctx->pc = 0x80BBFE3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFE3Cu)) return;
    // 80BBFE3C: li      r6, 5809
    ctx->gpr[6] = (u32)(s32)(5809);

label_80BBFE40:
    ctx->pc = 0x80BBFE40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFE40u)) return;
    // 80BBFE40: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80BBFE44:
    ctx->pc = 0x80BBFE44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFE44u)) return;
    // 80BBFE44: bl      0x8045C7B4
    {
            ctx->lr = 0x80BBFE48u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80BBFE48:
    ctx->pc = 0x80BBFE48u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BBFE48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80BBFE48: lis     r3, -27513
    ctx->gpr[3] = ((u32)(s32)(-27513) << 16);

label_80BBFE4C:
    ctx->pc = 0x80BBFE4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFE4Cu)) return;
    // 80BBFE4C: addi    r3, r3, 28480
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28480);

label_80BBFE50:
    ctx->pc = 0x80BBFE50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFE50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BBFE50: lwz     r3, 0(r3)
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
label_80BBFE54:
    ctx->pc = 0x80BBFE54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFE54u)) return;
    // 80BBFE54: cmplwi  r3, 0x0000
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

label_80BBFE58:
    ctx->pc = 0x80BBFE58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFE58u)) return;
    // 80BBFE58: bc    12, 2, 0x80BBFE6C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80BBFE6C;
        }
    }

label_80BBFE5C:
    ctx->pc = 0x80BBFE5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BBFE5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80BBFE5C: lis     r4, -27514
    ctx->gpr[4] = ((u32)(s32)(-27514) << 16);

label_80BBFE60:
    ctx->pc = 0x80BBFE60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFE60u)) return;
    // 80BBFE60: addi    r4, r4, 20060
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(20060);

label_80BBFE64:
    ctx->pc = 0x80BBFE64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFE64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BBFE64: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BBFE64u)) return;
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
label_80BBFE68:
    ctx->pc = 0x80BBFE68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFE68u)) return;
    // 80BBFE68: bl      0x80BC0818
    {
            ctx->lr = 0x80BBFE6Cu;
            goto label_80BC0818;
    }

label_80BBFE6C:
    ctx->pc = 0x80BBFE6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BBFE6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BBFE6C: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80BBFE70:
    ctx->pc = 0x80BBFE70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFE70u)) return;
    // 80BBFE70: bl      0x8045F7C8
    {
            ctx->lr = 0x80BBFE74u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80BBFE74:
    ctx->pc = 0x80BBFE74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BBFE74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80BBFE74: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BBFE78:
    ctx->pc = 0x80BBFE78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFE78u)) return;
    // 80BBFE78: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_80BBFE7C:
    ctx->pc = 0x80BBFE7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFE7Cu)) return;
    // 80BBFE7C: lis     r5, -27514
    ctx->gpr[5] = ((u32)(s32)(-27514) << 16);

label_80BBFE80:
    ctx->pc = 0x80BBFE80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFE80u)) return;
    // 80BBFE80: addi    r5, r5, 20064
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(20064);

label_80BBFE84:
    ctx->pc = 0x80BBFE84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFE84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BBFE84: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BBFE84u)) return;
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
label_80BBFE88:
    ctx->pc = 0x80BBFE88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFE88u)) return;
    // 80BBFE88: lis     r5, -27514
    ctx->gpr[5] = ((u32)(s32)(-27514) << 16);

label_80BBFE8C:
    ctx->pc = 0x80BBFE8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFE8Cu)) return;
    // 80BBFE8C: addi    r5, r5, 20068
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(20068);

label_80BBFE90:
    ctx->pc = 0x80BBFE90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFE90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BBFE90: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BBFE90u)) return;
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
label_80BBFE94:
    ctx->pc = 0x80BBFE94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFE94u)) return;
    // 80BBFE94: lis     r5, -27514
    ctx->gpr[5] = ((u32)(s32)(-27514) << 16);

label_80BBFE98:
    ctx->pc = 0x80BBFE98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFE98u)) return;
    // 80BBFE98: addi    r5, r5, 20072
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(20072);

label_80BBFE9C:
    ctx->pc = 0x80BBFE9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFE9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BBFE9C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BBFE9Cu)) return;
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
label_80BBFEA0:
    ctx->pc = 0x80BBFEA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFEA0u)) return;
    // 80BBFEA0: bl      0x8045C750
    {
            ctx->lr = 0x80BBFEA4u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80BBFEA4:
    ctx->pc = 0x80BBFEA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BBFEA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80BBFEA4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BBFEA8:
    ctx->pc = 0x80BBFEA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFEA8u)) return;
    // 80BBFEA8: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_80BBFEAC:
    ctx->pc = 0x80BBFEACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFEACu)) return;
    // 80BBFEAC: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80BBFEB0:
    ctx->pc = 0x80BBFEB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFEB0u)) return;
    // 80BBFEB0: addi    r5, r5, -5658
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-5658);

label_80BBFEB4:
    ctx->pc = 0x80BBFEB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFEB4u)) return;
    // 80BBFEB4: li      r6, 5041
    ctx->gpr[6] = (u32)(s32)(5041);

label_80BBFEB8:
    ctx->pc = 0x80BBFEB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFEB8u)) return;
    // 80BBFEB8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80BBFEBC:
    ctx->pc = 0x80BBFEBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFEBCu)) return;
    // 80BBFEBC: bl      0x8045C7B4
    {
            ctx->lr = 0x80BBFEC0u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80BBFEC0:
    ctx->pc = 0x80BBFEC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BBFEC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BBFEC0: li      r3, 100
    ctx->gpr[3] = (u32)(s32)(100);

label_80BBFEC4:
    ctx->pc = 0x80BBFEC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFEC4u)) return;
    // 80BBFEC4: bl      0x8045F7C8
    {
            ctx->lr = 0x80BBFEC8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80BBFEC8:
    ctx->pc = 0x80BBFEC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BBFEC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BBFEC8: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80BBFECC:
    ctx->pc = 0x80BBFECCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFECCu)) return;
    // 80BBFECC: bl      0x8045F220
    {
            ctx->lr = 0x80BBFED0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80BBFED0:
    ctx->pc = 0x80BBFED0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BBFED0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80BBFED0: lis     r4, -27514
    ctx->gpr[4] = ((u32)(s32)(-27514) << 16);

label_80BBFED4:
    ctx->pc = 0x80BBFED4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFED4u)) return;
    // 80BBFED4: addi    r4, r4, 21452
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(21452);

label_80BBFED8:
    ctx->pc = 0x80BBFED8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFED8u)) return;
    // 80BBFED8: bl      0x8045C060
    {
            ctx->lr = 0x80BBFEDCu;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80BBFEDC:
    ctx->pc = 0x80BBFEDCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BBFEDCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BBFEDC: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_80BBFEE0:
    ctx->pc = 0x80BBFEE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFEE0u)) return;
    // 80BBFEE0: bl      0x8045F7C8
    {
            ctx->lr = 0x80BBFEE4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80BBFEE4:
    ctx->pc = 0x80BBFEE4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BBFEE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BBFEE4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BBFEE8:
    ctx->pc = 0x80BBFEE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFEE8u)) return;
    // 80BBFEE8: bl      0x8045F220
    {
            ctx->lr = 0x80BBFEECu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80BBFEEC:
    ctx->pc = 0x80BBFEECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BBFEECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80BBFEEC: lis     r4, -27514
    ctx->gpr[4] = ((u32)(s32)(-27514) << 16);

label_80BBFEF0:
    ctx->pc = 0x80BBFEF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFEF0u)) return;
    // 80BBFEF0: addi    r4, r4, 21452
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(21452);

label_80BBFEF4:
    ctx->pc = 0x80BBFEF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFEF4u)) return;
    // 80BBFEF4: bl      0x8045C060
    {
            ctx->lr = 0x80BBFEF8u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80BBFEF8:
    ctx->pc = 0x80BBFEF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BBFEF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BBFEF8: li      r3, 27
    ctx->gpr[3] = (u32)(s32)(27);

label_80BBFEFC:
    ctx->pc = 0x80BBFEFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFEFCu)) return;
    // 80BBFEFC: bl      0x8045F7C8
    {
            ctx->lr = 0x80BBFF00u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80BBFF00:
    ctx->pc = 0x80BBFF00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BBFF00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BBFF00: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80BBFF04:
    ctx->pc = 0x80BBFF04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFF04u)) return;
    // 80BBFF04: bl      0x8045F220
    {
            ctx->lr = 0x80BBFF08u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80BBFF08:
    ctx->pc = 0x80BBFF08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BBFF08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80BBFF08: lis     r4, -27513
    ctx->gpr[4] = ((u32)(s32)(-27513) << 16);

label_80BBFF0C:
    ctx->pc = 0x80BBFF0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFF0Cu)) return;
    // 80BBFF0C: addi    r4, r4, -23220
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-23220);

label_80BBFF10:
    ctx->pc = 0x80BBFF10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFF10u)) return;
    // 80BBFF10: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80BBFF14:
    ctx->pc = 0x80BBFF14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFF14u)) return;
    // 80BBFF14: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80BBFF18:
    ctx->pc = 0x80BBFF18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFF18u)) return;
    // 80BBFF18: lis     r6, -27514
    ctx->gpr[6] = ((u32)(s32)(-27514) << 16);

label_80BBFF1C:
    ctx->pc = 0x80BBFF1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFF1Cu)) return;
    // 80BBFF1C: addi    r6, r6, 20036
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(20036);

label_80BBFF20:
    ctx->pc = 0x80BBFF20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFF20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BBFF20: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80BBFF20u)) return;
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
label_80BBFF24:
    ctx->pc = 0x80BBFF24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFF24u)) return;
    // 80BBFF24: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80BBFF28:
    ctx->pc = 0x80BBFF28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFF28u)) return;
    // 80BBFF28: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80BBFF2C:
    ctx->pc = 0x80BBFF2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFF2Cu)) return;
    // 80BBFF2C: bl      0x8045EBE4
    {
            ctx->lr = 0x80BBFF30u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80BBFF30:
    ctx->pc = 0x80BBFF30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BBFF30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BBFF30: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80BBFF34:
    ctx->pc = 0x80BBFF34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFF34u)) return;
    // 80BBFF34: bl      0x8045F220
    {
            ctx->lr = 0x80BBFF38u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80BBFF38:
    ctx->pc = 0x80BBFF38u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BBFF38u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80BBFF38: lis     r4, -28587
    ctx->gpr[4] = ((u32)(s32)(-28587) << 16);

label_80BBFF3C:
    ctx->pc = 0x80BBFF3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFF3Cu)) return;
    // 80BBFF3C: addi    r4, r4, 8236
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8236);

label_80BBFF40:
    ctx->pc = 0x80BBFF40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFF40u)) return;
    // 80BBFF40: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80BBFF44:
    ctx->pc = 0x80BBFF44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFF44u)) return;
    // 80BBFF44: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80BBFF48:
    ctx->pc = 0x80BBFF48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFF48u)) return;
    // 80BBFF48: lis     r6, -27514
    ctx->gpr[6] = ((u32)(s32)(-27514) << 16);

label_80BBFF4C:
    ctx->pc = 0x80BBFF4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFF4Cu)) return;
    // 80BBFF4C: addi    r6, r6, 20036
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(20036);

label_80BBFF50:
    ctx->pc = 0x80BBFF50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFF50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BBFF50: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80BBFF50u)) return;
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
label_80BBFF54:
    ctx->pc = 0x80BBFF54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFF54u)) return;
    // 80BBFF54: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80BBFF58:
    ctx->pc = 0x80BBFF58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFF58u)) return;
    // 80BBFF58: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_80BBFF5C:
    ctx->pc = 0x80BBFF5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFF5Cu)) return;
    // 80BBFF5C: bl      0x8045EBE4
    {
            ctx->lr = 0x80BBFF60u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80BBFF60:
    ctx->pc = 0x80BBFF60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BBFF60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BBFF60: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_80BBFF64:
    ctx->pc = 0x80BBFF64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFF64u)) return;
    // 80BBFF64: bl      0x8045F7C8
    {
            ctx->lr = 0x80BBFF68u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80BBFF68:
    ctx->pc = 0x80BBFF68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BBFF68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BBFF68: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BBFF6C:
    ctx->pc = 0x80BBFF6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFF6Cu)) return;
    // 80BBFF6C: bl      0x8045F220
    {
            ctx->lr = 0x80BBFF70u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80BBFF70:
    ctx->pc = 0x80BBFF70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BBFF70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80BBFF70: lis     r4, -27513
    ctx->gpr[4] = ((u32)(s32)(-27513) << 16);

label_80BBFF74:
    ctx->pc = 0x80BBFF74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFF74u)) return;
    // 80BBFF74: addi    r4, r4, 11644
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(11644);

label_80BBFF78:
    ctx->pc = 0x80BBFF78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFF78u)) return;
    // 80BBFF78: lis     r5, -28615
    ctx->gpr[5] = ((u32)(s32)(-28615) << 16);

label_80BBFF7C:
    ctx->pc = 0x80BBFF7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFF7Cu)) return;
    // 80BBFF7C: addi    r5, r5, -7300
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-7300);

label_80BBFF80:
    ctx->pc = 0x80BBFF80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFF80u)) return;
    // 80BBFF80: lis     r6, -27514
    ctx->gpr[6] = ((u32)(s32)(-27514) << 16);

label_80BBFF84:
    ctx->pc = 0x80BBFF84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFF84u)) return;
    // 80BBFF84: addi    r6, r6, 20036
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(20036);

label_80BBFF88:
    ctx->pc = 0x80BBFF88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFF88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BBFF88: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80BBFF88u)) return;
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
label_80BBFF8C:
    ctx->pc = 0x80BBFF8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFF8Cu)) return;
    // 80BBFF8C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80BBFF90:
    ctx->pc = 0x80BBFF90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFF90u)) return;
    // 80BBFF90: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80BBFF94:
    ctx->pc = 0x80BBFF94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFF94u)) return;
    // 80BBFF94: bl      0x8045EBE4
    {
            ctx->lr = 0x80BBFF98u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80BBFF98:
    ctx->pc = 0x80BBFF98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BBFF98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BBFF98: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BBFF9C:
    ctx->pc = 0x80BBFF9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFF9Cu)) return;
    // 80BBFF9C: bl      0x8045F220
    {
            ctx->lr = 0x80BBFFA0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80BBFFA0:
    ctx->pc = 0x80BBFFA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BBFFA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BBFFA0: bl      0x8045EB40
    {
            ctx->lr = 0x80BBFFA4u;
            ctx->pc = 0x8045EB40u;
            return;
    }

label_80BBFFA4:
    ctx->pc = 0x80BBFFA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BBFFA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BBFFA4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BBFFA8:
    ctx->pc = 0x80BBFFA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFFA8u)) return;
    // 80BBFFA8: bl      0x8045F220
    {
            ctx->lr = 0x80BBFFACu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80BBFFAC:
    ctx->pc = 0x80BBFFACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BBFFACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80BBFFAC: lis     r4, -27514
    ctx->gpr[4] = ((u32)(s32)(-27514) << 16);

label_80BBFFB0:
    ctx->pc = 0x80BBFFB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFFB0u)) return;
    // 80BBFFB0: addi    r4, r4, 20076
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(20076);

label_80BBFFB4:
    ctx->pc = 0x80BBFFB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFFB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BBFFB4: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BBFFB4u)) return;
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
label_80BBFFB8:
    ctx->pc = 0x80BBFFB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFFB8u)) return;
    // 80BBFFB8: lis     r4, -27514
    ctx->gpr[4] = ((u32)(s32)(-27514) << 16);

label_80BBFFBC:
    ctx->pc = 0x80BBFFBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFFBCu)) return;
    // 80BBFFBC: addi    r4, r4, 20020
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(20020);

label_80BBFFC0:
    ctx->pc = 0x80BBFFC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFFC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BBFFC0: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BBFFC0u)) return;
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
label_80BBFFC4:
    ctx->pc = 0x80BBFFC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFFC4u)) return;
    // 80BBFFC4: lis     r4, -27514
    ctx->gpr[4] = ((u32)(s32)(-27514) << 16);

label_80BBFFC8:
    ctx->pc = 0x80BBFFC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFFC8u)) return;
    // 80BBFFC8: addi    r4, r4, 20080
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(20080);

label_80BBFFCC:
    ctx->pc = 0x80BBFFCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFFCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BBFFCC: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BBFFCCu)) return;
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
label_80BBFFD0:
    ctx->pc = 0x80BBFFD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFFD0u)) return;
    // 80BBFFD0: bl      0x8045EF2C
    {
            ctx->lr = 0x80BBFFD4u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80BBFFD4:
    ctx->pc = 0x80BBFFD4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BBFFD4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BBFFD4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BBFFD8:
    ctx->pc = 0x80BBFFD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFFD8u)) return;
    // 80BBFFD8: bl      0x8045F220
    {
            ctx->lr = 0x80BBFFDCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80BBFFDC:
    ctx->pc = 0x80BBFFDCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BBFFDCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80BBFFDC: lis     r4, -27513
    ctx->gpr[4] = ((u32)(s32)(-27513) << 16);

label_80BBFFE0:
    ctx->pc = 0x80BBFFE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFFE0u)) return;
    // 80BBFFE0: addi    r4, r4, 22000
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22000);

label_80BBFFE4:
    ctx->pc = 0x80BBFFE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFFE4u)) return;
    // 80BBFFE4: lis     r5, -28615
    ctx->gpr[5] = ((u32)(s32)(-28615) << 16);

label_80BBFFE8:
    ctx->pc = 0x80BBFFE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFFE8u)) return;
    // 80BBFFE8: addi    r5, r5, -7300
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-7300);

label_80BBFFEC:
    ctx->pc = 0x80BBFFECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFFECu)) return;
    // 80BBFFEC: lis     r6, -27514
    ctx->gpr[6] = ((u32)(s32)(-27514) << 16);

label_80BBFFF0:
    ctx->pc = 0x80BBFFF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFFF0u)) return;
    // 80BBFFF0: addi    r6, r6, 20036
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(20036);

label_80BBFFF4:
    ctx->pc = 0x80BBFFF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFFF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BBFFF4: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80BBFFF4u)) return;
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
label_80BBFFF8:
    ctx->pc = 0x80BBFFF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFFF8u)) return;
    // 80BBFFF8: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80BBFFFC:
    ctx->pc = 0x80BBFFFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BBFFFCu)) return;
    // 80BBFFFC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80BC0000:
    ctx->pc = 0x80BC0000u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0000u)) return;
    // 80BC0000: bl      0x8045EBE4
    {
            ctx->lr = 0x80BC0004u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80BC0004:
    ctx->pc = 0x80BC0004u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC0004u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BC0004: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_80BC0008:
    ctx->pc = 0x80BC0008u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0008u)) return;
    // 80BC0008: bl      0x8045F7C8
    {
            ctx->lr = 0x80BC000Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80BC000C:
    ctx->pc = 0x80BC000Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC000Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80BC000C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80BC0010:
    ctx->pc = 0x80BC0010u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0010u)) return;
    // 80BC0010: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80BC0014:
    ctx->pc = 0x80BC0014u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0014u)) return;
    // 80BC0014: lis     r5, -27514
    ctx->gpr[5] = ((u32)(s32)(-27514) << 16);

label_80BC0018:
    ctx->pc = 0x80BC0018u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0018u)) return;
    // 80BC0018: addi    r5, r5, 20084
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(20084);

label_80BC001C:
    ctx->pc = 0x80BC001Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC001Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BC001C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BC001Cu)) return;
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
label_80BC0020:
    ctx->pc = 0x80BC0020u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0020u)) return;
    // 80BC0020: lis     r5, -27514
    ctx->gpr[5] = ((u32)(s32)(-27514) << 16);

label_80BC0024:
    ctx->pc = 0x80BC0024u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0024u)) return;
    // 80BC0024: addi    r5, r5, 20088
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(20088);

label_80BC0028:
    ctx->pc = 0x80BC0028u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0028u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BC0028: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BC0028u)) return;
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
label_80BC002C:
    ctx->pc = 0x80BC002Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC002Cu)) return;
    // 80BC002C: lis     r5, -27514
    ctx->gpr[5] = ((u32)(s32)(-27514) << 16);

label_80BC0030:
    ctx->pc = 0x80BC0030u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0030u)) return;
    // 80BC0030: addi    r5, r5, 20092
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(20092);

label_80BC0034:
    ctx->pc = 0x80BC0034u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0034u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BC0034: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BC0034u)) return;
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
label_80BC0038:
    ctx->pc = 0x80BC0038u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0038u)) return;
    // 80BC0038: bl      0x8045C750
    {
            ctx->lr = 0x80BC003Cu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80BC003C:
    ctx->pc = 0x80BC003Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC003Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80BC003C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80BC0040:
    ctx->pc = 0x80BC0040u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0040u)) return;
    // 80BC0040: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80BC0044:
    ctx->pc = 0x80BC0044u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0044u)) return;
    // 80BC0044: li      r5, 3302
    ctx->gpr[5] = (u32)(s32)(3302);

label_80BC0048:
    ctx->pc = 0x80BC0048u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0048u)) return;
    // 80BC0048: li      r6, 10161
    ctx->gpr[6] = (u32)(s32)(10161);

label_80BC004C:
    ctx->pc = 0x80BC004Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC004Cu)) return;
    // 80BC004C: lis     r7, 1
    ctx->gpr[7] = ((u32)(s32)(1) << 16);

label_80BC0050:
    ctx->pc = 0x80BC0050u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0050u)) return;
    // 80BC0050: addi    r7, r7, -256
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-256);

label_80BC0054:
    ctx->pc = 0x80BC0054u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0054u)) return;
    // 80BC0054: bl      0x8045C7B4
    {
            ctx->lr = 0x80BC0058u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80BC0058:
    ctx->pc = 0x80BC0058u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC0058u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BC0058: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BC005C:
    ctx->pc = 0x80BC005Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC005Cu)) return;
    // 80BC005C: bl      0x8045F220
    {
            ctx->lr = 0x80BC0060u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80BC0060:
    ctx->pc = 0x80BC0060u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC0060u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80BC0060: lis     r4, -27513
    ctx->gpr[4] = ((u32)(s32)(-27513) << 16);

label_80BC0064:
    ctx->pc = 0x80BC0064u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0064u)) return;
    // 80BC0064: addi    r4, r4, 26500
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(26500);

label_80BC0068:
    ctx->pc = 0x80BC0068u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0068u)) return;
    // 80BC0068: lis     r5, -28615
    ctx->gpr[5] = ((u32)(s32)(-28615) << 16);

label_80BC006C:
    ctx->pc = 0x80BC006Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC006Cu)) return;
    // 80BC006C: addi    r5, r5, -7300
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-7300);

label_80BC0070:
    ctx->pc = 0x80BC0070u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0070u)) return;
    // 80BC0070: lis     r6, -27514
    ctx->gpr[6] = ((u32)(s32)(-27514) << 16);

label_80BC0074:
    ctx->pc = 0x80BC0074u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0074u)) return;
    // 80BC0074: addi    r6, r6, 20036
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(20036);

label_80BC0078:
    ctx->pc = 0x80BC0078u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0078u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BC0078: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80BC0078u)) return;
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
label_80BC007C:
    ctx->pc = 0x80BC007Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC007Cu)) return;
    // 80BC007C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80BC0080:
    ctx->pc = 0x80BC0080u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0080u)) return;
    // 80BC0080: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_80BC0084:
    ctx->pc = 0x80BC0084u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0084u)) return;
    // 80BC0084: bl      0x8045EBE4
    {
            ctx->lr = 0x80BC0088u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80BC0088:
    ctx->pc = 0x80BC0088u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC0088u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BC0088: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80BC008C:
    ctx->pc = 0x80BC008Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC008Cu)) return;
    // 80BC008C: bl      0x8045F220
    {
            ctx->lr = 0x80BC0090u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80BC0090:
    ctx->pc = 0x80BC0090u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC0090u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80BC0090: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80BC0094:
    ctx->pc = 0x80BC0094u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0094u)) return;
    // 80BC0094: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BC0098:
    ctx->pc = 0x80BC0098u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0098u)) return;
    // 80BC0098: bl      0x8045F220
    {
            ctx->lr = 0x80BC009Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80BC009C:
    ctx->pc = 0x80BC009Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC009Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80BC009C: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80BC00A0:
    ctx->pc = 0x80BC00A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC00A0u)) return;
    // 80BC00A0: lis     r5, -27514
    ctx->gpr[5] = ((u32)(s32)(-27514) << 16);

label_80BC00A4:
    ctx->pc = 0x80BC00A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC00A4u)) return;
    // 80BC00A4: addi    r5, r5, 20096
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(20096);

label_80BC00A8:
    ctx->pc = 0x80BC00A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC00A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BC00A8: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BC00A8u)) return;
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
label_80BC00AC:
    ctx->pc = 0x80BC00ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC00ACu)) return;
    // 80BC00AC: lis     r5, -27514
    ctx->gpr[5] = ((u32)(s32)(-27514) << 16);

label_80BC00B0:
    ctx->pc = 0x80BC00B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC00B0u)) return;
    // 80BC00B0: addi    r5, r5, 20100
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(20100);

label_80BC00B4:
    ctx->pc = 0x80BC00B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC00B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BC00B4: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BC00B4u)) return;
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
label_80BC00B8:
    ctx->pc = 0x80BC00B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC00B8u)) return;
    // 80BC00B8: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80BC00B8u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80BC00BC:
    ctx->pc = 0x80BC00BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC00BCu)) return;
    // 80BC00BC: bl      0x8045E734
    {
            ctx->lr = 0x80BC00C0u;
            ctx->pc = 0x8045E734u;
            return;
    }

label_80BC00C0:
    ctx->pc = 0x80BC00C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC00C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BC00C0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BC00C4:
    ctx->pc = 0x80BC00C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC00C4u)) return;
    // 80BC00C4: bl      0x8045F220
    {
            ctx->lr = 0x80BC00C8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80BC00C8:
    ctx->pc = 0x80BC00C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC00C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80BC00C8: lis     r4, -27513
    ctx->gpr[4] = ((u32)(s32)(-27513) << 16);

label_80BC00CC:
    ctx->pc = 0x80BC00CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC00CCu)) return;
    // 80BC00CC: addi    r4, r4, 28472
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(28472);

label_80BC00D0:
    ctx->pc = 0x80BC00D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC00D0u)) return;
    // 80BC00D0: lis     r5, -28615
    ctx->gpr[5] = ((u32)(s32)(-28615) << 16);

label_80BC00D4:
    ctx->pc = 0x80BC00D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC00D4u)) return;
    // 80BC00D4: addi    r5, r5, -7300
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-7300);

label_80BC00D8:
    ctx->pc = 0x80BC00D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC00D8u)) return;
    // 80BC00D8: lis     r6, -27514
    ctx->gpr[6] = ((u32)(s32)(-27514) << 16);

label_80BC00DC:
    ctx->pc = 0x80BC00DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC00DCu)) return;
    // 80BC00DC: addi    r6, r6, 20104
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(20104);

label_80BC00E0:
    ctx->pc = 0x80BC00E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC00E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BC00E0: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80BC00E0u)) return;
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
label_80BC00E4:
    ctx->pc = 0x80BC00E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC00E4u)) return;
    // 80BC00E4: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80BC00E8:
    ctx->pc = 0x80BC00E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC00E8u)) return;
    // 80BC00E8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80BC00EC:
    ctx->pc = 0x80BC00ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC00ECu)) return;
    // 80BC00EC: bl      0x8045EBE4
    {
            ctx->lr = 0x80BC00F0u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80BC00F0:
    ctx->pc = 0x80BC00F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC00F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BC00F0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BC00F4:
    ctx->pc = 0x80BC00F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC00F4u)) return;
    // 80BC00F4: bl      0x8045F220
    {
            ctx->lr = 0x80BC00F8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80BC00F8:
    ctx->pc = 0x80BC00F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC00F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80BC00F8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80BC00FC:
    ctx->pc = 0x80BC00FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC00FCu)) return;
    // 80BC00FC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80BC0100:
    ctx->pc = 0x80BC0100u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0100u)) return;
    // 80BC0100: bl      0x8045F220
    {
            ctx->lr = 0x80BC0104u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80BC0104:
    ctx->pc = 0x80BC0104u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC0104u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80BC0104: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80BC0108:
    ctx->pc = 0x80BC0108u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0108u)) return;
    // 80BC0108: lis     r5, -27514
    ctx->gpr[5] = ((u32)(s32)(-27514) << 16);

label_80BC010C:
    ctx->pc = 0x80BC010Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC010Cu)) return;
    // 80BC010C: addi    r5, r5, 20096
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(20096);

label_80BC0110:
    ctx->pc = 0x80BC0110u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0110u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BC0110: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BC0110u)) return;
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
label_80BC0114:
    ctx->pc = 0x80BC0114u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0114u)) return;
    // 80BC0114: lis     r5, -27514
    ctx->gpr[5] = ((u32)(s32)(-27514) << 16);

label_80BC0118:
    ctx->pc = 0x80BC0118u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0118u)) return;
    // 80BC0118: addi    r5, r5, 20100
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(20100);

label_80BC011C:
    ctx->pc = 0x80BC011Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC011Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BC011C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BC011Cu)) return;
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
label_80BC0120:
    ctx->pc = 0x80BC0120u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0120u)) return;
    // 80BC0120: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80BC0120u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80BC0124:
    ctx->pc = 0x80BC0124u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0124u)) return;
    // 80BC0124: bl      0x8045E734
    {
            ctx->lr = 0x80BC0128u;
            ctx->pc = 0x8045E734u;
            return;
    }

label_80BC0128:
    ctx->pc = 0x80BC0128u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC0128u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BC0128: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BC012C:
    ctx->pc = 0x80BC012Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC012Cu)) return;
    // 80BC012C: bl      0x8045F220
    {
            ctx->lr = 0x80BC0130u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80BC0130:
    ctx->pc = 0x80BC0130u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC0130u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BC0130: bl      0x8045C034
    {
            ctx->lr = 0x80BC0134u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80BC0134:
    ctx->pc = 0x80BC0134u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC0134u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BC0134: li      r3, 674
    ctx->gpr[3] = (u32)(s32)(674);

label_80BC0138:
    ctx->pc = 0x80BC0138u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0138u)) return;
    // 80BC0138: bl      0x8045BFA0
    {
            ctx->lr = 0x80BC013Cu;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80BC013C:
    ctx->pc = 0x80BC013Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC013Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BC013C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BC0140:
    ctx->pc = 0x80BC0140u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0140u)) return;
    // 80BC0140: bl      0x8045F220
    {
            ctx->lr = 0x80BC0144u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80BC0144:
    ctx->pc = 0x80BC0144u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC0144u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80BC0144: lis     r4, -27514
    ctx->gpr[4] = ((u32)(s32)(-27514) << 16);

label_80BC0148:
    ctx->pc = 0x80BC0148u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0148u)) return;
    // 80BC0148: addi    r4, r4, 21456
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(21456);

label_80BC014C:
    ctx->pc = 0x80BC014Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC014Cu)) return;
    // 80BC014C: bl      0x8045C060
    {
            ctx->lr = 0x80BC0150u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80BC0150:
    ctx->pc = 0x80BC0150u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC0150u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80BC0150: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80BC0154:
    ctx->pc = 0x80BC0154u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0154u)) return;
    // 80BC0154: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80BC0158:
    ctx->pc = 0x80BC0158u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0158u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BC0158: lwz     r0, 0(r3)
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
label_80BC015C:
    ctx->pc = 0x80BC015Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC015Cu)) return;
    // 80BC015C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80BC0160:
    ctx->pc = 0x80BC0160u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0160u)) return;
    // 80BC0160: lis     r3, -27514
    ctx->gpr[3] = ((u32)(s32)(-27514) << 16);

label_80BC0164:
    ctx->pc = 0x80BC0164u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0164u)) return;
    // 80BC0164: addi    r3, r3, 21388
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(21388);

label_80BC0168:
    ctx->pc = 0x80BC0168u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0168u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BC0168: lwzx    r3, r3, r0
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
label_80BC016C:
    ctx->pc = 0x80BC016Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC016Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BC016C: lwz     r3, 0(r3)
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
label_80BC0170:
    ctx->pc = 0x80BC0170u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0170u)) return;
    // 80BC0170: bl      0x8045F6FC
    {
            ctx->lr = 0x80BC0174u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80BC0174:
    ctx->pc = 0x80BC0174u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC0174u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BC0174: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80BC0178:
    ctx->pc = 0x80BC0178u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0178u)) return;
    // 80BC0178: bl      0x8045F7C8
    {
            ctx->lr = 0x80BC017Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80BC017C:
    ctx->pc = 0x80BC017Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC017Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BC017C: bl      0x8045F32C
    {
            ctx->lr = 0x80BC0180u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80BC0180:
    ctx->pc = 0x80BC0180u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC0180u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80BC0180: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BC0184:
    ctx->pc = 0x80BC0184u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0184u)) return;
    // 80BC0184: li      r4, 350
    ctx->gpr[4] = (u32)(s32)(350);

label_80BC0188:
    ctx->pc = 0x80BC0188u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0188u)) return;
    // 80BC0188: lis     r5, -27514
    ctx->gpr[5] = ((u32)(s32)(-27514) << 16);

label_80BC018C:
    ctx->pc = 0x80BC018Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC018Cu)) return;
    // 80BC018C: addi    r5, r5, 20108
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(20108);

label_80BC0190:
    ctx->pc = 0x80BC0190u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0190u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BC0190: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BC0190u)) return;
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
label_80BC0194:
    ctx->pc = 0x80BC0194u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0194u)) return;
    // 80BC0194: lis     r5, -27514
    ctx->gpr[5] = ((u32)(s32)(-27514) << 16);

label_80BC0198:
    ctx->pc = 0x80BC0198u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0198u)) return;
    // 80BC0198: addi    r5, r5, 20112
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(20112);

label_80BC019C:
    ctx->pc = 0x80BC019Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC019Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BC019C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BC019Cu)) return;
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
label_80BC01A0:
    ctx->pc = 0x80BC01A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC01A0u)) return;
    // 80BC01A0: lis     r5, -27514
    ctx->gpr[5] = ((u32)(s32)(-27514) << 16);

label_80BC01A4:
    ctx->pc = 0x80BC01A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC01A4u)) return;
    // 80BC01A4: addi    r5, r5, 20116
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(20116);

label_80BC01A8:
    ctx->pc = 0x80BC01A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC01A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BC01A8: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BC01A8u)) return;
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
label_80BC01AC:
    ctx->pc = 0x80BC01ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC01ACu)) return;
    // 80BC01AC: bl      0x8045C750
    {
            ctx->lr = 0x80BC01B0u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80BC01B0:
    ctx->pc = 0x80BC01B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC01B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80BC01B0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BC01B4:
    ctx->pc = 0x80BC01B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC01B4u)) return;
    // 80BC01B4: li      r4, 350
    ctx->gpr[4] = (u32)(s32)(350);

label_80BC01B8:
    ctx->pc = 0x80BC01B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC01B8u)) return;
    // 80BC01B8: li      r5, 3302
    ctx->gpr[5] = (u32)(s32)(3302);

label_80BC01BC:
    ctx->pc = 0x80BC01BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC01BCu)) return;
    // 80BC01BC: li      r6, 4785
    ctx->gpr[6] = (u32)(s32)(4785);

label_80BC01C0:
    ctx->pc = 0x80BC01C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC01C0u)) return;
    // 80BC01C0: lis     r7, 1
    ctx->gpr[7] = ((u32)(s32)(1) << 16);

label_80BC01C4:
    ctx->pc = 0x80BC01C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC01C4u)) return;
    // 80BC01C4: addi    r7, r7, -256
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-256);

label_80BC01C8:
    ctx->pc = 0x80BC01C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC01C8u)) return;
    // 80BC01C8: bl      0x8045C7B4
    {
            ctx->lr = 0x80BC01CCu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80BC01CC:
    ctx->pc = 0x80BC01CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC01CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BC01CC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80BC01D0:
    ctx->pc = 0x80BC01D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC01D0u)) return;
    // 80BC01D0: bl      0x8045F220
    {
            ctx->lr = 0x80BC01D4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80BC01D4:
    ctx->pc = 0x80BC01D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC01D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80BC01D4: lis     r4, -27513
    ctx->gpr[4] = ((u32)(s32)(-27513) << 16);

label_80BC01D8:
    ctx->pc = 0x80BC01D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC01D8u)) return;
    // 80BC01D8: addi    r4, r4, -15600
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-15600);

label_80BC01DC:
    ctx->pc = 0x80BC01DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC01DCu)) return;
    // 80BC01DC: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80BC01E0:
    ctx->pc = 0x80BC01E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC01E0u)) return;
    // 80BC01E0: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80BC01E4:
    ctx->pc = 0x80BC01E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC01E4u)) return;
    // 80BC01E4: lis     r6, -27514
    ctx->gpr[6] = ((u32)(s32)(-27514) << 16);

label_80BC01E8:
    ctx->pc = 0x80BC01E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC01E8u)) return;
    // 80BC01E8: addi    r6, r6, 20044
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(20044);

label_80BC01EC:
    ctx->pc = 0x80BC01ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC01ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BC01EC: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80BC01ECu)) return;
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
label_80BC01F0:
    ctx->pc = 0x80BC01F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC01F0u)) return;
    // 80BC01F0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80BC01F4:
    ctx->pc = 0x80BC01F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC01F4u)) return;
    // 80BC01F4: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_80BC01F8:
    ctx->pc = 0x80BC01F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC01F8u)) return;
    // 80BC01F8: bl      0x8045EBE4
    {
            ctx->lr = 0x80BC01FCu;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80BC01FC:
    ctx->pc = 0x80BC01FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC01FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BC01FC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80BC0200:
    ctx->pc = 0x80BC0200u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0200u)) return;
    // 80BC0200: bl      0x8045F220
    {
            ctx->lr = 0x80BC0204u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80BC0204:
    ctx->pc = 0x80BC0204u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC0204u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BC0204: bl      0x8045EB40
    {
            ctx->lr = 0x80BC0208u;
            ctx->pc = 0x8045EB40u;
            return;
    }

label_80BC0208:
    ctx->pc = 0x80BC0208u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC0208u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BC0208: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80BC020C:
    ctx->pc = 0x80BC020Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC020Cu)) return;
    // 80BC020C: bl      0x8045F220
    {
            ctx->lr = 0x80BC0210u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80BC0210:
    ctx->pc = 0x80BC0210u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC0210u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80BC0210: lis     r4, -27514
    ctx->gpr[4] = ((u32)(s32)(-27514) << 16);

label_80BC0214:
    ctx->pc = 0x80BC0214u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0214u)) return;
    // 80BC0214: addi    r4, r4, 28164
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(28164);

label_80BC0218:
    ctx->pc = 0x80BC0218u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0218u)) return;
    // 80BC0218: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80BC021C:
    ctx->pc = 0x80BC021Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC021Cu)) return;
    // 80BC021C: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80BC0220:
    ctx->pc = 0x80BC0220u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0220u)) return;
    // 80BC0220: lis     r6, -27514
    ctx->gpr[6] = ((u32)(s32)(-27514) << 16);

label_80BC0224:
    ctx->pc = 0x80BC0224u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0224u)) return;
    // 80BC0224: addi    r6, r6, 20120
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(20120);

label_80BC0228:
    ctx->pc = 0x80BC0228u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0228u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BC0228: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80BC0228u)) return;
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
label_80BC022C:
    ctx->pc = 0x80BC022Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC022Cu)) return;
    // 80BC022C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80BC0230:
    ctx->pc = 0x80BC0230u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0230u)) return;
    // 80BC0230: li      r7, 16
    ctx->gpr[7] = (u32)(s32)(16);

label_80BC0234:
    ctx->pc = 0x80BC0234u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0234u)) return;
    // 80BC0234: bl      0x8045EBE4
    {
            ctx->lr = 0x80BC0238u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80BC0238:
    ctx->pc = 0x80BC0238u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC0238u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BC0238: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80BC023C:
    ctx->pc = 0x80BC023Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC023Cu)) return;
    // 80BC023C: bl      0x8045F220
    {
            ctx->lr = 0x80BC0240u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80BC0240:
    ctx->pc = 0x80BC0240u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC0240u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80BC0240: lis     r4, -27514
    ctx->gpr[4] = ((u32)(s32)(-27514) << 16);

label_80BC0244:
    ctx->pc = 0x80BC0244u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0244u)) return;
    // 80BC0244: addi    r4, r4, 21460
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(21460);

label_80BC0248:
    ctx->pc = 0x80BC0248u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0248u)) return;
    // 80BC0248: bl      0x8045C060
    {
            ctx->lr = 0x80BC024Cu;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80BC024C:
    ctx->pc = 0x80BC024Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC024Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BC024C: li      r3, 675
    ctx->gpr[3] = (u32)(s32)(675);

label_80BC0250:
    ctx->pc = 0x80BC0250u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0250u)) return;
    // 80BC0250: bl      0x8045BFA0
    {
            ctx->lr = 0x80BC0254u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80BC0254:
    ctx->pc = 0x80BC0254u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC0254u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80BC0254: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80BC0258:
    ctx->pc = 0x80BC0258u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0258u)) return;
    // 80BC0258: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80BC025C:
    ctx->pc = 0x80BC025Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC025Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BC025C: lwz     r0, 0(r3)
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
label_80BC0260:
    ctx->pc = 0x80BC0260u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0260u)) return;
    // 80BC0260: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80BC0264:
    ctx->pc = 0x80BC0264u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0264u)) return;
    // 80BC0264: lis     r3, -27514
    ctx->gpr[3] = ((u32)(s32)(-27514) << 16);

label_80BC0268:
    ctx->pc = 0x80BC0268u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0268u)) return;
    // 80BC0268: addi    r3, r3, 21388
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(21388);

label_80BC026C:
    ctx->pc = 0x80BC026Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC026Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BC026C: lwzx    r3, r3, r0
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
label_80BC0270:
    ctx->pc = 0x80BC0270u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0270u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BC0270: lwz     r3, 4(r3)
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
label_80BC0274:
    ctx->pc = 0x80BC0274u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0274u)) return;
    // 80BC0274: bl      0x8045F6FC
    {
            ctx->lr = 0x80BC0278u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80BC0278:
    ctx->pc = 0x80BC0278u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC0278u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BC0278: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80BC027C:
    ctx->pc = 0x80BC027Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC027Cu)) return;
    // 80BC027C: bl      0x8045F7C8
    {
            ctx->lr = 0x80BC0280u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80BC0280:
    ctx->pc = 0x80BC0280u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC0280u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BC0280: bl      0x8045BFF4
    {
            ctx->lr = 0x80BC0284u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80BC0284:
    ctx->pc = 0x80BC0284u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC0284u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BC0284: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80BC0288:
    ctx->pc = 0x80BC0288u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0288u)) return;
    // 80BC0288: bl      0x8045F220
    {
            ctx->lr = 0x80BC028Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80BC028C:
    ctx->pc = 0x80BC028Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC028Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BC028C: bl      0x8045C034
    {
            ctx->lr = 0x80BC0290u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80BC0290:
    ctx->pc = 0x80BC0290u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC0290u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BC0290: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_80BC0294:
    ctx->pc = 0x80BC0294u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0294u)) return;
    // 80BC0294: bl      0x8045F7C8
    {
            ctx->lr = 0x80BC0298u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80BC0298:
    ctx->pc = 0x80BC0298u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC0298u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BC0298: li      r3, 676
    ctx->gpr[3] = (u32)(s32)(676);

label_80BC029C:
    ctx->pc = 0x80BC029Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC029Cu)) return;
    // 80BC029C: bl      0x8045BFA0
    {
            ctx->lr = 0x80BC02A0u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80BC02A0:
    ctx->pc = 0x80BC02A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC02A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BC02A0: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80BC02A4:
    ctx->pc = 0x80BC02A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC02A4u)) return;
    // 80BC02A4: bl      0x8045F220
    {
            ctx->lr = 0x80BC02A8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80BC02A8:
    ctx->pc = 0x80BC02A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC02A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80BC02A8: lis     r4, -27514
    ctx->gpr[4] = ((u32)(s32)(-27514) << 16);

label_80BC02AC:
    ctx->pc = 0x80BC02ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC02ACu)) return;
    // 80BC02AC: addi    r4, r4, 21468
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(21468);

label_80BC02B0:
    ctx->pc = 0x80BC02B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC02B0u)) return;
    // 80BC02B0: bl      0x8045C060
    {
            ctx->lr = 0x80BC02B4u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80BC02B4:
    ctx->pc = 0x80BC02B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC02B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80BC02B4: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80BC02B8:
    ctx->pc = 0x80BC02B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC02B8u)) return;
    // 80BC02B8: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80BC02BC:
    ctx->pc = 0x80BC02BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC02BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BC02BC: lwz     r0, 0(r3)
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
label_80BC02C0:
    ctx->pc = 0x80BC02C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC02C0u)) return;
    // 80BC02C0: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80BC02C4:
    ctx->pc = 0x80BC02C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC02C4u)) return;
    // 80BC02C4: lis     r3, -27514
    ctx->gpr[3] = ((u32)(s32)(-27514) << 16);

label_80BC02C8:
    ctx->pc = 0x80BC02C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC02C8u)) return;
    // 80BC02C8: addi    r3, r3, 21388
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(21388);

label_80BC02CC:
    ctx->pc = 0x80BC02CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC02CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BC02CC: lwzx    r3, r3, r0
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
label_80BC02D0:
    ctx->pc = 0x80BC02D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC02D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BC02D0: lwz     r3, 8(r3)
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
label_80BC02D4:
    ctx->pc = 0x80BC02D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC02D4u)) return;
    // 80BC02D4: bl      0x8045F6FC
    {
            ctx->lr = 0x80BC02D8u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80BC02D8:
    ctx->pc = 0x80BC02D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC02D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BC02D8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80BC02DC:
    ctx->pc = 0x80BC02DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC02DCu)) return;
    // 80BC02DC: bl      0x8045F7C8
    {
            ctx->lr = 0x80BC02E0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80BC02E0:
    ctx->pc = 0x80BC02E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC02E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BC02E0: bl      0x8045BFF4
    {
            ctx->lr = 0x80BC02E4u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80BC02E4:
    ctx->pc = 0x80BC02E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC02E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BC02E4: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80BC02E8:
    ctx->pc = 0x80BC02E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC02E8u)) return;
    // 80BC02E8: bl      0x8045F220
    {
            ctx->lr = 0x80BC02ECu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80BC02EC:
    ctx->pc = 0x80BC02ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC02ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BC02EC: bl      0x8045C034
    {
            ctx->lr = 0x80BC02F0u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80BC02F0:
    ctx->pc = 0x80BC02F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC02F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BC02F0: bl      0x8045F32C
    {
            ctx->lr = 0x80BC02F4u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80BC02F4:
    ctx->pc = 0x80BC02F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC02F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BC02F4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BC02F8:
    ctx->pc = 0x80BC02F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC02F8u)) return;
    // 80BC02F8: bl      0x8045F220
    {
            ctx->lr = 0x80BC02FCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80BC02FC:
    ctx->pc = 0x80BC02FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC02FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BC02FC: bl      0x8045E760
    {
            ctx->lr = 0x80BC0300u;
            ctx->pc = 0x8045E760u;
            return;
    }

label_80BC0300:
    ctx->pc = 0x80BC0300u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC0300u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BC0300: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BC0304:
    ctx->pc = 0x80BC0304u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0304u)) return;
    // 80BC0304: bl      0x8045F220
    {
            ctx->lr = 0x80BC0308u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80BC0308:
    ctx->pc = 0x80BC0308u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC0308u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BC0308: bl      0x8045C034
    {
            ctx->lr = 0x80BC030Cu;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80BC030C:
    ctx->pc = 0x80BC030Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC030Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BC030C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BC0310:
    ctx->pc = 0x80BC0310u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0310u)) return;
    // 80BC0310: bl      0x8045F220
    {
            ctx->lr = 0x80BC0314u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80BC0314:
    ctx->pc = 0x80BC0314u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC0314u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80BC0314: lis     r4, -27514
    ctx->gpr[4] = ((u32)(s32)(-27514) << 16);

label_80BC0318:
    ctx->pc = 0x80BC0318u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0318u)) return;
    // 80BC0318: addi    r4, r4, 21472
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(21472);

label_80BC031C:
    ctx->pc = 0x80BC031Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC031Cu)) return;
    // 80BC031C: bl      0x8045C060
    {
            ctx->lr = 0x80BC0320u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80BC0320:
    ctx->pc = 0x80BC0320u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC0320u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BC0320: li      r3, 677
    ctx->gpr[3] = (u32)(s32)(677);

label_80BC0324:
    ctx->pc = 0x80BC0324u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0324u)) return;
    // 80BC0324: bl      0x8045BFA0
    {
            ctx->lr = 0x80BC0328u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80BC0328:
    ctx->pc = 0x80BC0328u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC0328u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80BC0328: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80BC032C:
    ctx->pc = 0x80BC032Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC032Cu)) return;
    // 80BC032C: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80BC0330:
    ctx->pc = 0x80BC0330u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0330u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BC0330: lwz     r0, 0(r3)
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
label_80BC0334:
    ctx->pc = 0x80BC0334u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0334u)) return;
    // 80BC0334: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80BC0338:
    ctx->pc = 0x80BC0338u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0338u)) return;
    // 80BC0338: lis     r3, -27514
    ctx->gpr[3] = ((u32)(s32)(-27514) << 16);

label_80BC033C:
    ctx->pc = 0x80BC033Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC033Cu)) return;
    // 80BC033C: addi    r3, r3, 21388
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(21388);

label_80BC0340:
    ctx->pc = 0x80BC0340u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0340u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BC0340: lwzx    r3, r3, r0
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
label_80BC0344:
    ctx->pc = 0x80BC0344u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0344u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BC0344: lwz     r3, 12(r3)
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
label_80BC0348:
    ctx->pc = 0x80BC0348u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0348u)) return;
    // 80BC0348: bl      0x8045F6FC
    {
            ctx->lr = 0x80BC034Cu;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80BC034C:
    ctx->pc = 0x80BC034Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC034Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BC034C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80BC0350:
    ctx->pc = 0x80BC0350u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0350u)) return;
    // 80BC0350: bl      0x8045F7C8
    {
            ctx->lr = 0x80BC0354u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80BC0354:
    ctx->pc = 0x80BC0354u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC0354u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BC0354: bl      0x8045BFF4
    {
            ctx->lr = 0x80BC0358u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80BC0358:
    ctx->pc = 0x80BC0358u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC0358u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BC0358: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BC035C:
    ctx->pc = 0x80BC035Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC035Cu)) return;
    // 80BC035C: bl      0x8045F220
    {
            ctx->lr = 0x80BC0360u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80BC0360:
    ctx->pc = 0x80BC0360u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC0360u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BC0360: bl      0x8045C034
    {
            ctx->lr = 0x80BC0364u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80BC0364:
    ctx->pc = 0x80BC0364u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC0364u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80BC0364: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80BC0368:
    ctx->pc = 0x80BC0368u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0368u)) return;
    // 80BC0368: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80BC036C:
    ctx->pc = 0x80BC036Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC036Cu)) return;
    // 80BC036C: lis     r5, -27514
    ctx->gpr[5] = ((u32)(s32)(-27514) << 16);

label_80BC0370:
    ctx->pc = 0x80BC0370u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0370u)) return;
    // 80BC0370: addi    r5, r5, 20124
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(20124);

label_80BC0374:
    ctx->pc = 0x80BC0374u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0374u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BC0374: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BC0374u)) return;
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
label_80BC0378:
    ctx->pc = 0x80BC0378u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0378u)) return;
    // 80BC0378: lis     r5, -27514
    ctx->gpr[5] = ((u32)(s32)(-27514) << 16);

label_80BC037C:
    ctx->pc = 0x80BC037Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC037Cu)) return;
    // 80BC037C: addi    r5, r5, 20020
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(20020);

label_80BC0380:
    ctx->pc = 0x80BC0380u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0380u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BC0380: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BC0380u)) return;
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
label_80BC0384:
    ctx->pc = 0x80BC0384u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0384u)) return;
    // 80BC0384: lis     r5, -27514
    ctx->gpr[5] = ((u32)(s32)(-27514) << 16);

label_80BC0388:
    ctx->pc = 0x80BC0388u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0388u)) return;
    // 80BC0388: addi    r5, r5, 20128
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(20128);

label_80BC038C:
    ctx->pc = 0x80BC038Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC038Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BC038C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BC038Cu)) return;
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
label_80BC0390:
    ctx->pc = 0x80BC0390u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0390u)) return;
    // 80BC0390: bl      0x8045C750
    {
            ctx->lr = 0x80BC0394u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80BC0394:
    ctx->pc = 0x80BC0394u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC0394u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80BC0394: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80BC0398:
    ctx->pc = 0x80BC0398u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0398u)) return;
    // 80BC0398: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80BC039C:
    ctx->pc = 0x80BC039Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC039Cu)) return;
    // 80BC039C: li      r5, 4326
    ctx->gpr[5] = (u32)(s32)(4326);

label_80BC03A0:
    ctx->pc = 0x80BC03A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC03A0u)) return;
    // 80BC03A0: li      r6, 3249
    ctx->gpr[6] = (u32)(s32)(3249);

label_80BC03A4:
    ctx->pc = 0x80BC03A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC03A4u)) return;
    // 80BC03A4: lis     r7, 1
    ctx->gpr[7] = ((u32)(s32)(1) << 16);

label_80BC03A8:
    ctx->pc = 0x80BC03A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC03A8u)) return;
    // 80BC03A8: addi    r7, r7, -256
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-256);

label_80BC03AC:
    ctx->pc = 0x80BC03ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC03ACu)) return;
    // 80BC03AC: bl      0x8045C7B4
    {
            ctx->lr = 0x80BC03B0u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80BC03B0:
    ctx->pc = 0x80BC03B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC03B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80BC03B0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BC03B4:
    ctx->pc = 0x80BC03B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC03B4u)) return;
    // 80BC03B4: li      r4, 90
    ctx->gpr[4] = (u32)(s32)(90);

label_80BC03B8:
    ctx->pc = 0x80BC03B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC03B8u)) return;
    // 80BC03B8: lis     r5, -27514
    ctx->gpr[5] = ((u32)(s32)(-27514) << 16);

label_80BC03BC:
    ctx->pc = 0x80BC03BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC03BCu)) return;
    // 80BC03BC: addi    r5, r5, 20132
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(20132);

label_80BC03C0:
    ctx->pc = 0x80BC03C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC03C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BC03C0: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BC03C0u)) return;
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
label_80BC03C4:
    ctx->pc = 0x80BC03C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC03C4u)) return;
    // 80BC03C4: lis     r5, -27514
    ctx->gpr[5] = ((u32)(s32)(-27514) << 16);

label_80BC03C8:
    ctx->pc = 0x80BC03C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC03C8u)) return;
    // 80BC03C8: addi    r5, r5, 20136
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(20136);

label_80BC03CC:
    ctx->pc = 0x80BC03CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC03CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BC03CC: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BC03CCu)) return;
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
label_80BC03D0:
    ctx->pc = 0x80BC03D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC03D0u)) return;
    // 80BC03D0: lis     r5, -27514
    ctx->gpr[5] = ((u32)(s32)(-27514) << 16);

label_80BC03D4:
    ctx->pc = 0x80BC03D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC03D4u)) return;
    // 80BC03D4: addi    r5, r5, 20140
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(20140);

label_80BC03D8:
    ctx->pc = 0x80BC03D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC03D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BC03D8: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BC03D8u)) return;
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
label_80BC03DC:
    ctx->pc = 0x80BC03DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC03DCu)) return;
    // 80BC03DC: bl      0x8045C750
    {
            ctx->lr = 0x80BC03E0u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80BC03E0:
    ctx->pc = 0x80BC03E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC03E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80BC03E0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BC03E4:
    ctx->pc = 0x80BC03E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC03E4u)) return;
    // 80BC03E4: li      r4, 90
    ctx->gpr[4] = (u32)(s32)(90);

label_80BC03E8:
    ctx->pc = 0x80BC03E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC03E8u)) return;
    // 80BC03E8: li      r5, 4326
    ctx->gpr[5] = (u32)(s32)(4326);

label_80BC03EC:
    ctx->pc = 0x80BC03ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC03ECu)) return;
    // 80BC03EC: li      r6, 3249
    ctx->gpr[6] = (u32)(s32)(3249);

label_80BC03F0:
    ctx->pc = 0x80BC03F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC03F0u)) return;
    // 80BC03F0: lis     r7, 1
    ctx->gpr[7] = ((u32)(s32)(1) << 16);

label_80BC03F4:
    ctx->pc = 0x80BC03F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC03F4u)) return;
    // 80BC03F4: addi    r7, r7, -256
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-256);

label_80BC03F8:
    ctx->pc = 0x80BC03F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC03F8u)) return;
    // 80BC03F8: bl      0x8045C7B4
    {
            ctx->lr = 0x80BC03FCu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80BC03FC:
    ctx->pc = 0x80BC03FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC03FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BC03FC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BC0400:
    ctx->pc = 0x80BC0400u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0400u)) return;
    // 80BC0400: bl      0x8045F220
    {
            ctx->lr = 0x80BC0404u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80BC0404:
    ctx->pc = 0x80BC0404u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC0404u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80BC0404: lis     r4, -27513
    ctx->gpr[4] = ((u32)(s32)(-27513) << 16);

label_80BC0408:
    ctx->pc = 0x80BC0408u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0408u)) return;
    // 80BC0408: addi    r4, r4, -6764
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-6764);

label_80BC040C:
    ctx->pc = 0x80BC040Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC040Cu)) return;
    // 80BC040C: lis     r5, -28615
    ctx->gpr[5] = ((u32)(s32)(-28615) << 16);

label_80BC0410:
    ctx->pc = 0x80BC0410u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0410u)) return;
    // 80BC0410: addi    r5, r5, -7300
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-7300);

label_80BC0414:
    ctx->pc = 0x80BC0414u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0414u)) return;
    // 80BC0414: lis     r6, -27514
    ctx->gpr[6] = ((u32)(s32)(-27514) << 16);

label_80BC0418:
    ctx->pc = 0x80BC0418u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0418u)) return;
    // 80BC0418: addi    r6, r6, 20036
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(20036);

label_80BC041C:
    ctx->pc = 0x80BC041Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC041Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BC041C: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80BC041Cu)) return;
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
label_80BC0420:
    ctx->pc = 0x80BC0420u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0420u)) return;
    // 80BC0420: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80BC0424:
    ctx->pc = 0x80BC0424u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0424u)) return;
    // 80BC0424: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_80BC0428:
    ctx->pc = 0x80BC0428u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0428u)) return;
    // 80BC0428: bl      0x8045EBE4
    {
            ctx->lr = 0x80BC042Cu;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80BC042C:
    ctx->pc = 0x80BC042Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC042Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BC042C: li      r3, 678
    ctx->gpr[3] = (u32)(s32)(678);

label_80BC0430:
    ctx->pc = 0x80BC0430u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0430u)) return;
    // 80BC0430: bl      0x8045BFA0
    {
            ctx->lr = 0x80BC0434u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80BC0434:
    ctx->pc = 0x80BC0434u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC0434u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BC0434: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BC0438:
    ctx->pc = 0x80BC0438u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0438u)) return;
    // 80BC0438: bl      0x8045F220
    {
            ctx->lr = 0x80BC043Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80BC043C:
    ctx->pc = 0x80BC043Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC043Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80BC043C: lis     r4, -27514
    ctx->gpr[4] = ((u32)(s32)(-27514) << 16);

label_80BC0440:
    ctx->pc = 0x80BC0440u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0440u)) return;
    // 80BC0440: addi    r4, r4, 21484
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(21484);

label_80BC0444:
    ctx->pc = 0x80BC0444u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0444u)) return;
    // 80BC0444: bl      0x8045C060
    {
            ctx->lr = 0x80BC0448u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80BC0448:
    ctx->pc = 0x80BC0448u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC0448u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80BC0448: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80BC044C:
    ctx->pc = 0x80BC044Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC044Cu)) return;
    // 80BC044C: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80BC0450:
    ctx->pc = 0x80BC0450u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0450u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BC0450: lwz     r0, 0(r3)
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
label_80BC0454:
    ctx->pc = 0x80BC0454u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0454u)) return;
    // 80BC0454: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80BC0458:
    ctx->pc = 0x80BC0458u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0458u)) return;
    // 80BC0458: lis     r3, -27514
    ctx->gpr[3] = ((u32)(s32)(-27514) << 16);

label_80BC045C:
    ctx->pc = 0x80BC045Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC045Cu)) return;
    // 80BC045C: addi    r3, r3, 21388
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(21388);

label_80BC0460:
    ctx->pc = 0x80BC0460u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0460u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BC0460: lwzx    r3, r3, r0
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
label_80BC0464:
    ctx->pc = 0x80BC0464u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0464u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BC0464: lwz     r3, 16(r3)
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
label_80BC0468:
    ctx->pc = 0x80BC0468u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0468u)) return;
    // 80BC0468: bl      0x8045F6FC
    {
            ctx->lr = 0x80BC046Cu;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80BC046C:
    ctx->pc = 0x80BC046Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC046Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BC046C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80BC0470:
    ctx->pc = 0x80BC0470u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0470u)) return;
    // 80BC0470: bl      0x8045F7C8
    {
            ctx->lr = 0x80BC0474u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80BC0474:
    ctx->pc = 0x80BC0474u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC0474u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BC0474: bl      0x8045BFF4
    {
            ctx->lr = 0x80BC0478u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80BC0478:
    ctx->pc = 0x80BC0478u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC0478u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BC0478: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BC047C:
    ctx->pc = 0x80BC047Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC047Cu)) return;
    // 80BC047C: bl      0x8045F220
    {
            ctx->lr = 0x80BC0480u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80BC0480:
    ctx->pc = 0x80BC0480u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC0480u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BC0480: bl      0x8045C034
    {
            ctx->lr = 0x80BC0484u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80BC0484:
    ctx->pc = 0x80BC0484u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC0484u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BC0484: bl      0x8045F32C
    {
            ctx->lr = 0x80BC0488u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80BC0488:
    ctx->pc = 0x80BC0488u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC0488u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BC0488: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_80BC048C:
    ctx->pc = 0x80BC048Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC048Cu)) return;
    // 80BC048C: bl      0x8045F7C8
    {
            ctx->lr = 0x80BC0490u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80BC0490:
    ctx->pc = 0x80BC0490u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC0490u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BC0490: b       0x80BC0520
    {
            goto label_80BC0520;
    }

label_80BC0494:
    ctx->pc = 0x80BC0494u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC0494u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BC0494: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BC0498:
    ctx->pc = 0x80BC0498u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0498u)) return;
    // 80BC0498: bl      0x8045F220
    {
            ctx->lr = 0x80BC049Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80BC049C:
    ctx->pc = 0x80BC049Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC049Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80BC049C: lis     r4, -27514
    ctx->gpr[4] = ((u32)(s32)(-27514) << 16);

label_80BC04A0:
    ctx->pc = 0x80BC04A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC04A0u)) return;
    // 80BC04A0: addi    r4, r4, 20076
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(20076);

label_80BC04A4:
    ctx->pc = 0x80BC04A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC04A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BC04A4: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BC04A4u)) return;
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
label_80BC04A8:
    ctx->pc = 0x80BC04A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC04A8u)) return;
    // 80BC04A8: lis     r4, -27514
    ctx->gpr[4] = ((u32)(s32)(-27514) << 16);

label_80BC04AC:
    ctx->pc = 0x80BC04ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC04ACu)) return;
    // 80BC04AC: addi    r4, r4, 20020
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(20020);

label_80BC04B0:
    ctx->pc = 0x80BC04B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC04B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BC04B0: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BC04B0u)) return;
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
label_80BC04B4:
    ctx->pc = 0x80BC04B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC04B4u)) return;
    // 80BC04B4: lis     r4, -27514
    ctx->gpr[4] = ((u32)(s32)(-27514) << 16);

label_80BC04B8:
    ctx->pc = 0x80BC04B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC04B8u)) return;
    // 80BC04B8: addi    r4, r4, 20080
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(20080);

label_80BC04BC:
    ctx->pc = 0x80BC04BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC04BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BC04BC: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BC04BCu)) return;
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
label_80BC04C0:
    ctx->pc = 0x80BC04C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC04C0u)) return;
    // 80BC04C0: bl      0x8045EF2C
    {
            ctx->lr = 0x80BC04C4u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80BC04C4:
    ctx->pc = 0x80BC04C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC04C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BC04C4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BC04C8:
    ctx->pc = 0x80BC04C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC04C8u)) return;
    // 80BC04C8: bl      0x8045F220
    {
            ctx->lr = 0x80BC04CCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80BC04CC:
    ctx->pc = 0x80BC04CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC04CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80BC04CC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80BC04D0:
    ctx->pc = 0x80BC04D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC04D0u)) return;
    // 80BC04D0: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80BC04D4:
    ctx->pc = 0x80BC04D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC04D4u)) return;
    // 80BC04D4: addi    r5, r5, -3584
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3584);

label_80BC04D8:
    ctx->pc = 0x80BC04D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC04D8u)) return;
    // 80BC04D8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80BC04DC:
    ctx->pc = 0x80BC04DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC04DCu)) return;
    // 80BC04DC: bl      0x8045EEA8
    {
            ctx->lr = 0x80BC04E0u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80BC04E0:
    ctx->pc = 0x80BC04E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC04E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BC04E0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BC04E4:
    ctx->pc = 0x80BC04E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC04E4u)) return;
    // 80BC04E4: bl      0x8045EC10
    {
            ctx->lr = 0x80BC04E8u;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80BC04E8:
    ctx->pc = 0x80BC04E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC04E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BC04E8: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80BC04EC:
    ctx->pc = 0x80BC04ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC04ECu)) return;
    // 80BC04EC: bl      0x8045ED54
    {
            ctx->lr = 0x80BC04F0u;
            ctx->pc = 0x8045ED54u;
            return;
    }

label_80BC04F0:
    ctx->pc = 0x80BC04F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC04F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80BC04F0: lis     r3, -27513
    ctx->gpr[3] = ((u32)(s32)(-27513) << 16);

label_80BC04F4:
    ctx->pc = 0x80BC04F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC04F4u)) return;
    // 80BC04F4: addi    r3, r3, 28480
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28480);

label_80BC04F8:
    ctx->pc = 0x80BC04F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC04F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BC04F8: lwz     r3, 0(r3)
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
label_80BC04FC:
    ctx->pc = 0x80BC04FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC04FCu)) return;
    // 80BC04FC: cmplwi  r3, 0x0000
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

label_80BC0500:
    ctx->pc = 0x80BC0500u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0500u)) return;
    // 80BC0500: bc    12, 2, 0x80BC0518
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80BC0518;
        }
    }

label_80BC0504:
    ctx->pc = 0x80BC0504u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC0504u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BC0504: bl      0x8050F9E0
    {
            ctx->lr = 0x80BC0508u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80BC0508:
    ctx->pc = 0x80BC0508u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC0508u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80BC0508: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80BC050C:
    ctx->pc = 0x80BC050Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC050Cu)) return;
    // 80BC050C: lis     r3, -27513
    ctx->gpr[3] = ((u32)(s32)(-27513) << 16);

label_80BC0510:
    ctx->pc = 0x80BC0510u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0510u)) return;
    // 80BC0510: addi    r3, r3, 28480
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28480);

label_80BC0514:
    ctx->pc = 0x80BC0514u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0514u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80BC0514: stw     r0, 0(r3)
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
label_80BC0518:
    ctx->pc = 0x80BC0518u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC0518u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BC0518: bl      0x8045DE34
    {
            ctx->lr = 0x80BC051Cu;
            ctx->pc = 0x8045DE34u;
            return;
    }

label_80BC051C:
    ctx->pc = 0x80BC051Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC051Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BC051C: bl      0x80460A80
    {
            ctx->lr = 0x80BC0520u;
            ctx->pc = 0x80460A80u;
            return;
    }

label_80BC0520:
    ctx->pc = 0x80BC0520u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC0520u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BC0520: lwz     r31, 12(r1)
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
label_80BC0524:
    ctx->pc = 0x80BC0524u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0524u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BC0524: lwz     r0, 20(r1)
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
label_80BC0528:
    ctx->pc = 0x80BC0528u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BC0528u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BC0528: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BC052C:
    ctx->pc = 0x80BC052Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC052Cu)) return;
    // 80BC052C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80BC0530:
    ctx->pc = 0x80BC0530u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0530u)) return;
    // 80BC0530: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BBFC40;
        }
    }

label_80BC0534:
    ctx->pc = 0x80BC0534u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC0534u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BC0534: stwu     r1, -64(r1)
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
label_80BC0538:
    ctx->pc = 0x80BC0538u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0538u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BC0538: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BC053C:
    ctx->pc = 0x80BC053Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC053Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BC053C: stw     r0, 68(r1)
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
label_80BC0540:
    ctx->pc = 0x80BC0540u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0540u)) return;
    // 80BC0540: addi    r11, r1, 64
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(64);

label_80BC0544:
    ctx->pc = 0x80BC0544u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0544u)) return;
    // 80BC0544: bl      0x80006DD4
    {
            ctx->lr = 0x80BC0548u;
            ctx->pc = 0x80006DD4u;
            return;
    }

label_80BC0548:
    ctx->pc = 0x80BC0548u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 29u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC0548u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 29u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80BC0548: lwz     r27, 32(r3)
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
label_80BC054C:
    ctx->pc = 0x80BC054Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC054Cu)) return;
    // 80BC054C: lis     r3, -27514
    ctx->gpr[3] = ((u32)(s32)(-27514) << 16);

label_80BC0550:
    ctx->pc = 0x80BC0550u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0550u)) return;
    // 80BC0550: addi    r3, r3, 20144
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(20144);

label_80BC0554:
    ctx->pc = 0x80BC0554u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0554u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80BC0554: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BC0554u)) return;
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
label_80BC0558:
    ctx->pc = 0x80BC0558u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0558u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80BC0558: lfs     f0, 44(r27)
    if (!ppc_fp_available_inline(ctx, 0x80BC0558u)) return;
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
label_80BC055C:
    ctx->pc = 0x80BC055Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC055Cu)) return;
    // 80BC055C: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80BC055Cu)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80BC0560:
    ctx->pc = 0x80BC0560u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0560u)) return;
    // 80BC0560: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80BC0560u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80BC0564:
    ctx->pc = 0x80BC0564u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0564u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80BC0564: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BC0564u)) return;
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
label_80BC0568:
    ctx->pc = 0x80BC0568u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0568u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80BC0568: lwz     r31, 12(r1)
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
label_80BC056C:
    ctx->pc = 0x80BC056Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC056Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80BC056C: lfs     f0, 32(r27)
    if (!ppc_fp_available_inline(ctx, 0x80BC056Cu)) return;
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
label_80BC0570:
    ctx->pc = 0x80BC0570u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0570u)) return;
    // 80BC0570: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80BC0570u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80BC0574:
    ctx->pc = 0x80BC0574u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0574u)) return;
    // 80BC0574: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80BC0574u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80BC0578:
    ctx->pc = 0x80BC0578u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0578u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80BC0578: stfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BC0578u)) return;
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
label_80BC057C:
    ctx->pc = 0x80BC057Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC057Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80BC057C: lwz     r30, 20(r1)
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
label_80BC0580:
    ctx->pc = 0x80BC0580u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0580u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80BC0580: lfs     f0, 36(r27)
    if (!ppc_fp_available_inline(ctx, 0x80BC0580u)) return;
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
label_80BC0584:
    ctx->pc = 0x80BC0584u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0584u)) return;
    // 80BC0584: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80BC0584u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80BC0588:
    ctx->pc = 0x80BC0588u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0588u)) return;
    // 80BC0588: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80BC0588u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80BC058C:
    ctx->pc = 0x80BC058Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC058Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80BC058C: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BC058Cu)) return;
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
label_80BC0590:
    ctx->pc = 0x80BC0590u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0590u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BC0590: lwz     r29, 28(r1)
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
label_80BC0594:
    ctx->pc = 0x80BC0594u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0594u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80BC0594: lfs     f0, 40(r27)
    if (!ppc_fp_available_inline(ctx, 0x80BC0594u)) return;
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
label_80BC0598:
    ctx->pc = 0x80BC0598u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0598u)) return;
    // 80BC0598: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80BC0598u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80BC059C:
    ctx->pc = 0x80BC059Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC059Cu)) return;
    // 80BC059C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80BC059Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80BC05A0:
    ctx->pc = 0x80BC05A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC05A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BC05A0: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BC05A0u)) return;
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
label_80BC05A4:
    ctx->pc = 0x80BC05A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC05A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BC05A4: lwz     r28, 36(r1)
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
label_80BC05A8:
    ctx->pc = 0x80BC05A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC05A8u)) return;
    // 80BC05A8: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80BC05AC:
    ctx->pc = 0x80BC05ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC05ACu)) return;
    // 80BC05AC: addi    r3, r3, 4120
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4120);

label_80BC05B0:
    ctx->pc = 0x80BC05B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC05B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BC05B0: lwz     r0, 0(r3)
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
label_80BC05B4:
    ctx->pc = 0x80BC05B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC05B4u)) return;
    // 80BC05B4: cmpwi   r0, 0
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

label_80BC05B8:
    ctx->pc = 0x80BC05B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC05B8u)) return;
    // 80BC05B8: bc    4, 2, 0x80BC0670
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80BC0670;
        }
    }

label_80BC05BC:
    ctx->pc = 0x80BC05BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC05BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80BC05BC: rlwinm r0, r31, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_80BC05C0:
    ctx->pc = 0x80BC05C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC05C0u)) return;
    // 80BC05C0: cmplwi  r0, 0x0000
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

label_80BC05C4:
    ctx->pc = 0x80BC05C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC05C4u)) return;
    // 80BC05C4: bc    12, 2, 0x80BC0670
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80BC0670;
        }
    }

label_80BC05C8:
    ctx->pc = 0x80BC05C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC05C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80BC05C8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BC05CC:
    ctx->pc = 0x80BC05CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC05CCu)) return;
    // 80BC05CC: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_80BC05D0:
    ctx->pc = 0x80BC05D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC05D0u)) return;
    // 80BC05D0: bl      0x8060F4F8
    {
            ctx->lr = 0x80BC05D4u;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80BC05D4:
    ctx->pc = 0x80BC05D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC05D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80BC05D4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80BC05D8:
    ctx->pc = 0x80BC05D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC05D8u)) return;
    // 80BC05D8: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80BC05DC:
    ctx->pc = 0x80BC05DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC05DCu)) return;
    // 80BC05DC: bl      0x8060F4F8
    {
            ctx->lr = 0x80BC05E0u;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80BC05E0:
    ctx->pc = 0x80BC05E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC05E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BC05E0: lfs     f5, 52(r27)
    if (!ppc_fp_available_inline(ctx, 0x80BC05E0u)) return;
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
label_80BC05E4:
    ctx->pc = 0x80BC05E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC05E4u)) return;
    // 80BC05E4: lis     r3, -27514
    ctx->gpr[3] = ((u32)(s32)(-27514) << 16);

label_80BC05E8:
    ctx->pc = 0x80BC05E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC05E8u)) return;
    // 80BC05E8: addi    r3, r3, 20152
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(20152);

label_80BC05EC:
    ctx->pc = 0x80BC05ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC05ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BC05EC: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BC05ECu)) return;
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
label_80BC05F0:
    ctx->pc = 0x80BC05F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC05F0u)) return;
    // 80BC05F0: fcmpo   cr0, f5, f0
    if (!ppc_fp_available_inline(ctx, 0x80BC05F0u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[5], ctx->fpr[0], true);

label_80BC05F4:
    ctx->pc = 0x80BC05F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC05F4u)) return;
    // 80BC05F4: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80BC05F8:
    ctx->pc = 0x80BC05F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC05F8u)) return;
    // 80BC05F8: bc    4, 2, 0x80BC060C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80BC060C;
        }
    }

label_80BC05FC:
    ctx->pc = 0x80BC05FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC05FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80BC05FC: lis     r3, -27514
    ctx->gpr[3] = ((u32)(s32)(-27514) << 16);

label_80BC0600:
    ctx->pc = 0x80BC0600u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0600u)) return;
    // 80BC0600: addi    r3, r3, 20148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(20148);

label_80BC0604:
    ctx->pc = 0x80BC0604u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0604u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BC0604: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BC0604u)) return;
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
label_80BC0608:
    ctx->pc = 0x80BC0608u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0608u)) return;
    // 80BC0608: fadds   f5, f5, f0
    if (!ppc_fp_available_inline(ctx, 0x80BC0608u)) return;
    ppc_fadds(ctx, 5, 5, 0);

label_80BC060C:
    ctx->pc = 0x80BC060Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC060Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80BC060C: rlwinm r0, r31, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_80BC0610:
    ctx->pc = 0x80BC0610u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0610u)) return;
    // 80BC0610: cmplwi  r0, 0x00FF
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

label_80BC0614:
    ctx->pc = 0x80BC0614u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0614u)) return;
    // 80BC0614: bc    4, 1, 0x80BC061C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80BC061C;
        }
    }

label_80BC0618:
    ctx->pc = 0x80BC0618u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC0618u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BC0618: li      r31, 255
    ctx->gpr[31] = (u32)(s32)(255);

label_80BC061C:
    ctx->pc = 0x80BC061Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 21u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC061Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 21u : 1u;
    // 80BC061C: lis     r3, -27514
    ctx->gpr[3] = ((u32)(s32)(-27514) << 16);

label_80BC0620:
    ctx->pc = 0x80BC0620u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0620u)) return;
    // 80BC0620: addi    r3, r3, 20156
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(20156);

label_80BC0624:
    ctx->pc = 0x80BC0624u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0624u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80BC0624: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BC0624u)) return;
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
label_80BC0628:
    ctx->pc = 0x80BC0628u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0628u)) return;
    // 80BC0628: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80BC0628u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_80BC062C:
    ctx->pc = 0x80BC062Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC062Cu)) return;
    // 80BC062C: lis     r3, -27514
    ctx->gpr[3] = ((u32)(s32)(-27514) << 16);

label_80BC0630:
    ctx->pc = 0x80BC0630u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0630u)) return;
    // 80BC0630: addi    r3, r3, 20160
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(20160);

label_80BC0634:
    ctx->pc = 0x80BC0634u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0634u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80BC0634: lfs     f3, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BC0634u)) return;
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
label_80BC0638:
    ctx->pc = 0x80BC0638u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0638u)) return;
    // 80BC0638: lis     r3, -27514
    ctx->gpr[3] = ((u32)(s32)(-27514) << 16);

label_80BC063C:
    ctx->pc = 0x80BC063Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC063Cu)) return;
    // 80BC063C: addi    r3, r3, 20164
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(20164);

label_80BC0640:
    ctx->pc = 0x80BC0640u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0640u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80BC0640: lfs     f4, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BC0640u)) return;
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
label_80BC0644:
    ctx->pc = 0x80BC0644u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0644u)) return;
    // 80BC0644: rlwinm r5, r28, 0, 24, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[28], 0u) & 0x000000FFu;
    }

label_80BC0648:
    ctx->pc = 0x80BC0648u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0648u)) return;
    // 80BC0648: rlwinm r0, r29, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[29], 0u) & 0x000000FFu;
    }

label_80BC064C:
    ctx->pc = 0x80BC064Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC064Cu)) return;
    // 80BC064C: rlwinm r4, r0, 8, 0, 23
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 8u) & 0xFFFFFF00u;
    }

label_80BC0650:
    ctx->pc = 0x80BC0650u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0650u)) return;
    // 80BC0650: rlwinm r0, r31, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_80BC0654:
    ctx->pc = 0x80BC0654u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0654u)) return;
    // 80BC0654: rlwinm r3, r0, 24, 0, 7
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 24u) & 0xFF000000u;
    }

label_80BC0658:
    ctx->pc = 0x80BC0658u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0658u)) return;
    // 80BC0658: rlwinm r0, r30, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0x000000FFu;
    }

label_80BC065C:
    ctx->pc = 0x80BC065Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC065Cu)) return;
    // 80BC065C: rlwinm r0, r0, 16, 0, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 16u) & 0xFFFF0000u;
    }

label_80BC0660:
    ctx->pc = 0x80BC0660u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0660u)) return;
    // 80BC0660: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80BC0664:
    ctx->pc = 0x80BC0664u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0664u)) return;
    // 80BC0664: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_80BC0668:
    ctx->pc = 0x80BC0668u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0668u)) return;
    // 80BC0668: or   r3, r5, r0
    {
        ctx->gpr[3] = ctx->gpr[5] | ctx->gpr[0];
    }

label_80BC066C:
    ctx->pc = 0x80BC066Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC066Cu)) return;
    // 80BC066C: bl      0x80BC0688
    {
            ctx->lr = 0x80BC0670u;
            goto label_80BC0688;
    }

label_80BC0670:
    ctx->pc = 0x80BC0670u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC0670u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BC0670: addi    r11, r1, 64
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(64);

label_80BC0674:
    ctx->pc = 0x80BC0674u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0674u)) return;
    // 80BC0674: bl      0x80006E20
    {
            ctx->lr = 0x80BC0678u;
            ctx->pc = 0x80006E20u;
            return;
    }

label_80BC0678:
    ctx->pc = 0x80BC0678u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC0678u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BC0678: lwz     r0, 68(r1)
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
label_80BC067C:
    ctx->pc = 0x80BC067Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BC067Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BC067C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BC0680:
    ctx->pc = 0x80BC0680u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0680u)) return;
    // 80BC0680: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_80BC0684:
    ctx->pc = 0x80BC0684u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0684u)) return;
    // 80BC0684: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BBFC40;
        }
    }

label_80BC0688:
    ctx->pc = 0x80BC0688u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC0688u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BC0688: stwu     r1, -16(r1)
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
label_80BC068C:
    ctx->pc = 0x80BC068Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC068Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BC068C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BC0690:
    ctx->pc = 0x80BC0690u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0690u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BC0690: stw     r0, 20(r1)
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
label_80BC0694:
    ctx->pc = 0x80BC0694u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0694u)) return;
    // 80BC0694: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80BC0698:
    ctx->pc = 0x80BC0698u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0698u)) return;
    // 80BC0698: bl      0x80607948
    {
            ctx->lr = 0x80BC069Cu;
            ctx->pc = 0x80607948u;
            return;
    }

label_80BC069C:
    ctx->pc = 0x80BC069Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC069Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BC069C: lwz     r0, 20(r1)
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
label_80BC06A0:
    ctx->pc = 0x80BC06A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BC06A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BC06A0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BC06A4:
    ctx->pc = 0x80BC06A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC06A4u)) return;
    // 80BC06A4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80BC06A8:
    ctx->pc = 0x80BC06A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC06A8u)) return;
    // 80BC06A8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BBFC40;
        }
    }

label_80BC06AC:
    ctx->pc = 0x80BC06ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC06ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80BC06AC: stwu     r1, -16(r1)
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
label_80BC06B0:
    ctx->pc = 0x80BC06B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC06B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BC06B0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BC06B4:
    ctx->pc = 0x80BC06B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC06B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80BC06B4: stw     r0, 20(r1)
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
label_80BC06B8:
    ctx->pc = 0x80BC06B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC06B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80BC06B8: lwz     r5, 32(r3)
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
label_80BC06BC:
    ctx->pc = 0x80BC06BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC06BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BC06BC: lfs     f1, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BC06BCu)) return;
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
label_80BC06C0:
    ctx->pc = 0x80BC06C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC06C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BC06C0: lfs     f0, 48(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BC06C0u)) return;
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
label_80BC06C4:
    ctx->pc = 0x80BC06C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC06C4u)) return;
    // 80BC06C4: fadds   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80BC06C4u)) return;
    ppc_fadds(ctx, 1, 1, 0);

label_80BC06C8:
    ctx->pc = 0x80BC06C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC06C8u)) return;
    // 80BC06C8: lis     r4, -27514
    ctx->gpr[4] = ((u32)(s32)(-27514) << 16);

label_80BC06CC:
    ctx->pc = 0x80BC06CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC06CCu)) return;
    // 80BC06CC: addi    r4, r4, 20168
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(20168);

label_80BC06D0:
    ctx->pc = 0x80BC06D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC06D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BC06D0: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BC06D0u)) return;
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
label_80BC06D4:
    ctx->pc = 0x80BC06D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC06D4u)) return;
    // 80BC06D4: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80BC06D4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80BC06D8:
    ctx->pc = 0x80BC06D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC06D8u)) return;
    // 80BC06D8: bc    4, 1, 0x80BC06E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80BC06E4;
        }
    }

label_80BC06DC:
    ctx->pc = 0x80BC06DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC06DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BC06DC: fmr    f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80BC06DCu)) return;
    ctx->fpr[1] = ctx->fpr[0];

label_80BC06E0:
    ctx->pc = 0x80BC06E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC06E0u)) return;
    // 80BC06E0: b       0x80BC06FC
    {
            goto label_80BC06FC;
    }

label_80BC06E4:
    ctx->pc = 0x80BC06E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC06E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80BC06E4: lis     r4, -27514
    ctx->gpr[4] = ((u32)(s32)(-27514) << 16);

label_80BC06E8:
    ctx->pc = 0x80BC06E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC06E8u)) return;
    // 80BC06E8: addi    r4, r4, 20156
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(20156);

label_80BC06EC:
    ctx->pc = 0x80BC06ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC06ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BC06EC: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BC06ECu)) return;
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
label_80BC06F0:
    ctx->pc = 0x80BC06F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC06F0u)) return;
    // 80BC06F0: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80BC06F0u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80BC06F4:
    ctx->pc = 0x80BC06F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC06F4u)) return;
    // 80BC06F4: bc    4, 0, 0x80BC06FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80BC06FC;
        }
    }

label_80BC06F8:
    ctx->pc = 0x80BC06F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC06F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BC06F8: fmr    f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80BC06F8u)) return;
    ctx->fpr[1] = ctx->fpr[0];

label_80BC06FC:
    ctx->pc = 0x80BC06FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC06FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BC06FC: stfs     f1, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BC06FCu)) return;
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
label_80BC0700:
    ctx->pc = 0x80BC0700u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0700u)) return;
    // 80BC0700: bl      0x80BC0534
    {
            ctx->lr = 0x80BC0704u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80BC0534u;
                return;
            }
            goto label_80BC0534;
    }

label_80BC0704:
    ctx->pc = 0x80BC0704u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC0704u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BC0704: lwz     r0, 20(r1)
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
label_80BC0708:
    ctx->pc = 0x80BC0708u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BC0708u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BC0708: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BC070C:
    ctx->pc = 0x80BC070Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC070Cu)) return;
    // 80BC070C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80BC0710:
    ctx->pc = 0x80BC0710u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0710u)) return;
    // 80BC0710: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BBFC40;
        }
    }

label_80BC0714:
    ctx->pc = 0x80BC0714u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC0714u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BC0714: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BBFC40;
        }
    }

label_80BC0718:
    ctx->pc = 0x80BC0718u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC0718u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80BC0718: stwu     r1, -16(r1)
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
label_80BC071C:
    ctx->pc = 0x80BC071Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC071Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80BC071C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BC0720:
    ctx->pc = 0x80BC0720u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0720u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BC0720: stw     r0, 20(r1)
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
label_80BC0724:
    ctx->pc = 0x80BC0724u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0724u)) return;
    // 80BC0724: lis     r4, -32580
    ctx->gpr[4] = ((u32)(s32)(-32580) << 16);

label_80BC0728:
    ctx->pc = 0x80BC0728u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0728u)) return;
    // 80BC0728: addi    r0, r4, 1708
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1708);

label_80BC072C:
    ctx->pc = 0x80BC072Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC072Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BC072C: stw     r0, 16(r3)
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
label_80BC0730:
    ctx->pc = 0x80BC0730u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0730u)) return;
    // 80BC0730: lis     r4, -32580
    ctx->gpr[4] = ((u32)(s32)(-32580) << 16);

label_80BC0734:
    ctx->pc = 0x80BC0734u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0734u)) return;
    // 80BC0734: addi    r0, r4, 1332
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1332);

label_80BC0738:
    ctx->pc = 0x80BC0738u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0738u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BC0738: stw     r0, 20(r3)
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
label_80BC073C:
    ctx->pc = 0x80BC073Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC073Cu)) return;
    // 80BC073C: lis     r4, -32580
    ctx->gpr[4] = ((u32)(s32)(-32580) << 16);

label_80BC0740:
    ctx->pc = 0x80BC0740u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0740u)) return;
    // 80BC0740: addi    r0, r4, 1812
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1812);

label_80BC0744:
    ctx->pc = 0x80BC0744u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0744u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BC0744: stw     r0, 24(r3)
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
label_80BC0748:
    ctx->pc = 0x80BC0748u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0748u)) return;
    // 80BC0748: bl      0x80BC06AC
    {
            ctx->lr = 0x80BC074Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80BC06ACu;
                return;
            }
            goto label_80BC06AC;
    }

label_80BC074C:
    ctx->pc = 0x80BC074Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC074Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BC074C: lwz     r0, 20(r1)
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
label_80BC0750:
    ctx->pc = 0x80BC0750u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BC0750u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BC0750: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BC0754:
    ctx->pc = 0x80BC0754u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0754u)) return;
    // 80BC0754: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80BC0758:
    ctx->pc = 0x80BC0758u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0758u)) return;
    // 80BC0758: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BBFC40;
        }
    }

label_80BC075C:
    ctx->pc = 0x80BC075Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 23u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC075Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 23u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80BC075C: stwu     r1, -96(r1)
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
label_80BC0760:
    ctx->pc = 0x80BC0760u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0760u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80BC0760: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BC0764:
    ctx->pc = 0x80BC0764u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0764u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80BC0764: stw     r0, 100(r1)
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
label_80BC0768:
    ctx->pc = 0x80BC0768u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0768u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80BC0768: stfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BC0768u)) return;
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
label_80BC076C:
    ctx->pc = 0x80BC076Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC076Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80BC076C: psq_st   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BC076Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80BC076Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BC0770:
    ctx->pc = 0x80BC0770u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0770u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80BC0770: stfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BC0770u)) return;
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
label_80BC0774:
    ctx->pc = 0x80BC0774u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0774u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80BC0774: psq_st   f30, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BC0774u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x80BC0774u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BC0778:
    ctx->pc = 0x80BC0778u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0778u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80BC0778: stfd     f29, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BC0778u)) return;
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
label_80BC077C:
    ctx->pc = 0x80BC077Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC077Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80BC077C: psq_st   f29, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BC077Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x80BC077Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BC0780:
    ctx->pc = 0x80BC0780u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0780u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80BC0780: stfd     f28, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BC0780u)) return;
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
label_80BC0784:
    ctx->pc = 0x80BC0784u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0784u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80BC0784: psq_st   f28, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BC0784u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x80BC0784u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BC0788:
    ctx->pc = 0x80BC0788u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0788u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80BC0788: stfd     f27, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BC0788u)) return;
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
label_80BC078C:
    ctx->pc = 0x80BC078Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC078Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BC078C: psq_st   f27, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BC078Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_store_inline(ctx, 27u, ea, false, 0u, false, 0x80BC078Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BC0790:
    ctx->pc = 0x80BC0790u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0790u)) return;
    // 80BC0790: fmr    f27, f1
    if (!ppc_fp_available_inline(ctx, 0x80BC0790u)) return;
    ctx->fpr[27] = ctx->fpr[1];

label_80BC0794:
    ctx->pc = 0x80BC0794u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0794u)) return;
    // 80BC0794: fmr    f28, f2
    if (!ppc_fp_available_inline(ctx, 0x80BC0794u)) return;
    ctx->fpr[28] = ctx->fpr[2];

label_80BC0798:
    ctx->pc = 0x80BC0798u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0798u)) return;
    // 80BC0798: fmr    f29, f3
    if (!ppc_fp_available_inline(ctx, 0x80BC0798u)) return;
    ctx->fpr[29] = ctx->fpr[3];

label_80BC079C:
    ctx->pc = 0x80BC079Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC079Cu)) return;
    // 80BC079C: fmr    f30, f4
    if (!ppc_fp_available_inline(ctx, 0x80BC079Cu)) return;
    ctx->fpr[30] = ctx->fpr[4];

label_80BC07A0:
    ctx->pc = 0x80BC07A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC07A0u)) return;
    // 80BC07A0: fmr    f31, f5
    if (!ppc_fp_available_inline(ctx, 0x80BC07A0u)) return;
    ctx->fpr[31] = ctx->fpr[5];

label_80BC07A4:
    ctx->pc = 0x80BC07A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC07A4u)) return;
    // 80BC07A4: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80BC07A8:
    ctx->pc = 0x80BC07A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC07A8u)) return;
    // 80BC07A8: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80BC07AC:
    ctx->pc = 0x80BC07ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC07ACu)) return;
    // 80BC07AC: lis     r5, -32580
    ctx->gpr[5] = ((u32)(s32)(-32580) << 16);

label_80BC07B0:
    ctx->pc = 0x80BC07B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC07B0u)) return;
    // 80BC07B0: addi    r5, r5, 1816
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1816);

label_80BC07B4:
    ctx->pc = 0x80BC07B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC07B4u)) return;
    // 80BC07B4: bl      0x8050FD60
    {
            ctx->lr = 0x80BC07B8u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80BC07B8:
    ctx->pc = 0x80BC07B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 25u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC07B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 25u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80BC07B8: lwz     r5, 32(r3)
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
label_80BC07BC:
    ctx->pc = 0x80BC07BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC07BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80BC07BC: stfs     f27, 48(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BC07BCu)) return;
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
label_80BC07C0:
    ctx->pc = 0x80BC07C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC07C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80BC07C0: stfs     f28, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BC07C0u)) return;
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
label_80BC07C4:
    ctx->pc = 0x80BC07C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC07C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80BC07C4: stfs     f29, 32(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BC07C4u)) return;
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
label_80BC07C8:
    ctx->pc = 0x80BC07C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC07C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80BC07C8: stfs     f30, 36(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BC07C8u)) return;
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
label_80BC07CC:
    ctx->pc = 0x80BC07CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC07CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80BC07CC: stfs     f31, 40(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BC07CCu)) return;
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
label_80BC07D0:
    ctx->pc = 0x80BC07D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC07D0u)) return;
    // 80BC07D0: lis     r4, -27514
    ctx->gpr[4] = ((u32)(s32)(-27514) << 16);

label_80BC07D4:
    ctx->pc = 0x80BC07D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC07D4u)) return;
    // 80BC07D4: addi    r4, r4, 20152
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(20152);

label_80BC07D8:
    ctx->pc = 0x80BC07D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC07D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80BC07D8: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BC07D8u)) return;
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
label_80BC07DC:
    ctx->pc = 0x80BC07DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC07DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80BC07DC: stfs     f0, 52(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BC07DCu)) return;
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
label_80BC07E0:
    ctx->pc = 0x80BC07E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC07E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80BC07E0: psq_l   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BC07E0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80BC07E0u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BC07E4:
    ctx->pc = 0x80BC07E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC07E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80BC07E4: lfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BC07E4u)) return;
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
label_80BC07E8:
    ctx->pc = 0x80BC07E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC07E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80BC07E8: psq_l   f30, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BC07E8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x80BC07E8u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BC07EC:
    ctx->pc = 0x80BC07ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC07ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80BC07EC: lfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BC07ECu)) return;
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
label_80BC07F0:
    ctx->pc = 0x80BC07F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC07F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BC07F0: psq_l   f29, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BC07F0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x80BC07F0u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BC07F4:
    ctx->pc = 0x80BC07F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC07F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80BC07F4: lfd     f29, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BC07F4u)) return;
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
label_80BC07F8:
    ctx->pc = 0x80BC07F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC07F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80BC07F8: psq_l   f28, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BC07F8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x80BC07F8u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BC07FC:
    ctx->pc = 0x80BC07FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC07FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BC07FC: lfd     f28, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BC07FCu)) return;
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
label_80BC0800:
    ctx->pc = 0x80BC0800u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0800u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BC0800: psq_l   f27, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BC0800u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_load_inline(ctx, 27u, ea, false, 0u, false, 0x80BC0800u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BC0804:
    ctx->pc = 0x80BC0804u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0804u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BC0804: lfd     f27, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BC0804u)) return;
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
label_80BC0808:
    ctx->pc = 0x80BC0808u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0808u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BC0808: lwz     r0, 100(r1)
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
label_80BC080C:
    ctx->pc = 0x80BC080Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BC080Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BC080C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BC0810:
    ctx->pc = 0x80BC0810u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0810u)) return;
    // 80BC0810: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_80BC0814:
    ctx->pc = 0x80BC0814u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0814u)) return;
    // 80BC0814: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BBFC40;
        }
    }

label_80BC0818:
    ctx->pc = 0x80BC0818u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC0818u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BC0818: lwz     r3, 32(r3)
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
label_80BC081C:
    ctx->pc = 0x80BC081Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC081Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BC081C: stfs     f1, 48(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BC081Cu)) return;
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
label_80BC0820:
    ctx->pc = 0x80BC0820u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0820u)) return;
    // 80BC0820: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BBFC40;
        }
    }

label_80BC0824:
    ctx->pc = 0x80BC0824u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC0824u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BC0824: lwz     r3, 32(r3)
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
label_80BC0828:
    ctx->pc = 0x80BC0828u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0828u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BC0828: stfs     f1, 44(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BC0828u)) return;
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
label_80BC082C:
    ctx->pc = 0x80BC082Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC082Cu)) return;
    // 80BC082C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BBFC40;
        }
    }

label_80BC0830:
    ctx->pc = 0x80BC0830u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC0830u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BC0830: lwz     r3, 32(r3)
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
label_80BC0834:
    ctx->pc = 0x80BC0834u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0834u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BC0834: stfs     f1, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BC0834u)) return;
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
label_80BC0838:
    ctx->pc = 0x80BC0838u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0838u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BC0838: stfs     f2, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BC0838u)) return;
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
label_80BC083C:
    ctx->pc = 0x80BC083Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC083Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BC083C: stfs     f3, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BC083Cu)) return;
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
label_80BC0840:
    ctx->pc = 0x80BC0840u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0840u)) return;
    // 80BC0840: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BBFC40;
        }
    }

label_80BC0844:
    ctx->pc = 0x80BC0844u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BC0844u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BC0844: lwz     r3, 32(r3)
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
label_80BC0848:
    ctx->pc = 0x80BC0848u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC0848u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BC0848: stfs     f1, 52(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BC0848u)) return;
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
label_80BC084C:
    ctx->pc = 0x80BC084Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BC084Cu)) return;
    // 80BC084C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BBFC40;
        }
    }

    ctx->pc = 0x80BC0850u;
    return;
return_dispatch_80BBFC40:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80BBFC78u: goto label_80BBFC78;
    case 0x80BBFC7Cu: goto label_80BBFC7C;
    case 0x80BBFC80u: goto label_80BBFC80;
    case 0x80BBFC88u: goto label_80BBFC88;
    case 0x80BBFC90u: goto label_80BBFC90;
    case 0x80BBFCB8u: goto label_80BBFCB8;
    case 0x80BBFCC0u: goto label_80BBFCC0;
    case 0x80BBFCD4u: goto label_80BBFCD4;
    case 0x80BBFCDCu: goto label_80BBFCDC;
    case 0x80BBFD20u: goto label_80BBFD20;
    case 0x80BBFD48u: goto label_80BBFD48;
    case 0x80BBFD64u: goto label_80BBFD64;
    case 0x80BBFD6Cu: goto label_80BBFD6C;
    case 0x80BBFD74u: goto label_80BBFD74;
    case 0x80BBFD9Cu: goto label_80BBFD9C;
    case 0x80BBFDA4u: goto label_80BBFDA4;
    case 0x80BBFDB0u: goto label_80BBFDB0;
    case 0x80BBFDB8u: goto label_80BBFDB8;
    case 0x80BBFDE0u: goto label_80BBFDE0;
    case 0x80BBFDE8u: goto label_80BBFDE8;
    case 0x80BBFDF4u: goto label_80BBFDF4;
    case 0x80BBFDFCu: goto label_80BBFDFC;
    case 0x80BBFE2Cu: goto label_80BBFE2C;
    case 0x80BBFE48u: goto label_80BBFE48;
    case 0x80BBFE6Cu: goto label_80BBFE6C;
    case 0x80BBFE74u: goto label_80BBFE74;
    case 0x80BBFEA4u: goto label_80BBFEA4;
    case 0x80BBFEC0u: goto label_80BBFEC0;
    case 0x80BBFEC8u: goto label_80BBFEC8;
    case 0x80BBFED0u: goto label_80BBFED0;
    case 0x80BBFEDCu: goto label_80BBFEDC;
    case 0x80BBFEE4u: goto label_80BBFEE4;
    case 0x80BBFEECu: goto label_80BBFEEC;
    case 0x80BBFEF8u: goto label_80BBFEF8;
    case 0x80BBFF00u: goto label_80BBFF00;
    case 0x80BBFF08u: goto label_80BBFF08;
    case 0x80BBFF30u: goto label_80BBFF30;
    case 0x80BBFF38u: goto label_80BBFF38;
    case 0x80BBFF60u: goto label_80BBFF60;
    case 0x80BBFF68u: goto label_80BBFF68;
    case 0x80BBFF70u: goto label_80BBFF70;
    case 0x80BBFF98u: goto label_80BBFF98;
    case 0x80BBFFA0u: goto label_80BBFFA0;
    case 0x80BBFFA4u: goto label_80BBFFA4;
    case 0x80BBFFACu: goto label_80BBFFAC;
    case 0x80BBFFD4u: goto label_80BBFFD4;
    case 0x80BBFFDCu: goto label_80BBFFDC;
    case 0x80BC0004u: goto label_80BC0004;
    case 0x80BC000Cu: goto label_80BC000C;
    case 0x80BC003Cu: goto label_80BC003C;
    case 0x80BC0058u: goto label_80BC0058;
    case 0x80BC0060u: goto label_80BC0060;
    case 0x80BC0088u: goto label_80BC0088;
    case 0x80BC0090u: goto label_80BC0090;
    case 0x80BC009Cu: goto label_80BC009C;
    case 0x80BC00C0u: goto label_80BC00C0;
    case 0x80BC00C8u: goto label_80BC00C8;
    case 0x80BC00F0u: goto label_80BC00F0;
    case 0x80BC00F8u: goto label_80BC00F8;
    case 0x80BC0104u: goto label_80BC0104;
    case 0x80BC0128u: goto label_80BC0128;
    case 0x80BC0130u: goto label_80BC0130;
    case 0x80BC0134u: goto label_80BC0134;
    case 0x80BC013Cu: goto label_80BC013C;
    case 0x80BC0144u: goto label_80BC0144;
    case 0x80BC0150u: goto label_80BC0150;
    case 0x80BC0174u: goto label_80BC0174;
    case 0x80BC017Cu: goto label_80BC017C;
    case 0x80BC0180u: goto label_80BC0180;
    case 0x80BC01B0u: goto label_80BC01B0;
    case 0x80BC01CCu: goto label_80BC01CC;
    case 0x80BC01D4u: goto label_80BC01D4;
    case 0x80BC01FCu: goto label_80BC01FC;
    case 0x80BC0204u: goto label_80BC0204;
    case 0x80BC0208u: goto label_80BC0208;
    case 0x80BC0210u: goto label_80BC0210;
    case 0x80BC0238u: goto label_80BC0238;
    case 0x80BC0240u: goto label_80BC0240;
    case 0x80BC024Cu: goto label_80BC024C;
    case 0x80BC0254u: goto label_80BC0254;
    case 0x80BC0278u: goto label_80BC0278;
    case 0x80BC0280u: goto label_80BC0280;
    case 0x80BC0284u: goto label_80BC0284;
    case 0x80BC028Cu: goto label_80BC028C;
    case 0x80BC0290u: goto label_80BC0290;
    case 0x80BC0298u: goto label_80BC0298;
    case 0x80BC02A0u: goto label_80BC02A0;
    case 0x80BC02A8u: goto label_80BC02A8;
    case 0x80BC02B4u: goto label_80BC02B4;
    case 0x80BC02D8u: goto label_80BC02D8;
    case 0x80BC02E0u: goto label_80BC02E0;
    case 0x80BC02E4u: goto label_80BC02E4;
    case 0x80BC02ECu: goto label_80BC02EC;
    case 0x80BC02F0u: goto label_80BC02F0;
    case 0x80BC02F4u: goto label_80BC02F4;
    case 0x80BC02FCu: goto label_80BC02FC;
    case 0x80BC0300u: goto label_80BC0300;
    case 0x80BC0308u: goto label_80BC0308;
    case 0x80BC030Cu: goto label_80BC030C;
    case 0x80BC0314u: goto label_80BC0314;
    case 0x80BC0320u: goto label_80BC0320;
    case 0x80BC0328u: goto label_80BC0328;
    case 0x80BC034Cu: goto label_80BC034C;
    case 0x80BC0354u: goto label_80BC0354;
    case 0x80BC0358u: goto label_80BC0358;
    case 0x80BC0360u: goto label_80BC0360;
    case 0x80BC0364u: goto label_80BC0364;
    case 0x80BC0394u: goto label_80BC0394;
    case 0x80BC03B0u: goto label_80BC03B0;
    case 0x80BC03E0u: goto label_80BC03E0;
    case 0x80BC03FCu: goto label_80BC03FC;
    case 0x80BC0404u: goto label_80BC0404;
    case 0x80BC042Cu: goto label_80BC042C;
    case 0x80BC0434u: goto label_80BC0434;
    case 0x80BC043Cu: goto label_80BC043C;
    case 0x80BC0448u: goto label_80BC0448;
    case 0x80BC046Cu: goto label_80BC046C;
    case 0x80BC0474u: goto label_80BC0474;
    case 0x80BC0478u: goto label_80BC0478;
    case 0x80BC0480u: goto label_80BC0480;
    case 0x80BC0484u: goto label_80BC0484;
    case 0x80BC0488u: goto label_80BC0488;
    case 0x80BC0490u: goto label_80BC0490;
    case 0x80BC049Cu: goto label_80BC049C;
    case 0x80BC04C4u: goto label_80BC04C4;
    case 0x80BC04CCu: goto label_80BC04CC;
    case 0x80BC04E0u: goto label_80BC04E0;
    case 0x80BC04E8u: goto label_80BC04E8;
    case 0x80BC04F0u: goto label_80BC04F0;
    case 0x80BC0508u: goto label_80BC0508;
    case 0x80BC051Cu: goto label_80BC051C;
    case 0x80BC0520u: goto label_80BC0520;
    case 0x80BC0548u: goto label_80BC0548;
    case 0x80BC05D4u: goto label_80BC05D4;
    case 0x80BC05E0u: goto label_80BC05E0;
    case 0x80BC0670u: goto label_80BC0670;
    case 0x80BC0678u: goto label_80BC0678;
    case 0x80BC069Cu: goto label_80BC069C;
    case 0x80BC0704u: goto label_80BC0704;
    case 0x80BC074Cu: goto label_80BC074C;
    case 0x80BC07B8u: goto label_80BC07B8;
    default: return;
    }
}

