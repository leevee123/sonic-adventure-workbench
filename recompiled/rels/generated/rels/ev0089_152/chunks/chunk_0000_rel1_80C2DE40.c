// DolRecomp output
#include "../generated.h"

void func_80C2DE40(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80C2DE40[626] = {
        &&label_80C2DE40,
        &&label_80C2DE44,
        &&label_80C2DE48,
        &&label_80C2DE4C,
        &&label_80C2DE50,
        &&label_80C2DE54,
        &&label_80C2DE58,
        &&label_80C2DE5C,
        &&label_80C2DE60,
        &&label_80C2DE64,
        &&label_80C2DE68,
        &&label_80C2DE6C,
        &&label_80C2DE70,
        &&label_80C2DE74,
        &&label_80C2DE78,
        &&label_80C2DE7C,
        &&label_80C2DE80,
        &&label_80C2DE84,
        &&label_80C2DE88,
        &&label_80C2DE8C,
        &&label_80C2DE90,
        &&label_80C2DE94,
        &&label_80C2DE98,
        &&label_80C2DE9C,
        &&label_80C2DEA0,
        &&label_80C2DEA4,
        &&label_80C2DEA8,
        &&label_80C2DEAC,
        &&label_80C2DEB0,
        &&label_80C2DEB4,
        &&label_80C2DEB8,
        &&label_80C2DEBC,
        &&label_80C2DEC0,
        &&label_80C2DEC4,
        &&label_80C2DEC8,
        &&label_80C2DECC,
        &&label_80C2DED0,
        &&label_80C2DED4,
        &&label_80C2DED8,
        &&label_80C2DEDC,
        &&label_80C2DEE0,
        &&label_80C2DEE4,
        &&label_80C2DEE8,
        &&label_80C2DEEC,
        &&label_80C2DEF0,
        &&label_80C2DEF4,
        &&label_80C2DEF8,
        &&label_80C2DEFC,
        &&label_80C2DF00,
        &&label_80C2DF04,
        &&label_80C2DF08,
        &&label_80C2DF0C,
        &&label_80C2DF10,
        &&label_80C2DF14,
        &&label_80C2DF18,
        &&label_80C2DF1C,
        &&label_80C2DF20,
        &&label_80C2DF24,
        &&label_80C2DF28,
        &&label_80C2DF2C,
        &&label_80C2DF30,
        &&label_80C2DF34,
        &&label_80C2DF38,
        &&label_80C2DF3C,
        &&label_80C2DF40,
        &&label_80C2DF44,
        &&label_80C2DF48,
        &&label_80C2DF4C,
        &&label_80C2DF50,
        &&label_80C2DF54,
        &&label_80C2DF58,
        &&label_80C2DF5C,
        &&label_80C2DF60,
        &&label_80C2DF64,
        &&label_80C2DF68,
        &&label_80C2DF6C,
        &&label_80C2DF70,
        &&label_80C2DF74,
        &&label_80C2DF78,
        &&label_80C2DF7C,
        &&label_80C2DF80,
        &&label_80C2DF84,
        &&label_80C2DF88,
        &&label_80C2DF8C,
        &&label_80C2DF90,
        &&label_80C2DF94,
        &&label_80C2DF98,
        &&label_80C2DF9C,
        &&label_80C2DFA0,
        &&label_80C2DFA4,
        &&label_80C2DFA8,
        &&label_80C2DFAC,
        &&label_80C2DFB0,
        &&label_80C2DFB4,
        &&label_80C2DFB8,
        &&label_80C2DFBC,
        &&label_80C2DFC0,
        &&label_80C2DFC4,
        &&label_80C2DFC8,
        &&label_80C2DFCC,
        &&label_80C2DFD0,
        &&label_80C2DFD4,
        &&label_80C2DFD8,
        &&label_80C2DFDC,
        &&label_80C2DFE0,
        &&label_80C2DFE4,
        &&label_80C2DFE8,
        &&label_80C2DFEC,
        &&label_80C2DFF0,
        &&label_80C2DFF4,
        &&label_80C2DFF8,
        &&label_80C2DFFC,
        &&label_80C2E000,
        &&label_80C2E004,
        &&label_80C2E008,
        &&label_80C2E00C,
        &&label_80C2E010,
        &&label_80C2E014,
        &&label_80C2E018,
        &&label_80C2E01C,
        &&label_80C2E020,
        &&label_80C2E024,
        &&label_80C2E028,
        &&label_80C2E02C,
        &&label_80C2E030,
        &&label_80C2E034,
        &&label_80C2E038,
        &&label_80C2E03C,
        &&label_80C2E040,
        &&label_80C2E044,
        &&label_80C2E048,
        &&label_80C2E04C,
        &&label_80C2E050,
        &&label_80C2E054,
        &&label_80C2E058,
        &&label_80C2E05C,
        &&label_80C2E060,
        &&label_80C2E064,
        &&label_80C2E068,
        &&label_80C2E06C,
        &&label_80C2E070,
        &&label_80C2E074,
        &&label_80C2E078,
        &&label_80C2E07C,
        &&label_80C2E080,
        &&label_80C2E084,
        &&label_80C2E088,
        &&label_80C2E08C,
        &&label_80C2E090,
        &&label_80C2E094,
        &&label_80C2E098,
        &&label_80C2E09C,
        &&label_80C2E0A0,
        &&label_80C2E0A4,
        &&label_80C2E0A8,
        &&label_80C2E0AC,
        &&label_80C2E0B0,
        &&label_80C2E0B4,
        &&label_80C2E0B8,
        &&label_80C2E0BC,
        &&label_80C2E0C0,
        &&label_80C2E0C4,
        &&label_80C2E0C8,
        &&label_80C2E0CC,
        &&label_80C2E0D0,
        &&label_80C2E0D4,
        &&label_80C2E0D8,
        &&label_80C2E0DC,
        &&label_80C2E0E0,
        &&label_80C2E0E4,
        &&label_80C2E0E8,
        &&label_80C2E0EC,
        &&label_80C2E0F0,
        &&label_80C2E0F4,
        &&label_80C2E0F8,
        &&label_80C2E0FC,
        &&label_80C2E100,
        &&label_80C2E104,
        &&label_80C2E108,
        &&label_80C2E10C,
        &&label_80C2E110,
        &&label_80C2E114,
        &&label_80C2E118,
        &&label_80C2E11C,
        &&label_80C2E120,
        &&label_80C2E124,
        &&label_80C2E128,
        &&label_80C2E12C,
        &&label_80C2E130,
        &&label_80C2E134,
        &&label_80C2E138,
        &&label_80C2E13C,
        &&label_80C2E140,
        &&label_80C2E144,
        &&label_80C2E148,
        &&label_80C2E14C,
        &&label_80C2E150,
        &&label_80C2E154,
        &&label_80C2E158,
        &&label_80C2E15C,
        &&label_80C2E160,
        &&label_80C2E164,
        &&label_80C2E168,
        &&label_80C2E16C,
        &&label_80C2E170,
        &&label_80C2E174,
        &&label_80C2E178,
        &&label_80C2E17C,
        &&label_80C2E180,
        &&label_80C2E184,
        &&label_80C2E188,
        &&label_80C2E18C,
        &&label_80C2E190,
        &&label_80C2E194,
        &&label_80C2E198,
        &&label_80C2E19C,
        &&label_80C2E1A0,
        &&label_80C2E1A4,
        &&label_80C2E1A8,
        &&label_80C2E1AC,
        &&label_80C2E1B0,
        &&label_80C2E1B4,
        &&label_80C2E1B8,
        &&label_80C2E1BC,
        &&label_80C2E1C0,
        &&label_80C2E1C4,
        &&label_80C2E1C8,
        &&label_80C2E1CC,
        &&label_80C2E1D0,
        &&label_80C2E1D4,
        &&label_80C2E1D8,
        &&label_80C2E1DC,
        &&label_80C2E1E0,
        &&label_80C2E1E4,
        &&label_80C2E1E8,
        &&label_80C2E1EC,
        &&label_80C2E1F0,
        &&label_80C2E1F4,
        &&label_80C2E1F8,
        &&label_80C2E1FC,
        &&label_80C2E200,
        &&label_80C2E204,
        &&label_80C2E208,
        &&label_80C2E20C,
        &&label_80C2E210,
        &&label_80C2E214,
        &&label_80C2E218,
        &&label_80C2E21C,
        &&label_80C2E220,
        &&label_80C2E224,
        &&label_80C2E228,
        &&label_80C2E22C,
        &&label_80C2E230,
        &&label_80C2E234,
        &&label_80C2E238,
        &&label_80C2E23C,
        &&label_80C2E240,
        &&label_80C2E244,
        &&label_80C2E248,
        &&label_80C2E24C,
        &&label_80C2E250,
        &&label_80C2E254,
        &&label_80C2E258,
        &&label_80C2E25C,
        &&label_80C2E260,
        &&label_80C2E264,
        &&label_80C2E268,
        &&label_80C2E26C,
        &&label_80C2E270,
        &&label_80C2E274,
        &&label_80C2E278,
        &&label_80C2E27C,
        &&label_80C2E280,
        &&label_80C2E284,
        &&label_80C2E288,
        &&label_80C2E28C,
        &&label_80C2E290,
        &&label_80C2E294,
        &&label_80C2E298,
        &&label_80C2E29C,
        &&label_80C2E2A0,
        &&label_80C2E2A4,
        &&label_80C2E2A8,
        &&label_80C2E2AC,
        &&label_80C2E2B0,
        &&label_80C2E2B4,
        &&label_80C2E2B8,
        &&label_80C2E2BC,
        &&label_80C2E2C0,
        &&label_80C2E2C4,
        &&label_80C2E2C8,
        &&label_80C2E2CC,
        &&label_80C2E2D0,
        &&label_80C2E2D4,
        &&label_80C2E2D8,
        &&label_80C2E2DC,
        &&label_80C2E2E0,
        &&label_80C2E2E4,
        &&label_80C2E2E8,
        &&label_80C2E2EC,
        &&label_80C2E2F0,
        &&label_80C2E2F4,
        &&label_80C2E2F8,
        &&label_80C2E2FC,
        &&label_80C2E300,
        &&label_80C2E304,
        &&label_80C2E308,
        &&label_80C2E30C,
        &&label_80C2E310,
        &&label_80C2E314,
        &&label_80C2E318,
        &&label_80C2E31C,
        &&label_80C2E320,
        &&label_80C2E324,
        &&label_80C2E328,
        &&label_80C2E32C,
        &&label_80C2E330,
        &&label_80C2E334,
        &&label_80C2E338,
        &&label_80C2E33C,
        &&label_80C2E340,
        &&label_80C2E344,
        &&label_80C2E348,
        &&label_80C2E34C,
        &&label_80C2E350,
        &&label_80C2E354,
        &&label_80C2E358,
        &&label_80C2E35C,
        &&label_80C2E360,
        &&label_80C2E364,
        &&label_80C2E368,
        &&label_80C2E36C,
        &&label_80C2E370,
        &&label_80C2E374,
        &&label_80C2E378,
        &&label_80C2E37C,
        &&label_80C2E380,
        &&label_80C2E384,
        &&label_80C2E388,
        &&label_80C2E38C,
        &&label_80C2E390,
        &&label_80C2E394,
        &&label_80C2E398,
        &&label_80C2E39C,
        &&label_80C2E3A0,
        &&label_80C2E3A4,
        &&label_80C2E3A8,
        &&label_80C2E3AC,
        &&label_80C2E3B0,
        &&label_80C2E3B4,
        &&label_80C2E3B8,
        &&label_80C2E3BC,
        &&label_80C2E3C0,
        &&label_80C2E3C4,
        &&label_80C2E3C8,
        &&label_80C2E3CC,
        &&label_80C2E3D0,
        &&label_80C2E3D4,
        &&label_80C2E3D8,
        &&label_80C2E3DC,
        &&label_80C2E3E0,
        &&label_80C2E3E4,
        &&label_80C2E3E8,
        &&label_80C2E3EC,
        &&label_80C2E3F0,
        &&label_80C2E3F4,
        &&label_80C2E3F8,
        &&label_80C2E3FC,
        &&label_80C2E400,
        &&label_80C2E404,
        &&label_80C2E408,
        &&label_80C2E40C,
        &&label_80C2E410,
        &&label_80C2E414,
        &&label_80C2E418,
        &&label_80C2E41C,
        &&label_80C2E420,
        &&label_80C2E424,
        &&label_80C2E428,
        &&label_80C2E42C,
        &&label_80C2E430,
        &&label_80C2E434,
        &&label_80C2E438,
        &&label_80C2E43C,
        &&label_80C2E440,
        &&label_80C2E444,
        &&label_80C2E448,
        &&label_80C2E44C,
        &&label_80C2E450,
        &&label_80C2E454,
        &&label_80C2E458,
        &&label_80C2E45C,
        &&label_80C2E460,
        &&label_80C2E464,
        &&label_80C2E468,
        &&label_80C2E46C,
        &&label_80C2E470,
        &&label_80C2E474,
        &&label_80C2E478,
        &&label_80C2E47C,
        &&label_80C2E480,
        &&label_80C2E484,
        &&label_80C2E488,
        &&label_80C2E48C,
        &&label_80C2E490,
        &&label_80C2E494,
        &&label_80C2E498,
        &&label_80C2E49C,
        &&label_80C2E4A0,
        &&label_80C2E4A4,
        &&label_80C2E4A8,
        &&label_80C2E4AC,
        &&label_80C2E4B0,
        &&label_80C2E4B4,
        &&label_80C2E4B8,
        &&label_80C2E4BC,
        &&label_80C2E4C0,
        &&label_80C2E4C4,
        &&label_80C2E4C8,
        &&label_80C2E4CC,
        &&label_80C2E4D0,
        &&label_80C2E4D4,
        &&label_80C2E4D8,
        &&label_80C2E4DC,
        &&label_80C2E4E0,
        &&label_80C2E4E4,
        &&label_80C2E4E8,
        &&label_80C2E4EC,
        &&label_80C2E4F0,
        &&label_80C2E4F4,
        &&label_80C2E4F8,
        &&label_80C2E4FC,
        &&label_80C2E500,
        &&label_80C2E504,
        &&label_80C2E508,
        &&label_80C2E50C,
        &&label_80C2E510,
        &&label_80C2E514,
        &&label_80C2E518,
        &&label_80C2E51C,
        &&label_80C2E520,
        &&label_80C2E524,
        &&label_80C2E528,
        &&label_80C2E52C,
        &&label_80C2E530,
        &&label_80C2E534,
        &&label_80C2E538,
        &&label_80C2E53C,
        &&label_80C2E540,
        &&label_80C2E544,
        &&label_80C2E548,
        &&label_80C2E54C,
        &&label_80C2E550,
        &&label_80C2E554,
        &&label_80C2E558,
        &&label_80C2E55C,
        &&label_80C2E560,
        &&label_80C2E564,
        &&label_80C2E568,
        &&label_80C2E56C,
        &&label_80C2E570,
        &&label_80C2E574,
        &&label_80C2E578,
        &&label_80C2E57C,
        &&label_80C2E580,
        &&label_80C2E584,
        &&label_80C2E588,
        &&label_80C2E58C,
        &&label_80C2E590,
        &&label_80C2E594,
        &&label_80C2E598,
        &&label_80C2E59C,
        &&label_80C2E5A0,
        &&label_80C2E5A4,
        &&label_80C2E5A8,
        &&label_80C2E5AC,
        &&label_80C2E5B0,
        &&label_80C2E5B4,
        &&label_80C2E5B8,
        &&label_80C2E5BC,
        &&label_80C2E5C0,
        &&label_80C2E5C4,
        &&label_80C2E5C8,
        &&label_80C2E5CC,
        &&label_80C2E5D0,
        &&label_80C2E5D4,
        &&label_80C2E5D8,
        &&label_80C2E5DC,
        &&label_80C2E5E0,
        &&label_80C2E5E4,
        &&label_80C2E5E8,
        &&label_80C2E5EC,
        &&label_80C2E5F0,
        &&label_80C2E5F4,
        &&label_80C2E5F8,
        &&label_80C2E5FC,
        &&label_80C2E600,
        &&label_80C2E604,
        &&label_80C2E608,
        &&label_80C2E60C,
        &&label_80C2E610,
        &&label_80C2E614,
        &&label_80C2E618,
        &&label_80C2E61C,
        &&label_80C2E620,
        &&label_80C2E624,
        &&label_80C2E628,
        &&label_80C2E62C,
        &&label_80C2E630,
        &&label_80C2E634,
        &&label_80C2E638,
        &&label_80C2E63C,
        &&label_80C2E640,
        &&label_80C2E644,
        &&label_80C2E648,
        &&label_80C2E64C,
        &&label_80C2E650,
        &&label_80C2E654,
        &&label_80C2E658,
        &&label_80C2E65C,
        &&label_80C2E660,
        &&label_80C2E664,
        &&label_80C2E668,
        &&label_80C2E66C,
        &&label_80C2E670,
        &&label_80C2E674,
        &&label_80C2E678,
        &&label_80C2E67C,
        &&label_80C2E680,
        &&label_80C2E684,
        &&label_80C2E688,
        &&label_80C2E68C,
        &&label_80C2E690,
        &&label_80C2E694,
        &&label_80C2E698,
        &&label_80C2E69C,
        &&label_80C2E6A0,
        &&label_80C2E6A4,
        &&label_80C2E6A8,
        &&label_80C2E6AC,
        &&label_80C2E6B0,
        &&label_80C2E6B4,
        &&label_80C2E6B8,
        &&label_80C2E6BC,
        &&label_80C2E6C0,
        &&label_80C2E6C4,
        &&label_80C2E6C8,
        &&label_80C2E6CC,
        &&label_80C2E6D0,
        &&label_80C2E6D4,
        &&label_80C2E6D8,
        &&label_80C2E6DC,
        &&label_80C2E6E0,
        &&label_80C2E6E4,
        &&label_80C2E6E8,
        &&label_80C2E6EC,
        &&label_80C2E6F0,
        &&label_80C2E6F4,
        &&label_80C2E6F8,
        &&label_80C2E6FC,
        &&label_80C2E700,
        &&label_80C2E704,
        &&label_80C2E708,
        &&label_80C2E70C,
        &&label_80C2E710,
        &&label_80C2E714,
        &&label_80C2E718,
        &&label_80C2E71C,
        &&label_80C2E720,
        &&label_80C2E724,
        &&label_80C2E728,
        &&label_80C2E72C,
        &&label_80C2E730,
        &&label_80C2E734,
        &&label_80C2E738,
        &&label_80C2E73C,
        &&label_80C2E740,
        &&label_80C2E744,
        &&label_80C2E748,
        &&label_80C2E74C,
        &&label_80C2E750,
        &&label_80C2E754,
        &&label_80C2E758,
        &&label_80C2E75C,
        &&label_80C2E760,
        &&label_80C2E764,
        &&label_80C2E768,
        &&label_80C2E76C,
        &&label_80C2E770,
        &&label_80C2E774,
        &&label_80C2E778,
        &&label_80C2E77C,
        &&label_80C2E780,
        &&label_80C2E784,
        &&label_80C2E788,
        &&label_80C2E78C,
        &&label_80C2E790,
        &&label_80C2E794,
        &&label_80C2E798,
        &&label_80C2E79C,
        &&label_80C2E7A0,
        &&label_80C2E7A4,
        &&label_80C2E7A8,
        &&label_80C2E7AC,
        &&label_80C2E7B0,
        &&label_80C2E7B4,
        &&label_80C2E7B8,
        &&label_80C2E7BC,
        &&label_80C2E7C0,
        &&label_80C2E7C4,
        &&label_80C2E7C8,
        &&label_80C2E7CC,
        &&label_80C2E7D0,
        &&label_80C2E7D4,
        &&label_80C2E7D8,
        &&label_80C2E7DC,
        &&label_80C2E7E0,
        &&label_80C2E7E4,
        &&label_80C2E7E8,
        &&label_80C2E7EC,
        &&label_80C2E7F0,
        &&label_80C2E7F4,
        &&label_80C2E7F8,
        &&label_80C2E7FC,
        &&label_80C2E800,
        &&label_80C2E804
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80C2DE40u && pc <= 0x80C2E804u && ((pc - 0x80C2DE40u) & 3u) == 0u)
            goto *pc_table_80C2DE40[(pc - 0x80C2DE40u) >> 2];
    }
    return;
label_80C2DE40:
    ctx->pc = 0x80C2DE40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DE40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2DE40: stwu     r1, -16(r1)
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
label_80C2DE44:
    ctx->pc = 0x80C2DE44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DE44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C2DE44: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2DE48:
    ctx->pc = 0x80C2DE48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DE48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2DE48: stw     r0, 20(r1)
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
label_80C2DE4C:
    ctx->pc = 0x80C2DE4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DE4Cu)) return;
    // 80C2DE4C: cmpwi   r3, 2
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

label_80C2DE50:
    ctx->pc = 0x80C2DE50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DE50u)) return;
    // 80C2DE50: bc    12, 2, 0x80C2E150
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C2E150;
        }
    }

label_80C2DE54:
    ctx->pc = 0x80C2DE54u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DE54u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2DE54: bc    4, 0, 0x80C2DE68
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C2DE68;
        }
    }

label_80C2DE58:
    ctx->pc = 0x80C2DE58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DE58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2DE58: cmpwi   r3, 0
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

label_80C2DE5C:
    ctx->pc = 0x80C2DE5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DE5Cu)) return;
    // 80C2DE5C: bc    12, 2, 0x80C2E198
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C2E198;
        }
    }

label_80C2DE60:
    ctx->pc = 0x80C2DE60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DE60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2DE60: bc    4, 0, 0x80C2DE70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C2DE70;
        }
    }

label_80C2DE64:
    ctx->pc = 0x80C2DE64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DE64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2DE64: b       0x80C2E198
    {
            goto label_80C2E198;
    }

label_80C2DE68:
    ctx->pc = 0x80C2DE68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DE68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2DE68: cmpwi   r3, 4
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

label_80C2DE6C:
    ctx->pc = 0x80C2DE6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DE6Cu)) return;
    // 80C2DE6C: b       0x80C2E198
    {
            goto label_80C2E198;
    }

label_80C2DE70:
    ctx->pc = 0x80C2DE70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DE70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2DE70: bl      0x8045DE7C
    {
            ctx->lr = 0x80C2DE74u;
            ctx->pc = 0x8045DE7Cu;
            return;
    }

label_80C2DE74:
    ctx->pc = 0x80C2DE74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DE74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2DE74: bl      0x80460A60
    {
            ctx->lr = 0x80C2DE78u;
            ctx->pc = 0x80460A60u;
            return;
    }

label_80C2DE78:
    ctx->pc = 0x80C2DE78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DE78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2DE78: bl      0x80460A24
    {
            ctx->lr = 0x80C2DE7Cu;
            ctx->pc = 0x80460A24u;
            return;
    }

label_80C2DE7C:
    ctx->pc = 0x80C2DE7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DE7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2DE7C: li      r3, 67
    ctx->gpr[3] = (u32)(s32)(67);

label_80C2DE80:
    ctx->pc = 0x80C2DE80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DE80u)) return;
    // 80C2DE80: bl      0x80406090
    {
            ctx->lr = 0x80C2DE84u;
            ctx->pc = 0x80406090u;
            return;
    }

label_80C2DE84:
    ctx->pc = 0x80C2DE84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DE84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2DE84: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C2DE88:
    ctx->pc = 0x80C2DE88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DE88u)) return;
    // 80C2DE88: bl      0x8045F220
    {
            ctx->lr = 0x80C2DE8Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2DE8C:
    ctx->pc = 0x80C2DE8Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DE8Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C2DE8C: lis     r4, -27451
    ctx->gpr[4] = ((u32)(s32)(-27451) << 16);

label_80C2DE90:
    ctx->pc = 0x80C2DE90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DE90u)) return;
    // 80C2DE90: addi    r4, r4, -4688
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-4688);

label_80C2DE94:
    ctx->pc = 0x80C2DE94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DE94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2DE94: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C2DE94u)) return;
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
label_80C2DE98:
    ctx->pc = 0x80C2DE98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DE98u)) return;
    // 80C2DE98: lis     r4, -27451
    ctx->gpr[4] = ((u32)(s32)(-27451) << 16);

label_80C2DE9C:
    ctx->pc = 0x80C2DE9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DE9Cu)) return;
    // 80C2DE9C: addi    r4, r4, -4684
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-4684);

label_80C2DEA0:
    ctx->pc = 0x80C2DEA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DEA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2DEA0: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C2DEA0u)) return;
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
label_80C2DEA4:
    ctx->pc = 0x80C2DEA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DEA4u)) return;
    // 80C2DEA4: lis     r4, -27451
    ctx->gpr[4] = ((u32)(s32)(-27451) << 16);

label_80C2DEA8:
    ctx->pc = 0x80C2DEA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DEA8u)) return;
    // 80C2DEA8: addi    r4, r4, -4680
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-4680);

label_80C2DEAC:
    ctx->pc = 0x80C2DEACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DEACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C2DEAC: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C2DEACu)) return;
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
label_80C2DEB0:
    ctx->pc = 0x80C2DEB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DEB0u)) return;
    // 80C2DEB0: bl      0x8045EF2C
    {
            ctx->lr = 0x80C2DEB4u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80C2DEB4:
    ctx->pc = 0x80C2DEB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DEB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2DEB4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C2DEB8:
    ctx->pc = 0x80C2DEB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DEB8u)) return;
    // 80C2DEB8: bl      0x8045F220
    {
            ctx->lr = 0x80C2DEBCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2DEBC:
    ctx->pc = 0x80C2DEBCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DEBCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C2DEBC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C2DEC0:
    ctx->pc = 0x80C2DEC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DEC0u)) return;
    // 80C2DEC0: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80C2DEC4:
    ctx->pc = 0x80C2DEC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DEC4u)) return;
    // 80C2DEC4: addi    r5, r5, -2862
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-2862);

label_80C2DEC8:
    ctx->pc = 0x80C2DEC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DEC8u)) return;
    // 80C2DEC8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C2DECC:
    ctx->pc = 0x80C2DECCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DECCu)) return;
    // 80C2DECC: bl      0x8045EEA8
    {
            ctx->lr = 0x80C2DED0u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80C2DED0:
    ctx->pc = 0x80C2DED0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DED0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2DED0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C2DED4:
    ctx->pc = 0x80C2DED4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DED4u)) return;
    // 80C2DED4: bl      0x8045F220
    {
            ctx->lr = 0x80C2DED8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2DED8:
    ctx->pc = 0x80C2DED8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DED8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80C2DED8: lis     r4, -27451
    ctx->gpr[4] = ((u32)(s32)(-27451) << 16);

label_80C2DEDC:
    ctx->pc = 0x80C2DEDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DEDCu)) return;
    // 80C2DEDC: addi    r4, r4, -4676
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-4676);

label_80C2DEE0:
    ctx->pc = 0x80C2DEE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DEE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C2DEE0: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C2DEE0u)) return;
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
label_80C2DEE4:
    ctx->pc = 0x80C2DEE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DEE4u)) return;
    // 80C2DEE4: lis     r4, -27451
    ctx->gpr[4] = ((u32)(s32)(-27451) << 16);

label_80C2DEE8:
    ctx->pc = 0x80C2DEE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DEE8u)) return;
    // 80C2DEE8: addi    r4, r4, -4672
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-4672);

label_80C2DEEC:
    ctx->pc = 0x80C2DEECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DEECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C2DEEC: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C2DEECu)) return;
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
label_80C2DEF0:
    ctx->pc = 0x80C2DEF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DEF0u)) return;
    // 80C2DEF0: lis     r4, -27451
    ctx->gpr[4] = ((u32)(s32)(-27451) << 16);

label_80C2DEF4:
    ctx->pc = 0x80C2DEF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DEF4u)) return;
    // 80C2DEF4: addi    r4, r4, -4668
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-4668);

label_80C2DEF8:
    ctx->pc = 0x80C2DEF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DEF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2DEF8: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C2DEF8u)) return;
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
label_80C2DEFC:
    ctx->pc = 0x80C2DEFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DEFCu)) return;
    // 80C2DEFC: lis     r4, -27451
    ctx->gpr[4] = ((u32)(s32)(-27451) << 16);

label_80C2DF00:
    ctx->pc = 0x80C2DF00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DF00u)) return;
    // 80C2DF00: addi    r4, r4, -4664
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-4664);

label_80C2DF04:
    ctx->pc = 0x80C2DF04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DF04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2DF04: lfs     f4, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C2DF04u)) return;
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
label_80C2DF08:
    ctx->pc = 0x80C2DF08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DF08u)) return;
    // 80C2DF08: lis     r4, -27451
    ctx->gpr[4] = ((u32)(s32)(-27451) << 16);

label_80C2DF0C:
    ctx->pc = 0x80C2DF0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DF0Cu)) return;
    // 80C2DF0C: addi    r4, r4, -4660
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-4660);

label_80C2DF10:
    ctx->pc = 0x80C2DF10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DF10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C2DF10: lfs     f5, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C2DF10u)) return;
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
label_80C2DF14:
    ctx->pc = 0x80C2DF14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DF14u)) return;
    // 80C2DF14: bl      0x8045E570
    {
            ctx->lr = 0x80C2DF18u;
            ctx->pc = 0x8045E570u;
            return;
    }

label_80C2DF18:
    ctx->pc = 0x80C2DF18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DF18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2DF18: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C2DF1C:
    ctx->pc = 0x80C2DF1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DF1Cu)) return;
    // 80C2DF1C: bl      0x8045F7C8
    {
            ctx->lr = 0x80C2DF20u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C2DF20:
    ctx->pc = 0x80C2DF20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DF20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C2DF20: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C2DF24:
    ctx->pc = 0x80C2DF24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DF24u)) return;
    // 80C2DF24: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C2DF28:
    ctx->pc = 0x80C2DF28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DF28u)) return;
    // 80C2DF28: lis     r5, -27451
    ctx->gpr[5] = ((u32)(s32)(-27451) << 16);

label_80C2DF2C:
    ctx->pc = 0x80C2DF2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DF2Cu)) return;
    // 80C2DF2C: addi    r5, r5, -4656
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-4656);

label_80C2DF30:
    ctx->pc = 0x80C2DF30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DF30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2DF30: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C2DF30u)) return;
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
label_80C2DF34:
    ctx->pc = 0x80C2DF34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DF34u)) return;
    // 80C2DF34: lis     r5, -27451
    ctx->gpr[5] = ((u32)(s32)(-27451) << 16);

label_80C2DF38:
    ctx->pc = 0x80C2DF38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DF38u)) return;
    // 80C2DF38: addi    r5, r5, -4652
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-4652);

label_80C2DF3C:
    ctx->pc = 0x80C2DF3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DF3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2DF3C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C2DF3Cu)) return;
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
label_80C2DF40:
    ctx->pc = 0x80C2DF40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DF40u)) return;
    // 80C2DF40: lis     r5, -27451
    ctx->gpr[5] = ((u32)(s32)(-27451) << 16);

label_80C2DF44:
    ctx->pc = 0x80C2DF44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DF44u)) return;
    // 80C2DF44: addi    r5, r5, -4648
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-4648);

label_80C2DF48:
    ctx->pc = 0x80C2DF48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DF48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C2DF48: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C2DF48u)) return;
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
label_80C2DF4C:
    ctx->pc = 0x80C2DF4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DF4Cu)) return;
    // 80C2DF4C: bl      0x8045C750
    {
            ctx->lr = 0x80C2DF50u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C2DF50:
    ctx->pc = 0x80C2DF50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DF50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80C2DF50: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C2DF54:
    ctx->pc = 0x80C2DF54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DF54u)) return;
    // 80C2DF54: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C2DF58:
    ctx->pc = 0x80C2DF58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DF58u)) return;
    // 80C2DF58: li      r5, 3097
    ctx->gpr[5] = (u32)(s32)(3097);

label_80C2DF5C:
    ctx->pc = 0x80C2DF5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DF5Cu)) return;
    // 80C2DF5C: li      r6, 24261
    ctx->gpr[6] = (u32)(s32)(24261);

label_80C2DF60:
    ctx->pc = 0x80C2DF60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DF60u)) return;
    // 80C2DF60: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C2DF64:
    ctx->pc = 0x80C2DF64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DF64u)) return;
    // 80C2DF64: bl      0x8045C7B4
    {
            ctx->lr = 0x80C2DF68u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C2DF68:
    ctx->pc = 0x80C2DF68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DF68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2DF68: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_80C2DF6C:
    ctx->pc = 0x80C2DF6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DF6Cu)) return;
    // 80C2DF6C: bl      0x8045F7C8
    {
            ctx->lr = 0x80C2DF70u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C2DF70:
    ctx->pc = 0x80C2DF70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DF70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2DF70: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C2DF74:
    ctx->pc = 0x80C2DF74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DF74u)) return;
    // 80C2DF74: bl      0x8045F220
    {
            ctx->lr = 0x80C2DF78u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2DF78:
    ctx->pc = 0x80C2DF78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DF78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2DF78: bl      0x8045EB8C
    {
            ctx->lr = 0x80C2DF7Cu;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80C2DF7C:
    ctx->pc = 0x80C2DF7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DF7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2DF7C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C2DF80:
    ctx->pc = 0x80C2DF80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DF80u)) return;
    // 80C2DF80: bl      0x8045F220
    {
            ctx->lr = 0x80C2DF84u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2DF84:
    ctx->pc = 0x80C2DF84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DF84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C2DF84: lis     r4, -27451
    ctx->gpr[4] = ((u32)(s32)(-27451) << 16);

label_80C2DF88:
    ctx->pc = 0x80C2DF88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DF88u)) return;
    // 80C2DF88: addi    r4, r4, 8076
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8076);

label_80C2DF8C:
    ctx->pc = 0x80C2DF8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DF8Cu)) return;
    // 80C2DF8C: lis     r5, -28581
    ctx->gpr[5] = ((u32)(s32)(-28581) << 16);

label_80C2DF90:
    ctx->pc = 0x80C2DF90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DF90u)) return;
    // 80C2DF90: addi    r5, r5, 4544
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4544);

label_80C2DF94:
    ctx->pc = 0x80C2DF94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DF94u)) return;
    // 80C2DF94: lis     r6, -27451
    ctx->gpr[6] = ((u32)(s32)(-27451) << 16);

label_80C2DF98:
    ctx->pc = 0x80C2DF98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DF98u)) return;
    // 80C2DF98: addi    r6, r6, -4644
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-4644);

label_80C2DF9C:
    ctx->pc = 0x80C2DF9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DF9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C2DF9C: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C2DF9Cu)) return;
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
label_80C2DFA0:
    ctx->pc = 0x80C2DFA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DFA0u)) return;
    // 80C2DFA0: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80C2DFA4:
    ctx->pc = 0x80C2DFA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DFA4u)) return;
    // 80C2DFA4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C2DFA8:
    ctx->pc = 0x80C2DFA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DFA8u)) return;
    // 80C2DFA8: bl      0x8045EBE4
    {
            ctx->lr = 0x80C2DFACu;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80C2DFAC:
    ctx->pc = 0x80C2DFACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DFACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2DFAC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C2DFB0:
    ctx->pc = 0x80C2DFB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DFB0u)) return;
    // 80C2DFB0: bl      0x8045F220
    {
            ctx->lr = 0x80C2DFB4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2DFB4:
    ctx->pc = 0x80C2DFB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DFB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2DFB4: bl      0x8045C034
    {
            ctx->lr = 0x80C2DFB8u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80C2DFB8:
    ctx->pc = 0x80C2DFB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DFB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2DFB8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C2DFBC:
    ctx->pc = 0x80C2DFBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DFBCu)) return;
    // 80C2DFBC: bl      0x8045F220
    {
            ctx->lr = 0x80C2DFC0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2DFC0:
    ctx->pc = 0x80C2DFC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DFC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C2DFC0: lis     r4, -27451
    ctx->gpr[4] = ((u32)(s32)(-27451) << 16);

label_80C2DFC4:
    ctx->pc = 0x80C2DFC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DFC4u)) return;
    // 80C2DFC4: addi    r4, r4, -3972
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-3972);

label_80C2DFC8:
    ctx->pc = 0x80C2DFC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DFC8u)) return;
    // 80C2DFC8: bl      0x8045C060
    {
            ctx->lr = 0x80C2DFCCu;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80C2DFCC:
    ctx->pc = 0x80C2DFCCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DFCCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2DFCC: li      r3, 1061
    ctx->gpr[3] = (u32)(s32)(1061);

label_80C2DFD0:
    ctx->pc = 0x80C2DFD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DFD0u)) return;
    // 80C2DFD0: bl      0x8045BFA0
    {
            ctx->lr = 0x80C2DFD4u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80C2DFD4:
    ctx->pc = 0x80C2DFD4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DFD4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C2DFD4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C2DFD8:
    ctx->pc = 0x80C2DFD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DFD8u)) return;
    // 80C2DFD8: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80C2DFDC:
    ctx->pc = 0x80C2DFDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DFDCu)) return;
    // 80C2DFDC: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80C2DFE0:
    ctx->pc = 0x80C2DFE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DFE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2DFE0: lwz     r0, 0(r4)
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
label_80C2DFE4:
    ctx->pc = 0x80C2DFE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DFE4u)) return;
    // 80C2DFE4: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80C2DFE8:
    ctx->pc = 0x80C2DFE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DFE8u)) return;
    // 80C2DFE8: lis     r4, -27451
    ctx->gpr[4] = ((u32)(s32)(-27451) << 16);

label_80C2DFEC:
    ctx->pc = 0x80C2DFECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DFECu)) return;
    // 80C2DFEC: addi    r4, r4, -4000
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-4000);

label_80C2DFF0:
    ctx->pc = 0x80C2DFF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DFF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2DFF0: lwzx    r4, r4, r0
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
label_80C2DFF4:
    ctx->pc = 0x80C2DFF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DFF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C2DFF4: lwz     r4, 0(r4)
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
label_80C2DFF8:
    ctx->pc = 0x80C2DFF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DFF8u)) return;
    // 80C2DFF8: bl      0x8045F608
    {
            ctx->lr = 0x80C2DFFCu;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80C2DFFC:
    ctx->pc = 0x80C2DFFCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DFFCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2DFFC: li      r3, 50
    ctx->gpr[3] = (u32)(s32)(50);

label_80C2E000:
    ctx->pc = 0x80C2E000u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E000u)) return;
    // 80C2E000: bl      0x8045F7C8
    {
            ctx->lr = 0x80C2E004u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C2E004:
    ctx->pc = 0x80C2E004u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E004u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C2E004: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C2E008:
    ctx->pc = 0x80C2E008u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E008u)) return;
    // 80C2E008: li      r4, 50
    ctx->gpr[4] = (u32)(s32)(50);

label_80C2E00C:
    ctx->pc = 0x80C2E00Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E00Cu)) return;
    // 80C2E00C: lis     r5, -27451
    ctx->gpr[5] = ((u32)(s32)(-27451) << 16);

label_80C2E010:
    ctx->pc = 0x80C2E010u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E010u)) return;
    // 80C2E010: addi    r5, r5, -4656
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-4656);

label_80C2E014:
    ctx->pc = 0x80C2E014u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E014u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2E014: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C2E014u)) return;
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
label_80C2E018:
    ctx->pc = 0x80C2E018u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E018u)) return;
    // 80C2E018: lis     r5, -27451
    ctx->gpr[5] = ((u32)(s32)(-27451) << 16);

label_80C2E01C:
    ctx->pc = 0x80C2E01Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E01Cu)) return;
    // 80C2E01C: addi    r5, r5, -4652
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-4652);

label_80C2E020:
    ctx->pc = 0x80C2E020u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E020u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2E020: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C2E020u)) return;
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
label_80C2E024:
    ctx->pc = 0x80C2E024u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E024u)) return;
    // 80C2E024: lis     r5, -27451
    ctx->gpr[5] = ((u32)(s32)(-27451) << 16);

label_80C2E028:
    ctx->pc = 0x80C2E028u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E028u)) return;
    // 80C2E028: addi    r5, r5, -4648
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-4648);

label_80C2E02C:
    ctx->pc = 0x80C2E02Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E02Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C2E02C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C2E02Cu)) return;
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
label_80C2E030:
    ctx->pc = 0x80C2E030u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E030u)) return;
    // 80C2E030: bl      0x8045C750
    {
            ctx->lr = 0x80C2E034u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C2E034:
    ctx->pc = 0x80C2E034u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E034u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80C2E034: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C2E038:
    ctx->pc = 0x80C2E038u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E038u)) return;
    // 80C2E038: li      r4, 50
    ctx->gpr[4] = (u32)(s32)(50);

label_80C2E03C:
    ctx->pc = 0x80C2E03Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E03Cu)) return;
    // 80C2E03C: li      r5, 3609
    ctx->gpr[5] = (u32)(s32)(3609);

label_80C2E040:
    ctx->pc = 0x80C2E040u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E040u)) return;
    // 80C2E040: li      r6, 19653
    ctx->gpr[6] = (u32)(s32)(19653);

label_80C2E044:
    ctx->pc = 0x80C2E044u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E044u)) return;
    // 80C2E044: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C2E048:
    ctx->pc = 0x80C2E048u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E048u)) return;
    // 80C2E048: bl      0x8045C7B4
    {
            ctx->lr = 0x80C2E04Cu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C2E04C:
    ctx->pc = 0x80C2E04Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E04Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2E04C: li      r3, 50
    ctx->gpr[3] = (u32)(s32)(50);

label_80C2E050:
    ctx->pc = 0x80C2E050u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E050u)) return;
    // 80C2E050: bl      0x8045F7C8
    {
            ctx->lr = 0x80C2E054u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C2E054:
    ctx->pc = 0x80C2E054u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E054u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2E054: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C2E058:
    ctx->pc = 0x80C2E058u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E058u)) return;
    // 80C2E058: bl      0x8045F220
    {
            ctx->lr = 0x80C2E05Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2E05C:
    ctx->pc = 0x80C2E05Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E05Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C2E05C: lis     r4, -28567
    ctx->gpr[4] = ((u32)(s32)(-28567) << 16);

label_80C2E060:
    ctx->pc = 0x80C2E060u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E060u)) return;
    // 80C2E060: addi    r4, r4, 17360
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(17360);

label_80C2E064:
    ctx->pc = 0x80C2E064u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E064u)) return;
    // 80C2E064: lis     r5, -28581
    ctx->gpr[5] = ((u32)(s32)(-28581) << 16);

label_80C2E068:
    ctx->pc = 0x80C2E068u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E068u)) return;
    // 80C2E068: addi    r5, r5, 4544
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4544);

label_80C2E06C:
    ctx->pc = 0x80C2E06Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E06Cu)) return;
    // 80C2E06C: lis     r6, -27451
    ctx->gpr[6] = ((u32)(s32)(-27451) << 16);

label_80C2E070:
    ctx->pc = 0x80C2E070u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E070u)) return;
    // 80C2E070: addi    r6, r6, -4644
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-4644);

label_80C2E074:
    ctx->pc = 0x80C2E074u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E074u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C2E074: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C2E074u)) return;
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
label_80C2E078:
    ctx->pc = 0x80C2E078u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E078u)) return;
    // 80C2E078: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80C2E07C:
    ctx->pc = 0x80C2E07Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E07Cu)) return;
    // 80C2E07C: li      r7, 16
    ctx->gpr[7] = (u32)(s32)(16);

label_80C2E080:
    ctx->pc = 0x80C2E080u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E080u)) return;
    // 80C2E080: bl      0x8045EBE4
    {
            ctx->lr = 0x80C2E084u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80C2E084:
    ctx->pc = 0x80C2E084u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E084u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2E084: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C2E088:
    ctx->pc = 0x80C2E088u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E088u)) return;
    // 80C2E088: bl      0x8045F7C8
    {
            ctx->lr = 0x80C2E08Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C2E08C:
    ctx->pc = 0x80C2E08Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E08Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C2E08C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C2E090:
    ctx->pc = 0x80C2E090u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E090u)) return;
    // 80C2E090: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C2E094:
    ctx->pc = 0x80C2E094u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E094u)) return;
    // 80C2E094: lis     r5, -27451
    ctx->gpr[5] = ((u32)(s32)(-27451) << 16);

label_80C2E098:
    ctx->pc = 0x80C2E098u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E098u)) return;
    // 80C2E098: addi    r5, r5, -4640
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-4640);

label_80C2E09C:
    ctx->pc = 0x80C2E09Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E09Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2E09C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C2E09Cu)) return;
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
label_80C2E0A0:
    ctx->pc = 0x80C2E0A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E0A0u)) return;
    // 80C2E0A0: lis     r5, -27451
    ctx->gpr[5] = ((u32)(s32)(-27451) << 16);

label_80C2E0A4:
    ctx->pc = 0x80C2E0A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E0A4u)) return;
    // 80C2E0A4: addi    r5, r5, -4636
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-4636);

label_80C2E0A8:
    ctx->pc = 0x80C2E0A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E0A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2E0A8: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C2E0A8u)) return;
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
label_80C2E0AC:
    ctx->pc = 0x80C2E0ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E0ACu)) return;
    // 80C2E0AC: lis     r5, -27451
    ctx->gpr[5] = ((u32)(s32)(-27451) << 16);

label_80C2E0B0:
    ctx->pc = 0x80C2E0B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E0B0u)) return;
    // 80C2E0B0: addi    r5, r5, -4632
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-4632);

label_80C2E0B4:
    ctx->pc = 0x80C2E0B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E0B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C2E0B4: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C2E0B4u)) return;
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
label_80C2E0B8:
    ctx->pc = 0x80C2E0B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E0B8u)) return;
    // 80C2E0B8: bl      0x8045C750
    {
            ctx->lr = 0x80C2E0BCu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C2E0BC:
    ctx->pc = 0x80C2E0BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E0BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C2E0BC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C2E0C0:
    ctx->pc = 0x80C2E0C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E0C0u)) return;
    // 80C2E0C0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C2E0C4:
    ctx->pc = 0x80C2E0C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E0C4u)) return;
    // 80C2E0C4: li      r5, 2853
    ctx->gpr[5] = (u32)(s32)(2853);

label_80C2E0C8:
    ctx->pc = 0x80C2E0C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E0C8u)) return;
    // 80C2E0C8: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80C2E0CC:
    ctx->pc = 0x80C2E0CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E0CCu)) return;
    // 80C2E0CC: addi    r6, r6, -31572
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-31572);

label_80C2E0D0:
    ctx->pc = 0x80C2E0D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E0D0u)) return;
    // 80C2E0D0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C2E0D4:
    ctx->pc = 0x80C2E0D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E0D4u)) return;
    // 80C2E0D4: bl      0x8045C7B4
    {
            ctx->lr = 0x80C2E0D8u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C2E0D8:
    ctx->pc = 0x80C2E0D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E0D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2E0D8: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80C2E0DC:
    ctx->pc = 0x80C2E0DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E0DCu)) return;
    // 80C2E0DC: bl      0x8045F7C8
    {
            ctx->lr = 0x80C2E0E0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C2E0E0:
    ctx->pc = 0x80C2E0E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E0E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2E0E0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C2E0E4:
    ctx->pc = 0x80C2E0E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E0E4u)) return;
    // 80C2E0E4: bl      0x8045F220
    {
            ctx->lr = 0x80C2E0E8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2E0E8:
    ctx->pc = 0x80C2E0E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E0E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2E0E8: bl      0x8045C034
    {
            ctx->lr = 0x80C2E0ECu;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80C2E0EC:
    ctx->pc = 0x80C2E0ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E0ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2E0EC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C2E0F0:
    ctx->pc = 0x80C2E0F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E0F0u)) return;
    // 80C2E0F0: bl      0x8045F220
    {
            ctx->lr = 0x80C2E0F4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2E0F4:
    ctx->pc = 0x80C2E0F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E0F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C2E0F4: lis     r4, -27451
    ctx->gpr[4] = ((u32)(s32)(-27451) << 16);

label_80C2E0F8:
    ctx->pc = 0x80C2E0F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E0F8u)) return;
    // 80C2E0F8: addi    r4, r4, -3968
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-3968);

label_80C2E0FC:
    ctx->pc = 0x80C2E0FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E0FCu)) return;
    // 80C2E0FC: bl      0x8045C060
    {
            ctx->lr = 0x80C2E100u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80C2E100:
    ctx->pc = 0x80C2E100u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E100u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2E100: li      r3, 1062
    ctx->gpr[3] = (u32)(s32)(1062);

label_80C2E104:
    ctx->pc = 0x80C2E104u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E104u)) return;
    // 80C2E104: bl      0x8045BFA0
    {
            ctx->lr = 0x80C2E108u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80C2E108:
    ctx->pc = 0x80C2E108u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E108u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C2E108: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C2E10C:
    ctx->pc = 0x80C2E10Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E10Cu)) return;
    // 80C2E10C: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80C2E110:
    ctx->pc = 0x80C2E110u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E110u)) return;
    // 80C2E110: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80C2E114:
    ctx->pc = 0x80C2E114u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E114u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2E114: lwz     r0, 0(r4)
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
label_80C2E118:
    ctx->pc = 0x80C2E118u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E118u)) return;
    // 80C2E118: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80C2E11C:
    ctx->pc = 0x80C2E11Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E11Cu)) return;
    // 80C2E11C: lis     r4, -27451
    ctx->gpr[4] = ((u32)(s32)(-27451) << 16);

label_80C2E120:
    ctx->pc = 0x80C2E120u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E120u)) return;
    // 80C2E120: addi    r4, r4, -4000
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-4000);

label_80C2E124:
    ctx->pc = 0x80C2E124u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E124u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2E124: lwzx    r4, r4, r0
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
label_80C2E128:
    ctx->pc = 0x80C2E128u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E128u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C2E128: lwz     r4, 4(r4)
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
label_80C2E12C:
    ctx->pc = 0x80C2E12Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E12Cu)) return;
    // 80C2E12C: bl      0x8045F608
    {
            ctx->lr = 0x80C2E130u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80C2E130:
    ctx->pc = 0x80C2E130u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E130u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2E130: li      r3, 70
    ctx->gpr[3] = (u32)(s32)(70);

label_80C2E134:
    ctx->pc = 0x80C2E134u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E134u)) return;
    // 80C2E134: bl      0x8045F7C8
    {
            ctx->lr = 0x80C2E138u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C2E138:
    ctx->pc = 0x80C2E138u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E138u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2E138: li      r3, 70
    ctx->gpr[3] = (u32)(s32)(70);

label_80C2E13C:
    ctx->pc = 0x80C2E13Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E13Cu)) return;
    // 80C2E13C: bl      0x8045F7C8
    {
            ctx->lr = 0x80C2E140u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C2E140:
    ctx->pc = 0x80C2E140u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E140u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2E140: bl      0x8045F32C
    {
            ctx->lr = 0x80C2E144u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80C2E144:
    ctx->pc = 0x80C2E144u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E144u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2E144: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_80C2E148:
    ctx->pc = 0x80C2E148u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E148u)) return;
    // 80C2E148: bl      0x8045F7C8
    {
            ctx->lr = 0x80C2E14Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C2E14C:
    ctx->pc = 0x80C2E14Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E14Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2E14C: b       0x80C2E198
    {
            goto label_80C2E198;
    }

label_80C2E150:
    ctx->pc = 0x80C2E150u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E150u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2E150: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C2E154:
    ctx->pc = 0x80C2E154u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E154u)) return;
    // 80C2E154: bl      0x8045EC10
    {
            ctx->lr = 0x80C2E158u;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80C2E158:
    ctx->pc = 0x80C2E158u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E158u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2E158: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C2E15C:
    ctx->pc = 0x80C2E15Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E15Cu)) return;
    // 80C2E15C: bl      0x8045F220
    {
            ctx->lr = 0x80C2E160u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2E160:
    ctx->pc = 0x80C2E160u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E160u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C2E160: lis     r4, -27451
    ctx->gpr[4] = ((u32)(s32)(-27451) << 16);

label_80C2E164:
    ctx->pc = 0x80C2E164u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E164u)) return;
    // 80C2E164: addi    r4, r4, -4676
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-4676);

label_80C2E168:
    ctx->pc = 0x80C2E168u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E168u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2E168: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C2E168u)) return;
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
label_80C2E16C:
    ctx->pc = 0x80C2E16Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E16Cu)) return;
    // 80C2E16C: lis     r4, -27451
    ctx->gpr[4] = ((u32)(s32)(-27451) << 16);

label_80C2E170:
    ctx->pc = 0x80C2E170u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E170u)) return;
    // 80C2E170: addi    r4, r4, -4672
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-4672);

label_80C2E174:
    ctx->pc = 0x80C2E174u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E174u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2E174: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C2E174u)) return;
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
label_80C2E178:
    ctx->pc = 0x80C2E178u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E178u)) return;
    // 80C2E178: lis     r4, -27451
    ctx->gpr[4] = ((u32)(s32)(-27451) << 16);

label_80C2E17C:
    ctx->pc = 0x80C2E17Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E17Cu)) return;
    // 80C2E17C: addi    r4, r4, -4668
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-4668);

label_80C2E180:
    ctx->pc = 0x80C2E180u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E180u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C2E180: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C2E180u)) return;
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
label_80C2E184:
    ctx->pc = 0x80C2E184u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E184u)) return;
    // 80C2E184: bl      0x8045EF2C
    {
            ctx->lr = 0x80C2E188u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80C2E188:
    ctx->pc = 0x80C2E188u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E188u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2E188: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C2E18C:
    ctx->pc = 0x80C2E18Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E18Cu)) return;
    // 80C2E18C: bl      0x8045F7C8
    {
            ctx->lr = 0x80C2E190u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C2E190:
    ctx->pc = 0x80C2E190u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E190u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2E190: bl      0x8045DE34
    {
            ctx->lr = 0x80C2E194u;
            ctx->pc = 0x8045DE34u;
            return;
    }

label_80C2E194:
    ctx->pc = 0x80C2E194u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E194u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2E194: bl      0x80460A80
    {
            ctx->lr = 0x80C2E198u;
            ctx->pc = 0x80460A80u;
            return;
    }

label_80C2E198:
    ctx->pc = 0x80C2E198u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E198u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2E198: lwz     r0, 20(r1)
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
label_80C2E19C:
    ctx->pc = 0x80C2E19Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C2E19Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2E19C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2E1A0:
    ctx->pc = 0x80C2E1A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E1A0u)) return;
    // 80C2E1A0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C2E1A4:
    ctx->pc = 0x80C2E1A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E1A4u)) return;
    // 80C2E1A4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C2DE40;
        }
    }

label_80C2E1A8:
    ctx->pc = 0x80C2E1A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E1A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C2E1A8: stwu     r1, -16(r1)
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
label_80C2E1AC:
    ctx->pc = 0x80C2E1ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E1ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2E1AC: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2E1B0:
    ctx->pc = 0x80C2E1B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E1B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C2E1B0: stw     r0, 20(r1)
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
label_80C2E1B4:
    ctx->pc = 0x80C2E1B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E1B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2E1B4: lwz     r3, 32(r3)
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
label_80C2E1B8:
    ctx->pc = 0x80C2E1B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E1B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C2E1B8: lwz     r3, 16(r3)
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
label_80C2E1BC:
    ctx->pc = 0x80C2E1BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E1BCu)) return;
    // 80C2E1BC: bl      0x80509CF0
    {
            ctx->lr = 0x80C2E1C0u;
            ctx->pc = 0x80509CF0u;
            return;
    }

label_80C2E1C0:
    ctx->pc = 0x80C2E1C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E1C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2E1C0: lwz     r0, 20(r1)
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
label_80C2E1C4:
    ctx->pc = 0x80C2E1C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C2E1C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2E1C4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2E1C8:
    ctx->pc = 0x80C2E1C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E1C8u)) return;
    // 80C2E1C8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C2E1CC:
    ctx->pc = 0x80C2E1CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E1CCu)) return;
    // 80C2E1CC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C2DE40;
        }
    }

label_80C2E1D0:
    ctx->pc = 0x80C2E1D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E1D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C2E1D0: stwu     r1, -32(r1)
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
label_80C2E1D4:
    ctx->pc = 0x80C2E1D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E1D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C2E1D4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2E1D8:
    ctx->pc = 0x80C2E1D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E1D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C2E1D8: stw     r0, 36(r1)
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
label_80C2E1DC:
    ctx->pc = 0x80C2E1DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E1DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2E1DC: stw     r31, 28(r1)
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
label_80C2E1E0:
    ctx->pc = 0x80C2E1E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E1E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2E1E0: stw     r30, 24(r1)
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
label_80C2E1E4:
    ctx->pc = 0x80C2E1E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E1E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C2E1E4: stw     r29, 20(r1)
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
label_80C2E1E8:
    ctx->pc = 0x80C2E1E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E1E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2E1E8: lwz     r31, 32(r3)
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
label_80C2E1EC:
    ctx->pc = 0x80C2E1ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E1ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C2E1EC: lwz     r30, 16(r31)
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
label_80C2E1F0:
    ctx->pc = 0x80C2E1F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E1F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2E1F0: lwz     r5, 28(r31)
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
label_80C2E1F4:
    ctx->pc = 0x80C2E1F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E1F4u)) return;
    // 80C2E1F4: cmpwi   r5, 0
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

label_80C2E1F8:
    ctx->pc = 0x80C2E1F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E1F8u)) return;
    // 80C2E1F8: bc    4, 1, 0x80C2E230
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C2E230;
        }
    }

label_80C2E1FC:
    ctx->pc = 0x80C2E1FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E1FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80C2E1FC: lwz     r4, 24(r31)
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
label_80C2E200:
    ctx->pc = 0x80C2E200u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E200u)) return;
    // 80C2E200: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80C2E204:
    ctx->pc = 0x80C2E204u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E204u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80C2E204: lwz     r0, 20(r31)
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
label_80C2E208:
    ctx->pc = 0x80C2E208u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80C2E208u)) return;
    // 80C2E208: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80C2E20C:
    ctx->pc = 0x80C2E20Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E20Cu)) return;
    // 80C2E20C: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80C2E210:
    ctx->pc = 0x80C2E210u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80C2E210u)) return;
    // 80C2E210: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80C2E214:
    ctx->pc = 0x80C2E214u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E214u)) return;
    // 80C2E214: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80C2E218:
    ctx->pc = 0x80C2E218u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E218u)) return;
    // 80C2E218: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80C2E21C:
    ctx->pc = 0x80C2E21Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E21Cu)) return;
    // 80C2E21C: bl      0x80509C74
    {
            ctx->lr = 0x80C2E220u;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80C2E220:
    ctx->pc = 0x80C2E220u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E220u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C2E220: stw     r29, 20(r31)
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
label_80C2E224:
    ctx->pc = 0x80C2E224u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E224u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2E224: lwz     r3, 28(r31)
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
label_80C2E228:
    ctx->pc = 0x80C2E228u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E228u)) return;
    // 80C2E228: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80C2E22C:
    ctx->pc = 0x80C2E22Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E22Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C2E22C: stw     r0, 28(r31)
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
label_80C2E230:
    ctx->pc = 0x80C2E230u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E230u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2E230: lwz     r5, 40(r31)
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
label_80C2E234:
    ctx->pc = 0x80C2E234u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E234u)) return;
    // 80C2E234: cmpwi   r5, 0
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

label_80C2E238:
    ctx->pc = 0x80C2E238u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E238u)) return;
    // 80C2E238: bc    4, 1, 0x80C2E270
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C2E270;
        }
    }

label_80C2E23C:
    ctx->pc = 0x80C2E23Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E23Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80C2E23C: lwz     r4, 36(r31)
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
label_80C2E240:
    ctx->pc = 0x80C2E240u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E240u)) return;
    // 80C2E240: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80C2E244:
    ctx->pc = 0x80C2E244u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E244u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80C2E244: lwz     r0, 32(r31)
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
label_80C2E248:
    ctx->pc = 0x80C2E248u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80C2E248u)) return;
    // 80C2E248: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80C2E24C:
    ctx->pc = 0x80C2E24Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E24Cu)) return;
    // 80C2E24C: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80C2E250:
    ctx->pc = 0x80C2E250u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80C2E250u)) return;
    // 80C2E250: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80C2E254:
    ctx->pc = 0x80C2E254u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E254u)) return;
    // 80C2E254: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80C2E258:
    ctx->pc = 0x80C2E258u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E258u)) return;
    // 80C2E258: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80C2E25C:
    ctx->pc = 0x80C2E25Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E25Cu)) return;
    // 80C2E25C: bl      0x80509BF8
    {
            ctx->lr = 0x80C2E260u;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80C2E260:
    ctx->pc = 0x80C2E260u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E260u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C2E260: stw     r29, 32(r31)
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
label_80C2E264:
    ctx->pc = 0x80C2E264u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E264u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2E264: lwz     r3, 40(r31)
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
label_80C2E268:
    ctx->pc = 0x80C2E268u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E268u)) return;
    // 80C2E268: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80C2E26C:
    ctx->pc = 0x80C2E26Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E26Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C2E26C: stw     r0, 40(r31)
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
label_80C2E270:
    ctx->pc = 0x80C2E270u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E270u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2E270: lwz     r5, 52(r31)
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
label_80C2E274:
    ctx->pc = 0x80C2E274u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E274u)) return;
    // 80C2E274: cmpwi   r5, 0
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

label_80C2E278:
    ctx->pc = 0x80C2E278u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E278u)) return;
    // 80C2E278: bc    4, 1, 0x80C2E2B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C2E2B0;
        }
    }

label_80C2E27C:
    ctx->pc = 0x80C2E27Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E27Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80C2E27C: lwz     r4, 48(r31)
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
label_80C2E280:
    ctx->pc = 0x80C2E280u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E280u)) return;
    // 80C2E280: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80C2E284:
    ctx->pc = 0x80C2E284u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E284u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80C2E284: lwz     r0, 44(r31)
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
label_80C2E288:
    ctx->pc = 0x80C2E288u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80C2E288u)) return;
    // 80C2E288: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80C2E28C:
    ctx->pc = 0x80C2E28Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E28Cu)) return;
    // 80C2E28C: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80C2E290:
    ctx->pc = 0x80C2E290u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80C2E290u)) return;
    // 80C2E290: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80C2E294:
    ctx->pc = 0x80C2E294u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E294u)) return;
    // 80C2E294: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80C2E298:
    ctx->pc = 0x80C2E298u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E298u)) return;
    // 80C2E298: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80C2E29C:
    ctx->pc = 0x80C2E29Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E29Cu)) return;
    // 80C2E29C: bl      0x80509B94
    {
            ctx->lr = 0x80C2E2A0u;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80C2E2A0:
    ctx->pc = 0x80C2E2A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E2A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C2E2A0: stw     r29, 44(r31)
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
label_80C2E2A4:
    ctx->pc = 0x80C2E2A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E2A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2E2A4: lwz     r3, 52(r31)
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
label_80C2E2A8:
    ctx->pc = 0x80C2E2A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E2A8u)) return;
    // 80C2E2A8: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80C2E2AC:
    ctx->pc = 0x80C2E2ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E2ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C2E2AC: stw     r0, 52(r31)
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
label_80C2E2B0:
    ctx->pc = 0x80C2E2B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E2B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2E2B0: lwz     r31, 28(r1)
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
label_80C2E2B4:
    ctx->pc = 0x80C2E2B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E2B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2E2B4: lwz     r30, 24(r1)
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
label_80C2E2B8:
    ctx->pc = 0x80C2E2B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E2B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C2E2B8: lwz     r29, 20(r1)
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
label_80C2E2BC:
    ctx->pc = 0x80C2E2BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E2BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2E2BC: lwz     r0, 36(r1)
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
label_80C2E2C0:
    ctx->pc = 0x80C2E2C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C2E2C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2E2C0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2E2C4:
    ctx->pc = 0x80C2E2C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E2C4u)) return;
    // 80C2E2C4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80C2E2C8:
    ctx->pc = 0x80C2E2C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E2C8u)) return;
    // 80C2E2C8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C2DE40;
        }
    }

label_80C2E2CC:
    ctx->pc = 0x80C2E2CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E2CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C2E2CC: stwu     r1, -32(r1)
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
label_80C2E2D0:
    ctx->pc = 0x80C2E2D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E2D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C2E2D0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2E2D4:
    ctx->pc = 0x80C2E2D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E2D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C2E2D4: stw     r0, 36(r1)
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
label_80C2E2D8:
    ctx->pc = 0x80C2E2D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E2D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C2E2D8: stw     r31, 28(r1)
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
label_80C2E2DC:
    ctx->pc = 0x80C2E2DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E2DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2E2DC: stw     r30, 24(r1)
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
label_80C2E2E0:
    ctx->pc = 0x80C2E2E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E2E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2E2E0: stw     r29, 20(r1)
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
label_80C2E2E4:
    ctx->pc = 0x80C2E2E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E2E4u)) return;
    // 80C2E2E4: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80C2E2E8:
    ctx->pc = 0x80C2E2E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E2E8u)) return;
    // 80C2E2E8: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80C2E2EC:
    ctx->pc = 0x80C2E2ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E2ECu)) return;
    // 80C2E2EC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C2E2F0:
    ctx->pc = 0x80C2E2F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E2F0u)) return;
    // 80C2E2F0: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80C2E2F4:
    ctx->pc = 0x80C2E2F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E2F4u)) return;
    // 80C2E2F4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80C2E2F8:
    ctx->pc = 0x80C2E2F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E2F8u)) return;
    // 80C2E2F8: bl      0x8050FD60
    {
            ctx->lr = 0x80C2E2FCu;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80C2E2FC:
    ctx->pc = 0x80C2E2FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E2FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C2E2FC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80C2E300:
    ctx->pc = 0x80C2E300u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E300u)) return;
    // 80C2E300: cmplwi  r31, 0x0000
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

label_80C2E304:
    ctx->pc = 0x80C2E304u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E304u)) return;
    // 80C2E304: bc    12, 2, 0x80C2E368
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C2E368;
        }
    }

label_80C2E308:
    ctx->pc = 0x80C2E308u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E308u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80C2E308: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80C2E30C:
    ctx->pc = 0x80C2E30Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E30Cu)) return;
    // 80C2E30C: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80C2E310:
    ctx->pc = 0x80C2E310u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E310u)) return;
    // 80C2E310: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80C2E314:
    ctx->pc = 0x80C2E314u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E314u)) return;
    // 80C2E314: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C2E318:
    ctx->pc = 0x80C2E318u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E318u)) return;
    // 80C2E318: or   r7, r30, r30
    {
        ctx->gpr[7] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80C2E31C:
    ctx->pc = 0x80C2E31Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E31Cu)) return;
    // 80C2E31C: bl      0x8050A0D4
    {
            ctx->lr = 0x80C2E320u;
            ctx->pc = 0x8050A0D4u;
            return;
    }

label_80C2E320:
    ctx->pc = 0x80C2E320u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 18u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E320u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 18u : 1u;
    // 80C2E320: lis     r3, -32573
    ctx->gpr[3] = ((u32)(s32)(-32573) << 16);

label_80C2E324:
    ctx->pc = 0x80C2E324u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E324u)) return;
    // 80C2E324: addi    r0, r3, -7728
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-7728);

label_80C2E328:
    ctx->pc = 0x80C2E328u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E328u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80C2E328: stw     r0, 16(r31)
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
label_80C2E32C:
    ctx->pc = 0x80C2E32Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E32Cu)) return;
    // 80C2E32C: lis     r3, -32573
    ctx->gpr[3] = ((u32)(s32)(-32573) << 16);

label_80C2E330:
    ctx->pc = 0x80C2E330u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E330u)) return;
    // 80C2E330: addi    r0, r3, -7768
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-7768);

label_80C2E334:
    ctx->pc = 0x80C2E334u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E334u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C2E334: stw     r0, 24(r31)
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
label_80C2E338:
    ctx->pc = 0x80C2E338u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E338u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C2E338: lwz     r3, 32(r31)
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
label_80C2E33C:
    ctx->pc = 0x80C2E33Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E33Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C2E33C: stw     r31, 16(r3)
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
label_80C2E340:
    ctx->pc = 0x80C2E340u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E340u)) return;
    // 80C2E340: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80C2E344:
    ctx->pc = 0x80C2E344u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E344u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C2E344: stw     r0, 20(r3)
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
label_80C2E348:
    ctx->pc = 0x80C2E348u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E348u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2E348: stw     r0, 24(r3)
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
label_80C2E34C:
    ctx->pc = 0x80C2E34Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E34Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2E34C: stw     r0, 28(r3)
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
label_80C2E350:
    ctx->pc = 0x80C2E350u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E350u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C2E350: stw     r0, 32(r3)
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
label_80C2E354:
    ctx->pc = 0x80C2E354u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E354u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2E354: stw     r0, 36(r3)
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
label_80C2E358:
    ctx->pc = 0x80C2E358u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E358u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C2E358: stw     r0, 40(r3)
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
label_80C2E35C:
    ctx->pc = 0x80C2E35Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E35Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2E35C: stw     r0, 44(r3)
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
label_80C2E360:
    ctx->pc = 0x80C2E360u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E360u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C2E360: stw     r0, 48(r3)
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
label_80C2E364:
    ctx->pc = 0x80C2E364u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E364u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C2E364: stw     r0, 52(r3)
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
label_80C2E368:
    ctx->pc = 0x80C2E368u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E368u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80C2E368: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80C2E36C:
    ctx->pc = 0x80C2E36Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E36Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2E36C: lwz     r31, 28(r1)
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
label_80C2E370:
    ctx->pc = 0x80C2E370u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E370u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2E370: lwz     r30, 24(r1)
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
label_80C2E374:
    ctx->pc = 0x80C2E374u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E374u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C2E374: lwz     r29, 20(r1)
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
label_80C2E378:
    ctx->pc = 0x80C2E378u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E378u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2E378: lwz     r0, 36(r1)
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
label_80C2E37C:
    ctx->pc = 0x80C2E37Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C2E37Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2E37C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2E380:
    ctx->pc = 0x80C2E380u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E380u)) return;
    // 80C2E380: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80C2E384:
    ctx->pc = 0x80C2E384u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E384u)) return;
    // 80C2E384: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C2DE40;
        }
    }

label_80C2E388:
    ctx->pc = 0x80C2E388u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E388u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C2E388: stwu     r1, -16(r1)
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
label_80C2E38C:
    ctx->pc = 0x80C2E38Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E38Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C2E38C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2E390:
    ctx->pc = 0x80C2E390u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E390u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C2E390: stw     r0, 20(r1)
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
label_80C2E394:
    ctx->pc = 0x80C2E394u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E394u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2E394: stw     r31, 12(r1)
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
label_80C2E398:
    ctx->pc = 0x80C2E398u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E398u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2E398: stw     r30, 8(r1)
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
label_80C2E39C:
    ctx->pc = 0x80C2E39Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E39Cu)) return;
    // 80C2E39C: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80C2E3A0:
    ctx->pc = 0x80C2E3A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E3A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2E3A0: lwz     r31, 32(r3)
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
label_80C2E3A4:
    ctx->pc = 0x80C2E3A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E3A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C2E3A4: stw     r30, 24(r31)
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
label_80C2E3A8:
    ctx->pc = 0x80C2E3A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E3A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2E3A8: stw     r5, 28(r31)
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
label_80C2E3AC:
    ctx->pc = 0x80C2E3ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E3ACu)) return;
    // 80C2E3AC: cmpwi   r5, 0
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

label_80C2E3B0:
    ctx->pc = 0x80C2E3B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E3B0u)) return;
    // 80C2E3B0: bc    12, 1, 0x80C2E3C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C2E3C0;
        }
    }

label_80C2E3B4:
    ctx->pc = 0x80C2E3B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E3B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C2E3B4: lwz     r3, 16(r31)
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
label_80C2E3B8:
    ctx->pc = 0x80C2E3B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E3B8u)) return;
    // 80C2E3B8: bl      0x80509C74
    {
            ctx->lr = 0x80C2E3BCu;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80C2E3BC:
    ctx->pc = 0x80C2E3BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E3BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C2E3BC: stw     r30, 20(r31)
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
label_80C2E3C0:
    ctx->pc = 0x80C2E3C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E3C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2E3C0: lwz     r31, 12(r1)
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
label_80C2E3C4:
    ctx->pc = 0x80C2E3C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E3C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C2E3C4: lwz     r30, 8(r1)
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
label_80C2E3C8:
    ctx->pc = 0x80C2E3C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E3C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2E3C8: lwz     r0, 20(r1)
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
label_80C2E3CC:
    ctx->pc = 0x80C2E3CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C2E3CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2E3CC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2E3D0:
    ctx->pc = 0x80C2E3D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E3D0u)) return;
    // 80C2E3D0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C2E3D4:
    ctx->pc = 0x80C2E3D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E3D4u)) return;
    // 80C2E3D4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C2DE40;
        }
    }

label_80C2E3D8:
    ctx->pc = 0x80C2E3D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E3D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C2E3D8: stwu     r1, -16(r1)
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
label_80C2E3DC:
    ctx->pc = 0x80C2E3DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E3DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C2E3DC: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2E3E0:
    ctx->pc = 0x80C2E3E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E3E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C2E3E0: stw     r0, 20(r1)
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
label_80C2E3E4:
    ctx->pc = 0x80C2E3E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E3E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2E3E4: stw     r31, 12(r1)
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
label_80C2E3E8:
    ctx->pc = 0x80C2E3E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E3E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2E3E8: stw     r30, 8(r1)
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
label_80C2E3EC:
    ctx->pc = 0x80C2E3ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E3ECu)) return;
    // 80C2E3EC: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80C2E3F0:
    ctx->pc = 0x80C2E3F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E3F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2E3F0: lwz     r31, 32(r3)
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
label_80C2E3F4:
    ctx->pc = 0x80C2E3F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E3F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C2E3F4: stw     r30, 36(r31)
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
label_80C2E3F8:
    ctx->pc = 0x80C2E3F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E3F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2E3F8: stw     r5, 40(r31)
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
label_80C2E3FC:
    ctx->pc = 0x80C2E3FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E3FCu)) return;
    // 80C2E3FC: cmpwi   r5, 0
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

label_80C2E400:
    ctx->pc = 0x80C2E400u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E400u)) return;
    // 80C2E400: bc    12, 1, 0x80C2E410
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C2E410;
        }
    }

label_80C2E404:
    ctx->pc = 0x80C2E404u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E404u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C2E404: lwz     r3, 16(r31)
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
label_80C2E408:
    ctx->pc = 0x80C2E408u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E408u)) return;
    // 80C2E408: bl      0x80509BF8
    {
            ctx->lr = 0x80C2E40Cu;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80C2E40C:
    ctx->pc = 0x80C2E40Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E40Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C2E40C: stw     r30, 32(r31)
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
label_80C2E410:
    ctx->pc = 0x80C2E410u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E410u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2E410: lwz     r31, 12(r1)
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
label_80C2E414:
    ctx->pc = 0x80C2E414u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E414u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C2E414: lwz     r30, 8(r1)
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
label_80C2E418:
    ctx->pc = 0x80C2E418u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E418u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2E418: lwz     r0, 20(r1)
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
label_80C2E41C:
    ctx->pc = 0x80C2E41Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C2E41Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2E41C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2E420:
    ctx->pc = 0x80C2E420u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E420u)) return;
    // 80C2E420: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C2E424:
    ctx->pc = 0x80C2E424u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E424u)) return;
    // 80C2E424: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C2DE40;
        }
    }

label_80C2E428:
    ctx->pc = 0x80C2E428u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E428u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C2E428: stwu     r1, -16(r1)
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
label_80C2E42C:
    ctx->pc = 0x80C2E42Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E42Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C2E42C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2E430:
    ctx->pc = 0x80C2E430u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E430u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C2E430: stw     r0, 20(r1)
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
label_80C2E434:
    ctx->pc = 0x80C2E434u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E434u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2E434: stw     r31, 12(r1)
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
label_80C2E438:
    ctx->pc = 0x80C2E438u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E438u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2E438: stw     r30, 8(r1)
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
label_80C2E43C:
    ctx->pc = 0x80C2E43Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E43Cu)) return;
    // 80C2E43C: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80C2E440:
    ctx->pc = 0x80C2E440u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E440u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2E440: lwz     r31, 32(r3)
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
label_80C2E444:
    ctx->pc = 0x80C2E444u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E444u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C2E444: stw     r30, 48(r31)
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
label_80C2E448:
    ctx->pc = 0x80C2E448u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E448u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2E448: stw     r5, 52(r31)
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
label_80C2E44C:
    ctx->pc = 0x80C2E44Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E44Cu)) return;
    // 80C2E44C: cmpwi   r5, 0
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

label_80C2E450:
    ctx->pc = 0x80C2E450u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E450u)) return;
    // 80C2E450: bc    12, 1, 0x80C2E460
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C2E460;
        }
    }

label_80C2E454:
    ctx->pc = 0x80C2E454u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E454u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C2E454: lwz     r3, 16(r31)
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
label_80C2E458:
    ctx->pc = 0x80C2E458u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E458u)) return;
    // 80C2E458: bl      0x80509B94
    {
            ctx->lr = 0x80C2E45Cu;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80C2E45C:
    ctx->pc = 0x80C2E45Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E45Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C2E45C: stw     r30, 44(r31)
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
label_80C2E460:
    ctx->pc = 0x80C2E460u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E460u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2E460: lwz     r31, 12(r1)
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
label_80C2E464:
    ctx->pc = 0x80C2E464u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E464u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C2E464: lwz     r30, 8(r1)
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
label_80C2E468:
    ctx->pc = 0x80C2E468u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E468u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2E468: lwz     r0, 20(r1)
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
label_80C2E46C:
    ctx->pc = 0x80C2E46Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C2E46Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2E46C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2E470:
    ctx->pc = 0x80C2E470u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E470u)) return;
    // 80C2E470: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C2E474:
    ctx->pc = 0x80C2E474u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E474u)) return;
    // 80C2E474: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C2DE40;
        }
    }

label_80C2E478:
    ctx->pc = 0x80C2E478u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E478u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C2E478: stwu     r1, -16(r1)
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
label_80C2E47C:
    ctx->pc = 0x80C2E47Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E47Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C2E47C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2E480:
    ctx->pc = 0x80C2E480u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E480u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2E480: stw     r0, 20(r1)
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
label_80C2E484:
    ctx->pc = 0x80C2E484u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E484u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2E484: stw     r31, 12(r1)
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
label_80C2E488:
    ctx->pc = 0x80C2E488u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E488u)) return;
    // 80C2E488: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80C2E48C:
    ctx->pc = 0x80C2E48Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E48Cu)) return;
    // 80C2E48C: lis     r4, -27451
    ctx->gpr[4] = ((u32)(s32)(-27451) << 16);

label_80C2E490:
    ctx->pc = 0x80C2E490u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E490u)) return;
    // 80C2E490: addi    r4, r4, 8100
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8100);

label_80C2E494:
    ctx->pc = 0x80C2E494u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E494u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2E494: lwz     r0, 0(r4)
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
label_80C2E498:
    ctx->pc = 0x80C2E498u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E498u)) return;
    // 80C2E498: cmplwi  r0, 0x0000
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

label_80C2E49C:
    ctx->pc = 0x80C2E49Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E49Cu)) return;
    // 80C2E49C: bc    4, 2, 0x80C2E4C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C2E4C0;
        }
    }

label_80C2E4A0:
    ctx->pc = 0x80C2E4A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E4A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2E4A0: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80C2E4A4:
    ctx->pc = 0x80C2E4A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E4A4u)) return;
    // 80C2E4A4: bl      0x8050EEC0
    {
            ctx->lr = 0x80C2E4A8u;
            ctx->pc = 0x8050EEC0u;
            return;
    }

label_80C2E4A8:
    ctx->pc = 0x80C2E4A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E4A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80C2E4A8: lis     r4, -27451
    ctx->gpr[4] = ((u32)(s32)(-27451) << 16);

label_80C2E4AC:
    ctx->pc = 0x80C2E4ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E4ACu)) return;
    // 80C2E4AC: addi    r4, r4, 8100
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8100);

label_80C2E4B0:
    ctx->pc = 0x80C2E4B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E4B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C2E4B0: stw     r3, 0(r4)
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
label_80C2E4B4:
    ctx->pc = 0x80C2E4B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E4B4u)) return;
    // 80C2E4B4: lis     r3, -27451
    ctx->gpr[3] = ((u32)(s32)(-27451) << 16);

label_80C2E4B8:
    ctx->pc = 0x80C2E4B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E4B8u)) return;
    // 80C2E4B8: addi    r3, r3, 8096
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(8096);

label_80C2E4BC:
    ctx->pc = 0x80C2E4BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E4BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C2E4BC: stw     r31, 0(r3)
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
label_80C2E4C0:
    ctx->pc = 0x80C2E4C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E4C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C2E4C0: lwz     r31, 12(r1)
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
label_80C2E4C4:
    ctx->pc = 0x80C2E4C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E4C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2E4C4: lwz     r0, 20(r1)
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
label_80C2E4C8:
    ctx->pc = 0x80C2E4C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C2E4C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2E4C8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2E4CC:
    ctx->pc = 0x80C2E4CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E4CCu)) return;
    // 80C2E4CC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C2E4D0:
    ctx->pc = 0x80C2E4D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E4D0u)) return;
    // 80C2E4D0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C2DE40;
        }
    }

label_80C2E4D4:
    ctx->pc = 0x80C2E4D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E4D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C2E4D4: stwu     r1, -32(r1)
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
label_80C2E4D8:
    ctx->pc = 0x80C2E4D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E4D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C2E4D8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2E4DC:
    ctx->pc = 0x80C2E4DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E4DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C2E4DC: stw     r0, 36(r1)
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
label_80C2E4E0:
    ctx->pc = 0x80C2E4E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E4E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C2E4E0: stw     r31, 28(r1)
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
label_80C2E4E4:
    ctx->pc = 0x80C2E4E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E4E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2E4E4: stw     r30, 24(r1)
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
label_80C2E4E8:
    ctx->pc = 0x80C2E4E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E4E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2E4E8: stw     r29, 20(r1)
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
label_80C2E4EC:
    ctx->pc = 0x80C2E4ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E4ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C2E4EC: stw     r28, 16(r1)
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
label_80C2E4F0:
    ctx->pc = 0x80C2E4F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E4F0u)) return;
    // 80C2E4F0: lis     r3, -27451
    ctx->gpr[3] = ((u32)(s32)(-27451) << 16);

label_80C2E4F4:
    ctx->pc = 0x80C2E4F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E4F4u)) return;
    // 80C2E4F4: addi    r30, r3, 8100
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(8100);

label_80C2E4F8:
    ctx->pc = 0x80C2E4F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E4F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2E4F8: lwz     r0, 0(r30)
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
label_80C2E4FC:
    ctx->pc = 0x80C2E4FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E4FCu)) return;
    // 80C2E4FC: cmplwi  r0, 0x0000
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

label_80C2E500:
    ctx->pc = 0x80C2E500u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E500u)) return;
    // 80C2E500: bc    12, 2, 0x80C2E560
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C2E560;
        }
    }

label_80C2E504:
    ctx->pc = 0x80C2E504u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E504u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C2E504: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_80C2E508:
    ctx->pc = 0x80C2E508u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E508u)) return;
    // 80C2E508: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_80C2E50C:
    ctx->pc = 0x80C2E50Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E50Cu)) return;
    // 80C2E50C: lis     r3, -27451
    ctx->gpr[3] = ((u32)(s32)(-27451) << 16);

label_80C2E510:
    ctx->pc = 0x80C2E510u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E510u)) return;
    // 80C2E510: addi    r31, r3, 8096
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(8096);

label_80C2E514:
    ctx->pc = 0x80C2E514u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E514u)) return;
    // 80C2E514: b       0x80C2E534
    {
            goto label_80C2E534;
    }

label_80C2E518:
    ctx->pc = 0x80C2E518u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E518u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C2E518: lwz     r3, 0(r30)
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
label_80C2E51C:
    ctx->pc = 0x80C2E51Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E51Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2E51C: lwzx    r3, r3, r29
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
label_80C2E520:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E520u)) return;
    // 80C2E520: cmplwi  r3, 0x0000
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

label_80C2E524:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E524u)) return;
    // 80C2E524: bc    12, 2, 0x80C2E52C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C2E52C;
        }
    }

label_80C2E528:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E528u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2E528: bl      0x8050F9E0
    {
            ctx->lr = 0x80C2E52Cu;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80C2E52C:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E52Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2E52C: addi    r29, r29, 4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4);

label_80C2E530:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E530u)) return;
    // 80C2E530: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_80C2E534:
    ctx->pc = 0x80C2E534u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E534u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2E534: lwz     r0, 0(r31)
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
label_80C2E538:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E538u)) return;
    // 80C2E538: cmpw    r28, r0
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

label_80C2E53C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E53Cu)) return;
    // 80C2E53C: bc    12, 0, 0x80C2E518
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C2E518u;
                return;
            }
            goto label_80C2E518;
        }
    }

label_80C2E540:
    ctx->pc = 0x80C2E540u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E540u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C2E540: lis     r3, -27451
    ctx->gpr[3] = ((u32)(s32)(-27451) << 16);

label_80C2E544:
    ctx->pc = 0x80C2E544u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E544u)) return;
    // 80C2E544: addi    r3, r3, 8100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(8100);

label_80C2E548:
    ctx->pc = 0x80C2E548u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E548u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C2E548: lwz     r3, 0(r3)
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
label_80C2E54C:
    ctx->pc = 0x80C2E54Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E54Cu)) return;
    // 80C2E54C: bl      0x8050ED40
    {
            ctx->lr = 0x80C2E550u;
            ctx->pc = 0x8050ED40u;
            return;
    }

label_80C2E550:
    ctx->pc = 0x80C2E550u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E550u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C2E550: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80C2E554:
    ctx->pc = 0x80C2E554u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E554u)) return;
    // 80C2E554: lis     r3, -27451
    ctx->gpr[3] = ((u32)(s32)(-27451) << 16);

label_80C2E558:
    ctx->pc = 0x80C2E558u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E558u)) return;
    // 80C2E558: addi    r3, r3, 8100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(8100);

label_80C2E55C:
    ctx->pc = 0x80C2E55Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E55Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C2E55C: stw     r0, 0(r3)
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
label_80C2E560:
    ctx->pc = 0x80C2E560u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E560u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C2E560: lwz     r31, 28(r1)
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
label_80C2E564:
    ctx->pc = 0x80C2E564u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E564u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2E564: lwz     r30, 24(r1)
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
label_80C2E568:
    ctx->pc = 0x80C2E568u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E568u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2E568: lwz     r29, 20(r1)
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
label_80C2E56C:
    ctx->pc = 0x80C2E56Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E56Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C2E56C: lwz     r28, 16(r1)
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
label_80C2E570:
    ctx->pc = 0x80C2E570u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E570u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2E570: lwz     r0, 36(r1)
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
label_80C2E574:
    ctx->pc = 0x80C2E574u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C2E574u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2E574: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2E578:
    ctx->pc = 0x80C2E578u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E578u)) return;
    // 80C2E578: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80C2E57C:
    ctx->pc = 0x80C2E57Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E57Cu)) return;
    // 80C2E57C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C2DE40;
        }
    }

label_80C2E580:
    ctx->pc = 0x80C2E580u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E580u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C2E580: stwu     r1, -16(r1)
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
label_80C2E584:
    ctx->pc = 0x80C2E584u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E584u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2E584: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2E588:
    ctx->pc = 0x80C2E588u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E588u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2E588: stw     r0, 20(r1)
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
label_80C2E58C:
    ctx->pc = 0x80C2E58Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E58Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C2E58C: stw     r31, 12(r1)
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
label_80C2E590:
    ctx->pc = 0x80C2E590u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E590u)) return;
    // 80C2E590: lis     r6, -27451
    ctx->gpr[6] = ((u32)(s32)(-27451) << 16);

label_80C2E594:
    ctx->pc = 0x80C2E594u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E594u)) return;
    // 80C2E594: addi    r6, r6, 8096
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(8096);

label_80C2E598:
    ctx->pc = 0x80C2E598u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E598u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2E598: lwz     r0, 0(r6)
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
label_80C2E59C:
    ctx->pc = 0x80C2E59Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E59Cu)) return;
    // 80C2E59C: cmpw    r3, r0
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

label_80C2E5A0:
    ctx->pc = 0x80C2E5A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E5A0u)) return;
    // 80C2E5A0: bc    4, 0, 0x80C2E5DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C2E5DC;
        }
    }

label_80C2E5A4:
    ctx->pc = 0x80C2E5A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E5A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C2E5A4: lis     r6, -27451
    ctx->gpr[6] = ((u32)(s32)(-27451) << 16);

label_80C2E5A8:
    ctx->pc = 0x80C2E5A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E5A8u)) return;
    // 80C2E5A8: addi    r6, r6, 8100
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(8100);

label_80C2E5AC:
    ctx->pc = 0x80C2E5ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E5ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2E5AC: lwz     r6, 0(r6)
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
label_80C2E5B0:
    ctx->pc = 0x80C2E5B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E5B0u)) return;
    // 80C2E5B0: rlwinm r31, r3, 2, 0, 29
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80C2E5B4:
    ctx->pc = 0x80C2E5B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E5B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2E5B4: lwzx    r0, r6, r31
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
label_80C2E5B8:
    ctx->pc = 0x80C2E5B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E5B8u)) return;
    // 80C2E5B8: cmplwi  r0, 0x0000
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

label_80C2E5BC:
    ctx->pc = 0x80C2E5BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E5BCu)) return;
    // 80C2E5BC: bc    4, 2, 0x80C2E5DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C2E5DC;
        }
    }

label_80C2E5C0:
    ctx->pc = 0x80C2E5C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E5C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C2E5C0: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80C2E5C4:
    ctx->pc = 0x80C2E5C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E5C4u)) return;
    // 80C2E5C4: or   r4, r5, r5
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80C2E5C8:
    ctx->pc = 0x80C2E5C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E5C8u)) return;
    // 80C2E5C8: bl      0x80C2E2CC
    {
            ctx->lr = 0x80C2E5CCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C2E2CCu;
                return;
            }
            goto label_80C2E2CC;
    }

label_80C2E5CC:
    ctx->pc = 0x80C2E5CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E5CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C2E5CC: lis     r4, -27451
    ctx->gpr[4] = ((u32)(s32)(-27451) << 16);

label_80C2E5D0:
    ctx->pc = 0x80C2E5D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E5D0u)) return;
    // 80C2E5D0: addi    r4, r4, 8100
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8100);

label_80C2E5D4:
    ctx->pc = 0x80C2E5D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E5D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C2E5D4: lwz     r4, 0(r4)
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
label_80C2E5D8:
    ctx->pc = 0x80C2E5D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E5D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C2E5D8: stwx    r3, r4, r31
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
label_80C2E5DC:
    ctx->pc = 0x80C2E5DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E5DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C2E5DC: lwz     r31, 12(r1)
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
label_80C2E5E0:
    ctx->pc = 0x80C2E5E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E5E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2E5E0: lwz     r0, 20(r1)
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
label_80C2E5E4:
    ctx->pc = 0x80C2E5E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C2E5E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2E5E4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2E5E8:
    ctx->pc = 0x80C2E5E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E5E8u)) return;
    // 80C2E5E8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C2E5EC:
    ctx->pc = 0x80C2E5ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E5ECu)) return;
    // 80C2E5EC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C2DE40;
        }
    }

label_80C2E5F0:
    ctx->pc = 0x80C2E5F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E5F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C2E5F0: stwu     r1, -16(r1)
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
label_80C2E5F4:
    ctx->pc = 0x80C2E5F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E5F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2E5F4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2E5F8:
    ctx->pc = 0x80C2E5F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E5F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2E5F8: stw     r0, 20(r1)
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
label_80C2E5FC:
    ctx->pc = 0x80C2E5FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E5FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C2E5FC: stw     r31, 12(r1)
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
label_80C2E600:
    ctx->pc = 0x80C2E600u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E600u)) return;
    // 80C2E600: lis     r4, -27451
    ctx->gpr[4] = ((u32)(s32)(-27451) << 16);

label_80C2E604:
    ctx->pc = 0x80C2E604u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E604u)) return;
    // 80C2E604: addi    r4, r4, 8096
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8096);

label_80C2E608:
    ctx->pc = 0x80C2E608u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E608u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2E608: lwz     r0, 0(r4)
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
label_80C2E60C:
    ctx->pc = 0x80C2E60Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E60Cu)) return;
    // 80C2E60C: cmpw    r3, r0
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

label_80C2E610:
    ctx->pc = 0x80C2E610u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E610u)) return;
    // 80C2E610: bc    4, 0, 0x80C2E648
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C2E648;
        }
    }

label_80C2E614:
    ctx->pc = 0x80C2E614u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E614u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C2E614: lis     r4, -27451
    ctx->gpr[4] = ((u32)(s32)(-27451) << 16);

label_80C2E618:
    ctx->pc = 0x80C2E618u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E618u)) return;
    // 80C2E618: addi    r4, r4, 8100
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8100);

label_80C2E61C:
    ctx->pc = 0x80C2E61Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E61Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2E61C: lwz     r4, 0(r4)
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
label_80C2E620:
    ctx->pc = 0x80C2E620u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E620u)) return;
    // 80C2E620: rlwinm r31, r3, 2, 0, 29
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80C2E624:
    ctx->pc = 0x80C2E624u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E624u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2E624: lwzx    r3, r4, r31
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
label_80C2E628:
    ctx->pc = 0x80C2E628u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E628u)) return;
    // 80C2E628: cmplwi  r3, 0x0000
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

label_80C2E62C:
    ctx->pc = 0x80C2E62Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E62Cu)) return;
    // 80C2E62C: bc    12, 2, 0x80C2E648
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C2E648;
        }
    }

label_80C2E630:
    ctx->pc = 0x80C2E630u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E630u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2E630: bl      0x8050F9E0
    {
            ctx->lr = 0x80C2E634u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80C2E634:
    ctx->pc = 0x80C2E634u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E634u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C2E634: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80C2E638:
    ctx->pc = 0x80C2E638u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E638u)) return;
    // 80C2E638: lis     r3, -27451
    ctx->gpr[3] = ((u32)(s32)(-27451) << 16);

label_80C2E63C:
    ctx->pc = 0x80C2E63Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E63Cu)) return;
    // 80C2E63C: addi    r3, r3, 8100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(8100);

label_80C2E640:
    ctx->pc = 0x80C2E640u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E640u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C2E640: lwz     r3, 0(r3)
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
label_80C2E644:
    ctx->pc = 0x80C2E644u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E644u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C2E644: stwx    r0, r3, r31
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
label_80C2E648:
    ctx->pc = 0x80C2E648u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E648u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C2E648: lwz     r31, 12(r1)
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
label_80C2E64C:
    ctx->pc = 0x80C2E64Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E64Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2E64C: lwz     r0, 20(r1)
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
label_80C2E650:
    ctx->pc = 0x80C2E650u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C2E650u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2E650: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2E654:
    ctx->pc = 0x80C2E654u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E654u)) return;
    // 80C2E654: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C2E658:
    ctx->pc = 0x80C2E658u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E658u)) return;
    // 80C2E658: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C2DE40;
        }
    }

label_80C2E65C:
    ctx->pc = 0x80C2E65Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E65Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2E65C: stwu     r1, -16(r1)
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
label_80C2E660:
    ctx->pc = 0x80C2E660u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E660u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2E660: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2E664:
    ctx->pc = 0x80C2E664u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E664u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C2E664: stw     r0, 20(r1)
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
label_80C2E668:
    ctx->pc = 0x80C2E668u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E668u)) return;
    // 80C2E668: lis     r6, -27451
    ctx->gpr[6] = ((u32)(s32)(-27451) << 16);

label_80C2E66C:
    ctx->pc = 0x80C2E66Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E66Cu)) return;
    // 80C2E66C: addi    r6, r6, 8096
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(8096);

label_80C2E670:
    ctx->pc = 0x80C2E670u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E670u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2E670: lwz     r0, 0(r6)
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
label_80C2E674:
    ctx->pc = 0x80C2E674u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E674u)) return;
    // 80C2E674: cmpw    r3, r0
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

label_80C2E678:
    ctx->pc = 0x80C2E678u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E678u)) return;
    // 80C2E678: bc    4, 0, 0x80C2E69C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C2E69C;
        }
    }

label_80C2E67C:
    ctx->pc = 0x80C2E67Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E67Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C2E67C: lis     r6, -27451
    ctx->gpr[6] = ((u32)(s32)(-27451) << 16);

label_80C2E680:
    ctx->pc = 0x80C2E680u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E680u)) return;
    // 80C2E680: addi    r6, r6, 8100
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(8100);

label_80C2E684:
    ctx->pc = 0x80C2E684u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E684u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2E684: lwz     r6, 0(r6)
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
label_80C2E688:
    ctx->pc = 0x80C2E688u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E688u)) return;
    // 80C2E688: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80C2E68C:
    ctx->pc = 0x80C2E68Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E68Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2E68C: lwzx    r3, r6, r0
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
label_80C2E690:
    ctx->pc = 0x80C2E690u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E690u)) return;
    // 80C2E690: cmplwi  r3, 0x0000
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

label_80C2E694:
    ctx->pc = 0x80C2E694u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E694u)) return;
    // 80C2E694: bc    12, 2, 0x80C2E69C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C2E69C;
        }
    }

label_80C2E698:
    ctx->pc = 0x80C2E698u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E698u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2E698: bl      0x80C2E388
    {
            ctx->lr = 0x80C2E69Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C2E388u;
                return;
            }
            goto label_80C2E388;
    }

label_80C2E69C:
    ctx->pc = 0x80C2E69Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E69Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2E69C: lwz     r0, 20(r1)
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
label_80C2E6A0:
    ctx->pc = 0x80C2E6A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C2E6A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2E6A0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2E6A4:
    ctx->pc = 0x80C2E6A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E6A4u)) return;
    // 80C2E6A4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C2E6A8:
    ctx->pc = 0x80C2E6A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E6A8u)) return;
    // 80C2E6A8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C2DE40;
        }
    }

label_80C2E6AC:
    ctx->pc = 0x80C2E6ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E6ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2E6AC: stwu     r1, -16(r1)
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
label_80C2E6B0:
    ctx->pc = 0x80C2E6B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E6B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2E6B0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2E6B4:
    ctx->pc = 0x80C2E6B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E6B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C2E6B4: stw     r0, 20(r1)
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
label_80C2E6B8:
    ctx->pc = 0x80C2E6B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E6B8u)) return;
    // 80C2E6B8: lis     r6, -27451
    ctx->gpr[6] = ((u32)(s32)(-27451) << 16);

label_80C2E6BC:
    ctx->pc = 0x80C2E6BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E6BCu)) return;
    // 80C2E6BC: addi    r6, r6, 8096
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(8096);

label_80C2E6C0:
    ctx->pc = 0x80C2E6C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E6C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2E6C0: lwz     r0, 0(r6)
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
label_80C2E6C4:
    ctx->pc = 0x80C2E6C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E6C4u)) return;
    // 80C2E6C4: cmpw    r3, r0
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

label_80C2E6C8:
    ctx->pc = 0x80C2E6C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E6C8u)) return;
    // 80C2E6C8: bc    4, 0, 0x80C2E6EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C2E6EC;
        }
    }

label_80C2E6CC:
    ctx->pc = 0x80C2E6CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E6CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C2E6CC: lis     r6, -27451
    ctx->gpr[6] = ((u32)(s32)(-27451) << 16);

label_80C2E6D0:
    ctx->pc = 0x80C2E6D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E6D0u)) return;
    // 80C2E6D0: addi    r6, r6, 8100
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(8100);

label_80C2E6D4:
    ctx->pc = 0x80C2E6D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E6D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2E6D4: lwz     r6, 0(r6)
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
label_80C2E6D8:
    ctx->pc = 0x80C2E6D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E6D8u)) return;
    // 80C2E6D8: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80C2E6DC:
    ctx->pc = 0x80C2E6DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E6DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2E6DC: lwzx    r3, r6, r0
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
label_80C2E6E0:
    ctx->pc = 0x80C2E6E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E6E0u)) return;
    // 80C2E6E0: cmplwi  r3, 0x0000
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

label_80C2E6E4:
    ctx->pc = 0x80C2E6E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E6E4u)) return;
    // 80C2E6E4: bc    12, 2, 0x80C2E6EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C2E6EC;
        }
    }

label_80C2E6E8:
    ctx->pc = 0x80C2E6E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E6E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2E6E8: bl      0x80C2E3D8
    {
            ctx->lr = 0x80C2E6ECu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C2E3D8u;
                return;
            }
            goto label_80C2E3D8;
    }

label_80C2E6EC:
    ctx->pc = 0x80C2E6ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E6ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2E6EC: lwz     r0, 20(r1)
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
label_80C2E6F0:
    ctx->pc = 0x80C2E6F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C2E6F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2E6F0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2E6F4:
    ctx->pc = 0x80C2E6F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E6F4u)) return;
    // 80C2E6F4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C2E6F8:
    ctx->pc = 0x80C2E6F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E6F8u)) return;
    // 80C2E6F8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C2DE40;
        }
    }

label_80C2E6FC:
    ctx->pc = 0x80C2E6FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E6FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2E6FC: stwu     r1, -16(r1)
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
label_80C2E700:
    ctx->pc = 0x80C2E700u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E700u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2E700: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2E704:
    ctx->pc = 0x80C2E704u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E704u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C2E704: stw     r0, 20(r1)
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
label_80C2E708:
    ctx->pc = 0x80C2E708u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E708u)) return;
    // 80C2E708: lis     r6, -27451
    ctx->gpr[6] = ((u32)(s32)(-27451) << 16);

label_80C2E70C:
    ctx->pc = 0x80C2E70Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E70Cu)) return;
    // 80C2E70C: addi    r6, r6, 8096
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(8096);

label_80C2E710:
    ctx->pc = 0x80C2E710u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E710u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2E710: lwz     r0, 0(r6)
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
label_80C2E714:
    ctx->pc = 0x80C2E714u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E714u)) return;
    // 80C2E714: cmpw    r3, r0
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

label_80C2E718:
    ctx->pc = 0x80C2E718u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E718u)) return;
    // 80C2E718: bc    4, 0, 0x80C2E73C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C2E73C;
        }
    }

label_80C2E71C:
    ctx->pc = 0x80C2E71Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E71Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C2E71C: lis     r6, -27451
    ctx->gpr[6] = ((u32)(s32)(-27451) << 16);

label_80C2E720:
    ctx->pc = 0x80C2E720u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E720u)) return;
    // 80C2E720: addi    r6, r6, 8100
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(8100);

label_80C2E724:
    ctx->pc = 0x80C2E724u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E724u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2E724: lwz     r6, 0(r6)
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
label_80C2E728:
    ctx->pc = 0x80C2E728u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E728u)) return;
    // 80C2E728: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80C2E72C:
    ctx->pc = 0x80C2E72Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E72Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2E72C: lwzx    r3, r6, r0
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
label_80C2E730:
    ctx->pc = 0x80C2E730u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E730u)) return;
    // 80C2E730: cmplwi  r3, 0x0000
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

label_80C2E734:
    ctx->pc = 0x80C2E734u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E734u)) return;
    // 80C2E734: bc    12, 2, 0x80C2E73C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C2E73C;
        }
    }

label_80C2E738:
    ctx->pc = 0x80C2E738u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E738u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2E738: bl      0x80C2E428
    {
            ctx->lr = 0x80C2E73Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C2E428u;
                return;
            }
            goto label_80C2E428;
    }

label_80C2E73C:
    ctx->pc = 0x80C2E73Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E73Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2E73C: lwz     r0, 20(r1)
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
label_80C2E740:
    ctx->pc = 0x80C2E740u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C2E740u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2E740: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2E744:
    ctx->pc = 0x80C2E744u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E744u)) return;
    // 80C2E744: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C2E748:
    ctx->pc = 0x80C2E748u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E748u)) return;
    // 80C2E748: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C2DE40;
        }
    }

label_80C2E74C:
    ctx->pc = 0x80C2E74Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E74Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C2E74C: stwu     r1, -32(r1)
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
label_80C2E750:
    ctx->pc = 0x80C2E750u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E750u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C2E750: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2E754:
    ctx->pc = 0x80C2E754u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E754u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C2E754: stw     r0, 36(r1)
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
label_80C2E758:
    ctx->pc = 0x80C2E758u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E758u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C2E758: stw     r31, 28(r1)
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
label_80C2E75C:
    ctx->pc = 0x80C2E75Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E75Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C2E75C: stw     r30, 24(r1)
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
label_80C2E760:
    ctx->pc = 0x80C2E760u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E760u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2E760: stw     r29, 20(r1)
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
label_80C2E764:
    ctx->pc = 0x80C2E764u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E764u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2E764: stw     r28, 16(r1)
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
label_80C2E768:
    ctx->pc = 0x80C2E768u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E768u)) return;
    // 80C2E768: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80C2E76C:
    ctx->pc = 0x80C2E76Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E76Cu)) return;
    // 80C2E76C: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80C2E770:
    ctx->pc = 0x80C2E770u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E770u)) return;
    // 80C2E770: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80C2E774:
    ctx->pc = 0x80C2E774u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E774u)) return;
    // 80C2E774: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_80C2E778:
    ctx->pc = 0x80C2E778u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E778u)) return;
    // 80C2E778: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C2E77C:
    ctx->pc = 0x80C2E77Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E77Cu)) return;
    // 80C2E77C: bl      0x80401DB0
    {
            ctx->lr = 0x80C2E780u;
            ctx->pc = 0x80401DB0u;
            return;
    }

label_80C2E780:
    ctx->pc = 0x80C2E780u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E780u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C2E780: lis     r4, -27451
    ctx->gpr[4] = ((u32)(s32)(-27451) << 16);

label_80C2E784:
    ctx->pc = 0x80C2E784u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E784u)) return;
    // 80C2E784: addi    r4, r4, 8104
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8104);

label_80C2E788:
    ctx->pc = 0x80C2E788u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E788u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2E788: lwz     r0, 0(r4)
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
label_80C2E78C:
    ctx->pc = 0x80C2E78Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E78Cu)) return;
    // 80C2E78C: add   r4, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80C2E790:
    ctx->pc = 0x80C2E790u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E790u)) return;
    // 80C2E790: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80C2E794:
    ctx->pc = 0x80C2E794u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E794u)) return;
    // 80C2E794: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80C2E798:
    ctx->pc = 0x80C2E798u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E798u)) return;
    // 80C2E798: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80C2E79C:
    ctx->pc = 0x80C2E79Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E79Cu)) return;
    // 80C2E79C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C2E7A0:
    ctx->pc = 0x80C2E7A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E7A0u)) return;
    // 80C2E7A0: li      r7, 120
    ctx->gpr[7] = (u32)(s32)(120);

label_80C2E7A4:
    ctx->pc = 0x80C2E7A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E7A4u)) return;
    // 80C2E7A4: bl      0x8050A0D4
    {
            ctx->lr = 0x80C2E7A8u;
            ctx->pc = 0x8050A0D4u;
            return;
    }

label_80C2E7A8:
    ctx->pc = 0x80C2E7A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E7A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C2E7A8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80C2E7AC:
    ctx->pc = 0x80C2E7ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E7ACu)) return;
    // 80C2E7AC: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80C2E7B0:
    ctx->pc = 0x80C2E7B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E7B0u)) return;
    // 80C2E7B0: bl      0x80509C74
    {
            ctx->lr = 0x80C2E7B4u;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80C2E7B4:
    ctx->pc = 0x80C2E7B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E7B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C2E7B4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80C2E7B8:
    ctx->pc = 0x80C2E7B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E7B8u)) return;
    // 80C2E7B8: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80C2E7BC:
    ctx->pc = 0x80C2E7BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E7BCu)) return;
    // 80C2E7BC: bl      0x80509BF8
    {
            ctx->lr = 0x80C2E7C0u;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80C2E7C0:
    ctx->pc = 0x80C2E7C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E7C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C2E7C0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80C2E7C4:
    ctx->pc = 0x80C2E7C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E7C4u)) return;
    // 80C2E7C4: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80C2E7C8:
    ctx->pc = 0x80C2E7C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E7C8u)) return;
    // 80C2E7C8: bl      0x80509B94
    {
            ctx->lr = 0x80C2E7CCu;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80C2E7CC:
    ctx->pc = 0x80C2E7CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2E7CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80C2E7CC: lis     r3, -27451
    ctx->gpr[3] = ((u32)(s32)(-27451) << 16);

label_80C2E7D0:
    ctx->pc = 0x80C2E7D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E7D0u)) return;
    // 80C2E7D0: addi    r4, r3, 8104
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(8104);

label_80C2E7D4:
    ctx->pc = 0x80C2E7D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E7D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C2E7D4: lwz     r3, 0(r4)
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
label_80C2E7D8:
    ctx->pc = 0x80C2E7D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E7D8u)) return;
    // 80C2E7D8: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_80C2E7DC:
    ctx->pc = 0x80C2E7DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E7DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C2E7DC: stw     r0, 0(r4)
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
label_80C2E7E0:
    ctx->pc = 0x80C2E7E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E7E0u)) return;
    // 80C2E7E0: rlwinm r0, r0, 0, 27, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000001Fu;
    }

label_80C2E7E4:
    ctx->pc = 0x80C2E7E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E7E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C2E7E4: stw     r0, 0(r4)
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
label_80C2E7E8:
    ctx->pc = 0x80C2E7E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E7E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C2E7E8: lwz     r31, 28(r1)
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
label_80C2E7EC:
    ctx->pc = 0x80C2E7ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E7ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2E7EC: lwz     r30, 24(r1)
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
label_80C2E7F0:
    ctx->pc = 0x80C2E7F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E7F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2E7F0: lwz     r29, 20(r1)
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
label_80C2E7F4:
    ctx->pc = 0x80C2E7F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E7F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C2E7F4: lwz     r28, 16(r1)
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
label_80C2E7F8:
    ctx->pc = 0x80C2E7F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E7F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2E7F8: lwz     r0, 36(r1)
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
label_80C2E7FC:
    ctx->pc = 0x80C2E7FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C2E7FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2E7FC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2E800:
    ctx->pc = 0x80C2E800u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E800u)) return;
    // 80C2E800: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80C2E804:
    ctx->pc = 0x80C2E804u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2E804u)) return;
    // 80C2E804: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C2DE40;
        }
    }

    ctx->pc = 0x80C2E808u;
    return;
return_dispatch_80C2DE40:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80C2DE74u: goto label_80C2DE74;
    case 0x80C2DE78u: goto label_80C2DE78;
    case 0x80C2DE7Cu: goto label_80C2DE7C;
    case 0x80C2DE84u: goto label_80C2DE84;
    case 0x80C2DE8Cu: goto label_80C2DE8C;
    case 0x80C2DEB4u: goto label_80C2DEB4;
    case 0x80C2DEBCu: goto label_80C2DEBC;
    case 0x80C2DED0u: goto label_80C2DED0;
    case 0x80C2DED8u: goto label_80C2DED8;
    case 0x80C2DF18u: goto label_80C2DF18;
    case 0x80C2DF20u: goto label_80C2DF20;
    case 0x80C2DF50u: goto label_80C2DF50;
    case 0x80C2DF68u: goto label_80C2DF68;
    case 0x80C2DF70u: goto label_80C2DF70;
    case 0x80C2DF78u: goto label_80C2DF78;
    case 0x80C2DF7Cu: goto label_80C2DF7C;
    case 0x80C2DF84u: goto label_80C2DF84;
    case 0x80C2DFACu: goto label_80C2DFAC;
    case 0x80C2DFB4u: goto label_80C2DFB4;
    case 0x80C2DFB8u: goto label_80C2DFB8;
    case 0x80C2DFC0u: goto label_80C2DFC0;
    case 0x80C2DFCCu: goto label_80C2DFCC;
    case 0x80C2DFD4u: goto label_80C2DFD4;
    case 0x80C2DFFCu: goto label_80C2DFFC;
    case 0x80C2E004u: goto label_80C2E004;
    case 0x80C2E034u: goto label_80C2E034;
    case 0x80C2E04Cu: goto label_80C2E04C;
    case 0x80C2E054u: goto label_80C2E054;
    case 0x80C2E05Cu: goto label_80C2E05C;
    case 0x80C2E084u: goto label_80C2E084;
    case 0x80C2E08Cu: goto label_80C2E08C;
    case 0x80C2E0BCu: goto label_80C2E0BC;
    case 0x80C2E0D8u: goto label_80C2E0D8;
    case 0x80C2E0E0u: goto label_80C2E0E0;
    case 0x80C2E0E8u: goto label_80C2E0E8;
    case 0x80C2E0ECu: goto label_80C2E0EC;
    case 0x80C2E0F4u: goto label_80C2E0F4;
    case 0x80C2E100u: goto label_80C2E100;
    case 0x80C2E108u: goto label_80C2E108;
    case 0x80C2E130u: goto label_80C2E130;
    case 0x80C2E138u: goto label_80C2E138;
    case 0x80C2E140u: goto label_80C2E140;
    case 0x80C2E144u: goto label_80C2E144;
    case 0x80C2E14Cu: goto label_80C2E14C;
    case 0x80C2E158u: goto label_80C2E158;
    case 0x80C2E160u: goto label_80C2E160;
    case 0x80C2E188u: goto label_80C2E188;
    case 0x80C2E190u: goto label_80C2E190;
    case 0x80C2E194u: goto label_80C2E194;
    case 0x80C2E198u: goto label_80C2E198;
    case 0x80C2E1C0u: goto label_80C2E1C0;
    case 0x80C2E220u: goto label_80C2E220;
    case 0x80C2E260u: goto label_80C2E260;
    case 0x80C2E2A0u: goto label_80C2E2A0;
    case 0x80C2E2FCu: goto label_80C2E2FC;
    case 0x80C2E320u: goto label_80C2E320;
    case 0x80C2E3BCu: goto label_80C2E3BC;
    case 0x80C2E40Cu: goto label_80C2E40C;
    case 0x80C2E45Cu: goto label_80C2E45C;
    case 0x80C2E4A8u: goto label_80C2E4A8;
    case 0x80C2E52Cu: goto label_80C2E52C;
    case 0x80C2E550u: goto label_80C2E550;
    case 0x80C2E5CCu: goto label_80C2E5CC;
    case 0x80C2E634u: goto label_80C2E634;
    case 0x80C2E69Cu: goto label_80C2E69C;
    case 0x80C2E6ECu: goto label_80C2E6EC;
    case 0x80C2E73Cu: goto label_80C2E73C;
    case 0x80C2E780u: goto label_80C2E780;
    case 0x80C2E7A8u: goto label_80C2E7A8;
    case 0x80C2E7B4u: goto label_80C2E7B4;
    case 0x80C2E7C0u: goto label_80C2E7C0;
    case 0x80C2E7CCu: goto label_80C2E7CC;
    default: return;
    }
}

